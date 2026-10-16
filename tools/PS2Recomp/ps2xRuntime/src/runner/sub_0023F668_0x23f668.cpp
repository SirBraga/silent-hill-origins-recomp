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

// Function: sub_0023F668
// Address: 0x23f668 - 0x240620
void sub_0023F668_0x23f668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F668_0x23f668");
#endif

    switch (ctx->pc) {
        case 0x23f70cu: goto label_23f70c;
        case 0x23f728u: goto label_23f728;
        case 0x23f798u: goto label_23f798;
        case 0x23f7b0u: goto label_23f7b0;
        case 0x23f7e8u: goto label_23f7e8;
        case 0x23f808u: goto label_23f808;
        case 0x23f820u: goto label_23f820;
        case 0x23f83cu: goto label_23f83c;
        case 0x23f878u: goto label_23f878;
        case 0x23f89cu: goto label_23f89c;
        case 0x23f8a4u: goto label_23f8a4;
        case 0x23f8b4u: goto label_23f8b4;
        case 0x23f8d0u: goto label_23f8d0;
        case 0x23fa38u: goto label_23fa38;
        case 0x23fa50u: goto label_23fa50;
        case 0x23fae8u: goto label_23fae8;
        case 0x23fb00u: goto label_23fb00;
        case 0x23fb8cu: goto label_23fb8c;
        case 0x23fc18u: goto label_23fc18;
        case 0x23fc30u: goto label_23fc30;
        case 0x23fce8u: goto label_23fce8;
        case 0x23fd00u: goto label_23fd00;
        case 0x23fdb0u: goto label_23fdb0;
        case 0x23fe20u: goto label_23fe20;
        case 0x23ff48u: goto label_23ff48;
        case 0x23ff88u: goto label_23ff88;
        case 0x240078u: goto label_240078;
        case 0x2400a0u: goto label_2400a0;
        case 0x240134u: goto label_240134;
        case 0x2401c0u: goto label_2401c0;
        case 0x2401d8u: goto label_2401d8;
        case 0x240260u: goto label_240260;
        case 0x240288u: goto label_240288;
        case 0x240360u: goto label_240360;
        case 0x2403a0u: goto label_2403a0;
        case 0x240458u: goto label_240458;
        case 0x2404d0u: goto label_2404d0;
        case 0x2405ecu: goto label_2405ec;
        default: break;
    }

    ctx->pc = 0x23f668u;

    // 0x23f668: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x23f668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x23f66c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23f66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23f670: 0x8c63416c  lw          $v1, 0x416C($v1)
    ctx->pc = 0x23f670u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x23f674: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x23f674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x23f678: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x23f678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x23f67c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23f67cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f680: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x23f680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x23f684: 0x263b021  addu        $s6, $s3, $v1
    ctx->pc = 0x23f684u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x23f688: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x23f688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x23f68c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x23f68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x23f690: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x23f690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x23f694: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x23f694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x23f698: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x23f698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x23f69c: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x23f69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x23f6a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23f6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23f6a4: 0x92c20036  lbu         $v0, 0x36($s6)
    ctx->pc = 0x23f6a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 54)));
    // 0x23f6a8: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x23f6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x23f6ac: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x23F6ACu;
    {
        const bool branch_taken_0x23f6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F6ACu;
        // 0x23f6b0: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f6ac) {
            ctx->pc = 0x23F728u;
            goto label_23f728;
        }
    }
    ctx->pc = 0x23F6B4u;
    // 0x23f6b4: 0x8e68000c  lw          $t0, 0xC($s3)
    ctx->pc = 0x23f6b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x23f6b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23f6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23f6bc: 0x8e690010  lw          $t1, 0x10($s3)
    ctx->pc = 0x23f6bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x23f6c0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x23f6c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f6c4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x23f6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x23f6c8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23f6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23f6cc: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x23f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x23f6d0: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x23f6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x23f6d4: 0xafa9002c  sw          $t1, 0x2C($sp)
    ctx->pc = 0x23f6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
    // 0x23f6d8: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x23f6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x23f6dc: 0x8ce73f30  lw          $a3, 0x3F30($a3)
    ctx->pc = 0x23f6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23f6e0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x23f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x23f6e4: 0x84e6001c  lh          $a2, 0x1C($a3)
    ctx->pc = 0x23f6e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x23f6e8: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x23f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x23f6ec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23f6f0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x23f6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x23f6f4: 0x84e6001e  lh          $a2, 0x1E($a3)
    ctx->pc = 0x23f6f4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 30)));
    // 0x23f6f8: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x23f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x23f6fc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23f6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x23f700: 0xafa9001c  sw          $t1, 0x1C($sp)
    ctx->pc = 0x23f700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 9));
    // 0x23f704: 0xc08efd8  jal         func_23BF60
    ctx->pc = 0x23F704u;
    SET_GPR_U32(ctx, 31, 0x23F70Cu);
    ctx->pc = 0x23F708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F704u;
    // 0x23f708: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BF60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23BF60u, 0x23F704u, 0x23F70Cu)) {
        return;
    }
    ctx->pc = 0x23F70Cu;
label_23f70c:
    // 0x23f70c: 0x104003b8  beqz        $v0, . + 4 + (0x3B8 << 2)
    ctx->pc = 0x23F70Cu;
    {
        const bool branch_taken_0x23f70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F70Cu;
        // 0x23f710: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f70c) {
            ctx->pc = 0x2405F0u;
            goto label_2405f0;
        }
    }
    ctx->pc = 0x23F714u;
    // 0x23f714: 0x92620020  lbu         $v0, 0x20($s3)
    ctx->pc = 0x23f714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x23f718: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23f718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23f71c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23f71cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23f720: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F720u;
    {
        const bool branch_taken_0x23f720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F720u;
        // 0x23f724: 0x8f828ec0  lw          $v0, -0x7140($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f720) {
            ctx->pc = 0x23F730u;
            goto label_23f730;
        }
    }
    ctx->pc = 0x23F728u;
label_23f728:
    // 0x23f728: 0x100003b1  b           . + 4 + (0x3B1 << 2)
    ctx->pc = 0x23F728u;
    {
        const bool branch_taken_0x23f728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F728u;
        // 0x23f72c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f728) {
            ctx->pc = 0x2405F0u;
            goto label_2405f0;
        }
    }
    ctx->pc = 0x23F730u;
label_23f730:
    // 0x23f730: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23f730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f734: 0x90430020  lbu         $v1, 0x20($v0)
    ctx->pc = 0x23f734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x23f738: 0x1064fffb  beq         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23F738u;
    {
        const bool branch_taken_0x23f738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x23F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F738u;
        // 0x23f73c: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f738) {
            ctx->pc = 0x23F728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f728;
        }
    }
    ctx->pc = 0x23F740u;
    // 0x23f740: 0x91630020  lbu         $v1, 0x20($t3)
    ctx->pc = 0x23f740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x23f744: 0x1064fff8  beq         $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23F744u;
    {
        const bool branch_taken_0x23f744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x23F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F744u;
        // 0x23f748: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f744) {
            ctx->pc = 0x23F728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f728;
        }
    }
    ctx->pc = 0x23F74Cu;
    // 0x23f74c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F74Cu;
    {
        const bool branch_taken_0x23f74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F74Cu;
        // 0x23f750: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f74c) {
            ctx->pc = 0x23F764u;
            goto label_23f764;
        }
    }
    ctx->pc = 0x23F754u;
    // 0x23f754: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x23F754u;
    {
        const bool branch_taken_0x23f754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F754u;
        // 0x23f758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f754) {
            ctx->pc = 0x23F8D8u;
            goto label_23f8d8;
        }
    }
    ctx->pc = 0x23F75Cu;
    // 0x23f75c: 0x100003a5  b           . + 4 + (0x3A5 << 2)
    ctx->pc = 0x23F75Cu;
    {
        const bool branch_taken_0x23f75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F75Cu;
        // 0x23f760: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f75c) {
            ctx->pc = 0x2405F4u;
            goto label_2405f4;
        }
    }
    ctx->pc = 0x23F764u;
label_23f764:
    // 0x23f764: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F764u;
    {
        const bool branch_taken_0x23f764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F764u;
        // 0x23f768: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f764) {
            ctx->pc = 0x23F77Cu;
            goto label_23f77c;
        }
    }
    ctx->pc = 0x23F76Cu;
    // 0x23f76c: 0x1062005a  beq         $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x23F76Cu;
    {
        const bool branch_taken_0x23f76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F76Cu;
        // 0x23f770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f76c) {
            ctx->pc = 0x23F8D8u;
            goto label_23f8d8;
        }
    }
    ctx->pc = 0x23F774u;
    // 0x23f774: 0x1000039f  b           . + 4 + (0x39F << 2)
    ctx->pc = 0x23F774u;
    {
        const bool branch_taken_0x23f774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F774u;
        // 0x23f778: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f774) {
            ctx->pc = 0x2405F4u;
            goto label_2405f4;
        }
    }
    ctx->pc = 0x23F77Cu;
label_23f77c:
    // 0x23f77c: 0x8fb10024  lw          $s1, 0x24($sp)
    ctx->pc = 0x23f77cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x23f780: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23f780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f784: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x23f784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x23f788: 0x24170040  addiu       $s7, $zero, 0x40
    ctx->pc = 0x23f788u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x23f78c: 0x8fb20014  lw          $s2, 0x14($sp)
    ctx->pc = 0x23f78cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23f790: 0xc08ed56  jal         func_23B558
    ctx->pc = 0x23F790u;
    SET_GPR_U32(ctx, 31, 0x23F798u);
    ctx->pc = 0x23F794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F790u;
    // 0x23f794: 0x222a821  addu        $s5, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23B558u, 0x23F790u, 0x23F798u)) {
        return;
    }
    ctx->pc = 0x23F798u;
