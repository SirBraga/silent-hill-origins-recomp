#include "runtime/ps2_vu1.h"
#include "runtime/gs/ps2_gif_arbiter.h"
#include "runtime/gs/gs_frontend.h"
#include "runtime/ps2_memory.h"
#include "ps2_vu1_detail.h"
#include "ps2_vu1_exec.inl"
#if __has_include("black_vu_aot_generated.hpp")
#include "black_vu_aot_generated.hpp"
#define BLACK_VU_AOT_AVAILABLE 1
#endif

#include <algorithm>
#include <bit>
#include <cfenv>
#include <chrono>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
#include <filesystem>
#include <limits>
#include <memory>
#include <mutex>
#include <vector>
#include <ps2_log.h>
#if defined(PS2X_VU_SIMD)
#endif

namespace
{
    struct VuCatalogCache
    {
        uint64_t generation = ~uint64_t{0}, hash = 0;
        const uint8_t *code = nullptr;
        uint32_t size = 0;
        std::array<uint64_t, 32> visited{};
    };
    VuCatalogCache &vuCatalogCache(unsigned unit)
    {
        static VuCatalogCache cache[2];
        return cache[unit];
    }
    void catalogVuPair(unsigned unit, uint32_t pc)
    {
        static const char *directory = std::getenv("PS2X_VU_CATALOG");
        if (!directory || pc >= 16384u || (pc & 7u)) return;
        auto &cache = vuCatalogCache(unit);
        unsigned instruction = pc / 8u;
        uint64_t bit = uint64_t{1} << (instruction & 63u);
        if (cache.visited[instruction / 64u] & bit) return;
        static FILE *coverage = std::fopen((std::filesystem::path(directory) / "coverage.bin").string().c_str(), "wb");
        if (!coverage) return;
        std::fwrite(&unit, 4, 1, coverage); std::fwrite(&pc, 4, 1, coverage);
        std::fwrite(&cache.hash, 8, 1, coverage); std::fflush(coverage);
        cache.visited[instruction / 64u] |= bit;
    }

    // Opt-in catalog of executed VU code images and entry points; not a backend.
    void catalogVuCode(unsigned unit, const uint8_t *code, uint32_t size,
                       uint32_t pc, const PS2Memory *memory)
    {
        static const char *directory = std::getenv("PS2X_VU_CATALOG");
        if (!directory || !memory || !code || !size) return;
        static FILE *events = nullptr;
        static bool failed = false;
        if (failed) return;
        std::error_code error;
        if (!events)
        {
            std::filesystem::create_directories(directory, error);
            events = error ? nullptr : std::fopen((std::filesystem::path(directory) / "runs.bin").string().c_str(), "wb");
            if (!events) { failed = true; return; }
        }
        VuCatalogCache &cache = vuCatalogCache(unit);
        uint64_t generation = unit ? memory->getVU1CodeGeneration() : memory->getVU0CodeGeneration();
        if (cache.generation != generation || cache.code != code || cache.size != size)
        {
            uint64_t hash = 14695981039346656037ull;
            for (uint32_t i = 0; i < size; ++i) { hash ^= code[i]; hash *= 1099511628211ull; }
            char name[80]; std::snprintf(name, sizeof(name), "vu%u-%016llx.bin", unit, static_cast<unsigned long long>(hash));
            auto path = std::filesystem::path(directory) / name;
            if (!std::filesystem::exists(path))
            {
                FILE *image = std::fopen(path.string().c_str(), "wb");
                if (!image) { failed = true; return; }
                bool complete = std::fwrite(code, 1, size, image) == size;
                std::fclose(image);
                if (!complete) { failed = true; return; }
            }
            if (cache.hash != hash) cache.visited.fill(0);
            cache.generation = generation; cache.hash = hash; cache.code = code; cache.size = size;
        }
        // Fixed little-endian host record: unit, byte PC, image hash, code generation.
        std::fwrite(&unit, 4, 1, events); std::fwrite(&pc, 4, 1, events);
        std::fwrite(&cache.hash, 8, 1, events); std::fwrite(&generation, 8, 1, events);
        static unsigned calls = 0;
        if ((++calls & 1023u) == 0u) std::fflush(events);
    }

    constexpr uint8_t laneForComponent(uint32_t component)
    {
        return static_cast<uint8_t>(1u << (3u - component));
    }

#if defined(PS2X_VU_SIMD)
    void normalizeVuResults(float *result, uint8_t dest, uint8_t laneFlags[4])
    {
        const uint32x4_t bits = vreinterpretq_u32_f32(vld1q_f32(result));
        const uint32x4_t sign = vandq_u32(bits, vdupq_n_u32(0x80000000u));
        const uint32x4_t magnitude = vandq_u32(bits, vdupq_n_u32(0x7fffffffu));
        const uint32x4_t exponent = vandq_u32(bits, vdupq_n_u32(0x7f800000u));
        const uint32x4_t zeroExponent = vceqq_u32(exponent, vdupq_n_u32(0));
        const uint32x4_t overflow = vceqq_u32(exponent, vdupq_n_u32(0x7f800000u));
        const uint32x4_t underflow = vbicq_u32(zeroExponent, vceqq_u32(magnitude, vdupq_n_u32(0)));
        uint32x4_t flags = vorrq_u32(vshrq_n_u32(sign, 30), vandq_u32(zeroExponent, vdupq_n_u32(1)));
        flags = vorrq_u32(flags, vandq_u32(underflow, vdupq_n_u32(4)));
        flags = vorrq_u32(flags, vandq_u32(overflow, vdupq_n_u32(8)));
        const uint32_t active[4] = {dest & 8u ? ~0u : 0u, dest & 4u ? ~0u : 0u,
                                    dest & 2u ? ~0u : 0u, dest & 1u ? ~0u : 0u};
        const uint32x4_t mask = vld1q_u32(active);
        uint32x4_t normalized = vbslq_u32(zeroExponent, sign, bits);
        normalized = vbslq_u32(overflow, vorrq_u32(sign, vdupq_n_u32(0x7f7fffffu)), normalized);
        vst1q_f32(result, vreinterpretq_f32_u32(vbslq_u32(mask, normalized, bits)));
        uint32_t outputFlags[4];
        vst1q_u32(outputFlags, vandq_u32(flags, mask));
        for (unsigned lane = 0; lane < 4; ++lane)
            laneFlags[lane] = static_cast<uint8_t>(outputFlags[lane]);
    }
#endif

#if defined(PS2X_VU_SIMD)
    // normalizeVuResults without the per-lane flags.
    void normalizeVuValues(float *result, uint8_t dest)
    {
        const uint32x4_t bits = vreinterpretq_u32_f32(vld1q_f32(result));
        const uint32x4_t sign = vandq_u32(bits, vdupq_n_u32(0x80000000u));
        const uint32x4_t exponent = vandq_u32(bits, vdupq_n_u32(0x7f800000u));
        const uint32x4_t zeroExponent = vceqq_u32(exponent, vdupq_n_u32(0));
        const uint32x4_t overflow = vceqq_u32(exponent, vdupq_n_u32(0x7f800000u));
        const uint32_t active[4] = {dest & 8u ? ~0u : 0u, dest & 4u ? ~0u : 0u,
                                    dest & 2u ? ~0u : 0u, dest & 1u ? ~0u : 0u};
        const uint32x4_t mask = vld1q_u32(active);
        uint32x4_t normalized = vbslq_u32(zeroExponent, sign, bits);
        normalized = vbslq_u32(overflow, vorrq_u32(sign, vdupq_n_u32(0x7f7fffffu)), normalized);
        vst1q_f32(result, vreinterpretq_f32_u32(vbslq_u32(mask, normalized, bits)));
    }
#endif

    // FMAC upper ops that enqueue MAC/status flags (applyFmacDest*), when DEST is not empty.
    bool upperWritesFmacFlags(uint32_t upper)
    {
        if (((upper >> 21) & 0xFu) == 0u)
            return false;
        uint32_t op = upper & 0x3Fu;
        if (op >= 0x3Cu)
            op = (upper & 3u) | ((upper >> 4) & 0x7Cu);
        else if (op >= 0x30u)
            return false;
        return op <= 0x0Fu || (op >= 0x18u && op <= 0x1Cu) || op == 0x1Eu ||
               (op >= 0x20u && op <= 0x2Au) || (op >= 0x2Cu && op <= 0x2Eu);
    }

    bool vuExactFlagsRequested()
    {
        static const bool enabled = std::getenv("PS2X_VU_EXACT_FLAGS") != nullptr;
        return enabled;
    }

    // One-shot context for the first reserved-opcode stops. File-scope so the
    // dump does not need a header change (that would rebuild every runner batch).
    struct VuReservedDiag
    {
        uint32_t prevPc = 0xFFFFFFFFu;
        uint32_t kickPc = 0xFFFFFFFFu;
        uint64_t kickCycle = 0;
        int dumps = 0;
    };
    VuReservedDiag g_vuReservedDiag[2];
}

namespace
{
    // PS2X_VU_TRACE=<file>: record VU1 execute() calls for offline replay
    // (ps2x_vu1_trace_replay). PS2X_VU_TRACE_AFTER skips the first N calls,
    // PS2X_VU_TRACE_STRIDE keeps one call in N, PS2X_VU_TRACE_COUNT bounds
    // the number of records (default 4000). Layout per record:
    //   "VUT<unit>" (execute) or "VUR<unit>" (resume with idle pipelines), startPC, top, itop, maxCycles, sizeof(VU1State), codeSize, dataSize,
    //   VU1State before, code, data before, VU1State after, data after.
    class VuTraceWriter
    {
    public:
        VuTraceWriter(const char *path, uint32_t unit) : m_unit(unit)
        {
            m_file = std::fopen(path, "wb");
            // PS2X_VU_TRACE_TRIGGER=1: record nothing until <path>.trigger appears (checked every 1024 calls), then
            // start from there; the file is removed.
            if (std::getenv("PS2X_VU_TRACE_TRIGGER"))
            {
                m_trigger = std::string(path) + ".trigger";
                m_after = ~uint64_t{0};
            }
            if (const char *v = std::getenv("PS2X_VU_TRACE_AFTER")) m_after = std::strtoull(v, nullptr, 10);
            if (const char *v = std::getenv("PS2X_VU_TRACE_STRIDE")) m_stride = std::max<uint64_t>(1u, std::strtoull(v, nullptr, 10));
            if (const char *v = std::getenv("PS2X_VU_TRACE_COUNT")) m_count = std::strtoull(v, nullptr, 10);
        }
        bool begin(const VU1State &state, uint32_t startPC, uint32_t top, uint32_t itop, uint32_t maxCycles,
                   const uint8_t *code, uint32_t codeSize, const uint8_t *data, uint32_t dataSize, bool resumed = false)
        {
            const uint64_t call = m_calls++;
            if (!m_trigger.empty() && (call & 1023u) == 0u)
                if (std::FILE *t = std::fopen(m_trigger.c_str(), "rb"))
                {
                    std::fclose(t);
                    std::remove(m_trigger.c_str());
                    m_trigger.clear();
                    m_after = call;
                }
            if (!m_file || m_written >= m_count || call < m_after || ((call - m_after) % m_stride) != 0u)
                return false;
            const uint32_t header[8] = {(resumed ? 0x30525556u : 0x30545556u) | (m_unit << 24), startPC, top, itop, maxCycles,
                                        static_cast<uint32_t>(sizeof(VU1State)), codeSize, dataSize};
            std::fwrite(header, sizeof(header), 1, m_file);
            std::fwrite(&state, sizeof(state), 1, m_file);
            std::fwrite(code, 1, codeSize, m_file);
            std::fwrite(data, 1, dataSize, m_file);
            return true;
        }
        void end(const VU1State &state, const uint8_t *data, uint32_t dataSize)
        {
            std::fwrite(&state, sizeof(state), 1, m_file);
            std::fwrite(data, 1, dataSize, m_file);
            if (++m_written >= m_count)
            {
                std::fclose(m_file);
                m_file = nullptr;
                std::fprintf(stderr, "[vu-trace] wrote %llu records\n", static_cast<unsigned long long>(m_written));
            }
            else
                std::fflush(m_file); // the runner is usually killed, not closed
        }

    private:
        std::FILE *m_file = nullptr;
        uint64_t m_calls = 0, m_written = 0, m_after = 0, m_stride = 1, m_count = 4000;
        uint32_t m_unit = 1;
        std::string m_trigger;
    };

    // PS2X_VU_TRACE records VU1, PS2X_VU0_TRACE records VU0 microprograms.
    VuTraceWriter *vuTraceWriter(uint32_t unit)
    {
        static VuTraceWriter *writers[2] = {
            [] () -> VuTraceWriter * { const char *path = std::getenv("PS2X_VU0_TRACE"); return path && path[0] ? new VuTraceWriter(path, 0u) : nullptr; }(),
            [] () -> VuTraceWriter * { const char *path = std::getenv("PS2X_VU_TRACE"); return path && path[0] ? new VuTraceWriter(path, 1u) : nullptr; }()};
        return writers[unit & 1u];
    }
}

void VU1Interpreter::addVfRead(InstructionUsage &usage, uint8_t reg, uint8_t lanes)
{
    if (lanes == 0u)
        return;
    for (uint32_t index = 0; index < usage.vfReadCount; ++index)
    {
        if (usage.vfRead[index].reg == reg)
        {
            usage.vfRead[index].lanes |= lanes;
            return;
        }
    }
    if (usage.vfReadCount < usage.vfRead.size())
        usage.vfRead[usage.vfReadCount++] = {reg, lanes};
}

void VU1Interpreter::addVfWrite(InstructionUsage &usage, uint8_t reg, uint8_t lanes)
{
    if (reg == 0u || lanes == 0u)
        return;
    if (usage.vfWrite.reg == 0u)
        usage.vfWrite = {reg, lanes};
    else if (usage.vfWrite.reg == reg)
        usage.vfWrite.lanes |= lanes;
}

uint8_t VU1Interpreter::vfReadLanes(const InstructionUsage &usage, uint8_t reg)
{
    for (uint32_t index = 0; index < usage.vfReadCount; ++index)
    {
        if (usage.vfRead[index].reg == reg)
            return usage.vfRead[index].lanes;
    }
    return 0u;
}

VU1Interpreter::VU1Interpreter(Unit unit)
    : m_unit(unit)
{
    if (const char *range = std::getenv("PS2X_VU_DIRECT_RANGE"))
    {
        unsigned low = 0, high = 0;
        if (std::sscanf(range, "%x-%x", &low, &high) == 2 && high > low)
        {
            m_directLow = low;
            m_directSpan = high - low;
            m_directDebug = true;
        }
    }
    if (const char *limit = std::getenv("PS2X_VU_DIRECT_LIMIT"))
    {
        m_directLimit = std::strtoull(limit, nullptr, 10);
        m_directDebug = true;
    }
    reset();
}

namespace
{
    // Set by analyzeFastPairs() per unit: the loaded image has no status reader (FSEQ/FSAND/FSOR) and
    // nothing outside the unit can see its status register, so sticky product flags are unobservable.
    bool g_vuStatusUnobserved[2] = {false, false};
    // PS2X_VU0_FLAGS_UNOBSERVED=1 or VU1Interpreter::setVu0FlagsUnobserved(): the EE code never reads VU0's
    // status/MAC/clip registers (CFC2), so VU0 microprograms get the same flag treatment as VU1's.
    bool g_vu0FlagsUnobserved = std::getenv("PS2X_VU0_FLAGS_UNOBSERVED") != nullptr;
    // PS2X_VU_NO_HAZARDS=1: no register-hazard stalls in the fast engines (diagnostic).
    const bool g_vuHazardsDisabled = std::getenv("PS2X_VU_NO_HAZARDS") != nullptr;
}

void VU1Interpreter::resetScheduler()
{
    m_lazyCount = m_lazyApplied = 0;
    m_lazyClipCount = m_lazyClipApplied = 0;
    m_flagPipeline = {};
    m_fdiv = {};
    m_efu = {};
    m_storePipeline = {};
    m_flagPending = 0;
    m_storePending = 0;
    m_vfWritePipeline = {};
    m_vfPending = 0;
    m_viWritePipeline = {};
    m_viPending = 0;
    m_accWritePipeline = {};
    m_accPending = 0;
    m_nextCommitCycle = 0;
    // Every transmitted qword is rewritten before use: reset the control
    // state without clearing the 64 KiB packet buffer.
    m_xgkick.sourceAddress = 0;
    m_xgkick.totalBytes = 0;
    m_xgkick.copiedBytes = 0;
    m_xgkick.currentTagEnd = 0;
    m_xgkick.cycleCredit = 0;
    m_xgkick.issueCycle = 0;
    m_xgkick.active = false;
    m_xgkick.currentTagEop = false;
    m_vfReady = {};
    m_viReady = {};
    m_accReady = {};
    m_vfLatestWrite = {};
    m_viLatestWrite = {};
    m_accLatestWrite = {};
    m_nextWriteSequence = 0;
    m_efuResourceReady = 0;
    m_workingClip = m_state.clip;
    m_hazardUnknown = 0;
    m_viBranchBackupValue = 0;
    m_viBranchBackupReg = 0;
    m_viBranchBackupValid = false;
    m_stopRequested = false;
    m_pendingHaltD = false;
    m_pendingHaltT = false;
}

void VU1Interpreter::beginMicroCall()
{
    if (pipelinesPending() || m_state.branchPending || m_state.ebit || m_state.haltAfterDelaySlot)
    {
        reset();
        return;
    }
    // Every ready time recorded so far is in the past; what reset() would also clear is listed here.
    m_nextCommitCycle = 0;
    m_workingClip = 0;
    m_hazardUnknown = 0;
    m_viBranchBackupValid = false;
    m_stopRequested = false;
    m_pendingHaltD = false;
    m_pendingHaltT = false;
    m_efuResourceReady = 0;
}

void VU1Interpreter::reset()
{
    std::memset(&m_state, 0, sizeof(m_state));
    m_state.vf[0][3] = 1.0f;
    m_state.q = 1.0f;
    m_state.r = 0x3F800000u;
    m_cycle = 0;
    resetScheduler();
}

float VU1Interpreter::broadcast(const float *vf, uint8_t bc)
{
    return normalizeOperand(vf[bc & 3u]);
}

float VU1Interpreter::normalizeOperand(float value) const
{
    uint32_t bits = 0;
    std::memcpy(&bits, &value, sizeof(bits));
    const uint32_t exponent = (bits >> 23) & 0xFFu;
    if (exponent == 0u)
    {
        bits &= 0x80000000u;
    }
    else if (exponent == 0xFFu)
    {
        bits = (bits & 0x80000000u) | 0x7F7FFFFFu;
    }
    std::memcpy(&value, &bits, sizeof(value));
    return value;
}

float VU1Interpreter::normalizeResult(float value, uint32_t &laneFlags) const
{
    uint32_t bits = 0;
    std::memcpy(&bits, &value, sizeof(bits));
    const uint32_t sign = bits & 0x80000000u;
    const uint32_t magnitude = bits & 0x7FFFFFFFu;
    const uint32_t exponent = (bits >> 23) & 0xFFu;

    laneFlags = sign != 0u ? 0x2u : 0u;
    if (magnitude == 0u)
    {
        laneFlags |= 0x1u;
    }
    else if (exponent == 0u)
    {
        laneFlags |= 0x5u;
        bits = sign;
    }
    else if (exponent == 0xFFu)
    {
        laneFlags |= 0x8u;
        bits = sign | 0x7F7FFFFFu;
    }

    std::memcpy(&value, &bits, sizeof(value));
    return value;
}

uint32_t VU1Interpreter::microAddressMask() const
{
    return m_unit == Unit::VU1 ? 0x3FFFu : 0x0FFFu;
}

int32_t VU1Interpreter::readBranchVi(uint8_t reg) const
{
    if (reg == 0u)
        return 0;
    if (m_viBranchBackupValid &&
        m_viBranchBackupReg == reg)
    {
        return m_viBranchBackupValue;
    }
    return m_state.vi[reg];
}

void VU1Interpreter::recordViWriteForBranch(uint8_t reg, int32_t oldValue)
{
    if (reg == 0u)
        return;
    m_viBranchBackupValue = oldValue;
    m_viBranchBackupReg = reg;
    m_viBranchBackupValid = true;
}

void VU1Interpreter::applyDest(float *dst, const float *result, uint8_t dest)
{
    if (dest & 0x8u)
        dst[0] = result[0];
    if (dest & 0x4u)
        dst[1] = result[1];
    if (dest & 0x2u)
        dst[2] = result[2];
    if (dest & 0x1u)
        dst[3] = result[3];
}

void VU1Interpreter::applyDestAcc(const float *result, uint8_t dest)
{
    applyDest(m_state.acc, result, dest);
}

void VU1Interpreter::normalizeFmacResult(float *result, uint8_t dest,
                                         uint8_t laneFlags[4])
{
    static const bool exactFmac = std::getenv("PS2X_VU_EXACT_FMAC") != nullptr;
#if defined(PS2X_VU_SIMD)
    if (!exactFmac)
    {
        normalizeVuResults(result, dest, laneFlags);
        return;
    }
#endif
    for (uint32_t component = 0; component < 4u; ++component)
    {
        laneFlags[component] = 0u;
        if ((dest & laneForComponent(component)) == 0u)
            continue;

        if (exactFmac)
        {
            long double exactResult = 0.0L;
            if (calculateFmacExactResult(component, exactResult))
            {
                laneFlags[component] = normalizeFmacExactResult(result[component], exactResult);
                continue;
            }
        }

        uint32_t flags = 0u;
        result[component] = normalizeResult(result[component], flags);
        laneFlags[component] = static_cast<uint8_t>(flags);
    }
}

