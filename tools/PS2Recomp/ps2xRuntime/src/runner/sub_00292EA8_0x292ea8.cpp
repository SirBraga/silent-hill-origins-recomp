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

// Function: sub_00292EA8
// Address: 0x292ea8 - 0x293070
void sub_00292EA8_0x292ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292EA8_0x292ea8");
#endif

    switch (ctx->pc) {
        case 0x292ff4u: goto label_292ff4;
        default: break;
    }

    ctx->pc = 0x292ea8u;

    // 0x292ea8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x292ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x292eac: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x292eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x292eb0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x292eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x292eb4: 0x750c0  sll         $t2, $a3, 3
    ctx->pc = 0x292eb4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x292eb8: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x292eb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x292ebc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x292ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x292ec0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x292ec0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x292ec4: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x292ec4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x292ec8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x292ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x292ecc: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x292eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x292ed0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x292ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x292ed4: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x292ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ed8: 0xc4670004  lwc1        $f7, 0x4($v1)
    ctx->pc = 0x292ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x292edc: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x292edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x292ee0: 0xc5430000  lwc1        $f3, 0x0($t2)
    ctx->pc = 0x292ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x292ee4: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x292ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x292ee8: 0x46071982  mul.s       $f6, $f3, $f7
    ctx->pc = 0x292ee8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x292eec: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x292eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x292ef0: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x292ef0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x292ef4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x292ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292ef8: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x292ef8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x292efc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x292efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x292f00: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x292f00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x292f04: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x292f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x292f08: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x292f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x292f0c: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x292f0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x292f10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x292f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x292f14: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x292f14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x292f18: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x292f18u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x292f1c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x292f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x292f20: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x292f20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x292f24: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x292f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x292f28: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x292f28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x292f2c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x292f2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x292f30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x292f30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x292f34: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x292f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x292f38: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x292f38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x292f3c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x292f3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x292f40: 0x46140542  mul.s       $f21, $f0, $f20
    ctx->pc = 0x292f40u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x292f44: 0x4600ad45  abs.s       $f21, $f21
    ctx->pc = 0x292f44u;
    ctx->f[21] = FPU_ABS_S(ctx->f[21]);
    // 0x292f48: 0x4602ad42  mul.s       $f21, $f21, $f2
    ctx->pc = 0x292f48u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x292f4c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x292f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x292f50: 0xe21818  mult        $v1, $a3, $v0
    ctx->pc = 0x292f50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x292f54: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x292f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x292f58: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x292f58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x292f5c: 0xc4e60000  lwc1        $f6, 0x0($a3)
    ctx->pc = 0x292f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x292f60: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x292f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x292f64: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x292f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x292f68: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x292f68u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x292f6c: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x292f6cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x292f70: 0xc4e50004  lwc1        $f5, 0x4($a3)
    ctx->pc = 0x292f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x292f74: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x292f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292f78: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x292f78u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x292f7c: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x292f7cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x292f80: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x292f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x292f84: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x292f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x292f88: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x292f88u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x292f8c: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x292f8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x292f90: 0x1021818  mult        $v1, $t0, $v0
    ctx->pc = 0x292f90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x292f94: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x292f94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x292f98: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x292f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292f9c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x292f9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x292fa0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x292fa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x292fa4: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x292fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x292fa8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x292fa8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x292fac: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x292facu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x292fb0: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x292fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292fb4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x292fb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x292fb8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x292fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x292fbc: 0x460029c2  mul.s       $f7, $f5, $f0
    ctx->pc = 0x292fbcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x292fc0: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x292fc0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x292fc4: 0x460230c2  mul.s       $f3, $f6, $f2
    ctx->pc = 0x292fc4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x292fc8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x292fc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x292fcc: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x292fccu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x292fd0: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x292fd0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x292fd4: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x292fd4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x292fd8: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x292fd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x292fdc: 0x460439c1  sub.s       $f7, $f7, $f4
    ctx->pc = 0x292fdcu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x292fe0: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x292fe0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x292fe4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x292fe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x292fe8: 0xe7a70020  swc1        $f7, 0x20($sp)
    ctx->pc = 0x292fe8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x292fec: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x292FECu;
    SET_GPR_U32(ctx, 31, 0x292FF4u);
    ctx->pc = 0x292FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292FECu;
    // 0x292ff0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x292FECu, 0x292FF4u)) {
        return;
    }
    ctx->pc = 0x292FF4u;
label_292ff4:
    // 0x292ff4: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x292ff4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x292ff8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x292ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292ffc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x292ffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x293000: 0x0  nop
    ctx->pc = 0x293000u;
    // NOP
    // 0x293004: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x293004u;
    {
        const bool branch_taken_0x293004 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x293004) {
            ctx->pc = 0x293008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293004u;
            // 0x293008: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293050u;
            goto label_293050;
        }
    }
    ctx->pc = 0x29300Cu;
    // 0x29300c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29300cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x293010: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x293010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293014: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x293014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x293018: 0x0  nop
    ctx->pc = 0x293018u;
    // NOP
    // 0x29301c: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x29301Cu;
    {
        const bool branch_taken_0x29301c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29301c) {
            ctx->pc = 0x293020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29301Cu;
            // 0x293020: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293050u;
            goto label_293050;
        }
    }
    ctx->pc = 0x293024u;
    // 0x293024: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x293024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293028: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x293028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29302c: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x29302cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[21]);
    // 0x293030: 0x46000004  c1          0x4
    ctx->pc = 0x293030u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x293034: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x293034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293038: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x293038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29303c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29303cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x293040: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x293040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x293044: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x293044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x293048: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x293048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x29304c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x29304cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_293050:
    // 0x293050: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x293050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293054: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x293054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x293058: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x293058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29305c: 0x3e00008  jr          $ra
    ctx->pc = 0x29305Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29305Cu;
        // 0x293060: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29305Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293064u;
    // 0x293064: 0x0  nop
    ctx->pc = 0x293064u;
    // NOP
    // 0x293068: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x293068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29306c: 0x0  nop
    ctx->pc = 0x29306cu;
    // NOP
    ctx->pc = 0x293070u;
}
