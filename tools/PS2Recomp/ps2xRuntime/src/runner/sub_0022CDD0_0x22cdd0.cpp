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

// Function: sub_0022CDD0
// Address: 0x22cdd0 - 0x22d1c0
void sub_0022CDD0_0x22cdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CDD0_0x22cdd0");
#endif

    switch (ctx->pc) {
        case 0x22ce88u: goto label_22ce88;
        case 0x22ceb8u: goto label_22ceb8;
        case 0x22ceccu: goto label_22cecc;
        case 0x22cee0u: goto label_22cee0;
        case 0x22cf68u: goto label_22cf68;
        case 0x22cf90u: goto label_22cf90;
        case 0x22cf98u: goto label_22cf98;
        case 0x22cfb0u: goto label_22cfb0;
        case 0x22d078u: goto label_22d078;
        case 0x22d0a8u: goto label_22d0a8;
        case 0x22d0c4u: goto label_22d0c4;
        case 0x22d0d8u: goto label_22d0d8;
        case 0x22d120u: goto label_22d120;
        case 0x22d150u: goto label_22d150;
        case 0x22d15cu: goto label_22d15c;
        case 0x22d174u: goto label_22d174;
        default: break;
    }

    ctx->pc = 0x22cdd0u;

    // 0x22cdd0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x22cdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x22cdd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22cdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22cdd8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x22cdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x22cddc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x22cddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x22cde0: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x22cde0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cde4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x22cde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x22cde8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x22cde8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cdec: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x22cdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x22cdf0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x22cdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x22cdf4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x22cdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x22cdf8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x22cdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x22cdfc: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x22cdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x22ce00: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x22ce00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x22ce04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22ce04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22ce08: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x22ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x22ce0c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x22ce0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x22ce10: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x22ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x22ce14: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x22ce14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x22ce18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22ce1c: 0x14c2007d  bne         $a2, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x22CE1Cu;
    {
        const bool branch_taken_0x22ce1c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x22CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE1Cu;
        // 0x22ce20: 0x8fc40014  lw          $a0, 0x14($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce1c) {
            ctx->pc = 0x22D014u;
            goto label_22d014;
        }
    }
    ctx->pc = 0x22CE24u;
    // 0x22ce24: 0x14e3007c  bne         $a3, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x22CE24u;
    {
        const bool branch_taken_0x22ce24 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x22CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE24u;
        // 0x22ce28: 0x8fc3000c  lw          $v1, 0xC($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce24) {
            ctx->pc = 0x22D018u;
            goto label_22d018;
        }
    }
    ctx->pc = 0x22CE2Cu;
    // 0x22ce2c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22ce30: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22CE30u;
    {
        const bool branch_taken_0x22ce30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE30u;
        // 0x22ce34: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce30) {
            ctx->pc = 0x22CE60u;
            goto label_22ce60;
        }
    }
    ctx->pc = 0x22CE38u;
    // 0x22ce38: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22CE38u;
    {
        const bool branch_taken_0x22ce38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ce38) {
            ctx->pc = 0x22CE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CE38u;
            // 0x22ce3c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CE50u;
            goto label_22ce50;
        }
    }
    ctx->pc = 0x22CE40u;
    // 0x22ce40: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x22CE40u;
    {
        const bool branch_taken_0x22ce40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x22CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE40u;
        // 0x22ce44: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce40) {
            ctx->pc = 0x22CE60u;
            goto label_22ce60;
        }
    }
    ctx->pc = 0x22CE48u;
    // 0x22ce48: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x22CE48u;
    {
        const bool branch_taken_0x22ce48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE48u;
        // 0x22ce4c: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce48) {
            ctx->pc = 0x22D198u;
            goto label_22d198;
        }
    }
    ctx->pc = 0x22CE50u;
