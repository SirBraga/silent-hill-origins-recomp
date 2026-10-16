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

// Function: sub_002CBC70
// Address: 0x2cbc70 - 0x2cbfc0
void sub_002CBC70_0x2cbc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBC70_0x2cbc70");
#endif

    switch (ctx->pc) {
        case 0x2cbcc0u: goto label_2cbcc0;
        default: break;
    }

    ctx->pc = 0x2cbc70u;

    // 0x2cbc70: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x2cbc70u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc74: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2cbc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2cbc78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cbc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cbc7c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2cbc7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc80: 0xc4523b5c  lwc1        $f18, 0x3B5C($v0)
    ctx->pc = 0x2cbc80u;
    { uint32_t bits = FAST_READ32(0x6B3B5Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2cbc84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cbc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cbc88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cbc8c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x2cbc8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2cbc90: 0x1160004a  beqz        $t3, . + 4 + (0x4A << 2)
    ctx->pc = 0x2CBC90u;
    {
        const bool branch_taken_0x2cbc90 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC90u;
        // 0x2cbc94: 0xad2b0000  sw          $t3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc90) {
            ctx->pc = 0x2CBDBCu;
            goto label_2cbdbc;
        }
    }
    ctx->pc = 0x2CBC98u;
    // 0x2cbc98: 0xc4f00000  lwc1        $f16, 0x0($a3)
    ctx->pc = 0x2cbc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2cbc9c: 0x256cffff  addiu       $t4, $t3, -0x1
    ctx->pc = 0x2cbc9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x2cbca0: 0xc4ef0004  lwc1        $f15, 0x4($a3)
    ctx->pc = 0x2cbca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2cbca4: 0xc4ee0008  lwc1        $f14, 0x8($a3)
    ctx->pc = 0x2cbca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2cbca8: 0xc4cd0004  lwc1        $f13, 0x4($a2)
    ctx->pc = 0x2cbca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2cbcac: 0xc4cc0008  lwc1        $f12, 0x8($a2)
    ctx->pc = 0x2cbcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cbcb0: 0xc4cb0000  lwc1        $f11, 0x0($a2)
    ctx->pc = 0x2cbcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2cbcb4: 0x44809800  mtc1        $zero, $f19
    ctx->pc = 0x2cbcb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x2cbcb8: 0xac1023  subu        $v0, $a1, $t4
    ctx->pc = 0x2cbcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x2cbcbc: 0x0  nop
    ctx->pc = 0x2cbcbcu;
    // NOP
label_2cbcc0:
    // 0x2cbcc0: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x2cbcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2cbcc4: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x2cbcc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x2cbcc8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2cbcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2cbccc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cbcccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cbcd0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2cbcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2cbcd4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2cbcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2cbcd8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2cbcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2cbcdc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2cbcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbce0: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x2cbce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cbce4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2cbce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cbce8: 0x46040201  sub.s       $f8, $f0, $f4
    ctx->pc = 0x2cbce8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2cbcec: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2cbcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cbcf0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2cbcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cbcf4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2cbcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbcf8: 0x460119c1  sub.s       $f7, $f3, $f1
    ctx->pc = 0x2cbcf8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2cbcfc: 0x46001141  sub.s       $f5, $f2, $f0
    ctx->pc = 0x2cbcfcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2cbd00: 0x46018281  sub.s       $f10, $f16, $f1
    ctx->pc = 0x2cbd00u;
    ctx->f[10] = FPU_SUB_S(ctx->f[16], ctx->f[1]);
    // 0x2cbd04: 0x46007a41  sub.s       $f9, $f15, $f0
    ctx->pc = 0x2cbd04u;
    ctx->f[9] = FPU_SUB_S(ctx->f[15], ctx->f[0]);
    // 0x2cbd08: 0x46047181  sub.s       $f6, $f14, $f4
    ctx->pc = 0x2cbd08u;
    ctx->f[6] = FPU_SUB_S(ctx->f[14], ctx->f[4]);
    // 0x2cbd0c: 0x46066802  mul.s       $f0, $f13, $f6
    ctx->pc = 0x2cbd0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[6]);
    // 0x2cbd10: 0x46096102  mul.s       $f4, $f12, $f9
    ctx->pc = 0x2cbd10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[9]);
    // 0x2cbd14: 0x460a6082  mul.s       $f2, $f12, $f10
    ctx->pc = 0x2cbd14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x2cbd18: 0x460658c2  mul.s       $f3, $f11, $f6
    ctx->pc = 0x2cbd18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x2cbd1c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2cbd1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2cbd20: 0x46095842  mul.s       $f1, $f11, $f9
    ctx->pc = 0x2cbd20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[9]);
    // 0x2cbd24: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2cbd24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2cbd28: 0x460a6902  mul.s       $f4, $f13, $f10
    ctx->pc = 0x2cbd28u;
    ctx->f[4] = FPU_MUL_S(ctx->f[13], ctx->f[10]);
    // 0x2cbd2c: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x2cbd2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cbd30: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cbd30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cbd34: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2cbd34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2cbd38: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cbd38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cbd3c: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x2cbd3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x2cbd40: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x2cbd40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cbd44: 0x46029836  c.le.s      $f19, $f2
    ctx->pc = 0x2cbd44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[19], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cbd48: 0x0  nop
    ctx->pc = 0x2cbd48u;
    // NOP
    // 0x2cbd4c: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x2CBD4Cu;
    {
        const bool branch_taken_0x2cbd4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cbd4c) {
            ctx->pc = 0x2CBD50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBD4Cu;
            // 0x2cbd50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBD98u;
            goto label_2cbd98;
        }
    }
    ctx->pc = 0x2CBD54u;
    // 0x2cbd54: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x2cbd54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2cbd58: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x2cbd58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2cbd5c: 0x460840c2  mul.s       $f3, $f8, $f8
    ctx->pc = 0x2cbd5cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x2cbd60: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x2cbd60u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2cbd64: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cbd64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cbd68: 0x46112082  mul.s       $f2, $f4, $f17
    ctx->pc = 0x2cbd68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[17]);
    // 0x2cbd6c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2cbd6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2cbd70: 0x46019002  mul.s       $f0, $f18, $f1
    ctx->pc = 0x2cbd70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[18], ctx->f[1]);
    // 0x2cbd74: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2cbd74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cbd78: 0x0  nop
    ctx->pc = 0x2cbd78u;
    // NOP
    // 0x2cbd7c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2CBD7Cu;
    {
        const bool branch_taken_0x2cbd7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cbd7c) {
            ctx->pc = 0x2CBD80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBD7Cu;
            // 0x2cbd80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBD98u;
            goto label_2cbd98;
        }
    }
    ctx->pc = 0x2CBD84u;
    // 0x2cbd84: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x2cbd84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x2cbd88: 0x46002486  mov.s       $f18, $f4
    ctx->pc = 0x2cbd88u;
    ctx->f[18] = FPU_MOV_S(ctx->f[4]);
    // 0x2cbd8c: 0x46000c46  mov.s       $f17, $f1
    ctx->pc = 0x2cbd8cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[1]);
    // 0x2cbd90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2cbd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbd94: 0x0  nop
    ctx->pc = 0x2cbd94u;
    // NOP
