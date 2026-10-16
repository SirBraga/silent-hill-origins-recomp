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

// Function: sub_002EBF98
// Address: 0x2ebf98 - 0x2ec080
void sub_002EBF98_0x2ebf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBF98_0x2ebf98");
#endif

    switch (ctx->pc) {
        case 0x2ebf98u: goto label_2ebf98;
        case 0x2ebf9cu: goto label_2ebf9c;
        case 0x2ebfa0u: goto label_2ebfa0;
        case 0x2ebfa4u: goto label_2ebfa4;
        case 0x2ebfa8u: goto label_2ebfa8;
        case 0x2ebfacu: goto label_2ebfac;
        case 0x2ebfb0u: goto label_2ebfb0;
        case 0x2ebfb4u: goto label_2ebfb4;
        case 0x2ebfb8u: goto label_2ebfb8;
        case 0x2ebfbcu: goto label_2ebfbc;
        case 0x2ebfc0u: goto label_2ebfc0;
        case 0x2ebfc4u: goto label_2ebfc4;
        case 0x2ebfc8u: goto label_2ebfc8;
        case 0x2ebfccu: goto label_2ebfcc;
        case 0x2ebfd0u: goto label_2ebfd0;
        case 0x2ebfd4u: goto label_2ebfd4;
        case 0x2ebfd8u: goto label_2ebfd8;
        case 0x2ebfdcu: goto label_2ebfdc;
        case 0x2ebfe0u: goto label_2ebfe0;
        case 0x2ebfe4u: goto label_2ebfe4;
        case 0x2ebfe8u: goto label_2ebfe8;
        case 0x2ebfecu: goto label_2ebfec;
        case 0x2ebff0u: goto label_2ebff0;
        case 0x2ebff4u: goto label_2ebff4;
        case 0x2ebff8u: goto label_2ebff8;
        case 0x2ebffcu: goto label_2ebffc;
        case 0x2ec000u: goto label_2ec000;
        case 0x2ec004u: goto label_2ec004;
        case 0x2ec008u: goto label_2ec008;
        case 0x2ec00cu: goto label_2ec00c;
        case 0x2ec010u: goto label_2ec010;
        case 0x2ec014u: goto label_2ec014;
        case 0x2ec018u: goto label_2ec018;
        case 0x2ec01cu: goto label_2ec01c;
        case 0x2ec020u: goto label_2ec020;
        case 0x2ec024u: goto label_2ec024;
        case 0x2ec028u: goto label_2ec028;
        case 0x2ec02cu: goto label_2ec02c;
        case 0x2ec030u: goto label_2ec030;
        case 0x2ec034u: goto label_2ec034;
        case 0x2ec038u: goto label_2ec038;
        case 0x2ec03cu: goto label_2ec03c;
        case 0x2ec040u: goto label_2ec040;
        case 0x2ec044u: goto label_2ec044;
        case 0x2ec048u: goto label_2ec048;
        case 0x2ec04cu: goto label_2ec04c;
        case 0x2ec050u: goto label_2ec050;
        case 0x2ec054u: goto label_2ec054;
        case 0x2ec058u: goto label_2ec058;
        case 0x2ec05cu: goto label_2ec05c;
        case 0x2ec060u: goto label_2ec060;
        case 0x2ec064u: goto label_2ec064;
        case 0x2ec068u: goto label_2ec068;
        case 0x2ec06cu: goto label_2ec06c;
        case 0x2ec070u: goto label_2ec070;
        case 0x2ec074u: goto label_2ec074;
        case 0x2ec078u: goto label_2ec078;
        case 0x2ec07cu: goto label_2ec07c;
        default: break;
    }

    ctx->pc = 0x2ebf98u;

label_2ebf98:
    // 0x2ebf98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ebf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2ebf9c:
    // 0x2ebf9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ebf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2ebfa0:
    // 0x2ebfa0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ebfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2ebfa4:
    // 0x2ebfa4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ebfa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ebfa8:
    // 0x2ebfa8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ebfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2ebfac:
    // 0x2ebfac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ebfacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ebfb0:
    // 0x2ebfb0: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
label_2ebfb4:
    if (ctx->pc == 0x2EBFB4u) {
        ctx->pc = 0x2EBFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFB0u;
        // 0x2ebfb4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBFB8u;
        goto label_2ebfb8;
    }
    ctx->pc = 0x2EBFB0u;
    {
        const bool branch_taken_0x2ebfb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFB0u;
        // 0x2ebfb4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebfb0) {
            ctx->pc = 0x2EC068u;
            goto label_2ec068;
        }
    }
    ctx->pc = 0x2EBFB8u;
