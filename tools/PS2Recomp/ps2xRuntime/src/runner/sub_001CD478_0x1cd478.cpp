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

// Function: sub_001CD478
// Address: 0x1cd478 - 0x1cd4f0
void sub_001CD478_0x1cd478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD478_0x1cd478");
#endif

    switch (ctx->pc) {
        case 0x1cd488u: goto label_1cd488;
        case 0x1cd4b8u: goto label_1cd4b8;
        default: break;
    }

    ctx->pc = 0x1cd478u;

    // 0x1cd478: 0x248602ac  addiu       $a2, $a0, 0x2AC
    ctx->pc = 0x1cd478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 684));
    // 0x1cd47c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd480: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x1cd480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cd484: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1cd484u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cd488:
    // 0x1cd488: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cd488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd48c: 0x14470004  bne         $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD48Cu;
    {
        const bool branch_taken_0x1cd48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1CD490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD48Cu;
        // 0x1cd490: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd48c) {
            ctx->pc = 0x1CD4A0u;
            goto label_1cd4a0;
        }
    }
    ctx->pc = 0x1CD494u;
    // 0x1cd494: 0x8c8202a8  lw          $v0, 0x2A8($a0)
    ctx->pc = 0x1cd494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 680)));
    // 0x1cd498: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD498u;
        // 0x1cd49c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD4A0u;
label_1cd4a0:
    // 0x1cd4a0: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1cd4a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cd4a4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CD4A4u;
    {
        const bool branch_taken_0x1cd4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4A4u;
        // 0x1cd4a8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd4a4) {
            ctx->pc = 0x1CD488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd488;
        }
    }
    ctx->pc = 0x1CD4ACu;
    // 0x1cd4ac: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1cd4acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd4b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd4b4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1cd4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cd4b8:
    // 0x1cd4b8: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD4B8u;
    {
        const bool branch_taken_0x1cd4b8 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x1cd4b8) {
            ctx->pc = 0x1CD4C8u;
            goto label_1cd4c8;
        }
    }
    ctx->pc = 0x1CD4C0u;
    // 0x1cd4c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cd4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd4c4: 0xac62fffc  sw          $v0, -0x4($v1)
    ctx->pc = 0x1cd4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 2));
label_1cd4c8:
    // 0x1cd4c8: 0x14a60003  bne         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD4C8u;
    {
        const bool branch_taken_0x1cd4c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1CD4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4C8u;
        // 0x1cd4cc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd4c8) {
            ctx->pc = 0x1CD4D8u;
            goto label_1cd4d8;
        }
    }
    ctx->pc = 0x1CD4D0u;
    // 0x1cd4d0: 0x8c8202a8  lw          $v0, 0x2A8($a0)
    ctx->pc = 0x1cd4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 680)));
    // 0x1cd4d4: 0xac8202b8  sw          $v0, 0x2B8($a0)
    ctx->pc = 0x1cd4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 696), GPR_U32(ctx, 2));
label_1cd4d8:
    // 0x1cd4d8: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1cd4d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cd4dc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CD4DCu;
    {
        const bool branch_taken_0x1cd4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4DCu;
        // 0x1cd4e0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd4dc) {
            ctx->pc = 0x1CD4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd4b8;
        }
    }
    ctx->pc = 0x1CD4E4u;
    // 0x1cd4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD4ECu;
    // 0x1cd4ec: 0x0  nop
    ctx->pc = 0x1cd4ecu;
    // NOP
    ctx->pc = 0x1cd4f0u;
}
