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

// Function: sub_001BCB70
// Address: 0x1bcb70 - 0x1bcfd8
void sub_001BCB70_0x1bcb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCB70_0x1bcb70");
#endif

    switch (ctx->pc) {
        case 0x1bcc08u: goto label_1bcc08;
        case 0x1bcc60u: goto label_1bcc60;
        case 0x1bcca8u: goto label_1bcca8;
        case 0x1bccdcu: goto label_1bccdc;
        case 0x1bcd14u: goto label_1bcd14;
        case 0x1bcd48u: goto label_1bcd48;
        case 0x1bcd5cu: goto label_1bcd5c;
        case 0x1bcd6cu: goto label_1bcd6c;
        case 0x1bcd88u: goto label_1bcd88;
        case 0x1bcda0u: goto label_1bcda0;
        case 0x1bcde8u: goto label_1bcde8;
        case 0x1bce2cu: goto label_1bce2c;
        case 0x1bce70u: goto label_1bce70;
        case 0x1bce8cu: goto label_1bce8c;
        case 0x1bced8u: goto label_1bced8;
        case 0x1bcf1cu: goto label_1bcf1c;
        case 0x1bcf50u: goto label_1bcf50;
        case 0x1bcfa4u: goto label_1bcfa4;
        default: break;
    }

    ctx->pc = 0x1bcb70u;

    // 0x1bcb70: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1bcb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1bcb74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bcb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bcb78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bcb78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcb7c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1bcb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1bcb80: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1bcb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x1bcb84: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1bcb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1bcb88: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x1bcb88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcb8c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1bcb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1bcb90: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1bcb90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcb94: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1bcb94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1bcb98: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x1bcb98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcb9c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1bcb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1bcba0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1bcba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1bcba4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1bcba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1bcba8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1bcba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x1bcbac: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x1bcbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x1bcbb0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1bcbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1bcbb4: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1bcbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1bcbb8: 0xc4a10080  lwc1        $f1, 0x80($a1)
    ctx->pc = 0x1bcbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcbbc: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1bcbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1bcbc0: 0xafa70044  sw          $a3, 0x44($sp)
    ctx->pc = 0x1bcbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 7));
    // 0x1bcbc4: 0x0  nop
    ctx->pc = 0x1bcbc4u;
    // NOP
    // 0x1bcbc8: 0x0  nop
    ctx->pc = 0x1bcbc8u;
    // NOP
    // 0x1bcbcc: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1bcbccu;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1bcbd0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x1bcbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1bcbd4: 0x110000f3  beqz        $t0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x1BCBD4u;
    {
        const bool branch_taken_0x1bcbd4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBD4u;
        // 0x1bcbd8: 0x8fb00110  lw          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcbd4) {
            ctx->pc = 0x1BCFA4u;
            goto label_1bcfa4;
        }
    }
    ctx->pc = 0x1BCBDCu;
    // 0x1bcbdc: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x1bcbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1bcbe0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1bcbe0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcbe4: 0x14490020  bne         $v0, $t1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1BCBE4u;
    {
        const bool branch_taken_0x1bcbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x1bcbe4) {
            ctx->pc = 0x1BCC68u;
            goto label_1bcc68;
        }
    }
    ctx->pc = 0x1BCBECu;
    // 0x1bcbec: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x1bcbecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1bcbf0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1bcbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bcbf4: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x1bcbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1bcbf8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCBF8u;
    {
        const bool branch_taken_0x1bcbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BCBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBF8u;
        // 0x1bcbfc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcbf8) {
            ctx->pc = 0x1BCC10u;
            goto label_1bcc10;
        }
    }
    ctx->pc = 0x1BCC00u;
    // 0x1bcc00: 0xc064452  jal         func_191148
    ctx->pc = 0x1BCC00u;
    SET_GPR_U32(ctx, 31, 0x1BCC08u);
    ctx->pc = 0x1BCC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC00u;
    // 0x1bcc04: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191148u, 0x1BCC00u, 0x1BCC08u)) {
        return;
    }
    ctx->pc = 0x1BCC08u;
