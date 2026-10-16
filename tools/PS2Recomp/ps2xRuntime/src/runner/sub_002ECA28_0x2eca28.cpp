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

// Function: sub_002ECA28
// Address: 0x2eca28 - 0x2ecc38
void sub_002ECA28_0x2eca28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECA28_0x2eca28");
#endif

    ctx->pc = 0x2eca28u;

    // 0x2eca28: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2eca28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2eca2c: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x2eca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2eca30: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x2eca30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eca34: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x2eca34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eca38: 0x30820018  andi        $v0, $a0, 0x18
    ctx->pc = 0x2eca38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)24);
    // 0x2eca3c: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x2eca3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eca40: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2ECA40u;
    {
        const bool branch_taken_0x2eca40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA40u;
        // 0x2eca44: 0x460100c2  mul.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca40) {
            ctx->pc = 0x2ECA7Cu;
            goto label_2eca7c;
        }
    }
    ctx->pc = 0x2ECA48u;
    // 0x2eca48: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2eca48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eca4c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x2eca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eca50: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2eca50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2eca54: 0xc78282f0  lwc1        $f2, -0x7D10($gp)
    ctx->pc = 0x2eca54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2eca58: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2eca58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2eca5c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2eca5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2eca60: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2eca60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2eca64: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eca64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2eca68: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2eca68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2eca6c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eca6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2eca70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2eca70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2eca74: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2ECA74u;
    {
        const bool branch_taken_0x2eca74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA74u;
        // 0x2eca78: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca74) {
            ctx->pc = 0x2ECC28u;
            goto label_2ecc28;
        }
    }
    ctx->pc = 0x2ECA7Cu;
label_2eca7c:
    // 0x2eca7c: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x2eca7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x2eca80: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2ECA80u;
    {
        const bool branch_taken_0x2eca80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eca80) {
            ctx->pc = 0x2ECC30u;
            goto label_2ecc30;
        }
    }
    ctx->pc = 0x2ECA88u;
    // 0x2eca88: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x2eca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x2eca8c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ECA8Cu;
    {
        const bool branch_taken_0x2eca8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eca8c) {
            ctx->pc = 0x2ECA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECA8Cu;
            // 0x2eca90: 0xc4620058  lwc1        $f2, 0x58($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECA98u;
            goto label_2eca98;
        }
    }
    ctx->pc = 0x2ECA94u;
    // 0x2eca94: 0xc4620064  lwc1        $f2, 0x64($v1)
    ctx->pc = 0x2eca94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2eca98:
    // 0x2eca98: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2eca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2eca9c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2eca9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ecaa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ecaa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecaa4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2ecaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2ecaa8: 0x8c620664  lw          $v0, 0x664($v1)
    ctx->pc = 0x2ecaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1636)));
    // 0x2ecaac: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2ecaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ecab0: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x2ecab0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ecab4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2ECAB4u;
    {
        const bool branch_taken_0x2ecab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECAB4u;
        // 0x2ecab8: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecab4) {
            ctx->pc = 0x2ECAF4u;
            goto label_2ecaf4;
        }
    }
    ctx->pc = 0x2ECABCu;
    // 0x2ecabc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2ecabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2ecac0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ecac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ecac4: 0x2442ff60  addiu       $v0, $v0, -0xA0
    ctx->pc = 0x2ecac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
    // 0x2ecac8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ecac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ecacc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ecaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ecad0: 0x800008  jr          $a0
    ctx->pc = 0x2ECAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ECAD8u: goto label_2ecad8;
            case 0x2ECAE4u: goto label_2ecae4;
            case 0x2ECAECu: goto label_2ecaec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECAD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2ECAD8u;
label_2ecad8:
    // 0x2ecad8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ecad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecadc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECADCu;
    {
        const bool branch_taken_0x2ecadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECADCu;
        // 0x2ecae0: 0x46001082  mul.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecadc) {
            ctx->pc = 0x2ECAECu;
            goto label_2ecaec;
        }
    }
    ctx->pc = 0x2ECAE4u;
