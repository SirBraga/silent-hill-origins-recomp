#ifndef PS2_VU1_H
#define PS2_VU1_H

#include <array>
#include <cstdint>
#include <memory>
#include <vector>

// PS2X_VU_SIMD: the VU fast paths (recompiled VU1 blocks with values kept in vector registers, the interpreter's
// vector helpers) are available: NEON on ARM64, the same intrinsics on SSE4.1 through neon_sse_shim.h on x86-64.
// They need the VU's floating-point mode: flush-to-zero, denormal operands as zero, round toward zero.
#if defined(__aarch64__) || defined(_M_ARM64)
#define PS2X_VU_SIMD 1
#include <arm_neon.h>
namespace ps2x_fp
{
    using Control = uint64_t;
    inline Control read() { return __builtin_arm_rsr64("FPCR"); }
    inline void write(Control value) { __builtin_arm_wsr64("FPCR", value); }
    inline Control vuMode(Control c) { return c | (uint64_t{3} << 22) | (uint64_t{1} << 24); } // RMode = toward zero, FZ
    inline Control flushMode(Control c) { return c | (uint64_t{1} << 24); }                   // FZ only
}
#elif defined(__SSE4_1__)
#define PS2X_VU_SIMD 1
#include "runtime/neon_sse_shim.h"
namespace ps2x_fp
{
    using Control = uint64_t;
    inline Control read() { return _mm_getcsr(); }
    inline void write(Control value) { _mm_setcsr(uint32_t(value)); }
    inline Control vuMode(Control c) { return c | 0x6000u | 0x8000u | 0x0040u; } // RC = toward zero, FTZ, DAZ
    inline Control flushMode(Control c) { return c | 0x8000u | 0x0040u; }         // FTZ, DAZ
}
#endif

class GS;
class PS2Memory;

struct VU1State
{
    float vf[32][4];
    int32_t vi[16];
    float acc[4];
    float q;
    float p;
    float i;
    uint32_t r;
    uint32_t pc;
    uint32_t mac;
    uint32_t clip;
    uint32_t status;
    uint64_t cycles;
    bool ebit;
    bool haltAfterDelaySlot;
    bool dBitEnabled;
    bool tBitEnabled;
    bool stoppedByD;
    bool stoppedByT;
    uint32_t top;  // VIF TOP visible to XTOP
    uint32_t itop; // VIF ITOP visible to XITOP

    bool branchPending;
    uint32_t branchTarget;
    uint32_t branchDelay;
};

class VU1Interpreter
{
public:
    enum class Unit : uint8_t
    {
        VU0,
        VU1
    };

    explicit VU1Interpreter(Unit unit = Unit::VU1);

    void reset();

    void execute(uint8_t *vuCode, uint32_t codeSize,
                 uint8_t *vuData, uint32_t dataSize,
                 GS &gs, PS2Memory *memory = nullptr,
                 uint32_t startPC = 0, uint32_t top = 0, uint32_t itop = 0,
                 uint32_t maxCycles = 65536);

    void resume(uint8_t *vuCode, uint32_t codeSize,
                uint8_t *vuData, uint32_t dataSize,
                GS &gs, PS2Memory *memory = nullptr,
                uint32_t top = 0, uint32_t itop = 0, uint32_t maxCycles = 65536);

    VU1State &state() { return m_state; }
    const VU1State &state() const { return m_state; }

    // Diagnostics/tests: deliver finished PATH1 packets to a sink instead of
    // the GS, and pin the execution engine regardless of the environment.
    using XgkickSink = void (*)(void *context, const uint8_t *data, uint32_t sizeBytes);
    void setXgkickSink(XgkickSink sink, void *context)
    {
        m_xgkickSink = sink;
        m_xgkickSinkContext = context;
    }
    enum class Engine : uint8_t
    {
        Default,   // chosen by PS2X_VU_* environment switches
        Reference, // per-pair scheduler loop
        Fast,      // per-pair loop with static flag liveness (FastVU timing only)
        Recompiled // statically recompiled images (falls back to Fast for unknown code)
    };