label_1bcc08:
    // 0x1bcc08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCC08u;
    {
        const bool branch_taken_0x1bcc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC08u;
        // 0x1bcc0c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc08) {
            ctx->pc = 0x1BCC24u;
            goto label_1bcc24;
        }
    }
    ctx->pc = 0x1BCC10u;
label_1bcc10:
    // 0x1bcc10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bcc10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcc14: 0x8c448b2c  lw          $a0, -0x74D4($v0)
    ctx->pc = 0x1bcc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    // 0x1bcc18: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x1bcc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x1bcc1c: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x1bcc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x1bcc20: 0x123400a  movz        $t0, $t1, $v1
    ctx->pc = 0x1bcc20u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9));
label_1bcc24:
    // 0x1bcc24: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1bcc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bcc28: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bcc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bcc2c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1bcc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1bcc30: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1bcc30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1bcc34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bcc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bcc38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bcc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcc3c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCC3Cu;
    {
        const bool branch_taken_0x1bcc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC3Cu;
        // 0x1bcc40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc3c) {
            ctx->pc = 0x1BCC48u;
            goto label_1bcc48;
        }
    }
    ctx->pc = 0x1BCC44u;
    // 0x1bcc44: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1bcc44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1bcc48:
    // 0x1bcc48: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bcc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcc4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bcc4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bcc50: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1bcc50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcc54: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1bcc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bcc58: 0xc06f51c  jal         func_1BD470
    ctx->pc = 0x1BCC58u;
    SET_GPR_U32(ctx, 31, 0x1BCC60u);
    ctx->pc = 0x1BCC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC58u;
    // 0x1bcc5c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BD470u, 0x1BCC58u, 0x1BCC60u)) {
        return;
    }
    ctx->pc = 0x1BCC60u;
label_1bcc60:
    // 0x1bcc60: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x1BCC60u;
    {
        const bool branch_taken_0x1bcc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC60u;
        // 0x1bcc64: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc60) {
            ctx->pc = 0x1BCFA8u;
            goto label_1bcfa8;
        }
    }
    ctx->pc = 0x1BCC68u;
label_1bcc68:
    // 0x1bcc68: 0x50600038  beql        $v1, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x1BCC68u;
    {
        const bool branch_taken_0x1bcc68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcc68) {
            ctx->pc = 0x1BCC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCC68u;
            // 0x1bcc6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCD4Cu;
            goto label_1bcd4c;
        }
    }
    ctx->pc = 0x1BCC70u;
    // 0x1bcc70: 0x5080001c  beql        $a0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BCC70u;
    {
        const bool branch_taken_0x1bcc70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcc70) {
            ctx->pc = 0x1BCC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCC70u;
            // 0x1bcc74: 0x8ee30004  lw          $v1, 0x4($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCCE4u;
            goto label_1bcce4;
        }
    }
    ctx->pc = 0x1BCC78u;
    // 0x1bcc78: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x1bcc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x1bcc7c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bcc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bcc80: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1bcc80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bcc84: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1BCC84u;
    {
        const bool branch_taken_0x1bcc84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC84u;
        // 0x1bcc88: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc84) {
            ctx->pc = 0x1BCCC0u;
            goto label_1bccc0;
        }
    }
    ctx->pc = 0x1BCC8Cu;
    // 0x1bcc8c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1bcc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bcc90: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1bcc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bcc94: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x1bcc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1bcc98: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCC98u;
    {
        const bool branch_taken_0x1bcc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BCC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC98u;
        // 0x1bcc9c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc98) {
            ctx->pc = 0x1BCCB0u;
            goto label_1bccb0;
        }
    }
    ctx->pc = 0x1BCCA0u;
    // 0x1bcca0: 0xc064452  jal         func_191148
    ctx->pc = 0x1BCCA0u;
    SET_GPR_U32(ctx, 31, 0x1BCCA8u);
    ctx->pc = 0x1BCCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCCA0u;
    // 0x1bcca4: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191148u, 0x1BCCA0u, 0x1BCCA8u)) {
        return;
    }
    ctx->pc = 0x1BCCA8u;
