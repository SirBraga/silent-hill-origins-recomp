#include "iop_spu2.h"
#include "ps2x/iop/iop_audio_out.h"

#include <atomic>

#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <cstdlib>

namespace ps2x::iop::detail
{
    namespace
    {
        bool spuLevels()
        {
            static const bool enabled = std::getenv("PS2X_SPU2_LEVELS") != nullptr;
            return enabled;
        }
        bool spuTrace()
        {
            static const bool enabled = std::getenv("PS2X_SPU_TRACE") != nullptr;
            return enabled;
        }
        // PS2X_SPU_TRACE=<n>: log the first n events (default 400).
        unsigned g_spuLogBudget = []
        {
            const char *env = std::getenv("PS2X_SPU_TRACE");
            const unsigned long n = env ? std::strtoul(env, nullptr, 10) : 0ul;
            return n > 1ul ? static_cast<unsigned>(n) : 400u;
        }();
#define SPU_LOG(...)                                   \
    do                                                 \
    {                                                  \
        if (spuTrace() && g_spuLogBudget)              \
        {                                              \
            --g_spuLogBudget;                          \
            std::fprintf(stderr, "[spu2] " __VA_ARGS__); \
        }                                              \
    } while (0)
        // Per-core register offsets (core 1 = +0x400).
        constexpr uint32_t kRegAttr = 0x19Au;
        constexpr uint32_t kRegIrqaHi = 0x19Cu;
        constexpr uint32_t kRegKonLo = 0x1A0u;  // voices 0..15
        constexpr uint32_t kRegKonHi = 0x1A2u;  // voices 16..23
        constexpr uint32_t kRegKoffLo = 0x1A4u;
        constexpr uint32_t kRegKoffHi = 0x1A6u;
        constexpr uint32_t kRegTsaHi = 0x1A8u;
        constexpr uint32_t kRegTsaLo = 0x1AAu;
        constexpr uint32_t kRegStd = 0x1ACu;
        constexpr uint32_t kRegEndxLo = 0x340u;
        constexpr uint32_t kRegEndxHi = 0x342u;
        constexpr uint32_t kRegStatx = 0x344u;
        // Global registers.
        constexpr uint32_t kRegIrqInfo = 0x7C2u;

        // Voice address block (0x1C0 + v*0xC): SSA, LSAX, NAX as hi/lo pairs.
        constexpr uint32_t kVoiceSsa = 0x0u;
        constexpr uint32_t kVoiceLsax = 0x4u;
        constexpr uint32_t kVoiceNax = 0x8u;
        // Voice parameter block (v*0x10).
        constexpr uint32_t kVoicePitch = 0x4u;
        constexpr uint32_t kVoiceAdsr1 = 0x6u;
        constexpr uint32_t kVoiceAdsr2 = 0x8u;
        constexpr uint32_t kVoiceEnvx = 0xAu;

        constexpr uint32_t kSamplesPerBlock = 28u;
        constexpr uint32_t kBlockHalfwords = 8u;
        constexpr int32_t kEnvMax = 0x7FFF;

        struct EnvRate
        {
            int shift;
            int step;
            bool decrease;
            bool exponential;
        };

        // PSX/PS2 SPU envelope rate: 7-bit rate = shift<<2 | stepIndex.
        EnvRate makeRate(uint32_t rate, bool decrease, bool exponential)
        {
            EnvRate r{};
            r.shift = static_cast<int>(rate >> 2);
            r.step = decrease ? (-8 + static_cast<int>(rate & 3u)) : (7 - static_cast<int>(rate & 3u));
            r.decrease = decrease;
            r.exponential = exponential;
            return r;
        }
    }

    namespace
    {
        std::atomic<Spu2OutputSink> g_outputSink{nullptr};

        // Voice/master volume register: fixed mode (bit 15 clear) holds a 15-bit signed volume. Sweep mode is not
        // modelled yet; it plays at half scale rather than silent.
        int32_t fixedVolume(uint16_t reg)
        {
            if ((reg & 0x8000u) != 0u)
                return 0x3FFF;
            return static_cast<int16_t>(static_cast<uint16_t>(reg << 1u));
        }

        // EVOL/AVOL/BVOL: a plain signed 16-bit volume (0x7FFF is full scale), unlike the voice and master volumes.
        int32_t plainVolume(uint16_t reg)
        {
            return static_cast<int16_t>(reg);
        }

        int16_t clamp16(int32_t v)
        {
            return static_cast<int16_t>(std::clamp<int32_t>(v, -32768, 32767));
        }
    }
}

void ps2x::iop::setSpu2OutputSink(Spu2OutputSink sink) noexcept
{
    detail::g_outputSink.store(sink, std::memory_order_release);
}

namespace ps2x::iop::detail
{
    IopSpu2::IopSpu2()
        : m_ram(RamHalfwords, 0u)
    {
        reset();
    }

    void IopSpu2::reset()
    {
        std::fill(m_ram.begin(), m_ram.end(), uint16_t{0});
        m_regs.fill(0u);
        for (auto &core : m_voices)
            core.fill(Voice{});
        m_tsa.fill(0u);
        m_endx.fill(0u);
        m_irqInfo = 0u;
        m_irqPending = false;
        m_outPos = 0u;
        m_reverb = {};
        m_lastCycle = 0u;
        m_cycleCarry = 0u;
    }

    uint32_t IopSpu2::readAddr(uint32_t hiOffset) const
    {
        return ((static_cast<uint32_t>(regv(hiOffset)) & 0xFu) << 16u | regv(hiOffset + 2u)) & AddressMask;
    }