label_23f798:
    // 0x23f798: 0x2b12023  subu        $a0, $s5, $s1
    ctx->pc = 0x23f798u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x23f79c: 0x1080003d  beqz        $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x23F79Cu;
    {
        const bool branch_taken_0x23f79c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f79c) {
            ctx->pc = 0x23F894u;
            goto label_23f894;
        }
    }
    ctx->pc = 0x23F7A4u;
    // 0x23f7a4: 0x3c14006b  lui         $s4, 0x6B
    ctx->pc = 0x23f7a4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)107 << 16));
    // 0x23f7a8: 0x26943f38  addiu       $s4, $s4, 0x3F38
    ctx->pc = 0x23f7a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16184));
    // 0x23f7ac: 0x0  nop
    ctx->pc = 0x23f7acu;
    // NOP
label_23f7b0:
    // 0x23f7b0: 0x2e4282b  sltu        $a1, $s7, $a0
    ctx->pc = 0x23f7b0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x23f7b4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23f7b8: 0x8c633f40  lw          $v1, 0x3F40($v1)
    ctx->pc = 0x23f7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F40u));
    // 0x23f7bc: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x23f7bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f7c0: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x23f7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
    // 0x23f7c4: 0x85100a  movz        $v0, $a0, $a1
    ctx->pc = 0x23f7c4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x23f7c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23f7cc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x23f7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x23f7d0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x23f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x23f7d4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x23f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23f7d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23f7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f7dc: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x23f7dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x23f7e0: 0xc091bd0  jal         func_246F40
    ctx->pc = 0x23F7E0u;
    SET_GPR_U32(ctx, 31, 0x23F7E8u);
    ctx->pc = 0x23F7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F7E0u;
    // 0x23f7e4: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246F40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246F40u, 0x23F7E0u, 0x23F7E8u)) {
        return;
    }
    ctx->pc = 0x23F7E8u;
label_23f7e8:
    // 0x23f7e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23f7ec: 0x8c423f40  lw          $v0, 0x3F40($v0)
    ctx->pc = 0x23f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3F40u));
    // 0x23f7f0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23f7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f7f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23f7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f7f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23f7fc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x23f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x23f800: 0xc08a188  jal         func_228620
    ctx->pc = 0x23F800u;
    SET_GPR_U32(ctx, 31, 0x23F808u);
    ctx->pc = 0x23F804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F800u;
    // 0x23f804: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228620u, 0x23F800u, 0x23F808u)) {
        return;
    }
    ctx->pc = 0x23F808u;
label_23f808:
    // 0x23f808: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23f808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23f80c: 0x8c633f40  lw          $v1, 0x3F40($v1)
    ctx->pc = 0x23f80cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F40u));
    // 0x23f810: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23f810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23f814: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x23f814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x23f818: 0xc08f0b4  jal         func_23C2D0
    ctx->pc = 0x23F818u;
    SET_GPR_U32(ctx, 31, 0x23F820u);
    ctx->pc = 0x23F81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F818u;
    // 0x23f81c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C2D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23C2D0u, 0x23F818u, 0x23F820u)) {
        return;
    }
    ctx->pc = 0x23F820u;
label_23f820:
    // 0x23f820: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23f820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23f824: 0x8c423f40  lw          $v0, 0x3F40($v0)
    ctx->pc = 0x23f824u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3F40u));
    // 0x23f828: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f82c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23f830: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x23f830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x23f834: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x23F834u;
    SET_GPR_U32(ctx, 31, 0x23F83Cu);
    ctx->pc = 0x23F838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F834u;
    // 0x23f838: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x23F834u, 0x23F83Cu)) {
        return;
    }
    ctx->pc = 0x23F83Cu;
label_23f83c:
    // 0x23f83c: 0x8faa0028  lw          $t2, 0x28($sp)
    ctx->pc = 0x23f83cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23f840: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23f840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f844: 0x8fab002c  lw          $t3, 0x2C($sp)
    ctx->pc = 0x23f844u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x23f848: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x23f848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f84c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23f84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f850: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x23f850u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x23f854: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x23f854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23f858: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x23f858u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x23f85c: 0x254afff8  addiu       $t2, $t2, -0x8
    ctx->pc = 0x23f85cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
    // 0x23f860: 0x256bfff8  addiu       $t3, $t3, -0x8
    ctx->pc = 0x23f860u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967288));
    // 0x23f864: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x23f864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x23f868: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x23f868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x23f86c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x23f86cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23f870: 0xc08ee74  jal         func_23B9D0
    ctx->pc = 0x23F870u;
    SET_GPR_U32(ctx, 31, 0x23F878u);
    ctx->pc = 0x23F874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F870u;
    // 0x23f874: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23B9D0u, 0x23F870u, 0x23F878u)) {
        return;
    }
    ctx->pc = 0x23F878u;
label_23f878:
    // 0x23f878: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x23f878u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f87c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23f880: 0x8c423f40  lw          $v0, 0x3F40($v0)
    ctx->pc = 0x23f880u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3F40u));
    // 0x23f884: 0x2b12023  subu        $a0, $s5, $s1
    ctx->pc = 0x23f884u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x23f888: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x23f888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x23f88c: 0x1480ffc8  bnez        $a0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x23F88Cu;
    {
        const bool branch_taken_0x23f88c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F88Cu;
        // 0x23f890: 0xaf828ed0  sw          $v0, -0x7130($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f88c) {
            ctx->pc = 0x23F7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f7b0;
        }
    }
    ctx->pc = 0x23F894u;
label_23f894:
    // 0x23f894: 0xc08eedc  jal         func_23BB70
    ctx->pc = 0x23F894u;
    SET_GPR_U32(ctx, 31, 0x23F89Cu);
    ctx->pc = 0x23BB70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23BB70u, 0x23F894u, 0x23F89Cu)) {
        return;
    }
    ctx->pc = 0x23F89Cu;
label_23f89c:
    // 0x23f89c: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x23F89Cu;
    SET_GPR_U32(ctx, 31, 0x23F8A4u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x23F89Cu, 0x23F8A4u)) {
        return;
    }
    ctx->pc = 0x23F8A4u;
label_23f8a4:
    // 0x23f8a4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x23f8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x23f8a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23f8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23f8ac: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x23F8ACu;
    SET_GPR_U32(ctx, 31, 0x23F8B4u);
    ctx->pc = 0x23F8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F8ACu;
    // 0x23f8b0: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x23F8ACu, 0x23F8B4u)) {
        return;
    }
    ctx->pc = 0x23F8B4u;
label_23f8b4:
    // 0x23f8b4: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x23f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x23f8b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f8bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23f8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23f8c0: 0x1462034b  bne         $v1, $v0, . + 4 + (0x34B << 2)
    ctx->pc = 0x23F8C0u;
    {
        const bool branch_taken_0x23f8c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8C0u;
        // 0x23f8c4: 0xaec30004  sw          $v1, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8c0) {
            ctx->pc = 0x2405F0u;
            goto label_2405f0;
        }
    }
    ctx->pc = 0x23F8C8u;
    // 0x23f8c8: 0xc08b97e  jal         func_22E5F8
    ctx->pc = 0x23F8C8u;
    SET_GPR_U32(ctx, 31, 0x23F8D0u);
    ctx->pc = 0x23F8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F8C8u;
    // 0x23f8cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E5F8u, 0x23F8C8u, 0x23F8D0u)) {
        return;
    }
    ctx->pc = 0x23F8D0u;
label_23f8d0:
    // 0x23f8d0: 0x10000347  b           . + 4 + (0x347 << 2)
    ctx->pc = 0x23F8D0u;
    {
        const bool branch_taken_0x23f8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8D0u;
        // 0x23f8d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8d0) {
            ctx->pc = 0x2405F0u;
            goto label_2405f0;
        }
    }
    ctx->pc = 0x23F8D8u;
label_23f8d8:
    // 0x23f8d8: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x23f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x23f8dc: 0x10400344  beqz        $v0, . + 4 + (0x344 << 2)
    ctx->pc = 0x23F8DCu;
    {
        const bool branch_taken_0x23f8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8DCu;
        // 0x23f8e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8dc) {
            ctx->pc = 0x2405F0u;
            goto label_2405f0;
        }
    }
    ctx->pc = 0x23F8E4u;
    // 0x23f8e4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x23f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x23f8e8: 0x1040ff8f  beqz        $v0, . + 4 + (-0x71 << 2)
    ctx->pc = 0x23F8E8u;
    {
        const bool branch_taken_0x23f8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8E8u;
        // 0x23f8ec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8e8) {
            ctx->pc = 0x23F728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f728;
        }
    }
    ctx->pc = 0x23F8F0u;
    // 0x23f8f0: 0x8565001c  lh          $a1, 0x1C($t3)
    ctx->pc = 0x23f8f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 28)));
    // 0x23f8f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f8f8: 0x8d630014  lw          $v1, 0x14($t3)
    ctx->pc = 0x23f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x23f8fc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x23f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23f900: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x23f900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23f904: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x23f904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x23f908: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x23f908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x23f90c: 0x380c3  sra         $s0, $v1, 3
    ctx->pc = 0x23f90cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 3));
    // 0x23f910: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x23f910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x23f914: 0x8562001e  lh          $v0, 0x1E($t3)
    ctx->pc = 0x23f914u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 30)));
    // 0x23f918: 0x24a30007  addiu       $v1, $a1, 0x7
    ctx->pc = 0x23f918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x23f91c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x23f91cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23f920: 0x388c3  sra         $s1, $v1, 3
    ctx->pc = 0x23f920u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 3));
    // 0x23f924: 0x14a6000e  bne         $a1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x23F924u;
    {
        const bool branch_taken_0x23f924 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x23F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F924u;
        // 0x23f928: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f924) {
            ctx->pc = 0x23F960u;
            goto label_23f960;
        }
    }
    ctx->pc = 0x23F92Cu;
    // 0x23f92c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x23f92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23f930: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x23f930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x23f934: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x23f934u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x23f938: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x23f938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f93c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x23f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23f940: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x23f940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x23f944: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x23f944u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x23f948: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x23f948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x23f94c: 0xc29023  subu        $s2, $a2, $v0
    ctx->pc = 0x23f94cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x23f950: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23f950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f954: 0x2439023  subu        $s2, $s2, $v1
    ctx->pc = 0x23f954u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x23f958: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23F958u;
    {
        const bool branch_taken_0x23f958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F958u;
        // 0x23f95c: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f958) {
            ctx->pc = 0x23F984u;
            goto label_23f984;
        }
    }
    ctx->pc = 0x23F960u;
