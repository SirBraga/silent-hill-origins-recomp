#include "ps2_thread_cpu.h"
#include "ps2_wait.h"
#include <cfenv>
#include <string_view>
#include "ps2_runtime.h"
#include "ps2x/iop/iop_audio_out.h"
#include "ps2_log.h"
#include "ps2_stubs.h"
#include "ps2_syscalls.h"
#include "game_overrides.h"
#include "ps2_runtime_macros.h"
#include "runtime/gs/gs_frontend.h"
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
#include "runtime/gs/gs_sdl_gpu_raster.h"
#endif
#include "runtime/ee_scheduler.h"
#include "ThreadNaming.h"
#include "Kernel/Stubs/Audio.h"
#include "Kernel/Stubs/GS.h"
#include "Kernel/Stubs/MPEG.h"
#include "Kernel/Stubs/SIF.h"
#include "runtime/ps2_wait_stats.h"
#include "ps2_host_backend.h"
#include "ps2_iop_host.h"
#include "ps2x/iop/iop_subsystem.h"

#include <iostream>
#include <condition_variable>
#include <mutex>
#include <thread>
#include <atomic>
#include <chrono>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <algorithm>
#include <array>
#include <cstring>
#include <cfenv>
#include <limits>
#include <chrono>
#include <atomic>
#include <thread>
#include <unordered_map>
#include <sstream>

namespace ps2_stubs
{
    void resetSifState();
}

#define ELF_MAGIC 0x464C457F // "\x7FELF" in little endian
#define ET_EXEC 2            // Executable file
#define EM_MIPS 8            // MIPS architecture
#define PT_LOAD 1            // Loadable segment

static constexpr int FB_WIDTH = 640;
static constexpr int FB_HEIGHT = 512;
static constexpr int DEFAULT_DISPLAY_HEIGHT = 448;
static constexpr uint32_t DEFAULT_FB_SIZE = FB_WIDTH * FB_HEIGHT * 4;
// PS2X_GS_UPSCALE=2: paraLLEl-GS super-samples (4 samples per pixel) and the presentation texture
// holds its high resolution scanout. PS2X_DISPLAY_ASPECT=<w/h, e.g. 1.7778> stretches the picture to that
// shape instead of the frame buffer's own (for the game's 16:9 mode). PS2X_WINDOW_SIZE=<w>x<h>.
static int hostFbScale()
{
    static const int scale = []
    {
        const char *v = std::getenv("PS2X_GS_UPSCALE");
        return (v && std::atoi(v) >= 2) ? 4 : 1; // the super-sampled scanout is 4x the native size per axis
    }();
    return scale;
}
static float hostDisplayAspect()
{
    static const float aspect = []
    {
        const char *v = std::getenv("PS2X_DISPLAY_ASPECT");
        const float a = v ? static_cast<float>(std::atof(v)) : 0.0f;
        return (a > 0.5f && a < 4.0f) ? a : 0.0f;
    }();
    return aspect;
}
static constexpr uint32_t DEFAULT_FB_ADDR = (PS2_RAM_SIZE - DEFAULT_FB_SIZE - 0x10000u);
#if defined(PLATFORM_VITA)
static constexpr int HOST_WINDOW_WIDTH = 960;
static constexpr int HOST_WINDOW_HEIGHT = 544;
#else
static constexpr int HOST_WINDOW_WIDTH = FB_WIDTH;
static constexpr int HOST_WINDOW_HEIGHT = DEFAULT_DISPLAY_HEIGHT;
#endif
struct ElfHeader
{
    uint32_t magic;
    uint8_t elf_class;
    uint8_t endianness;
    uint8_t version;
    uint8_t os_abi;
    uint8_t abi_version;
    uint8_t padding[7];
    uint16_t type;
    uint16_t machine;
    uint32_t version2;
    uint32_t entry;
    uint32_t phoff;
    uint32_t shoff;
    uint32_t flags;
    uint16_t ehsize;
    uint16_t phentsize;
    uint16_t phnum;
    uint16_t shentsize;
    uint16_t shnum;
    uint16_t shstrndx;
};

struct ProgramHeader
{
    uint32_t type;
    uint32_t offset;
    uint32_t vaddr;
    uint32_t paddr;
    uint32_t filesz;
    uint32_t memsz;
    uint32_t flags;
    uint32_t align;
};

namespace
{
    // Generated functions share one guest context across nested native calls.
    // PC equality cannot distinguish a recursive continuation from an actual return.
    // A transfer must unwind every enclosing native call before the EE resumes it.
    constexpr uint32_t kGuestHeapDefaultBase = 0x00100000u;
    constexpr uint32_t kGuestHeapDefaultAlignment = 16u;
    constexpr uint32_t kGuestHeapSafetyPad = 0x1000u;
    constexpr uint32_t kGuestHeapHardLimit = 0x01F00000u;
    constexpr uint32_t kRuntimeScratchArenaSize = 0x00040000u; // 256 KB, see runtimeScratchAlloc

    constexpr uint32_t COP0_CAUSE_EXCCODE_MASK = 0x0000007Cu;
    constexpr uint32_t COP0_CAUSE_BD = 0x80000000u;
    constexpr uint32_t COP0_STATUS_EXL = 0x00000002u;
    constexpr uint32_t COP0_STATUS_BEV = 0x00400000u;
    constexpr uint32_t EXCEPTION_VECTOR_GENERAL = 0x80000080u;
    constexpr uint32_t EXCEPTION_VECTOR_TLB_REFILL = 0x80000000u;
    constexpr uint32_t EXCEPTION_VECTOR_BOOT = 0xBFC00200u;

    struct DispatchHistory
    {
        std::array<uint32_t, 64> pcs{};
        uint32_t next = 0u;
        bool wrapped = false;
    };

    DispatchHistory g_dispatchHistory; // of the EE executor thread, the only one that dispatches guest code

    bool computeFileCrc32(const std::string &path, uint32_t &crcOut)
    {
        std::ifstream file(path, std::ios::binary);
        if (!file.is_open())
        {
            return false;
        }

        static const std::array<uint32_t, 256> table = []
        {
            std::array<uint32_t, 256> values{};
            for (uint32_t i = 0; i < values.size(); ++i)
            {
                uint32_t value = i;
                for (uint32_t bit = 0; bit < 8; ++bit)
                {
                    value = (value & 1u) ? (0xEDB88320u ^ (value >> 1u)) : (value >> 1u);
                }
                values[i] = value;
            }
            return values;
        }();

        uint32_t crc = 0xFFFFFFFFu;
        std::array<uint8_t, 16 * 1024> buffer{};
        while (file.good())
        {
            file.read(reinterpret_cast<char *>(buffer.data()), static_cast<std::streamsize>(buffer.size()));
            const std::streamsize count = file.gcount();
            for (std::streamsize i = 0; i < count; ++i)
            {
                crc = table[(crc ^ buffer[static_cast<size_t>(i)]) & 0xFFu] ^ (crc >> 8u);
            }
        }
        if (file.bad())
        {
            return false;
        }
        crcOut = ~crc;
        return true;
    }

    void pushDispatchPc(uint32_t pc)
    {
        // PS2X_DISPATCH_HISTORY=1: keep the last 64 dispatch targets of each thread for crash reports. Off by
        // default: it is a thread-local access on every guest call.
        static const bool enabled = std::getenv("PS2X_DISPATCH_HISTORY") != nullptr;
        if (!enabled)
            return;
        DispatchHistory &h = g_dispatchHistory;
        h.pcs[h.next] = pc;
        h.next = (h.next + 1u) % static_cast<uint32_t>(h.pcs.size());
        if (h.next == 0u)
        {
            h.wrapped = true;
        }
    }

    std::string formatDispatchHistory()
    {
        const DispatchHistory &h = g_dispatchHistory;
        const uint32_t count = h.wrapped ? static_cast<uint32_t>(h.pcs.size()) : h.next;
        if (count == 0u)
        {
            return "(empty)";
        }

        std::ostringstream oss;
        bool first = true;
        for (uint32_t i = 0u; i < count; ++i)
        {
            const uint32_t idx = (h.next + h.pcs.size() - count + i) % static_cast<uint32_t>(h.pcs.size());
            if (!first)
            {
                oss << " -> ";
            }
            first = false;
            oss << "0x" << std::hex << h.pcs[idx];
        }
        return oss.str();
    }

    uint32_t selectExceptionVector(const R5900Context *ctx, bool tlbRefill)
    {
        if (ctx->cop0_status & COP0_STATUS_BEV)
        {
            return EXCEPTION_VECTOR_BOOT;
        }
        return tlbRefill ? EXCEPTION_VECTOR_TLB_REFILL : EXCEPTION_VECTOR_GENERAL;
    }

    void seedVu0IdleSuccess(R5900Context *ctx)
    {
        if (!ctx)
        {
            return;
        }

        ctx->vu0_clip_flags = 0;
        ctx->vu0_clip_flags2 = 0;
        ctx->vu0_mac_flags = 0;
        ctx->vu0_status = 0;
        ctx->vu0_q = 1.0f;
        ctx->vu0_r = _mm_castsi128_ps(_mm_set1_epi32(0x3F800000));
        ctx->vu0_vpu_stat = 0;
        ctx->vu0_vpu_stat2 = 0;
    }

    void copyVu0ContextToState(const R5900Context *ctx, VU1State &state)
    {
        // Every field is written below or by VU1Interpreter::execute() (which this is only followed by), so the
        // state is not cleared first: this runs on every microprogram call, and those are short.
        static_assert(sizeof(ctx->vu0_vf) == sizeof(state.vf), "VU0 register file layout");
        std::memcpy(state.vf, ctx->vu0_vf, sizeof(state.vf));
        for (uint32_t i = 0; i < 16u; ++i)
            state.vi[i] = static_cast<int16_t>(ctx->vi[i]);
        state.cycles = 0;
        state.top = 0;

        _mm_storeu_ps(state.acc, ctx->vu0_acc);
        state.q = ctx->vu0_q;
        state.p = ctx->vu0_p;
        state.i = ctx->vu0_i;
        state.r = 0x3F800000u | (static_cast<uint32_t>(_mm_cvtsi128_si32(_mm_castps_si128(ctx->vu0_r))) & 0x007FFFFFu);
        state.pc = ctx->vu0_pc;
        state.mac = ctx->vu0_mac_flags;
        state.clip = ctx->vu0_clip_flags;
        state.status = ctx->vu0_status;
        state.itop = ctx->vu0_itop;
        state.dBitEnabled = (ctx->vu0_fbrst & (1u << 2)) != 0u;
        state.tBitEnabled = (ctx->vu0_fbrst & (1u << 3)) != 0u;

        state.vf[0][0] = 0.0f;
        state.vf[0][1] = 0.0f;
        state.vf[0][2] = 0.0f;
        state.vf[0][3] = 1.0f;
        state.vi[0] = 0;
    }

    void copyVu0StateToContext(const VU1State &state, R5900Context *ctx)
    {
        std::memcpy(ctx->vu0_vf, state.vf, sizeof(state.vf));
        for (uint32_t i = 0; i < 16u; ++i)
            ctx->vi[i] = static_cast<uint16_t>(state.vi[i]);

        ctx->vu0_acc = _mm_loadu_ps(state.acc);
        ctx->vu0_q = state.q;
        ctx->vu0_p = state.p;
        ctx->vu0_i = state.i;
        ctx->vu0_r = _mm_castsi128_ps(_mm_set1_epi32(static_cast<int32_t>(state.r)));
        ctx->vu0_mac_flags = state.mac;
        ctx->vu0_clip_flags = state.clip;
        ctx->vu0_clip_flags2 = state.clip;
        ctx->vu0_status = static_cast<uint16_t>(state.status);
        ctx->vu0_itop = state.itop;
        ctx->vu0_pc = state.pc;
        ctx->vu0_tpc = state.pc;
        ctx->vu0_vpu_stat = (ctx->vu0_vpu_stat & 0xFF00u) | (state.stoppedByD ? (1u << 1) : 0u) | (state.stoppedByT ? (1u << 2) : 0u);
        ctx->vu0_vpu_stat2 = 0;

        ctx->vu0_vf[0] = _mm_set_ps(1.0f, 0.0f, 0.0f, 0.0f);
        ctx->vi[0] = 0;
    }

    void raiseCop0Exception(R5900Context *ctx, uint32_t exceptionCode, bool tlbRefill = false)
    {
        if (ctx->in_delay_slot)
        {
            ctx->cop0_epc = ctx->branch_pc;
            ctx->cop0_cause = (ctx->cop0_cause & ~COP0_CAUSE_EXCCODE_MASK) |
                              ((exceptionCode << 2) & COP0_CAUSE_EXCCODE_MASK) |
                              COP0_CAUSE_BD;
        }
        else
        {
            ctx->cop0_epc = ctx->pc;
            ctx->cop0_cause = (ctx->cop0_cause & ~(COP0_CAUSE_EXCCODE_MASK | COP0_CAUSE_BD)) |
                              ((exceptionCode << 2) & COP0_CAUSE_EXCCODE_MASK);
        }

        ctx->cop0_status |= COP0_STATUS_EXL;
        ctx->pc = selectExceptionVector(ctx, tlbRefill);
        ctx->in_delay_slot = false;
    }

    std::filesystem::path normalizeAbsolutePath(const std::filesystem::path &path)
    {
        if (path.empty())
        {
            return {};
        }

#if defined(PLATFORM_VITA)
        const std::string generic = path.generic_string();
        const std::size_t colon = generic.find(':');
        if (colon != std::string::npos && colon != 0u)
        {
            const std::size_t slash = generic.find_first_of("/\\");
            if (slash == std::string::npos || colon < slash)
            {
                return path.lexically_normal();
            }
        }
#endif

        std::error_code ec;
        const std::filesystem::path absolute = std::filesystem::absolute(path, ec);
        if (ec)
        {
            return path.lexically_normal();
        }
        return absolute.lexically_normal();
    }

    PS2Runtime::IoPaths &runtimeIoPaths()
    {
        static PS2Runtime::IoPaths paths = []()
        {
            PS2Runtime::IoPaths defaults;
            std::error_code ec;
            const std::filesystem::path cwd = std::filesystem::current_path(ec);
            defaults.elfDirectory = ec ? std::filesystem::path(".") : cwd.lexically_normal();
            defaults.hostRoot = defaults.elfDirectory;
            defaults.cdRoot = defaults.elfDirectory;
            defaults.mcRoot = defaults.elfDirectory / "mc0";
            return defaults;
        }();

        return paths;
    }

    std::string readGuestPrintableString(const uint8_t *rdram, uint32_t addr, size_t maxLen)
    {
        std::string out;
        if (!rdram || maxLen == 0)
        {
            return out;
        }

        out.reserve(std::min<size_t>(maxLen, 64));
        for (size_t i = 0; i < maxLen; ++i)
        {
            const char ch = static_cast<char>(rdram[(addr + static_cast<uint32_t>(i)) & PS2_RAM_MASK]);
            if (ch == '\0')
            {
                break;
            }
            if (ch >= 0x20 && ch < 0x7F)
            {
                out.push_back(ch);
            }
            else
            {
                out.push_back('.');
            }
        }
        return out;
    }
}

