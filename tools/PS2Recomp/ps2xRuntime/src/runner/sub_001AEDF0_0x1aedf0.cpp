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

// Function: sub_001AEDF0
// Address: 0x1aedf0 - 0x1aeea0
void sub_001AEDF0_0x1aedf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEDF0_0x1aedf0");
#endif

    switch (ctx->pc) {
        case 0x1aee20u: goto label_1aee20;
        case 0x1aee60u: goto label_1aee60;
        case 0x1aee8cu: goto label_1aee8c;
        default: break;
    }

    ctx->pc = 0x1aedf0u;

    // 0x1aedf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aedf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aedf4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1aedf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1aedf8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1aedf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1aedfc: 0x2442bbe8  addiu       $v0, $v0, -0x4418
    ctx->pc = 0x1aedfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949864));
    // 0x1aee00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aee00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aee04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aee04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aee08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aee0c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1aee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1aee10: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1aee10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1aee14: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AEE14u;
    {
        const bool branch_taken_0x1aee14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE14u;
        // 0x1aee18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee14) {
            ctx->pc = 0x1AEE78u;
            goto label_1aee78;
        }
    }
    ctx->pc = 0x1AEE1Cu;
    // 0x1aee1c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1aee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1aee20:
    // 0x1aee20: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AEE20u;
    {
        const bool branch_taken_0x1aee20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aee20) {
            ctx->pc = 0x1AEE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEE20u;
            // 0x1aee24: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEE70u;
            goto label_1aee70;
        }
    }
    ctx->pc = 0x1AEE28u;
    // 0x1aee28: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1aee28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1aee2c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEE2Cu;
    {
        const bool branch_taken_0x1aee2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE2Cu;
        // 0x1aee30: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee2c) {
            ctx->pc = 0x1AEE3Cu;
            goto label_1aee3c;
        }
    }
    ctx->pc = 0x1AEE34u;
    // 0x1aee34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AEE34u;
    {
        const bool branch_taken_0x1aee34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE34u;
        // 0x1aee38: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee34) {
            ctx->pc = 0x1AEE40u;
            goto label_1aee40;
        }
    }
    ctx->pc = 0x1AEE3Cu;
label_1aee3c:
    // 0x1aee3c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1aee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1aee40:
    // 0x1aee40: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1aee40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1aee44: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEE44u;
    {
        const bool branch_taken_0x1aee44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE44u;
        // 0x1aee48: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee44) {
            ctx->pc = 0x1AEE54u;
            goto label_1aee54;
        }
    }
    ctx->pc = 0x1AEE4Cu;
    // 0x1aee4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AEE4Cu;
    {
        const bool branch_taken_0x1aee4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE4Cu;
        // 0x1aee50: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee4c) {
            ctx->pc = 0x1AEE58u;
            goto label_1aee58;
        }
    }
    ctx->pc = 0x1AEE54u;
label_1aee54:
    // 0x1aee54: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1aee54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1aee58:
    // 0x1aee58: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1AEE58u;
    SET_GPR_U32(ctx, 31, 0x1AEE60u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1AEE58u, 0x1AEE60u)) {
        return;
    }
    ctx->pc = 0x1AEE60u;
label_1aee60:
    // 0x1aee60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aee60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aee64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aee64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1aee68: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1aee68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1aee6c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1aee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1aee70:
    // 0x1aee70: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1AEE70u;
    {
        const bool branch_taken_0x1aee70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aee70) {
            ctx->pc = 0x1AEE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEE70u;
            // 0x1aee74: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aee20;
        }
    }
    ctx->pc = 0x1AEE78u;
label_1aee78:
    // 0x1aee78: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1aee78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1aee7c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AEE7Cu;
    {
        const bool branch_taken_0x1aee7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aee7c) {
            ctx->pc = 0x1AEE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEE7Cu;
            // 0x1aee80: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEE90u;
            goto label_1aee90;
        }
    }
    ctx->pc = 0x1AEE84u;
    // 0x1aee84: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1AEE84u;
    SET_GPR_U32(ctx, 31, 0x1AEE8Cu);
    ctx->pc = 0x1AEE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEE84u;
    // 0x1aee88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1AEE84u, 0x1AEE8Cu)) {
        return;
    }
    ctx->pc = 0x1AEE8Cu;
label_1aee8c:
    // 0x1aee8c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1aee8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1aee90:
    // 0x1aee90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aee90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aee94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aee94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aee98: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE98u;
        // 0x1aee9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEEA0u;
}
