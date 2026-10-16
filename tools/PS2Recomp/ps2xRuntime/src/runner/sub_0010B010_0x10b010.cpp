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

// Function: sub_0010B010
// Address: 0x10b010 - 0x10b0c0
void sub_0010B010_0x10b010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B010_0x10b010");
#endif

    switch (ctx->pc) {
        case 0x10b03cu: goto label_10b03c;
        case 0x10b050u: goto label_10b050;
        case 0x10b06cu: goto label_10b06c;
        case 0x10b094u: goto label_10b094;
        case 0x10b0a4u: goto label_10b0a4;
        default: break;
    }

    ctx->pc = 0x10b010u;

    // 0x10b010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10b010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10b014: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x10b014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x10b018: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10b018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10b01c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x10b01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x10b020: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10b020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b028: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x10b028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10b02c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B02Cu;
    {
        const bool branch_taken_0x10b02c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B02Cu;
        // 0x10b030: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b02c) {
            ctx->pc = 0x10B03Cu;
            goto label_10b03c;
        }
    }
    ctx->pc = 0x10B034u;
    // 0x10b034: 0xc0808d4  jal         func_202350
    ctx->pc = 0x10B034u;
    SET_GPR_U32(ctx, 31, 0x10B03Cu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x10B034u, 0x10B03Cu)) {
        return;
    }
    ctx->pc = 0x10B03Cu;
label_10b03c:
    // 0x10b03c: 0x32120001  andi        $s2, $s0, 0x1
    ctx->pc = 0x10b03cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x10b040: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x10b040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x10b044: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10B044u;
    {
        const bool branch_taken_0x10b044 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x10B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B044u;
        // 0x10b048: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b044) {
            ctx->pc = 0x10B080u;
            goto label_10b080;
        }
    }
    ctx->pc = 0x10B04Cu;
    // 0x10b04c: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x10b04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_10b050:
    // 0x10b050: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x10b050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x10b054: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10b054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10b058: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10b058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b05c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B05Cu;
    {
        const bool branch_taken_0x10b05c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b05c) {
            ctx->pc = 0x10B060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B05Cu;
            // 0x10b060: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B070u;
            goto label_10b070;
        }
    }
    ctx->pc = 0x10B064u;
    // 0x10b064: 0xc0808d4  jal         func_202350
    ctx->pc = 0x10B064u;
    SET_GPR_U32(ctx, 31, 0x10B06Cu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x10B064u, 0x10B06Cu)) {
        return;
    }
    ctx->pc = 0x10B06Cu;
label_10b06c:
    // 0x10b06c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x10b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_10b070:
    // 0x10b070: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10b070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10b074: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x10b074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10b078: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x10B078u;
    {
        const bool branch_taken_0x10b078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b078) {
            ctx->pc = 0x10B07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B078u;
            // 0x10b07c: 0x8e230034  lw          $v1, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b050;
        }
    }
    ctx->pc = 0x10B080u;
label_10b080:
    // 0x10b080: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x10b080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x10b084: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B084u;
    {
        const bool branch_taken_0x10b084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b084) {
            ctx->pc = 0x10B094u;
            goto label_10b094;
        }
    }
    ctx->pc = 0x10B08Cu;
    // 0x10b08c: 0xc0808d4  jal         func_202350
    ctx->pc = 0x10B08Cu;
    SET_GPR_U32(ctx, 31, 0x10B094u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x10B08Cu, 0x10B094u)) {
        return;
    }
    ctx->pc = 0x10B094u;
label_10b094:
    // 0x10b094: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B094u;
    {
        const bool branch_taken_0x10b094 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B094u;
        // 0x10b098: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b094) {
            ctx->pc = 0x10B0A8u;
            goto label_10b0a8;
        }
    }
    ctx->pc = 0x10B09Cu;
    // 0x10b09c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x10B09Cu;
    SET_GPR_U32(ctx, 31, 0x10B0A4u);
    ctx->pc = 0x10B0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B09Cu;
    // 0x10b0a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x10B09Cu, 0x10B0A4u)) {
        return;
    }
    ctx->pc = 0x10B0A4u;
label_10b0a4:
    // 0x10b0a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x10b0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10b0a8:
    // 0x10b0a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10b0a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b0ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x10b0acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b0b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x10B0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B0B4u;
        // 0x10b0b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B0BCu;
    // 0x10b0bc: 0x0  nop
    ctx->pc = 0x10b0bcu;
    // NOP
    ctx->pc = 0x10b0c0u;
}