label_23f960:
    // 0x23f960: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x23f960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x23f964: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23F964u;
    {
        const bool branch_taken_0x23f964 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f964) {
            ctx->pc = 0x23F968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F964u;
            // 0x23f968: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F96Cu;
            goto label_23f96c;
        }
    }
    ctx->pc = 0x23F96Cu;
label_23f96c:
    // 0x23f96c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23f970: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x23f970u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23f974: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x23f974u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f978: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x23f978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f97c: 0x2012  mflo        $a0
    ctx->pc = 0x23f97cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x23f980: 0x839023  subu        $s2, $a0, $v1
    ctx->pc = 0x23f980u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_23f984:
    // 0x23f984: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x23f984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23f988: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x23f988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x23f98c: 0x8c843f30  lw          $a0, 0x3F30($a0)
    ctx->pc = 0x23f98cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23f990: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x23f990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23f994: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23F994u;
    {
        const bool branch_taken_0x23f994 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f994) {
            ctx->pc = 0x23F998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F994u;
            // 0x23f998: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F99Cu;
            goto label_23f99c;
        }
    }
    ctx->pc = 0x23F99Cu;
label_23f99c:
    // 0x23f99c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x23f99cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f9a0: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x23f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23f9a4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x23f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x23f9a8: 0x2463ffeb  addiu       $v1, $v1, -0x15
    ctx->pc = 0x23f9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967275));
    // 0x23f9ac: 0x2c640018  sltiu       $a0, $v1, 0x18
    ctx->pc = 0x23f9acu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x23f9b0: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x23f9b0u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23f9b4: 0x1012  mflo        $v0
    ctx->pc = 0x23f9b4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x23f9b8: 0x1080ff5b  beqz        $a0, . + 4 + (-0xA5 << 2)
    ctx->pc = 0x23F9B8u;
    {
        const bool branch_taken_0x23f9b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9B8u;
        // 0x23f9bc: 0x45a023  subu        $s4, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9b8) {
            ctx->pc = 0x23F728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f728;
        }
    }
    ctx->pc = 0x23F9C0u;
    // 0x23f9c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23f9c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23f9c8: 0x2442b340  addiu       $v0, $v0, -0x4CC0
    ctx->pc = 0x23f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947648));
    // 0x23f9cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23f9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f9d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f9d4: 0x800008  jr          $a0
    ctx->pc = 0x23F9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F728u: goto label_23f728;
            case 0x23F9DCu: goto label_23f9dc;
            case 0x23FA84u: goto label_23fa84;
            case 0x23FB68u: goto label_23fb68;
            case 0x240018u: goto label_240018;
            case 0x240110u: goto label_240110;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F9D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23F9DCu;
label_23f9dc:
    // 0x23f9dc: 0x8d660018  lw          $a2, 0x18($t3)
    ctx->pc = 0x23f9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x23f9e0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23f9e4: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x23f9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x23f9e8: 0x8fa90010  lw          $t1, 0x10($sp)
    ctx->pc = 0x23f9e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f9ec: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x23f9ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x23f9f0: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x23f9f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f9f4: 0x1473818  mult        $a3, $t2, $a3
    ctx->pc = 0x23f9f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x23f9f8: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x23f9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23f9fc: 0x2094818  mult        $t1, $s0, $t1
    ctx->pc = 0x23f9fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x23fa00: 0x2284018  mult        $t0, $s1, $t0
    ctx->pc = 0x23fa00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x23fa04: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x23fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x23fa08: 0x8d620014  lw          $v0, 0x14($t3)
    ctx->pc = 0x23fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x23fa0c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x23fa0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa10: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x23fa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x23fa14: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x23fa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x23fa18: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x23fa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x23fa1c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x23fa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x23fa20: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23fa24: 0x290c3  sra         $s2, $v0, 3
    ctx->pc = 0x23fa24u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 3));
    // 0x23fa28: 0x898821  addu        $s1, $a0, $t1
    ctx->pc = 0x23fa28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x23fa2c: 0x688021  addu        $s0, $v1, $t0
    ctx->pc = 0x23fa2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x23fa30: 0x114002ee  beqz        $t2, . + 4 + (0x2EE << 2)
    ctx->pc = 0x23FA30u;
    {
        const bool branch_taken_0x23fa30 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA30u;
        // 0x23fa34: 0xafa5001c  sw          $a1, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa30) {
            ctx->pc = 0x2405ECu;
            goto label_2405ec;
        }
    }
    ctx->pc = 0x23FA38u;
label_23fa38:
    // 0x23fa38: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x23fa38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23fa3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23fa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa40: 0xd20018  mult        $zero, $a2, $s2
    ctx->pc = 0x23fa40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x23fa44: 0x3012  mflo        $a2
    ctx->pc = 0x23fa44u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x23fa48: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x23FA48u;
    SET_GPR_U32(ctx, 31, 0x23FA50u);
    ctx->pc = 0x23FA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA48u;
    // 0x23fa4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x23FA48u, 0x23FA50u)) {
        return;
    }
    ctx->pc = 0x23FA50u;
label_23fa50:
    // 0x23fa50: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x23fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23fa54: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23fa58: 0x8c423f30  lw          $v0, 0x3F30($v0)
    ctx->pc = 0x23fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23fa5c: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x23fa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x23fa60: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x23fa60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa64: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x23fa64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x23fa68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23fa6c: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x23fa6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x23fa70: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x23fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x23fa74: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x23FA74u;
    {
        const bool branch_taken_0x23fa74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA74u;
        // 0x23fa78: 0x2258821  addu        $s1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa74) {
            ctx->pc = 0x23FA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fa38;
        }
    }
    ctx->pc = 0x23FA7Cu;
    // 0x23fa7c: 0x100002dc  b           . + 4 + (0x2DC << 2)
    ctx->pc = 0x23FA7Cu;
    {
        const bool branch_taken_0x23fa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA7Cu;
        // 0x23fa80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa7c) {
            ctx->pc = 0x2405F0u;
            goto label_2405f0;
        }
    }
    ctx->pc = 0x23FA84u;
label_23fa84:
    // 0x23fa84: 0x8d660018  lw          $a2, 0x18($t3)
    ctx->pc = 0x23fa84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x23fa88: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23fa8c: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x23fa8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x23fa90: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x23fa90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fa94: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x23fa94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x23fa98: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23fa98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fa9c: 0x1473818  mult        $a3, $t2, $a3
    ctx->pc = 0x23fa9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x23faa0: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23faa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23faa4: 0x2084018  mult        $t0, $s0, $t0
    ctx->pc = 0x23faa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x23faa8: 0x2252818  mult        $a1, $s1, $a1
    ctx->pc = 0x23faa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23faac: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x23faacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x23fab0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x23fab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x23fab4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x23fab4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fab8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23fabc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23fabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23fac0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23fac4: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x23fac4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x23fac8: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x23fac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23facc: 0x112002c7  beqz        $t1, . + 4 + (0x2C7 << 2)
    ctx->pc = 0x23FACCu;
    {
        const bool branch_taken_0x23facc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FACCu;
        // 0x23fad0: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23facc) {
            ctx->pc = 0x2405ECu;
            goto label_2405ec;
        }
    }
    ctx->pc = 0x23FAD4u;
    // 0x23fad4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x23fad4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x23fad8: 0x126040  sll         $t4, $s2, 1
    ctx->pc = 0x23fad8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x23fadc: 0x145880  sll         $t3, $s4, 2
    ctx->pc = 0x23fadcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x23fae0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x23fae0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x23fae4: 0x0  nop
    ctx->pc = 0x23fae4u;
    // NOP