label_2cbd98:
    // 0x2cbd98: 0xab102b  sltu        $v0, $a1, $t3
    ctx->pc = 0x2cbd98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x2cbd9c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x2CBD9Cu;
    {
        const bool branch_taken_0x2cbd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD9Cu;
        // 0x2cbda0: 0xac1023  subu        $v0, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd9c) {
            ctx->pc = 0x2CBCC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cbcc0;
        }
    }
    ctx->pc = 0x2CBDA4u;
    // 0x2cbda4: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x2cbda4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2cbda8: 0xe7a90014  swc1        $f9, 0x14($sp)
    ctx->pc = 0x2cbda8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2cbdac: 0xe7aa0010  swc1        $f10, 0x10($sp)
    ctx->pc = 0x2cbdacu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2cbdb0: 0xe7a80008  swc1        $f8, 0x8($sp)
    ctx->pc = 0x2cbdb0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2cbdb4: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x2cbdb4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2cbdb8: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x2cbdb8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2cbdbc:
    // 0x2cbdbc: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x2cbdbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2cbdc0: 0x152b0033  bne         $t1, $t3, . + 4 + (0x33 << 2)
    ctx->pc = 0x2CBDC0u;
    {
        const bool branch_taken_0x2cbdc0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 11));
        ctx->pc = 0x2CBDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBDC0u;
        // 0x2cbdc4: 0x2563ffff  addiu       $v1, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbdc0) {
            ctx->pc = 0x2CBE90u;
            goto label_2cbe90;
        }
    }
    ctx->pc = 0x2CBDC8u;
    // 0x2cbdc8: 0xc5460008  lwc1        $f6, 0x8($t2)
    ctx->pc = 0x2cbdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2cbdcc: 0xc5440000  lwc1        $f4, 0x0($t2)
    ctx->pc = 0x2cbdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cbdd0: 0xc5450004  lwc1        $f5, 0x4($t2)
    ctx->pc = 0x2cbdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2cbdd4: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x2cbdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cbdd8: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2cbdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbddc: 0xc4e70000  lwc1        $f7, 0x0($a3)
    ctx->pc = 0x2cbddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2cbde0: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x2cbde0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2cbde4: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x2cbde4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2cbde8: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x2cbde8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x2cbdec: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x2cbdecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2cbdf0: 0xe7a60028  swc1        $f6, 0x28($sp)
    ctx->pc = 0x2cbdf0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2cbdf4: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x2cbdf4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2cbdf8: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2cbdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cbdfc: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2cbdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cbe00: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x2cbe00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2cbe04: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2cbe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cbe08: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2cbe08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cbe0c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2cbe0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2cbe10: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cbe10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cbe14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cbe14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cbe18: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2cbe18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2cbe1c: 0x460339c0  add.s       $f7, $f7, $f3
    ctx->pc = 0x2cbe1cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x2cbe20: 0xe5070000  swc1        $f7, 0x0($t0)
    ctx->pc = 0x2cbe20u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2cbe24: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2cbe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cbe28: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2cbe28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbe2c: 0x460329c2  mul.s       $f7, $f5, $f3
    ctx->pc = 0x2cbe2cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2cbe30: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2cbe30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cbe34: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2cbe34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2cbe38: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x2cbe38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cbe3c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2cbe3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2cbe40: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2cbe40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2cbe44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cbe44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cbe48: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2cbe48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2cbe4c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2cbe4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2cbe50: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x2cbe50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2cbe54: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2cbe54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cbe58: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2cbe58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cbe5c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2cbe5cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2cbe60: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2cbe60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbe64: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2cbe64u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cbe68: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2cbe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cbe6c: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2cbe6cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2cbe70: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x2cbe70u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x2cbe74: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x2cbe74u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x2cbe78: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2cbe78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2cbe7c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cbe7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cbe80: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x2cbe80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x2cbe84: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2CBE84u;
    {
        const bool branch_taken_0x2cbe84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE84u;
        // 0x2cbe88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbe84) {
            ctx->pc = 0x2CBFB8u;
            goto label_2cbfb8;
        }
    }
    ctx->pc = 0x2CBE8Cu;
    // 0x2cbe8c: 0x0  nop
    ctx->pc = 0x2cbe8cu;
    // NOP