bool VU1Interpreter::calculateFmacExactResult(uint32_t component,
                                               long double &result) const
{
    static const bool exact = std::getenv("PS2X_VU_EXACT_FMAC") != nullptr;
    if (!exact)
        return false;
    const uint32_t upper = m_currentUpperInstruction;
    const uint8_t op = static_cast<uint8_t>(upper & 0x3Fu);
    const uint8_t special = op >= 0x3Cu
                                ? static_cast<uint8_t>((upper & 3u) | ((upper >> 4) & 0x7Cu))
                                : 0xFFu;
    const uint8_t fs = FS(upper);
    const uint8_t ft = FT(upper);

    const auto operand = [this](float value)
    {
        return static_cast<long double>(normalizeOperand(value));
    };
    const auto vs = [&](uint32_t lane)
    {
        return operand(m_state.vf[fs][lane]);
    };
    const auto vt = [&](uint32_t lane)
    {
        return operand(m_state.vf[ft][lane]);
    };
    const auto acc = [&](uint32_t lane)
    {
        return operand(m_state.acc[lane]);
    };

    const long double q = operand(m_state.q);
    const long double i = operand(m_state.i);

    if (op < 0x3Cu)
    {
        if (op <= 0x03u)
            result = vs(component) + vt(op & 3u);
        else if (op <= 0x07u)
            result = vs(component) - vt(op & 3u);
        else if (op <= 0x0Bu)
            result = acc(component) + vs(component) * vt(op & 3u);
        else if (op <= 0x0Fu)
            result = acc(component) - vs(component) * vt(op & 3u);
        else if (op >= 0x18u && op <= 0x1Bu)
            result = vs(component) * vt(op & 3u);
        else
        {
            switch (op)
            {
            case 0x1Cu:
                result = vs(component) * q;
                break;
            case 0x1Eu:
                result = vs(component) * i;
                break;
            case 0x20u:
                result = vs(component) + q;
                break;
            case 0x21u:
                result = acc(component) + vs(component) * q;
                break;
            case 0x22u:
                result = vs(component) + i;
                break;
            case 0x23u:
                result = acc(component) + vs(component) * i;
                break;
            case 0x24u:
                result = vs(component) - q;
                break;
            case 0x25u:
                result = acc(component) - vs(component) * q;
                break;
            case 0x26u:
                result = vs(component) - i;
                break;
            case 0x27u:
                result = acc(component) - vs(component) * i;
                break;
            case 0x28u:
                result = vs(component) + vt(component);
                break;
            case 0x29u:
                result = acc(component) + vs(component) * vt(component);
                break;
            case 0x2Au:
                result = vs(component) * vt(component);
                break;
            case 0x2Cu:
                result = vs(component) - vt(component);
                break;
            case 0x2Du:
                result = acc(component) - vs(component) * vt(component);
                break;
            case 0x2Eu:
            {
                static constexpr uint8_t left[4] = {1u, 2u, 0u, 3u};
                static constexpr uint8_t right[4] = {2u, 0u, 1u, 3u};
                result = component == 3u
                             ? 0.0L
                             : acc(component) - vs(left[component]) * vt(right[component]);
                break;
            }
            default:
                return false;
            }
        }
        return true;
    }

    if (special <= 0x03u)
        result = vs(component) + vt(special & 3u);
    else if (special <= 0x07u)
        result = vs(component) - vt(special & 3u);
    else if (special <= 0x0Bu)
        result = acc(component) + vs(component) * vt(special & 3u);
    else if (special <= 0x0Fu)
        result = acc(component) - vs(component) * vt(special & 3u);
    else if (special >= 0x18u && special <= 0x1Bu)
        result = vs(component) * vt(special & 3u);
    else
    {
        switch (special)
        {
        case 0x1Cu:
            result = vs(component) * q;
            break;
        case 0x1Eu:
            result = vs(component) * i;
            break;
        case 0x20u:
            result = vs(component) + q;
            break;
        case 0x21u:
            result = acc(component) + vs(component) * q;
            break;
        case 0x22u:
            result = vs(component) + i;
            break;
        case 0x23u:
            result = acc(component) + vs(component) * i;
            break;
        case 0x24u:
            result = vs(component) - q;
            break;
        case 0x25u:
            result = acc(component) - vs(component) * q;
            break;
        case 0x26u:
            result = vs(component) - i;
            break;
        case 0x27u:
            result = acc(component) - vs(component) * i;
            break;
        case 0x28u:
            result = vs(component) + vt(component);
            break;
        case 0x29u:
            result = acc(component) + vs(component) * vt(component);
            break;
        case 0x2Au:
            result = vs(component) * vt(component);
            break;
        case 0x2Cu:
            result = vs(component) - vt(component);
            break;
        case 0x2Du:
            result = acc(component) - vs(component) * vt(component);
            break;
        case 0x2Eu:
        {
            static constexpr uint8_t left[4] = {1u, 2u, 0u, 3u};
            static constexpr uint8_t right[4] = {2u, 0u, 1u, 3u};
            result = component == 3u
                         ? 0.0L
                         : vs(left[component]) * vt(right[component]);
            break;
        }
        default:
            return false;
        }
    }
    return true;
}

uint8_t VU1Interpreter::normalizeFmacExactResult(float &value,
                                                  long double exactResult) const
{
    const bool negative = std::signbit(exactResult);
    const long double magnitude = std::fabs(exactResult);
    const long double maximum = static_cast<long double>(std::numeric_limits<float>::max());
    const long double minimum = static_cast<long double>(std::numeric_limits<float>::min());
    uint8_t flags = negative ? 0x2u : 0u;

    uint32_t bits = negative ? 0x80000000u : 0u;
    if (magnitude == 0.0L)
    {
        flags |= 0x1u;
        std::memcpy(&value, &bits, sizeof(value));
    }
    else if (magnitude > maximum)
    {
        flags |= 0x8u;
        bits |= 0x7F7FFFFFu;
        std::memcpy(&value, &bits, sizeof(value));
    }
    else if (magnitude < minimum)
    {
        flags |= 0x5u;
        std::memcpy(&value, &bits, sizeof(value));
    }

    return flags;
}

uint32_t VU1Interpreter::calculateFmacProductSticky(uint8_t dest) const
{
    uint32_t extraSticky = 0u;
    const uint32_t upper = m_currentUpperInstruction;
    const uint8_t op = static_cast<uint8_t>(upper & 0x3Fu);
    const uint8_t special = op >= 0x3Cu ? static_cast<uint8_t>((upper & 3u) | ((upper >> 4) & 0x7Cu)) : 0xFFu;
    const bool productSum =
        (op >= 0x08u && op <= 0x0Fu) ||
        op == 0x21u || op == 0x23u || op == 0x25u || op == 0x27u ||
        op == 0x29u || op == 0x2Du || op == 0x2Eu ||
        (special >= 0x08u && special <= 0x0Fu) ||
        special == 0x21u || special == 0x23u || special == 0x25u ||
        special == 0x27u || special == 0x29u || special == 0x2Du;
    if (!productSum)
        return 0u;

    const bool broadcastComponent = (op >= 0x08u && op <= 0x0Fu) || (special >= 0x08u && special <= 0x0Fu);
    const bool broadcastQ = op == 0x21u || op == 0x25u || special == 0x21u || special == 0x25u;
    const bool broadcastI = op == 0x23u || op == 0x27u || special == 0x23u || special == 0x27u;
    const bool broadcastRight = broadcastComponent || broadcastQ || broadcastI;
    const uint8_t fs = FS(upper);
    const uint8_t ft = FT(upper);
    float scalarRight = 0.0f;
    if (broadcastComponent)
        scalarRight = normalizeOperand(m_state.vf[ft][(op >= 0x08u && op <= 0x0Fu ? op : special) & 3u]);
    else if (broadcastQ)
        scalarRight = normalizeOperand(m_state.q);
    else if (broadcastI)
        scalarRight = normalizeOperand(m_state.i);
    for (uint32_t component = 0; component < 4u; ++component)
    {
        if ((dest & laneForComponent(component)) == 0u)
            continue;
        static constexpr uint8_t crossLeft[4] = {1u, 2u, 0u, 3u};
        static constexpr uint8_t crossRight[4] = {2u, 0u, 1u, 3u};
        const uint8_t leftComponent = op == 0x2Eu ? crossLeft[component] : static_cast<uint8_t>(component);
        const float left = normalizeOperand(m_state.vf[fs][leftComponent]);
        const float right = broadcastRight ? scalarRight
            : normalizeOperand(m_state.vf[ft][op == 0x2Eu ? crossRight[component] : component]);

        float product = left * right;
        // A normal float result away from the denormal/overflow boundaries
        // cannot gain Z/U/O from the exact product. Its sign is sufficient;
        // keep the exact path for boundary values, zero, infinity and NaN.
        uint32_t productBits = 0u;
        std::memcpy(&productBits, &product, sizeof(productBits));
        const uint32_t exponent = (productBits >> 23u) & 0xFFu;
        if (exponent > 1u && exponent < 254u)
        {
            extraSticky |= (productBits >> 31u) * 0x2u;
            continue;
        }
        const long double exactProduct = static_cast<long double>(left) * static_cast<long double>(right);
        const uint8_t productFlags = normalizeFmacExactResult(product, exactProduct);
        // Product-sum instructions report Z/S/U/O from the add/subtract result
        // as current flags, while every product condition accumulates into the
        // corresponding sticky flag.
        extraSticky |= productFlags & 0xFu;
    }
    return extraSticky;
}

void VU1Interpreter::updateFmacFlags(const uint8_t laneFlags[4], uint8_t dest,
                                     uint32_t extraSticky)
{
    if (dest == 0u)
        return;

    uint32_t mac = 0u;
    uint32_t status = 0u;
    for (uint32_t component = 0; component < 4u; ++component)
    {
        const uint8_t lane = laneForComponent(component);
        if ((dest & lane) == 0u)
            continue;

        const uint32_t flags = laneFlags[component];
        if ((flags & 0x1u) != 0u)
            mac |= lane;
        if ((flags & 0x2u) != 0u)
            mac |= static_cast<uint32_t>(lane) << 4;
        if ((flags & 0x4u) != 0u)
            mac |= static_cast<uint32_t>(lane) << 8;
        if ((flags & 0x8u) != 0u)
            mac |= static_cast<uint32_t>(lane) << 12;
        status |= flags;
    }

    const uint32_t freeSlots = ~m_flagPending & static_cast<uint32_t>((uint64_t{1} << m_flagPipeline.size()) - 1u);
    FlagPipelineEntry *entry = freeSlots != 0u ? &m_flagPipeline[std::countr_zero(freeSlots)] : nullptr;
    if (!entry)
    {
        reportReservedInstruction(true, 0xFFFFFFFFu);
        return;
    }

    *entry = {};
    entry->valid = true;
    m_flagPending |= 1u << uint32_t(entry - m_flagPipeline.data());
    entry->issueCycle = m_cycle;
    entry->readyCycle = m_cycle + kFmacLatency;
    m_nextCommitCycle = std::min(m_nextCommitCycle, entry->readyCycle);
    entry->mac = mac;
    entry->status = status;
    entry->extraSticky = extraSticky;
    entry->writesMac = true;
    entry->writesStatus = true;
}

void VU1Interpreter::applyFmacDest(float *dst, float *result, uint8_t dest)
{
#if defined(PS2X_VU_SIMD)
    if (m_fmacFlagsDead)
    {
        normalizeVuValues(result, dest);
        applyDest(dst, result, dest);
        return;
    }
#endif
    uint8_t laneFlags[4]{};
    normalizeFmacResult(result, dest, laneFlags);
    updateFmacFlags(laneFlags, dest, g_vuStatusUnobserved[m_unit == Unit::VU1] ? 0u : calculateFmacProductSticky(dest));
    applyDest(dst, result, dest);
}

void VU1Interpreter::applyFmacDestAcc(float *result, uint8_t dest)
{
#if defined(PS2X_VU_SIMD)
    if (m_fmacFlagsDead)
    {
        normalizeVuValues(result, dest);
        applyDestAcc(result, dest);
        return;
    }
#endif
    uint8_t laneFlags[4]{};
    normalizeFmacResult(result, dest, laneFlags);
    updateFmacFlags(laneFlags, dest, g_vuStatusUnobserved[m_unit == Unit::VU1] ? 0u : calculateFmacProductSticky(dest));
    applyDestAcc(result, dest);
}

// Flags of an FMAC result computed with flush-to-zero, from the operands of its last stage. They are the
// flags the reference engine derives from the unflushed float result: Z for a zero exponent, U when that
// result was a denormal (lost here, hence the exact value), S its sign; O never happens when rounding
// toward zero. The exact sum or product of two floats fits a double wherever the answer depends on it.
void VU1Interpreter::fzLaneFlags(const float *x, const float *y, uint8_t kind, uint8_t dest, uint8_t laneFlags[4], bool fzActive)
{
#if defined(PS2X_VU_SIMD)
    if (fzActive)
    {
        // With the FPU in flush-to-zero and rounding toward zero (inside a fast run), a result whose
        // exponent is not zero has no Z or U: only the sign is left to report. Zero results take the
        // exact path below.
        const float32x4_t a = vld1q_f32(x), b = vld1q_f32(y);
        const uint32x4_t bits = vreinterpretq_u32_f32(kind == FmacAdd ? vaddq_f32(a, b) : (kind == FmacSub ? vsubq_f32(a, b) : vmulq_f32(a, b)));
        const uint32_t active[4] = {dest & 8u ? ~0u : 0u, dest & 4u ? ~0u : 0u, dest & 2u ? ~0u : 0u, dest & 1u ? ~0u : 0u};
        const uint32x4_t mask = vld1q_u32(active);
        const uint32x4_t zeroExponent = vandq_u32(vceqq_u32(vandq_u32(bits, vdupq_n_u32(0x7F800000u)), vdupq_n_u32(0u)), mask);
        if (vmaxvq_u32(zeroExponent) == 0u)
        {
            uint32_t signs[4];
            vst1q_u32(signs, vandq_u32(vshrq_n_u32(bits, 30), vandq_u32(mask, vdupq_n_u32(2u))));
            for (uint32_t component = 0; component < 4u; ++component)
                laneFlags[component] = static_cast<uint8_t>(signs[component]);
            return;
        }
    }
#else
    (void)fzActive;
#endif
    const auto operand = [](float value)
    {
        uint32_t bits;
        std::memcpy(&bits, &value, sizeof(bits));
        if ((bits & 0x7F800000u) == 0u)
            bits &= 0x80000000u;
        std::memcpy(&value, &bits, sizeof(value));
        return static_cast<double>(value);
    };
    for (uint32_t component = 0; component < 4u; ++component)
    {
        laneFlags[component] = 0u;
        if ((dest & laneForComponent(component)) == 0u)
            continue;
        const double left = operand(x[component]), right = operand(y[component]);
        if (kind == FmacMul && (left == 0.0 || right == 0.0))
        {
            // A zero operand: plain signed zero, nothing underflowed.
            laneFlags[component] = static_cast<uint8_t>(0x1u | (std::signbit(left) != std::signbit(right) ? 0x2u : 0u));
            continue;
        }
        const double exact = kind == FmacAdd ? left + right : (kind == FmacSub ? left - right : left * right);
        const double magnitude = std::fabs(exact);
        uint32_t flags = std::signbit(exact) ? 0x2u : 0u;
        if (magnitude < 0x1p-126)
            flags |= magnitude >= 0x1p-149 ? 0x5u : 0x1u;
        laneFlags[component] = static_cast<uint8_t>(flags);
    }
}

// Flags of an FMAC op for the cycle-by-cycle flag pipeline (images that read the status register, VU0).
void VU1Interpreter::queueFzFlags(const float *x, const float *y, uint8_t kind, uint8_t dest)
{
    uint8_t laneFlags[4]{};
    fzLaneFlags(x, y, kind, dest, laneFlags);
    updateFmacFlags(laneFlags, dest, g_vuStatusUnobserved[m_unit == Unit::VU1] ? 0u : calculateFmacProductSticky(dest));
}

void VU1Interpreter::resolveLazyClipSlow()
{
    if (m_lazyClipCount - m_lazyClipApplied > m_lazyClip.size())
        m_lazyClipApplied = m_lazyClipCount - static_cast<uint32_t>(m_lazyClip.size());
    uint32_t end = m_lazyClipCount;
    while (end != m_lazyClipApplied && m_lazyClip[(end - 1u) & 7u].readyCycle > m_cycle)
        --end;
    if (end != m_lazyClipApplied)
        m_state.clip = m_lazyClip[(end - 1u) & 7u].clip;
    m_lazyClipApplied = end;
}

void VU1Interpreter::resolveLazyFlagsSlow()
{
    if (m_lazyCount - m_lazyApplied > m_lazy.size())
        m_lazyApplied = m_lazyCount - static_cast<uint32_t>(m_lazy.size());
    uint32_t end = m_lazyCount;
    while (end != m_lazyApplied && m_lazy[(end - 1u) & 7u].readyCycle > m_cycle)
        --end;
    // The newest record that is out of the pipeline gives MAC and the current status flags (the sticky
    // ones are not kept in this mode: nothing in the image reads the status register).
    bool macDone = false;
    for (uint32_t index = end; index != m_lazyApplied; --index)
    {
        const LazyFlags &record = m_lazy[(index - 1u) & 7u];
        if (macDone && record.noStatus)
            continue;
        uint8_t laneFlags[4]{};
        fzLaneFlags(record.x, record.y, record.kind, record.dest, laneFlags, m_fzActive);
        uint32_t mac = 0u, status = 0u;
        for (uint32_t component = 0; component < 4u; ++component)
        {
            const uint32_t lane = laneForComponent(component);
            if ((record.dest & lane) == 0u)
                continue;
            const uint32_t flags = laneFlags[component];
            mac |= ((flags & 1u) ? lane : 0u) | ((flags & 2u) ? lane << 4 : 0u) | ((flags & 4u) ? lane << 8 : 0u) | ((flags & 8u) ? lane << 12 : 0u);
            status |= flags;
        }
        if (!macDone)
        {
            m_state.mac = mac;
            macDone = true;
        }
        if (!record.noStatus)
        {
            const uint32_t current = status & 0xFu;
            m_state.status = (m_state.status & 0xFF0u) | current | (current << 6);
            break;
        }
    }
    m_lazyApplied = end;
}

// Hands the records still inside the pipeline to the cycle-by-cycle flag pipeline (an engine or an image
// that needs exact status flags is about to run).
void VU1Interpreter::drainLazyFlags()
{
    resolveLazyClip();
    for (; m_lazyClipApplied != m_lazyClipCount; ++m_lazyClipApplied)
    {
        const LazyClip record = m_lazyClip[m_lazyClipApplied & 7u];
        const uint32_t freeSlots = ~m_flagPending & static_cast<uint32_t>((uint64_t{1} << m_flagPipeline.size()) - 1u);
        if (freeSlots == 0u)
            break;
        FlagPipelineEntry &entry = m_flagPipeline[std::countr_zero(freeSlots)];
        entry = {};
        entry.valid = true;
        m_flagPending |= 1u << uint32_t(&entry - m_flagPipeline.data());
        entry.issueCycle = record.readyCycle - kFmacLatency;
        entry.readyCycle = record.readyCycle;
        m_nextCommitCycle = std::min(m_nextCommitCycle, entry.readyCycle);
        entry.clip = record.clip;
        entry.writesClip = true;
    }
    resolveLazyFlags();
    const uint64_t now = m_cycle;
    for (; m_lazyApplied != m_lazyCount; ++m_lazyApplied)
    {
        const LazyFlags record = m_lazy[m_lazyApplied & 7u];
        uint8_t laneFlags[4]{};
        fzLaneFlags(record.x, record.y, record.kind, record.dest, laneFlags);
        m_cycle = record.readyCycle - kFmacLatency;
        const uint32_t before = m_flagPending;
        updateFmacFlags(laneFlags, record.dest, 0u);
        const uint32_t added = m_flagPending & ~before;
        if (added != 0u && record.noStatus)
            m_flagPipeline[std::countr_zero(added)].writesStatus = false;
    }
    m_cycle = now;
}

void VU1Interpreter::queueFsset(uint16_t immediate)
{
    if (m_lazyApplied != m_lazyCount && m_lazy[(m_lazyCount - 1u) & 7u].readyCycle == m_cycle + kFmacLatency)
        m_lazy[(m_lazyCount - 1u) & 7u].noStatus = true;
    for (FlagPipelineEntry &entry : m_flagPipeline)
    {
        if (entry.valid && entry.issueCycle == m_cycle)
            entry.writesStatus = false;
    }

    const uint32_t freeSlots = ~m_flagPending & static_cast<uint32_t>((uint64_t{1} << m_flagPipeline.size()) - 1u);
    if (freeSlots != 0u)
    {
        FlagPipelineEntry &entry = m_flagPipeline[std::countr_zero(freeSlots)];
        entry = {};
        entry.valid = true;
        m_flagPending |= 1u << uint32_t(&entry - m_flagPipeline.data());
        entry.issueCycle = m_cycle;
        entry.readyCycle = m_cycle + kFmacLatency;
        m_nextCommitCycle = std::min(m_nextCommitCycle, entry.readyCycle);
        entry.status = static_cast<uint32_t>(immediate) & 0xFC0u;
        entry.writesSticky = true;
        return;
    }
    reportReservedInstruction(false, 0xFFFFFFFEu);
}

