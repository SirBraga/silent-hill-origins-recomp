#include "ps2_thread_cpu.h"
#include "ThreadNaming.h"
#include <pthread.h>
#include "runtime/ps2_wait_stats.h"
#include "runtime/ps2_memory.h"
#include <cstdio>
#include <cstdlib>
#include <atomic>
#include "runtime/ps2_address.h"
#include "runtime/gs/gs_frontend.h"
#include "ps2_log.h"
#include <cstring>
#include <limits>
#include <stdexcept>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <condition_variable>
#include <deque>
#include <mutex>
#include <thread>

std::atomic<uint64_t> g_ps2xWaitNs[kPs2xWaitKinds];
// Time on the VIF1/VU1 thread in VU1 microprograms (including their XGKICKs) and in the GS front end for any GIF path,
// for the [cpu] line: the rest of that thread is VIF1 command processing.
std::atomic<uint64_t> g_ps2xVu1RunNs{0}, g_ps2xGifSubmitNs{0};
std::atomic<uint64_t> g_ps2xVblankLateMaxNs{0}, g_ps2xVblankRebased{0}, g_ps2xGsFinishNs{0}, g_ps2xVif1KickNs{0}, g_ps2xVif1DoneNs{0};
Ps2xMark g_ps2xMarks[256];
std::atomic<uint32_t> g_ps2xMarkCount{0};
std::atomic<bool> g_ps2xDmacCompletionQueued{false};
std::atomic<uint64_t> g_ps2xVblanks{0}, g_ps2xPresents{0};
std::atomic<bool> g_ps2xPresentArmed{false};
std::atomic<uint64_t> g_ps2xMpegPictures{0};

namespace
{
    inline void inRange(uint32_t offset, size_t bytes, size_t regionSize, const char *op, uint32_t address)
    {
        if (static_cast<uint64_t>(offset) + static_cast<uint64_t>(bytes) > static_cast<uint64_t>(regionSize))
        {
            throw std::runtime_error(std::string(op) + " out-of-bounds at address: 0x" + std::to_string(address));
        }
    }

    template <typename T>
    inline T loadScalar(const uint8_t *base, uint32_t offset, size_t regionSize, const char *op, uint32_t address)
    {
        inRange(offset, sizeof(T), regionSize, op, address);
        T value{};
        std::memcpy(&value, base + offset, sizeof(T));
        return value;
    }

    template <typename T>
    inline void storeScalar(uint8_t *base, uint32_t offset, size_t regionSize, T value, const char *op, uint32_t address)
    {
        inRange(offset, sizeof(T), regionSize, op, address);
        std::memcpy(base + offset, &value, sizeof(T));
    }

    inline bool isGsPrivReg(uint32_t addr)
    {
        return Ps2AddressInRange(addr, PS2_GS_PRIV_REG_BASE, PS2_GS_PRIV_REG_SIZE);
    }

    inline bool isIoRegister(uint32_t addr)
    {
        return Ps2AddressInRange(addr, PS2_IO_BASE, PS2_IO_SIZE);
    }

    inline uint64_t *gsRegPtr(GSRegisters &gs, uint32_t addr)
    {
        // Support both 64-bit base offsets and +4 dword aliases.
        uint32_t off = (addr - PS2_GS_PRIV_REG_BASE) & ~0x7u;
        switch (off)
        {
        case 0x0000:
            return &gs.pmode;
        case 0x0010:
            return &gs.smode1;
        case 0x0020:
            return &gs.smode2;
        case 0x0030:
            return &gs.srfsh;
        case 0x0040:
            return &gs.synch1;
        case 0x0050:
            return &gs.synch2;
        case 0x0060:
            return &gs.syncv;
        case 0x0070:
            return &gs.dispfb1;
        case 0x0080:
            return &gs.display1;
        case 0x0090:
            return &gs.dispfb2;
        case 0x00A0:
            return &gs.display2;
        case 0x00B0:
            return &gs.extbuf;
        case 0x00C0:
            return &gs.extdata;
        case 0x00D0:
            return &gs.extwrite;
        case 0x00E0:
            return &gs.bgcolor;
        // CSR (offset 0x1000) is intentionally not handled here: it is
        // std::atomic<uint64_t> and no longer converts to uint64_t*. Callers must
        // check for offset 0x1000 themselves and go through writeCsrHalf/
        // writeCsrFull/gs.csr.load() instead of gsRegPtr().
        case 0x1010:
            return &gs.imr;
        case 0x1040:
            return &gs.busdir;
        case 0x1080:
            return &gs.siglblid;
        default:
            return nullptr;
        }
    }

    constexpr uint32_t kGsCsrRegOffset = 0x1000u;

    // Atomically apply a 32-bit write to one half (off=0 low dword, off=4 high
    // dword) of the GS CSR register. Bits 0..1 of the low dword (SIGNAL/FINISH) are
    // write-one-to-clear; everything else is a plain merge. Uses compare_exchange
    // so the whole read-modify-write is a single atomic step -- this register is
    // also touched by the vsync worker (FIELD bit) and the GIF (SIGNAL/FINISH) on
    // other threads, so a load-then-store here would race with them.
    inline void writeCsrHalf(std::atomic<uint64_t> &csr, uint32_t off, uint32_t value)
    {
        constexpr uint32_t kW1cMask = 0x3u;
        uint64_t expected = csr.load();
        uint64_t desired;
        do
        {
            if (off == 0u)
            {
                uint32_t oldLow = static_cast<uint32_t>(expected & 0xFFFFFFFFull);
                uint32_t mergedLow = (oldLow & kW1cMask) | (value & ~kW1cMask);
                desired = (expected & 0xFFFFFFFF00000000ull) | static_cast<uint64_t>(mergedLow);
                desired &= ~static_cast<uint64_t>(value & kW1cMask);
            }
            else
            {
                uint64_t mask = 0xFFFFFFFFull << (off * 8u);
                desired = (expected & ~mask) | (static_cast<uint64_t>(value) << (off * 8u));
            }
        } while (!csr.compare_exchange_weak(expected, desired));
    }

    // Same as writeCsrHalf but for a full 64-bit CSR write (bits 0..1 are still
    // write-one-to-clear against the current value).
    inline void writeCsrFull(std::atomic<uint64_t> &csr, uint64_t value)
    {
        constexpr uint64_t kW1cMask = 0x3ull;
        uint64_t expected = csr.load();
        uint64_t desired;
        do
        {
            desired = (expected & kW1cMask) | (value & ~kW1cMask);
            desired &= ~(value & kW1cMask);
        } while (!csr.compare_exchange_weak(expected, desired));
    }

    constexpr std::array<uint32_t, 4> kEeTimerBases = {
        0x10000000u,
        0x10000800u,
        0x10001000u,
        0x10001800u,
    };
    constexpr uint32_t kEeTimerCountOffset = 0x00u;
    constexpr uint32_t kEeTimerModeOffset = 0x10u;
    constexpr uint32_t kEeTimerCompareOffset = 0x20u;
    constexpr uint32_t kEeTimerHoldOffset = 0x30u;
    constexpr uint32_t kEeTimerModeClksMask = 0x3u;
    constexpr uint32_t kEeTimerModeConfigMask = 0x3FFu;
    constexpr uint32_t kEeTimerModeStatusMask = 0xC00u;
    constexpr uint32_t kEeTimerModeZret = 1u << 6;
    constexpr uint32_t kEeTimerModeCue = 1u << 7;
    constexpr uint32_t kEeTimerModeCmpe = 1u << 8;
    constexpr uint32_t kEeTimerModeOvfe = 1u << 9;
    constexpr uint32_t kEeTimerModeEquf = 1u << 10;
    constexpr uint32_t kEeTimerModeOvff = 1u << 11;
    constexpr uint64_t kEeClockHz = 294912000ull;
    constexpr std::array<uint64_t, 4> kEeTimerClockHz = {
        147456000ull,
        9216000ull,
        576000ull,
        15734ull,
    };

    inline bool decodeEeTimerRegister(uint32_t address, size_t &timerIndex, uint32_t &offset)
    {
        for (size_t index = 0; index < kEeTimerBases.size(); ++index)
        {
            const uint32_t candidateOffset = address - kEeTimerBases[index];
            if (candidateOffset == kEeTimerCountOffset ||
                candidateOffset == kEeTimerModeOffset ||
                candidateOffset == kEeTimerCompareOffset ||
                (index < 2u && candidateOffset == kEeTimerHoldOffset))
            {
                timerIndex = index;
                offset = candidateOffset;
                return true;
            }
        }
        return false;
    }

    constexpr uint64_t ticksUntilMatch(uint32_t count, uint32_t target)
    {
        const uint32_t distance = (target - count) & 0xFFFFu;
        return distance == 0u ? 0x10000ull : static_cast<uint64_t>(distance);
    }

    struct DmaTagView
    {
        uint16_t qwc = 0;
        uint8_t id = 0;
        bool irq = false;
        uint32_t addr = 0;
        uint32_t upper = 0;
    };

    inline DmaTagView decodeDmaTag(uint64_t tag)
    {
        DmaTagView out{};
        out.qwc = static_cast<uint16_t>(tag & 0xFFFFu);
        out.id = static_cast<uint8_t>((tag >> 28u) & 0x7u);
        out.irq = ((tag >> 31u) & 0x1ull) != 0ull;
        out.addr = static_cast<uint32_t>((tag >> 32u) & 0x7FFFFFFFu);
        out.upper = static_cast<uint32_t>((tag >> 16u) & 0xFFFFu);
        return out;
    }

    // Black's PATH3 kick stores TADR on the A+D NOP qword of a GIF
    // terminator. That qword's low half is zero, so it decodes as REFE
    // QWC=0 and the chain transfers nothing. The END tag that owns the
    // qword is 32 bytes earlier; its payload is what the masked FIFO
    // has to show as FQC. A genuine empty REFE has a zero upper half
    // and is left alone.
    inline bool gifChainStartsInsideEarlierTag(const uint8_t *ram, uint32_t ramSize, uint32_t &tagAddr)
    {
        if (ram == nullptr || tagAddr < 0x20u || tagAddr + 16u > ramSize)
            return false;

        uint64_t lo = 0;
        uint64_t hi = 0;
        std::memcpy(&lo, ram + tagAddr, sizeof(lo));
        std::memcpy(&hi, ram + tagAddr + 8u, sizeof(hi));
        if (lo != 0u || hi == 0u)
            return false;

        const uint32_t earlier = tagAddr - 0x20u;
        uint64_t raw = 0;
        std::memcpy(&raw, ram + earlier, sizeof(raw));
        const DmaTagView tag = decodeDmaTag(raw);
        if (tag.qwc == 0u || tag.qwc > 16u)
            return false;
        if (tag.id != 1u && tag.id != 7u)
            return false;

        const uint32_t dataStart = earlier + 16u;
        const uint32_t dataEnd = dataStart + static_cast<uint32_t>(tag.qwc) * 16u;
        if (tagAddr < dataStart || tagAddr >= dataEnd)
            return false;

        tagAddr = earlier;
        return true;
    }

    inline uint32_t gifTagNloop(uint64_t tagLo)
    {
        return static_cast<uint32_t>(tagLo & 0x7FFFu);
    }

    inline uint8_t gifTagFlg(uint64_t tagLo)
    {
        return static_cast<uint8_t>((tagLo >> 58u) & 0x3u);
    }

    inline uint32_t gifTagNreg(uint64_t tagLo)
    {
        uint32_t nreg = static_cast<uint32_t>((tagLo >> 60u) & 0xFu);
        return nreg == 0u ? 16u : nreg;
    }

    inline size_t gifEopPacketSize(const uint8_t *data, size_t sizeBytes)
    {
        size_t offset = 0u;
        while (offset + 16u <= sizeBytes)
        {
            uint64_t tagLo = 0u;
            std::memcpy(&tagLo, data + offset, sizeof(tagLo));
            const uint32_t nloop = gifTagNloop(tagLo);
            const uint32_t nreg = gifTagNreg(tagLo);
            uint64_t payloadQwc = 0u;
            switch (gifTagFlg(tagLo))
            {
            case 0u: payloadQwc = static_cast<uint64_t>(nloop) * nreg; break; // PACKED
            case 1u: payloadQwc = (static_cast<uint64_t>(nloop) * nreg + 1u) / 2u; break; // REGLIST
            case 2u:
            case 3u: payloadQwc = nloop; break; // IMAGE / IMAGE2
            }
            const uint64_t tagBytes = 16u + payloadQwc * 16u;
            if (tagBytes > sizeBytes - offset)
                return sizeBytes; // Preserve malformed/truncated input as one packet.
            offset += static_cast<size_t>(tagBytes);
            if (((tagLo >> 15u) & 1u) != 0u) // EOP
                return offset;
        }
        return sizeBytes;
    }

    // A packet that only sets up a local transfer (one PACKED tag of A+D writes, TRXDIR among them), which the game
    // follows with the IMAGE packet of that transfer: the two go through one MSKPATH3 window together. Silent Hill
    // Origins sends its textures one upload per window, mostly setup and data in one packet; its last upload of the
    // frame comes as two packets, which took two windows where it counted one. Every later upload then went one window
    // late, after the draw that needed it (the save screen's picture and, on an empty slot, its text, drawn with
    // stale VRAM). PS2X_PATH3_MERGE_SETUP=0 keeps them apart.
    inline bool path3TransferSetup(const std::vector<uint8_t> &packet)
    {
        if (packet.size() < 32u || packet.size() > 16u * 16u)
            return false;
        uint64_t tagLo = 0u, tagHi = 0u;
        std::memcpy(&tagLo, packet.data(), 8);
        std::memcpy(&tagHi, packet.data() + 8, 8);
        const uint32_t nloop = static_cast<uint32_t>(tagLo & 0x7FFFu);
        if (((tagLo >> 58) & 3u) != 0u || ((tagLo >> 60) & 15u) != 1u || (tagHi & 15u) != 0xEu || (1u + nloop) * 16u != packet.size())
            return false;
        for (uint32_t i = 1; i <= nloop; ++i)
            if (packet[i * 16u + 8u] == 0x53u) // TRXDIR
                return true;
        return false;
    }
    inline bool path3ImageStart(const uint8_t *data)
    {
        uint64_t tagLo = 0u;
        std::memcpy(&tagLo, data, 8);
        return ((tagLo >> 58) & 3u) >= 2u;
    }
    inline bool path3MergeSetup()
    {
        static const bool enabled = [] { const char *v = std::getenv("PS2X_PATH3_MERGE_SETUP"); return !(v && v[0] == '0'); }();
        return enabled;
    }

    inline bool cooperativeDmaEnabled()
    {
        static const bool enabled = [] {
            const char *value = std::getenv("PS2X_DMA_COOPERATIVE");
            return value && value[0] == '1';
        }();
        return enabled;
    }

    inline bool rawGifCaptureRequested()
    {
        static const bool enabled = [] {
            const char *value = std::getenv("PS2X_GIF_RAW_CAPTURE");
            return value && value[0];
        }();
        return enabled;
    }

    inline bool incrementalGifDmaEnabled()
    {
        static const bool enabled = [] {
            const char *value = std::getenv("PS2X_GIF_INCREMENTAL");
            if (value && value[0] == '0')
                return false;
            return true;
        }();
        return enabled || cooperativeDmaEnabled();
    }


    // While MSKPATH3 masks PATH3, keep the queued chain split at GIF packet
    // (EOP) boundaries and let each VIF1 MSKPATH3(0) release only the next
    // packet. Hardware applies the mask at the end of the current PATH3 packet,
    // so a masked chain cannot drain completely on one unmask while later
    // uploads overwrite the textures/CLUTs of pending draws.
    // PS2X_PATH3_EOP_GATE=0 restores the old drain-everything behaviour.
    inline bool path3EopGateEnabled()
    {
        static const bool enabled = [] {
            const char *value = std::getenv("PS2X_PATH3_EOP_GATE");
            return !(value && value[0] == '0');
        }();
        return enabled;
    }

    struct Path3GateStats
    {
        uint64_t chainsMasked = 0, chainsUnmasked = 0, unmasks = 0, released = 0,
                 releasedOnUnmask = 0, flushAll = 0, packetsQueued = 0, maxFifo = 0;
    };
    Path3GateStats g_path3GateStats;

    void reportPath3Gate(const char *why, size_t fifo)
    {
        static const bool enabled = std::getenv("PS2X_PATH3_GATE_STATS") != nullptr;
        if (!enabled)
            return;
        static uint64_t lastUnmasks = 0;
        const auto &s = g_path3GateStats;
        if (s.unmasks - lastUnmasks < 256u && std::strcmp(why, "periodic") == 0)
            return;
        lastUnmasks = s.unmasks;
        std::fprintf(stderr,
                     "[path3-gate] %s gate=%u chains masked/unmasked=%llu/%llu unmasks=%llu queued=%llu released=%llu "
                     "(on-unmask=%llu) flush-all=%llu fifo=%zu max-fifo=%llu\n",
                     why, unsigned(path3EopGateEnabled()),
                     (unsigned long long)s.chainsMasked, (unsigned long long)s.chainsUnmasked,
                     (unsigned long long)s.unmasks, (unsigned long long)s.packetsQueued,
                     (unsigned long long)s.released, (unsigned long long)s.releasedOnUnmask,
                     (unsigned long long)s.flushAll, fifo, (unsigned long long)s.maxFifo);
    }

}

thread_local bool g_ps2xPath3ReleaseOnePacket = false;

// ---------------------------------------------------------------------------
// DMA sink thread (PS2X_VIF1_THREAD=1, experimental).
// The EE thread already snapshots a DMA chain when it is kicked. With the sink
// enabled it no longer consumes that snapshot itself: GIF chains, VIF1 chains,
// VIF1 FIFO writes, VIF1 resets and the CRT registers are queued and replayed
// in kick order on one worker, which owns everything downstream (VIF1 state,
// VU1, the PATH3 mask and its FIFO, the GIF arbiter, the GS front end).
// The EE side reports the DMA as finished at once, as the synchronous model
// does, and keeps a shadow of the one piece of downstream state the game polls
// (the PATH3 mask) by walking the VIF1 command stream it queues.
// Anything that is not a chain snapshot drains the queue and runs as before.
// ---------------------------------------------------------------------------
void ps2xGsSetOrderedDisplayRegs(const uint64_t regs[8]);
void ps2xOrderTrace(char kind, uint32_t value);
namespace
{
    struct DmaSinkJob
    {
        enum Kind : uint8_t { Gif, Vif1, Vif1Reset, Display } kind = Gif;
        uint32_t value = 0u;
        std::vector<uint8_t> data;
        uint64_t display[8] = {};
    };
    struct DmaSink
    {
        std::mutex mutex;
        std::condition_variable work, done;
        std::deque<DmaSinkJob> queue;
        size_t queuedBytes = 0u;
        uint64_t submitted = 0u, completed = 0u;
        bool started = false;
        // EE-side shadow of the queued VIF1 stream.
        bool maskShadow = false;
        uint32_t cycleShadow = 0u;
        uint32_t pendingDirectQw = 0u;
        uint32_t fifoPacketsShadow = 0u; // PATH3 packets held behind the mask (GIF_STAT.FQC)
    };
    DmaSink g_dmaSink;
    thread_local bool t_onDmaSinkThread = false;
    constexpr size_t kDmaSinkMaxQueuedBytes = 24u * 1024u * 1024u;