label_2cbe90:
    // 0x2cbe90: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x2cbe90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2cbe94: 0x1231823  subu        $v1, $t1, $v1
    ctx->pc = 0x2cbe94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2cbe98: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x2cbe98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x2cbe9c: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x2cbe9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2cbea0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2cbea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2cbea4: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x2cbea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x2cbea8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2cbea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2cbeac: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2cbeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2cbeb0: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x2cbeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2cbeb4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2cbeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cbeb8: 0xc4670000  lwc1        $f7, 0x0($v1)
    ctx->pc = 0x2cbeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2cbebc: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x2cbebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cbec0: 0xc4680004  lwc1        $f8, 0x4($v1)
    ctx->pc = 0x2cbec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2cbec4: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x2cbec4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x2cbec8: 0xc4660008  lwc1        $f6, 0x8($v1)
    ctx->pc = 0x2cbec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2cbecc: 0x46082101  sub.s       $f4, $f4, $f8
    ctx->pc = 0x2cbeccu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x2cbed0: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x2cbed0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x2cbed4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2cbed4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2cbed8: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x2cbed8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2cbedc: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x2cbedcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2cbee0: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x2cbee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2cbee4: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x2cbee4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2cbee8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2cbee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbeec: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x2cbeecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2cbef0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cbef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cbef4: 0x46020240  add.s       $f9, $f0, $f2
    ctx->pc = 0x2cbef4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cbef8: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2cbef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cbefc: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x2cbefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cbf00: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x2cbf00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x2cbf04: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2cbf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbf08: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x2cbf08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x2cbf0c: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x2cbf0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x2cbf10: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2cbf10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2cbf14: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2cbf14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2cbf18: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2cbf18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2cbf1c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x2cbf1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2cbf20: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2cbf20u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2cbf24: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2cbf24u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cbf28: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2cbf28u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2cbf2c: 0x46051840  add.s       $f1, $f3, $f5
    ctx->pc = 0x2cbf2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2cbf30: 0x46060836  c.le.s      $f1, $f6
    ctx->pc = 0x2cbf30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cbf34: 0x0  nop
    ctx->pc = 0x2cbf34u;
    // NOP
    // 0x2cbf38: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBF38u;
    {
        const bool branch_taken_0x2cbf38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CBF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF38u;
        // 0x2cbf3c: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf38) {
            ctx->pc = 0x2CBF50u;
            goto label_2cbf50;
        }
    }
    ctx->pc = 0x2CBF40u;
    // 0x2cbf40: 0x460031c6  mov.s       $f7, $f6
    ctx->pc = 0x2cbf40u;
    ctx->f[7] = FPU_MOV_S(ctx->f[6]);
    // 0x2cbf44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CBF44u;
    {
        const bool branch_taken_0x2cbf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF44u;
        // 0x2cbf48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf44) {
            ctx->pc = 0x2CBF78u;
            goto label_2cbf78;
        }
    }
    ctx->pc = 0x2CBF4Cu;
    // 0x2cbf4c: 0x0  nop
    ctx->pc = 0x2cbf4cu;
    // NOP
