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

// Function: sub_001A6ED0
// Address: 0x1a6ed0 - 0x1a7028
void sub_001A6ED0_0x1a6ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6ED0_0x1a6ed0");
#endif

    switch (ctx->pc) {
        case 0x1a6f84u: goto label_1a6f84;
        default: break;
    }

    ctx->pc = 0x1a6ed0u;

    // 0x1a6ed0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a6ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a6ed4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1a6ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1a6ed8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a6ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a6edc: 0x24a3001c  addiu       $v1, $a1, 0x1C
    ctx->pc = 0x1a6edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    // 0x1a6ee0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a6ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a6ee4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ee8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a6ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a6eec: 0x24b10004  addiu       $s1, $a1, 0x4
    ctx->pc = 0x1a6eecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1a6ef0: 0xc4a70010  lwc1        $f7, 0x10($a1)
    ctx->pc = 0x1a6ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1a6ef4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1a6ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6ef8: 0x460139c1  sub.s       $f7, $f7, $f1
    ctx->pc = 0x1a6ef8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x1a6efc: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x1a6efcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a6f00: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x1a6f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a6f04: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1a6f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6f08: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x1a6f08u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x1a6f0c: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x1a6f0cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a6f10: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1a6f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a6f14: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1a6f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6f18: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1a6f18u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1a6f1c: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x1a6f1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a6f20: 0xc4a2001c  lwc1        $f2, 0x1C($a1)
    ctx->pc = 0x1a6f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a6f24: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1a6f24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1a6f28: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1a6f28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a6f2c: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x1a6f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a6f30: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1a6f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6f34: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x1a6f34u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1a6f38: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x1a6f38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a6f3c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1a6f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6f40: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1a6f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6f44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a6f44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a6f48: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1a6f48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a6f4c: 0x46012982  mul.s       $f6, $f5, $f1
    ctx->pc = 0x1a6f4cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1a6f50: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x1a6f50u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x1a6f54: 0x46043802  mul.s       $f0, $f7, $f4
    ctx->pc = 0x1a6f54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x1a6f58: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1a6f58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a6f5c: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x1a6f5cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x1a6f60: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a6f60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a6f64: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x1a6f64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x1a6f68: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x1a6f68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x1a6f6c: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x1a6f6cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x1a6f70: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1a6f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1a6f74: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x1a6f74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1a6f78: 0xe6060000  swc1        $f6, 0x0($s0)
    ctx->pc = 0x1a6f78u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1a6f7c: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x1A6F7Cu;
    SET_GPR_U32(ctx, 31, 0x1A6F84u);
    ctx->pc = 0x1A6F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6F7Cu;
    // 0x1a6f80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1A6F7Cu, 0x1A6F84u)) {
        return;
    }
    ctx->pc = 0x1A6F84u;
label_1a6f84:
    // 0x1a6f84: 0x0  nop
    ctx->pc = 0x1a6f84u;
    // NOP
    // 0x1a6f88: 0x0  nop
    ctx->pc = 0x1a6f88u;
    // NOP
    // 0x1a6f8c: 0x46000044  c1          0x44
    ctx->pc = 0x1a6f8cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a6f90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a6f90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6f94: 0x0  nop
    ctx->pc = 0x1a6f94u;
    // NOP
    // 0x1a6f98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a6f98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6f9c: 0x0  nop
    ctx->pc = 0x1a6f9cu;
    // NOP
    // 0x1a6fa0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6FA0u;
    {
        const bool branch_taken_0x1a6fa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FA0u;
        // 0x1a6fa4: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fa0) {
            ctx->pc = 0x1A6FC0u;
            goto label_1a6fc0;
        }
    }
    ctx->pc = 0x1A6FA8u;
    // 0x1a6fa8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a6fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a6fac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a6facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6fb0: 0x0  nop
    ctx->pc = 0x1a6fb0u;
    // NOP
    // 0x1a6fb4: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x1a6fb4u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1a6fb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6FB8u;
    {
        const bool branch_taken_0x1a6fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FB8u;
        // 0x1a6fbc: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fb8) {
            ctx->pc = 0x1A6FC8u;
            goto label_1a6fc8;
        }
    }
    ctx->pc = 0x1A6FC0u;
label_1a6fc0:
    // 0x1a6fc0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a6fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6fc4: 0x0  nop
    ctx->pc = 0x1a6fc4u;
    // NOP
label_1a6fc8:
    // 0x1a6fc8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1a6fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6fcc: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1a6fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a6fd0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1a6fd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1a6fd4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1a6fd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1a6fd8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1a6fd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1a6fdc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1a6fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1a6fe0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1a6fe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1a6fe4: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x1a6fe4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1a6fe8: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x1a6fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a6fec: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x1a6fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a6ff0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1a6ff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1a6ff4: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x1a6ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a6ff8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a6ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ffc: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1a6ffcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1a7000: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a7000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7004: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1a7004u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1a7008: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a700c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a700cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a7010: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a7010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a7014: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a7014u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a7018: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1a7018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1a701c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a701cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a7020: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7020u;
        // 0x1a7024: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7028u;
}