label_1bcca8:
    // 0x1bcca8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCCA8u;
    {
        const bool branch_taken_0x1bcca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCA8u;
        // 0x1bccac: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcca8) {
            ctx->pc = 0x1BCCC0u;
            goto label_1bccc0;
        }
    }
    ctx->pc = 0x1BCCB0u;
label_1bccb0:
    // 0x1bccb0: 0x8c438b2c  lw          $v1, -0x74D4($v0)
    ctx->pc = 0x1bccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    // 0x1bccb4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1bccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1bccb8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1bccb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1bccbc: 0x122400a  movz        $t0, $t1, $v0
    ctx->pc = 0x1bccbcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9));
label_1bccc0:
    // 0x1bccc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bccc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bccc4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bccc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bccc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bccc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcccc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bccccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bccd0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1bccd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bccd4: 0xc06f51c  jal         func_1BD470
    ctx->pc = 0x1BCCD4u;
    SET_GPR_U32(ctx, 31, 0x1BCCDCu);
    ctx->pc = 0x1BCCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCCD4u;
    // 0x1bccd8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BD470u, 0x1BCCD4u, 0x1BCCDCu)) {
        return;
    }
    ctx->pc = 0x1BCCDCu;
label_1bccdc:
    // 0x1bccdc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1BCCDCu;
    {
        const bool branch_taken_0x1bccdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCDCu;
        // 0x1bcce0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bccdc) {
            ctx->pc = 0x1BCD4Cu;
            goto label_1bcd4c;
        }
    }
    ctx->pc = 0x1BCCE4u;
label_1bcce4:
    // 0x1bcce4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1bcce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1bcce8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1bcce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bccec: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1BCCECu;
    {
        const bool branch_taken_0x1bccec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCECu;
        // 0x1bccf0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bccec) {
            ctx->pc = 0x1BCD2Cu;
            goto label_1bcd2c;
        }
    }
    ctx->pc = 0x1BCCF4u;
    // 0x1bccf4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1bccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bccf8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1bccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bccfc: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x1bccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1bcd00: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCD00u;
    {
        const bool branch_taken_0x1bcd00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BCD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD00u;
        // 0x1bcd04: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd00) {
            ctx->pc = 0x1BCD1Cu;
            goto label_1bcd1c;
        }
    }
    ctx->pc = 0x1BCD08u;
    // 0x1bcd08: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1bcd08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1bcd0c: 0xc064452  jal         func_191148
    ctx->pc = 0x1BCD0Cu;
    SET_GPR_U32(ctx, 31, 0x1BCD14u);
    ctx->pc = 0x1BCD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD0Cu;
    // 0x1bcd10: 0x8c648b2c  lw          $a0, -0x74D4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191148u, 0x1BCD0Cu, 0x1BCD14u)) {
        return;
    }
    ctx->pc = 0x1BCD14u;
label_1bcd14:
    // 0x1bcd14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCD14u;
    {
        const bool branch_taken_0x1bcd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD14u;
        // 0x1bcd18: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd14) {
            ctx->pc = 0x1BCD2Cu;
            goto label_1bcd2c;
        }
    }
    ctx->pc = 0x1BCD1Cu;
label_1bcd1c:
    // 0x1bcd1c: 0x8c438b2c  lw          $v1, -0x74D4($v0)
    ctx->pc = 0x1bcd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    // 0x1bcd20: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1bcd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1bcd24: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1bcd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1bcd28: 0x122400a  movz        $t0, $t1, $v0
    ctx->pc = 0x1bcd28u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9));