    void IopSpu2::writeAddr(uint32_t hiOffset, uint32_t value)
    {
        value &= AddressMask;
        reg(hiOffset) = static_cast<uint16_t>(value >> 16u);
        reg(hiOffset + 2u) = static_cast<uint16_t>(value & 0xFFFFu);
    }

    uint16_t IopSpu2::read16(uint32_t phys)
    {
        const uint32_t offset = (phys - RegBase) & (RegSize - 2u);
        if (offset == kRegIrqInfo)
        {
            // SPDIF_IRQINFO is cleared by reading; LIBSD's handler loops until it reads 0.
            const uint16_t value = m_irqInfo;
            m_irqInfo = 0u;
            return value;
        }
        if (offset < 0x760u)
        {
            const int core = offset >= 0x400u ? 1 : 0;
            const uint32_t local = offset - core * 0x400u;
            if (local == kRegEndxLo)
                return static_cast<uint16_t>(m_endx[core] & 0xFFFFu);
            if (local == kRegEndxHi)
                return static_cast<uint16_t>(m_endx[core] >> 16u);
            if (local == kRegTsaHi)
                return static_cast<uint16_t>(m_tsa[core] >> 16u);
            if (local == kRegTsaLo)
                return static_cast<uint16_t>(m_tsa[core] & 0xFFFFu);
            if (local < 0x180u && (local & 0xFu) == kVoiceEnvx)
                return static_cast<uint16_t>(m_voices[core][local >> 4u].env);
            if (local >= 0x1C0u && local < 0x1C0u + Voices * 0xCu)
            {
                const uint32_t rel = local - 0x1C0u;
                const Voice &v = m_voices[core][rel / 0xCu];
                const uint32_t field = rel % 0xCu;
                if (field == kVoiceNax)
                    return static_cast<uint16_t>(v.nax >> 16u);
                if (field == kVoiceNax + 2u)
                    return static_cast<uint16_t>(v.nax & 0xFFFFu);
                if (field == kVoiceLsax)
                    return static_cast<uint16_t>(v.lsax >> 16u);
                if (field == kVoiceLsax + 2u)
                    return static_cast<uint16_t>(v.lsax & 0xFFFFu);
            }
        }
        return regv(offset);
    }

    void IopSpu2::write16(uint32_t phys, uint16_t value)
    {
        const uint32_t offset = (phys - RegBase) & (RegSize - 2u);
        if (offset == kRegIrqInfo)
        {
            m_irqInfo = 0u;
            return;
        }
        if (offset >= 0x760u)
        {
            if (regv(offset) != value)
                SPU_LOG("REG +0x%x = 0x%04x\n", offset, value);
            reg(offset) = value;
            return;
        }

        const int core = offset >= 0x400u ? 1 : 0;
        const uint32_t local = offset - core * 0x400u;

        switch (local)
        {
        case kRegKonLo:
        case kRegKonHi:
        {
            reg(offset) = value;
            const int first = local == kRegKonLo ? 0 : 16;
            for (int i = 0; i < 16 && first + i < Voices; ++i)
                if (value & (1u << i))
                    keyOn(core, first + i);
            return;
        }
        case kRegKoffLo:
        case kRegKoffHi:
        {
            reg(offset) = value;
            const int first = local == kRegKoffLo ? 0 : 16;
            for (int i = 0; i < 16 && first + i < Voices; ++i)
                if (value & (1u << i))
                    keyOff(core, first + i);
            return;
        }
        case kRegTsaHi:
            m_tsa[core] = ((static_cast<uint32_t>(value) & 0xFu) << 16u | (m_tsa[core] & 0xFFFFu)) & AddressMask;
            reg(offset) = value;
            return;
        case kRegTsaLo:
            m_tsa[core] = ((m_tsa[core] & 0xF0000u) | value) & AddressMask;
            reg(offset) = value;
            return;
        case kRegStd:
            writeStd(core, value);
            return;
        case kRegEndxLo:
            m_endx[core] &= 0xFF0000u;
            return;
        case kRegEndxHi:
            m_endx[core] &= 0x00FFFFu;
            return;
        case kRegAttr:
            if (((value ^ regv(offset)) & 0x80u) != 0u)
                SPU_LOG("ATTR c%d effects=%d\n", core, (value & 0x80u) ? 1 : 0);
            if (((value ^ regv(offset)) & 0x40u) != 0u)
                SPU_LOG("ATTR c%d irqEnable=%d irqa=0x%x\n", core, (value & 0x40u) ? 1 : 0, irqAddress(core));
            reg(offset) = value;
            // Re-arming IRQ enable does not replay a stale match; nothing else to do.
            return;
        default:
            break;
        }

        if (((local >= 0x180u && local < 0x1C0u) || (local >= 0x2E0u && local < 0x340u)) && regv(offset) != value)
            SPU_LOG("REG c%d +0x%x = 0x%04x\n", core, local, value);
        reg(offset) = value;

        if (local >= 0x1C0u && local < 0x1C0u + Voices * 0xCu)
        {
            const uint32_t rel = local - 0x1C0u;
            Voice &v = m_voices[core][rel / 0xCu];
            const uint32_t field = rel % 0xCu;
            const uint32_t base = core * 0x400u + 0x1C0u + (rel / 0xCu) * 0xCu;
            if (field == kVoiceLsax || field == kVoiceLsax + 2u)
            {
                v.lsax = readAddr(base + kVoiceLsax);
                v.lsaxWritten = true;
            }
            else if (field == kVoiceNax || field == kVoiceNax + 2u)
            {
                v.nax = readAddr(base + kVoiceNax) & ~(kBlockHalfwords - 1u);
            }
        }
    }

