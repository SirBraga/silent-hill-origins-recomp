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

// Function: sub_00206648
// Address: 0x206648 - 0x206680
void sub_00206648_0x206648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206648_0x206648");
#endif

    switch (ctx->pc) {
        case 0x206664u: goto label_206664;
        case 0x20666cu: goto label_20666c;
        default: break;
    }

    ctx->pc = 0x206648u;

    // 0x206648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20664c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20664cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x206650: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206654: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206654u;
    {
        const bool branch_taken_0x206654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x206658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206654u;
        // 0x206658: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206654) {
            ctx->pc = 0x20666Cu;
            goto label_20666c;
        }
    }
    ctx->pc = 0x20665Cu;
    // 0x20665c: 0xc0850b2  jal         func_2142C8
    ctx->pc = 0x20665Cu;
    SET_GPR_U32(ctx, 31, 0x206664u);
    ctx->pc = 0x206660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20665Cu;
    // 0x206660: 0x26042018  addiu       $a0, $s0, 0x2018 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2142C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2142C8u, 0x20665Cu, 0x206664u)) {
        return;
    }
    ctx->pc = 0x206664u;
label_206664:
    // 0x206664: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x206664u;
    SET_GPR_U32(ctx, 31, 0x20666Cu);
    ctx->pc = 0x206668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206664u;
    // 0x206668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x206664u, 0x20666Cu)) {
        return;
    }
    ctx->pc = 0x20666Cu;
label_20666c:
    // 0x20666c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20666cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206670: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206678: 0x3e00008  jr          $ra
    ctx->pc = 0x206678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206678u;
        // 0x20667c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206680u;
}