static void UploadFrame(Texture2D &tex, PS2Runtime *rt, uint32_t &outWidth, uint32_t &outHeight)
{
    static uint64_t s_lastPresentationTick = std::numeric_limits<uint64_t>::max();
    static bool s_hasLatchedInitialFrame = false;
    static uint32_t s_lastDisplayFbp = std::numeric_limits<uint32_t>::max();
    static uint32_t s_lastSourceFbp = std::numeric_limits<uint32_t>::max();
    static bool s_lastPreferred = false;
    static uint32_t s_lastWidth = 0u;
    static uint32_t s_lastHeight = 0u;
    static bool s_hasUploadedFrame = false;
    static std::vector<uint8_t> s_scratch;
    const uint32_t texWidth = static_cast<uint32_t>(FB_WIDTH * hostFbScale());
    const uint32_t texHeight = static_cast<uint32_t>(FB_HEIGHT * hostFbScale());
    static std::vector<uint8_t> s_uploadBuffer(static_cast<size_t>(texWidth) * texHeight * 4u, 0u);

    const uint64_t currentTick = rt->eeScheduler().currentVSyncTick();
    // While the flip-driven presenter (see run()) is showing frames, this polling loop leaves presentation to it.
    const uint64_t flipPresentedAt = g_ps2xFlipPresentNs.load(std::memory_order_relaxed);
    const bool flipPresenting = flipPresentedAt != 0u &&
        uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now().time_since_epoch()).count()) - flipPresentedAt < 100000000ull;
    const bool needsLatch = !flipPresenting && (!s_hasLatchedInitialFrame || currentTick != s_lastPresentationTick);
    if (needsLatch)
    {
        rt->gs().latchHostPresentationFrame();
        s_lastPresentationTick = currentTick;
        s_hasLatchedInitialFrame = true;
    }
    else if (s_hasUploadedFrame)
    {
        outWidth = (s_lastWidth != 0u) ? s_lastWidth : FB_WIDTH;
        outHeight = (s_lastHeight != 0u) ? s_lastHeight : DEFAULT_DISPLAY_HEIGHT;
        return;
    }

    if (rt->gs().usesNativePresentation())
    {
        outWidth = FB_WIDTH;
        outHeight = DEFAULT_DISPLAY_HEIGHT;
        s_lastWidth = outWidth;
        s_lastHeight = outHeight;
        s_hasUploadedFrame = true;
        return;
    }

    s_scratch.clear();
    uint32_t width = 0u;
    uint32_t height = 0u;
    uint32_t displayFbp = 0u;
    uint32_t sourceFbp = 0u;
    bool usedPreferredDisplaySource = false;
    if (!rt->gs().copyLatchedHostPresentationFrame(s_scratch,
                                                   width,
                                                   height,
                                                   &displayFbp,
                                                   &sourceFbp,
                                                   &usedPreferredDisplaySource))
    {
        Image blank = GenImageColor(static_cast<int>(texWidth), static_cast<int>(texHeight), MAGENTA);
        UpdateTexture(tex, blank.data);
        UnloadImage(blank);
        outWidth = FB_WIDTH;
        outHeight = DEFAULT_DISPLAY_HEIGHT;
        s_lastWidth = outWidth;
        s_lastHeight = outHeight;
        s_hasUploadedFrame = true;
        return;
    }

    PS2_IF_AGRESSIVE_LOGS({
        static uint32_t s_uploadDebugCount = 0u;
        if (s_uploadDebugCount < 128u ||
            displayFbp != s_lastDisplayFbp ||
            sourceFbp != s_lastSourceFbp ||
            usedPreferredDisplaySource != s_lastPreferred ||
            width != s_lastWidth ||
            height != s_lastHeight)
        {
            std::cout << "[frame:upload] idx=" << s_uploadDebugCount
                      << " tick=" << currentTick
                      << " displayFbp=" << displayFbp
                      << " sourceFbp=" << sourceFbp
                      << " size=" << width << "x" << height
                      << " preferred=" << static_cast<uint32_t>(usedPreferredDisplaySource ? 1u : 0u)
                      << std::endl;
        }
        ++s_uploadDebugCount;
    });
    s_lastDisplayFbp = displayFbp;
    s_lastSourceFbp = sourceFbp;
    s_lastPreferred = usedPreferredDisplaySource;
    s_lastWidth = width;
    s_lastHeight = height;

    std::fill(s_uploadBuffer.begin(), s_uploadBuffer.end(), 0u);
    if (!s_scratch.empty() && width != 0u && height != 0u)
    {
        const uint32_t copyWidth = std::min<uint32_t>(width, texWidth);
        const uint32_t copyHeight = std::min<uint32_t>(height, texHeight);
        const size_t srcRowBytes = static_cast<size_t>(width) * 4u;
        const size_t dstRowBytes = static_cast<size_t>(texWidth) * 4u;
        const size_t copyRowBytes = static_cast<size_t>(copyWidth) * 4u;
        for (uint32_t y = 0; y < copyHeight; ++y)
        {
            const size_t srcOffset = static_cast<size_t>(y) * srcRowBytes;
            const size_t dstOffset = static_cast<size_t>(y) * dstRowBytes;
            if (srcOffset + copyRowBytes > s_scratch.size() ||
                dstOffset + copyRowBytes > s_uploadBuffer.size())
            {
                break;
            }
            std::memcpy(s_uploadBuffer.data() + dstOffset, s_scratch.data() + srcOffset, copyRowBytes);
        }
    }

    UpdateTexture(tex, s_uploadBuffer.data());
    // Diagnostic: PS2X_FRAME_DUMP_DIR=<dir> writes the presented frame as PNG every
    // PS2X_FRAME_DUMP_INTERVAL uploads (default 120, about two seconds).
    if (static const char *dumpDir = std::getenv("PS2X_FRAME_DUMP_DIR"); dumpDir && dumpDir[0] && width != 0u && height != 0u)
    {
        static const uint32_t interval = [] {
            const char *v = std::getenv("PS2X_FRAME_DUMP_INTERVAL");
            const long parsed = v ? std::strtol(v, nullptr, 10) : 0;
            return static_cast<uint32_t>(parsed > 0 ? parsed : 120);
        }();
        static uint32_t s_uploads = 0u;
        static uint32_t s_dumped = 0u;
        if ((s_uploads++ % interval) == 0u && static_cast<size_t>(width) * height * 4u <= s_scratch.size())
        {
            std::vector<uint8_t> opaque(s_scratch.begin(), s_scratch.begin() + static_cast<std::ptrdiff_t>(static_cast<size_t>(width) * height * 4u));
            for (size_t i = 3u; i < opaque.size(); i += 4u)
                opaque[i] = 0xFFu;
            Image image{opaque.data(), static_cast<int>(width), static_cast<int>(height), 1, PIXELFORMAT_UNCOMPRESSED_R8G8B8A8};
            char path[1024];
            std::snprintf(path, sizeof(path), "%s/frame_%05u.png", dumpDir, s_dumped++);
            ExportImage(image, path);
        }
    }
    outWidth = width;
    outHeight = height;
    s_hasUploadedFrame = true;
}

PS2Runtime::PS2Runtime()
{
    m_iopHost = std::make_unique<PS2IopHostAdapter>(*this);
    m_iopSubsystem = std::make_unique<ps2x::iop::IopSubsystem>(*m_iopHost);

    m_eeScheduler = std::make_unique<EeScheduler>(*this);
    PSPadBackend::setGuestClock([this]
                                { return static_cast<double>(m_eeScheduler->currentVSyncTick()) / 59.94; });

    // Assign rather than memset: R5900Context's constructor zeroes itself and
    // then applies the COP0 reset values, which a memset here would discard.
    m_cpuContext = R5900Context{};

    // R0 is always zero in MIPS
    m_cpuContext.r[0] = _mm_set1_epi32(0);
    m_cpuContext.vu0_vf[0] = _mm_set_ps(1.0f, 0.0f, 0.0f, 0.0f);
    m_cpuContext.vu0_q = 1.0f;
    m_cpuContext.vu0_r = _mm_castsi128_ps(_mm_set1_epi32(0x3F800000));

    // Stack pointer (SP) and global pointer (GP) will be set by the loaded ELF

    m_loadedModules.clear();
    m_guestHeapBlocks.clear();
    m_guestHeapBase = kGuestHeapDefaultBase;
    m_guestHeapEnd = kGuestHeapDefaultBase;
    m_guestHeapLimit = std::min(kGuestHeapHardLimit, PS2_RAM_SIZE);
    m_guestHeapSuggestedBase = kGuestHeapDefaultBase;
    m_guestHeapConfigured = false;
    m_asyncCallbackStackFloor = std::min(kGuestHeapHardLimit, PS2_RAM_SIZE);
    m_asyncCallbackStackTop = PS2_RAM_SIZE;
}

void PS2Runtime::setDebugUiCallbacks(DebugUiCallback initCallback,
                                     DebugUiCallback drawCallback,
                                     DebugUiCallback shutdownCallback,
                                     void *userData)
{
    if (m_debugUiInitialized && m_debugUiShutdownCallback)
    {
        m_debugUiShutdownCallback(*this, m_debugUiUserData);
        m_debugUiInitialized = false;
    }

    m_debugUiInitCallback = initCallback;
    m_debugUiDrawCallback = drawCallback;
    m_debugUiShutdownCallback = shutdownCallback;
    m_debugUiUserData = userData;
}

// The IOP on its own thread (PS2X_IOP_THREAD=1). The EE only accumulates the cycles it ran; a worker turns them
// into IOP time. One mutex serializes every entry into the IOP; an entry made by the EE first brings the IOP up to
// the EE's time, so a request never reaches an IOP that is behind. SIF commands the IOP sends from the worker are
// queued and delivered by the EE where it used to run the IOP, the same point of its timeline as before.
namespace
{
    struct IopThread
    {
        std::recursive_mutex iop;
        std::mutex wakeMutex;
        std::condition_variable wake, drained;
        std::atomic<uint64_t> pending{0};
        std::atomic<bool> stop{false}, sifQueued{false};
        std::thread thread;
        bool enabled = false, started = false;
        std::mutex sifMutex;
        std::vector<std::pair<uint32_t, std::vector<uint8_t>>> sif;
    };
    IopThread g_iopThread;
    thread_local bool t_onIopThread = false;
    constexpr uint64_t kIopWakeEeCycles = 4096u;    // 512 IOP cycles, the scheduling quantum
    // Beyond this the EE waits for the IOP: one video field of EE time. A tighter bound (it was ~2 ms) made the game
    // thread stop for the IOP dozens of times per second, because recompiled EE code runs through guest time in
    // bursts much faster than the console; requests from the EE still bring the IOP fully up to date first.
    constexpr uint64_t kIopMaxLagEeCycles = 4915200u;

    struct IopEntry
    {
        std::lock_guard<std::recursive_mutex> lock;
        IopEntry(ps2x::iop::IopSubsystem *iop) : lock(g_iopThread.iop)
        {
            if (g_iopThread.enabled && !t_onIopThread && iop)
                if (const uint64_t behind = g_iopThread.pending.exchange(0u, std::memory_order_acq_rel))
                    iop->runEeCycles(behind);
        }
    };

    void stopIopThread()
    {
        if (!g_iopThread.started)
            return;
        g_iopThread.stop.store(true);
        g_iopThread.wake.notify_all();
        g_iopThread.drained.notify_all();
        if (g_iopThread.thread.joinable())
            g_iopThread.thread.join();
        g_iopThread.started = false;
        g_iopThread.enabled = false;
    }
}

// The SPU2's mix, played on the host. The IOP (its own thread or the game thread) writes 48 kHz stereo frames in
// guest time into a single-producer/single-consumer ring; raylib's audio thread reads them. Guest time runs close to
// real time, so the ring only absorbs jitter; spu2Consume() tracks the small rate difference. Above kHighFrames new
// frames are dropped so latency cannot build up, and after running dry playback waits for kPrimeFrames. PS2X_SPU2_AUDIO=0 turns it off.
namespace
{
    struct Spu2Ring
    {
        static constexpr uint32_t kFrames = 16384u; // power of two
        static constexpr uint32_t kHighFrames = 6144u; // ~128 ms
        static constexpr uint32_t kPrimeFrames = 2048u; // ~43 ms
        static constexpr uint32_t kTargetFrames = 3072u; // ~64 ms
        std::array<int16_t, 2 * kFrames> data{};
        std::atomic<uint64_t> written{0}, read{0};
        bool primed = false; // consumer side only
        double fraction = 0.0; // consumer side: position between the next two frames
    };
    Spu2Ring g_spu2Ring;
    AudioStream g_spu2Stream{};

    void spu2Produce(const int16_t *frames, uint32_t count)
    {
        static const bool logLevels = std::getenv("PS2X_SPU2_LEVELS") != nullptr;
        if (logLevels)
        {
            // Once a second of guest audio: peak and RMS of the mix, and how full the ring is.
            static uint32_t counted = 0, peak = 0;
            static double energy = 0.0;
            for (uint32_t i = 0; i < count * 2u; ++i)
            {
                peak = std::max<uint32_t>(peak, static_cast<uint32_t>(std::abs(static_cast<int32_t>(frames[i]))));
                energy += static_cast<double>(frames[i]) * frames[i];
            }
            if ((counted += count) >= 48000u)
            {
                static auto last = std::chrono::steady_clock::now();
                const auto now = std::chrono::steady_clock::now();
                const double seconds = std::chrono::duration<double>(now - last).count();
                last = now;
                std::cerr << "[spu2] produced " << static_cast<int>(counted / seconds) << " frames/s | level peak=" << peak << " rms=" << static_cast<int>(std::sqrt(energy / (counted * 2.0)))
                          << " ring=" << (g_spu2Ring.written.load() - g_spu2Ring.read.load()) << std::endl;
                counted = peak = 0;
                energy = 0.0;
            }
        }
        // PS2X_SPU2_WAV=<file>: also write the raw mix (48 kHz stereo 16-bit PCM, no header) for analysis.
        static std::FILE *raw = []() -> std::FILE *
        {
            const char *path = std::getenv("PS2X_SPU2_WAV");
            return path ? std::fopen(path, "wb") : nullptr;
        }();
        if (raw)
            std::fwrite(frames, sizeof(int16_t) * 2u, count, raw);
        Spu2Ring &r = g_spu2Ring;
        const uint64_t w = r.written.load(std::memory_order_relaxed);
        if (w - r.read.load(std::memory_order_acquire) + count > Spu2Ring::kHighFrames)
            return;
        for (uint32_t i = 0; i < count; ++i)
        {
            const uint32_t at = static_cast<uint32_t>((w + i) & (Spu2Ring::kFrames - 1u)) * 2u;
            r.data[at] = frames[i * 2u];
            r.data[at + 1u] = frames[i * 2u + 1u];
        }
        r.written.store(w + count, std::memory_order_release);
    }

    void spu2Consume(void *buffer, unsigned int count)
    {
        // Guest audio runs at very nearly 48 kHz of real time (measured +0.4%), not exactly: the read speed follows
        // the fill level (up to +-1%, linear interpolation between frames) so the ring settles at kTargetFrames
        // instead of overflowing or running dry.
        Spu2Ring &r = g_spu2Ring;
        int16_t *out = static_cast<int16_t *>(buffer);
        const uint64_t rd = r.read.load(std::memory_order_relaxed);
        const uint64_t available = r.written.load(std::memory_order_acquire) - rd;
        if (!r.primed && available >= Spu2Ring::kPrimeFrames)
            r.primed = true;
        if (!r.primed || available < 2u)
        {
            std::memset(out, 0, count * 2u * sizeof(int16_t));
            r.primed = false;
            return;
        }
        const double error = (static_cast<double>(available) - Spu2Ring::kTargetFrames) / Spu2Ring::kTargetFrames;
        const double step = 1.0 + std::clamp(error * 0.02, -0.01, 0.01);
        double pos = r.fraction;
        unsigned int i = 0;
        // Cubic (Catmull-Rom) interpolation over 4 frames: linear interpolation at a drifting fraction acts as a
        // low-pass filter (-9 dB at 18 kHz halfway between frames) and dulled sharp sounds such as gunshots.
        // The frame before the read position is kept in the ring (the read index lags one frame behind).
        auto frame = [&](uint64_t index, uint32_t channel) {
            return static_cast<double>(r.data[static_cast<uint32_t>(index & (Spu2Ring::kFrames - 1u)) * 2u + channel]);
        };
        for (; i < count; ++i)
        {
            const uint64_t whole = static_cast<uint64_t>(pos);
            if (whole + 3u >= available)
                break;
            const double t = pos - static_cast<double>(whole);
            for (uint32_t ch = 0; ch < 2u; ++ch)
            {
                const double y0 = frame(rd + whole, ch), y1 = frame(rd + whole + 1u, ch);
                const double y2 = frame(rd + whole + 2u, ch), y3 = frame(rd + whole + 3u, ch);
                const double v = y1 + 0.5 * t * (y2 - y0 + t * (2.0 * y0 - 5.0 * y1 + 4.0 * y2 - y3 + t * (3.0 * (y1 - y2) + y3 - y0)));
                out[i * 2u + ch] = static_cast<int16_t>(std::clamp(v, -32768.0, 32767.0));
            }
            pos += step;
        }
        if (i < count)
        {
            std::memset(out + i * 2u, 0, (count - i) * 2u * sizeof(int16_t));
            r.primed = false;
        }
        const uint64_t consumed = static_cast<uint64_t>(pos);
        r.fraction = pos - static_cast<double>(consumed);
        r.read.store(rd + consumed, std::memory_order_release);
    }
}

void PS2Runtime::startSpu2AudioOutput()
{
    if (const char *env = std::getenv("PS2X_SPU2_AUDIO"); env && env[0] == '0')
        return;
    SetAudioStreamBufferSizeDefault(1024);
    g_spu2Stream = LoadAudioStream(48000, 16, 2);
    if (!IsAudioStreamValid(g_spu2Stream))
    {
        std::cerr << "[spu2] could not open the host audio stream" << std::endl;
        return;
    }
    SetAudioStreamCallback(g_spu2Stream, spu2Consume);
    PlayAudioStream(g_spu2Stream);
    ps2x::iop::setSpu2OutputSink(spu2Produce);
    std::cerr << "[spu2] playing the SPU2 mix (48 kHz stereo)" << std::endl;
}

// Called by the IOP host adapter: true when the command was queued for the EE thread (the caller is the IOP worker).
bool ps2xIopQueueSifCommand(uint32_t commandId, const void *packet, size_t packetSize)
{
    if (!t_onIopThread)
        return false;
    std::lock_guard<std::mutex> lock(g_iopThread.sifMutex);
    const uint8_t *bytes = static_cast<const uint8_t *>(packet);
    g_iopThread.sif.emplace_back(commandId, std::vector<uint8_t>(bytes, bytes + packetSize));
    g_iopThread.sifQueued.store(true, std::memory_order_release);
    return true;
}