label_23fae8:
    // 0x23fae8: 0x8faa0018  lw          $t2, 0x18($sp)
    ctx->pc = 0x23fae8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23faec: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x23faecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x23faf0: 0x11470015  beq         $t2, $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x23FAF0u;
    {
        const bool branch_taken_0x23faf0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 7));
        ctx->pc = 0x23FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FAF0u;
        // 0x23faf4: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23faf0) {
            ctx->pc = 0x23FB48u;
            goto label_23fb48;
        }
    }
    ctx->pc = 0x23FAF8u;
    // 0x23faf8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x23faf8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x23fafc: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x23fafcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_23fb00:
    // 0x23fb00: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x23fb00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23fb04: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x23fb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x23fb08: 0x30647c00  andi        $a0, $v1, 0x7C00
    ctx->pc = 0x23fb08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x23fb0c: 0x306503e0  andi        $a1, $v1, 0x3E0
    ctx->pc = 0x23fb0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)992);
    // 0x23fb10: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x23fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x23fb14: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x23fb14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x23fb18: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x23fb18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x23fb1c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23fb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x23fb20: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x23fb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x23fb24: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x23fb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x23fb28: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x23fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x23fb2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23fb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23fb30: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x23fb30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x23fb34: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x23fb34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x23fb38: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x23fb38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x23fb3c: 0x1549fff0  bne         $t2, $t1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x23FB3Cu;
    {
        const bool branch_taken_0x23fb3c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        ctx->pc = 0x23FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB3Cu;
        // 0x23fb40: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb3c) {
            ctx->pc = 0x23FB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fb00;
        }
    }
    ctx->pc = 0x23FB44u;
    // 0x23fb44: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_23fb48:
    // 0x23fb48: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x23fb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x23fb4c: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x23fb4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x23fb50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23fb50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fb54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23fb58: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x23FB58u;
    {
        const bool branch_taken_0x23fb58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB58u;
        // 0x23fb5c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb58) {
            ctx->pc = 0x23FAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fae8;
        }
    }
    ctx->pc = 0x23FB60u;
    // 0x23fb60: 0x100002a3  b           . + 4 + (0x2A3 << 2)
    ctx->pc = 0x23FB60u;
    {
        const bool branch_taken_0x23fb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB60u;
        // 0x23fb64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb60) {
            ctx->pc = 0x2405F0u;
            goto label_2405f0;
        }
    }
    ctx->pc = 0x23FB68u;
label_23fb68:
    // 0x23fb68: 0x92620022  lbu         $v0, 0x22($s3)
    ctx->pc = 0x23fb68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x23fb6c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x23fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x23fb70: 0x30550001  andi        $s5, $v0, 0x1
    ctx->pc = 0x23fb70u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23fb74: 0x16a00007  bnez        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FB74u;
    {
        const bool branch_taken_0x23fb74 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB74u;
        // 0x23fb78: 0x8f868ec0  lw          $a2, -0x7140($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb74) {
            ctx->pc = 0x23FB94u;
            goto label_23fb94;
        }
    }
    ctx->pc = 0x23FB7Cu;
    // 0x23fb7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23fb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fb80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23fb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fb84: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x23FB84u;
    SET_GPR_U32(ctx, 31, 0x23FB8Cu);
    ctx->pc = 0x23FB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB84u;
    // 0x23fb88: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x23FB84u, 0x23FB8Cu)) {
        return;
    }
    ctx->pc = 0x23FB8Cu;
label_23fb8c:
    // 0x23fb8c: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x23fb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x23fb90: 0x8cc63f30  lw          $a2, 0x3F30($a2)
    ctx->pc = 0x23fb90u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B3F30u));
label_23fb94:
    // 0x23fb94: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x23fb94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23fb98: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x23fb98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23fb9c: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x23fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x23fba0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23fba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fba4: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x23fba4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23fba8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x23fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x23fbac: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x23fbacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23fbb0: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x23fbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x23fbb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23fbb8: 0x14a7006a  bne         $a1, $a3, . + 4 + (0x6A << 2)
    ctx->pc = 0x23FBB8u;
    {
        const bool branch_taken_0x23fbb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x23FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBB8u;
        // 0x23fbbc: 0x444021  addu        $t0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fbb8) {
            ctx->pc = 0x23FD64u;
            goto label_23fd64;
        }
    }
    ctx->pc = 0x23FBC0u;
    // 0x23fbc0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x23fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x23fbc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23fbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fbc8: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x23fbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x23fbcc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23fbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fbd0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x23fbd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23fbd4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x23fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x23fbd8: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x23fbd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23fbdc: 0x92620023  lbu         $v0, 0x23($s3)
    ctx->pc = 0x23fbdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
    // 0x23fbe0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23fbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23fbe4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23fbe8: 0x14460035  bne         $v0, $a2, . + 4 + (0x35 << 2)
    ctx->pc = 0x23FBE8u;
    {
        const bool branch_taken_0x23fbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x23FBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBE8u;
        // 0x23fbec: 0x643821  addu        $a3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fbe8) {
            ctx->pc = 0x23FCC0u;
            goto label_23fcc0;
        }
    }
    ctx->pc = 0x23FBF0u;
    // 0x23fbf0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23fbf4: 0x8e6c0008  lw          $t4, 0x8($s3)
    ctx->pc = 0x23fbf4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x23fbf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23fbf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fbfc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23fc00: 0x10600276  beqz        $v1, . + 4 + (0x276 << 2)
    ctx->pc = 0x23FC00u;
    {
        const bool branch_taken_0x23fc00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC00u;
        // 0x23fc04: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc00) {
            ctx->pc = 0x2405DCu;
            goto label_2405dc;
        }
    }
    ctx->pc = 0x23FC08u;
    // 0x23fc08: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x23fc08u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x23fc0c: 0x145880  sll         $t3, $s4, 2
    ctx->pc = 0x23fc0cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x23fc10: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x23fc10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x23fc14: 0x0  nop
    ctx->pc = 0x23fc14u;
    // NOP
label_23fc18:
    // 0x23fc18: 0x8faa0018  lw          $t2, 0x18($sp)
    ctx->pc = 0x23fc18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23fc1c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x23fc1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x23fc20: 0x1149001f  beq         $t2, $t1, . + 4 + (0x1F << 2)
    ctx->pc = 0x23FC20u;
    {
        const bool branch_taken_0x23fc20 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 9));
        ctx->pc = 0x23FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC20u;
        // 0x23fc24: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc20) {
            ctx->pc = 0x23FCA0u;
            goto label_23fca0;
        }
    }
    ctx->pc = 0x23FC28u;
    // 0x23fc28: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x23fc28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x23fc2c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x23fc2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_23fc30:
    // 0x23fc30: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x23fc30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23fc34: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x23fc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23fc38: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x23fc38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x23fc3c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x23fc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x23fc40: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x23fc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x23fc44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23fc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23fc48: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x23fc48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23fc4c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23fc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x23fc50: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23fc54: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x23fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x23fc58: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x23fc58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23fc5c: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x23fc5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x23fc60: 0x30827c00  andi        $v0, $a0, 0x7C00
    ctx->pc = 0x23fc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x23fc64: 0x308503e0  andi        $a1, $a0, 0x3E0
    ctx->pc = 0x23fc64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x23fc68: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x23fc68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x23fc6c: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x23fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x23fc70: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x23fc70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x23fc74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23fc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23fc78: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x23fc78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x23fc7c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x23fc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x23fc80: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x23fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23fc84: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23fc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23fc88: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x23fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x23fc8c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x23fc8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x23fc90: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x23fc90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x23fc94: 0x1546ffe6  bne         $t2, $a2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x23FC94u;
    {
        const bool branch_taken_0x23fc94 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 6));
        ctx->pc = 0x23FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC94u;
        // 0x23fc98: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc94) {
            ctx->pc = 0x23FC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fc30;
        }
    }
    ctx->pc = 0x23FC9Cu;
    // 0x23fc9c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_23fca0:
    // 0x23fca0: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x23fca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x23fca4: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x23fca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x23fca8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23fca8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fcac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23fcb0: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x23FCB0u;
    {
        const bool branch_taken_0x23fcb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCB0u;
        // 0x23fcb4: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fcb0) {
            ctx->pc = 0x23FC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fc18;
        }
    }
    ctx->pc = 0x23FCB8u;
    // 0x23fcb8: 0x10000248  b           . + 4 + (0x248 << 2)
    ctx->pc = 0x23FCB8u;
    {
        const bool branch_taken_0x23fcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fcb8) {
            ctx->pc = 0x2405DCu;
            goto label_2405dc;
        }
    }
    ctx->pc = 0x23FCC0u;
label_23fcc0:
    // 0x23fcc0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23fcc4: 0x8e690008  lw          $t1, 0x8($s3)
    ctx->pc = 0x23fcc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x23fcc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23fcc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fccc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23fcd0: 0x10600242  beqz        $v1, . + 4 + (0x242 << 2)
    ctx->pc = 0x23FCD0u;
    {
        const bool branch_taken_0x23fcd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCD0u;
        // 0x23fcd4: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fcd0) {
            ctx->pc = 0x2405DCu;
            goto label_2405dc;
        }
    }
    ctx->pc = 0x23FCD8u;
    // 0x23fcd8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x23fcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x23fcdc: 0x145880  sll         $t3, $s4, 2
    ctx->pc = 0x23fcdcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x23fce0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x23fce0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x23fce4: 0x0  nop
    ctx->pc = 0x23fce4u;
    // NOP
label_23fce8:
    // 0x23fce8: 0x8faa0018  lw          $t2, 0x18($sp)
    ctx->pc = 0x23fce8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23fcec: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x23fcecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x23fcf0: 0x11460014  beq         $t2, $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x23FCF0u;
    {
        const bool branch_taken_0x23fcf0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 6));
        ctx->pc = 0x23FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCF0u;
        // 0x23fcf4: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fcf0) {
            ctx->pc = 0x23FD44u;
            goto label_23fd44;
        }
    }
    ctx->pc = 0x23FCF8u;
    // 0x23fcf8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x23fcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x23fcfc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x23fcfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_23fd00:
    // 0x23fd00: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x23fd00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23fd04: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x23fd04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x23fd08: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23fd08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x23fd0c: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x23fd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23fd10: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x23fd10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x23fd14: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x23fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x23fd18: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x23fd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x23fd1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23fd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23fd20: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x23fd20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23fd24: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23fd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x23fd28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23fd2c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x23fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x23fd30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23fd34: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x23fd34u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x23fd38: 0x1545fff1  bne         $t2, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x23FD38u;
    {
        const bool branch_taken_0x23fd38 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 5));
        ctx->pc = 0x23FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD38u;
        // 0x23fd3c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd38) {
            ctx->pc = 0x23FD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fd00;
        }
    }
    ctx->pc = 0x23FD40u;
    // 0x23fd40: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_23fd44:
    // 0x23fd44: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x23fd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x23fd48: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x23fd48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x23fd4c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23fd4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23fd54: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x23FD54u;
    {
        const bool branch_taken_0x23fd54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD54u;
        // 0x23fd58: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd54) {
            ctx->pc = 0x23FCE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fce8;
        }
    }
    ctx->pc = 0x23FD5Cu;
    // 0x23fd5c: 0x1000021f  b           . + 4 + (0x21F << 2)
    ctx->pc = 0x23FD5Cu;
    {
        const bool branch_taken_0x23fd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fd5c) {
            ctx->pc = 0x2405DCu;
            goto label_2405dc;
        }
    }
    ctx->pc = 0x23FD64u;