    void IopSpu2::writeStd(int core, uint16_t value)
    {
        // Manual (IO) transfer: each STD write stores one halfword at TSA and advances it.
        testIrq(core, m_tsa[core], 1u);
        m_ram[m_tsa[core]] = value;
        m_tsa[core] = (m_tsa[core] + 1u) & AddressMask;
    }

    void IopSpu2::dmaTransfer(int core, uint8_t *iopRam, uint32_t iopRamSize, uint32_t madr, uint32_t bytes, bool toSpu)
    {
        SPU_LOG("DMA c%d %s madr=0x%x bytes=0x%x tsa=0x%x\n", core, toSpu ? "->spu" : "<-spu", madr, bytes, m_tsa[core]);
        madr &= 0x1FFFFFu;
        const uint32_t halfwords = bytes / 2u;
        if (toSpu && admaActive(core))
        {
            // AutoDMA: the data is the core's sound data input, 0x200-byte blocks of L then R, played at 48 kHz from
            // the input area (L at 0x2000, R at 0x2200 for core 0). It is queued here and moved in, one half of the
            // area at a time, as the output position leaves that half (refillAdmaInput); the transfer's completion
            // is reported once it has been played (IopMemory). Copying it to TSA at once overwrote each block
            // before it was heard (crackling, distorted streamed sound: Silent Hill Origins' cutscenes).
            // Only the range is kept: the hardware reads IOP RAM as it plays, and the game is still filling the buffer
            // when it starts the transfer (read at once, it was the previous contents: hiss).
            m_admaRam = iopRam;
            m_admaRamSize = iopRamSize;
            m_adma[core].push_back(AdmaRange{madr, bytes & ~0x3FFu});
            m_admaBytes[core] += bytes & ~0x3FFu;
            return;
        }
        testIrq(core, m_tsa[core], halfwords);
        for (uint32_t i = 0; i < halfwords; ++i)
        {
            const uint32_t src = madr + i * 2u;
            if (src + 1u >= iopRamSize)
                break;
            uint16_t &cell = m_ram[(m_tsa[core] + i) & AddressMask];
            if (toSpu)
                std::memcpy(&cell, iopRam + src, sizeof(cell));
            else
                std::memcpy(iopRam + src, &cell, sizeof(cell));
        }
        m_tsa[core] = (m_tsa[core] + halfwords) & AddressMask;
    }

    void IopSpu2::keyOn(int core, int vi)
    {
        Voice &v = m_voices[core][vi];
        const uint32_t base = core * 0x400u + 0x1C0u + vi * 0xCu;
        SPU_LOG("KON c%d v%d ssa=0x%x lsa=0x%x pitch=0x%x adsr=%04x/%04x vol=%04x/%04x irqa=0x%x irqEn=%d\n", core, vi,
                readAddr(base + kVoiceSsa), readAddr(base + kVoiceLsax), regv(voiceRegBase(core, vi) + kVoicePitch),
                regv(voiceRegBase(core, vi) + kVoiceAdsr1), regv(voiceRegBase(core, vi) + kVoiceAdsr2),
                regv(voiceRegBase(core, vi)), regv(voiceRegBase(core, vi) + 2u), irqAddress(core), irqEnabled(core) ? 1 : 0);
        v.on = true;
        v.nax = readAddr(base + kVoiceSsa) & ~(kBlockHalfwords - 1u);
        v.lsax = readAddr(base + kVoiceLsax);
        v.lsaxWritten = false;
        v.counter = 0u;
        v.blockEntered = false;
        v.phase = Voice::Phase::Attack;
        v.env = 0;
        v.envCounter = 0;
        v.pcm.fill(0);
        v.s1 = v.s2 = 0;
        m_endx[core] &= ~(1u << vi);
    }

    void IopSpu2::keyOff(int core, int vi)
    {
        Voice &v = m_voices[core][vi];
        SPU_LOG("KOFF c%d v%d nax=0x%x env=%d\n", core, vi, v.nax, v.env);
        if (v.phase != Voice::Phase::Off)
        {
            v.phase = Voice::Phase::Release;
            v.envCounter = 0;
        }
    }

    void IopSpu2::raiseIrq(int core)
    {
        SPU_LOG("IRQ core%d irqa=0x%x\n", core, irqAddress(core));
        m_irqInfo |= static_cast<uint16_t>(4u << core);
        m_irqPending = true;
    }

    void IopSpu2::testIrq(int accessCore, uint32_t address, uint32_t length)
    {
        (void)accessCore;
        if (length == 0u)
            return;
        for (int core = 0; core < 2; ++core)
        {
            if (!irqEnabled(core))
                continue;
            const uint32_t irqa = irqAddress(core);
            const uint32_t distance = (irqa - address) & AddressMask;
            if (distance < length)
                raiseIrq(core);
        }
    }

    void IopSpu2::enterBlock(int core, int vi)
    {
        Voice &v = m_voices[core][vi];
        const uint16_t header = m_ram[v.nax & AddressMask];
        const uint8_t flags = static_cast<uint8_t>(header >> 8u);
        if ((flags & 0x4u) != 0u && !v.lsaxWritten)
            v.lsax = v.nax;
        testIrq(core, v.nax, kBlockHalfwords);
        v.blockEntered = true;
        decodeBlock(v);
    }

