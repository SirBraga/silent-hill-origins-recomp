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

// Function: sub_001D9760
// Address: 0x1d9760 - 0x1d97a8
void sub_001D9760_0x1d9760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9760_0x1d9760");
#endif

    switch (ctx->pc) {
        case 0x1d9778u: goto label_1d9778;
        default: break;
    }

    ctx->pc = 0x1d9760u;

    // 0x1d9760: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d9760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d9764: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d9764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9768: 0x24428a68  addiu       $v0, $v0, -0x7598
    ctx->pc = 0x1d9768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937192));
    // 0x1d976c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d976cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9770: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1d9770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1d9774: 0x0  nop
    ctx->pc = 0x1d9774u;
    // NOP
label_1d9778:
    // 0x1d9778: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d9778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d977c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D977Cu;
    {
        const bool branch_taken_0x1d977c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D977Cu;
        // 0x1d9780: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d977c) {
            ctx->pc = 0x1D9790u;
            goto label_1d9790;
        }
    }
    ctx->pc = 0x1D9784u;
    // 0x1d9784: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1d9784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1d9788: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9788u;
        // 0x1d978c: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9790u;
label_1d9790:
    // 0x1d9790: 0x2c820040  sltiu       $v0, $a0, 0x40
    ctx->pc = 0x1d9790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1d9794: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D9794u;
    {
        const bool branch_taken_0x1d9794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9794u;
        // 0x1d9798: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9794) {
            ctx->pc = 0x1D9778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9778;
        }
    }
    ctx->pc = 0x1D979Cu;
    // 0x1d979c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D979Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D97A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D979Cu;
        // 0x1d97a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D979Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D97A4u;
    // 0x1d97a4: 0x0  nop
    ctx->pc = 0x1d97a4u;
    // NOP
    ctx->pc = 0x1d97a8u;
}
