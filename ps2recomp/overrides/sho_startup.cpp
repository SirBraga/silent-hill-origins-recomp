// Skips the start-up language and aspect-ratio screens with preset choices.
//
// The start-up screen (vtable 0x692470) runs the steps listed at 0x338500: 0 language, 3 memory-card check, 1 aspect
// ratio, 2 logo movie, 4 end. For the language (step type 0) and aspect (type 1) steps, the pad handler 0x151EC0 /
// 0x151F80 returns 1 once the player confirms the option highlighted in the screen object's field +0xC; the step's own
// finish routine then applies it. Here those handlers mark the preset option and confirm at once, so the game takes its
// normal path as if the player had pressed the button.
//
//   SHO_LANGUAGE=en|fr|it|de|es|pt (default en; the order of the game's flags: GB FR IT DE ES; pt is the English
//                                 slot, whose text and font the launcher replaces with PS2X_CD_OVERLAY)
//   SHO_WIDESCREEN=1|0            16:9 (default) or 4:3
//   SHO_SKIP_STARTUP=0            shows the two screens again
#include "ps2_runtime.h"
#include "game_overrides.h"

#include <cstdint>
#include <cstdlib>
#include <cstring>

namespace
{
    constexpr uint32_t kLanguageInput = 0x00151EC0u, kAspectInput = 0x00151F80u;
    uint32_t g_language = 0u, g_aspect = 1u;

    void confirmWith(uint8_t *rdram, R5900Context *ctx, uint32_t choice)
    {
        const uint32_t screen = getRegU32(ctx, 4);
        std::memcpy(rdram + ((screen + 0xCu) & 0x01FFFFFFu), &choice, sizeof(choice));
        setReturnS32(ctx, 1);
        ctx->pc = getRegU32(ctx, 31);
    }

    // Moving between flags, the handler calls 0x1F3560 (the language switch) with the word at 0x338558 + 12 * option;
    // that call is what changes the language, so it is made here too.
    constexpr uint32_t kSetLanguage = 0x001F3560u, kLanguageCodes = 0x00338558u;
    PS2Runtime::RecompiledFunction g_setLanguage = nullptr;

    void languageInput(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t screen = getRegU32(ctx, 4), ra = getRegU32(ctx, 31);
        if (g_setLanguage)
        {
            uint32_t code;
            std::memcpy(&code, rdram + kLanguageCodes + 12u * g_language, sizeof(code));
            const uint64_t wide = code;
            std::memcpy(&ctx->r[4], &wide, sizeof(wide));
            const uint64_t back = ra;
            std::memcpy(&ctx->r[31], &back, sizeof(back));
            ctx->pc = kSetLanguage;
            g_setLanguage(rdram, ctx, runtime);
            const uint64_t a0 = screen;
            std::memcpy(&ctx->r[4], &a0, sizeof(a0));
        }
        confirmWith(rdram, ctx, g_language);
        ctx->pc = ra;
    }
    void aspectInput(uint8_t *rdram, R5900Context *ctx, PS2Runtime *) { confirmWith(rdram, ctx, g_aspect); }

    void applyShoStartup(PS2Runtime &runtime)
    {
        if (const char *v = std::getenv("SHO_SKIP_STARTUP"); v && v[0] == '0')
            return;
        if (const char *v = std::getenv("SHO_LANGUAGE"); v && v[0])
        {
            static const char *const codes[] = {"en", "fr", "it", "de", "es"};
            for (uint32_t i = 0; i < 5u; ++i)
                if (std::strncmp(v, codes[i], 2) == 0)
                    g_language = i;
            if (std::strncmp(v, "pt", 2) == 0)
                g_language = 0u; // the English slot, whose text the launcher replaces
        }
        if (const char *v = std::getenv("SHO_WIDESCREEN"); v && v[0] == '0')
            g_aspect = 0u;
        g_setLanguage = runtime.lookupFunction(kSetLanguage);
        runtime.replaceFunction(kLanguageInput, &languageInput);
        runtime.replaceFunction(kAspectInput, &aspectInput);
    }
}

PS2_REGISTER_GAME_OVERRIDE("Silent Hill Origins start-up choices", "SLUS_217.31", 0x001F61E0u, 0u, applyShoStartup)