    // SPU ADPCM: a 16-byte block is a header (shift in bits 0-3, filter in bits 4-6, then the flags byte) and
    // 28 4-bit samples, low nibble first.
    void IopSpu2::decodeBlock(Voice &v)
    {
        static constexpr int32_t kF0[5] = {0, 60, 115, 98, 122};
        static constexpr int32_t kF1[5] = {0, 0, -52, -55, -60};
        std::copy(v.pcm.end() - 3, v.pcm.end(), v.pcm.begin());
        const uint16_t header = m_ram[v.nax & AddressMask];
        const int shift = header & 0xF;
        const int filter = std::min((header >> 4) & 0x7, 4);
        for (uint32_t i = 0; i < kSamplesPerBlock; ++i)
        {
            const uint16_t word = m_ram[(v.nax + 1u + i / 4u) & AddressMask];
            const int nibble = (word >> ((i & 3u) * 4u)) & 0xF;
            int32_t sample = static_cast<int16_t>(static_cast<uint16_t>(nibble << 12)) >> (shift > 12 ? 9 : shift);
            sample += (v.s1 * kF0[filter] + v.s2 * kF1[filter]) >> 6;
            sample = clamp16(sample);
            v.s2 = v.s1;
            v.s1 = sample;
            v.pcm[3 + i] = static_cast<int16_t>(sample);
        }
    }

    namespace
    {
        // The SPU's 4-tap Gaussian interpolation kernel, 256 phases, generated with the formula from nocash's
        // documentation as given by Near (the same construction PCSX2 documents). Each phase sums to 0x7F80.
        struct GaussTable
        {
            std::array<std::array<int16_t, 4>, 256> taps{};
            GaussTable()
            {
                constexpr double pi = 3.14159265358979323846;
                double table[512];
                for (uint32_t n = 0; n < 512u; ++n)
                {
                    const double k = 0.5 + n;
                    const double s = std::sin(pi * k * 2.048 / 1024.0);
                    const double t = (std::cos(pi * k * 2.000 / 1023.0) - 1.0) * 0.50;
                    const double u = (std::cos(pi * k * 4.000 / 1023.0) - 1.0) * 0.08;
                    table[511 - n] = s * (t + u + 1.0) / k;
                }
                double sum = 0.0;
                for (double v : table)
                    sum += v;
                const double scale = 0x7F80 * 128 / sum;
                for (double &v : table)
                    v *= scale;
                for (uint32_t phase = 0; phase < 256u; ++phase)
                {
                    const double diff = (table[phase] + table[phase + 256] + table[511 - phase] + table[255 - phase] - 0x7F80) / 4.0;
                    auto &row = taps[255 - phase];
                    row[0] = static_cast<int16_t>(std::lround(table[phase] - diff));
                    row[1] = static_cast<int16_t>(std::lround(table[phase + 256] - diff));
                    row[2] = static_cast<int16_t>(std::lround(table[511 - phase] - diff));
                    row[3] = static_cast<int16_t>(std::lround(table[255 - phase] - diff));
                }
            }
        };
        const GaussTable g_gauss;
    }

    // The sample at the voice's position: the hardware's Gaussian kernel over the 4 most recent decoded samples,
    // indexed by bits 4-11 of the pitch counter.
    int32_t IopSpu2::voiceSample(const Voice &v) const
    {
        const uint32_t i = v.counter >> 12u; // 0..27: newest decoded sample is pcm[3 + i]
        const auto &taps = g_gauss.taps[(v.counter >> 4u) & 0xFFu];
        int32_t out = 0;
        for (uint32_t k = 0; k < 4u; ++k)
            out += (taps[k] * v.pcm[i + k]) >> 15;
        return out;
    }

    void IopSpu2::stepEnvelope(int core, int vi)
    {
        Voice &v = m_voices[core][vi];
        const uint32_t regBase = core * 0x400u + vi * 0x10u;
        const uint16_t adsr1 = regv(regBase + kVoiceAdsr1);
        const uint16_t adsr2 = regv(regBase + kVoiceAdsr2);

        EnvRate rate{};
        int32_t target = 0;
        switch (v.phase)
        {
        case Voice::Phase::Off:
            v.env = 0;
            return;
        case Voice::Phase::Attack:
            rate = makeRate((adsr1 >> 8u) & 0x7Fu, false, (adsr1 & 0x8000u) != 0u);
            target = kEnvMax;
            break;
        case Voice::Phase::Decay:
            rate = makeRate(((adsr1 >> 4u) & 0xFu) << 2u, true, true);
            target = std::min<int32_t>(kEnvMax, ((adsr1 & 0xFu) + 1) * 0x800);
            break;
        case Voice::Phase::Sustain:
            rate = makeRate((adsr2 >> 6u) & 0x7Fu, (adsr2 & 0x4000u) != 0u, (adsr2 & 0x8000u) != 0u);
            break;
        case Voice::Phase::Release:
            rate = makeRate((adsr2 & 0x1Fu) << 2u, true, (adsr2 & 0x20u) != 0u);
            break;
        }

        int32_t cycles = 1 << std::max(0, rate.shift - 11);
        int32_t step = rate.step << std::max(0, 11 - rate.shift);
        if (rate.exponential && !rate.decrease && v.env > 0x6000)
            cycles *= 4;
        if (rate.exponential && rate.decrease)
            step = (step * v.env) >> 15;

        if (++v.envCounter >= cycles)
        {
            v.envCounter = 0;
            v.env = std::clamp(v.env + step, 0, kEnvMax);
        }

        switch (v.phase)
        {
        case Voice::Phase::Attack:
            if (v.env >= target)
            {
                v.env = kEnvMax;
                v.phase = Voice::Phase::Decay;
                v.envCounter = 0;
            }
            break;
        case Voice::Phase::Decay:
            if (v.env <= target)
            {
                v.phase = Voice::Phase::Sustain;
                v.envCounter = 0;
            }
            break;
        case Voice::Phase::Release:
            if (v.env <= 0)
            {
                v.env = 0;
                v.phase = Voice::Phase::Off;
            }
            break;
        default:
            break;
        }
    }

