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

// Function: sub_00168B60
// Address: 0x168b60 - 0x168bb0
void sub_00168B60_0x168b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168B60_0x168b60");
#endif

    switch (ctx->pc) {
        case 0x168b90u: goto label_168b90;
        case 0x168b9cu: goto label_168b9c;
        default: break;
    }

    ctx->pc = 0x168b60u;

    // 0x168b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168b64: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x168b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x168b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x168b6c: 0x24424110  addiu       $v0, $v0, 0x4110
    ctx->pc = 0x168b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16656));
    // 0x168b70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x168b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x168b74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x168b74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168b7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b80: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x168b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x168b84: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x168b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x168b88: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x168B88u;
    SET_GPR_U32(ctx, 31, 0x168B90u);
    ctx->pc = 0x168B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168B88u;
    // 0x168b8c: 0x24a58878  addiu       $a1, $a1, -0x7788 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x168B88u, 0x168B90u)) {
        return;
    }
    ctx->pc = 0x168B90u;
label_168b90:
    // 0x168b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b94: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x168B94u;
    SET_GPR_U32(ctx, 31, 0x168B9Cu);
    ctx->pc = 0x168B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168B94u;
    // 0x168b98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x168B94u, 0x168B9Cu)) {
        return;
    }
    ctx->pc = 0x168B9Cu;
label_168b9c:
    // 0x168b9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x168b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168ba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x168BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168BA8u;
        // 0x168bac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168BB0u;
}