    // Extra bit of stepPair()'s `bits`, a property of the call site and not of the pair: the pair before
    // this one ran right here and is not a branch, so no branch can be pending.
    static constexpr uint32_t PairNoPendingBranch = 1u << 16;

    // Constant facts of one instruction pair, as used by stepPair(). The
    // recompiler emits them as literals; the interpreter reads them from its cache.
    struct PairFacts
    {
        uint32_t lower = 0;
        uint32_t upper = 0;
        uint16_t bits = 0; // PairBit mask
        uint8_t writtenVi = 0;
        uint8_t shadowReg = 0;
        // Register hazards of the pair (see stepPair): the VU stalls until every register a pair
        // reads has left the pipeline of the instruction that writes it.
        //   hazardReads:  4 x 9 bits (reg << 4 | lanes) VF reads, bits 36..39 ACC lanes read,
        //                 bits 40..55 VI registers read.
        //   hazardWrites: 2 x 12 bits (latency << 9 | reg << 4 | lanes) VF writes (upper, lower),
        //                 bits 24..27 ACC lanes written, bits 28..30 latency of the VI write.
        uint64_t hazardReads = 0;
        uint32_t hazardWrites = 0;
    };
    enum PairBit : uint16_t
    {
        PairFlagsDead = 1u << 0,    // FMAC MAC/status results of the upper op are never observed
        PairStall = 1u << 1,        // lower op may wait for FDIV/EFU/XGKICK
        PairDelaysBranch = 1u << 2, // VI write is hidden from a branch in the next pair
        PairReserved = 1u << 3,
        PairEndBits = 1u << 4,      // E, D or T bit set
        PairWaitQ = 1u << 5,
        PairFdiv = 1u << 6,
        PairWaitP = 1u << 7,
        PairXgkick = 1u << 8,
        PairIBit = 1u << 9,
        PairEBit = 1u << 10,
        PairDBit = 1u << 11,
        PairTBit = 1u << 12,
        PairBranch = 1u << 13,
        PairEfu = 1u << 14,         // lower op uses the EFU, which runs one operation at a time
        PairIndirect = 1u << 15     // JR/JALR: the pairs that run next are not known statically
    };
    // Decodes a whole code image exactly as the runtime does (generator input).
    // programAddr/programSize (bytes, size 0 = the whole image): the part of the image that is known;
    // a branch that leaves it is treated like an indirect jump by the hazard analysis.
    static void describeImage(Unit unit, const uint8_t *code, uint32_t codeSize, PairFacts *facts, uint32_t maxPairs,
                              uint32_t programAddr = 0, uint32_t programSize = 0);
    // Hash that identifies a code image for recompiled-code lookup.
    static uint64_t imageHash(const uint8_t *code, uint32_t codeSize);
    enum class StepResult : uint8_t
    {
        Continue,
        Stop,      // budget exhausted, reserved instruction or stop request
        Ended,     // program end (E bit, D/T halt)
        NotHandled // recompiled image has no code for the current state
    };
    void setEngine(Engine engine) { m_engine = engine; }
    uint64_t executedPairs() const { return m_executedPairs; }
    // Start of a synchronous microprogram call whose caller fills in the whole register state next (VU0's
    // VCALLMS): like reset(), but when the previous call left nothing in flight the cycle counter simply
    // keeps running, so the pipelines and ready-time tables need no clearing.
    void beginMicroCall();
    // execute() for a VU0 microprogram the EE calls (VCALLMS): the same run, entered without the general
    // set-up when nothing needs it (recompiled image at hand, flags computed on demand, no tool attached), which
    // is most of what such a short program costs. Anything else goes through execute() itself.
    void executeMicroCall(uint8_t *vuCode, uint32_t codeSize,
                          uint8_t *vuData, uint32_t dataSize,
                          GS &gs, PS2Memory *memory,
                          uint32_t startPC, uint32_t top, uint32_t itop,
                          uint32_t maxCycles);
    // The game's EE code never reads VU0's status/MAC/clip registers: lets VU0 microprograms compute their
    // flags on demand (and run as direct blocks), like VU1's. Set before any VU0 code is analysed.
    static void setVu0FlagsUnobserved(bool unobserved);
    uint64_t directPairs() const { return m_directPairs; } // of those, pairs run by directly emitted blocks
    // Tests/tools: the reference engine marks every executed pair (index pc/8).
    void setCoverageMap(uint8_t *pairsExecuted) { m_coverageMap = pairsExecuted; }
    // Tests: install a captured register state with idle pipelines, as at a
    // resume() that follows a completed program.
    void prepareReplay(const VU1State &state)
    {
        m_state = state;
        resetScheduler();
    }
    // Tests without a PS2Memory: identifies the code image so decoded pairs
    // can be cached (the key must change whenever the bytes change).
    void setExternalCodeKey(uint64_t key)
    {
        m_externalCodeKey = key;
        m_hasExternalCodeKey = true;
    }

private:
    void resetScheduler();
    enum Pipeline : uint8_t
    {
        PipelineNone = 0,
        PipelineFmac,
        PipelineLsu,
        PipelineFdiv,
        PipelineEfu,
        PipelineIalu,
        PipelineBranch,
        PipelineXgkick
    };