void VU1Interpreter::queueClip(uint32_t clip)
{
    m_workingClip = ((m_workingClip << 6) | (clip & 0x3Fu)) & 0xFFFFFFu;
    if (m_lazyFlags)
    {
        m_lazyClip[m_lazyClipCount++ & 7u] = {m_cycle + kFmacLatency, m_workingClip};
        return;
    }
    const uint32_t freeSlots = ~m_flagPending & static_cast<uint32_t>((uint64_t{1} << m_flagPipeline.size()) - 1u);
    if (freeSlots != 0u)
    {
        FlagPipelineEntry &entry = m_flagPipeline[std::countr_zero(freeSlots)];
        entry = {};
        entry.valid = true;
        m_flagPending |= 1u << uint32_t(&entry - m_flagPipeline.data());
        entry.issueCycle = m_cycle;
        entry.readyCycle = m_cycle + kFmacLatency;
        m_nextCommitCycle = std::min(m_nextCommitCycle, entry.readyCycle);
        entry.clip = m_workingClip;
        entry.writesClip = true;
        return;
    }
    reportReservedInstruction(true, 0xFFFFFFFDu);
}

void VU1Interpreter::queueFcset(uint32_t clip)
{
    m_workingClip = clip & 0xFFFFFFu;
    if (m_lazyFlags)
    {
        // A CLIP in the same pair is overridden: this record is newer and leaves the pipeline with it.
        m_lazyClip[m_lazyClipCount++ & 7u] = {m_cycle + kFmacLatency, m_workingClip};
        return;
    }
    for (FlagPipelineEntry &entry : m_flagPipeline)
    {
        if (entry.valid && entry.issueCycle == m_cycle)
            entry.writesClip = false;
    }
    const uint32_t freeSlots = ~m_flagPending & static_cast<uint32_t>((uint64_t{1} << m_flagPipeline.size()) - 1u);
    if (freeSlots != 0u)
    {
        FlagPipelineEntry &entry = m_flagPipeline[std::countr_zero(freeSlots)];
        entry = {};
        entry.valid = true;
        m_flagPending |= 1u << uint32_t(&entry - m_flagPipeline.data());
        entry.issueCycle = m_cycle;
        entry.readyCycle = m_cycle + kFmacLatency;
        m_nextCommitCycle = std::min(m_nextCommitCycle, entry.readyCycle);
        entry.clip = m_workingClip;
        entry.writesClip = true;
        return;
    }
    reportReservedInstruction(false, 0xFFFFFFFAu);
}

void VU1Interpreter::queueQ(float value, uint32_t latency, uint32_t statusDi)
{
    uint32_t ignoredFlags = 0u;
    value = normalizeResult(value, ignoredFlags);
    m_fdiv.valid = true;
    m_fdiv.readyCycle = m_cycle + latency;
    m_nextCommitCycle = std::min(m_nextCommitCycle, m_fdiv.readyCycle);
    m_fdiv.value = value;
    m_fdiv.statusDi = statusDi & 0x30u;
}

void VU1Interpreter::queueP(float value, uint32_t latency)
{
    uint32_t ignoredFlags = 0u;
    value = normalizeResult(value, ignoredFlags);
    for (ScalarPipelineEntry &entry : m_efu)
    {
        if (!entry.valid)
        {
            entry.valid = true;
            entry.readyCycle = m_cycle + latency;
            m_nextCommitCycle = std::min(m_nextCommitCycle, entry.readyCycle);
            entry.value = value;
            // EFU throughput is one cycle shorter than result visibility.
            m_efuResourceReady = m_cycle + (latency > 0u ? latency - 1u : 0u);
            return;
        }
    }
    reportReservedInstruction(false, 0xFFFFFFF9u);
}

void VU1Interpreter::queueStore(uint32_t address, const uint32_t words[4], uint8_t laneMask)
{
    const uint32_t freeSlots = ~m_storePending & static_cast<uint32_t>((uint64_t{1} << m_storePipeline.size()) - 1u);
    if (freeSlots != 0u)
    {
        PendingStore &store = m_storePipeline[std::countr_zero(freeSlots)];
        store.valid = true;
        m_storePending |= 1u << uint32_t(&store - m_storePipeline.data());
        store.readyCycle = m_cycle + 1u;
        m_nextCommitCycle = std::min(m_nextCommitCycle, store.readyCycle);
        store.address = address;
        store.laneMask = laneMask;
        std::copy(words, words + 4, store.words.begin());
        return;
    }
    reportReservedInstruction(false, 0xFFFFFFFCu);
}

void VU1Interpreter::queueVfWrite(uint8_t reg, uint8_t laneMask,
                                  const float value[4], uint32_t latency)
{
    if (reg == 0u || laneMask == 0u)
        return;
    const uint32_t freeSlots = ~m_vfPending & static_cast<uint32_t>((uint64_t{1} << m_vfWritePipeline.size()) - 1u);
    if (freeSlots != 0u)
    {
        PendingVfWrite &write = m_vfWritePipeline[std::countr_zero(freeSlots)];
        write = {};
        write.valid = true;
        m_vfPending |= 1u << uint32_t(&write - m_vfWritePipeline.data());
        write.readyCycle = m_cycle + latency;
        m_nextCommitCycle = std::min(m_nextCommitCycle, write.readyCycle);
        write.sequence = ++m_nextWriteSequence;
        write.reg = reg;
        write.laneMask = laneMask;
        std::copy(value, value + 4, write.value.begin());
        for (uint32_t component = 0; component < 4u; ++component)
        {
            if ((laneMask & laneForComponent(component)) != 0u)
                m_vfLatestWrite[reg][component] = write.sequence;
        }
        return;
    }
    reportReservedInstruction(false, 0xFFFFFFF7u);
}

void VU1Interpreter::queueViWrite(uint8_t reg, int32_t value, uint32_t latency)
{
    if (reg == 0u)
        return;
    const uint32_t freeSlots = ~m_viPending & static_cast<uint32_t>((uint64_t{1} << m_viWritePipeline.size()) - 1u);
    if (freeSlots != 0u)
    {
        PendingViWrite &write = m_viWritePipeline[std::countr_zero(freeSlots)];
        write = {};
        write.valid = true;
        m_viPending |= 1u << uint32_t(&write - m_viWritePipeline.data());
        write.readyCycle = m_cycle + latency;
        m_nextCommitCycle = std::min(m_nextCommitCycle, write.readyCycle);
        write.sequence = ++m_nextWriteSequence;
        write.reg = reg;
        write.value = value;
        m_viLatestWrite[reg] = write.sequence;
        return;
    }
    reportReservedInstruction(false, 0xFFFFFFF6u);
}

void VU1Interpreter::queueAccWrite(uint8_t laneMask, const float value[4], uint32_t latency)
{
    if (laneMask == 0u)
        return;
    const uint32_t freeSlots = ~m_accPending & static_cast<uint32_t>((uint64_t{1} << m_accWritePipeline.size()) - 1u);
    if (freeSlots != 0u)
    {
        PendingAccWrite &write = m_accWritePipeline[std::countr_zero(freeSlots)];
        write = {};
        write.valid = true;
        m_accPending |= 1u << uint32_t(&write - m_accWritePipeline.data());
        write.readyCycle = m_cycle + latency;
        m_nextCommitCycle = std::min(m_nextCommitCycle, write.readyCycle);
        write.sequence = ++m_nextWriteSequence;
        write.laneMask = laneMask;
        std::copy(value, value + 4, write.value.begin());
        for (uint32_t component = 0; component < 4u; ++component)
        {
            if ((laneMask & laneForComponent(component)) != 0u)
                m_accLatestWrite[component] = write.sequence;
        }
        return;
    }
    reportReservedInstruction(true, 0xFFFFFFF5u);
}

void VU1Interpreter::commitReadyPipelines()
{
    if (m_cycle < m_nextCommitCycle)
        return;
    m_nextCommitCycle = std::numeric_limits<uint64_t>::max();
    // Occupancy/validity guards all reads; enqueue overwrites reused entries.
    // Retire entries without clearing payload that is no longer observable.
    // Visit occupied slots in the same order as the previous full scan.
    for (uint32_t pending = m_flagPending; pending != 0u; pending &= pending - 1u)
    {
        const uint32_t slot = std::countr_zero(pending);
        FlagPipelineEntry &entry = m_flagPipeline[slot];
        if (!entry.valid)
            continue;
        if (entry.readyCycle > m_cycle)
        {
            m_nextCommitCycle = std::min(m_nextCommitCycle, entry.readyCycle);
            continue;
        }

        if (entry.writesMac)
            m_state.mac = entry.mac;
        if (entry.writesStatus)
        {
            const uint32_t current = entry.status & 0xFu;
            m_state.status = (m_state.status & 0xFF0u) | current | ((current | entry.extraSticky) << 6);
        }
        if (entry.writesSticky)
        {
            m_state.status = (m_state.status & 0x03Fu) | (entry.status & 0xFC0u);
        }
        if (entry.writesClip)
            m_state.clip = entry.clip;
        entry.valid = false;
        m_flagPending &= ~(1u << slot);
    }

    if (m_fdiv.valid && m_fdiv.readyCycle <= m_cycle)
    {
        m_state.q = m_fdiv.value;
        const uint32_t currentDi = m_fdiv.statusDi & 0x30u;
        m_state.status = (m_state.status & 0xFCFu) | currentDi | (currentDi << 6);
        m_fdiv.valid = false;
    }
    else if (m_fdiv.valid)
        m_nextCommitCycle = std::min(m_nextCommitCycle, m_fdiv.readyCycle);

    for (ScalarPipelineEntry &entry : m_efu)
    {
        if (entry.valid && entry.readyCycle <= m_cycle)
        {
            m_state.p = entry.value;
            entry.valid = false;
        }
        else if (entry.valid)
            m_nextCommitCycle = std::min(m_nextCommitCycle, entry.readyCycle);
    }

    for (uint32_t pending = m_storePending; pending != 0u; pending &= pending - 1u)
    {
        const uint32_t slot = std::countr_zero(pending);
        PendingStore &store = m_storePipeline[slot];
        if (!store.valid)
            continue;
        if (store.readyCycle > m_cycle)
        {
            m_nextCommitCycle = std::min(m_nextCommitCycle, store.readyCycle);
            continue;
        }
        if (m_activeVuData && store.address + 16u <= m_activeVuDataSize)
        {
            uint32_t oldWords[4]{};
            std::memcpy(oldWords, m_activeVuData + store.address, sizeof(oldWords));
            for (uint32_t component = 0; component < 4u; ++component)
            {
                if ((store.laneMask & laneForComponent(component)) != 0u)
                    oldWords[component] = store.words[component];
            }
            std::memcpy(m_activeVuData + store.address, oldWords, sizeof(oldWords));
        }
        store.valid = false;
        m_storePending &= ~(1u << slot);
    }

    for (uint32_t pending = m_vfPending; pending != 0u; pending &= pending - 1u)
    {
        const uint32_t slot = std::countr_zero(pending);
        PendingVfWrite &write = m_vfWritePipeline[slot];
        if (!write.valid)
            continue;
        if (write.readyCycle > m_cycle)
        {
            m_nextCommitCycle = std::min(m_nextCommitCycle, write.readyCycle);
            continue;
        }
        for (uint32_t component = 0; component < 4u; ++component)
        {
            if ((write.laneMask & laneForComponent(component)) != 0u &&
                m_vfLatestWrite[write.reg][component] == write.sequence)
            {
                m_state.vf[write.reg][component] = write.value[component];
            }
        }
        write.valid = false;
        m_vfPending &= ~(1u << slot);
    }

    for (uint32_t pending = m_viPending; pending != 0u; pending &= pending - 1u)
    {
        const uint32_t slot = std::countr_zero(pending);
        PendingViWrite &write = m_viWritePipeline[slot];
        if (!write.valid)
            continue;
        if (write.readyCycle > m_cycle)
        {
            m_nextCommitCycle = std::min(m_nextCommitCycle, write.readyCycle);
            continue;
        }
        if (m_viLatestWrite[write.reg] == write.sequence)
            m_state.vi[write.reg] = static_cast<int16_t>(write.value);
        write.valid = false;
        m_viPending &= ~(1u << slot);
    }

    for (uint32_t pending = m_accPending; pending != 0u; pending &= pending - 1u)
    {
        const uint32_t slot = std::countr_zero(pending);
        PendingAccWrite &write = m_accWritePipeline[slot];
        if (!write.valid)
            continue;
        if (write.readyCycle > m_cycle)
        {
            m_nextCommitCycle = std::min(m_nextCommitCycle, write.readyCycle);
            continue;
        }
        for (uint32_t component = 0; component < 4u; ++component)
        {
            if ((write.laneMask & laneForComponent(component)) != 0u &&
                m_accLatestWrite[component] == write.sequence)
            {
                m_state.acc[component] = write.value[component];
            }
        }
        write.valid = false;
        m_accPending &= ~(1u << slot);
    }
}

void VU1Interpreter::progressXgkick(uint64_t cycles)
{
    if (!m_xgkick.active || !m_activeVuData || m_activeVuDataSize == 0u)
        return;

    m_xgkick.cycleCredit += static_cast<uint32_t>(std::min<uint64_t>(cycles, 0x40000000u));
    while (m_xgkick.active && m_xgkick.cycleCredit >= 2u)
    {
        if (m_xgkick.currentTagEnd > m_xgkick.copiedBytes)
        {
            // Inside the data of a GIFtag (its end was checked against the buffer when the tag was read):
            // every qword the credit pays for is copied at once.
            const uint32_t qwords = std::min(m_xgkick.cycleCredit / 2u, (m_xgkick.currentTagEnd - m_xgkick.copiedBytes) / 16u);
            if (qwords != 0u)
            {
                uint32_t remaining = qwords * 16u;
                uint32_t offset = (m_xgkick.sourceAddress + m_xgkick.copiedBytes) % m_activeVuDataSize;
                while (remaining != 0u)
                {
                    const uint32_t count = std::min(remaining, m_activeVuDataSize - offset);
                    std::memcpy(m_xgkick.packet.data() + m_xgkick.copiedBytes, m_activeVuData + offset, count);
                    m_xgkick.copiedBytes += count;
                    remaining -= count;
                    offset = 0u;
                }
                m_xgkick.cycleCredit -= qwords * 2u;
                if (m_xgkick.copiedBytes >= m_xgkick.currentTagEnd)
                {
                    if (m_xgkick.currentTagEop)
                        finishXgkick();
                    else
                    {
                        m_xgkick.currentTagEnd = 0u;
                        m_xgkick.currentTagEop = false;
                    }
                }
                continue;
            }
        }
        m_xgkick.cycleCredit -= 2u;
        if (m_xgkick.copiedBytes > XgkickPipeline::kBufferSize - 16u)
        {
            reportReservedInstruction(false, 0xFFFFFFFBu);
            m_xgkick.active = false;
            return;
        }

        const uint32_t qwordOffset = m_xgkick.copiedBytes;
        const uint32_t source = (m_xgkick.sourceAddress + m_xgkick.copiedBytes) % m_activeVuDataSize;
        // A qword normally lies wholly inside VU memory. Preserve circular
        // addressing for a transfer crossing its end (also for small buffers).
        uint32_t copied = 0u;
        uint32_t offset = source;
        while (copied < 16u)
        {
            const uint32_t count = std::min(16u - copied, m_activeVuDataSize - offset);
            std::memcpy(m_xgkick.packet.data() + m_xgkick.copiedBytes + copied,
                        m_activeVuData + offset, count);
            copied += count;
            offset = 0u;
        }
        m_xgkick.copiedBytes += 16u;

        if (m_xgkick.currentTagEnd == 0u)
        {
            uint64_t tagLo = 0;
            std::memcpy(&tagLo, m_xgkick.packet.data() + qwordOffset, sizeof(tagLo));
            const uint32_t nloop = static_cast<uint32_t>(tagLo & 0x7FFFu);
            const uint32_t format = static_cast<uint32_t>((tagLo >> 58) & 0x3u);
            uint32_t nreg = static_cast<uint32_t>((tagLo >> 60) & 0xFu);
            if (nreg == 0u)
                nreg = 16u;

            uint64_t tagBytes = 16u;
            if (format == 0u)
                tagBytes += static_cast<uint64_t>(nloop) * nreg * 16u;
            else if (format == 1u)
                tagBytes += ((static_cast<uint64_t>(nloop) * nreg + 1u) & ~1ull) * 8u;
            else if (format == 2u || format == 3u) // IMAGE / IMAGE2
                tagBytes += static_cast<uint64_t>(nloop) * 16u;
            else
            {
                reportReservedInstruction(false, 0xFFFFFFF8u);
                m_xgkick.active = false;
                return;
            }

            if (tagBytes > XgkickPipeline::kBufferSize - qwordOffset)
            {
                reportReservedInstruction(false, 0xFFFFFFFBu);
                m_xgkick.active = false;
                return;
            }
            m_xgkick.currentTagEnd = qwordOffset + static_cast<uint32_t>(tagBytes);
            m_xgkick.currentTagEop = ((tagLo >> 15) & 1u) != 0u;
            if (m_xgkick.currentTagEop)
                m_xgkick.totalBytes = m_xgkick.currentTagEnd;
        }

        if (m_xgkick.copiedBytes >= m_xgkick.currentTagEnd)
        {
            if (m_xgkick.currentTagEop)
                finishXgkick();
            else
            {
                // The next transferred qword is another GIFtag.
                m_xgkick.currentTagEnd = 0u;
                m_xgkick.currentTagEop = false;
            }
        }
    }
}

void VU1Interpreter::finishXgkick()
{
    if (!m_xgkick.active)
        return;

    if (m_xgkickTap)
        m_xgkickTap(m_xgkickTapContext, m_xgkick.packet.data(), m_xgkick.totalBytes);
    if (m_xgkickSink)
    {
        m_xgkickSink(m_xgkickSinkContext, m_xgkick.packet.data(), m_xgkick.totalBytes);
        m_xgkick.active = false;
        return;
    }

    if (m_activeMemory)
    {
        traceGifTimeline("PATH1_XGKICK", m_xgkick.totalBytes, m_cycle,
                         (static_cast<uint64_t>(m_xgkick.issueCycle) << 32u) | m_xgkick.sourceAddress);
        m_activeMemory->submitGifPacket(GifPathId::Path1, m_xgkick.packet.data(), m_xgkick.totalBytes);
        // PATH1 produces geometry rendering commands. Pace background PATH3
        // texture streaming proportionally to geometry throughput.
        if (m_activeMemory->hasPendingGifTransfer())
        {
            m_activeMemory->onPath1Progress(m_xgkick.totalBytes);
        }
    }
    else if (m_activeGs)
        m_activeGs->processGIFPacket(m_xgkick.packet.data(), m_xgkick.totalBytes, 1);
    m_xgkick.active = false;
}

void VU1Interpreter::startXgkick(uint32_t qwordAddress)
{
    if (m_unit != Unit::VU1 || !m_activeVuData || m_activeVuDataSize < 16u)
        return;

    const uint32_t sourceAddress = (qwordAddress * 16u) % m_activeVuDataSize;
    // Every transmitted qword is overwritten by progressXgkick before use.
    // Reset control state without clearing the unused 64 KiB packet capacity.
    m_xgkick.totalBytes = 0u;
    m_xgkick.copiedBytes = 0u;
    m_xgkick.currentTagEnd = 0u;
    m_xgkick.currentTagEop = false;
    m_xgkick.active = true;
    m_xgkick.sourceAddress = sourceAddress;
    m_xgkick.cycleCredit = 1u; // XGKICK's issue cycle counts toward PATH1.
    m_xgkick.issueCycle = m_cycle;
    m_xgkick.syncedCycle = m_cycle;
}

void VU1Interpreter::syncXgkickSlow()
{
    if (m_xgkick.syncedCycle >= m_cycle)
        return;
    const uint64_t cycles = m_cycle - m_xgkick.syncedCycle;
    m_xgkick.syncedCycle = m_cycle;
    progressXgkick(cycles);
}

void VU1Interpreter::advanceOneCycle()
{
    ++m_cycle;
    m_state.cycles = m_cycle;
    // LSU commits become visible at the cycle boundary before PATH1 consumes
    // its next qword from VU memory.
    commitReadyPipelines();
    syncXgkick();
}

void VU1Interpreter::advanceTo(uint64_t targetCycle)
{
    while (m_cycle < targetCycle)
        advanceOneCycle();
}

bool VU1Interpreter::pipelinesPending() const
{
    return m_xgkick.active || pipelinesPendingExceptXgkick();
}

bool VU1Interpreter::pipelinesPendingExceptXgkick() const
{
    if (m_fdiv.valid || m_lazyApplied != m_lazyCount || m_lazyClipApplied != m_lazyClipCount ||
        (m_flagPending | m_storePending | m_vfPending | m_viPending | m_accPending) != 0u)
        return true;
    for (const ScalarPipelineEntry &entry : m_efu)
        if (entry.valid)
            return true;
    return false;
}

void VU1Interpreter::flushPipelines()
{
    syncXgkick();
    resolveLazyFlags();
    resolveLazyClip();
    while (pipelinesPendingExceptXgkick())
    {
        advanceOneCycle();
        resolveLazyFlags();
        resolveLazyClip();
    }
    // Only the PATH1 transfer is left: one qword every two cycles, nothing else to do in between.
    while (m_xgkick.active)
    {
        if (!m_activeVuData || m_activeVuDataSize == 0u)
        {
            advanceOneCycle();
            continue;
        }
        // Up to the end of the current GIFtag's data in one step (one qword when the next one is a tag).
        const uint32_t qwords = m_xgkick.currentTagEnd > m_xgkick.copiedBytes ? std::max(1u, (m_xgkick.currentTagEnd - m_xgkick.copiedBytes) / 16u) : 1u;
        const uint32_t wait = m_xgkick.cycleCredit >= qwords * 2u ? 0u : qwords * 2u - m_xgkick.cycleCredit;
        m_cycle += wait;
        m_xgkick.syncedCycle = m_cycle;
        progressXgkick(wait);
    }
    m_state.cycles = m_cycle;
}

