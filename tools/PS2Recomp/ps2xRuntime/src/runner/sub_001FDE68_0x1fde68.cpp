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

// Function: sub_001FDE68
// Address: 0x1fde68 - 0x1fde98
void sub_001FDE68_0x1fde68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDE68_0x1fde68");
#endif

    switch (ctx->pc) {
        case 0x1fde84u: goto label_1fde84;
        default: break;
    }

    ctx->pc = 0x1fde68u;

    // 0x1fde68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fde68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fde6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fde6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fde70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fde70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fde74: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1fde74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde78: 0x244234e0  addiu       $v0, $v0, 0x34E0
    ctx->pc = 0x1fde78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13536));
    // 0x1fde7c: 0xc07f11c  jal         func_1FC470
    ctx->pc = 0x1FDE7Cu;
    SET_GPR_U32(ctx, 31, 0x1FDE84u);
    ctx->pc = 0x1FDE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDE7Cu;
    // 0x1fde80: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC470u, 0x1FDE7Cu, 0x1FDE84u)) {
        return;
    }
    ctx->pc = 0x1FDE84u;
label_1fde84:
    // 0x1fde84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fde84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fde88: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE88u;
        // 0x1fde8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDE90u;
    // 0x1fde90: 0x27bd0220  addiu       $sp, $sp, 0x220
    ctx->pc = 0x1fde90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1fde94: 0x0  nop
    ctx->pc = 0x1fde94u;
    // NOP
    ctx->pc = 0x1fde98u;
}
