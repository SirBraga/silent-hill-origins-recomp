// SHO_SD_TRACE=1: logs what sceSdRemote (0x2F88B0, the game's own libsdr code) returns for the block-transfer status
// command (0x8100), which the streamed-sound code (0x181130) turns into the play position.
#include "ps2_runtime.h"
#include "game_overrides.h"

#include <cstdio>
#include <cstdlib>

namespace
{
    constexpr uint32_t kSdRemote = 0x002F88B0u;
    PS2Runtime::RecompiledFunction g_sdRemote = nullptr;

    void sdRemoteThunk(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const bool entry = ctx->pc == kSdRemote;
        const uint32_t cmd = getRegU32(ctx, 5), arg = getRegU32(ctx, 6);
        g_sdRemote(rdram, ctx, runtime);
        if (entry && cmd == 0x8100u)
        {
            static unsigned n = 0;
            if (n++ < 300u)
                std::fprintf(stderr, "[sho-sd] BlockTransStatus(core=%u) = 0x%08x\n", arg, getRegU32(ctx, 2));
        }
    }

    void applyShoSoundTrace(PS2Runtime &runtime)
    {
        if (!std::getenv("SHO_SD_TRACE"))
            return;
        g_sdRemote = runtime.lookupFunction(kSdRemote);
        if (g_sdRemote)
            runtime.replaceFunction(kSdRemote, &sdRemoteThunk);
    }
}

PS2_REGISTER_GAME_OVERRIDE("Silent Hill Origins sound trace", "SLUS_217.31", 0x001F61E0u, 0u, applyShoSoundTrace)