uint64_t VU1Interpreter::calculatePairReadyCycle(const DecodedInstructionPair &decoded) const
{
    uint64_t ready = m_cycle;
    const InstructionUsage *usages[2] = {
        &decoded.upperUsage,
        &decoded.lowerUsage};
    for (const InstructionUsage *usage : usages)
    {
        if (!usage)
            continue;
        for (uint32_t index = 0; index < usage->vfReadCount; ++index)
        {
            const VfAccess &access = usage->vfRead[index];
            for (uint32_t component = 0; component < 4u; ++component)
            {
                if ((access.lanes & laneForComponent(component)) != 0u)
                    ready = std::max(ready, m_vfReady[access.reg][component]);
            }
        }
        // Most pairs read no VI registers. Visit only the dependency bits;
        // VI0 is hardwired zero and has no readiness dependency.
        uint32_t viReads = usage->viRead & 0xFFFEu;
        while (viReads != 0u)
        {
            const uint32_t reg = std::countr_zero(viReads);
            ready = std::max(ready, m_viReady[reg]);
            viReads &= viReads - 1u;
        }
        for (uint32_t component = 0; component < 4u; ++component)
        {
            if ((usage->accRead & laneForComponent(component)) != 0u)
                ready = std::max(ready, m_accReady[component]);
        }
    }

    if (decoded.lowerUsage.pipeline == PipelineFdiv && m_fdiv.valid)
        ready = std::max(ready, m_fdiv.readyCycle);
    if (decoded.lowerUsage.pipeline == PipelineEfu)
        ready = std::max(ready, m_efuResourceReady);
    if (decoded.lowerUsage.waitQ && m_fdiv.valid)
        ready = std::max(ready, m_fdiv.readyCycle);
    if (decoded.lowerUsage.waitP)
    {
        for (const ScalarPipelineEntry &entry : m_efu)
            if (entry.valid)
                ready = std::max(ready, entry.readyCycle);
    }
    if (decoded.lowerUsage.pipeline == PipelineXgkick && m_xgkick.active)
        ready = std::max(ready, m_cycle + 1u);
    return ready;
}

void VU1Interpreter::markPairWrites(const DecodedInstructionPair &decoded)
{
    // Register-hazard latencies are part of the timing the flag pipeline depends on (see stepPair);
    // PS2X_VU_NO_HAZARDS=1 drops them in both engines.
    static const bool accurate = std::getenv("PS2X_VU_NO_HAZARDS") == nullptr;
    const VfAccess lowerWrite = decoded.lowerUsage.vfWrite;
    if (lowerWrite.reg != 0u &&
        decoded.suppressedLowerVf != lowerWrite.reg)
    {
        uint32_t latency = decoded.lowerUsage.vfLatency != 0u
                               ? decoded.lowerUsage.vfLatency
                               : decoded.lowerUsage.latency;
        if (!accurate)
            latency = 0u;
        for (uint32_t component = 0; component < 4u; ++component)
        {
            if ((lowerWrite.lanes & laneForComponent(component)) != 0u)
                m_vfReady[lowerWrite.reg][component] = m_cycle + latency;
        }
    }

    const VfAccess upperWrite = decoded.upperUsage.vfWrite;
    if (upperWrite.reg != 0u)
    {
        uint32_t latency = decoded.upperUsage.vfLatency != 0u
                               ? decoded.upperUsage.vfLatency
                               : decoded.upperUsage.latency;
        if (!accurate)
            latency = 0u;
        for (uint32_t component = 0; component < 4u; ++component)
        {
            if ((upperWrite.lanes & laneForComponent(component)) != 0u)
                m_vfReady[upperWrite.reg][component] = m_cycle + latency;
        }
    }

    uint32_t viWrites = decoded.lowerUsage.viWrite & 0xFFFEu;
    while (viWrites != 0u)
    {
        const uint32_t reg = std::countr_zero(viWrites);
        m_viReady[reg] = m_cycle + (decoded.lowerUsage.viLatency != 0u ? decoded.lowerUsage.viLatency : decoded.lowerUsage.latency);
        viWrites &= viWrites - 1u;
    }
    for (uint32_t component = 0; component < 4u; ++component)
    {
        if ((decoded.upperUsage.accWrite & laneForComponent(component)) != 0u)
            m_accReady[component] = m_cycle + (accurate ? kAccForwardLatency : 0u);
    }
}

VU1Interpreter::InstructionUsage VU1Interpreter::decodeUpperUsage(uint32_t upper) const
{
    InstructionUsage usage;
    usage.pipeline = PipelineFmac;
    usage.latency = kFmacLatency;

    const uint8_t op = static_cast<uint8_t>(upper & 0x3Fu);
    const uint8_t dest = DEST(upper);
    const uint8_t fs = FS(upper);
    const uint8_t ft = FT(upper);
    const uint8_t fd = FD(upper);

    if (op <= 0x2Fu)
    {
        addVfRead(usage, fs, dest);
        addVfWrite(usage, fd, dest);
        if (op <= 0x1Bu)
            addVfRead(usage, ft, laneForComponent(op & 3u));
        else if (op >= 0x28u)
            addVfRead(usage, ft, op == 0x2Eu ? 0xEu : dest);
        if (op == 0x08u || op == 0x09u || op == 0x0Au || op == 0x0Bu ||
            op == 0x0Cu || op == 0x0Du || op == 0x0Eu || op == 0x0Fu ||
            op == 0x21u || op == 0x23u || op == 0x25u || op == 0x27u ||
            op == 0x29u || op == 0x2Du || op == 0x2Eu)
        {
            usage.accRead = dest;
        }
        return usage;
    }

    if (op >= 0x3Cu)
    {
        const uint8_t special = static_cast<uint8_t>((upper & 3u) | ((upper >> 4) & 0x7Cu));
        const bool writesAcc =
            special <= 0x0Fu ||
            (special >= 0x18u && special <= 0x1Cu) ||
            special == 0x1Eu ||
            (special >= 0x20u && special <= 0x2Au) ||
            (special >= 0x2Cu && special <= 0x2Eu);
        if (writesAcc)
        {
            addVfRead(usage, fs, dest);
            if (special <= 0x1Bu)
                addVfRead(usage, ft, laneForComponent(special & 3u));
            else if ((special >= 0x28u && special <= 0x2Eu))
                addVfRead(usage, ft, special == 0x2Eu ? 0xEu : dest);
            usage.accWrite = dest;
            if ((special >= 0x08u && special <= 0x0Fu) ||
                special == 0x21u || special == 0x23u || special == 0x25u ||
                special == 0x27u || special == 0x29u || special == 0x2Du)
            {
                usage.accRead = dest;
            }
        }
        else if (special >= 0x10u && special <= 0x17u)
        {
            addVfRead(usage, fs, dest);
            addVfWrite(usage, ft, dest);
        }
        else if (special == 0x1Du)
        {
            addVfRead(usage, fs, dest);
            addVfWrite(usage, ft, dest);
        }
        else if (special == 0x1Fu)
        {
            addVfRead(usage, fs, 0xEu);
            addVfRead(usage, ft, 0x1u);
            usage.writesClip = true;
        }
        else if (special != 0x2Fu && special != 0x30u)
        {
            usage.reserved = true;
        }
        return usage;
    }

    usage.reserved = true;
    return usage;
}

VU1Interpreter::InstructionUsage VU1Interpreter::decodeLowerUsage(uint32_t lower) const
{
    InstructionUsage usage;
    if (lower == 0u || lower == 0x8000033Cu)
        return usage;

    const uint8_t opHi = static_cast<uint8_t>((lower >> 25) & 0x7Fu);
    const uint8_t vfT = FT(lower);
    const uint8_t vfS = FS(lower);
    const uint8_t viT = VIT(lower);
    const uint8_t viS = VIS(lower);
    const uint8_t viD = VID(lower);
    const uint8_t dest = DEST(lower);
    auto readVi = [&](uint8_t reg)
    {
        if (reg != 0u)
            usage.viRead |= static_cast<uint16_t>(1u << reg);
    };
    auto writeVi = [&](uint8_t reg)
    {
        if (reg != 0u)
            usage.viWrite |= static_cast<uint16_t>(1u << reg);
    };

    switch (opHi)
    {
    case 0x00:
        usage.pipeline = PipelineLsu;
        usage.latency = 4u;
        readVi(viS);
        addVfWrite(usage, vfT, dest);
        return usage;
    case 0x01:
        usage.pipeline = PipelineLsu;
        usage.latency = 1u;
        readVi(viT);
        addVfRead(usage, vfS, dest);
        return usage;
    case 0x04:
        usage.pipeline = PipelineLsu;
        usage.latency = 4u;
        readVi(viS);
        writeVi(viT);
        return usage;
    case 0x05:
        usage.pipeline = PipelineLsu;
        usage.latency = 1u;
        readVi(viS);
        readVi(viT);
        return usage;
    case 0x08:
    case 0x09:
        usage.pipeline = PipelineIalu;
        usage.latency = 1u;
        usage.delaysNextBranchRead = true;
        readVi(viS);
        writeVi(viT);
        return usage;
    case 0x10:
    case 0x12:
    case 0x13:
        usage.pipeline = PipelineIalu;
        usage.latency = 1u;
        usage.readsClip = true;
        writeVi(1u);
        return usage;
    case 0x11:
        usage.pipeline = PipelineFmac;
        usage.latency = kFmacLatency;
        usage.writesClip = true;
        return usage;
    case 0x14:
    case 0x16:
    case 0x17:
        usage.pipeline = PipelineIalu;
        usage.latency = 1u;
        writeVi(viT);
        return usage;
    case 0x15:
        usage.pipeline = PipelineFmac;
        usage.latency = kFmacLatency;
        return usage;
    case 0x18:
    case 0x1A:
    case 0x1B:
        usage.pipeline = PipelineIalu;
        usage.latency = 1u;
        readVi(viS);
        writeVi(viT);
        return usage;
    case 0x1C:
        usage.pipeline = PipelineIalu;
        usage.latency = 1u;
        usage.readsClip = true;
        writeVi(viT);
        return usage;
    case 0x20:
        usage.pipeline = PipelineBranch;
        return usage;
    case 0x21:
        usage.pipeline = PipelineBranch;
        usage.latency = 1u;
        writeVi(viT);
        return usage;
    case 0x24:
        usage.pipeline = PipelineBranch;
        readVi(viS);
        return usage;
    case 0x25:
        usage.pipeline = PipelineBranch;
        usage.latency = 1u;
        readVi(viS);
        writeVi(viT);
        return usage;
    case 0x28:
    case 0x29:
        usage.pipeline = PipelineBranch;
        readVi(viS);
        readVi(viT);
        return usage;
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
        usage.pipeline = PipelineBranch;
        readVi(viS);
        return usage;
    case 0x40:
        break;
    default:
        usage.reserved = true;
        return usage;
    }

    const uint8_t direct = static_cast<uint8_t>(lower & 0x3Fu);
    if (direct == 0x30u || direct == 0x31u || direct == 0x34u || direct == 0x35u)
    {
        usage.pipeline = PipelineIalu;
        usage.latency = 1u;
        usage.delaysNextBranchRead = true;
        readVi(viS);
        readVi(viT);
        writeVi(viD);
        return usage;
    }
    if (direct == 0x32u)
    {
        usage.pipeline = PipelineIalu;
        usage.latency = 1u;
        usage.delaysNextBranchRead = true;
        readVi(viS);
        writeVi(viT);
        return usage;
    }
    if (direct < 0x3Cu)
    {
        usage.reserved = true;
        return usage;
    }

    const uint8_t special = static_cast<uint8_t>((lower & 3u) | ((lower >> 4) & 0x7Cu));
    switch (special)
    {
    case 0x30:
    case 0x31:
        usage.pipeline = PipelineFmac;
        usage.latency = 4u;
        addVfRead(usage, vfS, special == 0x31u ? 0xFu : dest);
        addVfWrite(usage, vfT, dest);
        break;
    case 0x34:
    case 0x36:
        usage.pipeline = PipelineLsu;
        usage.latency = 4u;
        usage.viLatency = 1u;
        usage.delaysNextBranchRead = true;
        readVi(viS);
        writeVi(viS);
        addVfWrite(usage, vfT, dest);
        break;
    case 0x35:
    case 0x37:
        usage.pipeline = PipelineLsu;
        usage.latency = 1u;
        usage.delaysNextBranchRead = true;
        readVi(viT);
        writeVi(viT);
        addVfRead(usage, vfS, dest);
        break;
    case 0x38:
        usage.pipeline = PipelineFdiv;
        usage.latency = 7u;
        addVfRead(usage, vfS, laneForComponent((lower >> 21) & 3u));
        addVfRead(usage, vfT, laneForComponent((lower >> 23) & 3u));
        break;
    case 0x39:
        usage.pipeline = PipelineFdiv;
        usage.latency = 7u;
        addVfRead(usage, vfT, laneForComponent((lower >> 23) & 3u));
        break;
    case 0x3A:
        usage.pipeline = PipelineFdiv;
        usage.latency = 13u;
        addVfRead(usage, vfS, laneForComponent((lower >> 21) & 3u));
        addVfRead(usage, vfT, laneForComponent((lower >> 23) & 3u));
        break;
    case 0x3B:
        usage.pipeline = PipelineFdiv;
        usage.waitQ = true;
        break;
    case 0x3C:
        usage.pipeline = PipelineIalu;
        usage.latency = 1u;
        usage.delaysNextBranchRead = true;
        addVfRead(usage, vfS, laneForComponent((lower >> 21) & 3u));
        writeVi(viT);
        break;
    case 0x3D:
        usage.pipeline = PipelineFmac;
        usage.latency = 4u;
        readVi(viS);
        addVfWrite(usage, vfT, dest);
        break;
    case 0x3E:
        usage.pipeline = PipelineLsu;
        usage.latency = 4u;
        readVi(viS);
        writeVi(viT);
        break;
    case 0x3F:
        usage.pipeline = PipelineLsu;
        usage.latency = 1u;
        readVi(viS);
        readVi(viT);
        break;
    case 0x40:
    case 0x41:
        usage.pipeline = PipelineFmac;
        usage.latency = 4u;
        addVfWrite(usage, vfT, dest);
        break;
    case 0x42:
    case 0x43:
        usage.pipeline = PipelineIalu;
        usage.latency = 1u;
        addVfRead(usage, vfS, laneForComponent((lower >> 21) & 3u));
        break;
    case 0x64:
        if (m_unit == Unit::VU0)
        {
            usage.reserved = true;
            break;
        }
        usage.pipeline = PipelineFmac;
        usage.latency = 4u;
        addVfWrite(usage, vfT, dest);
        break;
    case 0x68:
    case 0x69:
        usage.pipeline = PipelineIalu;
        usage.latency = 1u;
        writeVi(viT);
        break;
    case 0x6C:
        if (m_unit == Unit::VU0)
        {
            usage.reserved = true;
            break;
        }
        usage.pipeline = PipelineXgkick;
        usage.latency = 2u;
        readVi(viS);
        break;
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7A:
    case 0x7C:
    case 0x7D:
        if (m_unit == Unit::VU0)
        {
            usage.reserved = true;
            break;
        }
        usage.pipeline = PipelineEfu;
        switch (special)
        {
        case 0x70:
            usage.latency = 11u;
            break;
        case 0x71:
        case 0x72:
        case 0x77:
            usage.latency = 18u;
            break;
        case 0x73:
            usage.latency = 24u;
            break;
        case 0x74:
        case 0x75:
        case 0x7C:
            usage.latency = 54u;
            break;
        case 0x76:
        case 0x78:
        case 0x7A:
            usage.latency = 12u;
            break;
        case 0x79:
            usage.latency = 29u;
            break;
        case 0x7D:
            usage.latency = 44u;
            break;
        default:
            break;
        }
        if (special >= 0x70u && special <= 0x73u)
            addVfRead(usage, vfS, 0xEu);
        else if (special == 0x74u)
            addVfRead(usage, vfS, 0xCu);
        else if (special == 0x75u)
            addVfRead(usage, vfS, 0xAu);
        else if (special == 0x76u)
            addVfRead(usage, vfS, 0xFu);
        else
            addVfRead(usage, vfS, laneForComponent((lower >> 21) & 3u));
        break;
    case 0x7B:
        if (m_unit == Unit::VU0)
        {
            usage.reserved = true;
            break;
        }
        usage.pipeline = PipelineEfu;
        usage.waitP = true;
        break;
    default:
        usage.reserved = true;
        break;
    }
    return usage;
}

VU1Interpreter::DecodedInstructionPair VU1Interpreter::decodeInstructionPair(const uint8_t *vuCode, uint32_t pc) const
{
    DecodedInstructionPair decoded;
    std::memcpy(&decoded.lower, vuCode + pc, sizeof(decoded.lower));
    std::memcpy(&decoded.upper, vuCode + pc + sizeof(decoded.lower), sizeof(decoded.upper));
    decoded.iBit = (decoded.upper & 0x80000000u) != 0u;
    decoded.eBit = (decoded.upper & 0x40000000u) != 0u;
    decoded.mBit = (decoded.upper & 0x20000000u) != 0u;
    decoded.dBit = (decoded.upper & 0x10000000u) != 0u;
    decoded.tBit = (decoded.upper & 0x08000000u) != 0u;
    decoded.upperUsage = decodeUpperUsage(decoded.upper);
    if (!decoded.iBit)
        decoded.lowerUsage = decodeLowerUsage(decoded.lower);

    const uint8_t upperWriteReg = decoded.upperUsage.vfWrite.reg;
    if (upperWriteReg != 0u && (vfReadLanes(decoded.lowerUsage, upperWriteReg) != 0u || decoded.lowerUsage.vfWrite.reg == upperWriteReg))
    {
        decoded.upperVfShadowReg = upperWriteReg;
        if (decoded.lowerUsage.vfWrite.reg == upperWriteReg)
            decoded.suppressedLowerVf = upperWriteReg;
    }
    return decoded;
}

bool VU1Interpreter::directBlockAllowedSlow(uint32_t pc)
{
    if (pc - m_directLow >= m_directSpan)
        return false;
    const uint64_t index = ++m_directCount;
    if (index == m_directLimit)
        std::fprintf(stderr, "[vu-direct] block execution %llu: pc=0x%04x image=%016llx cycle=%llu\n", static_cast<unsigned long long>(index), pc,
                     static_cast<unsigned long long>(m_analysis ? m_analysis->hash : 0u), static_cast<unsigned long long>(m_cycle));
    return index <= m_directLimit;
}

__attribute__((noinline)) bool VU1Interpreter::waitPairStall(uint32_t bits, uint64_t budgetEnd)
{
    if ((bits & PairXgkick) != 0u)
        syncXgkick();
    for (;;)
    {
        uint64_t readyCycle = m_cycle;
        if ((bits & (PairWaitQ | PairFdiv)) != 0u && m_fdiv.valid)
            readyCycle = std::max(readyCycle, m_fdiv.readyCycle);
        if ((bits & PairWaitP) != 0u)
        {
            for (const ScalarPipelineEntry &entry : m_efu)
                if (entry.valid)
                    readyCycle = std::max(readyCycle, entry.readyCycle);
        }
        if ((bits & PairXgkick) != 0u && m_xgkick.active)
            readyCycle = std::max(readyCycle, m_cycle + 1u);
        if ((bits & PairEfu) != 0u)
            readyCycle = std::max(readyCycle, m_efuResourceReady);
        if (readyCycle <= m_cycle)
            break;
        advanceTo(readyCycle >= budgetEnd ? budgetEnd : readyCycle);
        if (m_cycle >= budgetEnd)
            break;
    }
    return m_cycle < budgetEnd;
}

void VU1Interpreter::setVu0FlagsUnobserved(bool unobserved)
{
    g_vu0FlagsUnobserved = unobserved;
}

bool VU1Interpreter::directBlocksUsable(const uint8_t *vuData, uint32_t dataSize) const
{
    static const bool disabled = std::getenv("PS2X_VU_NO_DIRECT") != nullptr;
    return !disabled && !g_vuHazardsDisabled && m_lazyFlags && vuData == m_activeVuData &&
           dataSize == (m_unit == Unit::VU1 ? 0x4000u : 0x1000u) && m_activeVuDataSize == dataSize;
}

void VU1Interpreter::selectAnalysis(ImageAnalysis *analysis)
{
    m_analysis = analysis;
    analysis->lastUse = ++m_analysisUse;
    m_decodedCodeCache = analysis->decoded.data();
    m_pairBits = analysis->pairBits.data();
    m_fastWrittenVi = analysis->writtenVi.data();
    m_fastHazardReads = analysis->hazardReads.data();
    m_fastHazardWrites = analysis->hazardWrites.data();
    g_vuStatusUnobserved[m_unit == Unit::VU1] = analysis->statusUnobserved;
}