    struct VfAccess
    {
        uint8_t reg = 0;
        uint8_t lanes = 0;
    };

    struct InstructionUsage
    {
        std::array<VfAccess, 2> vfRead{};
        VfAccess vfWrite{};
        uint8_t vfReadCount = 0;
        uint16_t viRead = 0;
        uint16_t viWrite = 0;
        uint8_t accRead = 0;
        uint8_t accWrite = 0;
        uint8_t latency = 0;
        uint8_t vfLatency = 0;
        uint8_t viLatency = 0;
        Pipeline pipeline = PipelineNone;
        bool waitQ = false;
        bool waitP = false;
        bool readsClip = false;
        bool writesClip = false;
        bool delaysNextBranchRead = false;
        bool reserved = false;
    };

    struct DecodedInstructionPair
    {
        uint32_t lower = 0;
        uint32_t upper = 0;
        InstructionUsage lowerUsage{};
        InstructionUsage upperUsage{};
        bool iBit = false;
        bool eBit = false;
        bool mBit = false;
        bool dBit = false;
        bool tBit = false;
        uint8_t upperVfShadowReg = 0;
        uint8_t suppressedLowerVf = 0;
    };

    struct FlagPipelineEntry
    {
        uint64_t readyCycle = 0;
        uint64_t issueCycle = 0;
        uint32_t mac = 0;
        uint32_t status = 0;
        uint32_t extraSticky = 0;
        uint32_t clip = 0;
        bool valid = false;
        bool writesMac = false;
        bool writesStatus = false;
        bool writesSticky = false;
        bool writesClip = false;
    };

    struct ScalarPipelineEntry
    {
        uint64_t readyCycle = 0;
        float value = 0.0f;
        uint32_t statusDi = 0;
        bool valid = false;
    };

    struct PendingStore
    {
        uint64_t readyCycle = 0;
        uint32_t address = 0;
        std::array<uint32_t, 4> words{};
        uint8_t laneMask = 0;
        bool valid = false;
    };

    struct PendingVfWrite
    {
        uint64_t readyCycle = 0;
        uint64_t sequence = 0;
        std::array<float, 4> value{};
        uint8_t reg = 0;
        uint8_t laneMask = 0;
        bool valid = false;
    };

    struct PendingViWrite
    {
        uint64_t readyCycle = 0;
        uint64_t sequence = 0;
        int32_t value = 0;
        uint8_t reg = 0;
        bool valid = false;
    };

    struct PendingAccWrite
    {
        uint64_t readyCycle = 0;
        uint64_t sequence = 0;
        std::array<float, 4> value{};
        uint8_t laneMask = 0;
        bool valid = false;
    };

