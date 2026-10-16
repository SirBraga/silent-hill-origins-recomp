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

// Function: sub_00171A28
// Address: 0x171a28 - 0x171ad8
void sub_00171A28_0x171a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171A28_0x171a28");
#endif

    switch (ctx->pc) {
        case 0x171a70u: goto label_171a70;
        case 0x171a78u: goto label_171a78;
        case 0x171a80u: goto label_171a80;
        case 0x171a88u: goto label_171a88;
        case 0x171a94u: goto label_171a94;
        case 0x171aa0u: goto label_171aa0;
        case 0x171aacu: goto label_171aac;
        default: break;
    }

    ctx->pc = 0x171a28u;

    // 0x171a28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x171a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x171a2c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x171a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x171a30: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x171a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x171a34: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x171a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x171a38: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x171a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x171a3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x171a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x171a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x171a44: 0x24425650  addiu       $v0, $v0, 0x5650
    ctx->pc = 0x171a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22096));
    // 0x171a48: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x171a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x171a4c: 0x24635670  addiu       $v1, $v1, 0x5670
    ctx->pc = 0x171a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22128));
    // 0x171a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171a54: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x171a54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a58: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x171a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x171a5c: 0x261200f0  addiu       $s2, $s0, 0xF0
    ctx->pc = 0x171a5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x171a60: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x171a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x171a64: 0x261100f8  addiu       $s1, $s0, 0xF8
    ctx->pc = 0x171a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    // 0x171a68: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x171A68u;
    SET_GPR_U32(ctx, 31, 0x171A70u);
    ctx->pc = 0x171A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A68u;
    // 0x171a6c: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x171A68u, 0x171A70u)) {
        return;
    }
    ctx->pc = 0x171A70u;
label_171a70:
    // 0x171a70: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x171A70u;
    SET_GPR_U32(ctx, 31, 0x171A78u);
    ctx->pc = 0x171A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A70u;
    // 0x171a74: 0x8e040108  lw          $a0, 0x108($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x171A70u, 0x171A78u)) {
        return;
    }
    ctx->pc = 0x171A78u;
label_171a78:
    // 0x171a78: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x171A78u;
    SET_GPR_U32(ctx, 31, 0x171A80u);
    ctx->pc = 0x171A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A78u;
    // 0x171a7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x171A78u, 0x171A80u)) {
        return;
    }
    ctx->pc = 0x171A80u;
label_171a80:
    // 0x171a80: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x171A80u;
    SET_GPR_U32(ctx, 31, 0x171A88u);
    ctx->pc = 0x171A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A80u;
    // 0x171a84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x171A80u, 0x171A88u)) {
        return;
    }
    ctx->pc = 0x171A88u;
label_171a88:
    // 0x171a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a8c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x171A8Cu;
    SET_GPR_U32(ctx, 31, 0x171A94u);
    ctx->pc = 0x171A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A8Cu;
    // 0x171a90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x171A8Cu, 0x171A94u)) {
        return;
    }
    ctx->pc = 0x171A94u;
label_171a94:
    // 0x171a94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x171a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a98: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x171A98u;
    SET_GPR_U32(ctx, 31, 0x171AA0u);
    ctx->pc = 0x171A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A98u;
    // 0x171a9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x171A98u, 0x171AA0u)) {
        return;
    }
    ctx->pc = 0x171AA0u;
label_171aa0:
    // 0x171aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171aa4: 0xc05c6c6  jal         func_171B18
    ctx->pc = 0x171AA4u;
    SET_GPR_U32(ctx, 31, 0x171AACu);
    ctx->pc = 0x171AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171AA4u;
    // 0x171aa8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x171B18u, 0x171AA4u, 0x171AACu)) {
        return;
    }
    ctx->pc = 0x171AACu;
label_171aac:
    // 0x171aac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x171aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x171ab0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x171ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171ab4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x171ab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171ab8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x171ab8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x171AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171AC0u;
        // 0x171ac4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171AC8u;
    // 0x171ac8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x171ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x171acc: 0x0  nop
    ctx->pc = 0x171accu;
    // NOP
    // 0x171ad0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x171ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x171ad4: 0x0  nop
    ctx->pc = 0x171ad4u;
    // NOP
    ctx->pc = 0x171ad8u;
}