label_23fd64:
    // 0x23fd64: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x23fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x23fd68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23fd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fd6c: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x23fd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x23fd70: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x23fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x23fd74: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x23fd74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23fd78: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fd7c: 0x92630023  lbu         $v1, 0x23($s3)
    ctx->pc = 0x23fd7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
    // 0x23fd80: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x23fd80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x23fd84: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x23fd84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x23fd88: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x23fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x23fd8c: 0x1466006a  bne         $v1, $a2, . + 4 + (0x6A << 2)
    ctx->pc = 0x23FD8Cu;
    {
        const bool branch_taken_0x23fd8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x23FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD8Cu;
        // 0x23fd90: 0x823821  addu        $a3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd8c) {
            ctx->pc = 0x23FF38u;
            goto label_23ff38;
        }
    }
    ctx->pc = 0x23FD94u;
    // 0x23fd94: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23fd98: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x23fd98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x23fd9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23fd9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fda0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23fda4: 0x1060020d  beqz        $v1, . + 4 + (0x20D << 2)
    ctx->pc = 0x23FDA4u;
    {
        const bool branch_taken_0x23fda4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDA4u;
        // 0x23fda8: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fda4) {
            ctx->pc = 0x2405DCu;
            goto label_2405dc;
        }
    }
    ctx->pc = 0x23FDACu;
    // 0x23fdac: 0x0  nop
    ctx->pc = 0x23fdacu;
    // NOP
label_23fdb0:
    // 0x23fdb0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fdb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23fdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23fdb8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23FDB8u;
    {
        const bool branch_taken_0x23fdb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDB8u;
        // 0x23fdbc: 0x8faa0018  lw          $t2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fdb8) {
            ctx->pc = 0x23FE10u;
            goto label_23fe10;
        }
    }
    ctx->pc = 0x23FDC0u;
    // 0x23fdc0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x23fdc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23fdc4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x23fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x23fdc8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23fdcc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23fdd0: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x23fdd0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23fdd4: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x23fdd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x23fdd8: 0x30827c00  andi        $v0, $a0, 0x7C00
    ctx->pc = 0x23fdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x23fddc: 0x308503e0  andi        $a1, $a0, 0x3E0
    ctx->pc = 0x23fddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x23fde0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x23fde0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x23fde4: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x23fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x23fde8: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x23fde8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x23fdec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23fdecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23fdf0: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x23fdf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x23fdf4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x23fdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x23fdf8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x23fdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23fdfc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23fdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23fe00: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x23fe00u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x23fe04: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x23fe04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x23fe08: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23fe08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x23fe0c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x23fe0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_23fe10:
    // 0x23fe10: 0x2d420002  sltiu       $v0, $t2, 0x2
    ctx->pc = 0x23fe10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23fe14: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x23FE14u;
    {
        const bool branch_taken_0x23fe14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE14u;
        // 0x23fe18: 0x145880  sll         $t3, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe14) {
            ctx->pc = 0x23FEC0u;
            goto label_23fec0;
        }
    }
    ctx->pc = 0x23FE1Cu;
    // 0x23fe1c: 0x0  nop
    ctx->pc = 0x23fe1cu;
    // NOP
label_23fe20:
    // 0x23fe20: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x23fe20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23fe24: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23fe24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23fe28: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23fe2c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23fe30: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x23fe30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23fe34: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x23fe34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x23fe38: 0x30827c00  andi        $v0, $a0, 0x7C00
    ctx->pc = 0x23fe38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x23fe3c: 0x308503e0  andi        $a1, $a0, 0x3E0
    ctx->pc = 0x23fe3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x23fe40: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x23fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x23fe44: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x23fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x23fe48: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x23fe48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x23fe4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23fe4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23fe50: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x23fe50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x23fe54: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x23fe54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x23fe58: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x23fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23fe5c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23fe5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23fe60: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x23fe60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x23fe64: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x23fe64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x23fe68: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x23fe68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23fe6c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x23fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x23fe70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23fe74: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23fe78: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x23fe78u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23fe7c: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x23fe7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x23fe80: 0x30827c00  andi        $v0, $a0, 0x7C00
    ctx->pc = 0x23fe80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x23fe84: 0x308503e0  andi        $a1, $a0, 0x3E0
    ctx->pc = 0x23fe84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x23fe88: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x23fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x23fe8c: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x23fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x23fe90: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x23fe90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x23fe94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23fe94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23fe98: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x23fe98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x23fe9c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x23fe9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x23fea0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x23fea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23fea4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23fea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23fea8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x23fea8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x23feac: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x23feacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x23feb0: 0x254afffe  addiu       $t2, $t2, -0x2
    ctx->pc = 0x23feb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967294));
    // 0x23feb4: 0x2d420002  sltiu       $v0, $t2, 0x2
    ctx->pc = 0x23feb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23feb8: 0x1040ffd9  beqz        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x23FEB8u;
    {
        const bool branch_taken_0x23feb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEB8u;
        // 0x23febc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23feb8) {
            ctx->pc = 0x23FE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fe20;
        }
    }
    ctx->pc = 0x23FEC0u;
label_23fec0:
    // 0x23fec0: 0x11400015  beqz        $t2, . + 4 + (0x15 << 2)
    ctx->pc = 0x23FEC0u;
    {
        const bool branch_taken_0x23fec0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEC0u;
        // 0x23fec4: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fec0) {
            ctx->pc = 0x23FF18u;
            goto label_23ff18;
        }
    }
    ctx->pc = 0x23FEC8u;
    // 0x23fec8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x23fec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23fecc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23feccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23fed0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23fed4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23fed8: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x23fed8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23fedc: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x23fedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x23fee0: 0x30827c00  andi        $v0, $a0, 0x7C00
    ctx->pc = 0x23fee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x23fee4: 0x308503e0  andi        $a1, $a0, 0x3E0
    ctx->pc = 0x23fee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x23fee8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x23fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x23feec: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x23feecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x23fef0: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x23fef0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x23fef4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23fef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23fef8: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x23fef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x23fefc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x23fefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x23ff00: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x23ff00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23ff04: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23ff04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23ff08: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x23ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x23ff0c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x23ff0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x23ff10: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23ff14: 0x0  nop
    ctx->pc = 0x23ff14u;
    // NOP
label_23ff18:
    // 0x23ff18: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x23ff18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x23ff1c: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x23ff1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x23ff20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23ff20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ff24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23ff24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23ff28: 0x1460ffa1  bnez        $v1, . + 4 + (-0x5F << 2)
    ctx->pc = 0x23FF28u;
    {
        const bool branch_taken_0x23ff28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF28u;
        // 0x23ff2c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff28) {
            ctx->pc = 0x23FDB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fdb0;
        }
    }
    ctx->pc = 0x23FF30u;
    // 0x23ff30: 0x100001aa  b           . + 4 + (0x1AA << 2)
    ctx->pc = 0x23FF30u;
    {
        const bool branch_taken_0x23ff30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ff30) {
            ctx->pc = 0x2405DCu;
            goto label_2405dc;
        }
    }
    ctx->pc = 0x23FF38u;
label_23ff38:
    // 0x23ff38: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23ff3c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x23FF3Cu;
    {
        const bool branch_taken_0x23ff3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF3Cu;
        // 0x23ff40: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff3c) {
            ctx->pc = 0x240000u;
            goto label_240000;
        }
    }
    ctx->pc = 0x23FF44u;
    // 0x23ff44: 0x0  nop
    ctx->pc = 0x23ff44u;
    // NOP
label_23ff48:
    // 0x23ff48: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ff4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23ff4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23ff50: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23FF50u;
    {
        const bool branch_taken_0x23ff50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF50u;
        // 0x23ff54: 0x8faa0018  lw          $t2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff50) {
            ctx->pc = 0x23FF7Cu;
            goto label_23ff7c;
        }
    }
    ctx->pc = 0x23FF58u;
    // 0x23ff58: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x23ff58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23ff5c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x23ff5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x23ff60: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23ff60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x23ff64: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x23ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x23ff68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23ff6c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23ff70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23ff70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ff74: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x23ff74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x23ff78: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x23ff78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_23ff7c:
    // 0x23ff7c: 0x2d420002  sltiu       $v0, $t2, 0x2
    ctx->pc = 0x23ff7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23ff80: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23FF80u;
    {
        const bool branch_taken_0x23ff80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF80u;
        // 0x23ff84: 0x145880  sll         $t3, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff80) {
            ctx->pc = 0x23FFD0u;
            goto label_23ffd0;
        }
    }
    ctx->pc = 0x23FF88u;