label_2ebfb8:
    // 0x2ebfb8: 0x8c821398  lw          $v0, 0x1398($a0)
    ctx->pc = 0x2ebfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5016)));
label_2ebfbc:
    // 0x2ebfbc: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_2ebfc0:
    if (ctx->pc == 0x2EBFC0u) {
        ctx->pc = 0x2EBFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFBCu;
        // 0x2ebfc0: 0x8c831384  lw          $v1, 0x1384($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4996)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBFC4u;
        goto label_2ebfc4;
    }
    ctx->pc = 0x2EBFBCu;
    {
        const bool branch_taken_0x2ebfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebfbc) {
            ctx->pc = 0x2EBFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBFBCu;
            // 0x2ebfc0: 0x8c831384  lw          $v1, 0x1384($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4996)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC004u;
            goto label_2ec004;
        }
    }
    ctx->pc = 0x2EBFC4u;
label_2ebfc4:
    // 0x2ebfc4: 0x8c85139c  lw          $a1, 0x139C($a0)
    ctx->pc = 0x2ebfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5020)));
label_2ebfc8:
    // 0x2ebfc8: 0x40f809  jalr        $v0
label_2ebfcc:
    if (ctx->pc == 0x2EBFCCu) {
        ctx->pc = 0x2EBFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFC8u;
        // 0x2ebfcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBFD0u;
        goto label_2ebfd0;
    }
    ctx->pc = 0x2EBFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EBFD0u);
        ctx->pc = 0x2EBFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFC8u;
        // 0x2ebfcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBFC8u, 0x2EBFD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EBFD0u;
label_2ebfd0:
    // 0x2ebfd0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ebfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ebfd4:
    // 0x2ebfd4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2ebfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ebfd8:
    // 0x2ebfd8: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
label_2ebfdc:
    if (ctx->pc == 0x2EBFDCu) {
        ctx->pc = 0x2EBFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFD8u;
        // 0x2ebfdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBFE0u;
        goto label_2ebfe0;
    }
    ctx->pc = 0x2EBFD8u;
    {
        const bool branch_taken_0x2ebfd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFD8u;
        // 0x2ebfdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebfd8) {
            ctx->pc = 0x2EC068u;
            goto label_2ec068;
        }
    }
    ctx->pc = 0x2EBFE0u;
label_2ebfe0:
    // 0x2ebfe0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ebfe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ebfe4:
    // 0x2ebfe4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2ebfe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ebfe8:
    // 0x2ebfe8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ebfe8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ebfec:
    // 0x2ebfec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ebfecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ebff0:
    // 0x2ebff0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ebff0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ebff4:
    // 0x2ebff4: 0xc0ba380  jal         func_2E8E00
label_2ebff8:
    if (ctx->pc == 0x2EBFF8u) {
        ctx->pc = 0x2EBFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFF4u;
        // 0x2ebff8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBFFCu;
        goto label_2ebffc;
    }
    ctx->pc = 0x2EBFF4u;
    SET_GPR_U32(ctx, 31, 0x2EBFFCu);
    ctx->pc = 0x2EBFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBFF4u;
    // 0x2ebff8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2EBFF4u, 0x2EBFFCu)) {
        return;
    }
    ctx->pc = 0x2EBFFCu;
label_2ebffc:
    // 0x2ebffc: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2ec000:
    if (ctx->pc == 0x2EC000u) {
        ctx->pc = 0x2EC000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFFCu;
        // 0x2ec000: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC004u;
        goto label_2ec004;
    }
    ctx->pc = 0x2EBFFCu;
    {
        const bool branch_taken_0x2ebffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFFCu;
        // 0x2ec000: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebffc) {
            ctx->pc = 0x2EC06Cu;
            goto label_2ec06c;
        }
    }
    ctx->pc = 0x2EC004u;
label_2ec004:
    // 0x2ec004: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_2ec008:
    if (ctx->pc == 0x2EC008u) {
        ctx->pc = 0x2EC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC004u;
        // 0x2ec008: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC00Cu;
        goto label_2ec00c;
    }
    ctx->pc = 0x2EC004u;
    {
        const bool branch_taken_0x2ec004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC004u;
        // 0x2ec008: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec004) {
            ctx->pc = 0x2EC06Cu;
            goto label_2ec06c;
        }
    }
    ctx->pc = 0x2EC00Cu;
label_2ec00c:
    // 0x2ec00c: 0x8c821390  lw          $v0, 0x1390($a0)
    ctx->pc = 0x2ec00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5008)));