    void IopSpu2::stepVoice(int core, int vi)
    {
        Voice &v = m_voices[core][vi];
        if (!v.on)
            return;
        if (!v.blockEntered)
            enterBlock(core, vi);

        const uint32_t pitch = std::min<uint32_t>(regv(core * 0x400u + vi * 0x10u + kVoicePitch), 0x3FFFu);
        v.counter += pitch;
        while (v.counter >= (kSamplesPerBlock << 12u))
        {
            v.counter -= kSamplesPerBlock << 12u;
            const uint8_t flags = static_cast<uint8_t>(m_ram[v.nax & AddressMask] >> 8u);
            if ((flags & 0x1u) != 0u)
            {
                m_endx[core] |= 1u << vi;
                if ((flags & 0x2u) != 0u)
                {
                    v.nax = v.lsax & ~(kBlockHalfwords - 1u);
                }
                else
                {
                    // Loop end without repeat: the voice is muted and stops fetching.
                    SPU_LOG("END c%d v%d nax=0x%x\n", core, vi, v.nax);
                    v.on = false;
                    v.phase = Voice::Phase::Off;
                    v.env = 0;
                    return;
                }
            }
            else
            {
                v.nax = (v.nax + kBlockHalfwords) & AddressMask;
            }
            enterBlock(core, vi);
        }
        stepEnvelope(core, vi);
    }

    void IopSpu2::stepOutputAreas()
    {
        // Every output sample each core writes its voice-1/voice-3 capture and its
        // dry/wet L/R mix into fixed 0x200-halfword ring areas of sound RAM. Those
        // writes are sound-RAM accesses, so they are tested against IRQA like any
        // other access; drivers arm IRQA inside these areas to get a periodic tick.
        static constexpr uint32_t kCore0Areas[] = {0x400u, 0x600u, 0x1000u, 0x1200u, 0x1400u, 0x1600u};
        static constexpr uint32_t kCore1Areas[] = {0xC00u, 0xE00u, 0x1800u, 0x1A00u, 0x1C00u, 0x1E00u};
        for (uint32_t area : kCore0Areas)
            testIrq(0, area + m_outPos, 1u);
        for (uint32_t area : kCore1Areas)
            testIrq(1, area + m_outPos, 1u);
        m_outPos = (m_outPos + 1u) & 0x1FFu;
        // The half the output position just left has been played: AutoDMA refills it with the next block.
        if ((m_outPos & 0xFFu) == 0u)
            for (int core = 0; core < 2; ++core)
                if (admaActive(core) || !m_adma[core].empty())
                    refillAdmaInput(core, m_outPos ^ 0x100u);
    }

    void IopSpu2::refillAdmaInput(int core, uint32_t half)
    {
        const uint32_t input = 0x2000u + core * 0x400u + half;
        std::deque<AdmaRange> &queue = m_adma[core];
        while (!queue.empty() && queue.front().bytes < 0x400u)
            queue.pop_front();
        if (queue.empty() || !m_admaRam || queue.front().madr + 0x400u > m_admaRamSize)
        {
            for (uint32_t i = 0; i < 0x100u; ++i)
                m_ram[input + i] = m_ram[input + 0x200u + i] = 0u;
            return;
        }
        AdmaRange &range = queue.front();
        const uint8_t *src = m_admaRam + range.madr;
        // PS2X_SPU2_ADMA_DUMP=<file>: the AutoDMA data as played (int16, 0x100 L then 0x100 R per block).
        static std::FILE *admaDump = []() -> std::FILE * {
            const char *path = std::getenv("PS2X_SPU2_ADMA_DUMP");
            return path ? std::fopen(path, "wb") : nullptr;
        }();
        if (admaDump)
            std::fwrite(src, 1, 0x400u, admaDump);
        for (uint32_t i = 0; i < 0x100u; ++i)
        {
            std::memcpy(&m_ram[input + i], src + i * 2u, 2);
            std::memcpy(&m_ram[input + 0x200u + i], src + 0x200u + i * 2u, 2);
        }
        range.madr += 0x400u;
        range.bytes -= 0x400u;
        m_admaLastMadr[core] = range.madr;
        m_admaBytes[core] -= 0x400u;
        if (range.bytes == 0u)
            queue.pop_front();
    }

    void IopSpu2::advanceTo(uint64_t cycle)
    {
        if (cycle <= m_lastCycle)
            return;
        m_cycleCarry += cycle - m_lastCycle;
        m_lastCycle = cycle;
        // Bound catch-up work if the scheduler jumped a long idle period.
        uint64_t samples = m_cycleCarry / CyclesPerSample;
        m_cycleCarry %= CyclesPerSample;
        samples = std::min<uint64_t>(samples, 48000u);
        const bool mixing = g_outputSink.load(std::memory_order_acquire) != nullptr;
        for (uint64_t s = 0; s < samples; ++s)
        {
            int32_t extL = 0, extR = 0; // core 0's output, the external input of core 1
            int32_t outL = 0, outR = 0;
            for (int core = 0; core < 2; ++core)
            {
                mixCore(core, extL, extR, outL, outR);
                for (int vi = 0; vi < Voices; ++vi)
                    stepVoice(core, vi);
            }
            stepOutputAreas();
            if (mixing)
            {
                m_out[m_outFrames * 2u] = clamp16(outL);
                m_out[m_outFrames * 2u + 1u] = clamp16(outR);
                if (++m_outFrames == m_out.size() / 2u)
                    flushOutput();
            }
        }
        if (m_outFrames != 0u)
            flushOutput();
    }

