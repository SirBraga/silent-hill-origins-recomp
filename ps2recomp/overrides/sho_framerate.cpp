// Frame rate of Silent Hill Origins.
//
// The vblank handler (0x22DA28) shows a new frame only when the frame is ready and at least N vertical blanks went by
// since the previous one; N is a byte the game sets through 0x22DCD8(N). The game asks for 2 (30 frames a second; 0 is
// its unlocked mode, flag 0x339D94). A frame is shown when the handler consumes the "frame ready" byte at 0x6B415C.
//
//   SHO_VSYNC_INTERVAL=<n>  replaces the game's 2 with n (1: a new frame every blank, 60 per second).
//   SHO_FPS=1               prints every 2 s how many new frames were shown per second.
//
// Disc streams (FMVs and the IGC.ARC cutscenes) are played at the console's 30 frames a second: the game's player
// takes one step of the stream per game frame while the runtime delivers the disc at the console's speed, so at 60
// the video ran out of data and the game cut the scene short (the player jumped to where the scene ends). The
// interval goes back to 2 at sceCdStStart and to SHO_VSYNC_INTERVAL at sceCdStStop. SHO_STREAM_30=0 disables.
//
// Game time. The per-frame time update (0x1D6C08) measures the frame length with 0x327C60, the SDK's 64-bit read of
// EE timer 2 in bus clocks (147.456 MHz). That timer follows the emulated EE, so when the host cannot keep the rate the
// game measures less time than really went by and everything moves in slow motion. 0x327C60 is replaced here by the
// host's monotonic clock in the same unit: a frame that comes late is then a longer step, as in a PC game.
// SHO_REAL_CLOCK=0 keeps the EE timer. (0x1D6C08 is its only caller.)
#include "ps2_runtime.h"
#include "game_overrides.h"

#include <atomic>
#include <chrono>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <thread>

namespace
{
    constexpr uint32_t kSetVsyncInterval = 0x0022DCD8u, kVblankFlip = 0x0022DA28u, kFrameReady = 0x006B415Cu;
    PS2Runtime::RecompiledFunction g_vblankFlip = nullptr;
    std::atomic<uint32_t> g_shown{0}, g_handlerCalls{0};
    const uint8_t *g_rdram = nullptr;

    void vblankFlipThunk(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const bool entry = ctx->pc == kVblankFlip;
        const bool ready = entry && rdram[kFrameReady] != 0u;
        g_vblankFlip(rdram, ctx, runtime);
        if (entry)
        {
            g_handlerCalls.fetch_add(1u, std::memory_order_relaxed);
            if (ready && rdram[kFrameReady] == 0u)
                g_shown.fetch_add(1u, std::memory_order_relaxed);
        }
    }
    constexpr uint32_t kTimerSystemTime = 0x00327C60u;