PS2Runtime::~PS2Runtime()
{
    stopIopThread();
    try
    {
        requestStop();
        m_iopSubsystem.reset();
        m_iopHost.reset();
#if defined(PLATFORM_VITA)
        m_audioBackend.stopAll();
        m_audioBackend.setAudioReady(false);
#else
        if (IsAudioDeviceReady())
        {
            CloseAudioDevice();
            m_audioBackend.setAudioReady(false);
        }
#endif
        if (m_debugUiInitialized && m_debugUiShutdownCallback)
        {
            m_debugUiShutdownCallback(*this, m_debugUiUserData);
            m_debugUiInitialized = false;
        }

        if (IsWindowReady())
        {
            CloseWindow();
        }

        m_loadedModules.clear();
    }
    catch (const std::exception &e)
    {
        std::cerr << "[~PS2Runtime] cleanup exception: " << e.what() << std::endl;
    }
    catch (...)
    {
        std::cerr << "[~PS2Runtime] cleanup exception: unknown" << std::endl;
    }
}

ps2x::iop::ModuleLoadResult PS2Runtime::loadIopModule(std::string_view path, const void *arguments, uint32_t argumentSize)
{
    IopEntry iopEntry(m_iopSubsystem.get());
    auto scope = m_iopHost->enterCall(nullptr, m_memory.getRDRAM());
    return m_iopSubsystem->loadModule(path, arguments, argumentSize);
}

ps2x::iop::ModuleLoadResult PS2Runtime::loadIopModuleBuffer(uint32_t guestAddress, const void *arguments, uint32_t argumentSize)
{
    IopEntry iopEntry(m_iopSubsystem.get());
    auto scope = m_iopHost->enterCall(nullptr, m_memory.getRDRAM());
    return m_iopSubsystem->loadModuleBuffer(guestAddress, arguments, argumentSize);
}

bool PS2Runtime::stopIopModule(int32_t moduleId, int32_t *result)
{
    IopEntry iopEntry(m_iopSubsystem.get());
    auto scope = m_iopHost->enterCall(nullptr, m_memory.getRDRAM());
    return m_iopSubsystem->stopModule(moduleId, result);
}

ps2x::iop::RpcAbi PS2Runtime::selectIopRpcAbi(const ps2x::iop::RpcAbiRequest &request) const
{
    return m_iopSubsystem->selectRpcAbi(request);
}

bool PS2Runtime::canBindIopRpc(uint32_t sid) const noexcept
{
    return m_iopSubsystem->canBindRpc(sid);
}

ps2x::iop::RpcResult PS2Runtime::handleIopRpc(uint8_t *rdram, R5900Context *ctx, ps2x::iop::RpcRequest request)
{
    IopEntry iopEntry(m_iopSubsystem.get());
    auto scope = m_iopHost->enterCall(ctx, rdram);
    request.callToken = scope.token();
    return m_iopSubsystem->handleRpc(request);
}

bool PS2Runtime::deliverIopSifCommand(uint8_t *rdram, uint32_t commandId, const void *packet, size_t packetSize)
{
    if (!m_iopSubsystem)
    {
        return false;
    }
    IopEntry iopEntry(m_iopSubsystem.get());
    auto scope = m_iopHost->enterCall(nullptr, rdram);
    return m_iopSubsystem->deliverSifCommand(commandId, packet, packetSize);
}

void PS2Runtime::notifyIopSifTransfer(uint8_t *rdram, const ps2x::iop::SifTransfer &transfer)
{
    IopEntry iopEntry(m_iopSubsystem.get());
    auto scope = m_iopHost->enterCall(nullptr, rdram);
    m_iopSubsystem->onSifTransfer(transfer);
}

// Set by the debug panel (ps2_debug_panel.cpp): whether it has something to draw (the ESC menu or the F1 panel open),
// and whether the call it is in is inside a frame (BeginDrawing) it may draw into.
std::atomic<bool> g_ps2xDebugUiWantsFrame{false};
std::atomic<bool> g_ps2xDebugUiFrameActive{true};

void PS2Runtime::advanceIopEeCycles(uint64_t eeCycles) noexcept
{
    IopThread &worker = g_iopThread;
    if (!worker.started)
    {
        worker.started = true;
        const char *wanted = std::getenv("PS2X_IOP_THREAD");
        worker.enabled = wanted && wanted[0] == '1';
        if (worker.enabled)
        {
            ps2x::iop::IopSubsystem *const iop = m_iopSubsystem.get();
            worker.thread = std::thread([iop]
            {
                IopThread &self = g_iopThread;
                t_onIopThread = true;
                ThreadNaming::SetCurrentThreadName("IOP");
                ps2x_thread_cpu::registerCurrent("IOP");
                while (!self.stop.load(std::memory_order_acquire))
                {
                    {
                        std::unique_lock<std::mutex> lock(self.wakeMutex);
                        ps2x_wait::waitFor(self.wake, lock, ps2x_wait::duration(std::chrono::milliseconds(1)), [&self]
                        { return self.stop.load() || self.pending.load(std::memory_order_acquire) >= kIopWakeEeCycles; });
                    }
                    const uint64_t cycles = self.pending.exchange(0u, std::memory_order_acq_rel);
                    if (cycles == 0u)
                        continue;
                    {
                        std::lock_guard<std::recursive_mutex> lock(self.iop);
                        iop->runEeCycles(cycles);
                    }
                    self.drained.notify_all();
                }
            });
            std::cerr << "[iop] running on its own thread" << std::endl;
        }
    }
    if (!worker.enabled)
    {
        m_iopSubsystem->runEeCycles(eeCycles);
        return;
    }
    if (worker.sifQueued.load(std::memory_order_acquire))
    {
        std::vector<std::pair<uint32_t, std::vector<uint8_t>>> commands;
        {
            std::lock_guard<std::mutex> lock(worker.sifMutex);
            commands.swap(worker.sif);
            worker.sifQueued.store(false, std::memory_order_release);
        }
        for (const auto &command : commands)
            ps2_stubs::dispatchSifCommand(m_memory.getRDRAM(), this, command.first, command.second.data(), command.second.size());
    }
    const uint64_t before = worker.pending.fetch_add(eeCycles, std::memory_order_acq_rel);
    if (before < kIopWakeEeCycles && before + eeCycles >= kIopWakeEeCycles)
        worker.wake.notify_one();
    if (before + eeCycles > kIopMaxLagEeCycles)
    {
        Ps2xWaitTimer waited(kPs2xWaitGameForIop);
        std::unique_lock<std::mutex> lock(worker.wakeMutex);
        worker.wake.notify_one();
        ps2x_wait::waitFor(worker.drained, lock, ps2x_wait::duration(std::chrono::milliseconds(2)), [&worker]
        { return worker.stop.load() || worker.pending.load(std::memory_order_acquire) <= kIopMaxLagEeCycles / 2u; });
    }
}

void PS2Runtime::resetIop()
{
    IopEntry iopEntry(nullptr);
    m_iopSubsystem->reset();
}

ps2x::iop::DebugSnapshot PS2Runtime::iopDebugSnapshot() const
{
    return m_iopSubsystem->debugSnapshot();
}

uint32_t PS2Runtime::allocateIopMemory(uint32_t size, uint32_t alignment)
{
    IopEntry iopEntry(m_iopSubsystem.get());
    return m_iopSubsystem ? m_iopSubsystem->allocateMemory(size, alignment) : 0u;
}

bool PS2Runtime::freeIopMemory(uint32_t address)
{
    IopEntry iopEntry(m_iopSubsystem.get());
    return m_iopSubsystem && m_iopSubsystem->freeMemory(address);
}

bool PS2Runtime::readIopMemory(uint32_t address, void *destination, size_t size) const
{
    IopEntry iopEntry(m_iopSubsystem.get());
    return m_iopSubsystem && m_iopSubsystem->readMemory(address, destination, size);
}

bool PS2Runtime::writeIopMemory(uint32_t address, const void *source, size_t size)
{
    IopEntry iopEntry(m_iopSubsystem.get());
    return m_iopSubsystem && m_iopSubsystem->writeMemory(address, source, size);
}

bool PS2Runtime::zeroIopMemory(uint32_t address, size_t size)
{
    IopEntry iopEntry(m_iopSubsystem.get());
    return m_iopSubsystem && m_iopSubsystem->zeroMemory(address, size);
}

bool PS2Runtime::isIopMemoryRange(uint32_t address, size_t size) const
{
    return m_iopSubsystem && m_iopSubsystem->isMemoryRange(address, size);
}

bool ps2xOnDmaSinkThread();

bool PS2Runtime::syncCoreSubsystems()
{
    uint8_t *const rdram = m_memory.getRDRAM();
    uint8_t *const gsVram = m_memory.getGSVRAM();
    if (!rdram || !gsVram)
    {
        return false;
    }

    if (m_boundRdram == rdram && m_boundGSVram == gsVram)
    {
        return true;
    }

    m_gs.init(gsVram, static_cast<uint32_t>(PS2_GS_VRAM_SIZE), &m_memory.gs());
    m_gifArbiter.setProcessPacketFn([this](const uint8_t *data, uint32_t size, GifPathId path, bool imageContinuation)
                                    {
                                        extern std::atomic<uint64_t> g_ps2xGifSubmitNs;
                                        const auto start = std::chrono::steady_clock::now();
                                        m_gs.processGIFPacket(data, size, static_cast<uint32_t>(path), imageContinuation);
                                        if (ps2xOnDmaSinkThread())
                                            g_ps2xGifSubmitNs.fetch_add(uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now() - start).count()), std::memory_order_relaxed);
                                    });
    m_memory.setGifArbiter(&m_gifArbiter);
    m_memory.setGifDownloadFifoCallback([this] { return m_gs.downloadFifoQwc(); });
    m_memory.setVu1MscalCallback([this](uint32_t startPC, uint32_t top, uint32_t itop)
                                 {
                                     // On the DMA sink thread the EE context belongs to another thread: leave the
                                     // D/T-bit enables as they are and do not report D/T stops into VPU_STAT.
                                     const bool onSink = ps2xOnDmaSinkThread();
                                     R5900Context *cpuContext = (!onSink && m_eeScheduler) ? m_eeScheduler->currentContext() : nullptr;
                                     if (!cpuContext)
                                     {
                                         cpuContext = &m_cpuContext;
                                     }
                                     if (!onSink)
                                     {
                                         m_vu1.state().dBitEnabled =
                                             (cpuContext->vu0_fbrst & (1u << 10)) != 0u;
                                         m_vu1.state().tBitEnabled =
                                             (cpuContext->vu0_fbrst & (1u << 11)) != 0u;
                                     }
                                     const uint64_t vu1CyclesBefore = m_vu1.state().cycles;
                                     const auto runStart = std::chrono::steady_clock::now();
                                     m_vu1.execute(m_memory.getVU1Code(), PS2_VU1_CODE_SIZE,
                                                   m_memory.getVU1Data(), PS2_VU1_DATA_SIZE,
                                                   m_gs, &m_memory, startPC, top, itop, 65536);
                                     if (onSink)
                                     {
                                         extern std::atomic<uint64_t> g_ps2xVu1RunNs;
                                         g_ps2xVu1RunNs.fetch_add(uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now() - runStart).count()), std::memory_order_relaxed);
                                         return;
                                     }
                                     m_memory.chargeVif1Cycles(m_vu1.state().cycles - vu1CyclesBefore);
                                     cpuContext->vu0_vpu_stat =
                                         (cpuContext->vu0_vpu_stat & ~0x0600u) |
                                         (m_vu1.state().stoppedByD ? 0x0200u : 0u) |
                                         (m_vu1.state().stoppedByT ? 0x0400u : 0u); });
    m_memory.setVu1MscntCallback([this](uint32_t top, uint32_t itop)
                                 {
                                     // On the DMA sink thread the EE context belongs to another thread: leave the
                                     // D/T-bit enables as they are and do not report D/T stops into VPU_STAT.
                                     const bool onSink = ps2xOnDmaSinkThread();
                                     R5900Context *cpuContext = (!onSink && m_eeScheduler) ? m_eeScheduler->currentContext() : nullptr;
                                     if (!cpuContext)
                                     {
                                         cpuContext = &m_cpuContext;
                                     }
                                     if (!onSink)
                                     {
                                         m_vu1.state().dBitEnabled =
                                             (cpuContext->vu0_fbrst & (1u << 10)) != 0u;
                                         m_vu1.state().tBitEnabled =
                                             (cpuContext->vu0_fbrst & (1u << 11)) != 0u;
                                     }
                                     const uint64_t vu1CyclesBefore = m_vu1.state().cycles;
                                     const auto runStart = std::chrono::steady_clock::now();
                                     m_vu1.resume(m_memory.getVU1Code(), PS2_VU1_CODE_SIZE,
                                                  m_memory.getVU1Data(), PS2_VU1_DATA_SIZE,
                                                  m_gs, &m_memory, top, itop, 65536);
                                     if (onSink)
                                     {
                                         extern std::atomic<uint64_t> g_ps2xVu1RunNs;
                                         g_ps2xVu1RunNs.fetch_add(uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now() - runStart).count()), std::memory_order_relaxed);
                                         return;
                                     }
                                     m_memory.chargeVif1Cycles(m_vu1.state().cycles - vu1CyclesBefore);
                                     cpuContext->vu0_vpu_stat =
                                         (cpuContext->vu0_vpu_stat & ~0x0600u) |
                                         (m_vu1.state().stoppedByD ? 0x0200u : 0u) |
                                         (m_vu1.state().stoppedByT ? 0x0400u : 0u); });
    resetIop();
    m_vu0.reset();
    m_vu1.reset();

    m_boundRdram = rdram;
    m_boundGSVram = gsVram;
    return true;
}

bool PS2Runtime::initialize(const char *title)
{
    try
    {
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
        const char *sdlGpu = std::getenv("PS2X_GS_SDL_GPU");
        if (sdlGpu && sdlGpu[0] == '1')
            GSSDLGpuRaster::InitializeHostVideo();
#endif
        if (!m_memory.initialize())
        {
            std::cerr << "Failed to initialize PS2 memory" << std::endl;
            return false;
        }

        if (!syncCoreSubsystems())
        {
            std::cerr << "Failed to bind runtime core subsystems" << std::endl;
            return false;
        }
        const int hostWindowWidth = HOST_WINDOW_WIDTH, hostWindowHeight = HOST_WINDOW_HEIGHT;
#if defined(PLATFORM_VITA)
        InitWindow(hostWindowWidth, hostWindowHeight, title); // raylib vita does not support audio
#else
        // HIGHDPI: render at the display's native pixel density (Retina) instead of letting the
        // OS upscale a low-resolution backbuffer.
        // PS2X_WINDOW_HIDDEN=1: unattended test runs (pad script + frame dump) keep the window
        // off screen and unfocused so they do not interrupt whoever is using the machine.
        static const bool hiddenWindow = [] { const char *v = std::getenv("PS2X_WINDOW_HIDDEN"); return v && v[0] == '1'; }();
        SetConfigFlags(FLAG_WINDOW_RESIZABLE | FLAG_WINDOW_HIGHDPI |
                       (hiddenWindow ? (FLAG_WINDOW_HIDDEN | FLAG_WINDOW_UNFOCUSED) : 0u));
        InitWindow(hostWindowWidth, hostWindowHeight, title);
        // Escape is a pad button (Circle); raylib's default would also quit on it.
        SetExitKey(KEY_NULL);
#endif
        if (!IsWindowReady())
        {
            std::cerr << "Failed to create a graphics window; no OpenGL context is available" << std::endl;
            return false;
        }
        // PS2X_WINDOW_SIZE=<w>x<h> is in real pixels: on a HiDPI (Retina) display the window is
        // that many pixels, i.e. half as many points, so 1920x1080 fits a laptop screen.
        if (const char *size = std::getenv("PS2X_WINDOW_SIZE"))
        {
            int w = 0, h = 0;
            if (std::sscanf(size, "%dx%d", &w, &h) == 2 && w >= 320 && h >= 240)
            {
                const Vector2 dpi = GetWindowScaleDPI();
                const float sx = dpi.x > 0.0f ? dpi.x : 1.0f, sy = dpi.y > 0.0f ? dpi.y : 1.0f;
                const int ww = static_cast<int>(static_cast<float>(w) / sx), wh = static_cast<int>(static_cast<float>(h) / sy);
                SetWindowSize(ww, wh);
                // InitWindow centred the window at its first size; grown from there it hung off the bottom-right corner.
                // Centred again on its monitor, with the title bar kept on screen (position = the client area's corner).
                const int monitor = GetCurrentMonitor();
                const Vector2 origin = GetMonitorPosition(monitor);
                const int mw = GetMonitorWidth(monitor), mh = GetMonitorHeight(monitor);
                if (mw > 0 && mh > 0)
                    SetWindowPosition(static_cast<int>(origin.x) + std::max(0, (mw - ww) / 2), static_cast<int>(origin.y) + std::max(32, (mh - wh) / 2));
            }
        }
        if (const char *fs = std::getenv("PS2X_FULLSCREEN"); fs && fs[0] == '1')
            ToggleFullscreen();
        // The native renderer draws straight into the window (a Metal layer on macOS, a Vulkan child window on Windows).
        if (std::getenv("PS2X_GS_NATIVE_PRESENT"))
        {
            if (m_gs.attachNativePresentationWindow(GetWindowHandle()))
                std::cerr << "[gs] native presentation enabled; scanout stays GPU-resident" << std::endl;
            else
                std::cerr << "[gs] native presentation unavailable; using normal host scanout" << std::endl;
        }
#if !defined(PLATFORM_VITA)
        InitAudioDevice();
        m_audioBackend.setAudioReady(IsAudioDeviceReady());
        if (IsAudioDeviceReady())
            startSpu2AudioOutput();
#endif
        SetTargetFPS(60);
        if (m_debugUiInitCallback)
        {
            m_debugUiInitCallback(*this, m_debugUiUserData);
            m_debugUiInitialized = true;
        }

        return true;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Failed to initialize PS2 runtime: " << e.what() << std::endl;
    }
    catch (...)
    {
        std::cerr << "Failed to initialize PS2 runtime: unknown exception" << std::endl;
    }

    return false;
}