    // One output sample of a core, as the SPU2 mixes it (register layout and gates as documented by PCSX2):
    //  - voices: each voice's interpolated sample times its envelope, then its L/R volume, summed into dry and wet
    //    groups by VMIXL/VMIXR and VMIXEL/VMIXER;
    //  - sound data input: PCM the IOP writes into the core's input area (L at 0x2000, R at 0x2200, +0x400 for core 1),
    //    read at the output position, times BVOL;
    //  - external input (core 1 only): core 0's output times AVOL.
    // Voice and master volumes are 15-bit (fixedVolume); AVOL/BVOL/EVOL are plain 16-bit (plainVolume).
    // MMIX gates each source into the dry mix and into the wet mix, which feeds the reverb (its return times EVOL
    // joins the dry mix). The voice sums are also written to sound RAM every sample (dry 0x1000/0x1200, wet 0x1400/0x1600 for
    // core 0; 0x1800.. for core 1), and voices 1 and 3 to 0x400/0x600 (0xC00/0xE00): Black's sound driver reads
    // core 0's wet sums back, processes them on the IOP and returns them as sound data input.
    void IopSpu2::mixCore(int core, int32_t &extL, int32_t &extR, int32_t &outL, int32_t &outR)
    {
        const uint32_t c = core * 0x400u;
        // Voice masks: the first register holds voices 0-15, the second voices 16-23 (as KON/KOFF).
        const uint32_t dryL = regv(c + 0x188u) | (regv(c + 0x18Au) & 0xFFu) << 16;
        const uint32_t wetL = regv(c + 0x18Cu) | (regv(c + 0x18Eu) & 0xFFu) << 16;
        const uint32_t dryR = regv(c + 0x190u) | (regv(c + 0x192u) & 0xFFu) << 16;
        const uint32_t wetR = regv(c + 0x194u) | (regv(c + 0x196u) & 0xFFu) << 16;
        int32_t vDryL = 0, vDryR = 0, vWetL = 0, vWetR = 0;
        for (int vi = 0; vi < Voices; ++vi)
        {
            const Voice &v = m_voices[core][vi];
            int32_t value = 0;
            if (v.on && v.env != 0)
            {
                value = (voiceSample(v) * v.env) >> 15;
                const uint32_t r = voiceRegBase(core, vi);
                const uint32_t bit = 1u << vi;
                const int32_t l = (value * fixedVolume(regv(r + 0x0u))) >> 15;
                const int32_t rr = (value * fixedVolume(regv(r + 0x2u))) >> 15;
                if (dryL & bit) vDryL += l;
                if (dryR & bit) vDryR += rr;
                if (wetL & bit) vWetL += l;
                if (wetR & bit) vWetR += rr;
            }
            if (vi == 1 || vi == 3)
                m_ram[(c * 2u + (vi == 1 ? 0x400u : 0x600u) + m_outPos) & AddressMask] = static_cast<uint16_t>(clamp16(value));
        }
        vDryL = clamp16(vDryL); vDryR = clamp16(vDryR); vWetL = clamp16(vWetL); vWetR = clamp16(vWetR);
        const uint32_t memOut = core == 0 ? 0x1000u : 0x1800u;
        m_ram[memOut + m_outPos] = static_cast<uint16_t>(vDryL);
        m_ram[memOut + 0x200u + m_outPos] = static_cast<uint16_t>(vDryR);
        m_ram[memOut + 0x400u + m_outPos] = static_cast<uint16_t>(vWetL);
        m_ram[memOut + 0x600u + m_outPos] = static_cast<uint16_t>(vWetR);

        const uint32_t vols = 0x760u + core * 0x28u; // MVOL +0, EVOL +4, AVOL +8, BVOL +C
        const uint32_t input = 0x2000u + c;
        const int32_t inL = (static_cast<int16_t>(m_ram[input + m_outPos]) * plainVolume(regv(vols + 0xCu))) >> 15;
        const int32_t inR = (static_cast<int16_t>(m_ram[input + 0x200u + m_outPos]) * plainVolume(regv(vols + 0xEu))) >> 15;

        if (spuLevels())
        {
            auto &pk = m_levelPeaks[core];
            pk[0] = std::max(pk[0], std::abs(vDryL) + std::abs(vDryR));
            pk[1] = std::max(pk[1], std::abs(vWetL) + std::abs(vWetR));
            pk[2] = std::max<int32_t>(pk[2], std::abs(static_cast<int16_t>(m_ram[input + m_outPos])) +
                                                 std::abs(static_cast<int16_t>(m_ram[input + 0x200u + m_outPos])));
            static const uint32_t window = []
            {
                const unsigned long n = std::strtoul(std::getenv("PS2X_SPU2_LEVELS"), nullptr, 10);
                return n > 1ul ? static_cast<uint32_t>(n) : 48000u; // PS2X_SPU2_LEVELS=<samples per line>
            }();
            if (core == 1 && ++m_levelSamples >= window)
            {
                std::fprintf(stderr, "[spu2] sources c0 dry=%d wet=%d in=%d | c1 dry=%d wet=%d in=%d | mmix %04x %04x bvol %04x %04x avol1 %04x mvol %04x %04x\n",
                             m_levelPeaks[0][0], m_levelPeaks[0][1], m_levelPeaks[0][2], m_levelPeaks[1][0], m_levelPeaks[1][1],
                             m_levelPeaks[1][2], regv(0x198u), regv(0x598u), regv(0x76Cu), regv(0x794u), regv(0x790u),
                             regv(0x760u), regv(0x788u));
                std::fprintf(stderr, "[spu2] reverb c1 on=%d esa=%05x eea=%x apf=%x/%x lsame=%x comb1=%x | vIIR %04x comb %04x %04x %04x %04x wall %04x apf %04x %04x in %04x %04x evol %04x | c0 on=%d esa=%05x\n",
                             (regv(0x59Au) & 0x80u) ? 1 : 0, readAddr(0x6E0u), regv(0x73Cu), readAddr(0x6E4u), readAddr(0x6E8u),
                             readAddr(0x6ECu), readAddr(0x6F4u), regv(0x79Cu), regv(0x79Eu), regv(0x7A0u), regv(0x7A2u), regv(0x7A4u),
                             regv(0x7A6u), regv(0x7A8u), regv(0x7AAu), regv(0x7ACu), regv(0x7AEu), regv(0x78Cu),
                             (regv(0x19Au) & 0x80u) ? 1 : 0, readAddr(0x2E0u));
                m_levelPeaks = {};
                m_levelSamples = 0;
            }
        }
        // PS2X_SPU2_DUMP=<file>: per sample, core 0's input L, core 1's voice dry L and core 0's voice dry L (int16
        // each), for analysing which part of a sound is which.
        static std::FILE *dump = []() -> std::FILE * {
            const char *path = std::getenv("PS2X_SPU2_DUMP");
            return path ? std::fopen(path, "wb") : nullptr;
        }();
        if (dump)
        {
            static int16_t row[3];
            if (core == 0)
            {
                row[0] = static_cast<int16_t>(clamp16(inL));
                row[2] = static_cast<int16_t>(vDryL);
            }
            else
            {
                row[1] = static_cast<int16_t>(vDryL);
                std::fwrite(row, sizeof(row), 1, dump);
            }
        }
        const uint16_t mmix = regv(c + 0x198u);
        const int32_t exL = core == 1 ? (extL * plainVolume(regv(vols + 0x8u))) >> 15 : 0;
        const int32_t exR = core == 1 ? (extR * plainVolume(regv(vols + 0xAu))) >> 15 : 0;
        int32_t l = 0, r = 0, wl = 0, wr = 0;
        if (mmix & 0x800u) l += vDryL;
        if (mmix & 0x400u) r += vDryR;
        if (mmix & 0x200u) wl += vWetL;
        if (mmix & 0x100u) wr += vWetR;
        if (mmix & 0x080u) l += inL;
        if (mmix & 0x040u) r += inR;
        if (mmix & 0x020u) wl += inL;
        if (mmix & 0x010u) wr += inR;
        if (mmix & 0x008u) l += exL;
        if (mmix & 0x004u) r += exR;
        if (mmix & 0x002u) wl += exL;
        if (mmix & 0x001u) wr += exR;
        int32_t fxL = 0, fxR = 0;
        reverb(core, clamp16(wl), clamp16(wr), fxL, fxR);
        l += (fxL * plainVolume(regv(vols + 0x4u))) >> 15; // EVOL
        r += (fxR * plainVolume(regv(vols + 0x6u))) >> 15;
        l = (clamp16(l) * fixedVolume(regv(vols))) >> 15;
        r = (clamp16(r) * fixedVolume(regv(vols + 2u))) >> 15;
        if (core == 0)
        {
            extL = clamp16(l);
            extR = clamp16(r);
            m_ram[0x800u + m_outPos] = static_cast<uint16_t>(extL);
            m_ram[0xA00u + m_outPos] = static_cast<uint16_t>(extR);
        }
        else
        {
            outL = l;
            outR = r;
        }
    }

