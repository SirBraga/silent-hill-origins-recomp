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

// Function: sub_00201A08
// Address: 0x201a08 - 0x201a88
void sub_00201A08_0x201a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201A08_0x201a08");
#endif

    switch (ctx->pc) {
        case 0x201a30u: goto label_201a30;
        case 0x201a44u: goto label_201a44;
        case 0x201a58u: goto label_201a58;
        case 0x201a68u: goto label_201a68;
        case 0x201a70u: goto label_201a70;
        default: break;
    }

    ctx->pc = 0x201a08u;

    // 0x201a08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x201a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x201a0c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x201a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x201a10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x201a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x201a14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x201a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x201a1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x201a1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x201a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x201a24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x201a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x201a28: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x201A28u;
    SET_GPR_U32(ctx, 31, 0x201A30u);
    ctx->pc = 0x201A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201A28u;
    // 0x201a2c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x201A28u, 0x201A30u)) {
        return;
    }
    ctx->pc = 0x201A30u;
label_201a30:
    // 0x201a30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x201a30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a34: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x201a34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x201a38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x201a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a3c: 0xc093546  jal         func_24D518
    ctx->pc = 0x201A3Cu;
    SET_GPR_U32(ctx, 31, 0x201A44u);
    ctx->pc = 0x201A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201A3Cu;
    // 0x201a40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x201A3Cu, 0x201A44u)) {
        return;
    }
    ctx->pc = 0x201A44u;
label_201a44:
    // 0x201a44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x201a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x201a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x201a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a50: 0xc08063c  jal         func_2018F0
    ctx->pc = 0x201A50u;
    SET_GPR_U32(ctx, 31, 0x201A58u);
    ctx->pc = 0x201A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201A50u;
    // 0x201a54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x201A50u, 0x201A58u)) {
        return;
    }
    ctx->pc = 0x201A58u;
label_201a58:
    // 0x201a58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201A58u;
    {
        const bool branch_taken_0x201a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A58u;
        // 0x201a5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a58) {
            ctx->pc = 0x201A68u;
            goto label_201a68;
        }
    }
    ctx->pc = 0x201A60u;
    // 0x201a60: 0xc080608  jal         func_201820
    ctx->pc = 0x201A60u;
    SET_GPR_U32(ctx, 31, 0x201A68u);
    ctx->pc = 0x201A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201A60u;
    // 0x201a64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201820u, 0x201A60u, 0x201A68u)) {
        return;
    }
    ctx->pc = 0x201A68u;
label_201a68:
    // 0x201a68: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x201A68u;
    SET_GPR_U32(ctx, 31, 0x201A70u);
    ctx->pc = 0x201A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201A68u;
    // 0x201a6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x201A68u, 0x201A70u)) {
        return;
    }
    ctx->pc = 0x201A70u;
label_201a70:
    // 0x201a70: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x201a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201a74: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x201a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201a78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x201a78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201a7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201a80: 0x3e00008  jr          $ra
    ctx->pc = 0x201A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A80u;
        // 0x201a84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201A88u;
}
