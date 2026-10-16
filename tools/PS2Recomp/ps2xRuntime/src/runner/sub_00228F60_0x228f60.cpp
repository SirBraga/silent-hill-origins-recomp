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

// Function: sub_00228F60
// Address: 0x228f60 - 0x229160
void sub_00228F60_0x228f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228F60_0x228f60");
#endif

    switch (ctx->pc) {
        case 0x229028u: goto label_229028;
        case 0x229068u: goto label_229068;
        case 0x229090u: goto label_229090;
        default: break;
    }

    ctx->pc = 0x228f60u;

    // 0x228f60: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x228f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x228f64: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x228f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x228f68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x228f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x228f6c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x228f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x228f70: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x228f70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f74: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x228f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x228f78: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x228f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x228f7c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x228f7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f80: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x228f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x228f84: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x228f84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f88: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x228f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x228f8c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x228f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x228f90: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x228f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x228f94: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x228f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x228f98: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x228f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x228f9c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x228f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x228fa0: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x228fa0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x228fa4: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x228fa4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x228fa8: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x228fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x228fac: 0x8e8b0004  lw          $t3, 0x4($s4)
    ctx->pc = 0x228facu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x228fb0: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x228fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x228fb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x228fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228fb8: 0x0  nop
    ctx->pc = 0x228fb8u;
    // NOP
    // 0x228fbc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x228fbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x228fc0: 0x8e8c0008  lw          $t4, 0x8($s4)
    ctx->pc = 0x228fc0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x228fc4: 0x448b1800  mtc1        $t3, $f3
    ctx->pc = 0x228fc4u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x228fc8: 0x0  nop
    ctx->pc = 0x228fc8u;
    // NOP
    // 0x228fcc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x228fccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x228fd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x228fd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228fd4: 0x0  nop
    ctx->pc = 0x228fd4u;
    // NOP
    // 0x228fd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228fd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228fdc: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x228fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x228fe0: 0x448c2000  mtc1        $t4, $f4
    ctx->pc = 0x228fe0u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x228fe4: 0x0  nop
    ctx->pc = 0x228fe4u;
    // NOP
    // 0x228fe8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x228fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x228fec: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x228fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x228ff0: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x228ff0u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[3]);
    // 0x228ff4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x228ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x228ff8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x228ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x228ffc: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x228ffcu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
    // 0x229000: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x229000u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x229004: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x229004u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x229008: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x229008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x22900c: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22900cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x229010: 0x44131000  mfc1        $s3, $f2
    ctx->pc = 0x229010u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x229014: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x229014u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x229018: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x229018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x22901c: 0x19800040  blez        $t4, . + 4 + (0x40 << 2)
    ctx->pc = 0x22901Cu;
    {
        const bool branch_taken_0x22901c = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x229020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22901Cu;
        // 0x229020: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22901c) {
            ctx->pc = 0x229120u;
            goto label_229120;
        }
    }
    ctx->pc = 0x229024u;
    // 0x229024: 0x0  nop
    ctx->pc = 0x229024u;
    // NOP
label_229028:
    // 0x229028: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x229028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x22902c: 0x249e0001  addiu       $fp, $a0, 0x1
    ctx->pc = 0x22902cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x229030: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x229030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x229034: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x229034u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229038: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x229038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22903c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22903cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229040: 0x144b021  addu        $s6, $t2, $a0
    ctx->pc = 0x229040u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x229044: 0x19600032  blez        $t3, . + 4 + (0x32 << 2)
    ctx->pc = 0x229044u;
    {
        const bool branch_taken_0x229044 = (GPR_S64(ctx, 11) <= 0);
        ctx->pc = 0x229048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229044u;
        // 0x229048: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229044) {
            ctx->pc = 0x229110u;
            goto label_229110;
        }
    }
    ctx->pc = 0x22904Cu;
    // 0x22904c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x22904cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x229050: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x229050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x229054: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229058: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x229058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22905c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22905cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x229060: 0x2672ffff  addiu       $s2, $s3, -0x1
    ctx->pc = 0x229060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x229064: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x229064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_229068:
    // 0x229068: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x229068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22906c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x22906cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229070: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x229070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229074: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x229074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229078: 0x26c8ffff  addiu       $t0, $s6, -0x1
    ctx->pc = 0x229078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x22907c: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x22907cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229080: 0x7faa0020  sq          $t2, 0x20($sp)
    ctx->pc = 0x229080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
    // 0x229084: 0x7fab0030  sq          $t3, 0x30($sp)
    ctx->pc = 0x229084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 11));
    // 0x229088: 0xc08a334  jal         func_228CD0
    ctx->pc = 0x229088u;
    SET_GPR_U32(ctx, 31, 0x229090u);
    ctx->pc = 0x22908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229088u;
    // 0x22908c: 0x7fac0040  sq          $t4, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228CD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228CD0u, 0x229088u, 0x229090u)) {
        return;
    }
    ctx->pc = 0x229090u;
label_229090:
    // 0x229090: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x229090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229094: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x229094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x229098: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x229098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x22909c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22909cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2290a0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2290a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2290a4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2290a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2290a8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2290a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2290ac: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2290acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2290b0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2290b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2290b4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2290b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2290b8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2290b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2290bc: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x2290bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2290c0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2290c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2290c4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2290c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2290c8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2290c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2290cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2290ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2290d0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2290d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2290d4: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x2290d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2290d8: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2290d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2290dc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2290dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2290e0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2290e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2290e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2290e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2290e8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2290e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2290ec: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x2290ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2290f0: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x2290f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2290f4: 0x2b3a821  addu        $s5, $s5, $s3
    ctx->pc = 0x2290f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x2290f8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2290f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2290fc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2290fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x229100: 0x7baa0020  lq          $t2, 0x20($sp)
    ctx->pc = 0x229100u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229104: 0x7bab0030  lq          $t3, 0x30($sp)
    ctx->pc = 0x229104u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229108: 0x1620ffd7  bnez        $s1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x229108u;
    {
        const bool branch_taken_0x229108 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229108u;
        // 0x22910c: 0x7bac0040  lq          $t4, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229108) {
            ctx->pc = 0x229068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229068;
        }
    }
    ctx->pc = 0x229110u;
label_229110:
    // 0x229110: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x229110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229114: 0x8c102a  slt         $v0, $a0, $t4
    ctx->pc = 0x229114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x229118: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x229118u;
    {
        const bool branch_taken_0x229118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229118u;
        // 0x22911c: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229118) {
            ctx->pc = 0x229028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229028;
        }
    }
    ctx->pc = 0x229120u;
label_229120:
    // 0x229120: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x229120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229124: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x229124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x229128: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x229128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22912c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x22912cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x229130: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x229130u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x229134: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x229134u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x229138: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x229138u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22913c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x22913cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x229140: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x229140u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x229144: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x229144u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x229148: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x229148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22914c: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x22914cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x229150: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x229150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x229154: 0x3e00008  jr          $ra
    ctx->pc = 0x229154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229154u;
        // 0x229158: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22915Cu;
    // 0x22915c: 0x0  nop
    ctx->pc = 0x22915cu;
    // NOP
    ctx->pc = 0x229160u;
}