    inline bool dmaSinkEnabled()
    {
        static const bool enabled = [] {
            const char *value = std::getenv("PS2X_VIF1_THREAD");
            const char *coop = std::getenv("PS2X_DMA_COOPERATIVE");
            return value && value[0] == '1' && !(coop && coop[0] == '1');
        }();
        return enabled;
    }
    // True on the EE side while chains are handed to the worker.
    inline bool dmaSinkActive() { return dmaSinkEnabled() && !t_onDmaSinkThread; }

    // Buffers of the flattened DMA chains go back to the game thread once the worker is done with them: a
    // fresh allocation of that size is new memory every kick, and filling it costs a page fault per page.
    struct DmaChainBufferPool
    {
        std::mutex mutex;
        std::vector<std::vector<uint8_t>> free;
    };
    DmaChainBufferPool g_dmaChainBuffers;
    std::vector<uint8_t> dmaChainBufferTake(size_t wanted)
    {
        std::vector<uint8_t> buffer;
        {
            std::lock_guard<std::mutex> lock(g_dmaChainBuffers.mutex);
            auto &pool = g_dmaChainBuffers.free;
            size_t best = pool.size();
            for (size_t i = 0; i < pool.size(); ++i)
                if (pool[i].capacity() >= wanted && (best == pool.size() || pool[i].capacity() < pool[best].capacity()))
                    best = i;
            if (best == pool.size() && !pool.empty())
                best = pool.size() - 1u;
            if (best != pool.size())
            {
                buffer = std::move(pool[best]);
                pool.erase(pool.begin() + static_cast<std::ptrdiff_t>(best));
            }
        }
        buffer.clear();
        buffer.reserve(wanted);
        return buffer;
    }
    void dmaChainBufferGive(std::vector<uint8_t> &&buffer)
    {
        if (buffer.capacity() < 16384u)
            return;
        std::lock_guard<std::mutex> lock(g_dmaChainBuffers.mutex);
        if (g_dmaChainBuffers.free.size() < 12u)
            g_dmaChainBuffers.free.push_back(std::move(buffer));
    }

    void dmaSinkRun(PS2Memory *memory)
    {
        ThreadNaming::SetCurrentThreadName("VIF1/VU1");
        ps2x_thread_cpu::registerCurrent("VIF1/VU1");
        t_onDmaSinkThread = true;
        DmaSink &sink = g_dmaSink;
        std::unique_lock<std::mutex> lock(sink.mutex);
        for (;;)
        {
            sink.work.wait(lock, [&] { return !sink.queue.empty(); });
            DmaSinkJob job = std::move(sink.queue.front());
            sink.queue.pop_front();
            lock.unlock();
            // PS2X_SINK_TRACE=<trigger file>: once it exists, one line per job for 400 jobs (kind, bytes, PATH3 FIFO
            // depth before and after, MSKPATH3 windows in it), in the order the worker runs them.
            static const char *sinkTrace = std::getenv("PS2X_SINK_TRACE");
            static int sinkTraceLeft = -1;
            if (sinkTrace && sinkTraceLeft < 0)
                if (FILE *f = std::fopen(sinkTrace, "rb")) { std::fclose(f); sinkTraceLeft = 400; }
            const size_t fifoBefore = memory->m_path3MaskedFifo.size();
            const uint64_t unmasksBefore = g_path3GateStats.unmasks;
            switch (job.kind)
            {
            case DmaSinkJob::Gif:
                memory->submitGifPacket(GifPathId::Path3, job.data.data(), static_cast<uint32_t>(job.data.size()), true);
                break;
            case DmaSinkJob::Vif1:
                memory->processVIF1Data(job.data.data(), static_cast<uint32_t>(job.data.size()));
                ps2xMark('D');
                g_ps2xVif1DoneNs.store(uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now().time_since_epoch()).count()), std::memory_order_relaxed);
                break;
            case DmaSinkJob::Vif1Reset:
                if (job.value & 0x1u) // RST
                {
                    const bool wasPath3Masked = memory->m_path3Masked;
                    std::memset(&memory->vif1_regs, 0, sizeof(memory->vif1_regs));
                    memory->m_vif1PendingPath2ImageQwc = 0u;
                    memory->m_vif1PendingPath2DirectHl = false;
                    memory->m_path3Masked = false;
                    if (wasPath3Masked)
                        memory->flushMaskedPath3Packets();
                }
                if (job.value & 0x8u) // STC
                    memory->vif1_regs.stat &= ~((1u << 8) | (1u << 9) | (1u << 10) | (1u << 11) | (1u << 12) | (1u << 13));
                break;
            case DmaSinkJob::Display:
                ps2xGsSetOrderedDisplayRegs(job.display);
                break;
            }
            if (sinkTraceLeft > 0)
            {
                --sinkTraceLeft;
                static const char kinds[] = "GVRD";
                std::fprintf(stderr, "[sink] %c %zu bytes, fifo %zu -> %zu, windows %llu\n", kinds[job.kind], job.data.size(), fifoBefore,
                             memory->m_path3MaskedFifo.size(), (unsigned long long)(g_path3GateStats.unmasks - unmasksBefore));
                if (job.kind == DmaSinkJob::Gif)
                {
                    std::string sizes;
                    for (const auto &packet : memory->m_path3MaskedFifo)
                    {
                        // qwords, and the first GIF tag's NLOOP/FLG/NREG (what the packet carries)
                        uint64_t tag = 0;
                        std::memcpy(&tag, packet.data(), 8);
                        char one[48];
                        std::snprintf(one, sizeof one, " %zu(f%u n%u r%u)", packet.size() / 16u, unsigned((tag >> 58) & 3u), unsigned(tag & 0x7FFFu), unsigned((tag >> 60) & 15u));
                        sizes += one;
                    }
                    std::fprintf(stderr, "[sink]   fifo packets:%s\n", sizes.c_str());
                }
            }
            const size_t jobBytes = job.data.size();
            dmaChainBufferGive(std::move(job.data));
            lock.lock();
            sink.queuedBytes -= jobBytes;
            ++sink.completed;
            sink.done.notify_all();
        }
    }

    void dmaSinkEnqueue(PS2Memory *memory, DmaSinkJob &&job)
    {
        DmaSink &sink = g_dmaSink;
        std::unique_lock<std::mutex> lock(sink.mutex);
        if (!sink.started)
        {
            sink.started = true;
            std::thread(dmaSinkRun, memory).detach();
        }
        if (sink.queuedBytes > kDmaSinkMaxQueuedBytes)
        {
            Ps2xWaitTimer waited(kPs2xWaitGameForVif1Room);
            sink.done.wait(lock, [&] { return sink.queuedBytes <= kDmaSinkMaxQueuedBytes / 2u; });
        }
        ps2xMark(job.kind == DmaSinkJob::Vif1 ? 'K' : job.kind == DmaSinkJob::Gif ? 'P' : 'o', uint32_t(job.data.size()));
        if (job.kind == DmaSinkJob::Display && g_ps2xPresentArmed.exchange(false, std::memory_order_acq_rel))
            g_ps2xPresents.fetch_add(1u, std::memory_order_relaxed);
        if (job.kind == DmaSinkJob::Vif1)
            g_ps2xVif1KickNs.store(uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now().time_since_epoch()).count()), std::memory_order_relaxed);
        sink.queuedBytes += job.data.size();
        sink.queue.push_back(std::move(job));
        ++sink.submitted;
        sink.work.notify_one();
    }

    // Blocks the EE thread until the worker has consumed everything queued so far.
    void dmaSinkDrain()
    {
        if (!dmaSinkActive())
            return;
        DmaSink &sink = g_dmaSink;
        std::unique_lock<std::mutex> lock(sink.mutex);
        const uint64_t target = sink.submitted;
        Ps2xWaitTimer waited(kPs2xWaitGameForVif1Done);
        sink.done.wait(lock, [&] { return sink.completed >= target; });
    }

    // Walks a VIF1 command stream the way processVIF1DataPrefix() consumes it,
    // tracking only what decides command lengths and the PATH3 mask.
    void dmaSinkScanVif1(const uint8_t *data, uint32_t sizeBytes)
    {
        DmaSink &sink = g_dmaSink;
        uint32_t pos = 0u;
        while (pos + 4u <= sizeBytes)
        {
            if (sink.pendingDirectQw != 0u)
            {
                const uint32_t availableQw = (sizeBytes - pos) / 16u;
                if (availableQw == 0u)
                    break;
                const uint32_t chunkQw = std::min(sink.pendingDirectQw, availableQw);
                pos += chunkQw * 16u;
                sink.pendingDirectQw -= chunkQw;
                continue;
            }
            uint32_t cmd;
            std::memcpy(&cmd, data + pos, 4);
            pos += 4u;
            const uint8_t opcode = (cmd >> 24) & 0x7Fu;
            const uint16_t imm = cmd & 0xFFFFu;
            const uint8_t num = (cmd >> 16) & 0xFFu;
            if (opcode == 0x01u) // STCYCL
                sink.cycleShadow = imm;
            else if (opcode == 0x06u) // MSKPATH3
            {
                const bool wasMasked = sink.maskShadow;
                sink.maskShadow = (imm & 0x8000u) != 0u;
                if (wasMasked && !sink.maskShadow && sink.fifoPacketsShadow != 0u)
                    --sink.fifoPacketsShadow; // each unmask releases one packet
            }
            else if (opcode == 0x20u) // STMASK
            {
                if (pos + 4u > sizeBytes)
                    break;
                pos += 4u;
            }
            else if (opcode == 0x30u || opcode == 0x31u) // STROW / STCOL
            {
                if (pos + 16u > sizeBytes)
                    break;
                pos += 16u;
            }
            else if (opcode == 0x4Au) // MPG
            {
                pos += (num == 0u ? 256u : static_cast<uint32_t>(num)) * 8u;
                if (pos > sizeBytes)
                    break;
            }
            else if (opcode == 0x50u || opcode == 0x51u) // DIRECT / DIRECTHL
            {
                const uint32_t requestedQw = imm == 0u ? 65536u : imm;
                const uint32_t availableQw = (sizeBytes - pos) / 16u;
                if (requestedQw > availableQw)
                {
                    sink.pendingDirectQw = requestedQw - availableQw;
                    break;
                }
                pos += requestedQw * 16u;
            }
            else if ((opcode & 0x60u) == 0x60u) // UNPACK
            {
                const uint32_t vn = (opcode >> 2) & 0x3u;
                const uint32_t vl = opcode & 0x3u;
                const uint32_t bitsPerComponent = vl == 0u ? 32u : (vl == 1u ? 16u : (vl == 2u ? 8u : (vn == 3u ? 4u : 16u)));
                const uint32_t bitsPerVector = (vl == 3u && vn == 3u) ? 16u : (vn + 1u) * bitsPerComponent;
                const uint32_t bytesPerVector = (bitsPerVector + 7u) / 8u;
                const uint32_t writeVectorCount = num == 0u ? 256u : static_cast<uint32_t>(num);
                uint32_t cl = sink.cycleShadow & 0xFFu;
                uint32_t wl = (sink.cycleShadow >> 8) & 0xFFu;
                if (cl == 0u)
                    cl = 1u;
                if (wl == 0u)
                    wl = 256u;
                uint32_t sourceVectorCount = writeVectorCount;
                if (cl < wl)
                {
                    const uint32_t fullBlocks = writeVectorCount / wl;
                    const uint32_t remainder = std::min(writeVectorCount % wl, cl);
                    sourceVectorCount = fullBlocks * cl + remainder;
                }
                pos += (sourceVectorCount * bytesPerVector + 3u) & ~3u;
                if (pos > sizeBytes)
                    break;
            }
        }
    }

    // CRT registers travel with the draws: a flip the game writes after it saw
    // the DMA finish must not be presented before the worker drew that frame.
    void dmaSinkNoteDisplayRegs(PS2Memory *memory)
    {
        if (!dmaSinkActive())
            return;
        const GSRegisters &r = memory->gs_regs;
        DmaSinkJob job;
        job.kind = DmaSinkJob::Display;
        const uint64_t regs[8] = {r.pmode, r.smode1, r.smode2, r.dispfb1, r.display1, r.dispfb2, r.display2, r.bgcolor};
        std::memcpy(job.display, regs, sizeof(regs));
        static uint64_t last[8] = {~0ull};
        if (std::memcmp(last, regs, sizeof(regs)) == 0)
            return;
        std::memcpy(last, regs, sizeof(regs));
        dmaSinkEnqueue(memory, std::move(job));
    }
}
bool ps2xOnDmaSinkThread() { return t_onDmaSinkThread; }
void ps2xDrainDmaSink() { dmaSinkDrain(); }

// PS2X_ORDER_TRACE=<trigger file>: once the file exists, prints for 240 VIF1 DMA
// kicks the order of events between kicks: GIF kick (g), packet entering the
// masked FIFO (q<qwords>, then G<depth>), unmask window (W<depth before
// release>), GIF channel completion (C), PATH1 packets (x, run-length), PATH2
// (d) and unmasked PATH3 (P<qwords>).
static const uint8_t *g_ramDumpSource = nullptr;
static uint64_t g_orderTraceCycles = 0, g_orderTraceVifKick = 0; // EE cycles, for the 'D' token
void ps2xOrderTrace(char kind, uint32_t value)
{
    // PS2X_RAM_DUMP=<file>: at the first VIF1 kick after <file>.trigger appears,
    // write the whole EE RAM to <file> (once). For diffing game state offline.
    if (kind == 'V')
    {
        static const char *dumpPath = std::getenv("PS2X_RAM_DUMP");
        static bool dumped = false;
        if (dumpPath && !dumped && g_ramDumpSource)
        {
            const std::string armed = std::string(dumpPath) + ".trigger";
            if (FILE *t = std::fopen(armed.c_str(), "rb"))
            {
                std::fclose(t);
                if (FILE *f = std::fopen(dumpPath, "wb"))
                {
                    std::fwrite(g_ramDumpSource, 1, PS2_RAM_SIZE, f);
                    std::fclose(f);
                    std::fprintf(stderr, "[ram-dump] wrote %s\n", dumpPath);
                }
                dumped = true;
            }
        }
    }
    static const char *trigger = std::getenv("PS2X_ORDER_TRACE");
    if (!trigger) return;
    static long kicks = 0, skip = -1;
    if (skip < 0 && kind == 'V' && (kicks & 15) == 0)
        if (FILE *f = std::fopen(trigger, "rb")) { std::fclose(f); skip = kicks; }
    if (skip < 0) { if (kind == 'V') ++kicks; return; }
    static std::string line;
    static uint32_t run = 0; static char runKind = 0;
    auto flushRun = [&] { if (run) { line += runKind; if (run > 1) line += std::to_string(run); line += ' '; run = 0; } };
    if (kind == 'V')
    {
        flushRun();
        if (kicks >= skip && kicks < skip + 240 && !line.empty())
            std::fprintf(stderr, "[order] %ld: %s\n", kicks, line.c_str());
        ++kicks; line.clear();
        return;
    }
    if (kicks < skip || kicks >= skip + 240) return;
    if (kind == 'x' || kind == 'd') { if (runKind != kind) flushRun(); runKind = kind; ++run; return; }
    flushRun();
    if (kind == 't')
    {
        static const char *names[8] = {"refe", "cnt", "next", "ref", "refs", "call", "ret", "end"};
        line += names[(value >> 28) & 7u];
        if (value & 0x08000000u) line += '!';
        line += std::to_string(value & 0xFFFFu);
        line += ' ';
        return;
    }
    line += kind; if (kind != 'g' && kind != 'C') line += std::to_string(value); line += ' ';
}

// A GIF DMA chain that entered the PATH3 masked FIFO is not complete until
// its last packet has left it: the channel keeps STR and raises its DMAC
// interrupt only then. The game's DMA manager advances its queue from those
// completion interrupts, so finishing early makes it start the next texture
// chain too late for the MSKPATH3 windows of the running VIF1 chain.
// Opt-in with PS2X_GIF_COMPLETE_ON_DRAIN=1: it matches the hardware order but
// did not change Black's texture stream, and a chain with more packets than
// the following MSKPATH3 windows would leave the channel busy.
static bool g_gifCompletionDeferred = false;
static bool gifCompleteOnDrain()
{
    static const bool enabled = [] { const char *v = std::getenv("PS2X_GIF_COMPLETE_ON_DRAIN"); return v && v[0] == '1'; }();
    return enabled;
}

void ps2xPath3GateNoteUnmask()
{
    ++g_path3GateStats.unmasks;
}

// Helpers for GS VRAM addressing (PSMCT32 path).
static inline uint32_t gs_vram_offset(uint32_t basePage, uint32_t x, uint32_t y, uint32_t fbw)
{
    // basePage is in 2048-byte units; fbw is in blocks of 64 pixels.
    uint32_t strideBytes = fbw * 64 * 4;
    return basePage * 2048 + y * strideBytes + x * 4;
}

PS2Memory::PS2Memory()
    : m_rdram(nullptr), m_scratchpad(nullptr), iop_ram(nullptr), m_seenGifCopy(false), m_gsVRAM(nullptr)
{
    ps2SetScratchpadHostPtr(nullptr);
}

PS2Memory::~PS2Memory()
{
    if (m_rdram)
    {
        delete[] m_rdram;
        m_rdram = nullptr;
    }

    if (m_scratchpad)
    {
        ps2SetScratchpadHostPtr(nullptr);
        delete[] m_scratchpad;
        m_scratchpad = nullptr;
    }

    if (m_gsVRAM)
    {
#if defined(_WIN32)
        _aligned_free(m_gsVRAM);
#else
        std::free(m_gsVRAM);
#endif
        m_gsVRAM = nullptr;
    }

    if (m_vu1Code)
    {
        delete[] m_vu1Code;
        m_vu1Code = nullptr;
    }
    if (m_vu1Data)
    {
        delete[] m_vu1Data;
        m_vu1Data = nullptr;
    }
    if (m_vu0Code)
    {
        delete[] m_vu0Code;
        m_vu0Code = nullptr;
    }
    if (m_vu0Data)
    {
        delete[] m_vu0Data;
        m_vu0Data = nullptr;
    }

    if (iop_ram)
    {
        delete[] iop_ram;
        iop_ram = nullptr;
    }
}