label_1bcd2c:
    // 0x1bcd2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bcd2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd30: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bcd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd34: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1bcd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bcd38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bcd38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bcd3c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1bcd3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd40: 0xc06f51c  jal         func_1BD470
    ctx->pc = 0x1BCD40u;
    SET_GPR_U32(ctx, 31, 0x1BCD48u);
    ctx->pc = 0x1BCD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD40u;
    // 0x1bcd44: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BD470u, 0x1BCD40u, 0x1BCD48u)) {
        return;
    }
    ctx->pc = 0x1BCD48u;
label_1bcd48:
    // 0x1bcd48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bcd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bcd4c:
    // 0x1bcd4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bcd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd50: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1bcd50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1bcd54: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BCD54u;
    SET_GPR_U32(ctx, 31, 0x1BCD5Cu);
    ctx->pc = 0x1BCD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD54u;
    // 0x1bcd58: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BCD54u, 0x1BCD5Cu)) {
        return;
    }
    ctx->pc = 0x1BCD5Cu;
label_1bcd5c:
    // 0x1bcd5c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1bcd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bcd60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bcd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd64: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BCD64u;
    SET_GPR_U32(ctx, 31, 0x1BCD6Cu);
    ctx->pc = 0x1BCD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD64u;
    // 0x1bcd68: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BCD64u, 0x1BCD6Cu)) {
        return;
    }
    ctx->pc = 0x1BCD6Cu;
label_1bcd6c:
    // 0x1bcd6c: 0x8ef10008  lw          $s1, 0x8($s7)
    ctx->pc = 0x1bcd6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x1bcd70: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BCD70u;
    {
        const bool branch_taken_0x1bcd70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD70u;
        // 0x1bcd74: 0x27b00024  addiu       $s0, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd70) {
            ctx->pc = 0x1BCDD4u;
            goto label_1bcdd4;
        }
    }
    ctx->pc = 0x1BCD78u;
    // 0x1bcd78: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1bcd78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcd7c: 0x241e000e  addiu       $fp, $zero, 0xE
    ctx->pc = 0x1bcd7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bcd80: 0x27b20004  addiu       $s2, $sp, 0x4
    ctx->pc = 0x1bcd80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1bcd84: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x1bcd84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_1bcd88:
    // 0x1bcd88: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1bcd88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bcd8c: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x1bcd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1bcd90: 0x145e0005  bne         $v0, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCD90u;
    {
        const bool branch_taken_0x1bcd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x1BCD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD90u;
        // 0x1bcd94: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd90) {
            ctx->pc = 0x1BCDA8u;
            goto label_1bcda8;
        }
    }
    ctx->pc = 0x1BCD98u;
    // 0x1bcd98: 0xc064452  jal         func_191148
    ctx->pc = 0x1BCD98u;
    SET_GPR_U32(ctx, 31, 0x1BCDA0u);
    ctx->pc = 0x1BCD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD98u;
    // 0x1bcd9c: 0x8c648b2c  lw          $a0, -0x74D4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191148u, 0x1BCD98u, 0x1BCDA0u)) {
        return;
    }
    ctx->pc = 0x1BCDA0u;
label_1bcda0:
    // 0x1bcda0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCDA0u;
    {
        const bool branch_taken_0x1bcda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDA0u;
        // 0x1bcda4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcda0) {
            ctx->pc = 0x1BCDB8u;
            goto label_1bcdb8;
        }
    }
    ctx->pc = 0x1BCDA8u;
label_1bcda8:
    // 0x1bcda8: 0x8c628b2c  lw          $v0, -0x74D4($v1)
    ctx->pc = 0x1bcda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937388)));
    // 0x1bcdac: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1bcdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1bcdb0: 0x50650001  beql        $v1, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BCDB0u;
    {
        const bool branch_taken_0x1bcdb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1bcdb0) {
            ctx->pc = 0x1BCDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCDB0u;
            // 0x1bcdb4: 0xae140000  sw          $s4, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCDB8u;
            goto label_1bcdb8;
        }
    }
    ctx->pc = 0x1BCDB8u;
