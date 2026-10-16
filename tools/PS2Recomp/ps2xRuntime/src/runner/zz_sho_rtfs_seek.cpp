// Loading a saved game hung on the loading screen (a level file came out truncated and the loader looped).
//
// The RenderWare file system reads the disc through the IOP (RTFSSIOP): each request is an RPC, and the IOP answers
// "transfer done" with a SIF command whose EE handler (0x274A80) signals the file's semaphore (+0x60). The read
// (0x273C90) drains that semaphore before every request, so a completion that is not waited for (one that arrives
// while the RPC is still in flight) is dropped. The seek (0x274118) does not: a completion left over from the last
// read let the seek's own wait return at once, before the IOP had moved; the next read was refused (seek still
// pending) and the EE took the old buffer as its data, one sector behind from then on.
//
// Here the seek drains the semaphore first, as the read does. Every request the EE makes is waited for, so what is
// left there at a seek is stale. SHO_RTFS_SEEK_DRAIN=0 disables.
#include "ps2_runtime.h"
#include "game_overrides.h"
#include "runtime/ee_scheduler.h"

#include <cstdint>
#include <cstdlib>
#include <cstring>

namespace
{
    constexpr uint32_t kRtfsSeek = 0x00274118u;
    PS2Runtime::RecompiledFunction g_rtfsSeek = nullptr;

    void rtfsSeekThunk(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (ctx->pc == kRtfsSeek)
        {
            const uint32_t file = getRegU32(ctx, 5); // (result, file, offset, whence)
            if (file != 0u)
            {
                uint32_t sema;
                std::memcpy(&sema, rdram + ((file + 0x60u) & 0x1FFFFFFu), 4);
                EeScheduler &ee = runtime->eeScheduler();
                for (int guard = 0; guard < 64 && ee.pollSemaphore(static_cast<int>(sema)) > 0; ++guard)
                {
                }
            }
        }
        g_rtfsSeek(rdram, ctx, runtime);
    }

    void applyShoRtfsSeek(PS2Runtime &runtime)
    {
        if (const char *v = std::getenv("SHO_RTFS_SEEK_DRAIN"); v && v[0] == '0')
            return;
        g_rtfsSeek = runtime.lookupFunction(kRtfsSeek);
        if (g_rtfsSeek)
            runtime.replaceFunction(kRtfsSeek, &rtfsSeekThunk);
    }
}

PS2_REGISTER_GAME_OVERRIDE("Silent Hill Origins file seek drain", "SLUS_217.31", 0x001F61E0u, 0u, applyShoRtfsSeek)