    struct XgkickPipeline
    {
        static constexpr uint32_t kBufferSize = 0x10000u;
        std::array<uint8_t, kBufferSize> packet{};
        uint32_t sourceAddress = 0;
        uint32_t totalBytes = 0;
        uint32_t copiedBytes = 0;
        uint32_t currentTagEnd = 0;
        uint32_t cycleCredit = 0;
        uint64_t issueCycle = 0;
        uint64_t syncedCycle = 0; // progressXgkick() has run for every cycle up to this one
        bool active = false;
        bool currentTagEop = false;
    };

    static constexpr uint32_t kFmacLatency = 4u;
    static constexpr uint32_t kAccForwardLatency = 1u;
    static constexpr uint32_t kMaxFlagEntries = 8u;
    static constexpr uint32_t kMaxPendingStores = 8u;
    static constexpr uint32_t kMaxPendingVfWrites = 16u;
    static constexpr uint32_t kMaxPendingViWrites = 8u;
    static constexpr uint32_t kMaxPendingAccWrites = 8u;
    static constexpr uint32_t kMaxDecodedPairs = 0x4000u / 8u;

    Unit m_unit;
    VU1State m_state;
    struct ImageAnalysis;
    DecodedInstructionPair *m_decodedCodeCache = nullptr; // -> m_analysis
    const uint8_t *m_cachedVuCode = nullptr;
    const PS2Memory *m_cachedMemory = nullptr;
    uint32_t m_cachedCodeSize = 0;
    uint64_t m_cachedCodeGeneration = 0;
    bool m_decodedCodeCacheValid = false;

    std::array<FlagPipelineEntry, kMaxFlagEntries> m_flagPipeline{};
    // Fast/recompiled engines, images whose status register nobody reads: an FMAC op only records its raw
    // result here and the MAC/status flags are derived when something looks at them (FMAND & co., or the
    // end of a run), from the newest record that has left the pipeline by then. Most results are never
    // looked at, and the flag pipeline no longer has anything to commit cycle by cycle.
    enum : uint8_t { FmacAdd, FmacSub, FmacMul };
    struct LazyFlags
    {
        float x[4], y[4]; // the result is x (kind) y
        uint64_t readyCycle;
        uint8_t dest;
        uint8_t kind;
        bool noStatus; // an FSSET in the same pair overrides the status write
    };
    // The fast engines run their arithmetic with the FPU in flush-to-zero mode (see execUpperInline()).
#if defined(PS2X_VU_SIMD)
    static constexpr bool kFlushToZero = true;
#else
    static constexpr bool kFlushToZero = false;
#endif
    static void fzLaneFlags(const float *x, const float *y, uint8_t kind, uint8_t dest, uint8_t laneFlags[4], bool fzActive = false);
    bool m_fzActive = false; // inside runFast(): FPCR.FZ set, rounding toward zero
    void queueFzFlags(const float *x, const float *y, uint8_t kind, uint8_t dest);
    void fmacI(bool flagsDead, bool fz, uint8_t kind, float *dst, const float *x, const float *y, uint8_t dest, bool toAcc);
    std::array<LazyFlags, 8> m_lazy{};
    uint32_t m_lazyCount = 0, m_lazyApplied = 0; // records issued / records already folded into m_state
    bool m_lazyFlags = false;
    void pushLazyFlags(const float *x, const float *y, uint8_t kind, uint8_t dest);
    // Clip flags in the same mode: CLIP/FCSET record the new value of the clip register and when it leaves
    // the pipeline; FCEQ/FCAND/FCOR/FCGET (and the end of a run) take the newest one that has.
    struct LazyClip
    {
        uint64_t readyCycle;
        uint32_t clip;
    };
    std::array<LazyClip, 8> m_lazyClip{};
    uint32_t m_lazyClipCount = 0, m_lazyClipApplied = 0;
    void resolveLazyClip();
    void resolveLazyClipSlow();
    void resolveLazyFlags();
    void resolveLazyFlagsSlow();
    void drainLazyFlags();
    ScalarPipelineEntry m_fdiv{};
    std::array<ScalarPipelineEntry, 2> m_efu{};
    std::array<PendingStore, kMaxPendingStores> m_storePipeline{};
    std::array<PendingVfWrite, kMaxPendingVfWrites> m_vfWritePipeline{};
    std::array<PendingViWrite, kMaxPendingViWrites> m_viWritePipeline{};
    std::array<PendingAccWrite, kMaxPendingAccWrites> m_accWritePipeline{};
    uint32_t m_vfPending = 0, m_viPending = 0, m_accPending = 0;
    uint32_t m_flagPending = 0, m_storePending = 0;
    // Earliest cycle at which a queued result may become visible.
    uint64_t m_nextCommitCycle = 0;
    XgkickPipeline m_xgkick{};
    std::array<std::array<uint64_t, 4>, 32> m_vfReady{};
    std::array<uint64_t, 16> m_viReady{};
    std::array<uint64_t, 4> m_accReady{};
    std::array<std::array<uint64_t, 4>, 32> m_vfLatestWrite{};
    std::array<uint64_t, 16> m_viLatestWrite{};
    std::array<uint64_t, 4> m_accLatestWrite{};

