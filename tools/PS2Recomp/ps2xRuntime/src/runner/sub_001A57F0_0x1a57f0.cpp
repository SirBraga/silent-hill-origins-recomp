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

// Function: sub_001A57F0
// Address: 0x1a57f0 - 0x1a5828
void sub_001A57F0_0x1a57f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A57F0_0x1a57f0");
#endif

    switch (ctx->pc) {
        case 0x1a5814u: goto label_1a5814;
        default: break;
    }

    ctx->pc = 0x1a57f0u;

    // 0x1a57f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a57f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a57f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a57f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a57f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a57f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a57fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a57fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5800: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a5800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a5804: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5804u;
    {
        const bool branch_taken_0x1a5804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5804u;
        // 0x1a5808: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5804) {
            ctx->pc = 0x1A5818u;
            goto label_1a5818;
        }
    }
    ctx->pc = 0x1A580Cu;
    // 0x1a580c: 0xc06952e  jal         func_1A54B8
    ctx->pc = 0x1A580Cu;
    SET_GPR_U32(ctx, 31, 0x1A5814u);
    ctx->pc = 0x1A54B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A54B8u, 0x1A580Cu, 0x1A5814u)) {
        return;
    }
    ctx->pc = 0x1A5814u;
label_1a5814:
    // 0x1a5814: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1a5814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1a5818:
    // 0x1a5818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a5818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a581c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a581cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5820: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5820u;
        // 0x1a5824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5828u;
}