label_22ce50:
    // 0x22ce50: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x22CE50u;
    {
        const bool branch_taken_0x22ce50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE50u;
        // 0x22ce54: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce50) {
            ctx->pc = 0x22CF44u;
            goto label_22cf44;
        }
    }
    ctx->pc = 0x22CE58u;
    // 0x22ce58: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x22CE58u;
    {
        const bool branch_taken_0x22ce58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE58u;
        // 0x22ce5c: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce58) {
            ctx->pc = 0x22D198u;
            goto label_22d198;
        }
    }
    ctx->pc = 0x22CE60u;
label_22ce60:
    // 0x22ce60: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x22ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x22ce64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22ce64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22ce68: 0x8fc50018  lw          $a1, 0x18($fp)
    ctx->pc = 0x22ce68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x22ce6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22ce6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22ce70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22ce74: 0x106200c6  beq         $v1, $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x22CE74u;
    {
        const bool branch_taken_0x22ce74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE74u;
        // 0x22ce78: 0xafa5000c  sw          $a1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce74) {
            ctx->pc = 0x22D190u;
            goto label_22d190;
        }
    }
    ctx->pc = 0x22CE7Cu;
    // 0x22ce7c: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x22ce7cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x22ce80: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x22ce80u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x22ce84: 0x0  nop
    ctx->pc = 0x22ce84u;
    // NOP
label_22ce88:
    // 0x22ce88: 0x2476ffff  addiu       $s6, $v1, -0x1
    ctx->pc = 0x22ce88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22ce8c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x22ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22ce90: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x22ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ce94: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22ce94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ce98: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x22ce98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ce9c: 0x8fd10004  lw          $s1, 0x4($fp)
    ctx->pc = 0x22ce9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x22cea0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22cea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cea4: 0x262a821  addu        $s5, $s3, $v0
    ctx->pc = 0x22cea4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x22cea8: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x22CEA8u;
    {
        const bool branch_taken_0x22cea8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEA8u;
        // 0x22ceac: 0x203a021  addu        $s4, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cea8) {
            ctx->pc = 0x22CF2Cu;
            goto label_22cf2c;
        }
    }
    ctx->pc = 0x22CEB0u;
    // 0x22ceb0: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x22ceb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22ceb4: 0x0  nop
    ctx->pc = 0x22ceb4u;
    // NOP
label_22ceb8:
    // 0x22ceb8: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x22ceb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x22cebc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22cebcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x22cec0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x22cec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22cec4: 0xc08af60  jal         func_22BD80
    ctx->pc = 0x22CEC4u;
    SET_GPR_U32(ctx, 31, 0x22CECCu);
    ctx->pc = 0x22CEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CEC4u;
    // 0x22cec8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BD80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22BD80u, 0x22CEC4u, 0x22CECCu)) {
        return;
    }
    ctx->pc = 0x22CECCu;
label_22cecc:
    // 0x22cecc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x22ceccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22ced0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22ced0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ced4: 0x8f8683f8  lw          $a2, -0x7C08($gp)
    ctx->pc = 0x22ced4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
    // 0x22ced8: 0xc08b2ae  jal         func_22CAB8
    ctx->pc = 0x22CED8u;
    SET_GPR_U32(ctx, 31, 0x22CEE0u);
    ctx->pc = 0x22CEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CED8u;
    // 0x22cedc: 0x8c644000  lw          $a0, 0x4000($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CAB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22CAB8u, 0x22CED8u, 0x22CEE0u)) {
        return;
    }
    ctx->pc = 0x22CEE0u;
label_22cee0:
    // 0x22cee0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22cee0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cee4: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x22cee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x22cee8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22CEE8u;
    {
        const bool branch_taken_0x22cee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEE8u;
        // 0x22ceec: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cee8) {
            ctx->pc = 0x22CF0Cu;
            goto label_22cf0c;
        }
    }
    ctx->pc = 0x22CEF0u;
    // 0x22cef0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x22cef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x22cef4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x22cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x22cef8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x22cef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x22cefc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22cefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cf00: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x22cf00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22cf04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22CF04u;
    {
        const bool branch_taken_0x22cf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF04u;
        // 0x22cf08: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf04) {
            ctx->pc = 0x22CF1Cu;
            goto label_22cf1c;
        }
    }
    ctx->pc = 0x22CF0Cu;