label_1bcdb8:
    // 0x1bcdb8: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x1bcdb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1bcdbc: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x1bcdbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x1bcdc0: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x1bcdc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x1bcdc4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCDC4u;
    {
        const bool branch_taken_0x1bcdc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDC4u;
        // 0x1bcdc8: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcdc4) {
            ctx->pc = 0x1BCDD4u;
            goto label_1bcdd4;
        }
    }
    ctx->pc = 0x1BCDCCu;
    // 0x1bcdcc: 0x663ffee  bgezl       $s3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1BCDCCu;
    {
        const bool branch_taken_0x1bcdcc = (GPR_S64(ctx, 19) >= 0);
        if (branch_taken_0x1bcdcc) {
            ctx->pc = 0x1BCDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCDCCu;
            // 0x1bcdd0: 0xae540000  sw          $s4, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcd88;
        }
    }
    ctx->pc = 0x1BCDD4u;
label_1bcdd4:
    // 0x1bcdd4: 0x8fb20040  lw          $s2, 0x40($sp)
    ctx->pc = 0x1bcdd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bcdd8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bcdd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcddc: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1bcddcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bcde0: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1bcde0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcde4: 0x0  nop
    ctx->pc = 0x1bcde4u;
    // NOP
label_1bcde8:
    // 0x1bcde8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bcde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bcdec: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BCDECu;
    {
        const bool branch_taken_0x1bcdec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDECu;
        // 0x1bcdf0: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcdec) {
            ctx->pc = 0x1BCE34u;
            goto label_1bce34;
        }
    }
    ctx->pc = 0x1BCDF4u;
    // 0x1bcdf4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bcdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bcdf8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1bcdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1bcdfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bcdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bce00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bce00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bce04: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCE04u;
    {
        const bool branch_taken_0x1bce04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE04u;
        // 0x1bce08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce04) {
            ctx->pc = 0x1BCE10u;
            goto label_1bce10;
        }
    }
    ctx->pc = 0x1BCE0Cu;
    // 0x1bce0c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1bce0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1bce10:
    // 0x1bce10: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1bce10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bce14: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bce14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce18: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1bce18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bce1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bce20: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1bce20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce24: 0xc06f51c  jal         func_1BD470
    ctx->pc = 0x1BCE24u;
    SET_GPR_U32(ctx, 31, 0x1BCE2Cu);
    ctx->pc = 0x1BCE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE24u;
    // 0x1bce28: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BD470u, 0x1BCE24u, 0x1BCE2Cu)) {
        return;
    }
    ctx->pc = 0x1BCE2Cu;
label_1bce2c:
    // 0x1bce2c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1bce30: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1bce30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1bce34:
    // 0x1bce34: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1bce34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1bce38: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1bce38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1bce3c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1bce3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1bce40: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x1bce40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bce44: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1BCE44u;
    {
        const bool branch_taken_0x1bce44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE44u;
        // 0x1bce48: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce44) {
            ctx->pc = 0x1BCDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcde8;
        }
    }
    ctx->pc = 0x1BCE4Cu;
    // 0x1bce4c: 0x8ef10004  lw          $s1, 0x4($s7)
    ctx->pc = 0x1bce4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x1bce50: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BCE50u;
    {
        const bool branch_taken_0x1bce50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE50u;
        // 0x1bce54: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce50) {
            ctx->pc = 0x1BCEC4u;
            goto label_1bcec4;
        }
    }
    ctx->pc = 0x1BCE58u;
    // 0x1bce58: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1bce58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bce5c: 0x241e000e  addiu       $fp, $zero, 0xE
    ctx->pc = 0x1bce5cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bce60: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x1bce60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1bce64: 0x27b2000c  addiu       $s2, $sp, 0xC
    ctx->pc = 0x1bce64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1bce68: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x1bce68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
    // 0x1bce6c: 0x0  nop
    ctx->pc = 0x1bce6cu;
    // NOP