    uint64_t m_cycle = 0;
    uint64_t m_nextWriteSequence = 0;
    uint64_t m_efuResourceReady = 0;
    uint32_t m_workingClip = 0;
    uint32_t m_currentUpperInstruction = 0;
    int32_t m_viBranchBackupValue = 0;
    uint8_t m_viBranchBackupReg = 0;
    bool m_viBranchBackupValid = false;
    uint8_t *m_activeVuData = nullptr;
    uint32_t m_activeVuDataSize = 0;
    GS *m_activeGs = nullptr;
    PS2Memory *m_activeMemory = nullptr;
    bool m_stopRequested = false;
    bool m_pendingHaltD = false;
    bool m_pendingHaltT = false;
    XgkickSink m_xgkickSink = nullptr;
    void *m_xgkickSinkContext = nullptr;
    Engine m_engine = Engine::Default;
    XgkickSink m_xgkickTap = nullptr; // observes packets without replacing delivery
    void *m_xgkickTapContext = nullptr;
    void runVerified(uint8_t *vuCode, uint32_t codeSize,
                     uint8_t *vuData, uint32_t dataSize,
                     GS &gs, PS2Memory *memory, uint32_t maxCycles, bool resumed);
    uint64_t m_executedPairs = 0;
    uint8_t *m_coverageMap = nullptr;
    uint64_t m_externalCodeKey = 0;
    bool m_hasExternalCodeKey = false;