void VU1Interpreter::rebuildDecodedCodeCache(const uint8_t *vuCode, uint32_t codeSize,
                                             const PS2Memory *memory, uint64_t generation)
{
    const uint32_t pairCount = std::min<uint32_t>(codeSize / 8u, kMaxDecodedPairs);
    const uint64_t hash = imageHash(vuCode, codeSize);
    ImageAnalysis *analysis = nullptr, *oldest = nullptr;
    for (const std::unique_ptr<ImageAnalysis> &entry : m_analyses)
    {
        if (entry->built && entry->hash == hash && entry->codeSize == codeSize &&
            entry->knownPairBegin == m_knownPairBegin && entry->knownPairEnd == m_knownPairEnd)
        {
            analysis = entry.get();
            break;
        }
        if (entry.get() != m_analysis && (!oldest || entry->lastUse < oldest->lastUse))
            oldest = entry.get();
    }
    if (analysis)
        selectAnalysis(analysis);
    else
    {
        if (m_analyses.size() < 96u || !oldest)
            oldest = m_analyses.emplace_back(std::make_unique<ImageAnalysis>()).get();
        else
            *oldest = ImageAnalysis{};
        oldest->hash = hash;
        oldest->codeSize = codeSize;
        oldest->knownPairBegin = m_knownPairBegin;
        oldest->knownPairEnd = m_knownPairEnd;
        selectAnalysis(oldest);
        for (uint32_t i = 0; i < pairCount; ++i)
            m_decodedCodeCache[i] = decodeInstructionPair(vuCode, i * 8u);
        analyzeFastPairs(pairCount);
        oldest->built = true;
    }

    m_cachedVuCode = vuCode;
    m_cachedMemory = memory;
    m_cachedCodeSize = codeSize;
    m_cachedCodeGeneration = generation;
    m_decodedCodeCacheValid = true;
}

// Reduces the per-pair hazard masks (PairFacts::hazardReads/hazardWrites) to what can actually
// stall. A read waits only for a register written by one of the three pairs executed before it
// (latency <= 4), so the predecessors found in the code decide which reads need a check at all;
// most pairs end up with none, and the check then costs nothing in the fast and recompiled
// engines. ACC is forwarded after one cycle and never stalls. After an indirect jump the
// predecessors are unknown: stepPair() then checks the next pairs against their full usage
// (waitHazardsOfPair), and the writes around every JR/JALR stay recorded for that.
void VU1Interpreter::pruneFastHazards(uint32_t pairCount)
{
    const uint32_t pcMask = microAddressMask();
    std::vector<std::array<uint16_t, 2>> branchPred(pairCount, {uint16_t(0xFFFFu), uint16_t(0xFFFFu)});
    std::vector<uint16_t> extraPred; // (target, predecessor) pairs beyond two per target
    for (uint32_t p = 0; p < pairCount; ++p)
    {
        const DecodedInstructionPair &d = m_decodedCodeCache[p];
        if (d.iBit)
            continue;
        const uint32_t opHi = (d.lower >> 25) & 0x7Fu;
        if (!(opHi == 0x20u || opHi == 0x21u || opHi == 0x28u || opHi == 0x29u || (opHi >= 0x2Cu && opHi <= 0x2Fu)))
            continue;
        const int16_t imm = IMM11(d.lower);
        const uint32_t target = (((p * 8u + 8u + static_cast<uint32_t>(imm * 8)) & pcMask) / 8u) % pairCount;
        const uint16_t pred = static_cast<uint16_t>(p + 1u < pairCount ? p + 1u : 0u); // the delay slot
        if (p >= m_knownPairBegin && p < m_knownPairEnd && (target < m_knownPairBegin || target >= m_knownPairEnd))
        {
            // Lands in code this analysis cannot see (another microprogram in the same image).
            m_pairBits[p] |= PairIndirect;
            continue;
        }
        if (branchPred[target][0] == 0xFFFFu) branchPred[target][0] = pred;
        else if (branchPred[target][1] == 0xFFFFu) branchPred[target][1] = pred;
        else { extraPred.push_back(static_cast<uint16_t>(target)); extraPred.push_back(pred); }
    }
    auto forEachPred = [&](uint32_t p, auto &&fn)
    {
        if (p > 0u) fn(p - 1u);
        for (uint16_t pred : branchPred[p])
            if (pred != 0xFFFFu) fn(pred);
        for (size_t i = 0; i + 1 < extraPred.size(); i += 2)
            if (extraPred[i] == p) fn(extraPred[i + 1]);
    };

    std::array<uint8_t, 32> checkedVf{};
    uint32_t checkedVi = 0u;
    std::vector<uint32_t> current, following;
    for (uint32_t p = 0; p < pairCount; ++p)
    {
        const uint64_t reads = m_fastHazardReads[p];
        if ((reads & 0xFFFFFFFFFull) == 0u && ((reads >> 40u) & 0xFFFEu) == 0u)
        {
            m_fastHazardReads[p] = 0u;
            continue;
        }
        std::array<uint8_t, 32> lateVf{};
        uint32_t lateVi = 0u;
        current.assign(1, p);
        for (uint32_t distance = 1; distance <= 3u; ++distance)
        {
            following.clear();
            for (uint32_t node : current)
                forEachPred(node, [&](uint32_t pred)
                {
                    if (std::find(following.begin(), following.end(), pred) == following.end())
                        following.push_back(pred);
                });
            for (uint32_t writer : following)
            {
                const uint32_t writes = m_fastHazardWrites[writer];
                for (uint32_t which = 0; which < 2u; ++which)
                {
                    const uint32_t write = (writes >> (12u * which)) & 0xFFFu;
                    if (write != 0u && (write >> 9) > distance)
                        lateVf[(write >> 4) & 0x1Fu] |= static_cast<uint8_t>(write & 0xFu);
                }
                if (m_fastWrittenVi[writer] != 0u && ((writes >> 28u) & 7u) > distance)
                    lateVi |= 1u << m_fastWrittenVi[writer];
            }
            current.swap(following);
        }
        uint64_t pruned = 0u;
        uint32_t slotOut = 0u;
        for (uint32_t slot = 0; slot < 4u; ++slot)
        {
            const uint32_t access = static_cast<uint32_t>(reads >> (9u * slot)) & 0x1FFu;
            const uint32_t reg = access >> 4;
            const uint32_t lanes = access & 0xFu & lateVf[reg];
            if (lanes == 0u)
                continue;
            pruned |= uint64_t((reg << 4) | lanes) << (9u * slotOut++);
            checkedVf[reg] |= static_cast<uint8_t>(lanes);
        }
        const uint32_t viReads = static_cast<uint32_t>(reads >> 40u) & 0xFFFEu & lateVi;
        pruned |= uint64_t(viReads) << 40u;
        checkedVi |= viReads;
        m_fastHazardReads[p] = pruned;
    }

    for (uint32_t p = 0; p < pairCount; ++p)
    {
        bool nearIndirect = false;
        for (uint32_t q = p > 0u ? p - 1u : 0u; q <= p + 1u && q < pairCount; ++q)
            nearIndirect = nearIndirect || (m_pairBits[q] & PairIndirect) != 0u;
        // A pair after an indirect jump is checked against its full usage, which may name any
        // register: keep every write of the pairs that can run just before such a jump lands.
        if (nearIndirect)
        {
            m_fastHazardWrites[p] &= ~(0xFu << 24u);
            continue;
        }
        uint32_t writes = m_fastHazardWrites[p] & ~(0xFu << 24u);
        for (uint32_t which = 0; which < 2u; ++which)
        {
            const uint32_t write = (writes >> (12u * which)) & 0xFFFu;
            if (write != 0u && (checkedVf[(write >> 4) & 0x1Fu] & (write & 0xFu)) == 0u)
                writes &= ~(0xFFFu << (12u * which));
        }
        if (m_fastWrittenVi[p] == 0u || (checkedVi & (1u << m_fastWrittenVi[p])) == 0u)
            writes &= ~(7u << 28u);
        m_fastHazardWrites[p] = writes;
    }
}

// Full hazard check of the pair at pc from its decoded usage (after an indirect jump). Returns
// false when the cycle budget ran out while waiting.
__attribute__((noinline)) bool VU1Interpreter::waitHazardsOfPair(uint32_t pc, uint64_t budgetEnd)
{
    const DecodedInstructionPair &decoded = m_decodedCodeCache[(pc >> 3) % kMaxDecodedPairs];
    uint64_t readyCycle = m_cycle;
    const InstructionUsage *usages[2] = {&decoded.upperUsage, &decoded.lowerUsage};
    for (const InstructionUsage *usage : usages)
    {
        for (uint32_t index = 0; index < usage->vfReadCount; ++index)
        {
            const VfAccess &access = usage->vfRead[index];
            for (uint32_t component = 0; component < 4u; ++component)
                if ((access.lanes & laneForComponent(component)) != 0u)
                    readyCycle = std::max(readyCycle, m_vfReady[access.reg][component]);
        }
        uint32_t viReads = usage->viRead & 0xFFFEu;
        while (viReads != 0u)
        {
            readyCycle = std::max(readyCycle, m_viReady[std::countr_zero(viReads)]);
            viReads &= viReads - 1u;
        }
    }
    if (readyCycle > m_cycle)
        advanceTo(readyCycle >= budgetEnd ? budgetEnd : readyCycle);
    return m_cycle < budgetEnd;
}


// Per-pair facts for runFast(). The flag analysis decides, for every FMAC op,
// whether its MAC/status result can reach a reader:
//   - an entry issued by pair X becomes visible four cycles later and stays
//     visible until a later FMAC entry commits, so a reader R can observe X
//     unless some writer lies at least four pairs before R (stalls only add
//     cycles, never remove them);
//   - at a program end every pending entry is flushed, so X is the final
//     MAC/status value unless a later writer exists on that path;
//   - an indirect jump makes the continuation unknown (treated as a reader).
// Status readers/writers (FSEQ/FSSET/FSAND/FSOR) anywhere in the image keep
// every FMAC op exact, because the sticky bits accumulate over all of them.
// Otherwise the sticky Z/S/U/O status bits are not maintained by dead ops.
void VU1Interpreter::analyzeFastPairs(uint32_t pairCount)
{
    enum : uint8_t { Writer = 1u, Reader = 2u, UnknownExit = 4u, MayEnd = 8u };
    std::array<uint8_t, kMaxDecodedPairs> kind{};
    std::array<uint16_t, kMaxDecodedPairs> branchSuccessor;
    branchSuccessor.fill(0xFFFFu);
    // VU0 flags are visible to the EE through COP2 control registers, so only VU1 may drop them, unless
    // the game is known never to read them there (setVu0FlagsUnobserved()).
    bool statusUsed = vuExactFlagsRequested() || (m_unit != Unit::VU1 && !g_vu0FlagsUnobserved);
    const uint32_t pcMask = microAddressMask();
    auto next = [pairCount](uint32_t p) { return p + 1u < pairCount ? p + 1u : 0u; };

    for (uint32_t p = 0; p < pairCount; ++p)
    {
        const DecodedInstructionPair &d = m_decodedCodeCache[p];
        const PairFacts pairFacts = pairFactsOf(d);
        m_pairBits[p] = pairFacts.bits;
        m_fastHazardReads[p] = pairFacts.hazardReads;
        m_fastHazardWrites[p] = pairFacts.hazardWrites;
        const uint32_t viWrites = d.lowerUsage.viWrite & 0xFFFEu;
        m_fastWrittenVi[p] = viWrites != 0u ? static_cast<uint8_t>(std::countr_zero(viWrites)) : 0u;

        if (upperWritesFmacFlags(d.upper))
            kind[p] |= Writer;
        if (d.eBit)
            kind[next(p)] |= MayEnd;
        if (d.dBit || d.tBit)
        {
            kind[p] |= MayEnd;
            kind[next(p)] |= MayEnd;
        }
        if (d.iBit)
            continue;
        const uint32_t opHi = (d.lower >> 25) & 0x7Fu;
        if (opHi == 0x18u || opHi == 0x1Au || opHi == 0x1Bu)
            kind[p] |= Reader;
        else if (opHi == 0x14u || opHi == 0x16u || opHi == 0x17u) // FSEQ/FSAND/FSOR; FSSET only writes
            statusUsed = true;
        else if (opHi == 0x24u || opHi == 0x25u)
            kind[next(p)] |= UnknownExit;
        else if (opHi == 0x20u || opHi == 0x21u || opHi == 0x28u || opHi == 0x29u || (opHi >= 0x2Cu && opHi <= 0x2Fu))
        {
            const int16_t imm = IMM11(d.lower);
            const uint32_t target = (p * 8u + 8u + static_cast<uint32_t>(imm * 8)) & pcMask;
            // The jump happens after the delay slot, i.e. from the next pair.
            branchSuccessor[next(p)] = static_cast<uint16_t>((target / 8u) % pairCount);
        }
    }
    pruneFastHazards(pairCount);
    g_vuStatusUnobserved[m_unit == Unit::VU1] = !statusUsed;
    m_analysis->statusUnobserved = !statusUsed;
    if (statusUsed)
        return; // every FMAC op stays exact

    // The liveness pass below counts pairs, but the flag pipeline runs on cycles: a stall lets the
    // flags of earlier writers become visible sooner than the pair distance suggests, so a reader
    // after it can see a writer this pass would call dead (Black's triangle clipper did, and
    // dropped near-camera geometry). Every pair that can stall - a register hazard that survived
    // pruneFastHazards(), FDIV/EFU/XGKICK waits, and jumps whose continuation is not known - is
    // therefore treated as observing all flags that reach it. PS2X_VU_EXACT_FLAGS=1 keeps every
    // flag exact (diagnostic).
    for (uint32_t p = 0; p < pairCount; ++p)
        if ((m_pairBits[p] & (PairStall | PairIndirect)) != 0u || m_fastHazardReads[p] != 0u)
            kind[p] |= UnknownExit;

    // observed[p][a]: a flag value reaching pair p can still be read. a == 0:
    // no later writer yet; a in 1..3: a later writer hides it after a more pairs.
    std::array<std::array<bool, 4>, kMaxDecodedPairs> observed{};
    bool changed = true;
    for (uint32_t sweep = 0; changed; ++sweep)
    {
        if (sweep >= 256u)
            return; // did not settle: keep every op exact
        changed = false;
        for (uint32_t p = pairCount; p-- > 0u;)
        {
            const uint8_t k = kind[p];
            const uint32_t successors[2] = {next(p), branchSuccessor[p]};
            for (uint32_t a = 0; a < 4u; ++a)
            {
                if (observed[p][a])
                    continue;
                bool value = (k & (Reader | UnknownExit)) != 0u;
                if (!value && a == 0u && (k & MayEnd) != 0u && (k & Writer) == 0u)
                    value = true;
                if (!value)
                {
                    const uint32_t after = a == 0u ? ((k & Writer) != 0u ? 3u : 0u) : a - 1u;
                    if (a == 0u || after != 0u)
                        for (uint32_t successor : successors)
                            if (successor != 0xFFFFu && observed[successor][after])
                                value = true;
                }
                if (value)
                {
                    observed[p][a] = true;
                    changed = true;
                }
            }
        }
    }
    for (uint32_t p = 0; p < pairCount; ++p)
    {
        if ((kind[p] & Writer) == 0u)
            continue;
        bool live = (kind[p] & (UnknownExit | MayEnd)) != 0u;
        const uint32_t successors[2] = {next(p), branchSuccessor[p]};
        for (uint32_t successor : successors)
            if (successor != 0xFFFFu && observed[successor][0])
                live = true;
        if (!live)
            m_pairBits[p] |= PairFlagsDead;
    }
}

bool VU1Interpreter::ensureDecodedCodeCache(const uint8_t *vuCode, uint32_t codeSize, PS2Memory *memory)
{
    const bool tracked = memory != nullptr &&
                         ((m_unit == Unit::VU1 && vuCode == memory->getVU1Code()) ||
                          (m_unit == Unit::VU0 && vuCode == memory->getVU0Code()));
    if (!tracked && !(memory == nullptr && m_hasExternalCodeKey))
        return false;
    const uint64_t generation = !tracked ? m_externalCodeKey
        : (m_unit == Unit::VU1 ? memory->getVU1CodeGeneration() : memory->getVU0CodeGeneration());
    if (!m_decodedCodeCacheValid || m_cachedVuCode != vuCode || m_cachedMemory != memory ||
        m_cachedCodeSize != codeSize || m_cachedCodeGeneration != generation)
        rebuildDecodedCodeCache(vuCode, codeSize, memory, generation);
    return codeSize / 8u <= kMaxDecodedPairs;
}

VU1Interpreter::PairFacts VU1Interpreter::pairFactsOf(const DecodedInstructionPair &d) const
{
    PairFacts facts;
    facts.lower = d.lower;
    facts.upper = d.upper;
    uint16_t bits = 0u;
    if (d.upperUsage.reserved || d.lowerUsage.reserved) bits |= PairReserved;
    if (d.lowerUsage.waitQ) bits |= PairWaitQ;
    if (d.lowerUsage.pipeline == PipelineFdiv) bits |= PairFdiv;
    if (d.lowerUsage.waitP) bits |= PairWaitP;
    if (d.lowerUsage.pipeline == PipelineXgkick) bits |= PairXgkick;
    if (d.lowerUsage.pipeline == PipelineEfu) bits |= PairEfu;
    if ((bits & (PairWaitQ | PairFdiv | PairWaitP | PairXgkick | PairEfu)) != 0u) bits |= PairStall;
    if (d.lowerUsage.delaysNextBranchRead) bits |= PairDelaysBranch;
    {
        uint32_t slot = 0u;
        const InstructionUsage *usages[2] = {&d.upperUsage, &d.lowerUsage};
        for (uint32_t u = 0; u < 2u; ++u)
        {
            const InstructionUsage &usage = *usages[u];
            for (uint32_t index = 0; index < usage.vfReadCount && slot < 4u; ++index)
            {
                const VfAccess &access = usage.vfRead[index];
                if (access.reg != 0u && access.lanes != 0u)
                    facts.hazardReads |= uint64_t((access.reg << 4) | (access.lanes & 0xFu)) << (9u * slot++);
            }
            facts.hazardReads |= uint64_t(usage.accRead & 0xFu) << 36u;
            facts.hazardReads |= uint64_t(usage.viRead & 0xFFFEu) << 40u;
            const VfAccess write = usage.vfWrite;
            if (write.reg != 0u && write.lanes != 0u && !(u == 1u && d.suppressedLowerVf == write.reg))
            {
                const uint32_t latency = std::min<uint32_t>(7u, usage.vfLatency != 0u ? usage.vfLatency : usage.latency);
                facts.hazardWrites |= ((latency << 9) | (uint32_t(write.reg) << 4) | (write.lanes & 0xFu)) << (12u * u);
            }
            facts.hazardWrites |= uint32_t(usage.accWrite & 0xFu) << 24u;
        }
        facts.hazardWrites |= std::min<uint32_t>(7u, d.lowerUsage.viLatency != 0u ? d.lowerUsage.viLatency : d.lowerUsage.latency) << 28u;
    }
    if (d.iBit) bits |= PairIBit;
    if (d.eBit) bits |= PairEBit;
    if (d.dBit) bits |= PairDBit;
    if (d.tBit) bits |= PairTBit;
    if (d.eBit || d.dBit || d.tBit) bits |= PairEndBits;
    if (d.lowerUsage.pipeline == PipelineBranch) bits |= PairBranch;
    {
        const uint32_t opHi = (d.lower >> 25) & 0x7Fu;
        if (!d.iBit && (opHi == 0x24u || opHi == 0x25u)) bits |= PairIndirect;
    }
    facts.bits = bits;
    const uint32_t viWrites = d.lowerUsage.viWrite & 0xFFFEu;
    facts.writtenVi = viWrites != 0u ? static_cast<uint8_t>(std::countr_zero(viWrites)) : 0u;
    facts.shadowReg = d.upperVfShadowReg;
    return facts;
}

uint64_t VU1Interpreter::imageHash(const uint8_t *code, uint32_t codeSize)
{
    // Four interleaved FNV-1a lanes over 64-bit words: order-sensitive and
    // cheap enough to run on every code generation change.
    uint64_t lanes[4] = {14695981039346656037ull, 0x9E3779B97F4A7C15ull, 0xC2B2AE3D27D4EB4Full, 0x165667B19E3779F9ull};
    uint32_t i = 0;
    for (; i + 32u <= codeSize; i += 32u)
        for (uint32_t lane = 0; lane < 4u; ++lane)
        {
            uint64_t word;
            std::memcpy(&word, code + i + lane * 8u, 8);
            lanes[lane] = (lanes[lane] ^ word) * 1099511628211ull;
        }
    for (; i < codeSize; ++i)
        lanes[0] = (lanes[0] ^ code[i]) * 1099511628211ull;
    uint64_t hash = lanes[0];
    for (uint32_t lane = 1; lane < 4u; ++lane)
        hash = (hash ^ (lanes[lane] + 0x9E3779B97F4A7C15ull + (hash << 6) + (hash >> 2))) * 1099511628211ull;
    return hash;
}

void VU1Interpreter::describeImage(Unit unit, const uint8_t *code, uint32_t codeSize, PairFacts *facts, uint32_t maxPairs,
                                   uint32_t programAddr, uint32_t programSize)
{
    auto vu = std::make_unique<VU1Interpreter>(unit);
    vu->reset();
    if (programSize != 0u)
    {
        vu->m_knownPairBegin = programAddr / 8u;
        vu->m_knownPairEnd = (programAddr + programSize) / 8u;
    }
    vu->rebuildDecodedCodeCache(code, codeSize, nullptr, 0u);
    const uint32_t pairCount = std::min<uint32_t>(std::min<uint32_t>(codeSize / 8u, kMaxDecodedPairs), maxPairs);
    for (uint32_t p = 0; p < pairCount; ++p)
    {
        facts[p] = vu->pairFactsOf(vu->m_decodedCodeCache[p]);
        facts[p].bits = vu->m_pairBits[p];
        facts[p].writtenVi = vu->m_fastWrittenVi[p];
        facts[p].hazardReads = vu->m_fastHazardReads[p];
        facts[p].hazardWrites = vu->m_fastHazardWrites[p];
    }
}

