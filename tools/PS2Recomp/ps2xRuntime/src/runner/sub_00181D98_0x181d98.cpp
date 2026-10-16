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

// Function: sub_00181D98
// Address: 0x181d98 - 0x181de8
void sub_00181D98_0x181d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181D98_0x181d98");
#endif

    ctx->pc = 0x181d98u;

    // 0x181d98: 0x94b80  sll         $t1, $t1, 14
    ctx->pc = 0x181d98u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 14));
    // 0x181d9c: 0x843c0  sll         $t0, $t0, 15
    ctx->pc = 0x181d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 15));
    // 0x181da0: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x181da0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x181da4: 0x73e80  sll         $a3, $a3, 26
    ctx->pc = 0x181da4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 26));
    // 0x181da8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x181da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x181dac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x181dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x181db0: 0x1274825  or          $t1, $t1, $a3
    ctx->pc = 0x181db0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x181db4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x181db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x181db8: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x181db8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x181dbc: 0x63700  sll         $a2, $a2, 28
    ctx->pc = 0x181dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 28));
    // 0x181dc0: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x181dc0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x181dc4: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x181dc4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x181dc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x181dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x181dcc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x181dccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x181dd0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x181dd0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x181dd4: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x181dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x181dd8: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x181dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x181ddc: 0xac890004  sw          $t1, 0x4($a0)
    ctx->pc = 0x181ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 9));
    // 0x181de0: 0x3e00008  jr          $ra
    ctx->pc = 0x181DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181DE0u;
        // 0x181de4: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181DE8u;
}