label_1bce70:
    // 0x1bce70: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1bce70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bce74: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x1bce74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1bce78: 0x145e0006  bne         $v0, $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCE78u;
    {
        const bool branch_taken_0x1bce78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x1BCE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE78u;
        // 0x1bce7c: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce78) {
            ctx->pc = 0x1BCE94u;
            goto label_1bce94;
        }
    }
    ctx->pc = 0x1BCE80u;
    // 0x1bce80: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bce80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1bce84: 0xc064452  jal         func_191148
    ctx->pc = 0x1BCE84u;
    SET_GPR_U32(ctx, 31, 0x1BCE8Cu);
    ctx->pc = 0x1BCE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE84u;
    // 0x1bce88: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191148u, 0x1BCE84u, 0x1BCE8Cu)) {
        return;
    }
    ctx->pc = 0x1BCE8Cu;
label_1bce8c:
    // 0x1bce8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCE8Cu;
    {
        const bool branch_taken_0x1bce8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE8Cu;
        // 0x1bce90: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce8c) {
            ctx->pc = 0x1BCEA4u;
            goto label_1bcea4;
        }
    }
    ctx->pc = 0x1BCE94u;
label_1bce94:
    // 0x1bce94: 0x8c628b2c  lw          $v0, -0x74D4($v1)
    ctx->pc = 0x1bce94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937388)));
    // 0x1bce98: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1bce98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1bce9c: 0x50650001  beql        $v1, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BCE9Cu;
    {
        const bool branch_taken_0x1bce9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1bce9c) {
            ctx->pc = 0x1BCEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCE9Cu;
            // 0x1bcea0: 0xae140000  sw          $s4, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCEA4u;
            goto label_1bcea4;
        }
    }
    ctx->pc = 0x1BCEA4u;
label_1bcea4:
    // 0x1bcea4: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x1bcea4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bcea8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1bcea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1bceac: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1bceacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1bceb0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCEB0u;
    {
        const bool branch_taken_0x1bceb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEB0u;
        // 0x1bceb4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bceb0) {
            ctx->pc = 0x1BCEC4u;
            goto label_1bcec4;
        }
    }
    ctx->pc = 0x1BCEB8u;
    // 0x1bceb8: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x1bceb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1bcebc: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1BCEBCu;
    {
        const bool branch_taken_0x1bcebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bcebc) {
            ctx->pc = 0x1BCEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCEBCu;
            // 0x1bcec0: 0xae540000  sw          $s4, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bce70;
        }
    }
    ctx->pc = 0x1BCEC4u;
label_1bcec4:
    // 0x1bcec4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1bcec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bcec8: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1bcec8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bcecc: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1bceccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bced0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1bced0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bced4: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x1bced4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1bced8:
    // 0x1bced8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bced8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bcedc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BCEDCu;
    {
        const bool branch_taken_0x1bcedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEDCu;
        // 0x1bcee0: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcedc) {
            ctx->pc = 0x1BCF1Cu;
            goto label_1bcf1c;
        }
    }
    ctx->pc = 0x1BCEE4u;
    // 0x1bcee4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bcee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bcee8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1bcee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1bceec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bceecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bcef0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bcef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcef4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCEF4u;
    {
        const bool branch_taken_0x1bcef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEF4u;
        // 0x1bcef8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcef4) {
            ctx->pc = 0x1BCF00u;
            goto label_1bcf00;
        }
    }
    ctx->pc = 0x1BCEFCu;
    // 0x1bcefc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1bcefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1bcf00:
    // 0x1bcf00: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x1bcf00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bcf04: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bcf04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcf08: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bcf08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcf0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bcf0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bcf10: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1bcf10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcf14: 0xc06f51c  jal         func_1BD470
    ctx->pc = 0x1BCF14u;
    SET_GPR_U32(ctx, 31, 0x1BCF1Cu);
    ctx->pc = 0x1BCF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCF14u;
    // 0x1bcf18: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BD470u, 0x1BCF14u, 0x1BCF1Cu)) {
        return;
    }
    ctx->pc = 0x1BCF1Cu;