bool PS2Memory::initialize(size_t ramSize)
{
    auto cleanup = [this]()
    {
        delete[] m_rdram;
        delete[] m_scratchpad;
        delete[] iop_ram;
#if defined(_WIN32)
        _aligned_free(m_gsVRAM);
#else
        std::free(m_gsVRAM);
#endif
        delete[] m_vu0Code;
        delete[] m_vu0Data;
        delete[] m_vu1Code;
        delete[] m_vu1Data;
        m_rdram = nullptr;
        m_scratchpad = nullptr;
        ps2SetScratchpadHostPtr(nullptr);
        iop_ram = nullptr;
        m_gsVRAM = nullptr;
        m_vu0Code = nullptr;
        m_vu0Data = nullptr;
        m_vu1Code = nullptr;
        m_vu1Data = nullptr;
    };

    cleanup();
    m_seenGifCopy = false;
    m_dmaStartCount.store(0, std::memory_order_relaxed);
    m_gifCopyCount.store(0, std::memory_order_relaxed);
    m_gsWriteCount.store(0, std::memory_order_relaxed);
    m_vifWriteCount.store(0, std::memory_order_relaxed);
    {
        std::lock_guard<std::mutex> lock(m_completedDmacMutex);
        m_completedDmacCauses.clear();
    }
    m_codeRegions.clear();
    m_path3Masked = false;
    m_path3PacingCredit = 0;
    m_path3MaskedFifo.clear();
    m_vif1PendingPath2ImageQwc = 0u;
    m_vif1PendingPath2DirectHl = false;
    m_vif1PendingDirectQw = 0u;
    resetEeTimers();

    try
    {
        // Allocate main RAM
        m_rdram = new uint8_t[ramSize];
        std::memset(m_rdram, 0, ramSize);

        // Allocate scratchpad
        m_scratchpad = new uint8_t[PS2_SCRATCHPAD_SIZE];
        std::memset(m_scratchpad, 0, PS2_SCRATCHPAD_SIZE);
        ps2SetScratchpadHostPtr(m_scratchpad);

        // Initialize EE TLB entries (R5900 has 48 entries).
        m_tlbEntries.assign(48, TLBEntry{0, 0, 0, false});

        // Allocate IOP RAM
        iop_ram = new uint8_t[2 * 1024 * 1024]; // 2MB

        // Initialize IOP RAM with zeros
        std::memset(iop_ram, 0, 2 * 1024 * 1024);

        // Initialize I/O registers
        m_ioRegisters.clear();

        // Initialize GS registers
        memset(&gs_regs, 0, sizeof(gs_regs));
        // The HLE boot environment already selects a 640x448 NTSC display.
        // Initialize its CRT clock too; games may retain the BIOS video mode
        // without calling SetGsCrt. Explicit CRT setup can replace this value.
        gs_regs.smode1 = 4ull | (32ull << 3) | (1ull << 10) | (2ull << 13) |
                         (4ull << 21) | (1ull << 30) | (1ull << 32) |
                         (1ull << 33) | (1ull << 34);
        gs_regs.smode2 = 3u; // interlaced NTSC, frame mode (448 source lines)
        // memset zero-fills std::atomic<uint64_t>::csr's bytes, which is not itself
        // a guaranteed-valid atomic store; make the zero-initialization explicit.
        gs_regs.csr.store(0);
        gs_regs.dispfb1 = (0ULL << 0) | (10ULL << 9) | (0ULL << 15) | (0ULL << 32) | (0ULL << 43);
        gs_regs.display1 = 636ULL | (50ULL << 12) | (3ULL << 23) |
                           (2559ULL << 32) | (447ULL << 44);
        gs_regs.dispfb2 = gs_regs.dispfb1;
        gs_regs.display2 = gs_regs.display1;

        // Allocate GS VRAM (4MB)
        // Page alignment permits Metal to share PS2 local memory without a copy.
#if defined(_WIN32)
        m_gsVRAM = static_cast<uint8_t *>(_aligned_malloc(PS2_GS_VRAM_SIZE, 16384u));
#else
        m_gsVRAM = static_cast<uint8_t *>(std::aligned_alloc(16384u, PS2_GS_VRAM_SIZE));
#endif
        if (!m_gsVRAM) throw std::bad_alloc();
        std::memset(m_gsVRAM, 0, PS2_GS_VRAM_SIZE);

        m_vu0Code = new uint8_t[PS2_VU0_CODE_SIZE];
        m_vu0Data = new uint8_t[PS2_VU0_DATA_SIZE];
        std::memset(m_vu0Code, 0, PS2_VU0_CODE_SIZE);
        std::memset(m_vu0Data, 0, PS2_VU0_DATA_SIZE);

        m_vu1Code = new uint8_t[PS2_VU1_CODE_SIZE];
        m_vu1Data = new uint8_t[PS2_VU1_DATA_SIZE];
        std::memset(m_vu1Code, 0, PS2_VU1_CODE_SIZE);
        std::memset(m_vu1Data, 0, PS2_VU1_DATA_SIZE);
        markVU0CodeModified();
        markVU1CodeModified();

        // Initialize VIF registers
        memset(&vif0_regs, 0, sizeof(vif0_regs));
        memset(&vif1_regs, 0, sizeof(vif1_regs));

        // Initialize DMA registers
        memset(dma_regs, 0, sizeof(dma_regs));

        return true;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error initializing PS2 memory: " << e.what() << std::endl;
        cleanup();
        return false;
    }
}

void PS2Memory::resetEeTimers() noexcept
{
    m_eeTimers = {};
}

namespace
{
    // The EE scheduler accounts cycles at every recompiled-block checkpoint (a handful of cycles at a
    // time). The timers only need that time in slices: it is accumulated here and applied every
    // kEeTimerQuantumCycles (~7 us of guest time), or at once when a timer register is accessed.
    constexpr uint64_t kEeTimerQuantumCycles = 2048u;
    constexpr uint64_t kEeTimerFlush = ~0ull;
    uint64_t g_eeTimerPendingCycles = 0u;
    uint32_t g_eeTimerStashedInterrupts = 0u; // raised by a register-access flush, reported on the next advance
}

uint32_t PS2Memory::advanceEeTimers(uint64_t eeCycles) noexcept
{
    const bool flush = eeCycles == kEeTimerFlush;
    if (!flush)
    {
        g_orderTraceCycles += eeCycles;
        // Time only accrues for a VIF1 chain that is in flight; cap the burst a
        // long pause between services can release.
        if (m_pendingVif1Transfers.empty())
            m_vif1CycleCredit = 0;
        else
            m_vif1CycleCredit = std::min<int64_t>(m_vif1CycleCredit + static_cast<int64_t>(eeCycles), 4'000'000);
        g_eeTimerPendingCycles += eeCycles;
        if (g_eeTimerPendingCycles < kEeTimerQuantumCycles)
        {
            const uint32_t stashed = g_eeTimerStashedInterrupts;
            g_eeTimerStashedInterrupts = 0u;
            return stashed;
        }
    }
    eeCycles = g_eeTimerPendingCycles;
    g_eeTimerPendingCycles = 0u;
    if (eeCycles == 0u)
    {
        return 0u;
    }

    constexpr uint32_t kGifStat = 0x10003020u;
    constexpr uint32_t kGifFqcMask = 0x1F000000u;
    auto gifStatIt = m_ioRegisters.find(kGifStat);
    if (gifStatIt != m_ioRegisters.end())
        gifStatIt->second &= ~kGifFqcMask;

    uint32_t interruptMask = 0u;
    for (size_t index = 0; index < m_eeTimers.size(); ++index)
    {
        EeTimer &timer = m_eeTimers[index];
        if ((timer.mode & kEeTimerModeCue) == 0u)
        {
            continue;
        }

        const uint64_t clockHz = kEeTimerClockHz[timer.mode & kEeTimerModeClksMask];
        uint64_t ticks = 0u;
        if (eeCycles < kEeClockHz)
        {
            const uint64_t scaled = eeCycles * clockHz + timer.clockRemainder;
            if (scaled < kEeClockHz)
            {
                timer.clockRemainder = scaled;
                continue;
            }
            ticks = scaled / kEeClockHz;
            timer.clockRemainder = scaled % kEeClockHz;
        }
        else
        {
            const uint64_t wholeSeconds = eeCycles / kEeClockHz;
            const uint64_t remainingCycles = eeCycles % kEeClockHz;
            const uint64_t scaled = remainingCycles * clockHz + timer.clockRemainder;
            ticks = wholeSeconds * clockHz + scaled / kEeClockHz;
            timer.clockRemainder = scaled % kEeClockHz;
            if (ticks == 0u)
            {
                continue;
            }
        }

        const uint32_t oldCount = timer.count & 0xFFFFu;
        const uint32_t compare = timer.compare & 0xFFFFu;
        const uint64_t compareDistance = ticksUntilMatch(oldCount, compare);
        const uint64_t overflowDistance = 0x10000ull - oldCount;
        const bool zeroReturn = (timer.mode & kEeTimerModeZret) != 0u;
        const bool compareReached = ticks >= compareDistance;
        bool overflowReached = false;

        if (zeroReturn)
        {
            overflowReached = ticks >= overflowDistance && overflowDistance <= compareDistance;
            if (compareReached)
            {
                const uint64_t remaining = ticks - compareDistance;
                timer.count = compare == 0u
                                  ? static_cast<uint32_t>(remaining & 0xFFFFu)
                                  : static_cast<uint32_t>(remaining % compare);
            }
            else
            {
                timer.count = static_cast<uint32_t>((oldCount + ticks) & 0xFFFFu);
            }
        }
        else
        {
            overflowReached = ticks >= overflowDistance;
            timer.count = static_cast<uint32_t>((oldCount + ticks) & 0xFFFFu);
        }

        if (compareReached && (timer.mode & kEeTimerModeCmpe) != 0u && (timer.mode & kEeTimerModeEquf) == 0u)
        {
            timer.mode |= kEeTimerModeEquf;
            interruptMask |= 1u << index;
        }
        if (overflowReached && (timer.mode & kEeTimerModeOvfe) != 0u && (timer.mode & kEeTimerModeOvff) == 0u)
        {
            timer.mode |= kEeTimerModeOvff;
            interruptMask |= 1u << index;
        }
    }
    if (flush)
    {
        g_eeTimerStashedInterrupts |= interruptMask;
        return 0u;
    }
    interruptMask |= g_eeTimerStashedInterrupts;
    g_eeTimerStashedInterrupts = 0u;
    return interruptMask;
}

uint64_t PS2Memory::cyclesUntilNextEeTimerInterrupt() const noexcept
{
    uint64_t nearest = std::numeric_limits<uint64_t>::max();
    for (const EeTimer &timer : m_eeTimers)
    {
        if ((timer.mode & kEeTimerModeCue) == 0u)
        {
            continue;
        }

        const uint32_t count = timer.count & 0xFFFFu;
        const uint32_t compare = timer.compare & 0xFFFFu;
        const uint64_t compareDistance = ticksUntilMatch(count, compare);
        const uint64_t overflowDistance = 0x10000ull - count;
        uint64_t eventTicks = std::numeric_limits<uint64_t>::max();

        if ((timer.mode & kEeTimerModeCmpe) != 0u &&
            (timer.mode & kEeTimerModeEquf) == 0u)
        {
            eventTicks = compareDistance;
        }
        const bool overflowCanOccur = (timer.mode & kEeTimerModeZret) == 0u ||
                                      overflowDistance <= compareDistance;
        if (overflowCanOccur &&
            (timer.mode & kEeTimerModeOvfe) != 0u &&
            (timer.mode & kEeTimerModeOvff) == 0u)
        {
            eventTicks = std::min(eventTicks, overflowDistance);
        }
        if (eventTicks == std::numeric_limits<uint64_t>::max())
        {
            continue;
        }

        const uint64_t clockHz = kEeTimerClockHz[timer.mode & kEeTimerModeClksMask];
        const uint64_t numerator = eventTicks * kEeClockHz - timer.clockRemainder;
        const uint64_t cycles = (numerator + clockHz - 1u) / clockHz;
        nearest = std::min(nearest, std::max<uint64_t>(1u, cycles));
    }
    // Cycles already accounted but not yet applied to the timers bring the event closer.
    if (nearest != std::numeric_limits<uint64_t>::max())
        nearest = nearest > g_eeTimerPendingCycles ? nearest - g_eeTimerPendingCycles : 1u;
    return nearest;
}

bool PS2Memory::isScratchpad(uint32_t address) const
{
    return ps2IsScratchpadAddress(address);
}

uint8_t *PS2Memory::mapVuMemory(uint32_t physAddr, uint32_t size, uint32_t &offset, uint32_t &limit)
{
    return const_cast<uint8_t *>(static_cast<const PS2Memory *>(this)->mapVuMemory(physAddr, size, offset, limit));
}

const uint8_t *PS2Memory::mapVuMemory(uint32_t physAddr, uint32_t size, uint32_t &offset, uint32_t &limit) const
{
    auto mapRange = [&](uint32_t base, uint32_t rangeSize, const uint8_t *ptr) -> const uint8_t *
    {
        if (!ptr || physAddr < base)
        {
            return nullptr;
        }
        const uint32_t local = physAddr - base;
        if (local >= rangeSize || size > (rangeSize - local))
        {
            return nullptr;
        }
        offset = local;
        limit = rangeSize;
        return ptr;
    };

    if (const uint8_t *ptr = mapRange(PS2_VU0_CODE_BASE, PS2_VU0_CODE_SIZE, m_vu0Code))
    {
        return ptr;
    }
    if (const uint8_t *ptr = mapRange(PS2_VU0_DATA_BASE, PS2_VU0_DATA_SIZE, m_vu0Data))
    {
        return ptr;
    }
    if (const uint8_t *ptr = mapRange(PS2_VU1_CODE_BASE, PS2_VU1_CODE_SIZE, m_vu1Code))
    {
        return ptr;
    }
    return mapRange(PS2_VU1_DATA_BASE, PS2_VU1_DATA_SIZE, m_vu1Data);
}

uint32_t PS2Memory::translateAddress(uint32_t virtualAddress)
{
    if (isScratchpad(virtualAddress))
    {
        return ps2ScratchpadOffset(virtualAddress);
    }

    // EE uncached aliases of main RAM (per PS2 memory map):
    //   0x20000000-0x3FFFFFFF -> 32MB mirror of RDRAM
    // This includes the accelerated window rooted at 0x30100000.
    if (Ps2IsUncachedRamMirrorAddress(virtualAddress))
    {
        return virtualAddress & PS2_RAM_MASK;
    }

    // KSEG0/KSEG1 direct-mapped window.
    if (Ps2IsKseg01Address(virtualAddress))
    {
        return Ps2DirectMappedPhysicalAddress(virtualAddress);
    }

    // In this runtime, low segments are treated as physical-style addresses already.
    if (virtualAddress < 0x80000000)
    {
        return virtualAddress;
    }

    // KSEG2/KSEG3 are TLB mapped.
    if (Ps2IsKseg23Address(virtualAddress))
    {
        for (const auto &entry : m_tlbEntries)
        {
            if (entry.valid)
            {
                // PageMask uses bits [24:13]. Build an address-level mask (plus 4KB base page bits).
                const uint32_t mask = entry.mask & 0x01FFE000u;
                const uint32_t compareMask = ~(mask | 0xFFFu);
                if ((virtualAddress & compareMask) == (entry.vpn & compareMask))
                {
                    // TLB hit
                    const uint32_t pageOffsetMask = mask | 0xFFFu;
                    const uint32_t physBase = entry.pfn << 12;
                    return physBase | (virtualAddress & pageOffsetMask);
                }
            }
        }
        throw std::runtime_error("TLB miss for address: 0x" + std::to_string(virtualAddress));
    }

    return virtualAddress;
}

bool PS2Memory::tlbRead(uint32_t index, uint32_t &vpn, uint32_t &pfn, uint32_t &mask, bool &valid) const
{
    if (index >= m_tlbEntries.size())
    {
        return false;
    }

    const TLBEntry &entry = m_tlbEntries[index];
    vpn = entry.vpn;
    pfn = entry.pfn;
    mask = entry.mask;
    valid = entry.valid;
    return true;
}

bool PS2Memory::tlbWrite(uint32_t index, uint32_t vpn, uint32_t pfn, uint32_t mask, bool valid)
{
    if (index >= m_tlbEntries.size())
    {
        return false;
    }

    TLBEntry &entry = m_tlbEntries[index];
    entry.vpn = vpn & 0xFFFFF000u;
    entry.pfn = pfn & 0x000FFFFFu;
    entry.mask = mask & 0x01FFE000u;
    entry.valid = valid;
    return true;
}

int32_t PS2Memory::tlbProbe(uint32_t vpn) const
{
    const uint32_t normalizedVpn = vpn & 0xFFFFF000u;
    for (uint32_t i = 0; i < static_cast<uint32_t>(m_tlbEntries.size()); ++i)
    {
        const TLBEntry &entry = m_tlbEntries[i];
        if (!entry.valid)
        {
            continue;
        }

        const uint32_t mask = entry.mask & 0x01FFE000u;
        const uint32_t compareMask = ~(mask | 0xFFFu);
        if ((normalizedVpn & compareMask) == (entry.vpn & compareMask))
        {
            return static_cast<int32_t>(i);
        }
    }

    return -1;
}

uint8_t PS2Memory::read8(uint32_t address)
{
    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        return m_scratchpad[physAddr];
    }
    if (physAddr < PS2_RAM_SIZE)
    {
        return m_rdram[physAddr];
    }
    uint32_t vuOffset = 0;
    uint32_t vuLimit = 0;
    if (const uint8_t *vuMem = mapVuMemory(physAddr, sizeof(uint8_t), vuOffset, vuLimit))
    {
        (void)vuLimit;
        return vuMem[vuOffset];
    }
    else if (isIoRegister(physAddr))
    {
        uint32_t regAddr = physAddr & ~0x3;
        uint32_t value = readIORegister(regAddr);
        uint32_t shift = (physAddr & 3) * 8;
        return static_cast<uint8_t>((value >> shift) & 0xFF);
    }

    return 0;
}

uint16_t PS2Memory::read16(uint32_t address)
{
    if (address & 1)
    {
        throw std::runtime_error("Unaligned 16-bit read at address: 0x" + std::to_string(address));
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        return loadScalar<uint16_t>(m_scratchpad, physAddr, PS2_SCRATCHPAD_SIZE, "read16 scratchpad", address);
    }
    if (physAddr < PS2_RAM_SIZE)
    {
        return loadScalar<uint16_t>(m_rdram, physAddr, PS2_RAM_SIZE, "read16 rdram", address);
    }
    uint32_t vuOffset = 0;
    uint32_t vuLimit = 0;
    if (const uint8_t *vuMem = mapVuMemory(physAddr, sizeof(uint16_t), vuOffset, vuLimit))
    {
        return loadScalar<uint16_t>(vuMem, vuOffset, vuLimit, "read16 vu", address);
    }
    else if (isIoRegister(physAddr))
    {
        uint32_t regAddr = physAddr & ~0x3;
        uint32_t value = readIORegister(regAddr);
        uint32_t shift = (physAddr & 2) * 8;
        return static_cast<uint16_t>((value >> shift) & 0xFFFF);
    }

    return 0;
}