label_2ecae4:
    // 0x2ecae4: 0xc78082f4  lwc1        $f0, -0x7D0C($gp)
    ctx->pc = 0x2ecae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ecae8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2ecae8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2ecaec:
    // 0x2ecaec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ecaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ecaf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ecaf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ecaf4:
    // 0x2ecaf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ecaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ecaf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ecaf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecafc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2ecafcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ecb00: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2ecb00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2ecb04: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x2ecb04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ecb08: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2ecb08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2ecb0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ecb0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecb10: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2ecb10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecb14: 0x0  nop
    ctx->pc = 0x2ecb14u;
    // NOP
    // 0x2ecb18: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x2ECB18u;
    {
        const bool branch_taken_0x2ecb18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ECB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB18u;
        // 0x2ecb1c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb18) {
            ctx->pc = 0x2ECB88u;
            goto label_2ecb88;
        }
    }
    ctx->pc = 0x2ECB20u;
    // 0x2ecb20: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x2ecb20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x2ecb24: 0x225c2  srl         $a0, $v0, 23
    ctx->pc = 0x2ecb24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x2ecb28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ecb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ecb2c: 0x2484ff81  addiu       $a0, $a0, -0x7F
    ctx->pc = 0x2ecb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967169));
    // 0x2ecb30: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x2ecb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ecb34: 0x43c00  sll         $a3, $a0, 16
    ctx->pc = 0x2ecb34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2ecb38: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2ecb38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2ecb3c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECB3Cu;
    {
        const bool branch_taken_0x2ecb3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB3Cu;
        // 0x2ecb40: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb3c) {
            ctx->pc = 0x2ECB50u;
            goto label_2ecb50;
        }
    }
    ctx->pc = 0x2ECB44u;
    // 0x2ecb44: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2ecb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2ecb48: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x2ecb48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ecb4c: 0x0  nop
    ctx->pc = 0x2ecb4cu;
    // NOP
label_2ecb50:
    // 0x2ecb50: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2ecb50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb54: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2ecb54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2ecb58: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2ecb58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2ecb5c: 0x24634400  addiu       $v1, $v1, 0x4400
    ctx->pc = 0x2ecb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17408));
    // 0x2ecb60: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ecb60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ecb64: 0x72443  sra         $a0, $a3, 17
    ctx->pc = 0x2ecb64u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 17));
    // 0x2ecb68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ecb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ecb6c: 0x2484007f  addiu       $a0, $a0, 0x7F
    ctx->pc = 0x2ecb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x2ecb70: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2ecb70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ecb74: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x2ecb74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x2ecb78: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ecb78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ecb7c: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x2ecb7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ecb80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ecb80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecb84: 0x0  nop
    ctx->pc = 0x2ecb84u;
    // NOP
label_2ecb88:
    // 0x2ecb88: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x2ecb88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecb8c: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x2ECB8Cu;
    {
        const bool branch_taken_0x2ecb8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ecb8c) {
            ctx->pc = 0x2ECBF8u;
            goto label_2ecbf8;
        }
    }
    ctx->pc = 0x2ECB94u;
    // 0x2ecb94: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2ecb94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ecb98: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2ecb98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb9c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x2ecb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x2ecba0: 0x225c2  srl         $a0, $v0, 23
    ctx->pc = 0x2ecba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x2ecba4: 0x2484ff81  addiu       $a0, $a0, -0x7F
    ctx->pc = 0x2ecba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967169));
    // 0x2ecba8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ecba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ecbac: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x2ecbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ecbb0: 0x43c00  sll         $a3, $a0, 16
    ctx->pc = 0x2ecbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2ecbb4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2ecbb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2ecbb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECBB8u;
    {
        const bool branch_taken_0x2ecbb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBB8u;
        // 0x2ecbbc: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecbb8) {
            ctx->pc = 0x2ECBC8u;
            goto label_2ecbc8;
        }
    }
    ctx->pc = 0x2ECBC0u;
    // 0x2ecbc0: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2ecbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2ecbc4: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x2ecbc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ecbc8:
    // 0x2ecbc8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2ecbc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecbcc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2ecbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2ecbd0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2ecbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2ecbd4: 0x24634400  addiu       $v1, $v1, 0x4400
    ctx->pc = 0x2ecbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17408));
    // 0x2ecbd8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ecbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ecbdc: 0x72443  sra         $a0, $a3, 17
    ctx->pc = 0x2ecbdcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 17));
    // 0x2ecbe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ecbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ecbe4: 0x2484007f  addiu       $a0, $a0, 0x7F
    ctx->pc = 0x2ecbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x2ecbe8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2ecbe8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ecbec: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x2ecbecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x2ecbf0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ecbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ecbf4: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x2ecbf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2ecbf8:
    // 0x2ecbf8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2ecbf8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecbfc: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x2ecbfcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ecc00: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x2ecc00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2ecc04: 0xc78282f8  lwc1        $f2, -0x7D08($gp)
    ctx->pc = 0x2ecc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ecc08: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x2ecc08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2ecc0c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2ecc0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ecc10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ecc10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ecc14: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ecc14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2ecc18: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2ecc18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ecc1c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ecc1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ecc20: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2ecc20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ecc24: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2ecc24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2ecc28:
    // 0x2ecc28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ecc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ecc2c: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x2ecc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
label_2ecc30:
    // 0x2ecc30: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECC38u;
}
