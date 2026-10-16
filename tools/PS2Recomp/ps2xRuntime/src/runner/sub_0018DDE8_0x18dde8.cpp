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

// Function: sub_0018DDE8
// Address: 0x18dde8 - 0x18df60
void sub_0018DDE8_0x18dde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DDE8_0x18dde8");
#endif

    switch (ctx->pc) {
        case 0x18de24u: goto label_18de24;
        case 0x18def8u: goto label_18def8;
        case 0x18df1cu: goto label_18df1c;
        case 0x18df40u: goto label_18df40;
        default: break;
    }

    ctx->pc = 0x18dde8u;

    // 0x18dde8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18dde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18ddec: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x18ddecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ddf0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18ddf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18ddf4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x18ddf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ddf8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18ddf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x18ddfc: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x18ddfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de00: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18de00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de04: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x18de04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de08: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18de08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18de0c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x18de0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18de10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18de14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18de14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18de18: 0x2665003c  addiu       $a1, $s3, 0x3C
    ctx->pc = 0x18de18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
    // 0x18de1c: 0xc063616  jal         func_18D858
    ctx->pc = 0x18DE1Cu;
    SET_GPR_U32(ctx, 31, 0x18DE24u);
    ctx->pc = 0x18DE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE1Cu;
    // 0x18de20: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D858u, 0x18DE1Cu, 0x18DE24u)) {
        return;
    }
    ctx->pc = 0x18DE24u;
label_18de24:
    // 0x18de24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18de24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de28: 0x12200043  beqz        $s1, . + 4 + (0x43 << 2)
    ctx->pc = 0x18DE28u;
    {
        const bool branch_taken_0x18de28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE28u;
        // 0x18de2c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18de28) {
            ctx->pc = 0x18DF38u;
            goto label_18df38;
        }
    }
    ctx->pc = 0x18DE30u;
    // 0x18de30: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x18de30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x18de34: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x18de34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    // 0x18de38: 0x8e060048  lw          $a2, 0x48($s0)
    ctx->pc = 0x18de38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x18de3c: 0xae260054  sw          $a2, 0x54($s1)
    ctx->pc = 0x18de3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 6));
    // 0x18de40: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x18de40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18de44: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x18de44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x18de48: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x18de48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x18de4c: 0xae250058  sw          $a1, 0x58($s1)
    ctx->pc = 0x18de4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 5));
    // 0x18de50: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x18de50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x18de54: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18DE54u;
    {
        const bool branch_taken_0x18de54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x18DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE54u;
        // 0x18de58: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18de54) {
            ctx->pc = 0x18DE68u;
            goto label_18de68;
        }
    }
    ctx->pc = 0x18DE5Cu;
    // 0x18de5c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x18de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18de60: 0x10c20035  beq         $a2, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x18DE60u;
    {
        const bool branch_taken_0x18de60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x18de60) {
            ctx->pc = 0x18DF38u;
            goto label_18df38;
        }
    }
    ctx->pc = 0x18DE68u;
label_18de68:
    // 0x18de68: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x18de68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x18de6c: 0x3442423f  ori         $v0, $v0, 0x423F
    ctx->pc = 0x18de6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
    // 0x18de70: 0x10a20031  beq         $a1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x18DE70u;
    {
        const bool branch_taken_0x18de70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x18de70) {
            ctx->pc = 0x18DF38u;
            goto label_18df38;
        }
    }
    ctx->pc = 0x18DE78u;
    // 0x18de78: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x18de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x18de7c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x18DE7Cu;
    {
        const bool branch_taken_0x18de7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18de7c) {
            ctx->pc = 0x18DF38u;
            goto label_18df38;
        }
    }
    ctx->pc = 0x18DE84u;
    // 0x18de84: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x18de84u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18de88: 0x0  nop
    ctx->pc = 0x18de88u;
    // NOP
    // 0x18de8c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18de8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18de90: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DE90u;
    {
        const bool branch_taken_0x18de90 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x18DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE90u;
        // 0x18de94: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18de90) {
            ctx->pc = 0x18DEACu;
            goto label_18deac;
        }
    }
    ctx->pc = 0x18DE98u;
    // 0x18de98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18de98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18de9c: 0x0  nop
    ctx->pc = 0x18de9cu;
    // NOP
    // 0x18dea0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18dea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18dea4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18DEA4u;
    {
        const bool branch_taken_0x18dea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dea4) {
            ctx->pc = 0x18DEC4u;
            goto label_18dec4;
        }
    }
    ctx->pc = 0x18DEACu;