label_23ff88:
    // 0x23ff88: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x23ff88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23ff8c: 0x254afffe  addiu       $t2, $t2, -0x2
    ctx->pc = 0x23ff8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967294));
    // 0x23ff90: 0x2d440002  sltiu       $a0, $t2, 0x2
    ctx->pc = 0x23ff90u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23ff94: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23ff94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23ff98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23ff9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23ffa0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ffa4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x23ffa4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x23ffa8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x23ffa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x23ffac: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x23ffacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23ffb0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23ffb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x23ffb4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x23ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x23ffb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23ffbc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23ffc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ffc4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x23ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x23ffc8: 0x1080ffef  beqz        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x23FFC8u;
    {
        const bool branch_taken_0x23ffc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFC8u;
        // 0x23ffcc: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ffc8) {
            ctx->pc = 0x23FF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ff88;
        }
    }
    ctx->pc = 0x23FFD0u;
label_23ffd0:
    // 0x23ffd0: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x23FFD0u;
    {
        const bool branch_taken_0x23ffd0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFD0u;
        // 0x23ffd4: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ffd0) {
            ctx->pc = 0x23FFF8u;
            goto label_23fff8;
        }
    }
    ctx->pc = 0x23FFD8u;
    // 0x23ffd8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x23ffd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23ffdc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23ffdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23ffe0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23ffe4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23ffe8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ffec: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x23ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x23fff0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x23fff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x23fff4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_23fff8:
    // 0x23fff8: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x23fff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x23fffc: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x23fffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
label_240000:
    // 0x240000: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x240000u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240004: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x240004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x240008: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x240008u;
    {
        const bool branch_taken_0x240008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240008u;
        // 0x24000c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240008) {
            ctx->pc = 0x23FF48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ff48;
        }
    }
    ctx->pc = 0x240010u;
    // 0x240010: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x240010u;
    {
        const bool branch_taken_0x240010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240010) {
            ctx->pc = 0x2405DCu;
            goto label_2405dc;
        }
    }
    ctx->pc = 0x240018u;
label_240018:
    // 0x240018: 0x8d660018  lw          $a2, 0x18($t3)
    ctx->pc = 0x240018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x24001c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x24001cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x240020: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x240020u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x240024: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x240024u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240028: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x240028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x24002c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x24002cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240030: 0x1473818  mult        $a3, $t2, $a3
    ctx->pc = 0x240030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x240034: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x240034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x240038: 0x2084018  mult        $t0, $s0, $t0
    ctx->pc = 0x240038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x24003c: 0x2252818  mult        $a1, $s1, $a1
    ctx->pc = 0x24003cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x240040: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x240040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x240044: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x240044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x240048: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x240048u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24004c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x24004cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x240050: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x240050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x240054: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x240054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x240058: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x240058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x24005c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x24005cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x240060: 0x11200162  beqz        $t1, . + 4 + (0x162 << 2)
    ctx->pc = 0x240060u;
    {
        const bool branch_taken_0x240060 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x240064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240060u;
        // 0x240064: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240060) {
            ctx->pc = 0x2405ECu;
            goto label_2405ec;
        }
    }
    ctx->pc = 0x240068u;
    // 0x240068: 0x3c0effff  lui         $t6, 0xFFFF
    ctx->pc = 0x240068u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65535 << 16));
    // 0x24006c: 0x123080  sll         $a2, $s2, 2
    ctx->pc = 0x24006cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x240070: 0x146840  sll         $t5, $s4, 1
    ctx->pc = 0x240070u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x240074: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x240074u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
label_240078:
    // 0x240078: 0x8faa0018  lw          $t2, 0x18($sp)
    ctx->pc = 0x240078u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24007c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x24007cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x240080: 0x114e001b  beq         $t2, $t6, . + 4 + (0x1B << 2)
    ctx->pc = 0x240080u;
    {
        const bool branch_taken_0x240080 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 14));
        ctx->pc = 0x240084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240080u;
        // 0x240084: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240080) {
            ctx->pc = 0x2400F0u;
            goto label_2400f0;
        }
    }
    ctx->pc = 0x240088u;
    // 0x240088: 0x3c0b3fff  lui         $t3, 0x3FFF
    ctx->pc = 0x240088u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16383 << 16));
    // 0x24008c: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x24008cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
    // 0x240090: 0x3c0700f8  lui         $a3, 0xF8
    ctx->pc = 0x240090u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)248 << 16));
    // 0x240094: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x240094u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x240098: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x240098u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x24009c: 0x0  nop
    ctx->pc = 0x24009cu;
    // NOP
label_2400a0:
    // 0x2400a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2400a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2400a4: 0x471824  and         $v1, $v0, $a3
    ctx->pc = 0x2400a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2400a8: 0x3044f800  andi        $a0, $v0, 0xF800
    ctx->pc = 0x2400a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63488);
    // 0x2400ac: 0x34a42  srl         $t1, $v1, 9
    ctx->pc = 0x2400acu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x2400b0: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x2400b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x2400b4: 0x304300f8  andi        $v1, $v0, 0xF8
    ctx->pc = 0x2400b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
    // 0x2400b8: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x2400b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2400bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2400BCu;
    {
        const bool branch_taken_0x2400bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2400C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400BCu;
        // 0x2400c0: 0x318c2  srl         $v1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2400bc) {
            ctx->pc = 0x2400D0u;
            goto label_2400d0;
        }
    }
    ctx->pc = 0x2400C4u;
    // 0x2400c4: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x2400c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2400c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2400C8u;
    {
        const bool branch_taken_0x2400c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2400CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400C8u;
        // 0x2400cc: 0x1221025  or          $v0, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2400c8) {
            ctx->pc = 0x2400D4u;
            goto label_2400d4;
        }
    }
    ctx->pc = 0x2400D0u;
label_2400d0:
    // 0x2400d0: 0x1241025  or          $v0, $t1, $a0
    ctx->pc = 0x2400d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
label_2400d4:
    // 0x2400d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2400d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2400d8: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x2400d8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2400dc: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x2400dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2400e0: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x2400e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2400e4: 0x154cffee  bne         $t2, $t4, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2400E4u;
    {
        const bool branch_taken_0x2400e4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        ctx->pc = 0x2400E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400E4u;
        // 0x2400e8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2400e4) {
            ctx->pc = 0x2400A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2400a0;
        }
    }
    ctx->pc = 0x2400ECu;
    // 0x2400ec: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2400ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2400f0:
    // 0x2400f0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2400f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2400f4: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x2400f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x2400f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2400f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2400fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2400fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x240100: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x240100u;
    {
        const bool branch_taken_0x240100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x240104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240100u;
        // 0x240104: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240100) {
            ctx->pc = 0x240078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240078;
        }
    }
    ctx->pc = 0x240108u;
    // 0x240108: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x240108u;
    {
        const bool branch_taken_0x240108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240108u;
        // 0x24010c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240108) {
            ctx->pc = 0x2405F0u;
            goto label_2405f0;
        }
    }
    ctx->pc = 0x240110u;
label_240110:
    // 0x240110: 0x92620022  lbu         $v0, 0x22($s3)
    ctx->pc = 0x240110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x240114: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x240114u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x240118: 0x30550001  andi        $s5, $v0, 0x1
    ctx->pc = 0x240118u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24011c: 0x16a00007  bnez        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x24011Cu;
    {
        const bool branch_taken_0x24011c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x240120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24011Cu;
        // 0x240120: 0x8f868ec0  lw          $a2, -0x7140($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24011c) {
            ctx->pc = 0x24013Cu;
            goto label_24013c;
        }
    }
    ctx->pc = 0x240124u;
    // 0x240124: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x240124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24012c: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x24012Cu;
    SET_GPR_U32(ctx, 31, 0x240134u);
    ctx->pc = 0x240130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24012Cu;
    // 0x240130: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x24012Cu, 0x240134u)) {
        return;
    }
    ctx->pc = 0x240134u;
label_240134:
    // 0x240134: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x240134u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x240138: 0x8cc63f30  lw          $a2, 0x3F30($a2)
    ctx->pc = 0x240138u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B3F30u));
label_24013c:
    // 0x24013c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x24013cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x240140: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x240140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x240144: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x240144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x240148: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x240148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24014c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x24014cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x240150: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x240150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x240154: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x240154u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x240158: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x240158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x24015c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24015cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x240160: 0x14a7006d  bne         $a1, $a3, . + 4 + (0x6D << 2)
    ctx->pc = 0x240160u;
    {
        const bool branch_taken_0x240160 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x240164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240160u;
        // 0x240164: 0x444021  addu        $t0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240160) {
            ctx->pc = 0x240318u;
            goto label_240318;
        }
    }
    ctx->pc = 0x240168u;
    // 0x240168: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x240168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x24016c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24016cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240170: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x240170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x240174: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x240174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240178: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x240178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x24017c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x24017cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x240180: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x240180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x240184: 0x92620023  lbu         $v0, 0x23($s3)
    ctx->pc = 0x240184u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
    // 0x240188: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x240188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x24018c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24018cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x240190: 0x1446002a  bne         $v0, $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x240190u;
    {
        const bool branch_taken_0x240190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x240194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240190u;
        // 0x240194: 0x642821  addu        $a1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240190) {
            ctx->pc = 0x24023Cu;
            goto label_24023c;
        }
    }
    ctx->pc = 0x240198u;
    // 0x240198: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x240198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x24019c: 0x8e690008  lw          $t1, 0x8($s3)
    ctx->pc = 0x24019cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2401a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2401a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2401a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2401a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2401a8: 0x1060010c  beqz        $v1, . + 4 + (0x10C << 2)
    ctx->pc = 0x2401A8u;
    {
        const bool branch_taken_0x2401a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2401ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401A8u;
        // 0x2401ac: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2401a8) {
            ctx->pc = 0x2405DCu;
            goto label_2405dc;
        }
    }
    ctx->pc = 0x2401B0u;
    // 0x2401b0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2401b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2401b4: 0x146840  sll         $t5, $s4, 1
    ctx->pc = 0x2401b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x2401b8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2401b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2401bc: 0x0  nop
    ctx->pc = 0x2401bcu;
    // NOP