    void run(uint8_t *vuCode, uint32_t codeSize,
             uint8_t *vuData, uint32_t dataSize,
             GS &gs, PS2Memory *memory, uint32_t maxCycles);
    // Fast/recompiled engines (FastVU timing): same per-pair semantics as
    // run(), driven by facts precomputed with the decoded-pair cache.
    friend struct VuRecompiled;
    using RecompiledImage = StepResult (*)(VU1Interpreter &vu, uint32_t codeSize, uint8_t *vuData, uint32_t dataSize,
                                           GS &gs, PS2Memory *memory, uint64_t budgetEnd);
    // Everything derived from the bytes of a code image (decoded pairs, pair facts, recompiled code that
    // matches it). The game re-uploads the same few microprograms all the time, so the result is kept per
    // image content and an upload of known code only costs its hash.
    struct ImageAnalysis
    {
        uint64_t hash = 0;
        uint64_t lastUse = 0;
        uint32_t codeSize = 0;
        uint32_t knownPairBegin = 0, knownPairEnd = 0;
        bool built = false;
        bool resolved = false;  // image/owners looked up
        bool ownersAny = false; // some pair belongs to a recompiled microprogram
        bool statusUnobserved = false;
        RecompiledImage image = nullptr;
        std::array<DecodedInstructionPair, kMaxDecodedPairs> decoded{};
        std::array<uint16_t, kMaxDecodedPairs> pairBits{};
        std::array<uint8_t, kMaxDecodedPairs> writtenVi{};
        std::array<uint64_t, kMaxDecodedPairs> hazardReads{};
        std::array<uint32_t, kMaxDecodedPairs> hazardWrites{};
        std::array<RecompiledImage, kMaxDecodedPairs> owners{};
    };
    std::vector<std::unique_ptr<ImageAnalysis>> m_analyses;
    ImageAnalysis *m_analysis = nullptr;
    uint64_t m_analysisUse = 0;
    void selectAnalysis(ImageAnalysis *analysis);
    // Entry condition of the directly emitted blocks of the recompiled code (vu1_direct_emit.inl): VU1's
    // own data memory, flags on demand. PS2X_VU_NO_DIRECT=1 disables them (diagnostic).
    bool directBlocksUsable(const uint8_t *vuData, uint32_t dataSize) const;
    uint64_t m_directPairs = 0; // pairs executed inside direct blocks (PS2X_VU_STATS=1 prints the share)
    // The wait of a pair that may stall on FDIV/EFU/XGKICK (stepPair()'s own, out of line); false when the
    // cycle budget ran out.
    bool waitPairStall(uint32_t bits, uint64_t budgetEnd);
    // Bisecting a divergence of the direct blocks with ps2x_vu1_trace_replay:
    //   PS2X_VU_DIRECT_RANGE=<lo>-<hi> (hex PCs)  only blocks that start in [lo, hi) run directly
    //   PS2X_VU_DIRECT_LIMIT=<n>                  only the first n block executions run directly; the
    //                                             n-th one is reported (PC and code image)
    bool m_directDebug = false;
    uint32_t m_directLow = 0, m_directSpan = 0xFFFFFFFFu;
    uint64_t m_directLimit = ~uint64_t{0}, m_directCount = 0;
    bool directBlockAllowedSlow(uint32_t pc);
    bool directBlockAllowed(uint32_t pc)
    {
        return __builtin_expect(!m_directDebug, 1) || directBlockAllowedSlow(pc);
    }
    uint16_t *m_pairBits = nullptr;
    uint8_t *m_fastWrittenVi = nullptr;
    uint64_t *m_fastHazardReads = nullptr;
    uint32_t *m_fastHazardWrites = nullptr;
    // Pairs still to be checked against the full register usage after an indirect jump (their
    // static hazard masks assume the predecessors found in the code).
    uint8_t m_hazardUnknown = 0;
    uint32_t m_knownPairBegin = 0, m_knownPairEnd = 0xFFFFFFFFu;
    void pruneFastHazards(uint32_t pairCount);
    bool waitHazardsOfPair(uint32_t pc, uint64_t budgetEnd);
    bool m_fmacFlagsDead = false;
    bool ensureDecodedCodeCache(const uint8_t *vuCode, uint32_t codeSize, PS2Memory *memory);
    void analyzeFastPairs(uint32_t pairCount);
    PairFacts pairFactsOf(const DecodedInstructionPair &decoded) const;
    void runFast(uint8_t *vuCode, uint32_t codeSize,
                 uint8_t *vuData, uint32_t dataSize,
                 GS &gs, PS2Memory *memory, uint32_t maxCycles, bool recompiled);
    StepResult stepPair(uint32_t pc, uint32_t lower, uint32_t upper, uint32_t bits, uint8_t writtenVi, uint8_t shadowReg,
                        uint64_t hazardReads, uint32_t hazardWrites,
                        bool mayEnd, uint32_t codeSize, uint8_t *vuData, uint32_t dataSize,
                        GS &gs, PS2Memory *memory, uint64_t budgetEnd);
    // stepPair() for callers outside ps2_vu1_core.cpp (the generated code, split over several files so that it
    // compiles in parallel): the same, as an ordinary call.
    StepResult stepPairCall(uint32_t pc, uint32_t lower, uint32_t upper, uint32_t bits, uint8_t writtenVi, uint8_t shadowReg,
                            uint64_t hazardReads, uint32_t hazardWrites,
                            bool mayEnd, uint32_t codeSize, uint8_t *vuData, uint32_t dataSize,
                            GS &gs, PS2Memory *memory, uint64_t budgetEnd);
    void execUpperInline(uint32_t instr, bool flagsDead, bool fz);
    void execLowerInline(uint32_t instr, uint8_t *vuData, uint32_t dataSize, GS &gs, PS2Memory *memory, uint32_t upperInstr, bool directStores);