bool PS2Runtime::loadELF(const std::string &elfPath)
{
    configureIoPathsFromElf(elfPath);

    std::ifstream file(elfPath, std::ios::binary);
    if (!file)
    {
        std::cerr << "Failed to open ELF file: " << elfPath << std::endl;
        return false;
    }

    file.seekg(0, std::ios::end);
    const std::streamoff fileSize = file.tellg();
    if (fileSize < static_cast<std::streamoff>(sizeof(ElfHeader)))
    {
        std::cerr << "ELF file is too small: " << elfPath << std::endl;
        return false;
    }
    file.seekg(0, std::ios::beg);

    ElfHeader header{};
    if (!file.read(reinterpret_cast<char *>(&header), sizeof(header)))
    {
        std::cerr << "Failed to read ELF header from: " << elfPath << std::endl;
        return false;
    }

    if (header.magic != ELF_MAGIC)
    {
        std::cerr << "Invalid ELF magic number" << std::endl;
        return false;
    }

    if (header.elf_class != 1u || header.endianness != 1u)
    {
        std::cerr << "Unsupported ELF format (expected 32-bit little-endian)." << std::endl;
        return false;
    }

    if (header.machine != EM_MIPS || header.type != ET_EXEC)
    {
        std::cerr << "Not a MIPS executable ELF file" << std::endl;
        return false;
    }

    if (header.phnum != 0u && header.phentsize < sizeof(ProgramHeader))
    {
        std::cerr << "Unsupported ELF program-header entry size: " << header.phentsize << std::endl;
        return false;
    }

    const uint64_t programHeaderTableEnd =
        static_cast<uint64_t>(header.phoff) +
        static_cast<uint64_t>(header.phnum) * static_cast<uint64_t>(header.phentsize);
    if (programHeaderTableEnd > static_cast<uint64_t>(fileSize))
    {
        std::cerr << "ELF program-header table is out of range." << std::endl;
        return false;
    }

    m_cpuContext.pc = header.entry;
    m_debugPc.store(m_cpuContext.pc, std::memory_order_relaxed);

    uint32_t maxLoadedRdramEnd = kGuestHeapDefaultBase;
    uint32_t moduleBase = std::numeric_limits<uint32_t>::max();
    uint32_t moduleEnd = 0u;
    bool loadedAnySegment = false;

    for (uint16_t i = 0; i < header.phnum; i++)
    {
        const uint64_t phOffset =
            static_cast<uint64_t>(header.phoff) +
            static_cast<uint64_t>(i) * static_cast<uint64_t>(header.phentsize);
        if (phOffset + sizeof(ProgramHeader) > static_cast<uint64_t>(fileSize))
        {
            std::cerr << "ELF program header " << i << " is out of range." << std::endl;
            return false;
        }

        ProgramHeader ph{};
        file.seekg(static_cast<std::streamoff>(phOffset), std::ios::beg);
        if (!file.read(reinterpret_cast<char *>(&ph), sizeof(ph)))
        {
            std::cerr << "Failed to read ELF program header " << i << std::endl;
            return false;
        }

        if (ph.type != PT_LOAD || ph.memsz == 0u)
        {
            continue;
        }

        if (ph.filesz > ph.memsz)
        {
            std::cerr << "ELF segment " << i << " has filesz > memsz." << std::endl;
            return false;
        }

        const uint64_t segmentFileEnd = static_cast<uint64_t>(ph.offset) + static_cast<uint64_t>(ph.filesz);
        if (segmentFileEnd > static_cast<uint64_t>(fileSize))
        {
            std::cerr << "ELF segment " << i << " exceeds file bounds." << std::endl;
            return false;
        }

        const bool scratch =
            ph.vaddr >= PS2_SCRATCHPAD_BASE &&
            ph.vaddr < (PS2_SCRATCHPAD_BASE + PS2_SCRATCHPAD_SIZE);

        uint32_t physAddr = 0u;
        try
        {
            physAddr = m_memory.translateAddress(ph.vaddr);
        }
        catch (const std::exception &e)
        {
            std::cerr << "Failed to translate ELF segment " << i
                      << " virtual address 0x" << std::hex << ph.vaddr
                      << std::dec << ": " << e.what() << std::endl;
            return false;
        }
        const uint64_t regionSize = scratch ? static_cast<uint64_t>(PS2_SCRATCHPAD_SIZE)
                                            : static_cast<uint64_t>(PS2_RAM_SIZE);
        const uint64_t segmentMemEnd = static_cast<uint64_t>(physAddr) + static_cast<uint64_t>(ph.memsz);
        if (segmentMemEnd > regionSize)
        {
            std::cerr << "ELF segment " << i << " exceeds "
                      << (scratch ? "scratchpad" : "RDRAM")
                      << " bounds (vaddr=0x" << std::hex << ph.vaddr
                      << " memsz=0x" << ph.memsz << std::dec << ")." << std::endl;
            return false;
        }

        uint8_t *destBase = scratch ? m_memory.getScratchpad() : m_memory.getRDRAM();
        if (!destBase)
        {
            std::cerr << "ELF segment " << i << " has no destination memory backing." << std::endl;
            return false;
        }

        uint8_t *dest = destBase + physAddr;
        if (ph.filesz > 0u)
        {
            file.seekg(static_cast<std::streamoff>(ph.offset), std::ios::beg);
            if (!file.read(reinterpret_cast<char *>(dest), ph.filesz))
            {
                std::cerr << "Failed to read ELF segment " << i << " payload." << std::endl;
                return false;
            }
        }

        if (ph.memsz > ph.filesz)
        {
            std::memset(dest + ph.filesz, 0, ph.memsz - ph.filesz);
        }

        RUNTIME_LOG("Loading segment: 0x" << std::hex << ph.vaddr
                                          << " - 0x" << (static_cast<uint64_t>(ph.vaddr) + static_cast<uint64_t>(ph.memsz))
                                          << " (filesz: 0x" << ph.filesz
                                          << ", memsz: 0x" << ph.memsz << ")"
                                          << std::dec << std::endl);

        if (!scratch)
        {
            maxLoadedRdramEnd = std::max(maxLoadedRdramEnd, static_cast<uint32_t>(segmentMemEnd));
        }

        if (ph.flags & 0x1u) // PF_X
        {
            const uint64_t execEnd = static_cast<uint64_t>(ph.vaddr) + static_cast<uint64_t>(ph.filesz);
            if (execEnd <= std::numeric_limits<uint32_t>::max())
            {
                m_memory.registerCodeRegion(ph.vaddr, static_cast<uint32_t>(execEnd));
            }
        }

        loadedAnySegment = true;
        moduleBase = std::min(moduleBase, ph.vaddr);
        const uint64_t segmentVirtualEnd = static_cast<uint64_t>(ph.vaddr) + static_cast<uint64_t>(ph.memsz);
        const uint32_t clampedVirtualEnd =
            (segmentVirtualEnd > std::numeric_limits<uint32_t>::max())
                ? std::numeric_limits<uint32_t>::max()
                : static_cast<uint32_t>(segmentVirtualEnd);
        moduleEnd = std::max(moduleEnd, clampedVirtualEnd);
    }

    if (!loadedAnySegment)
    {
        std::cerr << "ELF contains no loadable PT_LOAD segments." << std::endl;
        return false;
    }

    if (maxLoadedRdramEnd > PS2_RAM_SIZE)
    {
        maxLoadedRdramEnd = PS2_RAM_SIZE;
    }

    const uint32_t paddedEnd = (maxLoadedRdramEnd > (PS2_RAM_SIZE - kGuestHeapSafetyPad))
                                   ? PS2_RAM_SIZE
                                   : (maxLoadedRdramEnd + kGuestHeapSafetyPad);
    const uint32_t suggestedHeapBase = alignGuestHeapValue(paddedEnd, kGuestHeapDefaultAlignment);
    {
        std::lock_guard<std::mutex> lock(m_guestHeapMutex);
        if (!m_guestHeapConfigured)
        {
            const uint32_t hardLimit = std::min(kGuestHeapHardLimit, PS2_RAM_SIZE);
            m_guestHeapSuggestedBase = std::min(suggestedHeapBase, hardLimit);
            m_guestHeapBase = m_guestHeapSuggestedBase;
            m_guestHeapEnd = m_guestHeapSuggestedBase;
            m_guestHeapLimit = hardLimit;
        }
    }
    {
        std::lock_guard<std::mutex> lock(m_asyncCallbackStackMutex);
        const uint32_t hardLimit = std::min(kGuestHeapHardLimit, PS2_RAM_SIZE);
        m_asyncCallbackStackFloor = std::min(std::max(hardLimit, suggestedHeapBase), PS2_RAM_SIZE);
        m_asyncCallbackStackTop = PS2_RAM_SIZE;
    }

    LoadedModule module;
    module.name = elfPath.substr(elfPath.find_last_of("/\\") + 1);
    module.baseAddress = (moduleBase == std::numeric_limits<uint32_t>::max()) ? 0x00100000u : moduleBase;
    module.size = (moduleEnd > module.baseAddress) ? static_cast<size_t>(moduleEnd - module.baseAddress) : 0u;
    module.active = true;

    m_loadedModules.push_back(module);

    uint32_t elfCrc32 = 0u;
    const bool elfCrc32Valid = computeFileCrc32(elfPath, elfCrc32);
    if (!elfCrc32Valid)
    {
        std::cerr << "[ps2xIOP] failed to compute ELF CRC32 for '" << elfPath << "'" << std::endl;
    }
    ps2x::iop::GameIdentity identity;
    identity.elfName = module.name;
    identity.entryPoint = m_cpuContext.pc;
    identity.crc32 = elfCrc32;
    std::string romError;
    if (!m_romDevice.configure(identity, &romError))
    {
        std::cerr << "[ROM0] failed to configure profile: " << romError << std::endl;
        return false;
    }

    m_iopSubsystem->reset();

    ps2_game_overrides::applyMatching(*this,
                                      elfPath,
                                      m_cpuContext.pc,
                                      elfCrc32,
                                      elfCrc32Valid);

    RUNTIME_LOG("ELF file loaded successfully. Entry point: 0x" << std::hex << m_cpuContext.pc << std::dec);
    return true;
}

const PS2Runtime::IoPaths &PS2Runtime::getIoPaths()
{
    return runtimeIoPaths();
}

void PS2Runtime::setIoPaths(const IoPaths &paths)
{
    IoPaths normalized = paths;
    normalized.elfPath = normalizeAbsolutePath(normalized.elfPath);
    normalized.elfDirectory = normalizeAbsolutePath(normalized.elfDirectory);
    normalized.hostRoot = normalizeAbsolutePath(normalized.hostRoot);
    normalized.cdRoot = normalizeAbsolutePath(normalized.cdRoot);
    normalized.mcRoot = normalizeAbsolutePath(normalized.mcRoot);
    normalized.cdImage = normalizeAbsolutePath(normalized.cdImage);

    if (normalized.elfDirectory.empty() && !normalized.elfPath.empty())
    {
        normalized.elfDirectory = normalized.elfPath.parent_path();
    }

    if (normalized.hostRoot.empty())
    {
        normalized.hostRoot = normalized.elfDirectory;
    }
    if (normalized.cdRoot.empty())
    {
        normalized.cdRoot = normalized.elfDirectory;
    }
    if (normalized.mcRoot.empty())
    {
        normalized.mcRoot = normalized.elfDirectory / "mc0";
    }

    runtimeIoPaths() = normalized;
}

void PS2Runtime::configureIoPathsFromElf(const std::string &elfPath)
{
    IoPaths paths = runtimeIoPaths();
    paths.elfPath = normalizeAbsolutePath(std::filesystem::path(elfPath));
    if (!paths.elfPath.empty())
    {
        paths.elfDirectory = paths.elfPath.parent_path();
    }

    if (!paths.elfDirectory.empty())
    {
        paths.hostRoot = paths.elfDirectory;
        paths.cdRoot = paths.elfDirectory;
        paths.mcRoot = paths.elfDirectory / "mc0";
    }

    setIoPaths(paths);
}

namespace
{
    bool generatedFunctionTableSlot(uint32_t address, uint32_t &slot)
    {
        if ((address & 3u) != 0u || g_ps2RecompiledFunctionTableSlotCount == 0u)
        {
            return false;
        }

        if (address < g_ps2RecompiledFunctionTableBase || address >= g_ps2RecompiledFunctionTableEnd)
        {
            return false;
        }

        const uint32_t offset = address - g_ps2RecompiledFunctionTableBase;
        slot = offset >> 2;
        return slot < g_ps2RecompiledFunctionTableSlotCount;
    }
}

bool PS2Runtime::replaceFunction(uint32_t address, RecompiledFunction func)
{
    uint32_t slot = 0u;
    if (!generatedFunctionTableSlot(address, slot))
    {
        std::cerr << "[function-table] cannot replace guest PC 0x" << std::hex << address
                  << ": outside generated dense table [0x" << g_ps2RecompiledFunctionTableBase
                  << ", 0x" << g_ps2RecompiledFunctionTableEnd << ")"
                  << std::dec << std::endl;
        return false;
    }

    g_ps2RecompiledFunctionTable[slot] = func;
    return true;
}

bool PS2Runtime::registerFunction(uint32_t address, RecompiledFunction func)
{
    return replaceFunction(address, func);
}

bool PS2Runtime::hasFunction(uint32_t address) const
{
    uint32_t slot = 0u;
    return generatedFunctionTableSlot(address, slot) && g_ps2RecompiledFunctionTable[slot] != nullptr;
}

const char *describeGuestBranchKind(PS2Runtime::GuestBranchKind kind)
{
    switch (kind)
    {
    case PS2Runtime::GuestBranchKind::DirectJump:
        return "DirectJump";
    case PS2Runtime::GuestBranchKind::DirectCall:
        return "DirectCall";
    case PS2Runtime::GuestBranchKind::IndirectJump:
        return "IndirectJump";
    case PS2Runtime::GuestBranchKind::IndirectCall:
        return "IndirectCall";
    case PS2Runtime::GuestBranchKind::Return:
        return "Return";
    default:
        return "Unknown";
    }
}

PS2Runtime::RecompiledFunction PS2Runtime::lookupFunction(uint32_t address)
{
    pushDispatchPc(address);

    uint32_t slot = 0u;
    if (generatedFunctionTableSlot(address, slot))
    {
        RecompiledFunction fn = g_ps2RecompiledFunctionTable[slot];
        if (fn != nullptr)
        {
            return fn;
        }
    }

    std::cerr << "Error: No exact recompiled function for guest PC 0x" << std::hex << address
              << " tableBase=0x" << g_ps2RecompiledFunctionTableBase
              << " tableEnd=0x" << g_ps2RecompiledFunctionTableEnd
              << " codeRegion=" << (m_memory.isCodeAddress(address) ? "yes" : "no")
              << " trace=" << formatDispatchHistory()
              << std::dec << std::endl;

    static RecompiledFunction missingFunction = [](uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t badPc = ctx->pc;
        runtime->reportMissingFunction(rdram,
                                       ctx,
                                       badPc,
                                       0u,
                                       PS2Runtime::GuestBranchKind::IndirectJump,
                                       "dispatch");
    };

    return missingFunction;
}

void PS2Runtime::setMissingFunctionPolicy(MissingFunctionPolicy policy)
{
    m_missingFunctionPolicy.store(static_cast<uint32_t>(policy), std::memory_order_release);
}