    void realClockTimer(uint8_t *, R5900Context *ctx, PS2Runtime *)
    {
        static const auto start = std::chrono::steady_clock::now();
        const uint64_t ns = static_cast<uint64_t>(std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now() - start).count());
        // 147.456 MHz = 18432 / 125 ticks per ns; split to keep the product within 64 bits.
        const uint64_t ticks = ns / 125u * 18432u + ns % 125u * 18432u / 125u;
        setReturnU64(ctx, ticks);
        ctx->pc = getRegU32(ctx, 31);
    }

    PS2Runtime::RecompiledFunction g_setVsyncInterval = nullptr;
    uint32_t g_interval = 0u;
    bool g_gameWantsLocked = false; // the game asked for 2 (its normal locked rate), not 0 (unlocked)

    // The interval byte the vblank handler reads: gp - 0x7BFC, with the game's gp kept at 0x6B3F14.
    void writeIntervalByte(uint8_t *rdram, uint32_t value)
    {
        uint32_t gp;
        std::memcpy(&gp, rdram + 0x006B3F14u, 4);
        if (gp == 0u)
            return;
        rdram[(gp - 0x7BFCu) & 0x01FFFFFFu] = static_cast<uint8_t>(value);
    }

    constexpr uint32_t kCdStStart = 0x00296EB8u, kCdStStop = 0x00296F28u;
    PS2Runtime::RecompiledFunction g_cdStStart = nullptr, g_cdStStop = nullptr;

    void cdStStartThunk(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (ctx->pc == kCdStStart && g_gameWantsLocked)
            writeIntervalByte(rdram, 2u);
        g_cdStStart(rdram, ctx, runtime);
    }

    void cdStStopThunk(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (ctx->pc == kCdStStop && g_gameWantsLocked)
            writeIntervalByte(rdram, g_interval);
        g_cdStStop(rdram, ctx, runtime);
    }

    void setVsyncIntervalThunk(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (ctx->pc == kSetVsyncInterval)
        {
            uint32_t requested;
            std::memcpy(&requested, &ctx->r[4], sizeof(requested));
            requested &= 0xFFu;
            g_gameWantsLocked = requested == 2u;
            if (requested == 2u)
            {
                const uint64_t wide = g_interval;
                std::memcpy(&ctx->r[4], &wide, sizeof(wide));
            }
            std::fprintf(stderr, "[sho-fps] vblanks per frame %u -> %u\n", requested, requested == 2u ? g_interval : requested);
        }
        g_setVsyncInterval(rdram, ctx, runtime);
    }

    void applyShoFramerate(PS2Runtime &runtime)
    {
        if (const char *v = std::getenv("SHO_VSYNC_INTERVAL"); v && v[0])
        {
            g_interval = static_cast<uint32_t>(std::atoi(v));
            g_setVsyncInterval = runtime.lookupFunction(kSetVsyncInterval);
            if (g_setVsyncInterval)
                runtime.replaceFunction(kSetVsyncInterval, &setVsyncIntervalThunk);
            const char *stream30 = std::getenv("SHO_STREAM_30");
            g_cdStStart = runtime.lookupFunction(kCdStStart);
            g_cdStStop = runtime.lookupFunction(kCdStStop);
            if (g_interval < 2u && !(stream30 && stream30[0] == '0') && g_cdStStart && g_cdStStop)
            {
                runtime.replaceFunction(kCdStStart, &cdStStartThunk);
                runtime.replaceFunction(kCdStStop, &cdStStopThunk);
            }
        }
        if (const char *v = std::getenv("SHO_REAL_CLOCK"); !(v && v[0] == '0'))
            runtime.replaceFunction(kTimerSystemTime, &realClockTimer);
        if (const char *v = std::getenv("SHO_FPS"); v && v[0] == '1')
        {
            g_rdram = runtime.memory().getRDRAM();
            g_vblankFlip = runtime.lookupFunction(kVblankFlip);
            if (g_vblankFlip)
                runtime.replaceFunction(kVblankFlip, &vblankFlipThunk);
            std::thread([]
            {
                auto t0 = std::chrono::steady_clock::now();
                for (;;)
                {
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    const auto t1 = std::chrono::steady_clock::now();
                    const double dt = std::chrono::duration<double>(t1 - t0).count();
                    std::fprintf(stderr, "[sho-fps] %.1f new frames/s (%u handler calls)\n", g_shown.exchange(0u) / dt, g_handlerCalls.exchange(0u));
                    t0 = t1;
                    // SHO_DT_SCAN=1: list the floats in RAM that hold a frame length (1/30, 1/60 or 1/120 s, within 2 %).
                    static const char *scan = std::getenv("SHO_DT_SCAN");
                    if (scan && scan[0])
                    {
                        const uint8_t *ram = g_rdram;
                        std::string found;
                        unsigned count = 0;
                        for (uint32_t at = 0x100000u; at < 0x2000000u; at += 4u)
                        {
                            float f;
                            std::memcpy(&f, ram + at, 4);
                            const bool d30 = f > 0.03267f && f < 0.034f, d60 = f > 0.01633f && f < 0.017f, d120 = f > 0.00817f && f < 0.0085f;
                            if (d30 || d60 || d120)
                            {
                                ++count;
                                char line[32];
                                std::snprintf(line, sizeof(line), "%x %d\n", at, d30 ? 30 : d60 ? 60 : 120);
                                found += line;
                            }
                        }
                        if (std::FILE *out = std::fopen(scan, "a"))
                        {
                            std::fprintf(out, "--\n%s", found.c_str());
                            std::fclose(out);
                        }
                        std::fprintf(stderr, "[sho-dt] %u\n", count);
                    }
                }
            }).detach();
        }
    }
}

PS2_REGISTER_GAME_OVERRIDE("Silent Hill Origins frame rate", "SLUS_217.31", 0x001F61E0u, 0u, applyShoFramerate)
