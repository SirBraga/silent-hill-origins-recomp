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

// Function: sub_001E9D90
// Address: 0x1e9d90 - 0x1e9e08
void sub_001E9D90_0x1e9d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9D90_0x1e9d90");
#endif

    switch (ctx->pc) {
        case 0x1e9dc8u: goto label_1e9dc8;
        default: break;
    }

    ctx->pc = 0x1e9d90u;

    // 0x1e9d90: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1e9d90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d94: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x1e9d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1e9d98: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E9D98u;
    {
        const bool branch_taken_0x1e9d98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D98u;
        // 0x1e9d9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d98) {
            ctx->pc = 0x1E9DFCu;
            goto label_1e9dfc;
        }
    }
    ctx->pc = 0x1E9DA0u;
    // 0x1e9da0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e9da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e9da4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1e9da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e9da8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1e9da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e9dac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e9dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e9db0: 0x8ca8006c  lw          $t0, 0x6C($a1)
    ctx->pc = 0x1e9db0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x1e9db4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e9db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e9db8: 0x8ca20070  lw          $v0, 0x70($a1)
    ctx->pc = 0x1e9db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x1e9dbc: 0x1900000f  blez        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E9DBCu;
    {
        const bool branch_taken_0x1e9dbc = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x1E9DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9DBCu;
        // 0x1e9dc0: 0x8c690000  lw          $t1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9dbc) {
            ctx->pc = 0x1E9DFCu;
            goto label_1e9dfc;
        }
    }
    ctx->pc = 0x1E9DC4u;
    // 0x1e9dc4: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x1e9dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1e9dc8:
    // 0x1e9dc8: 0x8d220028  lw          $v0, 0x28($t1)
    ctx->pc = 0x1e9dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x1e9dcc: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1e9dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1e9dd0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e9dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e9dd4: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x1e9dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1e9dd8: 0xc8282a  slt         $a1, $a2, $t0
    ctx->pc = 0x1e9dd8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1e9ddc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e9ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e9de0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e9de4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e9de8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1e9de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1e9dec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e9decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9df0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1e9df0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1e9df4: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E9DF4u;
    {
        const bool branch_taken_0x1e9df4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9DF4u;
        // 0x1e9df8: 0x24e70050  addiu       $a3, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9df4) {
            ctx->pc = 0x1E9DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9dc8;
        }
    }
    ctx->pc = 0x1E9DFCu;
label_1e9dfc:
    // 0x1e9dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9E04u;
    // 0x1e9e04: 0x0  nop
    ctx->pc = 0x1e9e04u;
    // NOP
    ctx->pc = 0x1e9e08u;
}