    // The SPU reverb (the PS1 algorithm, as documented by nocash and implemented by PCSX2): a work area in sound RAM
    // from ESA to EEA walked one halfword per tick at 24 kHz; same-side and cross-side reflections through an IIR
    // filter, four comb taps and two all-pass stages. On the SPU2 the address registers are halfword offsets into
    // the work area. Disabled (ATTR bit 7 clear) it neither reads nor writes sound RAM.
    void IopSpu2::reverb(int core, int32_t inL, int32_t inR, int32_t &outL, int32_t &outR)
    {
        Reverb &rv = m_reverb[core];
        const uint32_t c = core * 0x400u;
        const uint32_t esa = readAddr(c + 0x2E0u);
        const uint32_t eea = (regv(c + 0x33Cu) & 0xFu) << 16 | 0xFFFFu;
        if ((regv(c + 0x19Au) & 0x80u) == 0u || eea <= esa)
        {
            rv = Reverb{};
            outL = outR = 0;
            return;
        }
        rv.inL += inL;
        rv.inR += inR;
        rv.odd = !rv.odd;
        if (rv.odd)
        {
            // Between ticks: halfway from the previous output to the current one.
            outL = (rv.prevL + rv.curL) >> 1;
            outR = (rv.prevR + rv.curR) >> 1;
            return;
        }

        const uint32_t size = eea - esa + 1u;
        auto off = [&](uint32_t reg) { return readAddr(c + reg) % size; };
        auto at = [&](uint32_t offset) { return esa + (rv.pos + offset) % size; };
        auto rd = [&](uint32_t offset) { return static_cast<int32_t>(static_cast<int16_t>(m_ram[at(offset)])); };
        auto wr = [&](uint32_t offset, int32_t value) { m_ram[at(offset)] = static_cast<uint16_t>(clamp16(value)); };
        const uint32_t k = 0x774u + core * 0x28u;
        auto coef = [&](uint32_t reg) { return static_cast<int32_t>(static_cast<int16_t>(regv(k + reg))); };
        auto mul = [](int32_t a, int32_t b) { return (a * b) >> 15; };
        const uint32_t back = size - 1u; // "one tick earlier"

        const int32_t vIIR = coef(0x0u), vC1 = coef(0x2u), vC2 = coef(0x4u), vC3 = coef(0x6u), vC4 = coef(0x8u);
        const int32_t vWALL = coef(0xAu), vAPF1 = coef(0xCu), vAPF2 = coef(0xEu), vLIN = coef(0x10u), vRIN = coef(0x12u);
        const uint32_t dAPF1 = off(0x2E4u), dAPF2 = off(0x2E8u);
        const uint32_t mLSAME = off(0x2ECu), mRSAME = off(0x2F0u), mLCOMB1 = off(0x2F4u), mRCOMB1 = off(0x2F8u);
        const uint32_t mLCOMB2 = off(0x2FCu), mRCOMB2 = off(0x300u), dLSAME = off(0x304u), dRSAME = off(0x308u);
        const uint32_t mLDIFF = off(0x30Cu), mRDIFF = off(0x310u), mLCOMB3 = off(0x314u), mRCOMB3 = off(0x318u);
        const uint32_t mLCOMB4 = off(0x31Cu), mRCOMB4 = off(0x320u), dLDIFF = off(0x324u), dRDIFF = off(0x328u);
        const uint32_t mLAPF1 = off(0x32Cu), mRAPF1 = off(0x330u), mLAPF2 = off(0x334u), mRAPF2 = off(0x338u);

        const int32_t li = mul(clamp16(rv.inL >> 1), vLIN), ri = mul(clamp16(rv.inR >> 1), vRIN);
        rv.inL = rv.inR = 0;
        wr(mLSAME, mul(li + mul(rd(dLSAME), vWALL) - rd(mLSAME + back), vIIR) + rd(mLSAME + back));
        wr(mRSAME, mul(ri + mul(rd(dRSAME), vWALL) - rd(mRSAME + back), vIIR) + rd(mRSAME + back));
        wr(mLDIFF, mul(li + mul(rd(dRDIFF), vWALL) - rd(mLDIFF + back), vIIR) + rd(mLDIFF + back));
        wr(mRDIFF, mul(ri + mul(rd(dLDIFF), vWALL) - rd(mRDIFF + back), vIIR) + rd(mRDIFF + back));
        int32_t lo = mul(vC1, rd(mLCOMB1)) + mul(vC2, rd(mLCOMB2)) + mul(vC3, rd(mLCOMB3)) + mul(vC4, rd(mLCOMB4));
        int32_t ro = mul(vC1, rd(mRCOMB1)) + mul(vC2, rd(mRCOMB2)) + mul(vC3, rd(mRCOMB3)) + mul(vC4, rd(mRCOMB4));
        lo = clamp16(lo - mul(vAPF1, rd(mLAPF1 + size - dAPF1)));
        wr(mLAPF1, lo);
        lo = clamp16(mul(lo, vAPF1) + rd(mLAPF1 + size - dAPF1));
        ro = clamp16(ro - mul(vAPF1, rd(mRAPF1 + size - dAPF1)));
        wr(mRAPF1, ro);
        ro = clamp16(mul(ro, vAPF1) + rd(mRAPF1 + size - dAPF1));
        lo = clamp16(lo - mul(vAPF2, rd(mLAPF2 + size - dAPF2)));
        wr(mLAPF2, lo);
        lo = clamp16(mul(lo, vAPF2) + rd(mLAPF2 + size - dAPF2));
        ro = clamp16(ro - mul(vAPF2, rd(mRAPF2 + size - dAPF2)));
        wr(mRAPF2, ro);
        ro = clamp16(mul(ro, vAPF2) + rd(mRAPF2 + size - dAPF2));
        rv.pos = (rv.pos + 1u) % size;

        rv.prevL = rv.curL;
        rv.prevR = rv.curR;
        rv.curL = lo;
        rv.curR = ro;
        outL = rv.prevL;
        outR = rv.prevR;
    }