// One instruction pair of the FastVU timing model. Every argument up to
// mayEnd is a per-pair constant: recompiled code passes literals, so the
// instruction decode, the stall test and the end-of-program test fold away.
// mayEnd must be true unless the caller knows that neither this pair nor the
// previously executed one can end the program.
namespace
{
    // Whether a pair can leave something in VF0 or VI0 (the instruction bodies write their destination
    // register whatever its number; stepPair() then restores the constants). False only when the
    // destination fields of both instructions are known and non-zero.
    // The upper instruction's destination is (or may be) VF0.
    constexpr bool vuUpperMayWriteVf0(uint32_t upper)
    {
        const uint32_t upperOp = upper & 0x3Fu;
        if (upperOp < 0x3Cu)
            return ((upper >> 6) & 0x1Fu) == 0u;
        const uint32_t special = (upper & 0x3u) | ((upper >> 4) & 0x7Cu);
        if (((special >= 0x10u && special <= 0x17u) || special == 0x1Du) && ((upper >> 16) & 0x1Fu) == 0u)
            return true;
        return special > 0x30u;
    }

    constexpr bool vuPairMayWriteZeroRegister(uint32_t lower, uint32_t upper, bool iBit)
    {
        if (vuUpperMayWriteVf0(upper))
            return true;
        if (iBit || lower == 0x8000033Cu)
            return false;
        const uint32_t it = (lower >> 16) & 0x1Fu, is = (lower >> 11) & 0x1Fu, id = (lower >> 6) & 0x1Fu;
        switch (lower >> 25)
        {
        case 0x01: case 0x05: case 0x15: case 0x20: case 0x24: // SQ, ISW, FSSET, B, JR
        case 0x28: case 0x29: case 0x2C: case 0x2D: case 0x2E: case 0x2F: // conditional branches
        case 0x10: case 0x11: case 0x12: case 0x13: // FCEQ/FCSET/FCAND/FCOR (VI1 or nothing)
            return false;
        case 0x00: case 0x04: case 0x08: case 0x09: case 0x14: case 0x16: case 0x17: // LQ, ILW, IADDIU, ISUBIU, FSEQ, FSAND, FSOR
        case 0x18: case 0x1A: case 0x1B: case 0x1C: case 0x21: case 0x25: // FMEQ, FMAND, FMOR, FCGET, BAL, JALR
            return it == 0u;
        case 0x40:
            return it == 0u || is == 0u || id == 0u;
        default:
            return true;
        }
    }
}

inline __attribute__((always_inline)) VU1Interpreter::StepResult VU1Interpreter::stepPair(
    uint32_t pc, uint32_t lower, uint32_t upper, uint32_t bits, uint8_t writtenVi, uint8_t shadowReg,
    uint64_t hazardReads, uint32_t hazardWrites,
    bool mayEnd, uint32_t codeSize, uint8_t *vuData, uint32_t dataSize,
    GS &gs, PS2Memory *memory, uint64_t budgetEnd)
{
    if ((bits & PairReserved) != 0u)
    {
        const bool upperReserved = decodeUpperUsage(upper).reserved;
        reportReservedInstruction(upperReserved, upperReserved ? upper : lower);
        return StepResult::Stop;
    }

    // Register hazards: a pair waits until the registers it reads have left the pipeline of the
    // instruction that writes them (no bypass on the VU). Values are written at once here, so the
    // wait only moves the cycle counter, but the flag pipeline runs on it: without these stalls an
    // FMAND a few pairs after dependent FMAC ops reads the flags of the wrong instruction (Black's
    // triangle clipper dropped near-camera geometry). PS2X_VU_NO_HAZARDS=1 disables (diagnostic).
    const bool hazardsDisabled = g_vuHazardsDisabled;
    if (__builtin_expect(m_hazardUnknown != 0u, 0) && !hazardsDisabled)
    {
        if (!waitHazardsOfPair(pc, budgetEnd))
            return StepResult::Stop;
        --m_hazardUnknown;
    }
    else if (hazardReads != 0u && !hazardsDisabled)
    {
        uint64_t readyCycle = m_cycle;
        for (uint32_t slot = 0; slot < 4u; ++slot)
        {
            const uint32_t access = static_cast<uint32_t>(hazardReads >> (9u * slot)) & 0x1FFu;
            if (access == 0u)
                continue;
            const uint32_t reg = access >> 4;
            for (uint32_t component = 0; component < 4u; ++component)
                if ((access & laneForComponent(component)) != 0u)
                    readyCycle = std::max(readyCycle, m_vfReady[reg][component]);
        }
        uint32_t viReads = static_cast<uint32_t>(hazardReads >> 40u) & 0xFFFEu;
        while (viReads != 0u)
        {
            readyCycle = std::max(readyCycle, m_viReady[std::countr_zero(viReads)]);
            viReads &= viReads - 1u;
        }
        if (readyCycle > m_cycle)
        {
            advanceTo(readyCycle >= budgetEnd ? budgetEnd : readyCycle);
            if (m_cycle >= budgetEnd)
                return StepResult::Stop;
        }
    }

    if ((bits & PairStall) != 0u)
    {
        if ((bits & PairXgkick) != 0u)
            syncXgkick();
        // Re-evaluated after each wait, like the reference engine: an XGKICK waits for the whole
        // previous transfer, not for one cycle.
        for (;;)
        {
            uint64_t readyCycle = m_cycle;
            if ((bits & (PairWaitQ | PairFdiv)) != 0u && m_fdiv.valid)
                readyCycle = std::max(readyCycle, m_fdiv.readyCycle);
            if ((bits & PairWaitP) != 0u)
            {
                for (const ScalarPipelineEntry &entry : m_efu)
                    if (entry.valid)
                        readyCycle = std::max(readyCycle, entry.readyCycle);
            }
            if ((bits & PairXgkick) != 0u && m_xgkick.active)
                readyCycle = std::max(readyCycle, m_cycle + 1u);
            if ((bits & PairEfu) != 0u && !hazardsDisabled)
                readyCycle = std::max(readyCycle, m_efuResourceReady);
            if (readyCycle <= m_cycle)
                break;
            advanceTo(readyCycle >= budgetEnd ? budgetEnd : readyCycle);
            if (m_cycle >= budgetEnd || hazardsDisabled)
                break;
        }
        if (m_cycle >= budgetEnd)
            return StepResult::Stop;
    }

    const bool flagsDead = (bits & PairFlagsDead) != 0u;
    const int32_t oldVi = writtenVi != 0u ? m_state.vi[writtenVi] : 0;
    if ((bits & PairIBit) != 0u)
    {
        execUpperInline(upper, flagsDead, kFlushToZero);
        float immediate = 0.0f;
        std::memcpy(&immediate, &lower, sizeof(immediate));
        m_state.i = vuNormalizeOperand(immediate);
    }
    else if (shadowReg != 0u)
    {
        float oldVf[4];
        float upperVf[4];
        std::memcpy(oldVf, m_state.vf[shadowReg], sizeof(oldVf));
        execUpperInline(upper, flagsDead, kFlushToZero);
        std::memcpy(upperVf, m_state.vf[shadowReg], sizeof(upperVf));
        std::memcpy(m_state.vf[shadowReg], oldVf, sizeof(oldVf));
        execLowerInline(lower, vuData, dataSize, gs, memory, upper, true);
        std::memcpy(m_state.vf[shadowReg], upperVf, sizeof(upperVf));
    }
    else
    {
        execUpperInline(upper, flagsDead, kFlushToZero);
        // VF0 is a constant: an upper instruction aimed at it must not show through to the lower one.
        if (vuUpperMayWriteVf0(upper))
        {
            m_state.vf[0][0] = 0.0f;
            m_state.vf[0][1] = 0.0f;
            m_state.vf[0][2] = 0.0f;
            m_state.vf[0][3] = 1.0f;
        }
        execLowerInline(lower, vuData, dataSize, gs, memory, upper, true);
    }

    m_viBranchBackupValid = false;
    if (writtenVi != 0u && (bits & PairDelaysBranch) != 0u)
        recordViWriteForBranch(writtenVi, oldVi);

    if (!hazardsDisabled)
    {
        for (uint32_t which = 0; which < 2u; ++which)
        {
            const uint32_t write = (hazardWrites >> (12u * which)) & 0xFFFu;
            if (write == 0u)
                continue;
            const uint32_t reg = (write >> 4) & 0x1Fu;
            const uint64_t ready = m_cycle + (write >> 9);
            for (uint32_t component = 0; component < 4u; ++component)
                if ((write & laneForComponent(component)) != 0u)
                    m_vfReady[reg][component] = ready;
        }
        if (writtenVi != 0u && ((hazardWrites >> 28u) & 7u) != 0u)
            m_viReady[writtenVi] = m_cycle + ((hazardWrites >> 28u) & 7u);
        // The delay slot, the target and the two pairs after it have unknown predecessors.
        if ((bits & PairIndirect) != 0u)
            m_hazardUnknown = 4u;
    }

    if (vuPairMayWriteZeroRegister(lower, upper, (bits & PairIBit) != 0u))
    {
        m_state.vf[0][0] = 0.0f;
        m_state.vf[0][1] = 0.0f;
        m_state.vf[0][2] = 0.0f;
        m_state.vf[0][3] = 1.0f;
        m_state.vi[0] = 0;
    }

    uint32_t nextPc = pc + 8u;
    if (nextPc >= codeSize)
        nextPc = 0u;
    m_state.pc = nextPc;
    if (((bits & PairNoPendingBranch) == 0u || (bits & (PairBranch | PairIndirect)) != 0u) && m_state.branchPending)
    {
        if (m_state.branchDelay == 0u)
        {
            m_state.pc = m_state.branchTarget & microAddressMask();
            m_state.branchPending = false;
        }
        else
            --m_state.branchDelay;
    }

    bool programEnded = false;
    if (mayEnd && ((bits & PairEndBits) != 0u || m_state.haltAfterDelaySlot || m_state.ebit))
    {
        const bool dHalt = (bits & PairDBit) != 0u && m_state.dBitEnabled;
        const bool tHalt = (bits & PairTBit) != 0u && m_state.tBitEnabled;
        const bool haltBit = dHalt || tHalt;
        const bool haltBranch = haltBit && (bits & PairBranch) != 0u;
        if (m_state.haltAfterDelaySlot)
        {
            m_state.stoppedByD = m_pendingHaltD;
            m_state.stoppedByT = m_pendingHaltT;
            programEnded = true;
        }
        else if (m_state.ebit)
            programEnded = true;
        else if (haltBit && !haltBranch)
        {
            m_state.stoppedByD = dHalt;
            m_state.stoppedByT = tHalt;
            programEnded = true;
        }
        else if ((bits & PairEBit) != 0u)
            m_state.ebit = true;
        else if (haltBranch)
        {
            m_state.haltAfterDelaySlot = true;
            m_pendingHaltD = dHalt;
            m_pendingHaltT = tHalt;
        }
    }

    ++m_executedPairs;
    ++m_cycle;
    if (m_cycle >= m_nextCommitCycle)
        commitReadyPipelines();
    return programEnded ? StepResult::Ended : StepResult::Continue;
}

VU1Interpreter::StepResult VU1Interpreter::stepPairCall(
    uint32_t pc, uint32_t lower, uint32_t upper, uint32_t bits, uint8_t writtenVi, uint8_t shadowReg,
    uint64_t hazardReads, uint32_t hazardWrites,
    bool mayEnd, uint32_t codeSize, uint8_t *vuData, uint32_t dataSize,
    GS &gs, PS2Memory *memory, uint64_t budgetEnd)
{
    return stepPair(pc, lower, upper, bits, writtenVi, shadowReg, hazardReads, hazardWrites, mayEnd, codeSize, vuData, dataSize, gs, memory, budgetEnd);
}

#if __has_include("black_vu1_recompiled.inc")
#include "black_vu1_recompiled.inc"
#define PS2X_VU1_RECOMPILED_AVAILABLE 1

#if defined(PS2X_VU_RECOMPILED_PROGRAMS) // generated file that carries the microprogram table
namespace
{
    using VuImageFn = decltype(VuRecompiled::find(0ull, 0u));
    // Which recompiled microprogram owns each instruction pair of the code currently loaded in a core.
    // Rebuilt whenever the code changes: a program counts when its bytes sit, whole, at its load address.
    // This is what lets code extracted from the executable run recompiled in any mix the game uploads.
    bool vuMatchPrograms(VuImageFn *owners, uint32_t unit, const uint8_t *code, uint32_t codeSize)
    {
        bool any = false;
        size_t count = 0;
        const VuRecompiled::Program *programs = VuRecompiled::programs(count);
        for (size_t index = 0; index < count; ++index)
        {
            const VuRecompiled::Program &program = programs[index];
            if (program.unit != unit || program.address + program.size > codeSize)
                continue;
            uint64_t first;
            std::memcpy(&first, code + program.address, 8);
            if (first != program.first || VU1Interpreter::imageHash(code + program.address, program.size) != program.hash)
                continue;
            for (uint32_t pair = program.address / 8u; pair < (program.address + program.size) / 8u; ++pair)
                owners[pair] = program.code;
            any = true;
        }
        return any;
    }
}
#endif
#endif

namespace
{
    // PS2X_VU_PC_HISTOGRAM=<file>: how many times each pair of each code image ran in the interpreted fast
    // engine and how many cycles it took (stalls included), written at exit. Tells which loops matter when
    // working on the recompiler.
    struct VuPcHistogram
    {
        struct Row { uint64_t count = 0, cycles = 0; uint32_t lower = 0, upper = 0, bits = 0; };
        std::map<std::pair<uint32_t, uint64_t>, std::vector<Row>> images;
        const char *path = std::getenv("PS2X_VU_PC_HISTOGRAM");
        ~VuPcHistogram()
        {
            std::FILE *file = path && path[0] ? std::fopen(path, "w") : nullptr;
            if (!file)
                return;
            for (const auto &[key, rows] : images)
                for (size_t pair = 0; pair < rows.size(); ++pair)
                    if (rows[pair].count != 0u)
                        std::fprintf(file, "%u %016llx %04zx %llu %llu %08x %08x %04x\n", key.first, static_cast<unsigned long long>(key.second),
                                     pair * 8u, static_cast<unsigned long long>(rows[pair].count), static_cast<unsigned long long>(rows[pair].cycles),
                                     rows[pair].lower, rows[pair].upper, rows[pair].bits);
            std::fclose(file);
        }
    };
    VuPcHistogram g_vuPcHistogram;

    // PS2X_VU_RECOMP_STATS=1: how much VU time still goes through the interpreter while recompiled code is on, per unit,
    // logged every 2^24 cycles of that unit, and in total when the game closes. Two cases: "uncaptured" (no recompiled program owns the pair: code never
    // captured) and "gap" (a recompiled image owns it but left the pair to the interpreter), with the busiest addresses.
    // Images with uncaptured pairs are saved like whole unknown images (PS2X_VU_RECOMP_CAPTURE=<dir>), once each.
    struct VuRecompStats
    {
        bool enabled = [] { const char *v = std::getenv("PS2X_VU_RECOMP_STATS"); return v && v[0] == '1'; }();
        struct Unit
        {
            uint64_t total = 0, uncaptured = 0, gap = 0, next = 1ull << 24, windowStart = 0;
            uint64_t allUncaptured = 0, allGap = 0;
            std::map<std::pair<uint64_t, uint32_t>, uint64_t> byPc; // (image, pc) -> interpreted cycles
        } units[2];
        std::vector<uint64_t> captured;
        std::mutex capturedLock; // VU0 runs on the game thread, VU1 on its own
        ~VuRecompStats()
        {
            if (!enabled)
                return;
            for (unsigned unit = 0; unit < 2u; ++unit)
            {
                const Unit &u = units[unit];
                std::fprintf(stderr, "[VU stats] VU%u total %llu cycles: %.4f%% interpreted (uncaptured %.4f%%, gap %.4f%%)\n", unit,
                             static_cast<unsigned long long>(u.total), u.total ? 100.0 * double(u.allUncaptured + u.allGap) / double(u.total) : 0.0,
                             u.total ? 100.0 * double(u.allUncaptured) / double(u.total) : 0.0, u.total ? 100.0 * double(u.allGap) / double(u.total) : 0.0);
                std::vector<std::pair<uint64_t, std::pair<uint64_t, uint32_t>>> top; // since the last periodic line
                for (const auto &[key, cycles] : u.byPc)
                    top.emplace_back(cycles, key);
                std::sort(top.rbegin(), top.rend());
                for (size_t i = 0; i < top.size() && i < 12u; ++i)
                    std::fprintf(stderr, "[VU stats]   VU%u image %016llx pc %04x: %llu cycles\n", unit, static_cast<unsigned long long>(top[i].second.first),
                                 top[i].second.second, static_cast<unsigned long long>(top[i].first));
            }
        }
    };
    VuRecompStats g_vuRecompStats;

    void vuRecompCapture(unsigned unit, uint64_t hash, const uint8_t *code, uint32_t codeSize, const char *why)
    {
        std::lock_guard<std::mutex> lock(g_vuRecompStats.capturedLock);
        if (std::find(g_vuRecompStats.captured.begin(), g_vuRecompStats.captured.end(), hash) != g_vuRecompStats.captured.end())
            return;
        g_vuRecompStats.captured.push_back(hash);
        const char *dir = std::getenv("PS2X_VU_RECOMP_CAPTURE");
        bool saved = false;
        if (dir && dir[0])
        {
            char path[1024];
            std::snprintf(path, sizeof(path), "%s/vu%u-%016llx.bin", dir, unit, static_cast<unsigned long long>(hash));
            if (std::FILE *f = std::fopen(path, "wb"))
            {
                saved = std::fwrite(code, 1, codeSize, f) == codeSize;
                std::fclose(f);
            }
        }
        if (g_vuRecompStats.captured.size() <= 64u)
            std::fprintf(stderr, "[vu-recomp] VU%u image %016llx %s%s\n", unit, static_cast<unsigned long long>(hash), why, saved ? " (image captured)" : "");
    }

    __attribute__((noinline)) void vuRecompStatsReport(unsigned unit)
    {
        VuRecompStats::Unit &u = g_vuRecompStats.units[unit];
        u.next = u.total + (1ull << 24);
        const uint64_t window = u.total - u.windowStart;
        std::vector<std::pair<uint64_t, std::pair<uint64_t, uint32_t>>> top;
        for (const auto &[key, cycles] : u.byPc)
            top.emplace_back(cycles, key);
        std::sort(top.rbegin(), top.rend());
        char line[640];
        int len = std::snprintf(line, sizeof line, "[VU stats] VU%u %llu cycles: %.3f%% interpreted (uncaptured %.3f%%, gap %.3f%%)", unit,
                                static_cast<unsigned long long>(window), window ? 100.0 * double(u.uncaptured + u.gap) / double(window) : 0.0,
                                window ? 100.0 * double(u.uncaptured) / double(window) : 0.0, window ? 100.0 * double(u.gap) / double(window) : 0.0);
        for (size_t i = 0; i < top.size() && i < 6u && len < 560; ++i)
            len += std::snprintf(line + len, sizeof line - size_t(len), " %016llx:%04x(%llu)", static_cast<unsigned long long>(top[i].second.first), top[i].second.second,
                                 static_cast<unsigned long long>(top[i].first));
        std::fprintf(stderr, "%s\n", line);
        u.byPc.clear();
        u.uncaptured = u.gap = 0;
        u.windowStart = u.total;
    }
    inline bool vuPcHistogramEnabled() { return g_vuPcHistogram.path != nullptr; }
    __attribute__((noinline)) void vuPcHistogramAdd(uint32_t unit, uint64_t hash, uint32_t pc, const VU1Interpreter::PairFacts &facts, uint64_t cycles)
    {
        std::vector<VuPcHistogram::Row> &rows = g_vuPcHistogram.images[{unit, hash}];
        if (rows.empty())
            rows.resize(2048u);
        VuPcHistogram::Row &row = rows[(pc >> 3) & 2047u];
        ++row.count;
        row.cycles += cycles;
        row.lower = facts.lower;
        row.upper = facts.upper;
        row.bits = facts.bits;
    }
}