label_2ec010:
    // 0x2ec010: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_2ec014:
    if (ctx->pc == 0x2EC014u) {
        ctx->pc = 0x2EC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC010u;
        // 0x2ec014: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC018u;
        goto label_2ec018;
    }
    ctx->pc = 0x2EC010u;
    {
        const bool branch_taken_0x2ec010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec010) {
            ctx->pc = 0x2EC014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC010u;
            // 0x2ec014: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC070u;
            goto label_2ec070;
        }
    }
    ctx->pc = 0x2EC018u;
label_2ec018:
    // 0x2ec018: 0x8c851388  lw          $a1, 0x1388($a0)
    ctx->pc = 0x2ec018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5000)));
label_2ec01c:
    // 0x2ec01c: 0x60f809  jalr        $v1
label_2ec020:
    if (ctx->pc == 0x2EC020u) {
        ctx->pc = 0x2EC020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC01Cu;
        // 0x2ec020: 0x112082  srl         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC024u;
        goto label_2ec024;
    }
    ctx->pc = 0x2EC01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EC024u);
        ctx->pc = 0x2EC020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC01Cu;
        // 0x2ec020: 0x112082  srl         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC01Cu, 0x2EC024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EC024u;
label_2ec024:
    // 0x2ec024: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ec024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ec028:
    // 0x2ec028: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2ec028u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ec02c:
    // 0x2ec02c: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_2ec030:
    if (ctx->pc == 0x2EC030u) {
        ctx->pc = 0x2EC030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC02Cu;
        // 0x2ec030: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC034u;
        goto label_2ec034;
    }
    ctx->pc = 0x2EC02Cu;
    {
        const bool branch_taken_0x2ec02c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec02c) {
            ctx->pc = 0x2EC030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC02Cu;
            // 0x2ec030: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC06Cu;
            goto label_2ec06c;
        }
    }
    ctx->pc = 0x2EC034u;
label_2ec034:
    // 0x2ec034: 0x5240000d  beql        $s2, $zero, . + 4 + (0xD << 2)
label_2ec038:
    if (ctx->pc == 0x2EC038u) {
        ctx->pc = 0x2EC038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC034u;
        // 0x2ec038: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC03Cu;
        goto label_2ec03c;
    }
    ctx->pc = 0x2EC034u;
    {
        const bool branch_taken_0x2ec034 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec034) {
            ctx->pc = 0x2EC038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC034u;
            // 0x2ec038: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC06Cu;
            goto label_2ec06c;
        }
    }
    ctx->pc = 0x2EC03Cu;
label_2ec03c:
    // 0x2ec03c: 0xc0c8568  jal         func_3215A0
label_2ec040:
    if (ctx->pc == 0x2EC040u) {
        ctx->pc = 0x2EC040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC03Cu;
        // 0x2ec040: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC044u;
        goto label_2ec044;
    }
    ctx->pc = 0x2EC03Cu;
    SET_GPR_U32(ctx, 31, 0x2EC044u);
    ctx->pc = 0x2EC040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC03Cu;
    // 0x2ec040: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3215A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3215A0u, 0x2EC03Cu, 0x2EC044u)) {
        return;
    }
    ctx->pc = 0x2EC044u;
label_2ec044:
    // 0x2ec044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ec044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ec048:
    // 0x2ec048: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ec048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ec04c:
    // 0x2ec04c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ec04cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ec050:
    // 0x2ec050: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2ec050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ec054:
    // 0x2ec054: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ec054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec058:
    // 0x2ec058: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ec058u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec05c:
    // 0x2ec05c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ec05cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec060:
    // 0x2ec060: 0xc0ba380  jal         func_2E8E00
label_2ec064:
    if (ctx->pc == 0x2EC064u) {
        ctx->pc = 0x2EC064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC060u;
        // 0x2ec064: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC068u;
        goto label_2ec068;
    }
    ctx->pc = 0x2EC060u;
    SET_GPR_U32(ctx, 31, 0x2EC068u);
    ctx->pc = 0x2EC064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC060u;
    // 0x2ec064: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2EC060u, 0x2EC068u)) {
        return;
    }
    ctx->pc = 0x2EC068u;
label_2ec068:
    // 0x2ec068: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ec068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ec06c:
    // 0x2ec06c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ec06cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ec070:
    // 0x2ec070: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ec070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ec074:
    // 0x2ec074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ec074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ec078:
    // 0x2ec078: 0x3e00008  jr          $ra
label_2ec07c:
    if (ctx->pc == 0x2EC07Cu) {
        ctx->pc = 0x2EC07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC078u;
        // 0x2ec07c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC080u;
        goto label_fallthrough_0x2ec078;
    }
    ctx->pc = 0x2EC078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC078u;
        // 0x2ec07c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ec078:
    ctx->pc = 0x2EC080u;
}