label_22cf0c:
    // 0x22cf0c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x22cf0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x22cf10: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x22cf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x22cf14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22cf14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cf18: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x22cf18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_22cf1c:
    // 0x22cf1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22cf1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x22cf20: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x22cf20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x22cf24: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x22CF24u;
    {
        const bool branch_taken_0x22cf24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cf24) {
            ctx->pc = 0x22CF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CF24u;
            // 0x22cf28: 0x92640000  lbu         $a0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ceb8;
        }
    }
    ctx->pc = 0x22CF2Cu;
label_22cf2c:
    // 0x22cf2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x22cf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cf30: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x22cf30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cf34: 0x1477ffd4  bne         $v1, $s7, . + 4 + (-0x2C << 2)
    ctx->pc = 0x22CF34u;
    {
        const bool branch_taken_0x22cf34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x22CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF34u;
        // 0x22cf38: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf34) {
            ctx->pc = 0x22CE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ce88;
        }
    }
    ctx->pc = 0x22CF3Cu;
    // 0x22cf3c: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x22CF3Cu;
    {
        const bool branch_taken_0x22cf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF3Cu;
        // 0x22cf40: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf3c) {
            ctx->pc = 0x22D194u;
            goto label_22d194;
        }
    }
    ctx->pc = 0x22CF44u;
label_22cf44:
    // 0x22cf44: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x22cf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x22cf48: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22cf4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22cf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22cf50: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22cf54: 0x10620090  beq         $v1, $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x22CF54u;
    {
        const bool branch_taken_0x22cf54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF54u;
        // 0x22cf58: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf54) {
            ctx->pc = 0x22D198u;
            goto label_22d198;
        }
    }
    ctx->pc = 0x22CF5Cu;
    // 0x22cf5c: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x22cf5cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x22cf60: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x22cf60u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x22cf64: 0x0  nop
    ctx->pc = 0x22cf64u;
    // NOP
label_22cf68:
    // 0x22cf68: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x22cf68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22cf6c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22cf6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cf70: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22cf74: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x22cf74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cf78: 0x8fd10004  lw          $s1, 0x4($fp)
    ctx->pc = 0x22cf78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x22cf7c: 0x2476ffff  addiu       $s6, $v1, -0x1
    ctx->pc = 0x22cf7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22cf80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22cf80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cf84: 0x265a821  addu        $s5, $s3, $a1
    ctx->pc = 0x22cf84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x22cf88: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x22CF88u;
    {
        const bool branch_taken_0x22cf88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF88u;
        // 0x22cf8c: 0x202a021  addu        $s4, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf88) {
            ctx->pc = 0x22CFFCu;
            goto label_22cffc;
        }
    }
    ctx->pc = 0x22CF90u;
label_22cf90:
    // 0x22cf90: 0xc08af60  jal         func_22BD80
    ctx->pc = 0x22CF90u;
    SET_GPR_U32(ctx, 31, 0x22CF98u);
    ctx->pc = 0x22CF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CF90u;
    // 0x22cf94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BD80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22BD80u, 0x22CF90u, 0x22CF98u)) {
        return;
    }
    ctx->pc = 0x22CF98u;
label_22cf98:
    // 0x22cf98: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x22cf98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x22cf9c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x22cf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22cfa0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22cfa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cfa4: 0x8f8683f8  lw          $a2, -0x7C08($gp)
    ctx->pc = 0x22cfa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
    // 0x22cfa8: 0xc08b2ae  jal         func_22CAB8
    ctx->pc = 0x22CFA8u;
    SET_GPR_U32(ctx, 31, 0x22CFB0u);
    ctx->pc = 0x22CFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CFA8u;
    // 0x22cfac: 0x8c644000  lw          $a0, 0x4000($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CAB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22CAB8u, 0x22CFA8u, 0x22CFB0u)) {
        return;
    }
    ctx->pc = 0x22CFB0u;