PS2Runtime::MissingFunctionPolicy PS2Runtime::missingFunctionPolicy() const
{
    return static_cast<MissingFunctionPolicy>(m_missingFunctionPolicy.load(std::memory_order_acquire));
}

void PS2Runtime::resetMissingFunctionReportOnce()
{
    m_missingFunctionReported.store(false, std::memory_order_release);
}

void PS2Runtime::reportMissingFunction(uint8_t *rdram,
                                       R5900Context *ctx,
                                       uint32_t targetPc,
                                       uint32_t sourcePc,
                                       GuestBranchKind kind,
                                       const char *debugName)
{
    const MissingFunctionPolicy policy = missingFunctionPolicy();
    const bool firstReport = !m_missingFunctionReported.exchange(true, std::memory_order_acq_rel);
    // PS2X_FAULT_RAM_DUMP=<file>: guest RAM as it is at the first branch to a place with no code (the game
    // has just used a bad pointer; the dump shows what it was reading).
    if (firstReport)
    {
        const char *dumpPath = std::getenv("PS2X_FAULT_RAM_DUMP");
        if (dumpPath && dumpPath[0] && rdram)
        {
            if (std::FILE *file = std::fopen(dumpPath, "wb"))
            {
                std::fwrite(rdram, 1, PS2_RAM_SIZE, file);
                std::fclose(file);
                std::fprintf(stderr, "[guest-branch:missing-target] RAM saved to %s\n", dumpPath);
            }
        }
    }

    const uint32_t pc = ctx->pc;
    const uint32_t ra = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));
    const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
    const uint32_t gp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0));
    const uint32_t a0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0));
    const uint32_t a1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[5], 0));
    const uint32_t a2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[6], 0));
    const uint32_t a3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[7], 0));
    const uint32_t s0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[16], 0));
    const uint32_t s1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[17], 0));
    const uint32_t v0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[2], 0));
    const uint32_t v1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[3], 0));

    auto readGuestU32At = [rdram](uint32_t addr, uint32_t &out) -> bool
    {
        // TODO this !rdram exist only because of test fix those test later
        if (!rdram || addr > PS2_RAM_SIZE - sizeof(uint32_t))
        {
            out = 0u;
            return false;
        }

        std::memcpy(&out, rdram + addr, sizeof(uint32_t));
        return true;
    };

    auto readGuestU32Offset = [&readGuestU32At](uint32_t base, uint32_t offset, uint32_t &out) -> bool
    {
        if (base > PS2_RAM_SIZE - sizeof(uint32_t) || offset > PS2_RAM_SIZE - sizeof(uint32_t) - base)
        {
            out = 0u;
            return false;
        }

        return readGuestU32At(base + offset, out);
    };

    uint32_t a0Word0 = 0u;
    uint32_t a0Word4 = 0u;
    uint32_t a0Word8 = 0u;
    uint32_t a0WordC = 0u;
    const bool a0Readable =
        readGuestU32Offset(a0, 0x00u, a0Word0) &&
        readGuestU32Offset(a0, 0x04u, a0Word4) &&
        readGuestU32Offset(a0, 0x08u, a0Word8) &&
        readGuestU32Offset(a0, 0x0cu, a0WordC);

    uint32_t s0Word0 = 0u;
    uint32_t s0Word4 = 0u;
    uint32_t s0Word8 = 0u;
    uint32_t s0WordC = 0u;
    const bool s0Readable =
        readGuestU32Offset(s0, 0x00u, s0Word0) &&
        readGuestU32Offset(s0, 0x04u, s0Word4) &&
        readGuestU32Offset(s0, 0x08u, s0Word8) &&
        readGuestU32Offset(s0, 0x0cu, s0WordC);

    uint32_t recordWord0 = 0u;
    uint32_t recordWord4 = 0u;
    uint32_t recordWord8 = 0u;
    uint32_t recordWordC = 0u;
    const bool recordReadable =
        s0Readable && s0Word4 != 0u &&
        readGuestU32Offset(s0Word4, 0x00u, recordWord0) &&
        readGuestU32Offset(s0Word4, 0x04u, recordWord4) &&
        readGuestU32Offset(s0Word4, 0x08u, recordWord8) &&
        readGuestU32Offset(s0Word4, 0x0cu, recordWordC);

    uint32_t vtableSlot0 = 0u;
    uint32_t vtableSlot4 = 0u;
    uint32_t vtableSlot8 = 0u;
    uint32_t vtableSlotC = 0u;
    const bool vtableReadable =
        a0Readable && a0Word0 != 0u &&
        readGuestU32Offset(a0Word0, 0x00u, vtableSlot0) &&
        readGuestU32Offset(a0Word0, 0x04u, vtableSlot4) &&
        readGuestU32Offset(a0Word0, 0x08u, vtableSlot8) &&
        readGuestU32Offset(a0Word0, 0x0cu, vtableSlotC);

    if (firstReport)
    {
        std::ostringstream oss;
        oss << "[guest-branch:missing-target] kind=" << describeGuestBranchKind(kind)
            << " op=" << (debugName ? debugName : "<unknown>")
            << " source=0x" << std::hex << sourcePc
            << " target=0x" << targetPc
            << " pc=0x" << pc
            << " ra=0x" << ra
            << " sp=0x" << sp
            << " gp=0x" << gp
            << " a0=0x" << a0
            << " a1=0x" << a1
            << " a2=0x" << a2
            << " a3=0x" << a3
            << " s0=0x" << s0
            << " s1=0x" << s1
            << " v0=0x" << v0
            << " v1=0x" << v1
            << " a0Readable=" << (a0Readable ? "yes" : "no")
            << " a0[0]=0x" << a0Word0
            << " a0[4]=0x" << a0Word4
            << " a0[8]=0x" << a0Word8
            << " a0[c]=0x" << a0WordC
            << " s0Readable=" << (s0Readable ? "yes" : "no")
            << " s0[0]=0x" << s0Word0
            << " s0[4]=0x" << s0Word4
            << " s0[8]=0x" << s0Word8
            << " s0[c]=0x" << s0WordC
            << " recordReadable=" << (recordReadable ? "yes" : "no")
            << " record[0]=0x" << recordWord0
            << " record[4]=0x" << recordWord4
            << " record[8]=0x" << recordWord8
            << " record[c]=0x" << recordWordC
            << " vtableReadable=" << (vtableReadable ? "yes" : "no")
            << " vtbl[0]=0x" << vtableSlot0
            << " vtbl[4]=0x" << vtableSlot4
            << " vtbl[8]=0x" << vtableSlot8
            << " vtbl[c]=0x" << vtableSlotC
            << " codeRegion=" << (m_memory.isCodeAddress(targetPc) ? "yes" : "no")
            << " policy=" << static_cast<uint32_t>(policy)
            << " trace=" << formatDispatchHistory()
            << std::dec;

        static std::mutex s_missingFunctionLogMutex;
        {
            std::lock_guard<std::mutex> lock(s_missingFunctionLogMutex);
            std::cerr << oss.str() << std::endl;
        }
    }

    if (firstReport && policy == MissingFunctionPolicy::BreakOnce)
    {
#if defined(_MSC_VER)
        __debugbreak();
#endif // TODO others breakpoints
    }

    if (ctx)
    {
        ctx->pc = targetPc;
    }

    if (policy == MissingFunctionPolicy::Stop)
    {
        requestStop();
    }
}

// Out-of-line half of the generated code's memory accesses (see ps2_runtime_macros.h): everything that is not
// a plain access inside main RAM. The generated code keeps the program counter and the delay-slot state in
// locals; they are put in the context here, where a handler may look at them.
namespace
{
    inline void slowAccessEnter(R5900Context *ctx, uint32_t pc, uint32_t branchPc)
    {
        if (pc != 0u)
            ctx->pc = pc;
        if (branchPc != 0u)
        {
            ctx->in_delay_slot = true;
            ctx->branch_pc = branchPc;
        }
    }
    inline void slowAccessLeave(R5900Context *ctx, uint32_t branchPc)
    {
        if (branchPc != 0u)
            ctx->in_delay_slot = false;
    }
}
// The scratchpad (16 KiB at 0x70000000, where the game keeps its hot matrices) is plain memory as well: an
// aligned access inside it is done here, as PS2Memory would do it after its own checks. 32-bit stores keep
// the full path, which also delivers finished DMA handlers.
#define PS2X_DEFINE_SLOW_ACCESS(bits, type, scratchStore)                                               \
    type ps2xSlowRead##bits(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr,     \
                            uint32_t pc, uint32_t branchPc)                                             \
    {                                                                                                   \
        if (!PS2Runtime::isSpecialAddress(addr))                                                        \
            return Ps2FastRead##bits(rdram, addr);                                                      \
        const uint32_t scratch = addr - PS2_SCRATCHPAD_BASE;                                            \
        if (scratch <= PS2_SCRATCHPAD_SIZE - sizeof(type) && (addr & (sizeof(type) - 1u)) == 0u)        \
        {                                                                                               \
            type value;                                                                                 \
            std::memcpy(&value, runtime->memory().getScratchpad() + scratch, sizeof(value));            \
            return value;                                                                               \
        }                                                                                               \
        slowAccessEnter(ctx, pc, branchPc);                                                             \
        const type value = runtime->Load##bits(rdram, ctx, addr);                                       \
        slowAccessLeave(ctx, branchPc);                                                                 \
        return value;                                                                                   \
    }                                                                                                   \
    void ps2xSlowWrite##bits(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr,    \
                             type value, uint32_t pc, uint32_t branchPc)                                \
    {                                                                                                   \
        if (!PS2Runtime::isSpecialAddress(addr))                                                        \
        {                                                                                               \
            Ps2FastWrite##bits(rdram, addr, value);                                                     \
            return;                                                                                     \
        }                                                                                               \
        const uint32_t scratch = addr - PS2_SCRATCHPAD_BASE;                                            \
        if (scratchStore && scratch <= PS2_SCRATCHPAD_SIZE - sizeof(type) &&                            \
            (addr & (sizeof(type) - 1u)) == 0u)                                                         \
        {                                                                                               \
            std::memcpy(runtime->memory().getScratchpad() + scratch, &value, sizeof(value));            \
            return;                                                                                     \
        }                                                                                               \
        slowAccessEnter(ctx, pc, branchPc);                                                             \
        runtime->Store##bits(rdram, ctx, addr, value);                                                  \
        slowAccessLeave(ctx, branchPc);                                                                 \
    }
PS2X_DEFINE_SLOW_ACCESS(8, uint8_t, true)
PS2X_DEFINE_SLOW_ACCESS(16, uint16_t, true)
PS2X_DEFINE_SLOW_ACCESS(32, uint32_t, false)
PS2X_DEFINE_SLOW_ACCESS(64, uint64_t, true)
PS2X_DEFINE_SLOW_ACCESS(128, __m128i, true)
#undef PS2X_DEFINE_SLOW_ACCESS

bool ps2xEeCheckpointSlow(PS2Runtime *runtime, uint8_t *rdram, R5900Context *ctx, uint32_t cycles) noexcept
{
    (void)rdram;
    (void)ctx;
    return runtime->eeCheckpointDue(cycles);
}

// Generated functions share one guest context across nested native calls. PC equality cannot distinguish a
// recursive continuation from an actual return, so a transfer must unwind every enclosing native call before the EE
// resumes it: this counts transfers. Guest code only runs on the EE executor thread, so it is a plain variable (as a
// thread-local it cost a call into the dynamic loader at every guest call). Also used by ps2xDirectCall().
uint64_t g_ps2xGuestTransferSequence = 0;
// ps2xDirectCall() takes its inline path unless a diagnostic needs every call to go through dispatchGuestBranch().
const bool g_ps2xDirectCallInline = std::getenv("PS2X_TRACE_CALL_STACK") == nullptr &&
                                    std::getenv("PS2X_DISPATCH_HISTORY") == nullptr &&
                                    std::getenv("PS2X_NO_INLINE_CALLS") == nullptr;

bool PS2Runtime::dispatchGuestBranch(uint8_t *rdram,
                                     R5900Context *ctx,
                                     uint32_t targetPc,
                                     uint32_t sourcePc,
                                     uint32_t fallthroughPc,
                                     GuestBranchKind kind,
                                     const char *debugName)
{
    ctx->pc = targetPc;
    const bool isCall = (kind == GuestBranchKind::DirectCall || kind == GuestBranchKind::IndirectCall);

    // Every inter-function transfer is also a deterministic EE safe point.
    // Backward edges inside generated functions use eeCheckpointDue(), while
    // this charge bounds straight-line call chains that have no local loop.
    // One thread-local lookup for the whole dispatch (the variable's address is fixed for the thread).
    uint64_t &transferSequence = g_ps2xGuestTransferSequence;
    if (m_eeScheduler && m_eeScheduler->checkpointDueFast(EeScheduler::kGuestDispatchCycles))
    {
        ++transferSequence;
        return false;
    }

    // Common case first: a call to a function that exists (one table lookup instead of two).
    if (isCall)
    {
        uint32_t slot = 0u;
        RecompiledFunction directFn = generatedFunctionTableSlot(targetPc, slot) ? g_ps2RecompiledFunctionTable[slot] : nullptr;
        static const bool traceCalls = []
        {
            const char *env = std::getenv("PS2X_TRACE_CALL_STACK");
            return env != nullptr && env[0] != '\0' && env[0] != '0';
        }();
        if (directFn != nullptr && !traceCalls)
        {
            // The history of the last calls (PS2X_DISPATCH_HISTORY, kept for crash reports) no longer needs
            // the slow path below: it is one store here.
            pushDispatchPc(targetPc);
            const uint64_t entryTransfer = transferSequence;
            directFn(rdram, ctx, this);
            if (transferSequence != entryTransfer)
                return false;
            if (isStopRequested() || ctx->pc == 0u)
            {
                ++transferSequence;
                return false;
            }
            if (ctx->pc == targetPc)
                ctx->pc = fallthroughPc;
            if (ctx->pc != fallthroughPc)
            {
                ++transferSequence;
                return false;
            }
            return true;
        }
    }

    if (!isCall)
    {
        if (!hasFunction(targetPc))
        {
            reportMissingFunction(rdram, ctx, targetPc, sourcePc, kind, debugName);
        }

        ctx->pc = targetPc;
        ++transferSequence;
        return false;
    }

    if (!hasFunction(targetPc))
    {
        reportMissingFunction(rdram, ctx, targetPc, sourcePc, kind, debugName);

        const MissingFunctionPolicy policy = missingFunctionPolicy();

        if (policy == MissingFunctionPolicy::SkipCallDebug && isCall)
        {
            ctx->pc = fallthroughPc;
            return true;
        }

        if (policy == MissingFunctionPolicy::ContinueToTarget)
        {
            ctx->pc = targetPc;
            // if you need the app to keep open to open debug pannel change this to false
            ++transferSequence;
            return false;
        }

        ++transferSequence;
        return false;
    }

    RecompiledFunction targetFn = lookupFunction(targetPc);
    const uint32_t entryPc = ctx->pc;
    const uint32_t entrySp = getRegU32(ctx, 29);
    const uint64_t entryTransfer = transferSequence;
    targetFn(rdram, ctx, this);

    static const bool traceCallStack = [] {
        const char *env = std::getenv("PS2X_TRACE_CALL_STACK");
        return env != nullptr && env[0] != '\0' && env[0] != '0';
    }();
    if (traceCallStack && (ctx->pc == fallthroughPc || ctx->pc == entryPc) && getRegU32(ctx, 29) != entrySp)
    {
        static unsigned reports = 0;
        if (reports++ < 64u)
            std::fprintf(stderr, "[guest-call:stack-mismatch] source=%08x target=%08x return=%08x pc=%08x sp=%08x->%08x ra=%08x\n",
                         sourcePc, targetPc, fallthroughPc, ctx->pc, entrySp, getRegU32(ctx, 29), getRegU32(ctx, 31));
    }

    if (transferSequence != entryTransfer)
    {
        if (traceCallStack && (ctx->pc == fallthroughPc || ctx->pc == entryPc))
        {
            static unsigned reports = 0;
            if (reports++ < 64u)
                std::fprintf(stderr, "[guest-call:yield-collision] source=%08x target=%08x return=%08x pc=%08x sp=%08x->%08x\n",
                             sourcePc, targetPc, fallthroughPc, ctx->pc, entrySp, getRegU32(ctx, 29));
        }
        return false;
    }

    if (isStopRequested() || ctx->pc == 0u)
    {
        ++transferSequence;
        return false;
    }

    if (ctx->pc == entryPc)
    {
        ctx->pc = fallthroughPc;
    }

    if (ctx->pc != fallthroughPc)
    {
        ++transferSequence;
        return false;
    }
    return true;
}

void PS2Runtime::SignalException(R5900Context *ctx, PS2Exception exception)
{
    if (exception == EXCEPTION_INTEGER_OVERFLOW)
    {
        HandleIntegerOverflow(ctx);
        return;
    }

    raiseCop0Exception(ctx, static_cast<uint32_t>(exception),
                       exception == EXCEPTION_TLB_REFILL);
}