label_2401c0:
    // 0x2401c0: 0x8faa0018  lw          $t2, 0x18($sp)
    ctx->pc = 0x2401c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2401c4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x2401c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2401c8: 0x11470014  beq         $t2, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x2401C8u;
    {
        const bool branch_taken_0x2401c8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 7));
        ctx->pc = 0x2401CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401C8u;
        // 0x2401cc: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2401c8) {
            ctx->pc = 0x24021Cu;
            goto label_24021c;
        }
    }
    ctx->pc = 0x2401D0u;
    // 0x2401d0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2401d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2401d4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2401d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2401d8:
    // 0x2401d8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2401d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2401dc: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x2401dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2401e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2401e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2401e4: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x2401e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2401e8: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x2401e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2401ec: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2401ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2401f0: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x2401f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x2401f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2401f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2401f8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2401f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2401fc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2401fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x240200: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x240200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x240204: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x240204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x240208: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x240208u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24020c: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x24020cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x240210: 0x1546fff1  bne         $t2, $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x240210u;
    {
        const bool branch_taken_0x240210 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 6));
        ctx->pc = 0x240214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240210u;
        // 0x240214: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240210) {
            ctx->pc = 0x2401D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2401d8;
        }
    }
    ctx->pc = 0x240218u;
    // 0x240218: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x240218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_24021c:
    // 0x24021c: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x24021cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x240220: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x240220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x240224: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x240224u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240228: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x240228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24022c: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x24022Cu;
    {
        const bool branch_taken_0x24022c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x240230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24022Cu;
        // 0x240230: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24022c) {
            ctx->pc = 0x2401C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2401c0;
        }
    }
    ctx->pc = 0x240234u;
    // 0x240234: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x240234u;
    {
        const bool branch_taken_0x240234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240234) {
            ctx->pc = 0x2405DCu;
            goto label_2405dc;
        }
    }
    ctx->pc = 0x24023Cu;
label_24023c:
    // 0x24023c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x24023cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x240240: 0x8e6c0008  lw          $t4, 0x8($s3)
    ctx->pc = 0x240240u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x240244: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x240244u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240248: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x240248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24024c: 0x106000e3  beqz        $v1, . + 4 + (0xE3 << 2)
    ctx->pc = 0x24024Cu;
    {
        const bool branch_taken_0x24024c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24024Cu;
        // 0x240250: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24024c) {
            ctx->pc = 0x2405DCu;
            goto label_2405dc;
        }
    }
    ctx->pc = 0x240254u;
    // 0x240254: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x240254u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x240258: 0x146840  sll         $t5, $s4, 1
    ctx->pc = 0x240258u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x24025c: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x24025cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
label_240260:
    // 0x240260: 0x8faa0018  lw          $t2, 0x18($sp)
    ctx->pc = 0x240260u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x240264: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x240264u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x240268: 0x114b0023  beq         $t2, $t3, . + 4 + (0x23 << 2)
    ctx->pc = 0x240268u;
    {
        const bool branch_taken_0x240268 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 11));
        ctx->pc = 0x24026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240268u;
        // 0x24026c: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240268) {
            ctx->pc = 0x2402F8u;
            goto label_2402f8;
        }
    }
    ctx->pc = 0x240270u;
    // 0x240270: 0x3c073fff  lui         $a3, 0x3FFF
    ctx->pc = 0x240270u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16383 << 16));
    // 0x240274: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x240274u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x240278: 0x3c0e00f8  lui         $t6, 0xF8
    ctx->pc = 0x240278u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)248 << 16));
    // 0x24027c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x24027cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x240280: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x240280u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x240284: 0x0  nop
    ctx->pc = 0x240284u;
    // NOP
label_240288:
    // 0x240288: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x240288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24028c: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x24028cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x240290: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x240290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x240294: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x240294u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x240298: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x240298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x24029c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24029cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2402a0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2402a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2402a4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2402a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2402a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2402a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2402ac: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2402acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2402b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2402b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2402b4: 0x6e2024  and         $a0, $v1, $t6
    ctx->pc = 0x2402b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 14));
    // 0x2402b8: 0x3062f800  andi        $v0, $v1, 0xF800
    ctx->pc = 0x2402b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63488);
    // 0x2402bc: 0x43242  srl         $a2, $a0, 9
    ctx->pc = 0x2402bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 9));
    // 0x2402c0: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x2402c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x2402c4: 0x306400f8  andi        $a0, $v1, 0xF8
    ctx->pc = 0x2402c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x2402c8: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x2402c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2402cc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2402CCu;
    {
        const bool branch_taken_0x2402cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2402D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402CCu;
        // 0x2402d0: 0x420c2  srl         $a0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2402cc) {
            ctx->pc = 0x2402D8u;
            goto label_2402d8;
        }
    }
    ctx->pc = 0x2402D4u;
    // 0x2402d4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2402d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_2402d8:
    // 0x2402d8: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x2402d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2402dc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2402dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2402e0: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x2402e0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2402e4: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x2402e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2402e8: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x2402e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2402ec: 0x1549ffe6  bne         $t2, $t1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2402ECu;
    {
        const bool branch_taken_0x2402ec = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        ctx->pc = 0x2402F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402ECu;
        // 0x2402f0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2402ec) {
            ctx->pc = 0x240288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240288;
        }
    }
    ctx->pc = 0x2402F4u;
    // 0x2402f4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2402f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2402f8:
    // 0x2402f8: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x2402f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2402fc: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x2402fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x240300: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x240300u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240304: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x240304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x240308: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x240308u;
    {
        const bool branch_taken_0x240308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240308u;
        // 0x24030c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240308) {
            ctx->pc = 0x240260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240260;
        }
    }
    ctx->pc = 0x240310u;
    // 0x240310: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x240310u;
    {
        const bool branch_taken_0x240310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240310) {
            ctx->pc = 0x2405DCu;
            goto label_2405dc;
        }
    }
    ctx->pc = 0x240318u;
label_240318:
    // 0x240318: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x240318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x24031c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24031cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240320: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x240320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x240324: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x240324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x240328: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x240328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x24032c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x24032cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240330: 0x92630023  lbu         $v1, 0x23($s3)
    ctx->pc = 0x240330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
    // 0x240334: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x240334u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x240338: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x240338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x24033c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x24033cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x240340: 0x1466003b  bne         $v1, $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x240340u;
    {
        const bool branch_taken_0x240340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x240344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240340u;
        // 0x240344: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240340) {
            ctx->pc = 0x240430u;
            goto label_240430;
        }
    }
    ctx->pc = 0x240348u;
    // 0x240348: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x240348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x24034c: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x24034cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x240350: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x240350u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240354: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x240354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x240358: 0x106000a0  beqz        $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x240358u;
    {
        const bool branch_taken_0x240358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240358u;
        // 0x24035c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240358) {
            ctx->pc = 0x2405DCu;
            goto label_2405dc;
        }
    }
    ctx->pc = 0x240360u;
label_240360:
    // 0x240360: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x240360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240364: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x240364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x240368: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x240368u;
    {
        const bool branch_taken_0x240368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240368u;
        // 0x24036c: 0x8faa0018  lw          $t2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240368) {
            ctx->pc = 0x240394u;
            goto label_240394;
        }
    }
    ctx->pc = 0x240370u;
    // 0x240370: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x240370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x240374: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x240374u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x240378: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x240378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x24037c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x24037cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x240380: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x240380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x240384: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x240384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x240388: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x240388u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24038c: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x24038cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x240390: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x240390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_240394:
    // 0x240394: 0x2d420002  sltiu       $v0, $t2, 0x2
    ctx->pc = 0x240394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x240398: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x240398u;
    {
        const bool branch_taken_0x240398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240398u;
        // 0x24039c: 0x146840  sll         $t5, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240398) {
            ctx->pc = 0x2403E8u;
            goto label_2403e8;
        }
    }
    ctx->pc = 0x2403A0u;
label_2403a0:
    // 0x2403a0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2403a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2403a4: 0x254afffe  addiu       $t2, $t2, -0x2
    ctx->pc = 0x2403a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967294));
    // 0x2403a8: 0x2d440002  sltiu       $a0, $t2, 0x2
    ctx->pc = 0x2403a8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2403ac: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2403acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2403b0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2403b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2403b4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2403b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2403b8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2403b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2403bc: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x2403bcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2403c0: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x2403c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2403c4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2403c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2403c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2403c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2403cc: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2403ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2403d0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2403d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2403d4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2403d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2403d8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2403d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2403dc: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x2403dcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2403e0: 0x1080ffef  beqz        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2403E0u;
    {
        const bool branch_taken_0x2403e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2403E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403E0u;
        // 0x2403e4: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2403e0) {
            ctx->pc = 0x2403A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2403a0;
        }
    }
    ctx->pc = 0x2403E8u;