    void IopSpu2::flushOutput()
    {
        // PS2X_SPU2_OUT_DUMP=<file>: the mixed stereo output (int16 L,R at 48 kHz), exactly what the host plays.
        static std::FILE *outDump = []() -> std::FILE * {
            const char *path = std::getenv("PS2X_SPU2_OUT_DUMP");
            return path ? std::fopen(path, "wb") : nullptr;
        }();
        if (outDump)
            std::fwrite(m_out.data(), sizeof(int16_t), m_outFrames * 2u, outDump);
        if (const Spu2OutputSink sink = g_outputSink.load(std::memory_order_acquire))
            sink(m_out.data(), m_outFrames);
        m_outFrames = 0u;
    }

    uint64_t IopSpu2::nextEventCycle(uint64_t fallback) const noexcept
    {
        // Output areas are written every sample, so an armed IRQA inside them fires within
        // one ring period; wake the scheduler at that granularity when any IRQ is enabled.
        if (irqEnabled(0) || irqEnabled(1))
        {
            uint64_t soonest = UINT64_MAX;
            for (int core = 0; core < 2; ++core)
            {
                if (!irqEnabled(core))
                    continue;
                const uint32_t irqa = irqAddress(core);
                const uint32_t rel = irqa & 0x1FFu;
                const uint32_t samplesAhead = ((rel - m_outPos) & 0x1FFu) + 1u;
                soonest = std::min<uint64_t>(soonest, samplesAhead);
            }
            if (soonest != UINT64_MAX)
                fallback = std::min<uint64_t>(fallback, m_lastCycle + soonest * CyclesPerSample);
        }
        for (const auto &core : m_voices)
            for (const Voice &v : core)
                if (v.on)
                    return std::min<uint64_t>(fallback, m_lastCycle + CyclesPerSample * kSamplesPerBlock);
        return fallback;
    }
}
