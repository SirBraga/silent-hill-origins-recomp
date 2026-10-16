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

// Function: sub_00201B70
// Address: 0x201b70 - 0x201c60
void sub_00201B70_0x201b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201B70_0x201b70");
#endif

    switch (ctx->pc) {
        case 0x201ba0u: goto label_201ba0;
        case 0x201bacu: goto label_201bac;
        case 0x201bc0u: goto label_201bc0;
        case 0x201bd4u: goto label_201bd4;
        case 0x201c10u: goto label_201c10;
        case 0x201c18u: goto label_201c18;
        case 0x201c40u: goto label_201c40;
        case 0x201c48u: goto label_201c48;
        default: break;
    }

    ctx->pc = 0x201b70u;

    // 0x201b70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x201b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x201b74: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x201b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x201b78: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x201b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x201b7c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x201b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x201b80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x201b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x201b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x201b8c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x201b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x201b90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x201b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x201b94: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x201b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x201b98: 0xc093546  jal         func_24D518
    ctx->pc = 0x201B98u;
    SET_GPR_U32(ctx, 31, 0x201BA0u);
    ctx->pc = 0x201B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201B98u;
    // 0x201b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x201B98u, 0x201BA0u)) {
        return;
    }
    ctx->pc = 0x201BA0u;
label_201ba0:
    // 0x201ba0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x201ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201ba4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x201BA4u;
    SET_GPR_U32(ctx, 31, 0x201BACu);
    ctx->pc = 0x201BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201BA4u;
    // 0x201ba8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x201BA4u, 0x201BACu)) {
        return;
    }
    ctx->pc = 0x201BACu;
label_201bac:
    // 0x201bac: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x201bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201bb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x201bb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201bb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x201bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201bb8: 0xc093546  jal         func_24D518
    ctx->pc = 0x201BB8u;
    SET_GPR_U32(ctx, 31, 0x201BC0u);
    ctx->pc = 0x201BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201BB8u;
    // 0x201bbc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x201BB8u, 0x201BC0u)) {
        return;
    }
    ctx->pc = 0x201BC0u;
label_201bc0:
    // 0x201bc0: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x201bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x201bc4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x201bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x201bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x201bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201bcc: 0xc093546  jal         func_24D518
    ctx->pc = 0x201BCCu;
    SET_GPR_U32(ctx, 31, 0x201BD4u);
    ctx->pc = 0x201BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201BCCu;
    // 0x201bd0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x201BCCu, 0x201BD4u)) {
        return;
    }
    ctx->pc = 0x201BD4u;
label_201bd4:
    // 0x201bd4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x201bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x201bd8: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x201bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x201bdc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x201bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201be0: 0x8fa90014  lw          $t1, 0x14($sp)
    ctx->pc = 0x201be0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x201be4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x201be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x201be8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x201be8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201bec: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x201becu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x201bf0: 0x24a20014  addiu       $v0, $a1, 0x14
    ctx->pc = 0x201bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x201bf4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x201bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201bf8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x201bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x201bfc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x201bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201c00: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x201c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x201c04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201c08: 0xc080674  jal         func_2019D0
    ctx->pc = 0x201C08u;
    SET_GPR_U32(ctx, 31, 0x201C10u);
    ctx->pc = 0x201C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C08u;
    // 0x201c0c: 0x24470004  addiu       $a3, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2019D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2019D0u, 0x201C08u, 0x201C10u)) {
        return;
    }
    ctx->pc = 0x201C10u;
label_201c10:
    // 0x201c10: 0xc067c2e  jal         func_19F0B8
    ctx->pc = 0x201C10u;
    SET_GPR_U32(ctx, 31, 0x201C18u);
    ctx->pc = 0x19F0B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19F0B8u, 0x201C10u, 0x201C18u)) {
        return;
    }
    ctx->pc = 0x201C18u;
label_201c18:
    // 0x201c18: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x201c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x201c1c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x201c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x201c20: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x201c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201c24: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x201c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x201c28: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x201c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201c2c: 0x2466fff8  addiu       $a2, $v1, -0x8
    ctx->pc = 0x201c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x201c30: 0x18c00003  blez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x201C30u;
    {
        const bool branch_taken_0x201c30 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x201C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C30u;
        // 0x201c34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c30) {
            ctx->pc = 0x201C40u;
            goto label_201c40;
        }
    }
    ctx->pc = 0x201C38u;
    // 0x201c38: 0xc093546  jal         func_24D518
    ctx->pc = 0x201C38u;
    SET_GPR_U32(ctx, 31, 0x201C40u);
    ctx->pc = 0x201C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C38u;
    // 0x201c3c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x201C38u, 0x201C40u)) {
        return;
    }
    ctx->pc = 0x201C40u;
label_201c40:
    // 0x201c40: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x201C40u;
    SET_GPR_U32(ctx, 31, 0x201C48u);
    ctx->pc = 0x201C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C40u;
    // 0x201c44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x201C40u, 0x201C48u)) {
        return;
    }
    ctx->pc = 0x201C48u;
label_201c48:
    // 0x201c48: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x201c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x201c4c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x201c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201c50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x201c50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201c54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x201c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201c58: 0x3e00008  jr          $ra
    ctx->pc = 0x201C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C58u;
        // 0x201c5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201C60u;
}