void VU1Interpreter::runFast(uint8_t *vuCode, uint32_t codeSize,
                             uint8_t *vuData, uint32_t dataSize,
                             GS &gs, PS2Memory *memory, uint32_t maxCycles, bool recompiled)
{
#if defined(PS2X_VU_SIMD)
    // Round toward zero (FPCR.RMode = 0b11) and flush-to-zero (FPCR.FZ) for the whole run, in one register
    // write: see execUpperInline().
    // Writing FPCR is slow (it serializes the pipeline: some 12 ns each way on an M1), which is most of what a
    // short VU0 call costs: a caller already in this mode pays for neither write.
    const ps2x_fp::Control previousFpcr = ps2x_fp::read();
    const ps2x_fp::Control vuFpcr = ps2x_fp::vuMode(previousFpcr);
    if (previousFpcr != vuFpcr)
        ps2x_fp::write(vuFpcr);
    m_fzActive = true;
#else
    const int previousRoundingMode = std::fegetround();
    const bool useVuRounding = std::fesetround(FE_TOWARDZERO) == 0;
#endif
    const uint64_t budgetEnd = m_cycle + maxCycles;
    VuReservedDiag &diag = g_vuReservedDiag[m_unit == Unit::VU1 ? 1 : 0];
    bool programEnded = false;
    // PS2X_VU_NO_LAZY_FLAGS=1: every live FMAC op goes through the flag pipeline (diagnostic).
    static const bool lazyDisabled = std::getenv("PS2X_VU_NO_LAZY_FLAGS") != nullptr || std::getenv("PS2X_VU_EXACT_FMAC") != nullptr;
    m_lazyFlags = kFlushToZero && !lazyDisabled && m_analysis->statusUnobserved;
    if (!m_lazyFlags)
        drainLazyFlags();
    if (m_cycle < budgetEnd && !m_stopRequested)
        commitReadyPipelines();

    RecompiledImage wholeImage = nullptr;
    const RecompiledImage *programOwners = nullptr;
    const uint64_t statsCycleStart = m_cycle;
#if defined(PS2X_VU1_RECOMPILED_AVAILABLE)
    if (recompiled)
    {
        ImageAnalysis &owners = *m_analysis;
        if (!owners.resolved)
        {
            owners.image = VuRecompiled::find(owners.hash, m_unit == Unit::VU1 ? 1u : 0u);
            owners.resolved = true;
#if defined(PS2X_VU_RECOMPILED_PROGRAMS)
            if (!owners.image && codeSize <= 2048u * 8u)
                owners.ownersAny = vuMatchPrograms(owners.owners.data(), m_unit == Unit::VU1 ? 1u : 0u, vuCode, codeSize);
#endif
            if (!owners.image && !owners.ownersAny)
            {
                // Unknown microcode: interpret it, and with
                // PS2X_VU_RECOMP_CAPTURE=<dir> save the image so that
                // ps2recomp/build_vu_recompiled.sh can add it.
                vuRecompCapture(m_unit == Unit::VU1 ? 1u : 0u, imageHash(vuCode, codeSize), vuCode, codeSize, "is not recompiled; interpreting it");
            }
        }
        wholeImage = owners.image;
        if (!wholeImage && owners.ownersAny)
            programOwners = owners.owners.data();
    }
#else
    (void)recompiled;
#endif

    while (m_cycle < budgetEnd && !m_stopRequested && !programEnded)
    {
        RecompiledImage image = wholeImage;
        if (programOwners != nullptr && (m_state.pc & 7u) == 0u && m_state.pc < codeSize)
            image = programOwners[m_state.pc >> 3];
        if (image)
        {
            const StepResult result = image(*this, codeSize, vuData, dataSize, gs, memory, budgetEnd);
            if (result == StepResult::Ended)
            {
                programEnded = true;
                break;
            }
            if (result == StepResult::Stop)
                break;
            if (m_cycle >= budgetEnd || m_stopRequested)
                break;
        }
        const uint32_t pc = m_state.pc;
        if (pc + 8u > codeSize)
            break;
        PairFacts facts;
        if ((pc & 7u) == 0u)
        {
            const uint32_t index = pc >> 3;
            const DecodedInstructionPair &decoded = m_decodedCodeCache[index];
            facts.lower = decoded.lower;
            facts.upper = decoded.upper;
            facts.bits = m_pairBits[index];
            facts.writtenVi = m_fastWrittenVi[index];
            facts.shadowReg = decoded.upperVfShadowReg;
            facts.hazardReads = m_fastHazardReads[index];
            facts.hazardWrites = m_fastHazardWrites[index];
        }
        else
            facts = pairFactsOf(decodeInstructionPair(vuCode, pc)); // not a cached boundary: flags stay exact
        diag.prevPc = pc;
        const uint64_t cycleBefore = m_cycle;
        const StepResult result = stepPair(pc, facts.lower, facts.upper, facts.bits, facts.writtenVi, facts.shadowReg,
                                           facts.hazardReads, facts.hazardWrites, true, codeSize, vuData, dataSize, gs, memory, budgetEnd);
        if (__builtin_expect(vuPcHistogramEnabled(), 0))
            vuPcHistogramAdd(m_unit == Unit::VU1 ? 1u : 0u, m_analysis->hash, pc, facts, m_cycle - cycleBefore);
        if (recompiled && __builtin_expect(g_vuRecompStats.enabled || programOwners != nullptr, 0))
        {
            // A pair the recompiled code did not run.
            const unsigned unit = m_unit == Unit::VU1 ? 1u : 0u;
            const bool owned = wholeImage != nullptr || (programOwners != nullptr && (pc & 7u) == 0u && pc < codeSize && programOwners[pc >> 3] != nullptr);
            if (!owned)
                vuRecompCapture(unit, m_analysis->hash, vuCode, codeSize, "has code no recompiled program covers; interpreting that part");
            if (g_vuRecompStats.enabled)
            {
                VuRecompStats::Unit &u = g_vuRecompStats.units[unit];
                (owned ? u.gap : u.uncaptured) += m_cycle - cycleBefore;
                (owned ? u.allGap : u.allUncaptured) += m_cycle - cycleBefore;
                u.byPc[{m_analysis->hash, pc}] += m_cycle - cycleBefore;
            }
        }
        if (result == StepResult::Ended)
            programEnded = true;
        else if (result == StepResult::Stop)
            break;
    }
    if (programEnded)
    {
        flushPipelines();
        m_state.ebit = false;
        m_state.haltAfterDelaySlot = false;
        m_pendingHaltD = false;
        m_pendingHaltT = false;
    }
    if (recompiled && __builtin_expect(g_vuRecompStats.enabled, 0))
    {
        VuRecompStats::Unit &u = g_vuRecompStats.units[m_unit == Unit::VU1 ? 1 : 0];
        u.total += m_cycle - statsCycleStart;
        if (u.total >= u.next)
            vuRecompStatsReport(m_unit == Unit::VU1 ? 1u : 0u);
    }
    syncXgkick();
    resolveLazyFlags();
    resolveLazyClip();
    m_state.cycles = m_cycle;
#if defined(PS2X_VU_SIMD)
    m_fzActive = false;
    if (previousFpcr != vuFpcr)
        ps2x_fp::write(previousFpcr); // also restores the rounding mode
#else
    if (useVuRounding && previousRoundingMode != -1)
        std::fesetround(previousRoundingMode);
#endif
}

VU1Interpreter::DecodedInstructionPair VU1Interpreter::getDecodedInstructionPairForPc(
    const uint8_t *vuCode, uint32_t codeSize, PS2Memory *memory, uint32_t pc)
{
    if ((pc & 7u) != 0u)
        return decodeInstructionPair(vuCode, pc);

    const bool trackedVu1Code = memory != nullptr &&
                                ((m_unit == Unit::VU1 && vuCode == memory->getVU1Code()) ||
                                 (m_unit == Unit::VU0 && vuCode == memory->getVU0Code()));
    if (!trackedVu1Code && !(memory == nullptr && m_hasExternalCodeKey))
        return decodeInstructionPair(vuCode, pc);

    const uint64_t generation = !trackedVu1Code ? m_externalCodeKey
        : (m_unit == Unit::VU1 ? memory->getVU1CodeGeneration() : memory->getVU0CodeGeneration());
    if (!m_decodedCodeCacheValid ||
        m_cachedVuCode != vuCode ||
        m_cachedMemory != memory ||
        m_cachedCodeSize != codeSize ||
        m_cachedCodeGeneration != generation)
    {
        rebuildDecodedCodeCache(vuCode, codeSize, memory, generation);
    }
    const uint32_t pairIndex = pc / 8u;
    if (pairIndex >= kMaxDecodedPairs)
        return decodeInstructionPair(vuCode, pc);
    return m_decodedCodeCache[pairIndex];
}

void VU1Interpreter::reportReservedInstruction(bool upper, uint32_t instruction)
{
    const int unit = m_unit == Unit::VU1 ? 1 : 0;
    VuReservedDiag &diag = g_vuReservedDiag[unit];
    RUNTIME_ERROR(
        "[VU" << unit
              << " reserved " << (upper ? "upper" : "lower")
              << "] cycle=" << m_cycle
              << " pc=0x" << std::hex << m_state.pc
              << " instruction=0x" << instruction
              << std::dec << '\n');
    if (diag.dumps < 3 && m_cachedVuCode != nullptr)
    {
        ++diag.dumps;
        std::fprintf(stderr,
                     "[VU%d reserved detail] kick=0x%x prev=0x%x cycles_this_kick=%llu top=0x%x itop=0x%x "
                     "branchPending=%u branchTarget=0x%x branchDelay=%u\n",
                     unit, diag.kickPc, diag.prevPc,
                     static_cast<unsigned long long>(m_cycle - diag.kickCycle),
                     m_state.top, m_state.itop,
                     m_state.branchPending ? 1u : 0u, m_state.branchTarget, m_state.branchDelay);
        std::fprintf(stderr, "[VU%d reserved detail] vi:", unit);
        for (int i = 0; i < 16; ++i)
            std::fprintf(stderr, " %d", m_state.vi[i]);
        std::fprintf(stderr, "\n");
        const uint32_t pc = m_state.pc & ~7u;
        const uint32_t begin = pc >= 32u ? pc - 32u : 0u;
        const uint32_t end = std::min(m_cachedCodeSize, pc + 16u);
        for (uint32_t addr = begin; addr + 8u <= end; addr += 8u)
        {
            uint32_t lower = 0, upper = 0;
            std::memcpy(&lower, m_cachedVuCode + addr, 4);
            std::memcpy(&upper, m_cachedVuCode + addr + 4, 4);
            std::fprintf(stderr, "[VU%d reserved detail] %s%04x: lo=%08x hi=%08x\n",
                         unit, addr == pc ? ">" : " ", addr, lower, upper);
        }
    }
    m_stopRequested = true;
}

namespace
{
    // PS2X_VU_FAST_VERIFY=<file>: run the fast engine on a shadow copy of every
    // VU1 program that starts with idle pipelines, compare it with the reference
    // run that the game actually uses, and append mismatching inputs to <file>
    // in the PS2X_VU_TRACE record format (replayable offline).
    const char *vuFastVerifyPath()
    {
        static const char *path = [] () -> const char * {
            const char *v = std::getenv("PS2X_VU_FAST_VERIFY");
            return v && v[0] ? v : nullptr;
        }();
        return path;
    }

    struct VuPacketLog
    {
        std::vector<uint8_t> bytes;
        std::vector<uint32_t> sizes;
        static void sink(void *context, const uint8_t *data, uint32_t size)
        {
            auto *log = static_cast<VuPacketLog *>(context);
            log->sizes.push_back(size);
            log->bytes.insert(log->bytes.end(), data, data + size);
        }
        void clear() { bytes.clear(); sizes.clear(); }
    };
}

void VU1Interpreter::runVerified(uint8_t *vuCode, uint32_t codeSize,
                                 uint8_t *vuData, uint32_t dataSize,
                                 GS &gs, PS2Memory *memory, uint32_t maxCycles, bool resumed)
{
    static std::unique_ptr<VU1Interpreter> shadow;
    static std::vector<uint8_t> shadowData, dataBefore;
    static VuPacketLog shadowPackets, realPackets;
    static uint64_t checked = 0, mismatches = 0;
    if (!shadow)
    {
        shadow = std::make_unique<VU1Interpreter>(Unit::VU1);
        shadow->setEngine(std::getenv("PS2X_VU_VERIFY_RECOMPILED") ? Engine::Recompiled : Engine::Fast);
        shadow->setXgkickSink(&VuPacketLog::sink, &shadowPackets);
    }
    const VU1State stateBefore = m_state;
    dataBefore.assign(vuData, vuData + dataSize);
    shadowData = dataBefore;
    shadowPackets.clear();
    realPackets.clear();
    shadow->m_state = m_state;
    shadow->resetScheduler();
    shadow->m_cycle = m_cycle;
    shadow->setExternalCodeKey(memory ? memory->getVU1CodeGeneration() : 0u);
    shadow->run(vuCode, codeSize, shadowData.data(), dataSize, gs, nullptr, maxCycles);

    m_xgkickTap = &VuPacketLog::sink;
    m_xgkickTapContext = &realPackets;
    run(vuCode, codeSize, vuData, dataSize, gs, memory, maxCycles);
    m_xgkickTap = nullptr;

    const VU1State &a = m_state;
    const VU1State &b = shadow->m_state;
    const char *what = nullptr;
    if (std::memcmp(a.vf, b.vf, sizeof(a.vf)) != 0) what = "vf";
    else if (std::memcmp(a.vi, b.vi, sizeof(a.vi)) != 0) what = "vi";
    else if (std::memcmp(a.acc, b.acc, sizeof(a.acc)) != 0) what = "acc";
    else if (std::memcmp(&a.q, &b.q, 4) != 0 || std::memcmp(&a.p, &b.p, 4) != 0 || std::memcmp(&a.i, &b.i, 4) != 0) what = "q/p/i";
    else if (a.r != b.r) what = "r";
    else if (a.pc != b.pc) what = "pc";
    else if (a.mac != b.mac) what = "mac";
    else if (a.clip != b.clip) what = "clip";
    else if ((a.status & 0xC3Fu) != (b.status & 0xC3Fu)) what = "status";
    else if (a.cycles != b.cycles) what = "cycles";
    else if (a.ebit != b.ebit || a.branchPending != b.branchPending || a.stoppedByD != b.stoppedByD || a.stoppedByT != b.stoppedByT) what = "control";
    else if (std::memcmp(vuData, shadowData.data(), dataSize) != 0) what = "data memory";
    else if (realPackets.sizes != shadowPackets.sizes) what = "packet sizes";
    else if (realPackets.bytes != shadowPackets.bytes) what = "packet bytes";
    ++checked;
    if (what)
    {
        ++mismatches;
        if (mismatches <= 200u)
        {
            uint64_t hash = 14695981039346656037ull;
            for (uint32_t i = 0; i < codeSize; ++i) { hash ^= vuCode[i]; hash *= 1099511628211ull; }
            if (mismatches <= 20u)
                std::fprintf(stderr, "[vu-fast-verify] mismatch #%llu after %llu runs: %s (image=%016llx pc=0x%x %s end-pc=0x%x)\n",
                             static_cast<unsigned long long>(mismatches), static_cast<unsigned long long>(checked), what,
                             static_cast<unsigned long long>(hash), stateBefore.pc, resumed ? "resume" : "execute", a.pc);
            if (std::FILE *f = std::fopen(vuFastVerifyPath(), "ab"))
            {
                const uint32_t header[8] = {resumed ? 0x31525556u : 0x31545556u, stateBefore.pc, stateBefore.top, stateBefore.itop,
                                            maxCycles, static_cast<uint32_t>(sizeof(VU1State)), codeSize, dataSize};
                std::fwrite(header, sizeof(header), 1, f);
                std::fwrite(&stateBefore, sizeof(stateBefore), 1, f);
                std::fwrite(vuCode, 1, codeSize, f);
                std::fwrite(dataBefore.data(), 1, dataSize, f);
                std::fwrite(&m_state, sizeof(m_state), 1, f);
                std::fwrite(vuData, 1, dataSize, f);
                std::fclose(f);
            }
        }
    }
    if ((checked & 0x3FFFFu) == 0u)
        std::fprintf(stderr, "[vu-fast-verify] checked=%llu mismatches=%llu\n",
                     static_cast<unsigned long long>(checked), static_cast<unsigned long long>(mismatches));
}

void VU1Interpreter::execute(uint8_t *vuCode, uint32_t codeSize,
                             uint8_t *vuData, uint32_t dataSize,
                             GS &gs, PS2Memory *memory,
                             uint32_t startPC, uint32_t top, uint32_t itop,
                             uint32_t maxCycles)
{
    // A program that ended left nothing in flight, and every ready time it recorded is in the past (the
    // cycle counter keeps running between programs): only the scalar state needs resetting then.
    if (pipelinesPending())
        resetScheduler();
    else
    {
        m_nextCommitCycle = 0;
        m_xgkick.sourceAddress = 0;
        m_xgkick.totalBytes = 0;
        m_xgkick.copiedBytes = 0;
        m_xgkick.currentTagEnd = 0;
        m_xgkick.cycleCredit = 0;
        m_xgkick.issueCycle = 0;
        m_xgkick.currentTagEop = false;
        m_efuResourceReady = 0;
        m_workingClip = m_state.clip;
        m_hazardUnknown = 0;
        m_viBranchBackupValue = 0;
        m_viBranchBackupReg = 0;
        m_viBranchBackupValid = false;
        m_stopRequested = false;
        m_pendingHaltD = false;
        m_pendingHaltT = false;
    }
    {
        VuReservedDiag &diag = g_vuReservedDiag[m_unit == Unit::VU1 ? 1 : 0];
        diag.kickPc = startPC & microAddressMask();
        diag.kickCycle = m_cycle;
        diag.prevPc = 0xFFFFFFFFu;
    }
    m_state.pc = startPC & microAddressMask();
    m_state.ebit = false;
    m_state.haltAfterDelaySlot = false;
    m_state.stoppedByD = false;
    m_state.stoppedByT = false;
    m_state.top = top;
    m_state.itop = itop;
    m_state.branchPending = false;
    m_state.branchTarget = 0;
    m_state.branchDelay = 0;
    m_state.vf[0][0] = 0.0f;
    m_state.vf[0][1] = 0.0f;
    m_state.vf[0][2] = 0.0f;
    m_state.vf[0][3] = 1.0f;
    VuTraceWriter *trace = vuTraceWriter(m_unit == Unit::VU1 ? 1u : 0u);
    const bool traced = trace && trace->begin(m_state, startPC, top, itop, maxCycles, vuCode, codeSize, vuData, dataSize);
    if (m_unit == Unit::VU1 && m_engine == Engine::Default && vuFastVerifyPath())
        runVerified(vuCode, codeSize, vuData, dataSize, gs, memory, maxCycles, false);
    else
        run(vuCode, codeSize, vuData, dataSize, gs, memory, maxCycles);
    if (traced)
        trace->end(m_state, vuData, dataSize);
}

void VU1Interpreter::executeMicroCall(uint8_t *vuCode, uint32_t codeSize,
                                      uint8_t *vuData, uint32_t dataSize,
                                      GS &gs, PS2Memory *memory,
                                      uint32_t startPC, uint32_t top, uint32_t itop,
                                      uint32_t maxCycles)
{
#if defined(PS2X_VU1_RECOMPILED_AVAILABLE) && defined(PS2X_VU_SIMD)
    // What run() and runFast() decide from the environment, once. PS2X_VU_NO_LEAN_CALL=1 keeps execute().
    static const bool configured = []
    {
        const char *recompiled = std::getenv("PS2X_VU_RECOMPILED");
        for (const char *name : {"PS2X_VU_ACCURATE", "PS2X_VU_CATALOG", "PS2X_VU_AOT", "PS2X_VU_EXACT_FMAC", "PS2X_VU_NO_LAZY_FLAGS",
                                 "PS2X_VU_NO_LEAN_CALL"})
            if (std::getenv(name) != nullptr)
                return false;
        return !(recompiled && recompiled[0] == '0');
    }();
    const unsigned unit = m_unit == Unit::VU1 ? 1u : 0u;
    // The decoded cache must be the one of this code (ensureDecodedCodeCache()'s test), with its image found.
    const bool tracked = memory != nullptr && vuCode == (unit ? memory->getVU1Code() : memory->getVU0Code());
    const bool keyed = memory == nullptr && m_hasExternalCodeKey; // tests without a PS2Memory
    if (!configured || (m_engine != Engine::Default && m_engine != Engine::Recompiled) || pipelinesPending() || !(tracked || keyed) ||
        !m_decodedCodeCacheValid || m_cachedVuCode != vuCode || m_cachedMemory != memory || m_cachedCodeSize != codeSize ||
        m_cachedCodeGeneration != (keyed ? m_externalCodeKey : unit ? memory->getVU1CodeGeneration() : memory->getVU0CodeGeneration()) ||
        codeSize / 8u > kMaxDecodedPairs || m_analysis == nullptr || !m_analysis->resolved || m_analysis->image == nullptr ||
        !m_analysis->statusUnobserved || vuPcHistogramEnabled() || vuTraceWriter(unit) != nullptr ||
        (unit == 1u && m_engine == Engine::Default && vuFastVerifyPath()) || maxCycles == 0u)
    {
        execute(vuCode, codeSize, vuData, dataSize, gs, memory, startPC, top, itop, maxCycles);
        return;
    }

    // execute(), with nothing in flight.
    m_nextCommitCycle = 0;
    m_xgkick.sourceAddress = 0;
    m_xgkick.totalBytes = 0;
    m_xgkick.copiedBytes = 0;
    m_xgkick.currentTagEnd = 0;
    m_xgkick.cycleCredit = 0;
    m_xgkick.issueCycle = 0;
    m_xgkick.currentTagEop = false;
    m_efuResourceReady = 0;
    m_workingClip = m_state.clip;
    m_hazardUnknown = 0;
    m_viBranchBackupValue = 0;
    m_viBranchBackupReg = 0;
    m_viBranchBackupValid = false;
    m_stopRequested = false;
    m_pendingHaltD = false;
    m_pendingHaltT = false;
    VuReservedDiag &diag = g_vuReservedDiag[unit];
    diag.kickPc = startPC & microAddressMask();
    diag.kickCycle = m_cycle;
    diag.prevPc = 0xFFFFFFFFu;
    m_state.pc = startPC & microAddressMask();
    m_state.ebit = false;
    m_state.haltAfterDelaySlot = false;
    m_state.stoppedByD = false;
    m_state.stoppedByT = false;
    m_state.top = top;
    m_state.itop = itop;
    m_state.branchPending = false;
    m_state.branchTarget = 0;
    m_state.branchDelay = 0;
    m_state.vf[0][0] = 0.0f;
    m_state.vf[0][1] = 0.0f;
    m_state.vf[0][2] = 0.0f;
    m_state.vf[0][3] = 1.0f;
    // run()
    m_activeVuData = vuData;
    m_activeVuDataSize = dataSize;
    m_activeGs = &gs;
    m_activeMemory = memory;
    // runFast(): its set-up, one pass of its loop, and its end when that pass finished the program.
    const ps2x_fp::Control previousFpcr = ps2x_fp::read();
    const ps2x_fp::Control vuFpcr = ps2x_fp::vuMode(previousFpcr);
    if (previousFpcr != vuFpcr)
        ps2x_fp::write(vuFpcr);
    m_fzActive = true;
    const uint64_t budgetEnd = m_cycle + maxCycles;
    m_lazyFlags = true;
    commitReadyPipelines();
    const uint64_t statsCycleStart = m_cycle;
    const StepResult result = m_analysis->image(*this, codeSize, vuData, dataSize, gs, memory, budgetEnd);
    if (__builtin_expect(g_vuRecompStats.enabled, 0))
    {
        VuRecompStats::Unit &u = g_vuRecompStats.units[m_unit == Unit::VU1 ? 1 : 0];
        u.total += m_cycle - statsCycleStart; // recompiled cycles (a fallback below counts its own)
        if (u.total >= u.next)
            vuRecompStatsReport(m_unit == Unit::VU1 ? 1u : 0u);
    }
    if (result != StepResult::Ended && result != StepResult::Stop && m_cycle < budgetEnd && !m_stopRequested)
    {
        // The image left a pair to the interpreted engine: the general loop takes it from here.
        m_fzActive = false;
        if (previousFpcr != vuFpcr)
            ps2x_fp::write(previousFpcr);
        runFast(vuCode, codeSize, vuData, dataSize, gs, memory, static_cast<uint32_t>(budgetEnd - m_cycle), true);
        return;
    }
    if (result == StepResult::Ended)
    {
        flushPipelines();
        m_state.ebit = false;
        m_state.haltAfterDelaySlot = false;
        m_pendingHaltD = false;
        m_pendingHaltT = false;
    }
    syncXgkick();
    resolveLazyFlags();
    resolveLazyClip();
    m_state.cycles = m_cycle;
    m_fzActive = false;
    if (previousFpcr != vuFpcr)
        ps2x_fp::write(previousFpcr);
#else
    execute(vuCode, codeSize, vuData, dataSize, gs, memory, startPC, top, itop, maxCycles);
#endif
}

