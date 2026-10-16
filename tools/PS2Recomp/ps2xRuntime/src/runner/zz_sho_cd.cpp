// Silent Hill: Origins (SLUS_217.31): SDK entry points the analyzer left unstubbed.
//
// CD file lookup:
// The analyzer names 0x00295EF8 sceCdLayerSearchFile but does not stub it, so the
// guest SDK body runs and loops in sceSifBindRpc on SID 0x80000597 (CDVDFSV search
// file), which no IOP module here registers. The arguments match sceCdSearchFile
// (a0 = sceCdlFILE*, a1 = path; a2 = layer, always 0 on this single-layer disc),
// so the address is routed to the runtime's HLE handler.
//
// Movie end:
// 0x002F9948 is sceMpegIsEnd (returns *mp->sys). The HLE decoder never writes that
// guest field, so the movie loop at 0x00182568 would poll it forever after the CD
// stream reached its end.
#include "game_overrides.h"
#include "ps2_runtime.h"

#include <cstdio>

namespace
{
    void applyShoCd(PS2Runtime &runtime)
    {
        const bool bound = ps2_game_overrides::bindAddressHandler(runtime, 0x00295EF8u, "sceCdSearchFile");
        std::fprintf(stderr, "[sho-cd] sceCdLayerSearchFile@0x00295EF8 -> sceCdSearchFile bound=%d\n", bound ? 1 : 0);
        const bool isEndBound = ps2_game_overrides::bindAddressHandler(runtime, 0x002F9948u, "sceMpegIsEnd");
        std::fprintf(stderr, "[sho-cd] sceMpegIsEnd@0x002F9948 bound=%d\n", isEndBound ? 1 : 0);
    }
}

PS2_REGISTER_GAME_OVERRIDE("Silent Hill Origins SDK stubs", "SLUS_217.31", 0x001F61E0u, 0u, applyShoCd)