label_2cbf50:
    // 0x2cbf50: 0x46014836  c.le.s      $f9, $f1
    ctx->pc = 0x2cbf50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cbf54: 0x0  nop
    ctx->pc = 0x2cbf54u;
    // NOP
    // 0x2cbf58: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBF58u;
    {
        const bool branch_taken_0x2cbf58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CBF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF58u;
        // 0x2cbf5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf58) {
            ctx->pc = 0x2CBF70u;
            goto label_2cbf70;
        }
    }
    ctx->pc = 0x2CBF60u;
    // 0x2cbf60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cbf60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cbf64: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2cbf64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2cbf68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBF68u;
    {
        const bool branch_taken_0x2cbf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF68u;
        // 0x2cbf6c: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf68) {
            ctx->pc = 0x2CBF80u;
            goto label_2cbf80;
        }
    }
    ctx->pc = 0x2CBF70u;
label_2cbf70:
    // 0x2cbf70: 0x460909c3  div.s       $f7, $f1, $f9
    ctx->pc = 0x2cbf70u;
    ctx->f[7] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[9]);
    // 0x2cbf74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cbf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cbf78:
    // 0x2cbf78: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2cbf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbf7c: 0x0  nop
    ctx->pc = 0x2cbf7cu;
    // NOP
label_2cbf80:
    // 0x2cbf80: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2cbf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cbf84: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2cbf84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2cbf88: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2cbf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cbf8c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2cbf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cbf90: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2cbf90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2cbf94: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cbf94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cbf98: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x2cbf98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2cbf9c: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x2cbf9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2cbfa0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2cbfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbfa4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cbfa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cbfa8: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x2cbfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2cbfac: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2cbfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cbfb0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2cbfb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2cbfb4: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x2cbfb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_2cbfb8:
    // 0x2cbfb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFB8u;
        // 0x2cbfbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBFC0u;
}
