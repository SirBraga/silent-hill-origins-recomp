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

// Function: sub_001607E8
// Address: 0x1607e8 - 0x160800
void sub_001607E8_0x1607e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001607E8_0x1607e8");
#endif

    ctx->pc = 0x1607e8u;

    // 0x1607e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1607e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1607ec: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1607ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1607f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1607f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1607f4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1607f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1607f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1607f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1607fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1607fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160800u;
}
