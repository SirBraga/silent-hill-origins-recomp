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

// Function: sub_00178B50
// Address: 0x178b50 - 0x178b90
void sub_00178B50_0x178b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178B50_0x178b50");
#endif

    switch (ctx->pc) {
        case 0x178b70u: goto label_178b70;
        case 0x178b7cu: goto label_178b7c;
        default: break;
    }

    ctx->pc = 0x178b50u;

    // 0x178b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178b54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x178b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x178b58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x178b5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178b64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x178b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b68: 0xc08939a  jal         func_224E68
    ctx->pc = 0x178B68u;
    SET_GPR_U32(ctx, 31, 0x178B70u);
    ctx->pc = 0x178B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B68u;
    // 0x178b6c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E68u, 0x178B68u, 0x178B70u)) {
        return;
    }
    ctx->pc = 0x178B70u;
label_178b70:
    // 0x178b70: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x178b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x178b74: 0xc097922  jal         func_25E488
    ctx->pc = 0x178B74u;
    SET_GPR_U32(ctx, 31, 0x178B7Cu);
    ctx->pc = 0x178B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B74u;
    // 0x178b78: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E488u, 0x178B74u, 0x178B7Cu)) {
        return;
    }
    ctx->pc = 0x178B7Cu;
label_178b7c:
    // 0x178b7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x178b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178b80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178b80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178b84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178b88: 0x3e00008  jr          $ra
    ctx->pc = 0x178B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B88u;
        // 0x178b8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178B90u;
}
