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

// Function: sub_001C0FE8
// Address: 0x1c0fe8 - 0x1c1098
void sub_001C0FE8_0x1c0fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0FE8_0x1c0fe8");
#endif

    switch (ctx->pc) {
        case 0x1c1018u: goto label_1c1018;
        case 0x1c1058u: goto label_1c1058;
        case 0x1c1084u: goto label_1c1084;
        default: break;
    }

    ctx->pc = 0x1c0fe8u;

    // 0x1c0fe8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c0fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c0fec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c0ff0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c0ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c0ff4: 0x2442dd20  addiu       $v0, $v0, -0x22E0
    ctx->pc = 0x1c0ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958368));
    // 0x1c0ff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c0ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c0ffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1004: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1c1004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1c1008: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1c1008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c100c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C100Cu;
    {
        const bool branch_taken_0x1c100c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C100Cu;
        // 0x1c1010: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c100c) {
            ctx->pc = 0x1C1070u;
            goto label_1c1070;
        }
    }
    ctx->pc = 0x1C1014u;
    // 0x1c1014: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1c1014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c1018:
    // 0x1c1018: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C1018u;
    {
        const bool branch_taken_0x1c1018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1018) {
            ctx->pc = 0x1C101Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1018u;
            // 0x1c101c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1068u;
            goto label_1c1068;
        }
    }
    ctx->pc = 0x1C1020u;
    // 0x1c1020: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c1020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c1024: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1024u;
    {
        const bool branch_taken_0x1c1024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1024u;
        // 0x1c1028: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1024) {
            ctx->pc = 0x1C1034u;
            goto label_1c1034;
        }
    }
    ctx->pc = 0x1C102Cu;
    // 0x1c102c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C102Cu;
    {
        const bool branch_taken_0x1c102c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C102Cu;
        // 0x1c1030: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c102c) {
            ctx->pc = 0x1C1038u;
            goto label_1c1038;
        }
    }
    ctx->pc = 0x1C1034u;
label_1c1034:
    // 0x1c1034: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1c1034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1c1038:
    // 0x1c1038: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1c1038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c103c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C103Cu;
    {
        const bool branch_taken_0x1c103c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C103Cu;
        // 0x1c1040: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c103c) {
            ctx->pc = 0x1C104Cu;
            goto label_1c104c;
        }
    }
    ctx->pc = 0x1C1044u;
    // 0x1c1044: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1044u;
    {
        const bool branch_taken_0x1c1044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1044u;
        // 0x1c1048: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1044) {
            ctx->pc = 0x1C1050u;
            goto label_1c1050;
        }
    }
    ctx->pc = 0x1C104Cu;
label_1c104c:
    // 0x1c104c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1c104cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1c1050:
    // 0x1c1050: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1C1050u;
    SET_GPR_U32(ctx, 31, 0x1C1058u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1C1050u, 0x1C1058u)) {
        return;
    }
    ctx->pc = 0x1C1058u;
label_1c1058:
    // 0x1c1058: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c1058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c105c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c105cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c1060: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c1060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c1064: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c1064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c1068:
    // 0x1c1068: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1C1068u;
    {
        const bool branch_taken_0x1c1068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1068) {
            ctx->pc = 0x1C106Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1068u;
            // 0x1c106c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1018;
        }
    }
    ctx->pc = 0x1C1070u;
label_1c1070:
    // 0x1c1070: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1c1070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1c1074: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1074u;
    {
        const bool branch_taken_0x1c1074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1074) {
            ctx->pc = 0x1C1078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1074u;
            // 0x1c1078: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1088u;
            goto label_1c1088;
        }
    }
    ctx->pc = 0x1C107Cu;
    // 0x1c107c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1C107Cu;
    SET_GPR_U32(ctx, 31, 0x1C1084u);
    ctx->pc = 0x1C1080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C107Cu;
    // 0x1c1080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1C107Cu, 0x1C1084u)) {
        return;
    }
    ctx->pc = 0x1C1084u;
label_1c1084:
    // 0x1c1084: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c1084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c1088:
    // 0x1c1088: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c108c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c108cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1090: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1090u;
        // 0x1c1094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1098u;
}
