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

// Function: sub_00180CA0
// Address: 0x180ca0 - 0x180cd0
void sub_00180CA0_0x180ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180CA0_0x180ca0");
#endif

    switch (ctx->pc) {
        case 0x180cbcu: goto label_180cbc;
        default: break;
    }

    ctx->pc = 0x180ca0u;

    // 0x180ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180ca4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x180ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x180ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180cac: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x180cacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180cb0: 0x24427e58  addiu       $v0, $v0, 0x7E58
    ctx->pc = 0x180cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32344));
    // 0x180cb4: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x180CB4u;
    SET_GPR_U32(ctx, 31, 0x180CBCu);
    ctx->pc = 0x180CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180CB4u;
    // 0x180cb8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x180CB4u, 0x180CBCu)) {
        return;
    }
    ctx->pc = 0x180CBCu;
label_180cbc:
    // 0x180cbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x180CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CC0u;
        // 0x180cc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180CC8u;
    // 0x180cc8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x180cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x180ccc: 0x0  nop
    ctx->pc = 0x180cccu;
    // NOP
    ctx->pc = 0x180cd0u;
}
