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

// Function: sub_001BDF28
// Address: 0x1bdf28 - 0x1bdf70
void sub_001BDF28_0x1bdf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDF28_0x1bdf28");
#endif

    switch (ctx->pc) {
        case 0x1bdf64u: goto label_1bdf64;
        default: break;
    }

    ctx->pc = 0x1bdf28u;

    // 0x1bdf28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bdf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bdf2c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bdf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bdf30: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1bdf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1bdf34: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDF34u;
    {
        const bool branch_taken_0x1bdf34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BDF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF34u;
        // 0x1bdf38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf34) {
            ctx->pc = 0x1BDF48u;
            goto label_1bdf48;
        }
    }
    ctx->pc = 0x1BDF3Cu;
    // 0x1bdf3c: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x1bdf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1bdf40: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BDF40u;
    {
        const bool branch_taken_0x1bdf40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bdf40) {
            ctx->pc = 0x1BDF5Cu;
            goto label_1bdf5c;
        }
    }
    ctx->pc = 0x1BDF48u;
label_1bdf48:
    // 0x1bdf48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdf4c: 0xac8002a0  sw          $zero, 0x2A0($a0)
    ctx->pc = 0x1bdf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 672), GPR_U32(ctx, 0));
    // 0x1bdf50: 0xac82029c  sw          $v0, 0x29C($a0)
    ctx->pc = 0x1bdf50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 668), GPR_U32(ctx, 2));
    // 0x1bdf54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BDF54u;
    {
        const bool branch_taken_0x1bdf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF54u;
        // 0x1bdf58: 0xac820298  sw          $v0, 0x298($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf54) {
            ctx->pc = 0x1BDF64u;
            goto label_1bdf64;
        }
    }
    ctx->pc = 0x1BDF5Cu;
label_1bdf5c:
    // 0x1bdf5c: 0xc06bd06  jal         func_1AF418
    ctx->pc = 0x1BDF5Cu;
    SET_GPR_U32(ctx, 31, 0x1BDF64u);
    ctx->pc = 0x1AF418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF418u, 0x1BDF5Cu, 0x1BDF64u)) {
        return;
    }
    ctx->pc = 0x1BDF64u;
label_1bdf64:
    // 0x1bdf64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdf64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdf68: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF68u;
        // 0x1bdf6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDF70u;
}
