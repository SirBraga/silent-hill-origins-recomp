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

// Function: sub_001EFA28
// Address: 0x1efa28 - 0x1efaa8
void sub_001EFA28_0x1efa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFA28_0x1efa28");
#endif

    switch (ctx->pc) {
        case 0x1efa58u: goto label_1efa58;
        case 0x1efa64u: goto label_1efa64;
        case 0x1efa70u: goto label_1efa70;
        case 0x1efa7cu: goto label_1efa7c;
        case 0x1efa88u: goto label_1efa88;
        default: break;
    }

    ctx->pc = 0x1efa28u;

    // 0x1efa28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1efa28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1efa2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1efa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1efa30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1efa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1efa34: 0x24421f70  addiu       $v0, $v0, 0x1F70
    ctx->pc = 0x1efa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8048));
    // 0x1efa38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1efa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1efa3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1efa3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1efa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1efa44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1efa44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa48: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1efa48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1efa4c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1efa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1efa50: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1EFA50u;
    SET_GPR_U32(ctx, 31, 0x1EFA58u);
    ctx->pc = 0x1EFA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFA50u;
    // 0x1efa54: 0x24a58918  addiu       $a1, $a1, -0x76E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1EFA50u, 0x1EFA58u)) {
        return;
    }
    ctx->pc = 0x1EFA58u;
label_1efa58:
    // 0x1efa58: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1efa58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1efa5c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1EFA5Cu;
    SET_GPR_U32(ctx, 31, 0x1EFA64u);
    ctx->pc = 0x1EFA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFA5Cu;
    // 0x1efa60: 0x2484f8b8  addiu       $a0, $a0, -0x748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1EFA5Cu, 0x1EFA64u)) {
        return;
    }
    ctx->pc = 0x1EFA64u;
label_1efa64:
    // 0x1efa64: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1efa64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1efa68: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1EFA68u;
    SET_GPR_U32(ctx, 31, 0x1EFA70u);
    ctx->pc = 0x1EFA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFA68u;
    // 0x1efa6c: 0x2484f8c0  addiu       $a0, $a0, -0x740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1EFA68u, 0x1EFA70u)) {
        return;
    }
    ctx->pc = 0x1EFA70u;
label_1efa70:
    // 0x1efa70: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1efa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1efa74: 0xc07924c  jal         func_1E4930
    ctx->pc = 0x1EFA74u;
    SET_GPR_U32(ctx, 31, 0x1EFA7Cu);
    ctx->pc = 0x1EFA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFA74u;
    // 0x1efa78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4930u, 0x1EFA74u, 0x1EFA7Cu)) {
        return;
    }
    ctx->pc = 0x1EFA7Cu;
label_1efa7c:
    // 0x1efa7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1efa7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa80: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x1EFA80u;
    SET_GPR_U32(ctx, 31, 0x1EFA88u);
    ctx->pc = 0x1EFA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFA80u;
    // 0x1efa84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x1EFA80u, 0x1EFA88u)) {
        return;
    }
    ctx->pc = 0x1EFA88u;
label_1efa88:
    // 0x1efa88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1efa88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1efa8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1efa8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efa90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1efa90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efa94: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA94u;
        // 0x1efa98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFA9Cu;
    // 0x1efa9c: 0x0  nop
    ctx->pc = 0x1efa9cu;
    // NOP
    // 0x1efaa0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1efaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1efaa4: 0x0  nop
    ctx->pc = 0x1efaa4u;
    // NOP
    ctx->pc = 0x1efaa8u;
}