label_18deac:
    // 0x18deac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18deacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18deb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18deb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18deb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18deb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18deb8: 0x0  nop
    ctx->pc = 0x18deb8u;
    // NOP
    // 0x18debc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18debcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18dec0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18dec0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18dec4:
    // 0x18dec4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x18dec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x18dec8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18dec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18decc: 0x0  nop
    ctx->pc = 0x18deccu;
    // NOP
    // 0x18ded0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18ded0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x18ded4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18ded4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x18ded8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18ded8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18dedc: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x18dedcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x18dee0: 0x1a400015  blez        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x18DEE0u;
    {
        const bool branch_taken_0x18dee0 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x18DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEE0u;
        // 0x18dee4: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dee0) {
            ctx->pc = 0x18DF38u;
            goto label_18df38;
        }
    }
    ctx->pc = 0x18DEE8u;
    // 0x18dee8: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x18dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x18deec: 0x8c504fdc  lw          $s0, 0x4FDC($v0)
    ctx->pc = 0x18deecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20444)));
    // 0x18def0: 0xc0a0644  jal         func_281910
    ctx->pc = 0x18DEF0u;
    SET_GPR_U32(ctx, 31, 0x18DEF8u);
    ctx->pc = 0x18DEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DEF0u;
    // 0x18def4: 0x203802a  slt         $s0, $s0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x281910u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281910u, 0x18DEF0u, 0x18DEF8u)) {
        return;
    }
    ctx->pc = 0x18DEF8u;
label_18def8:
    // 0x18def8: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x18def8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18defc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18defcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18df00: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18DF00u;
    {
        const bool branch_taken_0x18df00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18df00) {
            ctx->pc = 0x18DF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DF00u;
            // 0x18df04: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DF08u;
            goto label_18df08;
        }
    }
    ctx->pc = 0x18DF08u;
label_18df08:
    // 0x18df08: 0x9010  mfhi        $s2
    ctx->pc = 0x18df08u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x18df0c: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x18DF0Cu;
    {
        const bool branch_taken_0x18df0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18df0c) {
            ctx->pc = 0x18DF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DF0Cu;
            // 0x18df10: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DF30u;
            goto label_18df30;
        }
    }
    ctx->pc = 0x18DF14u;
    // 0x18df14: 0xc0c580c  jal         func_316030
    ctx->pc = 0x18DF14u;
    SET_GPR_U32(ctx, 31, 0x18DF1Cu);
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x18DF14u, 0x18DF1Cu)) {
        return;
    }
    ctx->pc = 0x18DF1Cu;
label_18df1c:
    // 0x18df1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18df1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18df20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DF20u;
    {
        const bool branch_taken_0x18df20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF20u;
        // 0x18df24: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df20) {
            ctx->pc = 0x18DF30u;
            goto label_18df30;
        }
    }
    ctx->pc = 0x18DF28u;
    // 0x18df28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18DF28u;
    {
        const bool branch_taken_0x18df28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF28u;
        // 0x18df2c: 0x521021  addu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df28) {
            ctx->pc = 0x18DF34u;
            goto label_18df34;
        }
    }
    ctx->pc = 0x18DF30u;
label_18df30:
    // 0x18df30: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x18df30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_18df34:
    // 0x18df34: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x18df34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
label_18df38:
    // 0x18df38: 0xc0644f4  jal         func_1913D0
    ctx->pc = 0x18DF38u;
    SET_GPR_U32(ctx, 31, 0x18DF40u);
    ctx->pc = 0x18DF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF38u;
    // 0x18df3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1913D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1913D0u, 0x18DF38u, 0x18DF40u)) {
        return;
    }
    ctx->pc = 0x18DF40u;
label_18df40:
    // 0x18df40: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18df40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df44: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18df44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18df48: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18df48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18df4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18df4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18df50: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x18df50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18df54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18df54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18df58: 0x3e00008  jr          $ra
    ctx->pc = 0x18DF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF58u;
        // 0x18df5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DF60u;
}