    InstructionUsage decodeUpperUsage(uint32_t upper) const;
    InstructionUsage decodeLowerUsage(uint32_t lower) const;
    static void addVfRead(InstructionUsage &usage, uint8_t reg, uint8_t lanes);
    static void addVfWrite(InstructionUsage &usage, uint8_t reg, uint8_t lanes);
    static uint8_t vfReadLanes(const InstructionUsage &usage, uint8_t reg);
    DecodedInstructionPair decodeInstructionPair(const uint8_t *vuCode, uint32_t pc) const;
    DecodedInstructionPair getDecodedInstructionPairForPc(const uint8_t *vuCode, uint32_t codeSize, PS2Memory *memory, uint32_t pc);
    void rebuildDecodedCodeCache(const uint8_t *vuCode, uint32_t codeSize, const PS2Memory *memory, uint64_t generation);

    void execUpper(uint32_t instr);
    void execLower(uint32_t instr, uint8_t *vuData, uint32_t dataSize, GS &gs, PS2Memory *memory, uint32_t upperInstr);

    void applyDest(float *dst, const float *result, uint8_t dest);
    void applyDestAcc(const float *result, uint8_t dest);
    void applyFmacDest(float *dst, float *result, uint8_t dest);
    void applyFmacDestAcc(float *result, uint8_t dest);
    void normalizeFmacResult(float *result, uint8_t dest, uint8_t laneFlags[4]);
    bool calculateFmacExactResult(uint32_t component, long double &result) const;
    uint8_t normalizeFmacExactResult(float &value, long double exactResult) const;
    uint32_t calculateFmacProductSticky(uint8_t dest) const;
    void updateFmacFlags(const uint8_t laneFlags[4], uint8_t dest, uint32_t extraSticky);
    void queueFsset(uint16_t immediate);
    void queueClip(uint32_t clip);
    void queueFcset(uint32_t clip);
    void queueQ(float value, uint32_t latency, uint32_t statusDi);
    void queueP(float value, uint32_t latency);
    void queueEsin(float value);
    void queueStore(uint32_t address, const uint32_t words[4], uint8_t laneMask);
    void queueVfWrite(uint8_t reg, uint8_t laneMask, const float value[4], uint32_t latency);
    void queueViWrite(uint8_t reg, int32_t value, uint32_t latency);
    void queueAccWrite(uint8_t laneMask, const float value[4], uint32_t latency);
    void startXgkick(uint32_t qwordAddress);

    void commitReadyPipelines();
    void advanceOneCycle();
    void advanceTo(uint64_t targetCycle);
    void flushPipelines();
    void progressXgkick(uint64_t cycles = 1u);
    void syncXgkick();
    void syncXgkickSlow();
    void finishXgkick();
    uint64_t calculatePairReadyCycle(const DecodedInstructionPair &decoded) const;
    void markPairWrites(const DecodedInstructionPair &decoded);
    bool pipelinesPending() const;
    bool pipelinesPendingExceptXgkick() const;

    float normalizeOperand(float value) const;
    float normalizeResult(float value, uint32_t &laneFlags) const;
    uint32_t microAddressMask() const;
    int32_t readBranchVi(uint8_t reg) const;
    void recordViWriteForBranch(uint8_t reg, int32_t oldValue);
    void reportReservedInstruction(bool upper, uint32_t instruction);
    float broadcast(const float *vf, uint8_t bc);
};

#endif
