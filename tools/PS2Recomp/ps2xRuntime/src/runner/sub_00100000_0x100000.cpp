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

// Function: sub_00100000
// Address: 0x100000 - 0x100010
void sub_00100000_0x100000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100000_0x100000");
#endif

    ctx->pc = 0x100000u;

    // 0x100000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x100000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x100004: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x100004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x100008: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x100008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x10000c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10000cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x100010u;
}