uint32_t PS2Memory::read32(uint32_t address)
{
    if (address & 3)
    {
        throw std::runtime_error("Unaligned 32-bit read at address: 0x" + std::to_string(address));
    }

    if (isGsPrivReg(address))
    {
        uint32_t off = address & 7;
        const uint32_t regOff = (address - PS2_GS_PRIV_REG_BASE) & ~0x7u;
        if (regOff == kGsCsrRegOffset)
        {
            uint64_t val = gs_regs.csr.load();
            return (uint32_t)(val >> (off * 8));
        }
        uint64_t *reg = gsRegPtr(gs_regs, address);
        if (!reg)
            return 0;
        uint64_t val = *reg;
        return (uint32_t)(val >> (off * 8));
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        return loadScalar<uint32_t>(m_scratchpad, physAddr, PS2_SCRATCHPAD_SIZE, "read32 scratchpad", address);
    }
    if (physAddr < PS2_RAM_SIZE)
    {
        return loadScalar<uint32_t>(m_rdram, physAddr, PS2_RAM_SIZE, "read32 rdram", address);
    }
    uint32_t vuOffset = 0;
    uint32_t vuLimit = 0;
    if (const uint8_t *vuMem = mapVuMemory(physAddr, sizeof(uint32_t), vuOffset, vuLimit))
    {
        return loadScalar<uint32_t>(vuMem, vuOffset, vuLimit, "read32 vu", address);
    }
    else if (isIoRegister(physAddr))
    {
        return readIORegister(physAddr);
    }

    return 0;
}

uint64_t PS2Memory::read64(uint32_t address)
{
    if (address & 7)
    {
        throw std::runtime_error("Unaligned 64-bit read at address: 0x" + std::to_string(address));
    }

    if (isGsPrivReg(address))
    {
        const uint32_t regOff = (address - PS2_GS_PRIV_REG_BASE) & ~0x7u;
        if (regOff == kGsCsrRegOffset)
        {
            return gs_regs.csr.load();
        }
        uint64_t *reg = gsRegPtr(gs_regs, address);
        return reg ? *reg : 0;
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        return loadScalar<uint64_t>(m_scratchpad, physAddr, PS2_SCRATCHPAD_SIZE, "read64 scratchpad", address);
    }
    if (physAddr < PS2_RAM_SIZE)
    {
        return loadScalar<uint64_t>(m_rdram, physAddr, PS2_RAM_SIZE, "read64 rdram", address);
    }
    uint32_t vuOffset = 0;
    uint32_t vuLimit = 0;
    if (const uint8_t *vuMem = mapVuMemory(physAddr, sizeof(uint64_t), vuOffset, vuLimit))
    {
        return loadScalar<uint64_t>(vuMem, vuOffset, vuLimit, "read64 vu", address);
    }

    // 64-bit IO read: compose from the two adjacent 32-bit IO register slots
    // to avoid any side-effects from read32 handlers.
    if (isIoRegister(address))
    {
        uint32_t lo = ((address == 0x1000A000u && incrementalGifDmaEnabled()) ||
                       (cooperativeDmaEnabled() && (address == 0x10009000u || address == 0x1000E010u)))
                          ? readIORegister(address)
                          : (m_ioRegisters.count(address) ? m_ioRegisters[address] : 0u);
        uint32_t hi = m_ioRegisters.count(address + 4) ? m_ioRegisters[address + 4] : 0u;
        return static_cast<uint64_t>(lo) | (static_cast<uint64_t>(hi) << 32);
    }
    return (uint64_t)read32(address) | ((uint64_t)read32(address + 4) << 32);
}

__m128i PS2Memory::read128(uint32_t address)
{
    if (address & 15)
    {
        throw std::runtime_error("Unaligned 128-bit read at address: 0x" + std::to_string(address));
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        inRange(physAddr, sizeof(__m128i), PS2_SCRATCHPAD_SIZE, "read128 scratchpad", address);
        return _mm_loadu_si128(reinterpret_cast<__m128i *>(&m_scratchpad[physAddr]));
    }
    if (physAddr < PS2_RAM_SIZE)
    {
        inRange(physAddr, sizeof(__m128i), PS2_RAM_SIZE, "read128 rdram", address);
        return _mm_loadu_si128(reinterpret_cast<__m128i *>(&m_rdram[physAddr]));
    }
    uint32_t vuOffset = 0;
    uint32_t vuLimit = 0;
    if (const uint8_t *vuMem = mapVuMemory(physAddr, sizeof(__m128i), vuOffset, vuLimit))
    {
        inRange(vuOffset, sizeof(__m128i), vuLimit, "read128 vu", address);
        return _mm_loadu_si128(reinterpret_cast<const __m128i *>(vuMem + vuOffset));
    }

    // 128-bit reads are primarily for quad-word loads in the EE, which are only valid for RAM areas
    // Return zeroes for unsupported areas
    return _mm_setzero_si128();
}

void PS2Memory::write8(uint32_t address, uint8_t value)
{
    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        m_scratchpad[physAddr] = value;
    }
    else if (physAddr < PS2_RAM_SIZE)
    {
        m_rdram[physAddr] = value;
    }
    else
    {
        uint32_t vuOffset = 0;
        uint32_t vuLimit = 0;
        if (uint8_t *vuMem = mapVuMemory(physAddr, sizeof(uint8_t), vuOffset, vuLimit))
        {
            (void)vuLimit;
            vuMem[vuOffset] = value;
            if (vuMem == m_vu0Code)
                markVU0CodeModified();
            else if (vuMem == m_vu1Code)
                markVU1CodeModified();
            return;
        }
    }
    if (isIoRegister(physAddr))
    {
        // IO registers - handle byte writes by modifying the appropriate byte in the word
        uint32_t regAddr = physAddr & ~0x3;
        uint32_t shift = (physAddr & 3) * 8;
        uint32_t mask = ~(0xFF << shift);
        uint32_t newValue = (m_ioRegisters[regAddr] & mask) | ((uint32_t)value << shift);
        writeIORegister(regAddr, newValue);
    }
}

void PS2Memory::write16(uint32_t address, uint16_t value)
{
    if (address & 1)
    {
        throw std::runtime_error("Unaligned 16-bit write at address: 0x" + std::to_string(address));
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        storeScalar<uint16_t>(m_scratchpad, physAddr, PS2_SCRATCHPAD_SIZE, value, "write16 scratchpad", address);
    }
    else if (physAddr < PS2_RAM_SIZE)
    {
        storeScalar<uint16_t>(m_rdram, physAddr, PS2_RAM_SIZE, value, "write16 rdram", address);
    }
    else
    {
        uint32_t vuOffset = 0;
        uint32_t vuLimit = 0;
        if (uint8_t *vuMem = mapVuMemory(physAddr, sizeof(uint16_t), vuOffset, vuLimit))
        {
            storeScalar<uint16_t>(vuMem, vuOffset, vuLimit, value, "write16 vu", address);
            if (vuMem == m_vu0Code)
                markVU0CodeModified();
            else if (vuMem == m_vu1Code)
                markVU1CodeModified();
            return;
        }
    }
    if (isIoRegister(physAddr))
    {
        uint32_t regAddr = physAddr & ~0x3;
        uint32_t shift = (physAddr & 2) * 8;
        uint32_t mask = ~(0xFFFF << shift);
        uint32_t newValue = (m_ioRegisters[regAddr] & mask) | ((uint32_t)value << shift);
        writeIORegister(regAddr, newValue);
    }
}

void PS2Memory::write32(uint32_t address, uint32_t value)
{
    if (address & 3)
    {
        throw std::runtime_error("Unaligned 32-bit write at address: 0x" + std::to_string(address));
    }

    if (isGsPrivReg(address))
    {
        uint32_t off = address & 7;
        const uint32_t regOff = (address - PS2_GS_PRIV_REG_BASE) & ~0x7u;
        if (regOff == kGsCsrRegOffset)
        {
            // CSR: bits 0..1 of the low dword are write-one-to-clear status bits.
            // Done as a single atomic RMW -- see writeCsrHalf's comment.
            writeCsrHalf(gs_regs.csr, off, value);
        }
        else if (uint64_t *reg = gsRegPtr(gs_regs, address))
        {
            uint64_t mask = 0xFFFFFFFFULL << (off * 8);
            uint64_t newVal = (*reg & ~mask) | ((uint64_t)value << (off * 8));
            *reg = newVal;
            dmaSinkNoteDisplayRegs(this);
        }
        return;
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        storeScalar<uint32_t>(m_scratchpad, physAddr, PS2_SCRATCHPAD_SIZE, value, "write32 scratchpad", address);
    }
    else if (physAddr < PS2_RAM_SIZE)
    {
        // Check if this might be code modification
        markModified(address, 4);

        storeScalar<uint32_t>(m_rdram, physAddr, PS2_RAM_SIZE, value, "write32 rdram", address);
    }
    else
    {
        uint32_t vuOffset = 0;
        uint32_t vuLimit = 0;
        if (uint8_t *vuMem = mapVuMemory(physAddr, sizeof(uint32_t), vuOffset, vuLimit))
        {
            storeScalar<uint32_t>(vuMem, vuOffset, vuLimit, value, "write32 vu", address);
            if (vuMem == m_vu0Code)
                markVU0CodeModified();
            else if (vuMem == m_vu1Code)
                markVU1CodeModified();
            return;
        }
    }
    if (isIoRegister(physAddr))
    {
        writeIORegister(physAddr, value);
    }
}

void PS2Memory::write64(uint32_t address, uint64_t value)
{
    if (address & 7)
    {
        throw std::runtime_error("Unaligned 64-bit write at address: 0x" + std::to_string(address));
    }

    if (isGsPrivReg(address))
    {
        const uint32_t regOff = (address - PS2_GS_PRIV_REG_BASE) & ~0x7u;
        if (regOff == kGsCsrRegOffset)
        {
            // CSR: bits 0..1 are write-one-to-clear status bits. Done as a single
            // atomic RMW -- see writeCsrFull's comment.
            writeCsrFull(gs_regs.csr, value);
        }
        else if (uint64_t *reg = gsRegPtr(gs_regs, address))
        {
            *reg = value;
            dmaSinkNoteDisplayRegs(this);
        }
        return;
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        storeScalar<uint64_t>(m_scratchpad, physAddr, PS2_SCRATCHPAD_SIZE, value, "write64 scratchpad", address);
    }
    else if (physAddr < PS2_RAM_SIZE)
    {
        markModified(address, 8);
        storeScalar<uint64_t>(m_rdram, physAddr, PS2_RAM_SIZE, value, "write64 rdram", address);
    }
    else
    {
        uint32_t vuOffset = 0;
        uint32_t vuLimit = 0;
        if (uint8_t *vuMem = mapVuMemory(physAddr, sizeof(uint64_t), vuOffset, vuLimit))
        {
            storeScalar<uint64_t>(vuMem, vuOffset, vuLimit, value, "write64 vu", address);
            if (vuMem == m_vu0Code)
                markVU0CodeModified();
            else if (vuMem == m_vu1Code)
                markVU1CodeModified();
            return;
        }
    }
    if (isIoRegister(physAddr))
    {
        write32(address, (uint32_t)value);
        write32(address + 4, (uint32_t)(value >> 32));
    }
}

