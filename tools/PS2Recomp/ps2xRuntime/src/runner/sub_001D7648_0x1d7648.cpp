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

// Function: sub_001D7648
// Address: 0x1d7648 - 0x1d7688
void sub_001D7648_0x1d7648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7648_0x1d7648");
#endif

    switch (ctx->pc) {
        case 0x1d7660u: goto label_1d7660;
        case 0x1d7670u: goto label_1d7670;
        default: break;
    }

    ctx->pc = 0x1d7648u;

    // 0x1d7648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d764c: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x1d764cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x1d7650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7654: 0x24a57618  addiu       $a1, $a1, 0x7618
    ctx->pc = 0x1d7654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30232));
    // 0x1d7658: 0xc080052  jal         func_200148
    ctx->pc = 0x1D7658u;
    SET_GPR_U32(ctx, 31, 0x1D7660u);
    ctx->pc = 0x1D765Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7658u;
    // 0x1d765c: 0x24040706  addiu       $a0, $zero, 0x706 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1798));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200148u, 0x1D7658u, 0x1D7660u)) {
        return;
    }
    ctx->pc = 0x1D7660u;
label_1d7660:
    // 0x1d7660: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x1d7660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x1d7664: 0x24040707  addiu       $a0, $zero, 0x707
    ctx->pc = 0x1d7664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1799));
    // 0x1d7668: 0xc080052  jal         func_200148
    ctx->pc = 0x1D7668u;
    SET_GPR_U32(ctx, 31, 0x1D7670u);
    ctx->pc = 0x1D766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7668u;
    // 0x1d766c: 0x24a57628  addiu       $a1, $a1, 0x7628 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200148u, 0x1D7668u, 0x1D7670u)) {
        return;
    }
    ctx->pc = 0x1D7670u;
label_1d7670:
    // 0x1d7670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7674: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7674u;
        // 0x1d7678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D767Cu;
    // 0x1d767c: 0x0  nop
    ctx->pc = 0x1d767cu;
    // NOP
    // 0x1d7680: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d7680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d7684: 0x0  nop
    ctx->pc = 0x1d7684u;
    // NOP
    ctx->pc = 0x1d7688u;
}