label_22cfb0:
    // 0x22cfb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22cfb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cfb4: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x22cfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x22cfb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22CFB8u;
    {
        const bool branch_taken_0x22cfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFB8u;
        // 0x22cfbc: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cfb8) {
            ctx->pc = 0x22CFDCu;
            goto label_22cfdc;
        }
    }
    ctx->pc = 0x22CFC0u;
    // 0x22cfc0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x22cfc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x22cfc4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x22cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x22cfc8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x22cfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x22cfcc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22cfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cfd0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x22cfd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22cfd4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22CFD4u;
    {
        const bool branch_taken_0x22cfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFD4u;
        // 0x22cfd8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cfd4) {
            ctx->pc = 0x22CFECu;
            goto label_22cfec;
        }
    }
    ctx->pc = 0x22CFDCu;
label_22cfdc:
    // 0x22cfdc: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x22cfdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x22cfe0: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x22cfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x22cfe4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22cfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22cfe8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x22cfe8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_22cfec:
    // 0x22cfec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22cfecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x22cff0: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x22cff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x22cff4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x22CFF4u;
    {
        const bool branch_taken_0x22cff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cff4) {
            ctx->pc = 0x22CF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cf90;
        }
    }
    ctx->pc = 0x22CFFCu;
label_22cffc:
    // 0x22cffc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x22cffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d000: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x22d000u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d004: 0x1477ffd8  bne         $v1, $s7, . + 4 + (-0x28 << 2)
    ctx->pc = 0x22D004u;
    {
        const bool branch_taken_0x22d004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x22D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D004u;
        // 0x22d008: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d004) {
            ctx->pc = 0x22CF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cf68;
        }
    }
    ctx->pc = 0x22D00Cu;
    // 0x22d00c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x22D00Cu;
    {
        const bool branch_taken_0x22d00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D00Cu;
        // 0x22d010: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d00c) {
            ctx->pc = 0x22D194u;
            goto label_22d194;
        }
    }
    ctx->pc = 0x22D014u;
label_22d014:
    // 0x22d014: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x22d014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_22d018:
    // 0x22d018: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22d018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22d01c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22D01Cu;
    {
        const bool branch_taken_0x22d01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D01Cu;
        // 0x22d020: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d01c) {
            ctx->pc = 0x22D050u;
            goto label_22d050;
        }
    }
    ctx->pc = 0x22D024u;
    // 0x22d024: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D024u;
    {
        const bool branch_taken_0x22d024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D024u;
        // 0x22d028: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d024) {
            ctx->pc = 0x22D03Cu;
            goto label_22d03c;
        }
    }
    ctx->pc = 0x22D02Cu;
    // 0x22d02c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22D02Cu;
    {
        const bool branch_taken_0x22d02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D02Cu;
        // 0x22d030: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d02c) {
            ctx->pc = 0x22D050u;
            goto label_22d050;
        }
    }
    ctx->pc = 0x22D034u;
    // 0x22d034: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x22D034u;
    {
        const bool branch_taken_0x22d034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D034u;
        // 0x22d038: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d034) {
            ctx->pc = 0x22D198u;
            goto label_22d198;
        }
    }
    ctx->pc = 0x22D03Cu;
label_22d03c:
    // 0x22d03c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x22d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x22d040: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x22D040u;
    {
        const bool branch_taken_0x22d040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D040u;
        // 0x22d044: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d040) {
            ctx->pc = 0x22D0FCu;
            goto label_22d0fc;
        }
    }
    ctx->pc = 0x22D048u;
    // 0x22d048: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x22D048u;
    {
        const bool branch_taken_0x22d048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D048u;
        // 0x22d04c: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d048) {
            ctx->pc = 0x22D198u;
            goto label_22d198;
        }
    }
    ctx->pc = 0x22D050u;