label_2403e8:
    // 0x2403e8: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2403E8u;
    {
        const bool branch_taken_0x2403e8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2403ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403E8u;
        // 0x2403ec: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2403e8) {
            ctx->pc = 0x240410u;
            goto label_240410;
        }
    }
    ctx->pc = 0x2403F0u;
    // 0x2403f0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2403f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2403f4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2403f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2403f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2403f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2403fc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2403fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x240400: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x240400u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240404: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x240404u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x240408: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x240408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x24040c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x24040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_240410:
    // 0x240410: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x240410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x240414: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x240414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x240418: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x240418u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24041c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24041cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x240420: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x240420u;
    {
        const bool branch_taken_0x240420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x240424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240420u;
        // 0x240424: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240420) {
            ctx->pc = 0x240360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240360;
        }
    }
    ctx->pc = 0x240428u;
    // 0x240428: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x240428u;
    {
        const bool branch_taken_0x240428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240428) {
            ctx->pc = 0x2405DCu;
            goto label_2405dc;
        }
    }
    ctx->pc = 0x240430u;
label_240430:
    // 0x240430: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x240430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x240434: 0x8e690008  lw          $t1, 0x8($s3)
    ctx->pc = 0x240434u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x240438: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x240438u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24043c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24043cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x240440: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x240440u;
    {
        const bool branch_taken_0x240440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240440u;
        // 0x240444: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240440) {
            ctx->pc = 0x2405DCu;
            goto label_2405dc;
        }
    }
    ctx->pc = 0x240448u;
    // 0x240448: 0x3c0c3fff  lui         $t4, 0x3FFF
    ctx->pc = 0x240448u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16383 << 16));
    // 0x24044c: 0x3c0e00f8  lui         $t6, 0xF8
    ctx->pc = 0x24044cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)248 << 16));
    // 0x240450: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x240450u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x240454: 0x0  nop
    ctx->pc = 0x240454u;
    // NOP
label_240458:
    // 0x240458: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x240458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24045c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24045cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x240460: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x240460u;
    {
        const bool branch_taken_0x240460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240460u;
        // 0x240464: 0x8faa0018  lw          $t2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240460) {
            ctx->pc = 0x2404B8u;
            goto label_2404b8;
        }
    }
    ctx->pc = 0x240468u;
    // 0x240468: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x240468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24046c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x24046cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x240470: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x240470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x240474: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x240474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x240478: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x240478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24047c: 0x6e2024  and         $a0, $v1, $t6
    ctx->pc = 0x24047cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 14));
    // 0x240480: 0x3062f800  andi        $v0, $v1, 0xF800
    ctx->pc = 0x240480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63488);
    // 0x240484: 0x43242  srl         $a2, $a0, 9
    ctx->pc = 0x240484u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 9));
    // 0x240488: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x240488u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x24048c: 0x306400f8  andi        $a0, $v1, 0xF8
    ctx->pc = 0x24048cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x240490: 0x183182b  sltu        $v1, $t4, $v1
    ctx->pc = 0x240490u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x240494: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x240494u;
    {
        const bool branch_taken_0x240494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240494u;
        // 0x240498: 0x420c2  srl         $a0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240494) {
            ctx->pc = 0x2404A0u;
            goto label_2404a0;
        }
    }
    ctx->pc = 0x24049Cu;
    // 0x24049c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x24049cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_2404a0:
    // 0x2404a0: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x2404a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2404a4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2404a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2404a8: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x2404a8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2404ac: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x2404acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2404b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2404b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2404b4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x2404b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_2404b8:
    // 0x2404b8: 0x2d420002  sltiu       $v0, $t2, 0x2
    ctx->pc = 0x2404b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2404bc: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2404BCu;
    {
        const bool branch_taken_0x2404bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2404C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404BCu;
        // 0x2404c0: 0x146840  sll         $t5, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404bc) {
            ctx->pc = 0x240570u;
            goto label_240570;
        }
    }
    ctx->pc = 0x2404C4u;
    // 0x2404c4: 0x3c073fff  lui         $a3, 0x3FFF
    ctx->pc = 0x2404c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16383 << 16));
    // 0x2404c8: 0x3c0b00f8  lui         $t3, 0xF8
    ctx->pc = 0x2404c8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)248 << 16));
    // 0x2404cc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2404ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_2404d0:
    // 0x2404d0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2404d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2404d4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2404d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2404d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2404d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2404dc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2404dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2404e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2404e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2404e4: 0x6b2024  and         $a0, $v1, $t3
    ctx->pc = 0x2404e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x2404e8: 0x3062f800  andi        $v0, $v1, 0xF800
    ctx->pc = 0x2404e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63488);
    // 0x2404ec: 0x43242  srl         $a2, $a0, 9
    ctx->pc = 0x2404ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 9));
    // 0x2404f0: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x2404f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x2404f4: 0x306400f8  andi        $a0, $v1, 0xF8
    ctx->pc = 0x2404f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x2404f8: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x2404f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2404fc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2404FCu;
    {
        const bool branch_taken_0x2404fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404FCu;
        // 0x240500: 0x420c2  srl         $a0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404fc) {
            ctx->pc = 0x240508u;
            goto label_240508;
        }
    }
    ctx->pc = 0x240504u;
    // 0x240504: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x240504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_240508:
    // 0x240508: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x240508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x24050c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x24050cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x240510: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x240510u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x240514: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x240514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x240518: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x240518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24051c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x24051cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x240520: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x240520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x240524: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x240524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x240528: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x240528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24052c: 0x6b2024  and         $a0, $v1, $t3
    ctx->pc = 0x24052cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x240530: 0x3062f800  andi        $v0, $v1, 0xF800
    ctx->pc = 0x240530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63488);
    // 0x240534: 0x43242  srl         $a2, $a0, 9
    ctx->pc = 0x240534u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 9));
    // 0x240538: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x240538u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x24053c: 0x306400f8  andi        $a0, $v1, 0xF8
    ctx->pc = 0x24053cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x240540: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x240540u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x240544: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x240544u;
    {
        const bool branch_taken_0x240544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240544u;
        // 0x240548: 0x420c2  srl         $a0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240544) {
            ctx->pc = 0x240550u;
            goto label_240550;
        }
    }
    ctx->pc = 0x24054Cu;
    // 0x24054c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x24054cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_240550:
    // 0x240550: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x240550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x240554: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x240554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x240558: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x240558u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x24055c: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x24055cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x240560: 0x254afffe  addiu       $t2, $t2, -0x2
    ctx->pc = 0x240560u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967294));
    // 0x240564: 0x2d420002  sltiu       $v0, $t2, 0x2
    ctx->pc = 0x240564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x240568: 0x1040ffd9  beqz        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x240568u;
    {
        const bool branch_taken_0x240568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240568u;
        // 0x24056c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240568) {
            ctx->pc = 0x2404D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2404d0;
        }
    }
    ctx->pc = 0x240570u;
label_240570:
    // 0x240570: 0x11400014  beqz        $t2, . + 4 + (0x14 << 2)
    ctx->pc = 0x240570u;
    {
        const bool branch_taken_0x240570 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x240574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240570u;
        // 0x240574: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240570) {
            ctx->pc = 0x2405C4u;
            goto label_2405c4;
        }
    }
    ctx->pc = 0x240578u;
    // 0x240578: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x240578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24057c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x24057cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x240580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x240580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x240584: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x240584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x240588: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x240588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24058c: 0x6e2024  and         $a0, $v1, $t6
    ctx->pc = 0x24058cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 14));
    // 0x240590: 0x3062f800  andi        $v0, $v1, 0xF800
    ctx->pc = 0x240590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63488);
    // 0x240594: 0x43242  srl         $a2, $a0, 9
    ctx->pc = 0x240594u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 9));
    // 0x240598: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x240598u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x24059c: 0x306400f8  andi        $a0, $v1, 0xF8
    ctx->pc = 0x24059cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x2405a0: 0x183182b  sltu        $v1, $t4, $v1
    ctx->pc = 0x2405a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2405a4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2405A4u;
    {
        const bool branch_taken_0x2405a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2405A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405A4u;
        // 0x2405a8: 0x420c2  srl         $a0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405a4) {
            ctx->pc = 0x2405B0u;
            goto label_2405b0;
        }
    }
    ctx->pc = 0x2405ACu;
    // 0x2405ac: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2405acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_2405b0:
    // 0x2405b0: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x2405b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2405b4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2405b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2405b8: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x2405b8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2405bc: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x2405bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2405c0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2405c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2405c4:
    // 0x2405c4: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x2405c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x2405c8: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x2405c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2405cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2405ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2405d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2405d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2405d4: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
    ctx->pc = 0x2405D4u;
    {
        const bool branch_taken_0x2405d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2405D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405D4u;
        // 0x2405d8: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405d4) {
            ctx->pc = 0x240458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240458;
        }
    }
    ctx->pc = 0x2405DCu;
label_2405dc:
    // 0x2405dc: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2405DCu;
    {
        const bool branch_taken_0x2405dc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2405E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405DCu;
        // 0x2405e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405dc) {
            ctx->pc = 0x2405F0u;
            goto label_2405f0;
        }
    }
    ctx->pc = 0x2405E4u;
    // 0x2405e4: 0xc08a0b0  jal         func_2282C0
    ctx->pc = 0x2405E4u;
    SET_GPR_U32(ctx, 31, 0x2405ECu);
    ctx->pc = 0x2405E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405E4u;
    // 0x2405e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2282C0u, 0x2405E4u, 0x2405ECu)) {
        return;
    }
    ctx->pc = 0x2405ECu;
label_2405ec:
    // 0x2405ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2405ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2405f0:
    // 0x2405f0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2405f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2405f4:
    // 0x2405f4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2405f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2405f8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2405f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2405fc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2405fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x240600: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x240600u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x240604: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x240604u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x240608: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x240608u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24060c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x24060cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x240610: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x240610u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x240614: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x240614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x240618: 0x3e00008  jr          $ra
    ctx->pc = 0x240618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240618u;
        // 0x24061c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240620u;
}