void PS2Runtime::executeVU0Microprogram(uint8_t *rdram, R5900Context *ctx, uint32_t address)
{
    (void)rdram;

    uint8_t *const vu0Code = m_memory.getVU0Code();
    uint8_t *const vu0Data = m_memory.getVU0Data();
    const uint32_t startPC = address & ~0x7u;

    if (!vu0Code || !vu0Data || startPC + 8u > PS2_VU0_CODE_SIZE)
    {
        seedVu0IdleSuccess(ctx);
        return;
    }

    m_vu0.beginMicroCall();
    copyVu0ContextToState(ctx, m_vu0.state());
    m_vu0.executeMicroCall(vu0Code, PS2_VU0_CODE_SIZE,
                           vu0Data, PS2_VU0_DATA_SIZE,
                           m_gs, &m_memory,
                           startPC, 0u, ctx->vu0_itop, 4096);
    copyVu0StateToContext(m_vu0.state(), ctx);
}

void PS2Runtime::vu0StartMicroProgram(uint8_t *rdram, R5900Context *ctx, uint32_t address)
{
    // VCALLMS and VCALLMSR both route here.
    executeVU0Microprogram(rdram, ctx, address);
}

void PS2Runtime::handleSyscall(uint8_t *rdram, R5900Context *ctx)
{
    handleSyscall(rdram, ctx, 0);
}

void PS2Runtime::handleSyscall(uint8_t *rdram, R5900Context *ctx, uint32_t encodedSyscallId)
{
    if (ctx->in_delay_slot)
    {
        throw std::runtime_error("Attempted to execute a syscall inside a branch delay slot! "
                                 "This breaks the atomic basic block model and is structurally unsupported by the emulator.");
    }

    const uint32_t syscallId = (encodedSyscallId != 0u)
                                   ? encodedSyscallId
                                   : getRegU32(ctx, 3); // $v1 / $3 is the EE kernel syscall number

    if (ps2_syscalls::dispatchNumericSyscall(syscallId, rdram, ctx, this))
    {
        return;
    }

    // God help you
    ps2_syscalls::TODO(rdram, ctx, this, encodedSyscallId);
}

void PS2Runtime::handleBreak(uint8_t *rdram, R5900Context *ctx)
{
    raiseCop0Exception(ctx, EXCEPTION_BREAKPOINT);
}

void PS2Runtime::drainCompletedDmacHandlers(uint8_t *rdram)
{
    for (uint32_t cause : m_memory.consumeCompletedDmacCauses())
    {
        ps2xMark('h', cause * 1024u);
        ps2_syscalls::dispatchDmacHandlersForCause(rdram, this, cause);
    }
}

void PS2Runtime::handleTrap(uint8_t *rdram, R5900Context *ctx)
{
    raiseCop0Exception(ctx, EXCEPTION_TRAP);
}

void PS2Runtime::handleTLBR(uint8_t *rdram, R5900Context *ctx)
{
    uint32_t vpn = 0;
    uint32_t pfn = 0;
    uint32_t mask = 0;
    bool valid = false;

    const uint32_t index = ctx->cop0_index & 0x3Fu;
    if (!m_memory.tlbRead(index, vpn, pfn, mask, valid))
    {
        raiseCop0Exception(ctx, EXCEPTION_RESERVED_INSTRUCTION);
        return;
    }

    // Preserve low ASID bits in EntryHi.
    ctx->cop0_entryhi = (ctx->cop0_entryhi & 0x00000FFFu) | (vpn & 0xFFFFF000u);
    ctx->cop0_entrylo0 = (ctx->cop0_entrylo0 & ~0x03FFFFC2u) |
                         ((pfn & 0x000FFFFFu) << 6) |
                         (valid ? 0x2u : 0u);
    ctx->cop0_pagemask = mask & 0x01FFE000u;
}

void PS2Runtime::handleTLBWI(uint8_t *rdram, R5900Context *ctx)
{
    const uint32_t index = ctx->cop0_index & 0x3Fu;
    const uint32_t vpn = ctx->cop0_entryhi & 0xFFFFF000u;
    const uint32_t pfn = (ctx->cop0_entrylo0 >> 6) & 0x000FFFFFu;
    const uint32_t mask = ctx->cop0_pagemask & 0x01FFE000u;
    const bool valid = (ctx->cop0_entrylo0 & 0x2u) != 0u;

    if (!m_memory.tlbWrite(index, vpn, pfn, mask, valid))
    {
        raiseCop0Exception(ctx, EXCEPTION_RESERVED_INSTRUCTION);
    }
}

void PS2Runtime::handleTLBWR(uint8_t *rdram, R5900Context *ctx)
{
    const uint32_t entryCount = static_cast<uint32_t>(m_memory.tlbEntryCount());
    if (entryCount == 0)
    {
        raiseCop0Exception(ctx, EXCEPTION_RESERVED_INSTRUCTION);
        return;
    }

    const uint32_t wired = std::min(ctx->cop0_wired, entryCount - 1);
    uint32_t random = ctx->cop0_random % entryCount;
    if (random < wired)
    {
        random = wired;
    }

    const uint32_t vpn = ctx->cop0_entryhi & 0xFFFFF000u;
    const uint32_t pfn = (ctx->cop0_entrylo0 >> 6) & 0x000FFFFFu;
    const uint32_t mask = ctx->cop0_pagemask & 0x01FFE000u;
    const bool valid = (ctx->cop0_entrylo0 & 0x2u) != 0u;

    if (!m_memory.tlbWrite(random, vpn, pfn, mask, valid))
    {
        raiseCop0Exception(ctx, EXCEPTION_RESERVED_INSTRUCTION);
        return;
    }

    // Keep COP0 bookkeeping in sync with the selected slot.
    ctx->cop0_index = (ctx->cop0_index & ~0x3Fu) | (random & 0x3Fu);
    ctx->cop0_random = (random <= wired) ? (entryCount - 1) : (random - 1);
}

void PS2Runtime::handleTLBP(uint8_t *rdram, R5900Context *ctx)
{
    const int32_t index = m_memory.tlbProbe(ctx->cop0_entryhi & 0xFFFFF000u);
    if (index >= 0)
    {
        ctx->cop0_index = (ctx->cop0_index & ~0x8000003Fu) |
                          (static_cast<uint32_t>(index) & 0x3Fu);
    }
    else
    {
        // MIPS sets probe failure bit (P) in Index[31].
        ctx->cop0_index |= 0x80000000u;
    }
}

void PS2Runtime::clearLLBit(R5900Context *ctx)
{
    // LL/SC reservation is tracked separately from COP0 Status.
    ctx->llbit = 0;
    ctx->lladdr = 0;
}

uint32_t PS2Runtime::alignGuestHeapValue(uint32_t value, uint32_t alignment)
{
    if (alignment == 0)
    {
        return value;
    }

    const uint32_t mask = alignment - 1u;
    if (value > (std::numeric_limits<uint32_t>::max() - mask))
    {
        return std::numeric_limits<uint32_t>::max();
    }
    return (value + mask) & ~mask;
}

bool PS2Runtime::isGuestHeapAlignmentValid(uint32_t alignment)
{
    return alignment != 0u && (alignment & (alignment - 1u)) == 0u;
}

uint32_t PS2Runtime::normalizeGuestHeapAlignment(uint32_t alignment)
{
    if (!isGuestHeapAlignmentValid(alignment))
    {
        return kGuestHeapDefaultAlignment;
    }
    return std::max(alignment, kGuestHeapDefaultAlignment);
}

uint32_t PS2Runtime::clampGuestHeapBase(uint32_t guestBase) const
{
    uint32_t normalized = guestBase;
    if (normalized >= PS2_RAM_SIZE)
    {
        normalized &= PS2_RAM_MASK;
    }
    const uint32_t hardLimit = std::min(kGuestHeapHardLimit, PS2_RAM_SIZE);
    return std::min(normalized, hardLimit);
}

uint32_t PS2Runtime::clampGuestHeapLimit(uint32_t guestLimit) const
{
    const uint32_t hardLimit = std::min(kGuestHeapHardLimit, PS2_RAM_SIZE);
    if (guestLimit == 0u || guestLimit > hardLimit)
    {
        return hardLimit;
    }
    return guestLimit;
}

void PS2Runtime::resetGuestHeapLocked(uint32_t guestBase, uint32_t guestLimit)
{
    uint32_t base = alignGuestHeapValue(clampGuestHeapBase(guestBase), kGuestHeapDefaultAlignment);
    uint32_t limit = clampGuestHeapLimit(guestLimit);
    if (base == 0u)
    {
        const uint32_t fallbackBase = (m_guestHeapSuggestedBase != 0u) ? m_guestHeapSuggestedBase : kGuestHeapDefaultBase;
        base = alignGuestHeapValue(clampGuestHeapBase(fallbackBase), kGuestHeapDefaultAlignment);
    }

    if (limit <= base)
    {
        base = alignGuestHeapValue(clampGuestHeapBase(m_guestHeapSuggestedBase), kGuestHeapDefaultAlignment);
        limit = clampGuestHeapLimit(0u);
    }

    if (limit <= base)
    {
        base = 0u;
        limit = 0u;
    }

    m_guestHeapBlocks.clear();
    if (limit > base)
    {
        m_guestHeapBlocks.push_back({base, limit - base, true});
    }

    m_guestHeapBase = base;
    m_guestHeapEnd = base;
    m_guestHeapLimit = limit;
    m_guestHeapConfigured = true;
}

void PS2Runtime::ensureGuestHeapInitializedLocked()
{
    if (m_guestHeapConfigured)
    {
        return;
    }

    const uint32_t suggested = (m_guestHeapSuggestedBase == 0u) ? kGuestHeapDefaultBase : m_guestHeapSuggestedBase;
    resetGuestHeapLocked(suggested, clampGuestHeapLimit(0u));
}

int32_t PS2Runtime::findGuestHeapBlockIndexLocked(uint32_t guestAddr) const
{
    return findHeapBlockIndex(m_guestHeapBlocks, guestAddr);
}

int32_t PS2Runtime::findHeapBlockIndex(const std::vector<GuestHeapBlock> &blocks, uint32_t guestAddr)
{
    const uint32_t normalizedAddr = guestAddr & PS2_RAM_MASK;
    for (size_t i = 0; i < blocks.size(); ++i)
    {
        const GuestHeapBlock &block = blocks[i];
        if (!block.free && block.addr == normalizedAddr)
        {
            return static_cast<int32_t>(i);
        }
    }
    return -1;
}

uint32_t PS2Runtime::allocateGuestBlockLocked(uint32_t size, uint32_t alignment)
{
    uint32_t allocEnd = 0u;
    const uint32_t addr = allocateHeapBlock(m_guestHeapBlocks, size, alignment, allocEnd);
    if (addr != 0u)
    {
        m_guestHeapEnd = std::max(m_guestHeapEnd, allocEnd);
    }
    return addr;
}

uint32_t PS2Runtime::allocateHeapBlock(std::vector<GuestHeapBlock> &blocks, uint32_t size, uint32_t alignment,
                                       uint32_t &allocEndOut)
{
    if (size == 0u)
    {
        return 0u;
    }

    const uint32_t normalizedAlignment = normalizeGuestHeapAlignment(alignment);
    if (size > (std::numeric_limits<uint32_t>::max() - (kGuestHeapDefaultAlignment - 1u)))
    {
        return 0u;
    }

    const uint32_t allocSize = alignGuestHeapValue(size, kGuestHeapDefaultAlignment);
    if (allocSize == 0u)
    {
        return 0u;
    }

    for (size_t i = 0; i < blocks.size(); ++i)
    {
        const GuestHeapBlock block = blocks[i];
        if (!block.free)
        {
            continue;
        }

        const uint64_t blockStart = block.addr;
        const uint64_t blockEnd = blockStart + static_cast<uint64_t>(block.size);
        const uint32_t alignedAddr = alignGuestHeapValue(block.addr, normalizedAlignment);
        if (alignedAddr < block.addr)
        {
            continue;
        }

        const uint64_t alignedStart = alignedAddr;
        if (alignedStart > blockEnd)
        {
            continue;
        }

        const uint64_t allocEnd = alignedStart + static_cast<uint64_t>(allocSize);
        if (allocEnd > blockEnd)
        {
            continue;
        }

        const uint32_t prefixSize = static_cast<uint32_t>(alignedStart - blockStart);
        const uint32_t suffixSize = static_cast<uint32_t>(blockEnd - allocEnd);

        std::vector<GuestHeapBlock> replacement;
        replacement.reserve(3);
        if (prefixSize > 0u)
        {
            replacement.push_back({block.addr, prefixSize, true});
        }
        replacement.push_back({alignedAddr, allocSize, false});
        if (suffixSize > 0u)
        {
            replacement.push_back({static_cast<uint32_t>(allocEnd), suffixSize, true});
        }

        blocks.erase(blocks.begin() + static_cast<std::ptrdiff_t>(i));
        blocks.insert(blocks.begin() + static_cast<std::ptrdiff_t>(i),
                                 replacement.begin(),
                                 replacement.end());

        allocEndOut = static_cast<uint32_t>(allocEnd);
        return alignedAddr;
    }

    return 0u;
}

void PS2Runtime::coalesceGuestHeapLocked()
{
    coalesceHeapBlocks(m_guestHeapBlocks);
}

void PS2Runtime::coalesceHeapBlocks(std::vector<GuestHeapBlock> &blocks)
{
    if (blocks.empty())
    {
        return;
    }

    size_t i = 1;
    while (i < blocks.size())
    {
        GuestHeapBlock &prev = blocks[i - 1];
        GuestHeapBlock &curr = blocks[i];
        const uint64_t prevEnd = static_cast<uint64_t>(prev.addr) + static_cast<uint64_t>(prev.size);
        if (prev.free && curr.free && prevEnd == curr.addr)
        {
            prev.size += curr.size;
            blocks.erase(blocks.begin() + static_cast<std::ptrdiff_t>(i));
            continue;
        }
        ++i;
    }
}

void PS2Runtime::freeGuestBlockLocked(uint32_t guestAddr)
{
    const int32_t index = findGuestHeapBlockIndexLocked(guestAddr);
    if (index < 0)
    {
        return;
    }

    m_guestHeapBlocks[static_cast<size_t>(index)].free = true;
    coalesceGuestHeapLocked();
}

void PS2Runtime::configureGuestHeap(uint32_t guestBase, uint32_t guestLimit)
{
    std::lock_guard<std::mutex> lock(m_guestHeapMutex);
    uint32_t normalizedBase = alignGuestHeapValue(clampGuestHeapBase(guestBase), kGuestHeapDefaultAlignment);
    if (normalizedBase == 0u)
    {
        normalizedBase = (m_guestHeapSuggestedBase != 0u) ? m_guestHeapSuggestedBase : kGuestHeapDefaultBase;
    }
    m_guestHeapSuggestedBase = normalizedBase;
    resetGuestHeapLocked(normalizedBase, guestLimit);
}

uint32_t PS2Runtime::guestMalloc(uint32_t size, uint32_t alignment)
{
    std::lock_guard<std::mutex> lock(m_guestHeapMutex);
    ensureGuestHeapInitializedLocked();
    return allocateGuestBlockLocked(size, alignment);
}

uint32_t PS2Runtime::guestCalloc(uint32_t count, uint32_t size, uint32_t alignment)
{
    if (count == 0u || size == 0u)
    {
        return 0u;
    }
    if (count > (std::numeric_limits<uint32_t>::max() / size))
    {
        return 0u;
    }

    const uint32_t totalSize = count * size;
    const uint32_t guestAddr = guestMalloc(totalSize, alignment);
    if (guestAddr != 0u)
    {
        uint8_t *rdram = m_memory.getRDRAM();
        if (rdram)
        {
            uint32_t physAddr = guestAddr & PS2_RAM_MASK;
            if (physAddr + totalSize <= PS2_RAM_SIZE)
                std::memset(rdram + physAddr, 0, totalSize);
        }
    }

    return guestAddr;
}