void PS2Memory::write128(uint32_t address, __m128i value)
{
    if (address & 15)
    {
        throw std::runtime_error("Unaligned 128-bit write at address: 0x" + std::to_string(address));
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (!scratch && physAddr == 0x10004000u) // VIF0_FIFO
    {
        alignas(16) uint8_t fifoData[16];
        _mm_storeu_si128(reinterpret_cast<__m128i *>(fifoData), value);
        processVIF0Data(fifoData, sizeof(fifoData));
        return;
    }
    if (!scratch && physAddr == 0x10005000u) // VIF1_FIFO
    {
        alignas(16) uint8_t fifoData[16];
        _mm_storeu_si128(reinterpret_cast<__m128i *>(fifoData), value);
        if (dmaSinkActive())
        {
            dmaSinkScanVif1(fifoData, sizeof(fifoData));
            DmaSinkJob job;
            job.kind = DmaSinkJob::Vif1;
            job.data.assign(fifoData, fifoData + sizeof(fifoData));
            dmaSinkEnqueue(this, std::move(job));
            return;
        }
        processVIF1Data(fifoData, sizeof(fifoData));
        return;
    }

    if (scratch)
    {
        inRange(physAddr, sizeof(__m128i), PS2_SCRATCHPAD_SIZE, "write128 scratchpad", address);
        _mm_storeu_si128(reinterpret_cast<__m128i *>(&m_scratchpad[physAddr]), value);
    }
    else if (physAddr < PS2_RAM_SIZE)
    {
        markModified(address, 16);
        inRange(physAddr, sizeof(__m128i), PS2_RAM_SIZE, "write128 rdram", address);
        _mm_storeu_si128(reinterpret_cast<__m128i *>(&m_rdram[physAddr]), value);
    }
    else
    {
        uint32_t vuOffset = 0;
        uint32_t vuLimit = 0;
        if (uint8_t *vuMem = mapVuMemory(physAddr, sizeof(__m128i), vuOffset, vuLimit))
        {
            inRange(vuOffset, sizeof(__m128i), vuLimit, "write128 vu", address);
            _mm_storeu_si128(reinterpret_cast<__m128i *>(vuMem + vuOffset), value);
            if (vuMem == m_vu0Code)
                markVU0CodeModified();
            else if (vuMem == m_vu1Code)
                markVU1CodeModified();
            return;
        }
    }
    if (isIoRegister(physAddr))
    {
        // Non-RAM 128-bit stores are modeled as two 64-bit stores.
        uint64_t lo = _mm_extract_epi64(value, 0);
        uint64_t hi = _mm_extract_epi64(value, 1);

        write64(address, lo);
        write64(address + 8, hi);
    }
}

bool PS2Memory::writeIORegister(uint32_t address, uint32_t value)
{
    size_t timerIndex = 0u;
    uint32_t timerOffset = 0u;
    if (decodeEeTimerRegister(address, timerIndex, timerOffset))
        (void)advanceEeTimers(kEeTimerFlush);
    if (decodeEeTimerRegister(address, timerIndex, timerOffset))
    {
        EeTimer &timer = m_eeTimers[timerIndex];
        switch (timerOffset)
        {
        case kEeTimerCountOffset:
            timer.count = value & 0xFFFFu;
            timer.clockRemainder = 0u;
            break;
        case kEeTimerModeOffset:
        {
            const uint32_t previousMode = timer.mode;
            const uint32_t status = (previousMode & kEeTimerModeStatusMask) & ~(value & kEeTimerModeStatusMask);
            timer.mode = (value & kEeTimerModeConfigMask) | status;
            if (((previousMode ^ timer.mode) & (kEeTimerModeClksMask | kEeTimerModeCue)) != 0u)
            {
                timer.clockRemainder = 0u;
            }
            break;
        }
        case kEeTimerCompareOffset:
            timer.compare = value & 0xFFFFu;
            break;
        case kEeTimerHoldOffset:
            timer.hold = value & 0xFFFFu;
            break;
        default:
            return false;
        }
        return true;
    }

    if (isGsPrivReg(address))
    {
        // NB: unreachable from write8/16/32/64 today since those all funnel IO
        // register writes through addresses in PS2_IO_BASE's range, which is
        // disjoint from PS2_GS_PRIV_REG_BASE; kept correct for direct callers.
        m_ioRegisters[address] = value;
        const uint32_t off = address & 7u;
        const uint32_t regOff = (address - PS2_GS_PRIV_REG_BASE) & ~0x7u;
        if (regOff == kGsCsrRegOffset)
        {
            writeCsrHalf(gs_regs.csr, off, value);
        }
        else if (uint64_t *reg = gsRegPtr(gs_regs, address))
        {
            const uint64_t mask = 0xFFFFFFFFull << (off * 8u);
            *reg = (*reg & ~mask) | (static_cast<uint64_t>(value) << (off * 8u));
            dmaSinkNoteDisplayRegs(this);
        }
        m_gsWriteCount.fetch_add(1, std::memory_order_relaxed);
        return true;
    }

    if (address >= 0x10002000 && address <= 0x10002030)
    {
        if (address == 0x10002010)
        {
            m_ioRegisters[address] = value & ~(1u << 31);
            if (value & (1u << 30))
            {
                m_ioRegisters[0x10002000] = 0;
                m_ioRegisters[0x10002020] = 0;
                m_ioRegisters[0x10002030] = 0;
            }
        }
        else
        {
            m_ioRegisters[address] = value;
        }
        return true;
    }

    if (address == 0x1000E010u)
    {
        const uint32_t current = m_ioRegisters.count(address) ? m_ioRegisters[address] : 0u;
        uint32_t status = current & 0x3FFu;
        uint32_t mask = (current >> 16) & 0x3FFu;

        // D_STAT low bits are W1C status, high bits [16..25] toggle masks on write-one.
        status &= ~(value & 0x3FFu);
        mask ^= ((value >> 16) & 0x3FFu);

        uint32_t next = (current & ~((0x3FFu) | (0x3FFu << 16) | (1u << 31)));
        next |= status | (mask << 16);
        if ((status & mask) != 0u)
            next |= (1u << 31);
        m_ioRegisters[address] = next;
        return true;
    }

    m_ioRegisters[address] = value;

    if (address >= 0x10003C00u && address < 0x10003E00u)
    {
        m_vifWriteCount.fetch_add(1, std::memory_order_relaxed);

        switch (address)
        {
        case 0x10003C10u:     // VIF1_FBRST
            if (dmaSinkActive())
            {
                if (value & 0x1u)
                {
                    g_dmaSink.maskShadow = false;
                    g_dmaSink.fifoPacketsShadow = 0u;
                    g_dmaSink.cycleShadow = 0u;
                    g_dmaSink.pendingDirectQw = 0u;
                }
                DmaSinkJob job;
                job.kind = DmaSinkJob::Vif1Reset;
                job.value = value;
                dmaSinkEnqueue(this, std::move(job));
                break;
            }
            if (value & 0x1u) // RST
            {
                const bool wasPath3Masked = m_path3Masked;
                std::memset(&vif1_regs, 0, sizeof(vif1_regs));
                m_vif1PendingPath2ImageQwc = 0u;
                m_vif1PendingPath2DirectHl = false;
                m_path3Masked = false;
                if (wasPath3Masked)
                    flushMaskedPath3Packets();
            }
            if (value & 0x8u) // STC
            {
                vif1_regs.stat &= ~((1u << 8) | (1u << 9) | (1u << 10) | (1u << 11) | (1u << 12) | (1u << 13));
            }
            break;
        case 0x10003C30u:
            vif1_regs.mark = value & 0xFFFFu;
            vif1_regs.stat &= ~(1u << 6); // clear MRK flag on CPU write
            break;
        case 0x10003C40u:
            dmaSinkDrain();
            g_dmaSink.cycleShadow = value & 0xFFFFu;
            vif1_regs.cycle = value & 0xFFFFu;
            break;
        case 0x10003C50u:
            vif1_regs.mode = value & 0x3u;
            break;
        case 0x10003C60u:
            vif1_regs.num = value & 0xFFu;
            break;
        case 0x10003C70u:
            vif1_regs.mask = value;
            break;
        case 0x10003C80u:
            vif1_regs.code = value;
            break;
        case 0x10003C90u:
            vif1_regs.itops = value & 0x3FFu;
            break;
        case 0x10003CA0u:
            vif1_regs.base = value & 0x3FFu;
            break;
        case 0x10003CB0u:
            vif1_regs.ofst = value & 0x3FFu;
            break;
        case 0x10003CC0u:
            vif1_regs.tops = value & 0x3FFu;
            break;
        case 0x10003CD0u:
            vif1_regs.itop = value & 0x3FFu;
            break;
        case 0x10003CE0u:
            vif1_regs.top = value & 0x3FFu;
            break;
        default:
            break;
        }

        return true;
    }

    if (address >= 0x10003800u && address < 0x10003A00u)
    {
        m_vifWriteCount.fetch_add(1, std::memory_order_relaxed);
        return true;
    }

    if (address >= 0x10008000 && address < 0x1000F000)
    {
        if ((address & 0xFF) == 0x00 && (value & 0x100))
        {
            const auto dctrlIt = m_ioRegisters.find(0x1000E000u);
            const bool dmacEnabled = (dctrlIt == m_ioRegisters.end()) || ((dctrlIt->second & 0x1u) != 0u);
            if (!dmacEnabled)
            {
                return true;
            }

            const uint32_t channelBase = address & 0xFFFFFF00;
            const uint32_t madr = m_ioRegisters[channelBase + 0x10];
            const uint32_t qwc = m_ioRegisters[channelBase + 0x20];
            traceGifTimeline("DMA_START", channelBase, value,
                             (static_cast<uint64_t>(m_ioRegisters[channelBase + 0x30]) << 32u) | qwc);
            m_dmaStartCount.fetch_add(1, std::memory_order_relaxed);
            {
                static const bool s_trace = std::getenv("PS2X_DMA_TRACE") != nullptr;
                static std::atomic<unsigned> s_logged{0};
                if (s_trace && s_logged.fetch_add(1, std::memory_order_relaxed) < 400u)
                {
                    std::fprintf(stderr, "[dma] ch=0x%08x chcr=0x%08x mode=%u madr=0x%08x qwc=0x%x tadr=0x%08x vram=%d\n",
                                 channelBase, value, (value >> 2) & 3u, madr, qwc, m_ioRegisters[channelBase + 0x30],
                                 m_gsVRAM ? 1 : 0);
                }
            }

            if (tryProcessScratchpadDma(channelBase, value))
            {
                return true;
            }

            if ((channelBase == 0x1000A000u || channelBase == 0x10009000u || channelBase == 0x10008000u) && (m_gsVRAM || channelBase == 0x10008000u))
            {
                auto enqueueTransfer = [&](uint32_t srcAddr, uint32_t qwCount)
                {
                    if (qwCount == 0)
                        return;
                    const bool scratch = isScratchpad(srcAddr);
                    PendingTransfer pt;
                    pt.fromScratchpad = scratch;
                    pt.srcAddr = srcAddr;
                    pt.qwc = qwCount;
                    if (channelBase == 0x1000A000u)
                    {
                        ps2xOrderTrace('g', 0);
                        m_pendingGifTransfers.push_back(pt);
                    }
                    else if (channelBase == 0x10009000u)
                    {
                        ps2xOrderTrace('V', 0);
                        m_pendingVif1Transfers.push_back(pt);
                    }
                    else if (channelBase == 0x10008000u)
                        m_pendingVif0Transfers.push_back(pt);
                };

                uint32_t chcr = value;
                uint32_t mode = (chcr >> 2) & 0x3;

                if (mode == 0 && qwc > 0)
                {
                    enqueueTransfer(madr, qwc);
                }
                else if (mode == 1)
                {
                    uint32_t tagAddr = m_ioRegisters[channelBase + 0x30];
                    if (channelBase == 0x1000A000u)
                    {
                        uint32_t phys = tagAddr;
                        try
                        {
                            phys = translateAddress(tagAddr);
                        }
                        catch (const std::exception &)
                        {
                            phys = tagAddr;
                        }
                        uint32_t adjusted = phys;
                        if (gifChainStartsInsideEarlierTag(m_rdram, PS2_RAM_SIZE, adjusted) && adjusted < phys)
                            tagAddr -= phys - adjusted;
                    }
                    uint32_t asr0 = m_ioRegisters[channelBase + 0x40];
                    uint32_t asr1 = m_ioRegisters[channelBase + 0x50];
                    uint32_t asp = (chcr >> 4) & 0x3u;
                    const bool tieEnabled = (chcr & (1u << 7)) != 0u;
                    // VIF1 geometry chains in Black exceed 4096 mostly unique
                    // CALL/RET/REF tags. Stopping at 4096 cuts the stream at a
                    // CALL instead of reaching END, dropping the rest of a frame.
                    const int kMaxChainTags = channelBase == 0x10009000u ? 16384 : 4096;
                    // The chain is copied tag by tag; without room set aside the vector regrows (and
                    // re-copies) many times per kick. Each channel's chains are about as long as its last one.
                    static thread_local size_t chainSizeHint[16] = {};
                    size_t &chainHint = chainSizeHint[(channelBase >> 12) & 0xFu];
                    std::vector<uint8_t> chainBuf = dmaChainBufferTake(std::max<size_t>(chainHint + chainHint / 4u, 4096u));
                    static const char *chainMapPath = std::getenv("PS2X_DMA_CHAIN_MAP");
                    static const char *chainMapAllPath = std::getenv("PS2X_DMA_CHAIN_MAP_ALL");
                    static const char *vifTex0MapPath = std::getenv("PS2X_VIF_TEX0_MAP");
                    static const char *chainMapActivePath = std::getenv("PS2X_DMA_CHAIN_MAP_ACTIVE");
                    static const char *chainMapActiveTrigger = std::getenv("PS2X_DMA_CHAIN_MAP_ACTIVE_TRIGGER");
                    static const size_t chainMapTargetBytes = [] {
                        const char *value = std::getenv("PS2X_DMA_CHAIN_MAP_TARGET_BYTES");
                        return value ? static_cast<size_t>(std::strtoull(value, nullptr, 0)) : size_t(0);
                    }();
                    static const char *chainRefDumpPath = std::getenv("PS2X_DMA_REF_DUMP");
                    struct ChainMapEntry { uint32_t address, offset; uint64_t low, high; };
                    std::vector<ChainMapEntry> chainMap;
                    const bool chainMapActive = [&] {
                        if (!chainMapActivePath || !chainMapActiveTrigger || channelBase != 0x1000A000u)
                            return false;
                        FILE *trigger = std::fopen(chainMapActiveTrigger, "rb");
                        if (!trigger) return false;
                        std::fclose(trigger);
                        return true;
                    }();


                    auto appendData = [&](uint32_t srcAddr, uint32_t qwCount)
                    {
                        const uint64_t bytes64 = static_cast<uint64_t>(qwCount) * 16ull;
                        uint32_t bytes = (bytes64 > 0xFFFFFFFFull) ? 0xFFFFFFFFu : static_cast<uint32_t>(bytes64);
                        const bool scratch = isScratchpad(srcAddr);
                        uint32_t src = 0;
                        src = translateAddress(srcAddr);
                        const uint8_t *base2;
                        uint32_t maxSz2;
                        if (scratch)
                        {
                            base2 = m_scratchpad;
                            maxSz2 = PS2_SCRATCHPAD_SIZE;
                        }
                        else
                        {
                            base2 = m_rdram;
                            maxSz2 = PS2_RAM_SIZE;
                        }

                        while (bytes > 0)
                        {
                            if (src >= maxSz2)
                                src = 0;
                            uint32_t chunk = bytes;
                            if (src + chunk > maxSz2)
                                chunk = maxSz2 - src;
                            if (chunk == 0)
                                break;
                            chainBuf.insert(chainBuf.end(), base2 + src, base2 + src + chunk);
                            bytes -= chunk;
                            src += chunk;
                        }
                    };

                    auto appendVifTagData = [&](uint32_t localTagAddr)
                    {
                        uint32_t tagPhys = 0u;
                        const bool tagScratch = isScratchpad(localTagAddr);
                        tagPhys = translateAddress(localTagAddr);

                        const uint8_t *localBase = tagScratch ? m_scratchpad : m_rdram;
                        const uint32_t localMax = tagScratch ? PS2_SCRATCHPAD_SIZE : PS2_RAM_SIZE;
                        if (tagPhys + 16u > localMax)
                            return;

                        // CHCR.TTE sends the DMAtag's upper 64 bits to the channel before
                        // the tag payload. VIF chains use those bytes for two VIFcodes.
                        chainBuf.insert(chainBuf.end(), localBase + tagPhys + 8u, localBase + tagPhys + 16u);
                    };

                    const bool isVifChannel =
                        channelBase == 0x10009000u || channelBase == 0x10008000u;
                    const bool transferTagData = isVifChannel && (chcr & 0x40u) != 0u;

                    int tagsProcessed = 0;
                    uint32_t lastTagUpper = (chcr >> 16) & 0xFFFFu;

                    while (tagsProcessed < kMaxChainTags)
                    {
                        const uint32_t currentTagAddr = tagAddr;
                        const bool tagInSPR = isScratchpad(tagAddr);
                        uint32_t physTag = 0;
                        try
                        {
                            physTag = translateAddress(tagAddr);
                        }
                        catch (...)
                        {
                            break;
                        }
                        const uint8_t *tagBase;
                        uint32_t tagMax;
                        if (tagInSPR)
                        {
                            tagBase = m_scratchpad;
                            tagMax = PS2_SCRATCHPAD_SIZE;
                        }
                        else
                        {
                            tagBase = m_rdram;
                            tagMax = PS2_RAM_SIZE;
                        }
                        if (physTag + 16 > tagMax)
                            break;

                        const uint8_t *tp = tagBase + physTag;
                        uint64_t tag = loadScalar<uint64_t>(tp, 0, 16, "dma chain tag", tagAddr);
                        uint16_t tagQwc = static_cast<uint16_t>(tag & 0xFFFF);
                        uint32_t id = static_cast<uint32_t>((tag >> 28) & 0x7);
                        const bool irq = ((tag >> 31) & 0x1ull) != 0ull;
                        uint32_t addr = static_cast<uint32_t>((tag >> 32) & 0x7FFFFFFF);
                        lastTagUpper = static_cast<uint32_t>((tag >> 16) & 0xFFFFu);
                        if (chainMapPath || chainMapAllPath || chainMapActive ||
                            (vifTex0MapPath && channelBase == 0x10009000u))
                            chainMap.push_back({currentTagAddr, static_cast<uint32_t>(chainBuf.size()), tag,
                                loadScalar<uint64_t>(tp, 8, 16, "dma chain tag high", tagAddr)});
                        ++tagsProcessed;
                        if (channelBase == 0x1000A000u)
                            ps2xOrderTrace('t', (id << 28) | (irq ? 0x08000000u : 0u) | tagQwc); // GIF DMAtag: id, IRQ, QWC

                        uint32_t dataAddr = 0;
                        bool hasPayload = (tagQwc > 0);
                        bool endChain = false;

                        switch (id)
                        {
                        case 0:
                            dataAddr = addr;
                            tagAddr = tagAddr + 16;
                            endChain = true;
                            break;
                        case 1:
                            dataAddr = tagAddr + 16;
                            tagAddr = dataAddr + static_cast<uint32_t>(tagQwc) * 16u;
                            break;
                        case 2:
                            dataAddr = tagAddr + 16;
                            tagAddr = addr;
                            break;
                        case 3:
                        case 4:
                            dataAddr = addr;
                            tagAddr = tagAddr + 16;
                            break;
                        case 5:
                            dataAddr = tagAddr + 16;
                            {
                                const uint32_t retAddr = dataAddr + static_cast<uint32_t>(tagQwc) * 16u;
                                if (asp == 0u)
                                {
                                    asr0 = retAddr;
                                    asp = 1u;
                                }
                                else if (asp == 1u)
                                {
                                    asr1 = retAddr;
                                    asp = 2u;
                                }
                            }
                            tagAddr = addr;
                            break;
                        case 6:
                            dataAddr = tagAddr + 16;
                            if (asp == 2u)
                            {
                                tagAddr = asr1;
                                asp = 1u;
                            }
                            else if (asp == 1u)
                            {
                                tagAddr = asr0;
                                asp = 0u;
                            }
                            else
                            {
                                endChain = true;
                            }
                            break;
                        case 7:
                            dataAddr = tagAddr + 16;
                            endChain = true;
                            break;
                        default:
                            hasPayload = false;
                            endChain = true;
                            break;
                        }

                        if (transferTagData)
                            appendVifTagData(currentTagAddr);

                        if (hasPayload)
                        {
                            if (chainRefDumpPath && channelBase == 0x1000A000u && (id == 3u || id == 4u) &&
                                dataAddr == 0x007AEA80u && tagQwc == 1462u && !isScratchpad(dataAddr))
                            {
                                const uint32_t payloadPhys = translateAddress(dataAddr);
                                const uint32_t payloadBytes = static_cast<uint32_t>(tagQwc) * 16u;
                                const bool targetTextureRef = chainBuf.size() == 4508224u;
                                const std::string dumpPath = std::string(chainRefDumpPath) + (targetTextureRef ? ".target" : ".first");
                                static bool firstRefDumped = false;
                                static bool targetRefDumped = false;
                                bool &alreadyDumped = targetTextureRef ? targetRefDumped : firstRefDumped;
                                FILE *dump = alreadyDumped ? nullptr : std::fopen(dumpPath.c_str(), "wb");
                                if (dump)
                                {
                                    std::fwrite(m_rdram + payloadPhys, 1, payloadBytes, dump);
                                    std::fclose(dump);
                                    alreadyDumped = true;
                                    std::fprintf(stderr, "[dma-ref-dump] EE=%08x phys=%08x bytes=%u chain_offset=%zu path=%s\n",
                                                 dataAddr, payloadPhys, payloadBytes, chainBuf.size(), dumpPath.c_str());
                                }
                            }
                            appendData(dataAddr, tagQwc);
                        }
                        if (irq && tieEnabled)
                            endChain = true;
                        if (endChain)
                            break;
                    }
                    if (tagsProcessed == kMaxChainTags)
                    {
                        static std::atomic<unsigned> s_limitWarnings{0};
                        if (s_limitWarnings.fetch_add(1, std::memory_order_relaxed) < 8u)
                            std::fprintf(stderr, "[dma-chain] tag limit reached ch=%08x tadr=%08x limit=%d\n",
                                         channelBase, tagAddr, kMaxChainTags);
                    }

                    if (chainMapPath && channelBase == 0x1000A000u && chainBuf.size() > 4u * 1024u * 1024u)
                    {
                        static bool capturedChainMap = false;
                        if (!capturedChainMap)
                        {
                            FILE *map = std::fopen(chainMapPath, "w");
                            if (map)
                            {
                                std::fprintf(map, "channel=%08x chcr=%08x bytes=%zu tags=%d final_tadr=%08x limit=%d\n",
                                             channelBase, value, chainBuf.size(), tagsProcessed, tagAddr, kMaxChainTags);
                                for (const auto &entry : chainMap)
                                    std::fprintf(map, "%08x %u %016llx %016llx\n", entry.address, entry.offset,
                                                 static_cast<unsigned long long>(entry.low), static_cast<unsigned long long>(entry.high));
                                std::fclose(map);
                                capturedChainMap = true;
                            }
                        }
                    }
                    // Optional bounded provenance log. This complements the legacy
                    // first-large-chain map and leaves the normal transfer path untouched.
                    if (chainMapAllPath && channelBase == 0x1000A000u && chainBuf.size() > 4u * 1024u * 1024u)
                    {
                        static unsigned capturedLargeChains = 0;
                        if (capturedLargeChains < 32u)
                        {
                            FILE *map = std::fopen(chainMapAllPath, capturedLargeChains == 0u ? "w" : "a");
                            if (map)
                            {
                                std::fprintf(map, "chain=%u channel=%08x chcr=%08x bytes=%zu tags=%d final_tadr=%08x limit=%d\n",
                                             capturedLargeChains, channelBase, value, chainBuf.size(), tagsProcessed, tagAddr, kMaxChainTags);
                                for (const auto &entry : chainMap)
                                    std::fprintf(map, "%08x %u %016llx %016llx\n", entry.address, entry.offset,
                                                 static_cast<unsigned long long>(entry.low), static_cast<unsigned long long>(entry.high));
                                std::fclose(map);
                                ++capturedLargeChains;
                            }
                        }
                    }
                    // Keep the most recent matching chain while the GPU snapshot
                    // trigger exists. The snapshot removes the trigger, freezing
                    // the map for the chain immediately preceding its TEX0.
                    if (chainMapActive && chainBuf.size() > 4u * 1024u * 1024u &&
                        (!chainMapTargetBytes || chainBuf.size() == chainMapTargetBytes))
                    {
                        uint64_t hash = 14695981039346656037ull;
                        for (uint8_t byte : chainBuf)
                            hash = (hash ^ byte) * 1099511628211ull;
                        FILE *map = std::fopen(chainMapActivePath, "w");
                        if (map)
                        {
                            std::fprintf(map, "channel=%08x chcr=%08x bytes=%zu tags=%d final_tadr=%08x fnv64=%016llx\n",
                                         channelBase, value, chainBuf.size(), tagsProcessed, tagAddr,
                                         static_cast<unsigned long long>(hash));
                            for (const auto &entry : chainMap)
                                std::fprintf(map, "%08x %u %016llx %016llx\n", entry.address, entry.offset,
                                             static_cast<unsigned long long>(entry.low), static_cast<unsigned long long>(entry.high));
                            std::fclose(map);
                        }
                    }
                    // Locate the indexed TEX0 in the original VIF1 DMA payload.
                    // This is diagnostic only; the value is read from guest data.
                    if (vifTex0MapPath && channelBase == 0x10009000u)
                    {
                        constexpr uint64_t kObservedTex0 = 0x2005afe55d40ad60ull;
                        for (size_t offset = 0; offset + sizeof(uint64_t) <= chainBuf.size(); offset += 8u)
                        {
                            uint64_t word = 0;
                            std::memcpy(&word, chainBuf.data() + offset, sizeof(word));
                            if (word != kObservedTex0) continue;
                            FILE *map = std::fopen(vifTex0MapPath, "w");
                            if (map)
                            {
                                std::fprintf(map, "channel=%08x chcr=%08x bytes=%zu tags=%d tex0_offset=%zu final_tadr=%08x\n",
                                             channelBase, value, chainBuf.size(), tagsProcessed, offset, tagAddr);
                                for (const auto &entry : chainMap)
                                    std::fprintf(map, "%08x %u %016llx %016llx\n", entry.address, entry.offset,
                                                 static_cast<unsigned long long>(entry.low), static_cast<unsigned long long>(entry.high));
                                std::fclose(map);
                            }
                            break;
                        }
                    }
                    m_ioRegisters[channelBase + 0x30] = tagAddr;
                    m_ioRegisters[channelBase + 0x40] = asr0;
                    m_ioRegisters[channelBase + 0x50] = asr1;
                    chcr = (chcr & ~(0x3u << 4)) | ((asp & 0x3u) << 4);
                    chcr = (chcr & 0x0000FFFFu) | (lastTagUpper << 16);
                    chainHint = chainBuf.size();
                    if (chainBuf.empty())
                        chcr &= ~0x100u;
                    m_ioRegisters[channelBase + 0x00] = chcr;
                    traceGifTimeline("DMA_CHAIN_READY", channelBase, chainBuf.size(),
                                     (static_cast<uint64_t>(tagsProcessed) << 32u) | tagAddr);

                    if ([] { static const bool enabled = std::getenv("PS2X_DMA_TRACE") != nullptr; return enabled; }())
                    {
                        static std::atomic<unsigned> s_chainLogged{0};
                        if (s_chainLogged.fetch_add(1, std::memory_order_relaxed) < 300u)
                        {
                            uint64_t lo = 0, hi = 0;
                            if (chainBuf.size() >= 16u)
                            {
                                std::memcpy(&lo, chainBuf.data(), 8);
                                std::memcpy(&hi, chainBuf.data() + 8, 8);
                            }
                            std::fprintf(stderr, "[dma-chain] ch=0x%08x tags=%d bytes=%zu first=%016llx_%016llx\n",
                                         channelBase, tagsProcessed, chainBuf.size(), (unsigned long long)hi,
                                         (unsigned long long)lo);
                        }
                    }
                    if (!chainBuf.empty())
                    {
                        PendingTransfer pt;
                        pt.fromScratchpad = false;
                        pt.srcAddr = 0;
                        pt.qwc = 0;
                        pt.chainData = std::move(chainBuf);
                        if (channelBase == 0x1000A000)
                        {
                            while (!m_pendingGifTransfers.empty())
                                processPendingTransfers();
                            m_path3PacingCredit = 0;
                            ps2xOrderTrace('g', 0);
                            m_pendingGifTransfers.push_back(std::move(pt));
                        }
                        else if (channelBase == 0x10009000u)
                        {
                            g_ramDumpSource = m_rdram;
                            ps2xOrderTrace('V', 0);
                            g_orderTraceVifKick = g_orderTraceCycles;
                            ps2xOrderTrace('B', static_cast<uint32_t>(pt.chainData.size() / 1024u)); // VIF1 chain KiB
                            ps2xOrderTrace('N', static_cast<uint32_t>(tagsProcessed));           // VIF1 DMAtags
                            m_pendingVif1Transfers.push_back(std::move(pt));
                        }
                        else if (channelBase == 0x10008000u)
                        {
                            m_pendingVif0Transfers.push_back(std::move(pt));
                        }
                    }
                    // else if (channelBase == 0x10009000u)
                    // {

                    // }
                }
                else if (qwc > 0)
                {
                    enqueueTransfer(madr, qwc);
                }

                const bool autoProcessTransfers =
                    (channelBase == 0x1000A000u) ? (m_gifPacketCallback || m_gifArbiter != nullptr) : true;
                if (autoProcessTransfers)
                {
                    processPendingTransfers();
                }
            }
        }
        return true;
    }

    if (address >= 0x10000000 && address < 0x10010000)
    {
        if (address >= 0x10000200 && address < 0x10000300)
        {
            return true;
        }
        if (address >= 0x10000000 && address < 0x10000100)
        {
            return true;
        }
    }

    return false;
}

bool PS2Memory::tryProcessScratchpadDma(uint32_t channelBase, uint32_t chcr)
{
    static constexpr uint32_t kSprFromChannel = 0x1000D000u;
    static constexpr uint32_t kSprToChannel = 0x1000D400u;
    if (channelBase != kSprFromChannel && channelBase != kSprToChannel)
        return false;

    const uint32_t mode = (chcr >> 2u) & 0x3u;
    if (mode != 0u)
        return false;

    const uint32_t qwc = m_ioRegisters[channelBase + 0x20u] & 0xFFFFu;
    const uint32_t byteCount = qwc * 16u;
    const uint32_t originalMadr = m_ioRegisters[channelBase + 0x10u] & 0x7FFFFFF0u;
    const uint32_t originalSadr = m_ioRegisters[channelBase + 0x80u] & 0x3FF0u;

    uint32_t mainOffset = 0u;
    try
    {
        mainOffset = translateAddress(originalMadr);
    }
    catch (const std::exception &)
    {
        return false;
    }

    if (mainOffset > PS2_RAM_SIZE || byteCount > PS2_RAM_SIZE - mainOffset)
        return false;

    const bool fromScratchpad = channelBase == kSprFromChannel;
    uint32_t scratchOffset = originalSadr;
    uint32_t bytesLeft = byteCount;
    uint32_t copied = 0u;
    while (bytesLeft != 0u)
    {
        const uint32_t scratchChunk = PS2_SCRATCHPAD_SIZE - scratchOffset;
        const uint32_t chunk = std::min(bytesLeft, scratchChunk);
        if (fromScratchpad)
        {
            std::memcpy(m_rdram + mainOffset + copied, m_scratchpad + scratchOffset, chunk);
            markModified(mainOffset + copied, chunk);
        }
        else
        {
            std::memcpy(m_scratchpad + scratchOffset, m_rdram + mainOffset + copied, chunk);
        }

        copied += chunk;
        bytesLeft -= chunk;
        scratchOffset = (scratchOffset + chunk) & (PS2_SCRATCHPAD_SIZE - 1u);
    }

    m_ioRegisters[channelBase + 0x10u] = (originalMadr + byteCount) & 0x7FFFFFF0u;
    m_ioRegisters[channelBase + 0x20u] = 0u;
    m_ioRegisters[channelBase + 0x80u] = (originalSadr + byteCount) & 0x3FF0u;
    completeDmacChannel(channelBase, fromScratchpad ? 8u : 9u);
    return true;
}

void PS2Memory::completeDmacChannel(uint32_t channelBase, uint32_t cause)
{
    static constexpr uint32_t kDStat = 0x1000E010u;
    m_ioRegisters[channelBase] &= ~0x100u;

    uint32_t dstat = m_ioRegisters.count(kDStat) ? m_ioRegisters[kDStat] : 0u;
    dstat |= 1u << cause;
    const uint32_t status = dstat & 0x3FFu;
    const uint32_t mask = (dstat >> 16u) & 0x3FFu;
    if ((status & mask) != 0u)
        dstat |= 1u << 31u;
    else
        dstat &= ~(1u << 31u);
    m_ioRegisters[kDStat] = dstat;
    if (cause == 2u) ps2xOrderTrace('C', 0);
    traceGifTimeline("DMA_COMPLETE", channelBase, cause, dstat);
    queueCompletedDmacCause(cause);
}

void PS2Memory::processPendingTransfers()
{
    static const bool traceIncremental = std::getenv("PS2X_GIF_INCREMENTAL_TRACE") != nullptr;
    static thread_local uint32_t serviceDepth = 0u;
    struct ServiceDepthScope
    {
        uint32_t &depth;
        explicit ServiceDepthScope(uint32_t &value) : depth(value) { ++depth; }
        ~ServiceDepthScope() { --depth; }
    } depthScope(serviceDepth);
    const bool cooperative = cooperativeDmaEnabled();
    // XGKICK can call the service while a VIF command still owns the front
    // transfer. Do not invalidate that transfer or consume the next command.
    if (cooperative && serviceDepth > 1u) return;
    const bool hadGif = !m_pendingGifTransfers.empty();
    const bool incrementalGif = incrementalGifDmaEnabled();
    bool hadVif1Early = false;
    bool sunk = false;
    if (dmaSinkActive())
    {
        const auto snapshot = [](const PendingTransfer &p) { return !p.chainData.empty(); };
        // VIF0 transfers stay on this thread: VIF0/VU0 state is not shared with the worker.
        if (std::all_of(m_pendingGifTransfers.begin(), m_pendingGifTransfers.end(), snapshot) &&
            std::all_of(m_pendingVif1Transfers.begin(), m_pendingVif1Transfers.end(), snapshot))
        {
            // Same order as the synchronous service: PATH3 chain first, then VIF1.
            for (auto &p : m_pendingGifTransfers)
            {
                m_seenGifCopy = true;
                m_gifCopyCount.fetch_add(1, std::memory_order_relaxed);
                if (g_dmaSink.maskShadow)
                {
                    for (size_t offset = 0u; offset + 16u <= p.chainData.size();)
                    {
                        const size_t packet = gifEopPacketSize(p.chainData.data() + offset, p.chainData.size() - offset);
                        if (packet < 16u)
                            break;
                        ++g_dmaSink.fifoPacketsShadow;
                        offset += packet;
                    }
                }
                else
                    g_dmaSink.fifoPacketsShadow = 0u; // an unmasked chain flushes whatever was held
                DmaSinkJob job;
                job.kind = DmaSinkJob::Gif;
                job.data = std::move(p.chainData);
                dmaSinkEnqueue(this, std::move(job));
            }
            m_pendingGifTransfers.clear();
            for (auto &p : m_pendingVif1Transfers)
            {
                dmaSinkScanVif1(p.chainData.data(), static_cast<uint32_t>(p.chainData.size()));
                DmaSinkJob job;
                job.kind = DmaSinkJob::Vif1;
                job.data = std::move(p.chainData);
                dmaSinkEnqueue(this, std::move(job));
                hadVif1Early = true;
            }
            m_pendingVif1Transfers.clear();
            sunk = true;
        }
        else
        {
            dmaSinkDrain(); // not a chain snapshot: run it here, behind everything queued
        }
    }
    traceGifTimeline("SERVICE_BEGIN", m_pendingGifTransfers.size(), m_pendingVif1Transfers.size(),
                     (static_cast<uint64_t>(serviceDepth - 1u) << 32u) |
                         (hadGif ? m_pendingGifTransfers.front().byteOffset : 0u));

    if (traceIncremental && incrementalGif && (hadGif || !m_pendingVif1Transfers.empty()))
    {
        static uint64_t calls = 0u;
        if (calls < 256u)
        {
            const uint32_t gifChcr = m_ioRegisters.count(0x1000A000u) ? m_ioRegisters[0x1000A000u] : 0u;
            const uint32_t vif1Chcr = m_ioRegisters.count(0x10009000u) ? m_ioRegisters[0x10009000u] : 0u;
            const size_t offset = hadGif ? m_pendingGifTransfers.front().byteOffset : 0u;
            std::fprintf(stderr, "[gif-service] depth=%u call=%llu gif=%zu vif1=%zu offset=%zu chcr=%08x/%08x masked=%u\n",
                         serviceDepth - 1u, static_cast<unsigned long long>(calls++), m_pendingGifTransfers.size(),
                         m_pendingVif1Transfers.size(), offset, gifChcr, vif1Chcr, unsigned(m_path3Masked));
        }
    }

    // VIF1 can produce PATH1 packets while a long PATH3 chain is still in
    // flight. Process a complete buffered VIF1 chain before advancing PATH3
    // to its next EOP; the arbiter can then give the ready PATH1 packet
    // priority at this packet boundary.
    if (!cooperative && incrementalGif && hadGif && !m_path3Masked && !m_pendingVif1Transfers.empty() &&
        std::all_of(m_pendingVif1Transfers.begin(), m_pendingVif1Transfers.end(),
                    [](const PendingTransfer &p) { return !p.chainData.empty(); }))
    {
        hadVif1Early = true;
        for (auto &transfer : m_pendingVif1Transfers)
        {
            traceGifTimeline("VIF1_CHAIN_PROCESS", transfer.chainData.size(), transfer.qwc, transfer.srcAddr);
            processVIF1Data(transfer.chainData.data(), static_cast<uint32_t>(transfer.chainData.size()));
        }
        m_pendingVif1Transfers.clear();
    }

    uint32_t observedGifQwc = 0u;
    for (const auto &transfer : m_pendingGifTransfers)
    {
        const uint64_t transferQwc = !transfer.chainData.empty()
                                         ? ((transfer.chainData.size() - std::min(transfer.byteOffset, transfer.chainData.size())) / 16u)
                                         : transfer.qwc;
        observedGifQwc = static_cast<uint32_t>(std::min<uint64_t>(16u, static_cast<uint64_t>(observedGifQwc) + transferQwc));
    }
    if (observedGifQwc != 0u)
    {
        constexpr uint32_t kGifStat = 0x10003020u;
        constexpr uint32_t kGifFqcMask = 0x1F000000u;
        uint32_t &gifStat = m_ioRegisters[kGifStat];
        gifStat = (gifStat & ~kGifFqcMask) | (observedGifQwc << 24u);
    }

    bool gifCompleted = !hadGif;
    if (!sunk && incrementalGif && hadGif && !m_path3Masked && !m_pendingGifTransfers.front().chainData.empty())
    {
        PendingTransfer &transfer = m_pendingGifTransfers.front();
        const size_t remaining = transfer.chainData.size() - std::min(transfer.byteOffset, transfer.chainData.size());
        const size_t packetSize = gifEopPacketSize(transfer.chainData.data() + transfer.byteOffset, remaining);
        const size_t packetOffset = transfer.byteOffset;
        if (packetSize >= 16u)
        {
            m_seenGifCopy = true;
            m_gifCopyCount.fetch_add(1, std::memory_order_relaxed);
            submitGifPacket(GifPathId::Path3, transfer.chainData.data() + transfer.byteOffset,
                            static_cast<uint32_t>(packetSize), false);
            const uint32_t gifChcr = m_ioRegisters.count(0x1000A000u) ? m_ioRegisters[0x1000A000u] : 0u;
            const uint32_t vif1Chcr = m_ioRegisters.count(0x10009000u) ? m_ioRegisters[0x10009000u] : 0u;
            traceGifTimeline("PATH3_EOP", packetOffset, packetSize,
                             (static_cast<uint64_t>(gifChcr) << 32u) | vif1Chcr);
            transfer.byteOffset += packetSize;
        }
        if (traceIncremental)
            std::fprintf(stderr, "[gif-eop] depth=%u offset=%zu bytes=%zu next=%zu total=%zu path1-ready=%u\n",
                         serviceDepth - 1u, packetOffset, packetSize, transfer.byteOffset, transfer.chainData.size(),
                         unsigned(m_gifArbiter != nullptr));
        if (transfer.byteOffset >= transfer.chainData.size())
            m_pendingGifTransfers.erase(m_pendingGifTransfers.begin());
        gifCompleted = m_pendingGifTransfers.empty();
    }
    else
    {
    for (size_t idx = 0; idx < m_pendingGifTransfers.size(); ++idx)
    {
        auto &p = m_pendingGifTransfers[idx];
        if (!p.chainData.empty())
        {
            m_seenGifCopy = true;
            m_gifCopyCount.fetch_add(1, std::memory_order_relaxed);
            ++(m_path3Masked ? g_path3GateStats.chainsMasked : g_path3GateStats.chainsUnmasked);
            if (m_gifArbiter && !m_path3Masked)
            {
                flushMaskedPath3Packets(false);
                m_gifArbiter->submit(GifPathId::Path3, std::move(p.chainData));
            }
            else
            {
                submitGifPacket(GifPathId::Path3, p.chainData.data(), static_cast<uint32_t>(p.chainData.size()), false);
            }
        }
        else if (p.qwc > 0)
        {
            const uint64_t bytes64 = static_cast<uint64_t>(p.qwc) * 16ull;
            uint32_t sizeBytes = (bytes64 > 0xFFFFFFFFull) ? 0xFFFFFFFFu : static_cast<uint32_t>(bytes64);
            uint32_t srcPhys = 0;
            try
            {
                srcPhys = translateAddress(p.srcAddr);
            }
            catch (const std::exception &)
            {
                continue;
            }
            if (p.fromScratchpad)
            {
                uint32_t bytesLeft = sizeBytes;
                while (bytesLeft >= 16)
                {
                    if (srcPhys >= PS2_SCRATCHPAD_SIZE)
                        srcPhys = 0;
                    uint32_t chunk = bytesLeft;
                    if (srcPhys + chunk > PS2_SCRATCHPAD_SIZE)
                        chunk = PS2_SCRATCHPAD_SIZE - srcPhys;
                    if (chunk == 0)
                        break;
                    m_seenGifCopy = true;
                    m_gifCopyCount.fetch_add(1, std::memory_order_relaxed);
                    submitGifPacket(GifPathId::Path3, m_scratchpad + srcPhys, chunk, false);
                    bytesLeft -= chunk;
                    srcPhys += chunk;
                }
            }
            else
            {
                uint32_t bytesLeft = sizeBytes;
                while (bytesLeft >= 16)
                {
                    if (srcPhys >= PS2_RAM_SIZE)
                        srcPhys = 0;
                    uint32_t chunk = bytesLeft;
                    if (srcPhys + chunk > PS2_RAM_SIZE)
                        chunk = PS2_RAM_SIZE - srcPhys;
                    if (chunk == 0)
                        break;
                    m_seenGifCopy = true;
                    m_gifCopyCount.fetch_add(1, std::memory_order_relaxed);
                    submitGifPacket(GifPathId::Path3, m_rdram + srcPhys, chunk, false);
                    bytesLeft -= chunk;
                    srcPhys += chunk;
                }
            }
        }
    }
    m_pendingGifTransfers.clear();
    gifCompleted = true;
    }

    const bool hadVif0 = !m_pendingVif0Transfers.empty();
    for (auto &p : m_pendingVif0Transfers)
    {
        if (!p.chainData.empty())
        {
            processVIF0Data(p.chainData.data(), static_cast<uint32_t>(p.chainData.size()));
        }
        else if (p.qwc > 0)
        {
            uint32_t srcPhys = 0;
            const uint64_t bytes64 = static_cast<uint64_t>(p.qwc) * 16ull;
            uint32_t sizeBytes = (bytes64 > 0xFFFFFFFFull) ? 0xFFFFFFFFu : static_cast<uint32_t>(bytes64);
            try
            {
                srcPhys = translateAddress(p.srcAddr);
            }
            catch (const std::exception &)
            {
                continue;
            }
            if (p.fromScratchpad)
            {
                uint32_t bytesLeft = sizeBytes;
                while (bytesLeft > 0)
                {
                    if (srcPhys >= PS2_SCRATCHPAD_SIZE)
                        srcPhys = 0;
                    uint32_t chunk = bytesLeft;
                    if (srcPhys + chunk > PS2_SCRATCHPAD_SIZE)
                        chunk = PS2_SCRATCHPAD_SIZE - srcPhys;
                    if (chunk == 0)
                        break;
                    processVIF0Data(m_scratchpad + srcPhys, chunk);
                    bytesLeft -= chunk;
                    srcPhys += chunk;
                }
            }
            else
            {
                uint32_t bytesLeft = sizeBytes;
                while (bytesLeft > 0)
                {
                    if (srcPhys >= PS2_RAM_SIZE)
                        srcPhys = 0;
                    uint32_t chunk = bytesLeft;
                    if (srcPhys + chunk > PS2_RAM_SIZE)
                        chunk = PS2_RAM_SIZE - srcPhys;
                    if (chunk == 0)
                        break;
                    processVIF0Data(srcPhys, chunk);
                    bytesLeft -= chunk;
                    srcPhys += chunk;
                }
            }
        }
    }
    m_pendingVif0Transfers.clear();

    const bool hadVif1 = hadVif1Early || !m_pendingVif1Transfers.empty();
    if (cooperative && !m_pendingVif1Transfers.empty() && !m_pendingVif1Transfers.front().chainData.empty())
    {
        PendingTransfer &p = m_pendingVif1Transfers.front();
        const size_t remaining = p.chainData.size() - p.byteOffset;
        // Keep the whole remaining buffer visible to V3 UNPACK lookahead.
        // The parser returns a complete-command boundary, yielding after VU
        // execution instead of anticipating all subsequent XGKICK packets.
        // One slice per service at least; further slices while the EE time
        // that has passed since the kick still covers the VIF/VU work done.
        // PS2X_DMA_STRICT=1: no free slice, the chain advances only as fast as
        // EE time allows (the hardware rate), so the game still sees the
        // previous frame's DMA in flight while it builds the next one.
        static const bool strictPace = [] { const char *v = std::getenv("PS2X_DMA_STRICT"); return v && v[0] == '1'; }();
        for (;;)
        {
            if (strictPace && m_vif1CycleCredit <= 0)
                break;
            PendingTransfer &front = m_pendingVif1Transfers.front();
            const size_t left = front.chainData.size() - front.byteOffset;
            const uint32_t consumed = processVIF1DataPrefix(front.chainData.data() + front.byteOffset,
                static_cast<uint32_t>(left), 32u);
            if (consumed == 0u || consumed > left)
                throw std::runtime_error("cooperative VIF1 DMA: invalid command boundary");
            traceGifTimeline("VIF1_PREFIX", front.byteOffset, consumed, left);
            front.byteOffset += consumed;
            m_vif1CycleCredit -= consumed / 4u; // roughly one cycle per transferred word
            if (front.byteOffset == front.chainData.size())
            {
                m_pendingVif1Transfers.erase(m_pendingVif1Transfers.begin());
                break;
            }
            if (m_vif1CycleCredit <= 0)
                break;
        }
        (void)p; (void)remaining;
    }
    else
    {
    for (auto &p : m_pendingVif1Transfers)
    {
        if (!p.chainData.empty())
        {
            traceGifTimeline("VIF1_CHAIN_PROCESS", p.chainData.size(), p.qwc, p.srcAddr);
            processVIF1Data(p.chainData.data(), static_cast<uint32_t>(p.chainData.size()));
        }
        else if (p.qwc > 0)
        {
            uint32_t srcPhys = 0;
            const uint64_t bytes64 = static_cast<uint64_t>(p.qwc) * 16ull;
            uint32_t sizeBytes = (bytes64 > 0xFFFFFFFFull) ? 0xFFFFFFFFu : static_cast<uint32_t>(bytes64);
            try
            {
                srcPhys = translateAddress(p.srcAddr);
            }
            catch (const std::exception &)
            {
                continue;
            }
            if (p.fromScratchpad)
            {
                uint32_t bytesLeft = sizeBytes;
                while (bytesLeft > 0)
                {
                    if (srcPhys >= PS2_SCRATCHPAD_SIZE)
                        srcPhys = 0;
                    uint32_t chunk = bytesLeft;
                    if (srcPhys + chunk > PS2_SCRATCHPAD_SIZE)
                        chunk = PS2_SCRATCHPAD_SIZE - srcPhys;
                    if (chunk == 0)
                        break;
                    processVIF1Data(m_scratchpad + srcPhys, chunk);
                    bytesLeft -= chunk;
                    srcPhys += chunk;
                }
            }
            else
            {
                uint32_t bytesLeft = sizeBytes;
                while (bytesLeft > 0)
                {
                    if (srcPhys >= PS2_RAM_SIZE)
                        srcPhys = 0;
                    uint32_t chunk = bytesLeft;
                    if (srcPhys + chunk > PS2_RAM_SIZE)
                        chunk = PS2_RAM_SIZE - srcPhys;
                    if (chunk == 0)
                        break;
                    processVIF1Data(srcPhys, chunk);
                    bytesLeft -= chunk;
                    srcPhys += chunk;
                }
            }
        }
    }
    m_pendingVif1Transfers.clear();
    }

    if (m_gifArbiter && !sunk)
        m_gifArbiter->drain();

    static constexpr uint32_t GIF_CHANNEL = 0x1000A000;
    static constexpr uint32_t VIF0_CHANNEL = 0x10008000;
    static constexpr uint32_t VIF1_CHANNEL = 0x10009000;
    static constexpr uint32_t D_STAT = 0x1000E010u;

    auto raiseDStatChannel = [&](uint32_t channelBit)
    {
        uint32_t dstat = m_ioRegisters.count(D_STAT) ? m_ioRegisters[D_STAT] : 0u;
        dstat |= (1u << channelBit);

        const uint32_t status = dstat & 0x3FFu;
        const uint32_t mask = (dstat >> 16) & 0x3FFu;
        if ((status & mask) != 0u)
            dstat |= (1u << 31);
        else
            dstat &= ~(1u << 31);

        m_ioRegisters[D_STAT] = dstat;
    };

    if (!sunk && hadGif && gifCompleted && gifCompleteOnDrain() && !m_path3MaskedFifo.empty())
    {
        g_gifCompletionDeferred = true; // completed by flushMaskedPath3Packets()
        ps2xMark('f');
    }
    else if (hadGif && gifCompleted)
    {
        g_gifCompletionDeferred = false;
        raiseDStatChannel(2u); // GIF channel
        queueCompletedDmacCause(2u);
        traceGifTimeline("DMA_COMPLETE", GIF_CHANNEL, 2u,
                         (static_cast<uint64_t>(m_ioRegisters[GIF_CHANNEL + 0x00]) << 32u) | m_ioRegisters[D_STAT]);
        m_ioRegisters[GIF_CHANNEL + 0x00] &= ~0x100u;
        m_ioRegisters[GIF_CHANNEL + 0x20] = 0;
    }
    if (hadVif0)
    {
        raiseDStatChannel(0u); // VIF0 channel
        queueCompletedDmacCause(0u);
        m_ioRegisters[VIF0_CHANNEL + 0x00] &= ~0x100u;
        m_ioRegisters[VIF0_CHANNEL + 0x20] = 0;
    }
    if (hadVif1 && m_pendingVif1Transfers.empty())
    {
        ps2xOrderTrace('D', static_cast<uint32_t>((g_orderTraceCycles - g_orderTraceVifKick) / 1000u)); // VIF1 done, kilo-cycles after its kick
        raiseDStatChannel(1u); // VIF1 channel
        queueCompletedDmacCause(1u);
        traceGifTimeline("DMA_COMPLETE", VIF1_CHANNEL, 1u,
                         (static_cast<uint64_t>(m_ioRegisters[VIF1_CHANNEL + 0x00]) << 32u) | m_ioRegisters[D_STAT]);
        m_ioRegisters[VIF1_CHANNEL + 0x00] &= ~0x100u;
        m_ioRegisters[VIF1_CHANNEL + 0x20] = 0;
    }
    traceGifTimeline("SERVICE_END", m_pendingGifTransfers.size(), m_pendingVif1Transfers.size(),
                     (static_cast<uint64_t>(gifCompleted) << 2u) |
                         (static_cast<uint64_t>(hadVif1Early) << 1u) | static_cast<uint64_t>(hadGif) |
                         (static_cast<uint64_t>(hadVif1) << 3u));
}

void PS2Memory::onPath1Progress(uint32_t path1Bytes)
{
    if (dmaSinkEnabled()) // the pending lists belong to the EE thread; chains are queued whole
        return;
    if (!incrementalGifDmaEnabled() || m_pendingGifTransfers.empty() || m_path3Masked)
        return;

    // PATH3 streaming throughput is calibrated to geometry render workload:
    // ratio ~0.52 (4.79 MB PATH3 / 10.4 MB PATH1 across frame).
    m_path3PacingCredit += (static_cast<uint64_t>(path1Bytes) * 52u) / 100u;

    while (!m_pendingGifTransfers.empty() && !m_path3Masked)
    {
        PendingTransfer &transfer = m_pendingGifTransfers.front();
        if (transfer.chainData.empty())
        {
            m_pendingGifTransfers.erase(m_pendingGifTransfers.begin());
            continue;
        }

        const size_t remaining = transfer.chainData.size() - std::min(transfer.byteOffset, transfer.chainData.size());
        if (remaining == 0)
        {
            m_pendingGifTransfers.erase(m_pendingGifTransfers.begin());
            continue;
        }

        const size_t packetSize = gifEopPacketSize(transfer.chainData.data() + transfer.byteOffset, remaining);
        if (packetSize < 16u)
            break;

        if (m_path3PacingCredit < packetSize)
            break;

        m_path3PacingCredit -= packetSize;
        processPendingTransfers();
    }
}

void PS2Memory::queueCompletedDmacCause(uint32_t cause)
{
    std::lock_guard<std::mutex> lock(m_completedDmacMutex);
    m_completedDmacCauses.push_back(cause);
    ps2xMark('c', cause * 1024u);
    g_ps2xDmacCompletionQueued.store(true, std::memory_order_release);
}

std::vector<uint32_t> PS2Memory::consumeCompletedDmacCauses()
{
    std::lock_guard<std::mutex> lock(m_completedDmacMutex);
    std::vector<uint32_t> causes;
    causes.swap(m_completedDmacCauses);
    return causes;
}

void PS2Memory::flushMaskedPath3Packets(bool drainImmediately)
{
    if (m_path3Masked || m_path3MaskedFifo.empty())
        return;

    auto emit = [&](const uint8_t *packetData, uint32_t packetSize)
    {
        if (m_gifArbiter)
            m_gifArbiter->submit(GifPathId::Path3, packetData, packetSize, false);
        else if (m_gifPacketCallback)
            m_gifPacketCallback(packetData, packetSize);
    };

    if (path3EopGateEnabled() && g_ps2xPath3ReleaseOnePacket)
    {
        const auto packet = std::move(m_path3MaskedFifo.front());
        m_path3MaskedFifo.erase(m_path3MaskedFifo.begin());
        if (packet.size() >= 16u)
            emit(packet.data(), static_cast<uint32_t>(packet.size()));
        ++g_path3GateStats.released;
        ++g_path3GateStats.releasedOnUnmask;
        reportPath3Gate("periodic", m_path3MaskedFifo.size());
        if (m_gifArbiter && drainImmediately)
            m_gifArbiter->drain();
        if (g_gifCompletionDeferred && m_path3MaskedFifo.empty() && m_pendingGifTransfers.empty())
        {
            g_gifCompletionDeferred = false;
            m_ioRegisters[0x1000A020u] = 0;
            completeDmacChannel(0x1000A000u, 2u);
        }
        return;
    }

    g_path3GateStats.released += m_path3MaskedFifo.size();
    ++g_path3GateStats.flushAll;
    for (const auto &packet : m_path3MaskedFifo)
    {
        if (packet.size() >= 16u)
            emit(packet.data(), static_cast<uint32_t>(packet.size()));
    }
    m_path3MaskedFifo.clear();
    reportPath3Gate("periodic", 0u);
    if (g_gifCompletionDeferred && m_pendingGifTransfers.empty())
    {
        g_gifCompletionDeferred = false;
        m_ioRegisters[0x1000A020u] = 0;
        completeDmacChannel(0x1000A000u, 2u);
    }

    if (m_gifArbiter && drainImmediately)
        m_gifArbiter->drain();
}

void PS2Memory::submitGifPacket(GifPathId pathId, const uint8_t *data, uint32_t sizeBytes, bool drainImmediately, bool path2DirectHl, bool imageContinuation)
{
    if (!data || sizeBytes < 16)
        return;

    if (pathId == GifPathId::Path3)
    {
        if (m_path3Masked)
        {
            if (path3EopGateEnabled())
            {
                size_t offset = 0u;
                while (offset + 16u <= sizeBytes)
                {
                    const size_t packet = gifEopPacketSize(data + offset, sizeBytes - offset);
                    if (packet < 16u)
                        break;
                    if (path3MergeSetup() && !m_path3MaskedFifo.empty() && path3TransferSetup(m_path3MaskedFifo.back()) && path3ImageStart(data + offset))
                    {
                        m_path3MaskedFifo.back().insert(m_path3MaskedFifo.back().end(), data + offset, data + offset + packet);
                        offset += packet;
                        continue;
                    }
                    m_path3MaskedFifo.emplace_back(data + offset, data + offset + packet);
                    ++g_path3GateStats.packetsQueued;
                    ps2xOrderTrace('q', static_cast<uint32_t>(packet / 16u));
                    offset += packet;
                }
            }
            else
            {
                m_path3MaskedFifo.emplace_back(data, data + sizeBytes);
                ++g_path3GateStats.packetsQueued;
            }
            g_path3GateStats.maxFifo = std::max<uint64_t>(g_path3GateStats.maxFifo, m_path3MaskedFifo.size());
            ps2xOrderTrace('G', static_cast<uint32_t>(m_path3MaskedFifo.size()));
            return;
        }
        flushMaskedPath3Packets(false);
    }

    ps2xOrderTrace(pathId == GifPathId::Path1 ? 'x' : (pathId == GifPathId::Path2 ? 'd' : 'P'), sizeBytes / 16u);
    traceGifTimeline("GIF_PACKET_READY", static_cast<uint64_t>(pathId), sizeBytes,
                     (static_cast<uint64_t>(drainImmediately) << 2u) |
                         (static_cast<uint64_t>(path2DirectHl) << 1u) | static_cast<uint64_t>(imageContinuation));

    // PATH1 never needs the DIRECTHL/IMAGE exceptions of the arbitration: with nothing queued it is delivered in place.
    if (m_gifArbiter && drainImmediately && pathId == GifPathId::Path1 &&
        m_gifArbiter->submitDirect(pathId, data, sizeBytes, imageContinuation))
        return;
    if (m_gifArbiter)
        m_gifArbiter->submit(pathId, data, sizeBytes, path2DirectHl, imageContinuation);
    else if (m_gifPacketCallback)
        m_gifPacketCallback(data, sizeBytes);

    if (m_gifArbiter && drainImmediately)
        m_gifArbiter->drain();
}

void PS2Memory::processGIFPacket(uint32_t srcPhysAddr, uint32_t qwCount)
{
    if (!m_rdram || qwCount == 0)
        return;
    const uint64_t bytes64 = static_cast<uint64_t>(qwCount) * 16ull;
    uint32_t sizeBytes = (bytes64 > 0xFFFFFFFFull) ? 0xFFFFFFFFu : static_cast<uint32_t>(bytes64);
    uint32_t bytesLeft = sizeBytes;
    while (bytesLeft >= 16)
    {
        if (srcPhysAddr >= PS2_RAM_SIZE)
            srcPhysAddr = 0;
        uint32_t chunk = bytesLeft;
        if (srcPhysAddr + chunk > PS2_RAM_SIZE)
            chunk = PS2_RAM_SIZE - srcPhysAddr;
        if (chunk == 0)
            break;

        m_seenGifCopy = true;
        m_gifCopyCount.fetch_add(1, std::memory_order_relaxed);
        submitGifPacket(GifPathId::Path3, m_rdram + srcPhysAddr, chunk);

        bytesLeft -= chunk;
        srcPhysAddr += chunk;
    }
}

void PS2Memory::processGIFPacket(const uint8_t *data, uint32_t sizeBytes)
{
    if (m_gifArbiter)
        submitGifPacket(GifPathId::Path3, data, sizeBytes);
    else if (m_gifPacketCallback && data && sizeBytes >= 16)
        m_gifPacketCallback(data, sizeBytes);
}

bool PS2Memory::tryProcessNativeGifImageUploadChain(GS &gs, uint32_t tadr, uint32_t chcr)
{
    if (cooperativeDmaEnabled() || rawGifCaptureRequested() || dmaSinkEnabled()) return false;
    static constexpr uint32_t GIF_CHANNEL = 0x1000A000u;
    static constexpr uint32_t D_STAT = 0x1000E010u;
    static constexpr uint32_t D_CTRL = 0x1000E000u;

    if (!m_rdram || !m_gsVRAM || m_path3Masked)
        return false;
    if (m_gifArbiter && !m_gifArbiter->empty())
        return false;
    if ((chcr & 0x100u) == 0u || ((chcr >> 2u) & 0x3u) != 1u)
        return false;
    if ((chcr & (1u << 7u)) != 0u || ((chcr >> 4u) & 0x3u) != 0u)
        return false;

    const auto dctrlIt = m_ioRegisters.find(D_CTRL);
    if (dctrlIt != m_ioRegisters.end() && ((dctrlIt->second & 0x1u) == 0u))
        return false;

    auto resolveContiguous = [&](uint32_t guestAddr, uint32_t bytes, const uint8_t *&out) -> bool
    {
        try
        {
            const bool scratch = isScratchpad(guestAddr);
            const uint32_t phys = translateAddress(guestAddr);
            const uint8_t *base = scratch ? m_scratchpad : m_rdram;
            const uint32_t limit = scratch ? PS2_SCRATCHPAD_SIZE : PS2_RAM_SIZE;
            if (!base || phys > limit || bytes > limit - phys)
                return false;
            out = base + phys;
            return true;
        }
        catch (const std::exception &)
        {
            return false;
        }
    };

    auto loadDmaTagAt = [&](uint32_t guestAddr, DmaTagView &out) -> bool
    {
        const uint8_t *ptr = nullptr;
        if (!resolveContiguous(guestAddr, 16u, ptr))
            return false;
        out = decodeDmaTag(loadScalar<uint64_t>(ptr, 0u, 16u, "native gif dma tag", guestAddr));
        return true;
    };

    auto decodeSetupPayload = [&](const uint8_t *payload, uint64_t (&regs)[4]) -> bool
    {
        const uint64_t tagLo = loadScalar<uint64_t>(payload, 0u, 80u, "native gif setup tag", 0u);
        const uint64_t tagHi = loadScalar<uint64_t>(payload, 8u, 80u, "native gif setup regs", 0u);
        if (gifTagNloop(tagLo) != 4u ||
            gifTagFlg(tagLo) != GIF_FMT_PACKED ||
            gifTagNreg(tagLo) != 1u ||
            (tagHi & 0xFull) != 0x0Eull)
        {
            return false;
        }

        static constexpr uint8_t kExpectedRegs[4] = {
            GS_REG_BITBLTBUF,
            GS_REG_TRXPOS,
            GS_REG_TRXREG,
            GS_REG_TRXDIR,
        };

        uint32_t offset = 16u;
        for (uint32_t i = 0; i < 4u; ++i)
        {
            regs[i] = loadScalar<uint64_t>(payload, offset, 80u, "native gif setup value", 0u);
            const uint64_t reg = loadScalar<uint64_t>(payload, offset + 8u, 80u, "native gif setup register", 0u);
            if ((reg & 0xFFu) != kExpectedRegs[i])
                return false;
            offset += 16u;
        }

        const uint32_t trxdirMode = static_cast<uint32_t>(regs[3] & 0x3ull);
        const uint32_t rrw = static_cast<uint32_t>(regs[2] & 0xFFFull);
        const uint32_t rrh = static_cast<uint32_t>((regs[2] >> 32u) & 0xFFFull);
        return trxdirMode == 0u && rrw != 0u && rrh != 0u;
    };

    DmaTagView setupTag{};
    if (!loadDmaTagAt(tadr, setupTag) ||
        setupTag.id != 1u ||
        setupTag.qwc != 5u ||
        setupTag.irq)
    {
        return false;
    }

    const uint8_t *setupPayload = nullptr;
    const uint32_t setupPayloadAddr = tadr + 16u;
    if (!resolveContiguous(setupPayloadAddr, 5u * 16u, setupPayload))
        return false;

    uint64_t setupRegs[4] = {};
    if (!decodeSetupPayload(setupPayload, setupRegs))
        return false;

    uint32_t imageTagDmaAddr = setupPayloadAddr + 5u * 16u;
    DmaTagView imageTagDma{};
    if (!loadDmaTagAt(imageTagDmaAddr, imageTagDma) ||
        imageTagDma.id != 1u ||
        imageTagDma.qwc != 1u ||
        imageTagDma.irq)
    {
        return false;
    }

    const uint8_t *imageGifTag = nullptr;
    if (!resolveContiguous(imageTagDmaAddr + 16u, 16u, imageGifTag))
        return false;

    const uint64_t imageTagLo = loadScalar<uint64_t>(imageGifTag, 0u, 16u, "native gif image tag", imageTagDmaAddr + 16u);
    if (gifTagFlg(imageTagLo) != GIF_FMT_IMAGE && gifTagFlg(imageTagLo) != 3u)
        return false;

    const uint32_t imageQwc = gifTagNloop(imageTagLo);
    if (imageQwc == 0u)
        return false;

    const uint64_t imageBytes64 = static_cast<uint64_t>(imageQwc) * 16ull;
    if (imageBytes64 > 0xFFFFFFFFull)
        return false;
    const uint32_t imageBytes = static_cast<uint32_t>(imageBytes64);

    const uint32_t payloadTagAddr = imageTagDmaAddr + 32u;
    DmaTagView payloadTag{};
    if (!loadDmaTagAt(payloadTagAddr, payloadTag) ||
        payloadTag.qwc != imageQwc ||
        payloadTag.irq)
    {
        return false;
    }

    uint32_t imageDataAddr = 0u;
    uint32_t finalTadr = payloadTagAddr;
    uint32_t lastTagUpper = payloadTag.upper;
    if (payloadTag.id == 3u || payloadTag.id == 4u)
    {
        imageDataAddr = payloadTag.addr;
        const uint32_t terminalTagAddr = payloadTagAddr + 16u;
        DmaTagView terminalTag{};
        if (!loadDmaTagAt(terminalTagAddr, terminalTag) ||
            terminalTag.qwc != 0u ||
            terminalTag.irq ||
            (terminalTag.id != 0u && terminalTag.id != 7u))
        {
            return false;
        }
        finalTadr = (terminalTag.id == 0u) ? (terminalTagAddr + 16u) : terminalTagAddr;
        lastTagUpper = terminalTag.upper;
    }
    else if (payloadTag.id == 7u)
    {
        imageDataAddr = payloadTagAddr + 16u;
        finalTadr = payloadTagAddr;
    }
    else
    {
        return false;
    }

    const uint8_t *imageData = nullptr;
    if (!resolveContiguous(imageDataAddr, imageBytes, imageData))
        return false;

    m_dmaStartCount.fetch_add(1, std::memory_order_relaxed);
    m_seenGifCopy = true;
    m_gifCopyCount.fetch_add(1, std::memory_order_relaxed);
    gs.uploadImageNative(setupRegs[0], setupRegs[1], setupRegs[2], setupRegs[3], imageData, imageBytes);

    m_ioRegisters[GIF_CHANNEL + 0x30u] = finalTadr;
    m_ioRegisters[GIF_CHANNEL + 0x40u] = 0u;
    m_ioRegisters[GIF_CHANNEL + 0x50u] = 0u;
    m_ioRegisters[GIF_CHANNEL + 0x00u] = ((chcr & 0x0000FFFFu) | (lastTagUpper << 16u)) & ~0x100u;
    m_ioRegisters[GIF_CHANNEL + 0x20u] = 0u;

    uint32_t dstat = m_ioRegisters.count(D_STAT) ? m_ioRegisters[D_STAT] : 0u;
    dstat |= (1u << 2u);
    const uint32_t status = dstat & 0x3FFu;
    const uint32_t mask = (dstat >> 16u) & 0x3FFu;
    if ((status & mask) != 0u)
        dstat |= (1u << 31u);
    else
        dstat &= ~(1u << 31u);
    m_ioRegisters[D_STAT] = dstat;
    queueCompletedDmacCause(2u);
    return true;
}

bool PS2Memory::tryProcessNativeGifPackedChain(GS &gs, uint32_t tadr, uint32_t chcr)
{
    if (cooperativeDmaEnabled() || rawGifCaptureRequested() || dmaSinkEnabled()) return false;
    static constexpr uint32_t GIF_CHANNEL = 0x1000A000u;
    static constexpr uint32_t D_STAT = 0x1000E010u;
    static constexpr uint32_t D_CTRL = 0x1000E000u;

    if (!m_rdram || !m_gsVRAM || m_path3Masked)
        return false;
    if (m_gifArbiter && !m_gifArbiter->empty())
        return false;
    if ((chcr & 0x100u) == 0u || ((chcr >> 2u) & 0x3u) != 1u)
        return false;
    if ((chcr & (1u << 7u)) != 0u || ((chcr >> 4u) & 0x3u) != 0u)
        return false;

    const auto dctrlIt = m_ioRegisters.find(D_CTRL);
    if (dctrlIt != m_ioRegisters.end() && ((dctrlIt->second & 0x1u) == 0u))
        return false;

    auto resolveContiguous = [&](uint32_t guestAddr, uint32_t bytes, const uint8_t *&out) -> bool
    {
        try
        {
            const bool scratch = isScratchpad(guestAddr);
            const uint32_t phys = translateAddress(guestAddr);
            const uint8_t *base = scratch ? m_scratchpad : m_rdram;
            const uint32_t limit = scratch ? PS2_SCRATCHPAD_SIZE : PS2_RAM_SIZE;
            if (!base || phys > limit || bytes > limit - phys)
                return false;
            out = base + phys;
            return true;
        }
        catch (const std::exception &)
        {
            return false;
        }
    };

    const uint8_t *tagPtr = nullptr;
    if (!resolveContiguous(tadr, 16u, tagPtr))
        return false;

    const DmaTagView tag = decodeDmaTag(loadScalar<uint64_t>(tagPtr, 0u, 16u, "native packed gif dma tag", tadr));
    if (tag.id != 7u || tag.qwc == 0u || tag.irq)
        return false;

    const uint64_t payloadBytes64 = static_cast<uint64_t>(tag.qwc) * 16ull;
    if (payloadBytes64 > 0xFFFFFFFFull)
        return false;
    const uint32_t payloadBytes = static_cast<uint32_t>(payloadBytes64);

    const uint8_t *payload = nullptr;
    if (!resolveContiguous(tadr + 16u, payloadBytes, payload))
        return false;
    if (!gs.processNativePackedGIFPacket(payload, payloadBytes))
        return false;

    m_dmaStartCount.fetch_add(1, std::memory_order_relaxed);
    m_seenGifCopy = true;
    m_gifCopyCount.fetch_add(1, std::memory_order_relaxed);

    m_ioRegisters[GIF_CHANNEL + 0x30u] = tadr;
    m_ioRegisters[GIF_CHANNEL + 0x40u] = 0u;
    m_ioRegisters[GIF_CHANNEL + 0x50u] = 0u;
    m_ioRegisters[GIF_CHANNEL + 0x00u] = ((chcr & 0x0000FFFFu) | (tag.upper << 16u)) & ~0x100u;
    m_ioRegisters[GIF_CHANNEL + 0x20u] = 0u;

    uint32_t dstat = m_ioRegisters.count(D_STAT) ? m_ioRegisters[D_STAT] : 0u;
    dstat |= (1u << 2u);
    const uint32_t status = dstat & 0x3FFu;
    const uint32_t mask = (dstat >> 16u) & 0x3FFu;
    if ((status & mask) != 0u)
        dstat |= (1u << 31u);
    else
        dstat &= ~(1u << 31u);
    m_ioRegisters[D_STAT] = dstat;
    queueCompletedDmacCause(2u);
    return true;
}

int PS2Memory::pollDmaRegisters()
{
    if (cooperativeDmaEnabled() && (!m_pendingGifTransfers.empty() || !m_pendingVif1Transfers.empty()))
    {
        processPendingTransfers();
        return 1;
    }
    return 0;
}

uint32_t PS2Memory::readIORegister(uint32_t address)
{
    constexpr uint32_t kGifChannelChcr = 0x1000A000u;
    if (cooperativeDmaEnabled() &&
        (address == kGifChannelChcr || address == 0x10009000u || address == 0x1000E010u || address == 0x10003020u))
        pollDmaRegisters();
    else if (address == kGifChannelChcr && incrementalGifDmaEnabled() && !m_pendingGifTransfers.empty())
        processPendingTransfers();

    size_t timerIndex = 0u;
    uint32_t timerOffset = 0u;
    if (decodeEeTimerRegister(address, timerIndex, timerOffset))
        (void)const_cast<PS2Memory *>(this)->advanceEeTimers(kEeTimerFlush);
    if (decodeEeTimerRegister(address, timerIndex, timerOffset))
    {
        const EeTimer &timer = m_eeTimers[timerIndex];
        switch (timerOffset)
        {
        case kEeTimerCountOffset:
            return timer.count & 0xFFFFu;
        case kEeTimerModeOffset:
            return timer.mode & (kEeTimerModeConfigMask | kEeTimerModeStatusMask);
        case kEeTimerCompareOffset:
            return timer.compare & 0xFFFFu;
        case kEeTimerHoldOffset:
            return timer.hold & 0xFFFFu;
        default:
            return 0u;
        }
    }

    if (isGsPrivReg(address))
    {
        // NB: unreachable from read8/16/32/64 today, same reasoning as the write
        // path above; kept correct for direct callers.
        const uint32_t off = address & 7u;
        const uint32_t regOff = (address - PS2_GS_PRIV_REG_BASE) & ~0x7u;
        if (regOff == kGsCsrRegOffset)
        {
            return static_cast<uint32_t>((gs_regs.csr.load() >> (off * 8u)) & 0xFFFFFFFFull);
        }
        if (uint64_t *reg = gsRegPtr(gs_regs, address))
        {
            return static_cast<uint32_t>((*reg >> (off * 8u)) & 0xFFFFFFFFull);
        }
        return 0u;
    }

    if (address >= 0x10002000 && address <= 0x10002030)
    {
        uint32_t val = 0;
        switch (address)
        {
        case 0x10002000:
            val = m_ioRegisters[address];
            break;
        case 0x10002010:
            val = m_ioRegisters[address] & ~(1u << 31);
            break;
        case 0x10002020:
        case 0x10002030:
            val = m_ioRegisters[address];
            break;
        default:
            val = 0;
            break;
        }
        return val;
    }

    if (address == 0x10003020u) // GIF_STAT
    {
        uint32_t stat = m_ioRegisters.count(address) ? m_ioRegisters[address] : 0u;
        const uint32_t mode = m_ioRegisters.count(0x10003010u) ? m_ioRegisters[0x10003010u] : 0u;
        const uint32_t ctrl = m_ioRegisters.count(0x10003000u) ? m_ioRegisters[0x10003000u] : 0u;

        // M3R and IMT mirror GIF_MODE, PSE mirrors GIF_CTRL, and M3P is the
        // effective PATH3 mask controlled by the VIF1 MSKPATH3 command.
        stat = (stat & ~0xFu) |
               (mode & 0x1u) |
               ((dmaSinkActive() ? g_dmaSink.maskShadow : m_path3Masked) ? 0x2u : 0u) |
               (mode & 0x4u) |
               (ctrl & 0x8u);
        // Masked PATH3 packets have been accepted into the GIF FIFO but
        // cannot drain until MSKPATH3 is cleared. Timer ticks must not hide
        // this real occupancy from an EE polling loop.
        if (dmaSinkActive())
        {
            if (g_dmaSink.maskShadow && g_dmaSink.fifoPacketsShadow != 0u)
                stat = (stat & ~0x1F000000u) | (16u << 24u);
        }
        else if (m_path3Masked && !m_path3MaskedFifo.empty())
        {
            uint32_t qwc = 0;
            for (const auto &packet : m_path3MaskedFifo)
            {
                qwc += uint32_t(std::min<size_t>(16u - qwc, packet.size() / 16u));
                if (qwc == 16u) break;
            }
            stat = (stat & ~0x1F000000u) | (qwc << 24u);
        }
        static const bool downloadTrace = std::getenv("PS2X_GIF_DOWNLOAD_TRACE") != nullptr;
        if (downloadTrace) {
            static uint64_t polls = 0;
            if (++polls >= 65536 && (polls & (polls - 1)) == 0)
                std::fprintf(stderr, "[gif-fifo-wait] polls=%llu busdir=%llu stat=%08x available=%u vifchcr=%08x qwc=%u maskedPackets=%zu\n",
                             (unsigned long long)polls, (unsigned long long)gs_regs.busdir, stat,
                             m_gifDownloadFifoCallback ? m_gifDownloadFifoCallback() : 0,
                             m_ioRegisters[0x10009000u], m_ioRegisters[0x10009020u], m_path3MaskedFifo.size());
        }
        // GS->EE FIFO occupancy comes from the active transfer, not the
        // transient host-to-local DMA counter cleared by EE timer ticks.
        if ((gs_regs.busdir & 1u) != 0u && m_gifDownloadFifoCallback)
        {
            dmaSinkDrain(); // the download was set up by queued GIF data
            const uint32_t qwc = std::min(16u, m_gifDownloadFifoCallback());
            stat = (stat & ~0x1F000000u) | (qwc << 24u) | (1u << 12u);
        }
        return stat;
    }

    if (address >= 0x10000000 && address < 0x10010000)
    {
        if (address >= 0x10008000 && address < 0x1000F000)
        {
            if ((address == kGifChannelChcr && incrementalGifDmaEnabled()) ||
                (address == 0x10009000u && cooperativeDmaEnabled()))
                return m_ioRegisters[address];
            // IPU channels (3 = fromIPU, 4 = toIPU) are not transferred at kick time: the
            // HLE MPEG decoder consumes toIPU on demand, so STR must stay visible until the
            // chain actually finishes. Every other channel completes instantly here.
            if ((address & 0xFF) == 0x00 && address != 0x1000B000u && address != 0x1000B400u)
            {
                uint32_t channelStatus = m_ioRegisters[address] & ~0x100u;
                m_ioRegisters[address] = channelStatus;
                return channelStatus;
            }
        }

        if (address >= 0x10000200 && address < 0x10000300)
        {
            return 0;
        }

        if (address >= 0x1000F200 && address <= 0x1000F260)
        {
            if (address == 0x1000F230)
            {
                return 0x60000;
            }
            if (address == 0x1000F240)
            {
                return 0xF0000002;
            }
            return 0;
        }
    }

    auto it = m_ioRegisters.find(address);
    if (it != m_ioRegisters.end())
    {
        return it->second;
    }

    return 0;
}

void PS2Memory::registerCodeRegion(uint32_t start, uint32_t end)
{
    if (end <= start)
    {
        std::cerr << "Ignoring invalid code region: start=0x" << std::hex << start
                  << " end=0x" << end << std::dec << std::endl;
        return;
    }

    if ((end - start) > PS2_RAM_SIZE)
    {
        std::cerr << "Ignoring oversized code region: start=0x" << std::hex << start
                  << " end=0x" << end << std::dec << std::endl;
        return;
    }

    for (const auto &existing : m_codeRegions)
    {
        if (existing.start == start && existing.end == end)
        {
            return;
        }
    }

    CodeRegion region;
    region.start = start;
    region.end = end;

    size_t sizeInWords = (end - start + 3u) / 4u;
    region.modified.resize(sizeInWords, false);

    m_codeRegions.push_back(region);
    RUNTIME_LOG("Registered code region: " << std::hex << start << " - " << end << std::dec);
}

bool PS2Memory::isAddressInRegion(uint32_t address, const CodeRegion &region)
{
    return (address >= region.start && address < region.end);
}

bool PS2Memory::isCodeAddress(uint32_t address) const
{
    for (const auto &region : m_codeRegions)
    {
        if (address >= region.start && address < region.end)
        {
            return true;
        }
    }
    return false;
}

void PS2Memory::markModified(uint32_t address, uint32_t size)
{
    if (size == 0)
    {
        return;
    }

    const uint64_t writeEnd = static_cast<uint64_t>(address) + static_cast<uint64_t>(size);
    for (auto &region : m_codeRegions)
    {
        const uint64_t regionStart = region.start;
        const uint64_t regionEnd = region.end;
        if (writeEnd <= regionStart || static_cast<uint64_t>(address) >= regionEnd)
        {
            continue;
        }

        uint32_t overlapStart = static_cast<uint32_t>(std::max<uint64_t>(address, regionStart));
        uint32_t overlapEnd = static_cast<uint32_t>(std::min<uint64_t>(writeEnd, regionEnd));

        for (uint32_t addr = overlapStart; addr < overlapEnd; addr += 4)
        {
            size_t bitIndex = (addr - region.start) / 4;
            if (bitIndex < region.modified.size())
            {
                region.modified[bitIndex] = true;
                RUNTIME_LOG("Marked code at " << std::hex << addr << std::dec << " as modified");
            }
        }
    }
}

bool PS2Memory::isCodeModified(uint32_t address, uint32_t size)
{
    if (size == 0)
    {
        return false;
    }

    const uint64_t writeEnd = static_cast<uint64_t>(address) + static_cast<uint64_t>(size);
    for (const auto &region : m_codeRegions)
    {
        const uint64_t regionStart = region.start;
        const uint64_t regionEnd = region.end;
        if (writeEnd <= regionStart || static_cast<uint64_t>(address) >= regionEnd)
        {
            continue;
        }

        uint32_t overlapStart = static_cast<uint32_t>(std::max<uint64_t>(address, regionStart));
        uint32_t overlapEnd = static_cast<uint32_t>(std::min<uint64_t>(writeEnd, regionEnd));

        for (uint32_t addr = overlapStart; addr < overlapEnd; addr += 4)
        {
            size_t bitIndex = (addr - region.start) / 4;
            if (bitIndex < region.modified.size() && region.modified[bitIndex])
            {
                return true; // Found modified code
            }
        }
    }

    return false; // No modifications found
}

void PS2Memory::clearModifiedFlag(uint32_t address, uint32_t size)
{
    if (size == 0)
    {
        return;
    }

    const uint64_t writeEnd = static_cast<uint64_t>(address) + static_cast<uint64_t>(size);
    for (auto &region : m_codeRegions)
    {
        const uint64_t regionStart = region.start;
        const uint64_t regionEnd = region.end;
        if (writeEnd <= regionStart || static_cast<uint64_t>(address) >= regionEnd)
        {
            continue;
        }

        uint32_t overlapStart = static_cast<uint32_t>(std::max<uint64_t>(address, regionStart));
        uint32_t overlapEnd = static_cast<uint32_t>(std::min<uint64_t>(writeEnd, regionEnd));

        for (uint32_t addr = overlapStart; addr < overlapEnd; addr += 4)
        {
            size_t bitIndex = (addr - region.start) / 4;
            if (bitIndex < region.modified.size())
            {
                region.modified[bitIndex] = false;
            }
        }
    }
}