void VU1Interpreter::resume(uint8_t *vuCode, uint32_t codeSize,
                            uint8_t *vuData, uint32_t dataSize,
                            GS &gs, PS2Memory *memory,
                            uint32_t top, uint32_t itop, uint32_t maxCycles)
{
    m_state.top = top;
    m_state.itop = itop;
    {
        VuReservedDiag &diag = g_vuReservedDiag[m_unit == Unit::VU1 ? 1 : 0];
        diag.kickPc = m_state.pc;
        diag.kickCycle = m_cycle;
        diag.prevPc = 0xFFFFFFFFu;
    }
    m_state.stoppedByD = false;
    m_state.stoppedByT = false;
    VuTraceWriter *trace = !pipelinesPending() ? vuTraceWriter(m_unit == Unit::VU1 ? 1u : 0u) : nullptr;
    const bool traced = trace && trace->begin(m_state, m_state.pc, top, itop, maxCycles, vuCode, codeSize, vuData, dataSize, true);
    if (m_unit == Unit::VU1 && m_engine == Engine::Default && vuFastVerifyPath() && !pipelinesPending())
        runVerified(vuCode, codeSize, vuData, dataSize, gs, memory, maxCycles, true);
    else
        run(vuCode, codeSize, vuData, dataSize, gs, memory, maxCycles);
    if (traced)
        trace->end(m_state, vuData, dataSize);
}

void VU1Interpreter::run(uint8_t *vuCode, uint32_t codeSize,
                         uint8_t *vuData, uint32_t dataSize,
                         GS &gs, PS2Memory *memory, uint32_t maxCycles)
{
    catalogVuCode(m_unit == Unit::VU1 ? 1u : 0u, vuCode, codeSize, m_state.pc, memory);
    m_activeVuData = vuData;
    m_activeVuDataSize = dataSize;
    m_activeGs = &gs;
    m_activeMemory = memory;

    {
        // PS2X_VU_FAST=1 selects the fast engine (FastVU timing only).
        static const bool fastRequested = [] { const char *v = std::getenv("PS2X_VU_FAST"); return v && v[0] == '1'; }();
        static const bool fastExcluded = std::getenv("PS2X_VU_ACCURATE") != nullptr || std::getenv("PS2X_VU_CATALOG") != nullptr ||
                                         std::getenv("PS2X_VU_AOT") != nullptr || std::getenv("PS2X_VU_EXACT_FMAC") != nullptr;
        // VU0 and VU1 run statically recompiled microcode by default
        // (PS2X_VU_RECOMPILED=0 returns to the reference interpreter).
        static const bool recompiledRequested = [] { const char *v = std::getenv("PS2X_VU_RECOMPILED"); return !(v && v[0] == '0'); }();
        const bool wantRecompiled = m_engine == Engine::Recompiled ||
                                    (m_engine == Engine::Default && recompiledRequested);
        const bool wantFast = wantRecompiled || m_engine == Engine::Fast || (m_engine == Engine::Default && fastRequested);
        if (wantFast && !fastExcluded && ensureDecodedCodeCache(vuCode, codeSize, memory))
        {
            runFast(vuCode, codeSize, vuData, dataSize, gs, memory, maxCycles, wantRecompiled);
            return;
        }
    }
    m_lazyFlags = false;
    drainLazyFlags();

#if defined(BLACK_VU_AOT_AVAILABLE)
    static const bool aotEnabled = std::getenv("PS2X_VU_AOT") != nullptr;
    struct AotCodeCache {
        uint64_t generation = ~uint64_t{0}, hash = 0;
        const uint8_t* code = nullptr;
        const PS2Memory* owner = nullptr;
        uint32_t size = 0;
    };
    static thread_local AotCodeCache aotCaches[2];
    const unsigned aotUnit = m_unit == Unit::VU1 ? 1u : 0u;
    AotCodeCache& cache = aotCaches[aotUnit];
    uint64_t& aotHash = cache.hash;
    bool aotImage = false;
    if (aotEnabled && memory)
    {
        const uint64_t generation = aotUnit == 0u
            ? memory->getVU0CodeGeneration() : memory->getVU1CodeGeneration();
        if (generation != cache.generation || cache.owner != memory ||
            cache.code != vuCode || cache.size != codeSize)
        {
            aotHash = 14695981039346656037ull;
            for (uint32_t i=0;i<codeSize;++i) { aotHash ^= vuCode[i]; aotHash *= 1099511628211ull; }
            cache.generation=generation; cache.code=vuCode; cache.size=codeSize; cache.owner=memory;
        }
        aotImage = BlackVuAotBundle::matchesHash(aotHash,aotUnit);
    }
    struct AotHost {
        VU1Interpreter& core; VU1State& m_state; uint32_t& m_currentUpperInstruction;
        float normalizeOperand(float v) { return core.normalizeOperand(v); }
        float normalizeResult(float v,uint32_t& f) { return core.normalizeResult(v,f); }
        void queueQ(float v,uint32_t latency,uint32_t flags) { core.queueQ(v,latency,flags); }
        void queueP(float v,uint32_t latency) { core.queueP(v,latency); }
        void queueEsin(float v) { core.queueEsin(v); }
        void startXgkick(uint32_t address) { core.startXgkick(address); }
        void applyDest(float* d,const float* r,uint8_t m) { core.applyDest(d,r,m); }
        void applyFmacDest(float* d,float* r,uint8_t m) { core.applyFmacDest(d,r,m); }
        void queueFcset(uint32_t v) { core.queueFcset(v); }
        void queueFsset(uint16_t v) { core.queueFsset(v); }
        void queueClip(uint32_t flags) { core.queueClip(flags); }
        void applyFmacDestAcc(float* r,uint8_t m) { core.applyFmacDestAcc(r,m); }
        void queueStore(uint32_t a,const uint32_t* w,uint8_t m) { core.queueStore(a,w,m); }
        int32_t readBranchVi(uint8_t r) { return core.readBranchVi(r); }
        uint32_t microAddressMask() { return core.microAddressMask(); }
    } aotHost{*this,m_state,m_currentUpperInstruction};
    static thread_local uint64_t aotHitsByUnit[2]{},aotFallbacksByUnit[2]{};
    uint64_t& aotHits=aotHitsByUnit[aotUnit];
    uint64_t& aotFallbacks=aotFallbacksByUnit[aotUnit];
#endif
    const int previousRoundingMode = std::fegetround();
    const bool useVuRounding = std::fesetround(FE_TOWARDZERO) == 0;
    const uint64_t budgetEnd = m_cycle + maxCycles;
    bool programEnded = false;
    static const bool accurateVu = std::getenv("PS2X_VU_ACCURATE") != nullptr;
    // PS2X_VU_ACCURATE_PARTS=<mask> (diagnostic, with PS2X_VU_ACCURATE): 1 = register-hazard stalls,
    // 2 = delayed VF writes, 4 = delayed ACC writes, 8 = delayed VI writes. Default: all.
    static const int accParts = std::getenv("PS2X_VU_ACCURATE_PARTS") ? std::atoi(std::getenv("PS2X_VU_ACCURATE_PARTS")) : 15;
    // Register-hazard stalls are part of the default timing (PS2X_VU_NO_HAZARDS=1 drops them); the
    // delayed register writes remain an option of PS2X_VU_ACCURATE.
    static const bool refStalls = std::getenv("PS2X_VU_NO_HAZARDS") == nullptr;
    const bool accStall = (accurateVu && (accParts & 1)) || (!accurateVu && refStalls), accVf = accurateVu && (accParts & 2);
    const bool accAcc = accurateVu && (accParts & 4), accVi = accurateVu && (accParts & 8);
    static const bool catalogEnabled = std::getenv("PS2X_VU_CATALOG") != nullptr;
    // Commit once on entry; every iteration ends at advanceOneCycle(), which
    // already commits before XGKICK. Repeating the same cycle scans twice.
    if (m_cycle < budgetEnd && !m_stopRequested)
        commitReadyPipelines();
    bool pairFault = false;
    using GeneratedPairBody = bool (*)(void *, const DecodedInstructionPair &, uint8_t *, uint32_t);
    auto processPair = [&](const DecodedInstructionPair &decoded, GeneratedPairBody generatedBody) -> bool {
        if (decoded.upperUsage.reserved || decoded.lowerUsage.reserved)
        {
            reportReservedInstruction(decoded.upperUsage.reserved, decoded.upperUsage.reserved ? decoded.upper : decoded.lower);
            pairFault = true;
            return false;
        }
        g_vuReservedDiag[m_unit == Unit::VU1 ? 1 : 0].prevPc = m_state.pc;
        if (m_coverageMap)
            m_coverageMap[(m_state.pc >> 3) & (kMaxDecodedPairs - 1u)] = 1u;

        uint64_t readyCycle = m_cycle;
        if (accStall)
            readyCycle = calculatePairReadyCycle(decoded);
        else
        {
            if (decoded.lowerUsage.waitQ && m_fdiv.valid)
                readyCycle = std::max(readyCycle, m_fdiv.readyCycle);
            if (decoded.lowerUsage.pipeline == PipelineFdiv && m_fdiv.valid)
                readyCycle = std::max(readyCycle, m_fdiv.readyCycle);
            if (decoded.lowerUsage.waitP)
            {
                for (const ScalarPipelineEntry &entry : m_efu)
                    if (entry.valid)
                        readyCycle = std::max(readyCycle, entry.readyCycle);
            }
            if (decoded.lowerUsage.pipeline == PipelineXgkick && m_xgkick.active)
                readyCycle = std::max(readyCycle, m_cycle + 1u);
        }
        while (readyCycle > m_cycle)
        {
            if (readyCycle >= budgetEnd)
            {
                advanceTo(budgetEnd);
                break;
            }
            advanceTo(readyCycle);
            if (!accStall)
                break;
            readyCycle = calculatePairReadyCycle(decoded);
        }
        if (m_cycle >= budgetEnd)
            return false;

        const uint32_t viWrites = decoded.lowerUsage.viWrite & 0xFFFEu;
        const uint8_t writtenVi = viWrites != 0u
                                      ? static_cast<uint8_t>(std::countr_zero(viWrites))
                                      : 0u;
        const int32_t oldVi = writtenVi != 0u ? m_state.vi[writtenVi] : 0;

        const VfAccess upperWrite = decoded.upperUsage.vfWrite;
        const VfAccess lowerWrite = decoded.lowerUsage.vfWrite;
        const bool hasUpperWrite = accVf && upperWrite.reg != 0u;
        const bool hasLowerWrite = accVf && lowerWrite.reg != 0u && decoded.suppressedLowerVf != lowerWrite.reg;
        const bool hasDistinctLowerWrite = hasLowerWrite && (!hasUpperWrite || lowerWrite.reg != upperWrite.reg);
        float oldUpperVf[4]{};
        float newUpperVf[4]{};
        float oldLowerVf[4]{};
        float newLowerVf[4]{};
        float oldAcc[4]{};
        float newAcc[4]{};
        if (hasUpperWrite)
            std::memcpy(oldUpperVf, m_state.vf[upperWrite.reg], sizeof(oldUpperVf));
        if (hasDistinctLowerWrite)
            std::memcpy(oldLowerVf, m_state.vf[lowerWrite.reg], sizeof(oldLowerVf));
        if (accAcc && decoded.upperUsage.accWrite != 0u)
            std::memcpy(oldAcc, m_state.acc, sizeof(oldAcc));

#if defined(BLACK_VU_AOT_AVAILABLE)
        const bool aotExecuted = generatedBody
            ? generatedBody(&aotHost, decoded, vuData, dataSize)
            : (aotImage && BlackVuAotBundle::executePairBodies(aotHash,aotHost,m_state.pc,decoded,vuData,dataSize,aotUnit));
        if (aotEnabled) {
            if(aotExecuted) ++aotHits; else ++aotFallbacks;
            if (((aotHits+aotFallbacks)&0xfffffu)==0u || aotHits==1u && aotExecuted)
                std::fprintf(stderr,aotUnit==0u?"[VU0 AOT] compiled=%llu fallback=%llu image=%016llx\n":"[VU AOT] compiled=%llu fallback=%llu image=%016llx\n",(unsigned long long)aotHits,(unsigned long long)aotFallbacks,(unsigned long long)aotHash);
        }
        if (!aotExecuted)
#endif
        {
        if (decoded.iBit)
        {
            execUpper(decoded.upper);
            float immediate = 0.0f;
            std::memcpy(&immediate, &decoded.lower, sizeof(immediate));
            m_state.i = normalizeOperand(immediate);
        }
        else if (decoded.upperVfShadowReg != 0u)
        {
            float oldVf[4]{};
            float upperVf[4]{};
            std::memcpy(oldVf,
                        m_state.vf[decoded.upperVfShadowReg],
                        sizeof(oldVf));
            execUpper(decoded.upper);
            std::memcpy(upperVf,
                        m_state.vf[decoded.upperVfShadowReg],
                        sizeof(upperVf));
            std::memcpy(m_state.vf[decoded.upperVfShadowReg],
                        oldVf,
                        sizeof(oldVf));
            execLower(decoded.lower, vuData, dataSize, gs, memory, decoded.upper);
            std::memcpy(m_state.vf[decoded.upperVfShadowReg],
                        upperVf,
                        sizeof(upperVf));
        }
        else
        {
            execUpper(decoded.upper);
            // VF0 is a constant: an upper instruction aimed at it must not show through to the lower one.
            m_state.vf[0][0] = 0.0f;
            m_state.vf[0][1] = 0.0f;
            m_state.vf[0][2] = 0.0f;
            m_state.vf[0][3] = 1.0f;
            execLower(decoded.lower, vuData, dataSize, gs, memory, decoded.upper);
        }

        }

        m_viBranchBackupValid = false;

        if (hasUpperWrite)
        {
            std::memcpy(newUpperVf, m_state.vf[upperWrite.reg], sizeof(newUpperVf));
            std::memcpy(m_state.vf[upperWrite.reg], oldUpperVf, sizeof(oldUpperVf));
            const uint32_t latency =
                decoded.upperUsage.vfLatency != 0u
                    ? decoded.upperUsage.vfLatency
                    : decoded.upperUsage.latency;
            queueVfWrite(upperWrite.reg, upperWrite.lanes, newUpperVf, latency);
        }
        if (hasDistinctLowerWrite)
        {
            std::memcpy(newLowerVf, m_state.vf[lowerWrite.reg], sizeof(newLowerVf));
            std::memcpy(m_state.vf[lowerWrite.reg], oldLowerVf, sizeof(oldLowerVf));
            const uint32_t latency = decoded.lowerUsage.vfLatency != 0u
                                         ? decoded.lowerUsage.vfLatency
                                         : decoded.lowerUsage.latency;
            queueVfWrite(lowerWrite.reg, lowerWrite.lanes, newLowerVf, latency);
        }
        if (accAcc && decoded.upperUsage.accWrite != 0u)
        {
            std::memcpy(newAcc, m_state.acc, sizeof(newAcc));
            std::memcpy(m_state.acc, oldAcc, sizeof(oldAcc));
            // ACC is forwarded to the next upper instruction. Its arithmetic
            // flags still use the normal four-cycle FMAC timeline.
            queueAccWrite(decoded.upperUsage.accWrite, newAcc,
                          kAccForwardLatency);
        }
        if (accVi && writtenVi != 0u)
        {
            const int32_t newVi = m_state.vi[writtenVi];
            m_state.vi[writtenVi] = oldVi;
            const uint32_t latency =
                decoded.lowerUsage.viLatency != 0u
                    ? decoded.lowerUsage.viLatency
                    : decoded.lowerUsage.latency;
            queueViWrite(writtenVi, newVi, latency);
        }

        markPairWrites(decoded);
        if (writtenVi != 0u && decoded.lowerUsage.delaysNextBranchRead)
            recordViWriteForBranch(writtenVi, oldVi);

        m_state.vf[0][0] = 0.0f;
        m_state.vf[0][1] = 0.0f;
        m_state.vf[0][2] = 0.0f;
        m_state.vf[0][3] = 1.0f;
        m_state.vi[0] = 0;

        uint32_t nextPc = m_state.pc + 8u;
        if (nextPc >= codeSize)
            nextPc = 0u;
        m_state.pc = nextPc;

        if (m_state.branchPending)
        {
            if (m_state.branchDelay == 0u)
            {
                m_state.pc = m_state.branchTarget & microAddressMask();
                m_state.branchPending = false;
            }
            else
            {
                --m_state.branchDelay;
            }
        }

        const bool dHalt = decoded.dBit && m_state.dBitEnabled;
        const bool tHalt = decoded.tBit && m_state.tBitEnabled;
        const bool haltBit = dHalt || tHalt;
        const bool haltBranch = haltBit && decoded.lowerUsage.pipeline == PipelineBranch;

        if (m_state.haltAfterDelaySlot)
        {
            m_state.stoppedByD = m_pendingHaltD;
            m_state.stoppedByT = m_pendingHaltT;
            programEnded = true;
        }
        else if (m_state.ebit)
            programEnded = true;
        else if (haltBit && !haltBranch)
        {
            m_state.stoppedByD = dHalt;
            m_state.stoppedByT = tHalt;
            programEnded = true;
        }
        else if (decoded.eBit)
            m_state.ebit = true;
        else if (haltBranch)
        {
            m_state.haltAfterDelaySlot = true;
            m_pendingHaltD = dHalt;
            m_pendingHaltT = tHalt;
        }

        ++m_executedPairs;
        advanceOneCycle();
        return true;

    };
    while (m_cycle < budgetEnd && !m_stopRequested && !programEnded)
    {
        if (m_state.pc + 8u > codeSize)
            break;
#if defined(BLACK_VU_AOT_AVAILABLE)
        if (aotImage)
        {
            pairFault = false;
            auto runCompiledPair = [&](auto generatedBody) {
                if (m_cycle >= budgetEnd || m_stopRequested || programEnded || m_state.pc + 8u > codeSize)
                    return false;
                if (catalogEnabled)
                    catalogVuPair(aotUnit, m_state.pc);
                const DecodedInstructionPair decoded = getDecodedInstructionPairForPc(vuCode, codeSize, memory, m_state.pc);
                return processPair(decoded, generatedBody);
            };
            auto scheduler = BlackVuAotBundle::makeBlockScheduler<DecodedInstructionPair>(runCompiledPair, aotHost);
            const int blockResult = BlackVuAotBundle::executeBlock(aotHash, aotUnit, scheduler, m_state.pc);
            if (blockResult != 0)
            {
                if (pairFault || programEnded)
                    break;
                continue;
            }
        }
#endif
        pairFault = false;
        if (catalogEnabled)
            catalogVuPair(m_unit == Unit::VU1 ? 1u : 0u, m_state.pc);
        const DecodedInstructionPair decoded = getDecodedInstructionPairForPc(vuCode, codeSize, memory, m_state.pc);
        if (!processPair(decoded, nullptr))
            break;
    }
    if (programEnded)
    {
        flushPipelines();
        m_state.ebit = false;
        m_state.haltAfterDelaySlot = false;
        m_pendingHaltD = false;
        m_pendingHaltT = false;
    }
    m_state.cycles = m_cycle;
    if (useVuRounding && previousRoundingMode != -1)
        std::fesetround(previousRoundingMode);
}
