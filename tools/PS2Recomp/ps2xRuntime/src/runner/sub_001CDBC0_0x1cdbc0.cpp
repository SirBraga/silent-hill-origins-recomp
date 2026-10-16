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

// Function: sub_001CDBC0
// Address: 0x1cdbc0 - 0x1cdc18
void sub_001CDBC0_0x1cdbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDBC0_0x1cdbc0");
#endif

    switch (ctx->pc) {
        case 0x1cdbd8u: goto label_1cdbd8;
        case 0x1cdc08u: goto label_1cdc08;
        default: break;
    }

    ctx->pc = 0x1cdbc0u;

    // 0x1cdbc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdbc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdbc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdbcc: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x1cdbccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cdbd0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1cdbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cdbd4: 0x24830278  addiu       $v1, $a0, 0x278
    ctx->pc = 0x1cdbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 632));
label_1cdbd8:
    // 0x1cdbd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cdbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cdbdc: 0x54470005  bnel        $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CDBDCu;
    {
        const bool branch_taken_0x1cdbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x1cdbdc) {
            ctx->pc = 0x1CDBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDBDCu;
            // 0x1cdbe0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDBF4u;
            goto label_1cdbf4;
        }
    }
    ctx->pc = 0x1CDBE4u;
    // 0x1cdbe4: 0x8c820274  lw          $v0, 0x274($a0)
    ctx->pc = 0x1cdbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x1cdbe8: 0x14a60007  bne         $a1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDBE8u;
    {
        const bool branch_taken_0x1cdbe8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1CDBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBE8u;
        // 0x1cdbec: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbe8) {
            ctx->pc = 0x1CDC08u;
            goto label_1cdc08;
        }
    }
    ctx->pc = 0x1CDBF0u;
    // 0x1cdbf0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cdbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1cdbf4:
    // 0x1cdbf4: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x1cdbf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1cdbf8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CDBF8u;
    {
        const bool branch_taken_0x1cdbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBF8u;
        // 0x1cdbfc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbf8) {
            ctx->pc = 0x1CDBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdbd8;
        }
    }
    ctx->pc = 0x1CDC00u;
    // 0x1cdc00: 0xc073706  jal         func_1CDC18
    ctx->pc = 0x1CDC00u;
    SET_GPR_U32(ctx, 31, 0x1CDC08u);
    ctx->pc = 0x1CDC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CDC18u, 0x1CDC00u, 0x1CDC08u)) {
        return;
    }
    ctx->pc = 0x1CDC08u;
label_1cdc08:
    // 0x1cdc08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC0Cu;
        // 0x1cdc10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDC14u;
    // 0x1cdc14: 0x0  nop
    ctx->pc = 0x1cdc14u;
    // NOP
    ctx->pc = 0x1cdc18u;
}
