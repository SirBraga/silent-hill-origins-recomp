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

// Function: sub_0018B008
// Address: 0x18b008 - 0x18b0c8
void sub_0018B008_0x18b008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B008_0x18b008");
#endif

    switch (ctx->pc) {
        case 0x18b038u: goto label_18b038;
        case 0x18b078u: goto label_18b078;
        case 0x18b0a4u: goto label_18b0a4;
        default: break;
    }

    ctx->pc = 0x18b008u;

    // 0x18b008: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18b008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18b00c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x18b010: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18b010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18b014: 0x24428ea8  addiu       $v0, $v0, -0x7158
    ctx->pc = 0x18b014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938280));
    // 0x18b018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18b01c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18b01cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18b024: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x18b024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x18b028: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x18b028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18b02c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x18B02Cu;
    {
        const bool branch_taken_0x18b02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B02Cu;
        // 0x18b030: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b02c) {
            ctx->pc = 0x18B090u;
            goto label_18b090;
        }
    }
    ctx->pc = 0x18B034u;
    // 0x18b034: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18b034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18b038:
    // 0x18b038: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18B038u;
    {
        const bool branch_taken_0x18b038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b038) {
            ctx->pc = 0x18B03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B038u;
            // 0x18b03c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B088u;
            goto label_18b088;
        }
    }
    ctx->pc = 0x18B040u;
    // 0x18b040: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18b040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18b044: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B044u;
    {
        const bool branch_taken_0x18b044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B044u;
        // 0x18b048: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b044) {
            ctx->pc = 0x18B054u;
            goto label_18b054;
        }
    }
    ctx->pc = 0x18B04Cu;
    // 0x18b04c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18B04Cu;
    {
        const bool branch_taken_0x18b04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B04Cu;
        // 0x18b050: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b04c) {
            ctx->pc = 0x18B058u;
            goto label_18b058;
        }
    }
    ctx->pc = 0x18B054u;
label_18b054:
    // 0x18b054: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18b054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18b058:
    // 0x18b058: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18b058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18b05c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B05Cu;
    {
        const bool branch_taken_0x18b05c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B05Cu;
        // 0x18b060: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b05c) {
            ctx->pc = 0x18B06Cu;
            goto label_18b06c;
        }
    }
    ctx->pc = 0x18B064u;
    // 0x18b064: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18B064u;
    {
        const bool branch_taken_0x18b064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B064u;
        // 0x18b068: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b064) {
            ctx->pc = 0x18B070u;
            goto label_18b070;
        }
    }
    ctx->pc = 0x18B06Cu;
label_18b06c:
    // 0x18b06c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18b06cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18b070:
    // 0x18b070: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18B070u;
    SET_GPR_U32(ctx, 31, 0x18B078u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18B070u, 0x18B078u)) {
        return;
    }
    ctx->pc = 0x18B078u;
label_18b078:
    // 0x18b078: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18b078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b07c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18b080: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18b080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18b084: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18b084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18b088:
    // 0x18b088: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18B088u;
    {
        const bool branch_taken_0x18b088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b088) {
            ctx->pc = 0x18B08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B088u;
            // 0x18b08c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b038;
        }
    }
    ctx->pc = 0x18B090u;
label_18b090:
    // 0x18b090: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x18b090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x18b094: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B094u;
    {
        const bool branch_taken_0x18b094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b094) {
            ctx->pc = 0x18B098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B094u;
            // 0x18b098: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B0A8u;
            goto label_18b0a8;
        }
    }
    ctx->pc = 0x18B09Cu;
    // 0x18b09c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18B09Cu;
    SET_GPR_U32(ctx, 31, 0x18B0A4u);
    ctx->pc = 0x18B0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B09Cu;
    // 0x18b0a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18B09Cu, 0x18B0A4u)) {
        return;
    }
    ctx->pc = 0x18B0A4u;
label_18b0a4:
    // 0x18b0a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18b0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18b0a8:
    // 0x18b0a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b0a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b0ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x18B0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0B0u;
        // 0x18b0b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B0B8u;
    // 0x18b0b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18b0bc: 0x0  nop
    ctx->pc = 0x18b0bcu;
    // NOP
    // 0x18b0c0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x18b0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18b0c4: 0x0  nop
    ctx->pc = 0x18b0c4u;
    // NOP
    ctx->pc = 0x18b0c8u;
}
