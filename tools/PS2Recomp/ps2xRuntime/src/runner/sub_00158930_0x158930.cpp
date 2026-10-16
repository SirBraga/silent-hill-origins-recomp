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

// Function: sub_00158930
// Address: 0x158930 - 0x158a70
void sub_00158930_0x158930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158930_0x158930");
#endif

    switch (ctx->pc) {
        case 0x158988u: goto label_158988;
        case 0x158994u: goto label_158994;
        case 0x1589a8u: goto label_1589a8;
        case 0x1589b4u: goto label_1589b4;
        default: break;
    }

    ctx->pc = 0x158930u;

    // 0x158930: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x158930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x158934: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x158934u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x158938: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x158938u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x15893c: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x15893cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x158940: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x158940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x158944: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x158944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x158948: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x158948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15894c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15894cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x158950: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x158950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158954: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x158954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x158958: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x158958u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15895c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x15895cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x158960: 0x24140050  addiu       $s4, $zero, 0x50
    ctx->pc = 0x158960u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x158964: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x158964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x158968: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x158968u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x15896c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15896cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x158970: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x158970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x158974: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x158974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x158978: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x158978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x15897c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x15897cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x158980: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x158980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x158984: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x158984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_158988:
    // 0x158988: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x158988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15898c: 0xc056432  jal         func_1590C8
    ctx->pc = 0x15898Cu;
    SET_GPR_U32(ctx, 31, 0x158994u);
    ctx->pc = 0x158990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15898Cu;
    // 0x158990: 0x528021  addu        $s0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1590C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1590C8u, 0x15898Cu, 0x158994u)) {
        return;
    }
    ctx->pc = 0x158994u;
label_158994:
    // 0x158994: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x158994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x158998: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158998u;
    {
        const bool branch_taken_0x158998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158998u;
        // 0x15899c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158998) {
            ctx->pc = 0x1589ACu;
            goto label_1589ac;
        }
    }
    ctx->pc = 0x1589A0u;
    // 0x1589a0: 0xc056432  jal         func_1590C8
    ctx->pc = 0x1589A0u;
    SET_GPR_U32(ctx, 31, 0x1589A8u);
    ctx->pc = 0x1589A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1589A0u;
    // 0x1589a4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1590C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1590C8u, 0x1589A0u, 0x1589A8u)) {
        return;
    }
    ctx->pc = 0x1589A8u;
label_1589a8:
    // 0x1589a8: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1589a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1589ac:
    // 0x1589ac: 0xc056430  jal         func_1590C0
    ctx->pc = 0x1589ACu;
    SET_GPR_U32(ctx, 31, 0x1589B4u);
    ctx->pc = 0x1589B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1589ACu;
    // 0x1589b0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1590C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1590C0u, 0x1589ACu, 0x1589B4u)) {
        return;
    }
    ctx->pc = 0x1589B4u;
label_1589b4:
    // 0x1589b4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1589b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1589b8: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x1589b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1589bc: 0x2142818  mult        $a1, $s0, $s4
    ctx->pc = 0x1589bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1589c0: 0x2a480008  slti        $t0, $s2, 0x8
    ctx->pc = 0x1589c0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1589c4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1589c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1589c8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1589c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1589cc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1589ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1589d0: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x1589d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1589d4: 0x4601b834  c.lt.s      $f23, $f1
    ctx->pc = 0x1589d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1589d8: 0x0  nop
    ctx->pc = 0x1589d8u;
    // NOP
    // 0x1589dc: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1589DCu;
    {
        const bool branch_taken_0x1589dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1589E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589DCu;
        // 0x1589e0: 0x451821  addu        $v1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1589dc) {
            ctx->pc = 0x158A34u;
            goto label_158a34;
        }
    }
    ctx->pc = 0x1589E4u;
    // 0x1589e4: 0x4616a002  mul.s       $f0, $f20, $f22
    ctx->pc = 0x1589e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x1589e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1589e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1589ec: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1589ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1589f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1589f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1589f4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1589f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1589f8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1589f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1589fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1589fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158a00: 0x0  nop
    ctx->pc = 0x158a00u;
    // NOP
    // 0x158a04: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x158A04u;
    {
        const bool branch_taken_0x158a04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158a04) {
            ctx->pc = 0x158A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158A04u;
            // 0x158a08: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158A0Cu;
            goto label_158a0c;
        }
    }
    ctx->pc = 0x158A0Cu;
label_158a0c:
    // 0x158a0c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x158a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158a10: 0x46150042  mul.s       $f1, $f0, $f21
    ctx->pc = 0x158a10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x158a14: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x158a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x158a18: 0xa0730043  sb          $s3, 0x43($v1)
    ctx->pc = 0x158a18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 67), (uint8_t)GPR_U32(ctx, 19));
    // 0x158a1c: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x158a1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x158a20: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x158a20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x158a24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x158a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x158a28: 0xa0620042  sb          $v0, 0x42($v1)
    ctx->pc = 0x158a28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 66), (uint8_t)GPR_U32(ctx, 2));
    // 0x158a2c: 0xa0620040  sb          $v0, 0x40($v1)
    ctx->pc = 0x158a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x158a30: 0xa0620041  sb          $v0, 0x41($v1)
    ctx->pc = 0x158a30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 65), (uint8_t)GPR_U32(ctx, 2));
label_158a34:
    // 0x158a34: 0x5500ffd4  bnel        $t0, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x158A34u;
    {
        const bool branch_taken_0x158a34 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x158a34) {
            ctx->pc = 0x158A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158A34u;
            // 0x158a38: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158988;
        }
    }
    ctx->pc = 0x158A3Cu;
    // 0x158a3c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x158a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x158a40: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x158a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x158a44: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x158a44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158a48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x158a48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158a4c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x158a4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158a50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x158a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158a54: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x158a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x158a58: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x158a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x158a5c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x158a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x158a60: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x158a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x158a64: 0x3e00008  jr          $ra
    ctx->pc = 0x158A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A64u;
        // 0x158a68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158A6Cu;
    // 0x158a6c: 0x0  nop
    ctx->pc = 0x158a6cu;
    // NOP
    ctx->pc = 0x158a70u;
}