uint32_t PS2Runtime::guestRealloc(uint32_t guestAddr, uint32_t newSize, uint32_t alignment)
{
    if (guestAddr == 0u)
    {
        return guestMalloc(newSize, alignment);
    }
    if (newSize == 0u)
    {
        guestFree(guestAddr);
        return 0u;
    }

    if (newSize > (std::numeric_limits<uint32_t>::max() - (kGuestHeapDefaultAlignment - 1u)))
    {
        return 0u;
    }

    const uint32_t normalizedAlignment = normalizeGuestHeapAlignment(alignment);
    const uint32_t requestedSize = alignGuestHeapValue(newSize, kGuestHeapDefaultAlignment);

    std::lock_guard<std::mutex> lock(m_guestHeapMutex);
    ensureGuestHeapInitializedLocked();

    const int32_t index = findGuestHeapBlockIndexLocked(guestAddr);
    if (index < 0)
    {
        return 0u;
    }

    const size_t blockIndex = static_cast<size_t>(index);
    const uint32_t oldAddr = m_guestHeapBlocks[blockIndex].addr;
    const uint32_t oldSize = m_guestHeapBlocks[blockIndex].size;

    if (requestedSize <= oldSize)
    {
        if (requestedSize < oldSize)
        {
            const uint32_t tailAddr = oldAddr + requestedSize;
            const uint32_t tailSize = oldSize - requestedSize;
            m_guestHeapBlocks[blockIndex].size = requestedSize;
            m_guestHeapBlocks.insert(m_guestHeapBlocks.begin() + static_cast<std::ptrdiff_t>(blockIndex + 1u),
                                     GuestHeapBlock{tailAddr, tailSize, true});
            coalesceGuestHeapLocked();
        }
        return oldAddr;
    }

    if (blockIndex + 1u < m_guestHeapBlocks.size())
    {
        GuestHeapBlock &next = m_guestHeapBlocks[blockIndex + 1u];
        const uint64_t blockEnd = static_cast<uint64_t>(m_guestHeapBlocks[blockIndex].addr) +
                                  static_cast<uint64_t>(m_guestHeapBlocks[blockIndex].size);
        if (next.free && blockEnd == next.addr)
        {
            const uint64_t combined = static_cast<uint64_t>(m_guestHeapBlocks[blockIndex].size) +
                                      static_cast<uint64_t>(next.size);
            if (combined >= requestedSize)
            {
                const uint32_t extraNeeded = requestedSize - m_guestHeapBlocks[blockIndex].size;
                m_guestHeapBlocks[blockIndex].size = requestedSize;
                if (next.size == extraNeeded)
                {
                    m_guestHeapBlocks.erase(m_guestHeapBlocks.begin() + static_cast<std::ptrdiff_t>(blockIndex + 1u));
                }
                else
                {
                    next.addr += extraNeeded;
                    next.size -= extraNeeded;
                }
                m_guestHeapEnd = std::max(m_guestHeapEnd, oldAddr + requestedSize);
                return oldAddr;
            }
        }
    }

    const uint32_t newAddr = allocateGuestBlockLocked(newSize, normalizedAlignment);
    if (newAddr == 0u)
    {
        return 0u;
    }

    uint8_t *rdram = m_memory.getRDRAM();
    if (rdram)
    {
        const uint32_t copyBytes = std::min(oldSize, newSize);
        uint32_t dstPhys = newAddr & PS2_RAM_MASK;
        uint32_t srcPhys = oldAddr & PS2_RAM_MASK;
        if (dstPhys + copyBytes <= PS2_RAM_SIZE && srcPhys + copyBytes <= PS2_RAM_SIZE)
            std::memmove(rdram + dstPhys, rdram + srcPhys, copyBytes);
    }

    freeGuestBlockLocked(oldAddr);
    return newAddr;
}

void PS2Runtime::guestFree(uint32_t guestAddr)
{
    if (guestAddr == 0u)
    {
        return;
    }

    std::lock_guard<std::mutex> lock(m_guestHeapMutex);
    ensureGuestHeapInitializedLocked();
    freeGuestBlockLocked(guestAddr);
}

// Runtime-private guest memory for HLE internals (GIF packets, SIF command packets, MPEG
// callback records, font caches, IOP host buffers). It must never overlap the range the
// guest owns: SetupHeap(_end, -1) only tells the kernel where the program's own heap starts,
// and a guest-side malloc (newlib sbrk) hands that memory out itself. Black's newlib heap
// starts exactly at _end, so allocating HLE packets there overwrote live game objects.
// The arena is carved once from the runtime-owned window above EndOfHeap.
uint32_t PS2Runtime::runtimeScratchAlloc(uint32_t size, uint32_t alignment)
{
    std::lock_guard<std::mutex> lock(m_scratchHeapMutex);
    if (!m_scratchConfigured)
    {
        m_scratchConfigured = true;
        const uint32_t stackTop = reserveAsyncCallbackStack(kRuntimeScratchArenaSize, kGuestHeapDefaultAlignment);
        if (stackTop != 0u)
        {
            const uint32_t base = stackTop + 0x10u - kRuntimeScratchArenaSize;
            m_scratchBlocks.push_back({base, kRuntimeScratchArenaSize, true});
            std::cerr << "[runtime-scratch] arena [0x" << std::hex << base << ", 0x" << (base + kRuntimeScratchArenaSize)
                      << ")" << std::dec << std::endl;
        }
        else
        {
            std::cerr << "[runtime-scratch] could not reserve the private arena" << std::endl;
        }
    }
    uint32_t allocEnd = 0u;
    const uint32_t addr = allocateHeapBlock(m_scratchBlocks, size, alignment, allocEnd);
    if (addr == 0u && size != 0u)
    {
        static bool s_reported = false;
        if (!s_reported)
        {
            s_reported = true;
            std::cerr << "[runtime-scratch] arena exhausted (request " << size << " bytes)" << std::endl;
        }
    }
    return addr;
}

void PS2Runtime::runtimeScratchFree(uint32_t guestAddr)
{
    if (guestAddr == 0u)
    {
        return;
    }
    std::lock_guard<std::mutex> lock(m_scratchHeapMutex);
    const int32_t index = findHeapBlockIndex(m_scratchBlocks, guestAddr);
    if (index < 0)
    {
        return;
    }
    m_scratchBlocks[static_cast<size_t>(index)].free = true;
    coalesceHeapBlocks(m_scratchBlocks);
}

uint32_t PS2Runtime::guestHeapBase() const
{
    std::lock_guard<std::mutex> lock(m_guestHeapMutex);
    return m_guestHeapConfigured ? m_guestHeapBase : m_guestHeapSuggestedBase;
}

uint32_t PS2Runtime::guestHeapEnd() const
{
    std::lock_guard<std::mutex> lock(m_guestHeapMutex);
    return m_guestHeapConfigured ? m_guestHeapEnd : m_guestHeapSuggestedBase;
}

uint32_t PS2Runtime::guestHeapLimit() const
{
    std::lock_guard<std::mutex> lock(m_guestHeapMutex);
    return m_guestHeapConfigured ? m_guestHeapLimit : m_guestHeapSuggestedBase;
}

uint32_t PS2Runtime::reserveAsyncCallbackStack(uint32_t size, uint32_t alignment)
{
    if (size == 0u)
    {
        return 0u;
    }

    const uint32_t normalizedAlignment = normalizeGuestHeapAlignment(alignment);
    const uint32_t allocSize = alignGuestHeapValue(size, kGuestHeapDefaultAlignment);
    if (allocSize == 0u)
    {
        return 0u;
    }

    std::lock_guard<std::mutex> lock(m_asyncCallbackStackMutex);
    uint32_t top = m_asyncCallbackStackTop;
    if (top > PS2_RAM_SIZE)
    {
        top = PS2_RAM_SIZE;
    }
    top &= ~(kGuestHeapDefaultAlignment - 1u);

    if (top <= allocSize)
    {
        return 0u;
    }

    uint32_t base = top - allocSize;
    base &= ~(normalizedAlignment - 1u);
    if (base < m_asyncCallbackStackFloor || base >= top)
    {
        return 0u;
    }

    m_asyncCallbackStackTop = base;
    return top - 0x10u;
}

void PS2Runtime::excludeAsyncCallbackStackRange(uint32_t begin, uint32_t end)
{
    begin &= PS2_RAM_MASK;
    end = std::min(end, PS2_RAM_SIZE);
    if (end <= begin)
    {
        return;
    }

    std::lock_guard<std::mutex> lock(m_asyncCallbackStackMutex);
    const uint32_t floor = m_asyncCallbackStackFloor;
    const uint32_t top = std::min(m_asyncCallbackStackTop, PS2_RAM_SIZE);
    if (end <= floor || begin >= top)
    {
        return; // no overlap
    }

    // Keep whichever side of the guest range leaves the larger usable window.
    const uint32_t below = begin > floor ? begin - floor : 0u;
    const uint32_t above = top > end ? top - end : 0u;
    if (below >= above)
    {
        m_asyncCallbackStackTop = begin & ~(kGuestHeapDefaultAlignment - 1u);
    }
    else
    {
        m_asyncCallbackStackFloor = end;
    }

    std::cerr << "[async-stack] excluded guest stack [0x" << std::hex << begin << ", 0x" << end
              << ") -> callback stacks now [0x" << m_asyncCallbackStackFloor << ", 0x" << m_asyncCallbackStackTop
              << ")" << std::dec << std::endl;
}

namespace
{
    // Guest loads/stores that PS2Memory rejects become COP0 address errors. They are rare on
    // hardware, so report them (rate limited) instead of letting them pass silently.
    void reportGuestAccessFault(const R5900Context *ctx, uint32_t vaddr, const char *op, const std::exception &error)
    {
        static std::atomic<uint64_t> s_count{0};
        const uint64_t n = s_count.fetch_add(1, std::memory_order_relaxed) + 1u;
        if (n <= 64u || (n & (n - 1u)) == 0u)
            std::cerr << "[guest-fault] #" << n << " " << op << " vaddr=0x" << std::hex << vaddr << " pc=0x" << ctx->pc
                      << " ra=0x" << static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0)) << std::dec << " (" << error.what()
                      << ")" << std::endl;
    }
}

uint8_t PS2Runtime::Load8(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr)
{
    try
    {
        return m_memory.read8(vaddr);
    }
    catch (const std::exception &error)
    {
        reportGuestAccessFault(ctx, vaddr, "LOAD8", error);
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_LOAD);
        return 0;
    }
}

uint16_t PS2Runtime::Load16(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr)
{
    try
    {
        return m_memory.read16(vaddr);
    }
    catch (const std::exception &error)
    {
        reportGuestAccessFault(ctx, vaddr, "LOAD16", error);
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_LOAD);
        return 0;
    }
}

uint32_t PS2Runtime::Load32(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr)
{
    try
    {
        return m_memory.read32(vaddr);
    }
    catch (const std::exception &error)
    {
        reportGuestAccessFault(ctx, vaddr, "LOAD32", error);
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_LOAD);
        return 0;
    }
}

uint64_t PS2Runtime::Load64(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr)
{
    try
    {
        return m_memory.read64(vaddr);
    }
    catch (const std::exception &error)
    {
        reportGuestAccessFault(ctx, vaddr, "LOAD64", error);
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_LOAD);
        return 0;
    }
}

__m128i PS2Runtime::Load128(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr)
{
    try
    {
        return m_memory.read128(vaddr);
    }
    catch (const std::exception &error)
    {
        reportGuestAccessFault(ctx, vaddr, "LOAD128", error);
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_LOAD);
        return _mm_setzero_si128();
    }
}

void PS2Runtime::Store8(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr, uint8_t value)
{
    ps2TraceGuestWrite(rdram, vaddr, 1u, value, 0u, "WRITE8", ctx);
    try
    {
        m_memory.write8(vaddr, value);
    }
    catch (const std::exception &error)
    {
        reportGuestAccessFault(ctx, vaddr, "STORE8", error);
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_STORE);
    }
}

void PS2Runtime::Store16(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr, uint16_t value)
{
    ps2TraceGuestWrite(rdram, vaddr, 2u, value, 0u, "WRITE16", ctx);
    try
    {
        m_memory.write16(vaddr, value);
    }
    catch (const std::exception &error)
    {
        reportGuestAccessFault(ctx, vaddr, "STORE16", error);
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_STORE);
    }
}

void PS2Runtime::Store32(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr, uint32_t value)
{
    ps2TraceGuestWrite(rdram, vaddr, 4u, value, 0u, "WRITE32", ctx);
    try
    {
        m_memory.write32(vaddr, value);
        drainCompletedDmacHandlers(rdram);
    }
    catch (const std::exception &error)
    {
        reportGuestAccessFault(ctx, vaddr, "STORE32", error);
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_STORE);
    }
}

void PS2Runtime::Store64(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr, uint64_t value)
{
    ps2TraceGuestWrite(rdram, vaddr, 8u, value, 0u, "WRITE64", ctx);
    try
    {
        m_memory.write64(vaddr, value);
    }
    catch (const std::exception &error)
    {
        reportGuestAccessFault(ctx, vaddr, "STORE64", error);
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_STORE);
    }
}

void PS2Runtime::Store128(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr, __m128i value)
{
    alignas(16) uint64_t _parts[2];
    _mm_storeu_si128(reinterpret_cast<__m128i *>(_parts), value);
    ps2TraceGuestWrite(rdram, vaddr, 16u, _parts[0], _parts[1], "WRITE128", ctx);
    try
    {
        m_memory.write128(vaddr, value);
    }
    catch (const std::exception &error)
    {
        reportGuestAccessFault(ctx, vaddr, "STORE128", error);
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_STORE);
    }
}

void PS2Runtime::kickGifDmaChainFromMMIO(uint8_t *rdram,
                                         R5900Context *ctx,
                                         uint32_t dPcrValue,
                                         uint32_t dStatValue,
                                         uint32_t tadr,
                                         uint32_t chcr)
{
    constexpr uint32_t D_PCR = 0x1000E020u;
    constexpr uint32_t D_STAT = 0x1000E010u;
    constexpr uint32_t GIF_TADR = 0x1000A030u;
    constexpr uint32_t GIF_CHCR = 0x1000A000u;

    ps2TraceGuestWrite(rdram, D_PCR, 4u, dPcrValue, 0u, "WRITE32", ctx);
    m_memory.writeIORegister(D_PCR, dPcrValue);
    ps2TraceGuestWrite(rdram, D_STAT, 4u, dStatValue, 0u, "WRITE32", ctx);
    m_memory.writeIORegister(D_STAT, dStatValue);
    ps2TraceGuestWrite(rdram, GIF_TADR, 4u, tadr, 0u, "WRITE32", ctx);
    m_memory.writeIORegister(GIF_TADR, tadr);
    ps2TraceGuestWrite(rdram, GIF_CHCR, 4u, chcr, 0u, "WRITE32", ctx);
    if (m_memory.tryProcessNativeGifImageUploadChain(m_gs, tadr, chcr))
    {
        drainCompletedDmacHandlers(rdram);
        return;
    }
    if (m_memory.tryProcessNativeGifPackedChain(m_gs, tadr, chcr))
    {
        drainCompletedDmacHandlers(rdram);
        return;
    }
    m_memory.writeIORegister(GIF_CHCR, chcr);
    m_memory.processPendingTransfers();
    drainCompletedDmacHandlers(rdram);
}

void PS2Runtime::setAudioPaused(bool paused)
{
#if !defined(PLATFORM_VITA)
    if (!IsAudioStreamValid(g_spu2Stream))
        return;
    if (paused)
        PauseAudioStream(g_spu2Stream);
    else
        ResumeAudioStream(g_spu2Stream);
#else
    (void)paused;
#endif
}

void PS2Runtime::requestStop()
{
    m_stopRequested.store(true, std::memory_order_relaxed);
    if (m_eeScheduler)
    {
        m_eeScheduler->requestStop();
    }
}

bool PS2Runtime::isStopRequested() const
{
    return m_stopRequested.load(std::memory_order_relaxed);
}

EeScheduler &PS2Runtime::eeScheduler()
{
    return *m_eeScheduler;
}

const EeScheduler &PS2Runtime::eeScheduler() const
{
    return *m_eeScheduler;
}

void PS2Runtime::postEeEvent(EeEvent event)
{
    m_eeScheduler->postEvent(event);
}

void PS2Runtime::eeChargeIdleCycles(uint32_t cycles) noexcept
{
    m_eeScheduler->accountCycles(cycles);
}

bool PS2Runtime::eeCheckpointDue(uint32_t cycles) noexcept
{
    const bool due = m_eeScheduler->checkpointDueFast(cycles);
    if (due)
        ++g_ps2xGuestTransferSequence;
    return due;
}

[[noreturn]] void PS2Runtime::eeWaitVSyncTicks(uint32_t ticks, uint32_t resumePc)
{
    const uint64_t currentTick = m_eeScheduler->currentVSyncTick();
    const uint64_t waitTicks = std::max<uint64_t>(1u, ticks);
    m_eeScheduler->waitVSync(currentTick + waitTicks - 1u,
                             0,
                             [resumePc](R5900Context &context)
                             {
                                 context.pc = resumePc;
                             });
}

void PS2Runtime::addEeExitHandler(int threadId, uint32_t function, uint32_t argument)
{
    std::lock_guard lock(m_eeKernelStateMutex);
    m_eeExitHandlers[threadId].push_back({function, argument});
}

std::vector<PS2Runtime::EeExitHandlerRegistration> PS2Runtime::takeEeExitHandlers(int threadId)
{
    std::lock_guard lock(m_eeKernelStateMutex);
    auto it = m_eeExitHandlers.find(threadId);
    if (it == m_eeExitHandlers.end())
    {
        return {};
    }
    auto handlers = std::move(it->second);
    m_eeExitHandlers.erase(it);
    return handlers;
}

