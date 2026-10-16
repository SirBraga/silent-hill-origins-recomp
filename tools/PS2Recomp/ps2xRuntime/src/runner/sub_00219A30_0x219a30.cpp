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

// Function: sub_00219A30
// Address: 0x219a30 - 0x219ac0
void sub_00219A30_0x219a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219A30_0x219a30");
#endif

    switch (ctx->pc) {
        case 0x219a58u: goto label_219a58;
        case 0x219a6cu: goto label_219a6c;
        case 0x219a80u: goto label_219a80;
        case 0x219a88u: goto label_219a88;
        case 0x219a90u: goto label_219a90;
        case 0x219a98u: goto label_219a98;
        case 0x219aacu: goto label_219aac;
        default: break;
    }

    ctx->pc = 0x219a30u;

    // 0x219a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x219a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x219a34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x219a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x219a38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x219a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x219a3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x219a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x219a44: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x219a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x219a48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219A48u;
    {
        const bool branch_taken_0x219a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x219A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A48u;
        // 0x219a4c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219a48) {
            ctx->pc = 0x219A58u;
            goto label_219a58;
        }
    }
    ctx->pc = 0x219A50u;
    // 0x219a50: 0xc086ad0  jal         func_21AB40
    ctx->pc = 0x219A50u;
    SET_GPR_U32(ctx, 31, 0x219A58u);
    ctx->pc = 0x219A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A50u;
    // 0x219a54: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AB40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AB40u, 0x219A50u, 0x219A58u)) {
        return;
    }
    ctx->pc = 0x219A58u;
label_219a58:
    // 0x219a58: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x219a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x219a5c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x219A5Cu;
    {
        const bool branch_taken_0x219a5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x219a5c) {
            ctx->pc = 0x219A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219A5Cu;
            // 0x219a60: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219A70u;
            goto label_219a70;
        }
    }
    ctx->pc = 0x219A64u;
    // 0x219a64: 0xc086bd0  jal         func_21AF40
    ctx->pc = 0x219A64u;
    SET_GPR_U32(ctx, 31, 0x219A6Cu);
    ctx->pc = 0x219A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A64u;
    // 0x219a68: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AF40u, 0x219A64u, 0x219A6Cu)) {
        return;
    }
    ctx->pc = 0x219A6Cu;
label_219a6c:
    // 0x219a6c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x219a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_219a70:
    // 0x219a70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219A70u;
    {
        const bool branch_taken_0x219a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x219a70) {
            ctx->pc = 0x219A80u;
            goto label_219a80;
        }
    }
    ctx->pc = 0x219A78u;
    // 0x219a78: 0xc086b3a  jal         func_21ACE8
    ctx->pc = 0x219A78u;
    SET_GPR_U32(ctx, 31, 0x219A80u);
    ctx->pc = 0x219A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A78u;
    // 0x219a7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21ACE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21ACE8u, 0x219A78u, 0x219A80u)) {
        return;
    }
    ctx->pc = 0x219A80u;
label_219a80:
    // 0x219a80: 0xc093106  jal         func_24C418
    ctx->pc = 0x219A80u;
    SET_GPR_U32(ctx, 31, 0x219A88u);
    ctx->pc = 0x219A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A80u;
    // 0x219a84: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x219A80u, 0x219A88u)) {
        return;
    }
    ctx->pc = 0x219A88u;
label_219a88:
    // 0x219a88: 0xc093106  jal         func_24C418
    ctx->pc = 0x219A88u;
    SET_GPR_U32(ctx, 31, 0x219A90u);
    ctx->pc = 0x219A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A88u;
    // 0x219a8c: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x219A88u, 0x219A90u)) {
        return;
    }
    ctx->pc = 0x219A90u;
label_219a90:
    // 0x219a90: 0xc086aae  jal         func_21AAB8
    ctx->pc = 0x219A90u;
    SET_GPR_U32(ctx, 31, 0x219A98u);
    ctx->pc = 0x21AAB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AAB8u, 0x219A90u, 0x219A98u)) {
        return;
    }
    ctx->pc = 0x219A98u;
label_219a98:
    // 0x219a98: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x219a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x219a9c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x219A9Cu;
    {
        const bool branch_taken_0x219a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x219a9c) {
            ctx->pc = 0x219AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219A9Cu;
            // 0x219aa0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219AB0u;
            goto label_219ab0;
        }
    }
    ctx->pc = 0x219AA4u;
    // 0x219aa4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x219AA4u;
    SET_GPR_U32(ctx, 31, 0x219AACu);
    ctx->pc = 0x219AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AA4u;
    // 0x219aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x219AA4u, 0x219AACu)) {
        return;
    }
    ctx->pc = 0x219AACu;
label_219aac:
    // 0x219aac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x219aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_219ab0:
    // 0x219ab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x219ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219ab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x219ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x219AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AB8u;
        // 0x219abc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219AC0u;
}