label_1bcf1c:
    // 0x1bcf1c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1bcf1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1bcf20: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x1bcf20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x1bcf24: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1bcf24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1bcf28: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x1bcf28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1bcf2c: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1BCF2Cu;
    {
        const bool branch_taken_0x1bcf2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF2Cu;
        // 0x1bcf30: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf2c) {
            ctx->pc = 0x1BCED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bced8;
        }
    }
    ctx->pc = 0x1BCF34u;
    // 0x1bcf34: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x1bcf34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1bcf38: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1bcf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bcf3c: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x1bcf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1bcf40: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCF40u;
    {
        const bool branch_taken_0x1bcf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BCF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF40u;
        // 0x1bcf44: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf40) {
            ctx->pc = 0x1BCF58u;
            goto label_1bcf58;
        }
    }
    ctx->pc = 0x1BCF48u;
    // 0x1bcf48: 0xc064452  jal         func_191148
    ctx->pc = 0x1BCF48u;
    SET_GPR_U32(ctx, 31, 0x1BCF50u);
    ctx->pc = 0x1BCF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCF48u;
    // 0x1bcf4c: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191148u, 0x1BCF48u, 0x1BCF50u)) {
        return;
    }
    ctx->pc = 0x1BCF50u;
label_1bcf50:
    // 0x1bcf50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCF50u;
    {
        const bool branch_taken_0x1bcf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF50u;
        // 0x1bcf54: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf50) {
            ctx->pc = 0x1BCF68u;
            goto label_1bcf68;
        }
    }
    ctx->pc = 0x1BCF58u;
label_1bcf58:
    // 0x1bcf58: 0x8c438b2c  lw          $v1, -0x74D4($v0)
    ctx->pc = 0x1bcf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    // 0x1bcf5c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1bcf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1bcf60: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1bcf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1bcf64: 0x2c480001  sltiu       $t0, $v0, 0x1
    ctx->pc = 0x1bcf64u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1bcf68:
    // 0x1bcf68: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1bcf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bcf6c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bcf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bcf70: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1bcf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1bcf74: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1bcf74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1bcf78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bcf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bcf7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bcf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcf80: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCF80u;
    {
        const bool branch_taken_0x1bcf80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF80u;
        // 0x1bcf84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf80) {
            ctx->pc = 0x1BCF8Cu;
            goto label_1bcf8c;
        }
    }
    ctx->pc = 0x1BCF88u;
    // 0x1bcf88: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1bcf88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1bcf8c:
    // 0x1bcf8c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bcf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcf90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bcf90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bcf94: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1bcf94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcf98: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1bcf98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bcf9c: 0xc06f51c  jal         func_1BD470
    ctx->pc = 0x1BCF9Cu;
    SET_GPR_U32(ctx, 31, 0x1BCFA4u);
    ctx->pc = 0x1BCFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCF9Cu;
    // 0x1bcfa0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BD470u, 0x1BCF9Cu, 0x1BCFA4u)) {
        return;
    }
    ctx->pc = 0x1BCFA4u;
label_1bcfa4:
    // 0x1bcfa4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1bcfa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1bcfa8:
    // 0x1bcfa8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1bcfa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bcfac: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1bcfacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1bcfb0: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1bcfb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bcfb4: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1bcfb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bcfb8: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1bcfb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bcfbc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1bcfbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bcfc0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1bcfc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bcfc4: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x1bcfc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bcfc8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1bcfc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bcfcc: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1bcfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bcfd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCFD0u;
        // 0x1bcfd4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCFD8u;
}
