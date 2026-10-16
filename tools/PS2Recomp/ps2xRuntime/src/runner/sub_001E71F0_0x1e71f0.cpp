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

// Function: sub_001E71F0
// Address: 0x1e71f0 - 0x1e7240
void sub_001E71F0_0x1e71f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E71F0_0x1e71f0");
#endif

    ctx->pc = 0x1e71f0u;

    // 0x1e71f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e71f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e71f4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1e71f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1e71f8: 0x93a70003  lbu         $a3, 0x3($sp)
    ctx->pc = 0x1e71f8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x1e71fc: 0x93a30002  lbu         $v1, 0x2($sp)
    ctx->pc = 0x1e71fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x1e7200: 0x93a60001  lbu         $a2, 0x1($sp)
    ctx->pc = 0x1e7200u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x1e7204: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x1e7204u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1e7208: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x1e7208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x1e720c: 0x93a80000  lbu         $t0, 0x0($sp)
    ctx->pc = 0x1e720cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7210: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1e7210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1e7214: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1e7214u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1e7218: 0x72a00  sll         $a1, $a3, 8
    ctx->pc = 0x1e7218u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1e721c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1e721cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1e7220: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1e7220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1e7224: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1e7224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1e7228: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1e7228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1e722c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1e722cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1e7230: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x1e7230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x1e7234: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x1e7234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x1e7238: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7238u;
        // 0x1e723c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7240u;
}
