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

// Function: sub_00311EC8
// Address: 0x311ec8 - 0x312048
void sub_00311EC8_0x311ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311EC8_0x311ec8");
#endif

    switch (ctx->pc) {
        case 0x311ef8u: goto label_311ef8;
        default: break;
    }

    ctx->pc = 0x311ec8u;

    // 0x311ec8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x311ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x311ecc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x311eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x311ed0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x311ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x311ed4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x311ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311ed8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x311ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x311edc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x311edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311ee0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x311ee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311ee4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x311ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x311ee8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x311ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311eec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x311eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x311ef0: 0xc0c45a0  jal         func_311680
    ctx->pc = 0x311EF0u;
    SET_GPR_U32(ctx, 31, 0x311EF8u);
    ctx->pc = 0x311EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311EF0u;
    // 0x311ef4: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x311680u, 0x311EF0u, 0x311EF8u)) {
        return;
    }
    ctx->pc = 0x311EF8u;
label_311ef8:
    // 0x311ef8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x311ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x311efc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x311efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x311f00: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x311f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x311f04: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x311f04u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[0]);
    // 0x311f08: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x311f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311f0c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x311f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311f10: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x311f10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x311f14: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x311f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311f18: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x311f18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x311f1c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x311f1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x311f20: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x311f20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x311f24: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x311f24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x311f28: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x311f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x311f2c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x311f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311f30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311f34: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x311f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311f38: 0x46001907  neg.s       $f4, $f3
    ctx->pc = 0x311f38u;
    ctx->f[4] = FPU_NEG_S(ctx->f[3]);
    // 0x311f3c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x311f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311f40: 0x46020980  add.s       $f6, $f1, $f2
    ctx->pc = 0x311f40u;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x311f44: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x311f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x311f48: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x311f48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x311f4c: 0xc7a70028  lwc1        $f7, 0x28($sp)
    ctx->pc = 0x311f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x311f50: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x311f50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x311f54: 0xc7a80024  lwc1        $f8, 0x24($sp)
    ctx->pc = 0x311f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x311f58: 0x46052142  mul.s       $f5, $f4, $f5
    ctx->pc = 0x311f58u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x311f5c: 0x460721c2  mul.s       $f7, $f4, $f7
    ctx->pc = 0x311f5cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x311f60: 0x46061982  mul.s       $f6, $f3, $f6
    ctx->pc = 0x311f60u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x311f64: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x311f64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x311f68: 0xe625000c  swc1        $f5, 0xC($s1)
    ctx->pc = 0x311f68u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x311f6c: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x311f6cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x311f70: 0xe6250004  swc1        $f5, 0x4($s1)
    ctx->pc = 0x311f70u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x311f74: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x311f74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x311f78: 0xe6260000  swc1        $f6, 0x0($s1)
    ctx->pc = 0x311f78u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x311f7c: 0xe6220010  swc1        $f2, 0x10($s1)
    ctx->pc = 0x311f7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x311f80: 0xe624001c  swc1        $f4, 0x1C($s1)
    ctx->pc = 0x311f80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x311f84: 0xe6230020  swc1        $f3, 0x20($s1)
    ctx->pc = 0x311f84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x311f88: 0xe6240014  swc1        $f4, 0x14($s1)
    ctx->pc = 0x311f88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x311f8c: 0xe6270008  swc1        $f7, 0x8($s1)
    ctx->pc = 0x311f8cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x311f90: 0xe6270018  swc1        $f7, 0x18($s1)
    ctx->pc = 0x311f90u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x311f94: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x311f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311f98: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x311f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311f9c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x311f9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x311fa0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x311fa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x311fa4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x311fa4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x311fa8: 0x46013181  sub.s       $f6, $f6, $f1
    ctx->pc = 0x311fa8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x311fac: 0xe6260000  swc1        $f6, 0x0($s1)
    ctx->pc = 0x311facu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x311fb0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x311fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311fb4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x311fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311fb8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x311fb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x311fbc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x311fbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x311fc0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x311fc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x311fc4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x311fc4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x311fc8: 0xe6220010  swc1        $f2, 0x10($s1)
    ctx->pc = 0x311fc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x311fcc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x311fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311fd0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x311fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311fd4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x311fd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x311fd8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x311fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x311fdc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x311fdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x311fe0: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x311fe0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x311fe4: 0xe6230020  swc1        $f3, 0x20($s1)
    ctx->pc = 0x311fe4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x311fe8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x311fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311fec: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x311fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311ff0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x311ff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x311ff4: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x311ff4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x311ff8: 0xe6250004  swc1        $f5, 0x4($s1)
    ctx->pc = 0x311ff8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x311ffc: 0xe625000c  swc1        $f5, 0xC($s1)
    ctx->pc = 0x311ffcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x312000: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x312000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312004: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x312004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312008: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x312008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31200c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x31200cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x312010: 0xe6240014  swc1        $f4, 0x14($s1)
    ctx->pc = 0x312010u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x312014: 0xe624001c  swc1        $f4, 0x1C($s1)
    ctx->pc = 0x312014u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x312018: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x312018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31201c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x31201cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312020: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x312020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x312024: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x312024u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x312028: 0xe6270008  swc1        $f7, 0x8($s1)
    ctx->pc = 0x312028u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x31202c: 0xe6270018  swc1        $f7, 0x18($s1)
    ctx->pc = 0x31202cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x312030: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x312030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x312034: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x312034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x312038: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x312038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31203c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31203cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x312040: 0x3e00008  jr          $ra
    ctx->pc = 0x312040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312040u;
        // 0x312044: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312048u;
}
