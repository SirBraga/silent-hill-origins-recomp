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

// Function: sub_00305CD8
// Address: 0x305cd8 - 0x305d38
void sub_00305CD8_0x305cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305CD8_0x305cd8");
#endif

    switch (ctx->pc) {
        case 0x305d08u: goto label_305d08;
        default: break;
    }

    ctx->pc = 0x305cd8u;

    // 0x305cd8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x305cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x305cdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x305cdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305ce0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x305ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x305ce4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x305ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x305ce8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x305ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305cec: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x305CECu;
    {
        const bool branch_taken_0x305cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x305CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CECu;
        // 0x305cf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305cec) {
            ctx->pc = 0x305D2Cu;
            goto label_305d2c;
        }
    }
    ctx->pc = 0x305CF4u;
    // 0x305cf4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x305cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x305cf8: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x305cf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305cfc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x305cfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305d00: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x305d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x305d04: 0x0  nop
    ctx->pc = 0x305d04u;
    // NOP
label_305d08:
    // 0x305d08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x305d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x305d0c: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x305d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x305d10: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x305d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x305d14: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x305d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x305d18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x305d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x305d1c: 0xe8182b  sltu        $v1, $a3, $t0
    ctx->pc = 0x305d1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x305d20: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x305d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x305d24: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x305D24u;
    {
        const bool branch_taken_0x305d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x305D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D24u;
        // 0x305d28: 0x82300a  movz        $a2, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305d24) {
            ctx->pc = 0x305D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305d08;
        }
    }
    ctx->pc = 0x305D2Cu;
label_305d2c:
    // 0x305d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x305D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D2Cu;
        // 0x305d30: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305D34u;
    // 0x305d34: 0x0  nop
    ctx->pc = 0x305d34u;
    // NOP
    ctx->pc = 0x305d38u;
}