void PS2Runtime::removeEeExitHandlers(int threadId)
{
    std::lock_guard lock(m_eeKernelStateMutex);
    m_eeExitHandlers.erase(threadId);
}

bool PS2Runtime::findEeSyscallOverride(uint32_t syscallNumber, uint32_t &handler) const
{
    std::lock_guard lock(m_eeKernelStateMutex);
    const auto it = m_eeSyscallOverrides.find(syscallNumber);
    if (it == m_eeSyscallOverrides.end())
    {
        return false;
    }
    handler = it->second;
    return true;
}

void PS2Runtime::setEeSyscallOverride(uint8_t *rdram, uint32_t syscallNumber, uint32_t handler)
{
    constexpr uint32_t kTableBase = 0x80011F80u & 0x1FFFFFFFu;
    constexpr uint32_t kMirrorLimit = 0x00080000u;
    const int64_t offset = static_cast<int64_t>(static_cast<int32_t>(syscallNumber)) * 4;
    const int64_t address = static_cast<int64_t>(kTableBase) + offset;

    std::lock_guard lock(m_eeKernelStateMutex);
    if (handler == 0u)
    {
        m_eeSyscallOverrides.erase(syscallNumber);
    }
    else
    {
        m_eeSyscallOverrides[syscallNumber] = handler;
    }
    if (!rdram || address < 0 || address + 4 > kMirrorLimit)
    {
        return;
    }
    const uint32_t guestAddress = static_cast<uint32_t>(address);
    std::memcpy(rdram + guestAddress, &handler, sizeof(handler));
    if (handler == 0u)
    {
        m_eeSyscallMirrorAddresses.erase(guestAddress);
    }
    else
    {
        m_eeSyscallMirrorAddresses.insert(guestAddress);
    }
}

void PS2Runtime::initializeEeKernelState(uint8_t *rdram)
{
    if (!rdram)
    {
        return;
    }
    constexpr uint32_t kTableGuestBase = 0x80011F80u;
    constexpr uint32_t kTableBase = kTableGuestBase & 0x1FFFFFFFu;
    constexpr uint32_t kMirrorLimit = 0x00080000u;
    constexpr uint32_t kProbeBase = 0x000002F0u;

    std::lock_guard lock(m_eeKernelStateMutex);
    for (const uint32_t address : m_eeSyscallMirrorAddresses)
    {
        const uint32_t zero = 0u;
        std::memcpy(rdram + address, &zero, sizeof(zero));
    }
    m_eeSyscallMirrorAddresses.clear();
    const uint32_t high = kTableGuestBase >> 16;
    const uint32_t low = kTableGuestBase & 0xFFFFu;
    std::memcpy(rdram + kProbeBase, &high, sizeof(high));
    std::memcpy(rdram + kProbeBase + 8u, &low, sizeof(low));
    m_eeSyscallMirrorAddresses.insert(kProbeBase);
    m_eeSyscallMirrorAddresses.insert(kProbeBase + 8u);

    for (const auto &[syscallNumber, handler] : m_eeSyscallOverrides)
    {
        const int64_t offset = static_cast<int64_t>(static_cast<int32_t>(syscallNumber)) * 4;
        const int64_t address = static_cast<int64_t>(kTableBase) + offset;
        if (address < 0 || address + 4 > kMirrorLimit)
        {
            continue;
        }
        const uint32_t guestAddress = static_cast<uint32_t>(address);
        std::memcpy(rdram + guestAddress, &handler, sizeof(handler));
        m_eeSyscallMirrorAddresses.insert(guestAddress);
    }
}

void PS2Runtime::HandleIntegerOverflow(R5900Context *ctx)
{
    raiseCop0Exception(ctx, EXCEPTION_INTEGER_OVERFLOW);
}

void PS2Runtime::run()
{
    m_stopRequested.store(false, std::memory_order_relaxed);
    ps2_stubs::resetSifState();
    resetIop();
    ps2_stubs::resetAudioStubState();
    ps2_stubs::resetMpegStubState();
    initializeEeKernelState(m_memory.getRDRAM());
    m_cpuContext.r[4] = _mm_setzero_si128();
    m_cpuContext.r[5] = _mm_setzero_si128();
    m_cpuContext.r[29] = _mm_set_epi64x(0, static_cast<int64_t>(PS2_RAM_SIZE - 0x10u));
    m_debugPc.store(m_cpuContext.pc, std::memory_order_relaxed);
    m_debugRa.store(static_cast<uint32_t>(_mm_extract_epi32(m_cpuContext.r[31], 0)), std::memory_order_relaxed);
    m_debugSp.store(static_cast<uint32_t>(_mm_extract_epi32(m_cpuContext.r[29], 0)), std::memory_order_relaxed);
    m_debugGp.store(static_cast<uint32_t>(_mm_extract_epi32(m_cpuContext.r[28], 0)), std::memory_order_relaxed);

    RUNTIME_LOG("Starting execution at address 0x" << std::hex << m_cpuContext.pc << std::dec);

    // A blank image to use as a framebuffer
    Image blank = GenImageColor(FB_WIDTH * hostFbScale(), FB_HEIGHT * hostFbScale(), BLANK);
    Texture2D frameTex = LoadTextureFromImage(blank);
    UnloadImage(blank);
    // The PS2 frame (e.g. 640x448) is almost never scaled by an integer factor to the window.
    // Point sampling then duplicates some rows/columns and not others, which shows up as
    // uneven "lines" through text and thin UI art. Bilinear keeps the scale uniform.
    // PS2X_PRESENT_FILTER=nearest restores point sampling.
    {
        const char *filter = std::getenv("PS2X_PRESENT_FILTER");
        const bool nearest = filter != nullptr && std::string_view(filter) == "nearest";
        SetTextureFilter(frameTex, nearest ? TEXTURE_FILTER_POINT : TEXTURE_FILTER_BILINEAR);
    }

    std::atomic<bool> gameThreadFinished{false};

    // Direct presentation: each frame goes to the screen when its display flip takes effect (the game queues the
    // flip behind the frame's drawing), not when the main loop next wakes up. PS2X_PRESENT_POLLED=1 keeps the old way.
    std::atomic<bool> presenterStop{false};
    std::thread presenter;
    if (m_gs.usesNativePresentation() && !std::getenv("PS2X_PRESENT_POLLED"))
        presenter = std::thread([&]()
        {
            ThreadNaming::SetCurrentThreadName("Present");
            ps2x_thread_cpu::registerCurrent("Present");
            uint64_t seen = g_ps2xDisplayFlips.load(std::memory_order_acquire);
            while (!presenterStop.load(std::memory_order_acquire))
            {
                ps2xWaitDisplayFlip(seen, 50);
                uint64_t now = g_ps2xDisplayFlips.load(std::memory_order_acquire);
                if (now == seen)
                    continue;
                // The game writes the display registers in two steps per frame: wait for the second.
                for (int spin = 0; spin < 4; ++spin)
                {
                    std::this_thread::sleep_for(ps2x_wait::duration(std::chrono::microseconds(150)));
                    const uint64_t again = g_ps2xDisplayFlips.load(std::memory_order_acquire);
                    if (again == now)
                        break;
                    now = again;
                }
                seen = now;
                m_gs.latchHostPresentationFrame();
                g_ps2xFlipPresentNs.store(uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now().time_since_epoch()).count()), std::memory_order_relaxed);
            }
        });

    std::thread gameThread([&]()
                           {
        ThreadNaming::SetCurrentThreadName("GameThread");
            ps2x_thread_cpu::registerCurrent("GameThread");
        // The EE FPU and the VU0 macro instructions truncate (round toward zero); all guest EE code
        // runs on this thread. Games rely on it: Black's inline sin/cos rounds x/2pi to an integer by
        // adding and subtracting 1.5*2^23, which only works with truncation (with round-to-nearest
        // sin(350 deg) came out as -0.1673 instead of -0.1736). PS2X_EE_ROUND_NEAREST=1 keeps the
        // host default for comparison.
        if (!std::getenv("PS2X_EE_ROUND_NEAREST"))
            std::fesetround(FE_TOWARDZERO);
#if defined(PS2X_VU_SIMD)
        // Nor do they have denormals: a result too small for a normal number is zero, and so is such an operand
        // (PCSX2 runs the EE with flush-to-zero and denormals-are-zero for the same reason). With FPCR.FZ set here
        // the thread is already in the VU's floating-point mode, so a VU0 microprogram call no longer writes FPCR
        // twice (some 30 ns of a call that takes 110). PS2X_EE_KEEP_DENORMALS=1 leaves the host default.
        if (!std::getenv("PS2X_EE_ROUND_NEAREST") && !std::getenv("PS2X_EE_KEEP_DENORMALS"))
            ps2x_fp::write(ps2x_fp::flushMode(ps2x_fp::read())); // FPCR.FZ on ARM, MXCSR FTZ+DAZ on x86
#endif
        try
        {
            m_eeScheduler->reset(m_memory.getRDRAM(), m_cpuContext);
            m_eeScheduler->run();
            uint32_t pc = m_debugPc.load(std::memory_order_relaxed);
            RUNTIME_LOG("Game thread returned. PC=0x" << std::hex << pc
                      << " RA=0x" << static_cast<uint32_t>(_mm_extract_epi32(m_cpuContext.r[31], 0)) << std::dec << std::endl);
        }
        catch (const std::exception &e)
        {
            std::cerr << "Error during program execution: " << e.what() << std::endl;
        }
        catch (...)
        {
            std::cerr << "Error during program execution: unknown exception" << std::endl;
        }
        gameThreadFinished.store(true, std::memory_order_release); });

    uint64_t tick = 0;
    ps2x_thread_cpu::registerCurrent("Window");
    // Window watchdog (always on): the system calls a window hung ("not responding") when its thread stops reading
    // messages for a few seconds. When this loop has not come round for a second, the step it is in is logged.
    static std::atomic<const char *> windowStep{"start"};
    static std::atomic<uint64_t> windowBeat{0};
    const auto beatNow = [] { return uint64_t(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now().time_since_epoch()).count()); };
    windowBeat.store(beatNow());
    std::atomic<bool> watchdogStop{false};
    std::thread watchdog([&watchdogStop, beatNow]()
    {
        ThreadNaming::SetCurrentThreadName("WindowWatchdog");
        uint64_t reportedFor = 0;
        while (!watchdogStop.load(std::memory_order_acquire))
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(250));
            const uint64_t beat = windowBeat.load(std::memory_order_acquire), now = beatNow();
            if (now > beat + 1000u && beat != reportedFor)
            {
                std::fprintf(stderr, "[window] the window loop has been in '%s' for %llu ms (the window does not answer meanwhile)\n",
                             windowStep.load(std::memory_order_acquire), static_cast<unsigned long long>(now - beat));
                reportedFor = beat;
            }
        }
    });
    struct WatchdogJoin
    {
        std::atomic<bool> &stop;
        std::thread &thread;
        ~WatchdogJoin() { stop.store(true); if (thread.joinable()) thread.join(); }
    } watchdogJoin{watchdogStop, watchdog};
    while (!isStopRequested() && !gameThreadFinished.load(std::memory_order_acquire))
    {
        windowBeat.store(beatNow(), std::memory_order_release);
        windowStep.store("report", std::memory_order_release);
        ps2x_thread_cpu::reportIfDue();
        PS2_IF_AGRESSIVE_LOGS({
            tick++;
            if ((tick % 120) == 0)
            {
                uint64_t curDma = m_memory.dmaStartCount();
                uint64_t curGif = m_memory.gifCopyCount();
                uint64_t curGs = m_memory.gsWriteCount();
                uint64_t curVif = m_memory.vifWriteCount();
                const GSRegisters &gs = m_memory.gs();
                const uint32_t dbgPc = m_debugPc.load(std::memory_order_relaxed);
                const uint32_t dbgRa = m_debugRa.load(std::memory_order_relaxed);
                const uint32_t dbgSp = m_debugSp.load(std::memory_order_relaxed);
                const uint32_t dbgGp = m_debugGp.load(std::memory_order_relaxed);
                const auto eeSnapshot = m_eeScheduler->snapshot();

                RUNTIME_LOG("[run:tick] tick=" << tick
                                               << " pc=0x" << std::hex << dbgPc
                                               << " ra=0x" << dbgRa
                                               << " sp=0x" << dbgSp
                                               << " gp=0x" << dbgGp
                                               << " dispfb1=0x" << gs.dispfb1
                                               << " display1=0x" << gs.display1
                                               << std::dec
                                               << " activeThreads=" << eeSnapshot.threads.size()
                                               << " dma=" << curDma
                                               << " gif=" << curGif
                                               << " gsw=" << curGs
                                               << " vif=" << curVif
                                               << std::endl);

            }
        });
        uint32_t presentWidth = FB_WIDTH;
        uint32_t presentHeight = DEFAULT_DISPLAY_HEIGHT;
        windowStep.store("UploadFrame", std::memory_order_release);
        UploadFrame(frameTex, this, presentWidth, presentHeight);
        const bool nativeGsPresentation = m_gs.usesNativePresentation();

        // With direct presentation the picture is in the Metal layer on top of this window: clearing and swapping
        // the OpenGL surface under it every frame (a full-window surface, at Retina size) only takes GPU time away
        // from the renderer and adds one more thing waiting for the screen. The loop then just reads the input.
        // PS2X_GL_SWAP=1 keeps drawing (the debug UI, when there is one, also needs it).
        static const bool keepGlSwap = std::getenv("PS2X_GL_SWAP") != nullptr;
        // With the debug UI there, but nothing of it open, the same: the panel only reads its keys (ESC, F1) here.
        // Swapping the covered OpenGL surface every frame was what made the window stop answering on Windows (the
        // game window is under the Vulkan child window there).
        const bool debugUi = m_debugUiInitialized && m_debugUiDrawCallback;
        if (nativeGsPresentation && !keepGlSwap && (!debugUi || !g_ps2xDebugUiWantsFrame.load(std::memory_order_acquire)))
        {
            windowStep.store("PollInputEvents", std::memory_order_release);
            PollInputEvents();
            if (debugUi)
            {
                windowStep.store("debug UI keys", std::memory_order_release);
                g_ps2xDebugUiFrameActive.store(false, std::memory_order_release);
                m_debugUiDrawCallback(*this, m_debugUiUserData);
                g_ps2xDebugUiFrameActive.store(true, std::memory_order_release);
            }
            windowStep.store("pollHostInput", std::memory_order_release);
            PSPadBackend::pollHostInput();
            windowStep.store("WaitTime", std::memory_order_release);
            WaitTime(1.0 / 240.0);
            if (WindowShouldClose())
            {
                RUNTIME_LOG("[run] window close requested, breaking out of loop");
                requestStop();
                break;
            }
            continue;
        }

        windowStep.store("BeginDrawing", std::memory_order_release);
        BeginDrawing();
        ClearBackground(BLACK);
        const float srcWidth = static_cast<float>(std::max<uint32_t>(1u, presentWidth));
        const float srcHeight = static_cast<float>(std::max<uint32_t>(1u, presentHeight));
        const float screenWidth = static_cast<float>(GetScreenWidth());
        const float screenHeight = static_cast<float>(GetScreenHeight());
        const float shapeWidth = hostDisplayAspect() > 0.0f ? srcHeight * hostDisplayAspect() : srcWidth;
        const float scale = std::min(screenWidth / shapeWidth, screenHeight / srcHeight);
        const float dstWidth = shapeWidth * scale;
        const float dstHeight = srcHeight * scale;
        const Rectangle srcRect{0.0f, 0.0f, srcWidth, srcHeight};
        const Rectangle dstRect{
            (screenWidth - dstWidth) * 0.5f,
            (screenHeight - dstHeight) * 0.5f,
            dstWidth,
            dstHeight};
        if (!nativeGsPresentation)
            DrawTexturePro(frameTex, srcRect, dstRect, Vector2{0.0f, 0.0f}, 0.0f, WHITE);
        if (m_debugUiInitialized && m_debugUiDrawCallback)
        {
            windowStep.store("debug UI", std::memory_order_release);
            m_debugUiDrawCallback(*this, m_debugUiUserData);
        }
        windowStep.store("EndDrawing (swap)", std::memory_order_release);
        EndDrawing();
        windowStep.store("pollHostInput", std::memory_order_release);
        PSPadBackend::pollHostInput();

        if (WindowShouldClose())
        {
            RUNTIME_LOG("[run] window close requested, breaking out of loop");
            requestStop();
            break;
        }
    }

    requestStop();
    presenterStop.store(true, std::memory_order_release);
    if (presenter.joinable())
        presenter.join();
    if (gameThread.joinable())
    {
        gameThread.join();
    }

    if (m_debugUiInitialized && m_debugUiShutdownCallback)
    {
        m_debugUiShutdownCallback(*this, m_debugUiUserData);
        m_debugUiInitialized = false;
    }
    UnloadTexture(frameTex);
    CloseWindow();

    RUNTIME_LOG("[run] exiting loop");
}
