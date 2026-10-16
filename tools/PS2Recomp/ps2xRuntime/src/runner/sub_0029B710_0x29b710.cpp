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

// Function: sub_0029B710
// Address: 0x29b710 - 0x29b740
void sub_0029B710_0x29b710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B710_0x29b710");
#endif

    switch (ctx->pc) {
        case 0x29b710u: goto label_29b710;
        case 0x29b714u: goto label_29b714;
        case 0x29b718u: goto label_29b718;
        case 0x29b71cu: goto label_29b71c;
        case 0x29b720u: goto label_29b720;
        case 0x29b724u: goto label_29b724;
        case 0x29b728u: goto label_29b728;
        case 0x29b72cu: goto label_29b72c;
        case 0x29b730u: goto label_29b730;
        case 0x29b734u: goto label_29b734;
        case 0x29b738u: goto label_29b738;
        case 0x29b73cu: goto label_29b73c;
        default: break;
    }

    ctx->pc = 0x29b710u;

label_29b710:
    // 0x29b710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29b710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29b714:
    // 0x29b714: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x29b714u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29b718:
    // 0x29b718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29b71c:
    // 0x29b71c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29b71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b720:
    // 0x29b720: 0x8c880050  lw          $t0, 0x50($a0)
    ctx->pc = 0x29b720u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_29b724:
    // 0x29b724: 0x85030040  lh          $v1, 0x40($t0)
    ctx->pc = 0x29b724u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 64)));
label_29b728:
    // 0x29b728: 0x8d020044  lw          $v0, 0x44($t0)
    ctx->pc = 0x29b728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
label_29b72c:
    // 0x29b72c: 0x40f809  jalr        $v0
label_29b730:
    if (ctx->pc == 0x29B730u) {
        ctx->pc = 0x29B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B72Cu;
        // 0x29b730: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B734u;
        goto label_29b734;
    }
    ctx->pc = 0x29B72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29B734u);
        ctx->pc = 0x29B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B72Cu;
        // 0x29b730: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B72Cu, 0x29B734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29B734u;
label_29b734:
    // 0x29b734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29b738:
    // 0x29b738: 0x3e00008  jr          $ra
label_29b73c:
    if (ctx->pc == 0x29B73Cu) {
        ctx->pc = 0x29B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B738u;
        // 0x29b73c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B740u;
        goto label_fallthrough_0x29b738;
    }
    ctx->pc = 0x29B738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B738u;
        // 0x29b73c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29b738:
    ctx->pc = 0x29B740u;
}