label_22d050:
    // 0x22d050: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x22d050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x22d054: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22d054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22d058: 0x8fc50018  lw          $a1, 0x18($fp)
    ctx->pc = 0x22d058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x22d05c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22d05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22d060: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22d060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22d064: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x22D064u;
    {
        const bool branch_taken_0x22d064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D064u;
        // 0x22d068: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d064) {
            ctx->pc = 0x22D190u;
            goto label_22d190;
        }
    }
    ctx->pc = 0x22D06Cu;
    // 0x22d06c: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x22d06cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x22d070: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x22d070u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x22d074: 0x0  nop
    ctx->pc = 0x22d074u;
    // NOP
label_22d078:
    // 0x22d078: 0x2476ffff  addiu       $s6, $v1, -0x1
    ctx->pc = 0x22d078u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22d07c: 0x8fd10004  lw          $s1, 0x4($fp)
    ctx->pc = 0x22d07cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x22d080: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x22d080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22d084: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22d084u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d088: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x22d088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d08c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x22d08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d090: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22d090u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22d094: 0x262a821  addu        $s5, $s3, $v0
    ctx->pc = 0x22d094u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x22d098: 0x12370012  beq         $s1, $s7, . + 4 + (0x12 << 2)
    ctx->pc = 0x22D098u;
    {
        const bool branch_taken_0x22d098 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 23));
        ctx->pc = 0x22D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D098u;
        // 0x22d09c: 0x203a021  addu        $s4, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d098) {
            ctx->pc = 0x22D0E4u;
            goto label_22d0e4;
        }
    }
    ctx->pc = 0x22D0A0u;
    // 0x22d0a0: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x22d0a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x22d0a4: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x22d0a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_22d0a8:
    // 0x22d0a8: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x22d0a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22d0ac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22d0acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22d0b0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x22d0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d0b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22d0b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x22d0b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x22d0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22d0bc: 0xc08af60  jal         func_22BD80
    ctx->pc = 0x22D0BCu;
    SET_GPR_U32(ctx, 31, 0x22D0C4u);
    ctx->pc = 0x22D0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D0BCu;
    // 0x22d0c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BD80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22BD80u, 0x22D0BCu, 0x22D0C4u)) {
        return;
    }
    ctx->pc = 0x22D0C4u;
label_22d0c4:
    // 0x22d0c4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x22d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22d0c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22d0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d0cc: 0x8f8683f8  lw          $a2, -0x7C08($gp)
    ctx->pc = 0x22d0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
    // 0x22d0d0: 0xc08b2ae  jal         func_22CAB8
    ctx->pc = 0x22D0D0u;
    SET_GPR_U32(ctx, 31, 0x22D0D8u);
    ctx->pc = 0x22D0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D0D0u;
    // 0x22d0d4: 0x8c644000  lw          $a0, 0x4000($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CAB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22CAB8u, 0x22D0D0u, 0x22D0D8u)) {
        return;
    }
    ctx->pc = 0x22D0D8u;
label_22d0d8:
    // 0x22d0d8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x22d0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22d0dc: 0x1632fff2  bne         $s1, $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x22D0DCu;
    {
        const bool branch_taken_0x22d0dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x22D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0DCu;
        // 0x22d0e0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0dc) {
            ctx->pc = 0x22D0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d0a8;
        }
    }
    ctx->pc = 0x22D0E4u;
label_22d0e4:
    // 0x22d0e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x22d0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d0e8: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x22d0e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d0ec: 0x1477ffe2  bne         $v1, $s7, . + 4 + (-0x1E << 2)
    ctx->pc = 0x22D0ECu;
    {
        const bool branch_taken_0x22d0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x22D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0ECu;
        // 0x22d0f0: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0ec) {
            ctx->pc = 0x22D078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d078;
        }
    }
    ctx->pc = 0x22D0F4u;
    // 0x22d0f4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x22D0F4u;
    {
        const bool branch_taken_0x22d0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0F4u;
        // 0x22d0f8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0f4) {
            ctx->pc = 0x22D194u;
            goto label_22d194;
        }
    }
    ctx->pc = 0x22D0FCu;
