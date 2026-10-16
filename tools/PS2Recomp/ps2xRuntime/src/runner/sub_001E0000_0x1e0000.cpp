#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0000
// Address: 0x1e0000 - 0x1e0004
void sub_001E0000_0x1e0000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0000_0x1e0000");
#endif

    ctx->pc = 0x1e0000u;

    // 0x1e0000: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1e0000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x1e0004u;
}