label_22d0fc:
    // 0x22d0fc: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x22d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x22d100: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22d100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22d104: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22d104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22d108: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22d108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22d10c: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x22D10Cu;
    {
        const bool branch_taken_0x22d10c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D10Cu;
        // 0x22d110: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d10c) {
            ctx->pc = 0x22D198u;
            goto label_22d198;
        }
    }
    ctx->pc = 0x22D114u;
    // 0x22d114: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x22d114u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x22d118: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x22d118u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x22d11c: 0x0  nop
    ctx->pc = 0x22d11cu;
    // NOP
label_22d120:
    // 0x22d120: 0x8fd10004  lw          $s1, 0x4($fp)
    ctx->pc = 0x22d120u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x22d124: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22d124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d128: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x22d128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22d12c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x22d12cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d130: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22d130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d134: 0x2476ffff  addiu       $s6, $v1, -0x1
    ctx->pc = 0x22d134u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22d138: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22d138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22d13c: 0x265a821  addu        $s5, $s3, $a1
    ctx->pc = 0x22d13cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x22d140: 0x1237000f  beq         $s1, $s7, . + 4 + (0xF << 2)
    ctx->pc = 0x22D140u;
    {
        const bool branch_taken_0x22d140 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 23));
        ctx->pc = 0x22D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D140u;
        // 0x22d144: 0x202a021  addu        $s4, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d140) {
            ctx->pc = 0x22D180u;
            goto label_22d180;
        }
    }
    ctx->pc = 0x22D148u;
    // 0x22d148: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x22d148u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x22d14c: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x22d14cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_22d150:
    // 0x22d150: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22d150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d154: 0xc08af60  jal         func_22BD80
    ctx->pc = 0x22D154u;
    SET_GPR_U32(ctx, 31, 0x22D15Cu);
    ctx->pc = 0x22D158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D154u;
    // 0x22d158: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BD80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22BD80u, 0x22D154u, 0x22D15Cu)) {
        return;
    }
    ctx->pc = 0x22D15Cu;
label_22d15c:
    // 0x22d15c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x22d15cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x22d160: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x22d160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22d164: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22d164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d168: 0x8f8683f8  lw          $a2, -0x7C08($gp)
    ctx->pc = 0x22d168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
    // 0x22d16c: 0xc08b2ae  jal         func_22CAB8
    ctx->pc = 0x22D16Cu;
    SET_GPR_U32(ctx, 31, 0x22D174u);
    ctx->pc = 0x22D170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D16Cu;
    // 0x22d170: 0x8c644000  lw          $a0, 0x4000($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CAB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22CAB8u, 0x22D16Cu, 0x22D174u)) {
        return;
    }
    ctx->pc = 0x22D174u;
label_22d174:
    // 0x22d174: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x22d174u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22d178: 0x1632fff5  bne         $s1, $s2, . + 4 + (-0xB << 2)
    ctx->pc = 0x22D178u;
    {
        const bool branch_taken_0x22d178 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x22D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D178u;
        // 0x22d17c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d178) {
            ctx->pc = 0x22D150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d150;
        }
    }
    ctx->pc = 0x22D180u;
label_22d180:
    // 0x22d180: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x22d180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d184: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x22d184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d188: 0x1477ffe5  bne         $v1, $s7, . + 4 + (-0x1B << 2)
    ctx->pc = 0x22D188u;
    {
        const bool branch_taken_0x22d188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x22D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D188u;
        // 0x22d18c: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d188) {
            ctx->pc = 0x22D120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d120;
        }
    }
    ctx->pc = 0x22D190u;
label_22d190:
    // 0x22d190: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x22d190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_22d194:
    // 0x22d194: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x22d194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_22d198:
    // 0x22d198: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x22d198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22d19c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x22d19cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22d1a0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x22d1a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22d1a4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x22d1a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22d1a8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x22d1a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22d1ac: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x22d1acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d1b0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x22d1b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d1b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22d1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x22D1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D1B8u;
        // 0x22d1bc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D1C0u;
}
