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

// Function: sub_002A8ED0
// Address: 0x2a8ed0 - 0x2a9030
void sub_002A8ED0_0x2a8ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8ED0_0x2a8ed0");
#endif

    switch (ctx->pc) {
        case 0x2a8f4cu: goto label_2a8f4c;
        case 0x2a900cu: goto label_2a900c;
        default: break;
    }

    ctx->pc = 0x2a8ed0u;

    // 0x2a8ed0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a8ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a8ed4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2a8ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2a8ed8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2a8ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2a8edc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a8edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8ee0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a8ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a8ee4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a8ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8ee8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2a8ee8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a8eec: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2a8eecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a8ef0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2a8ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2a8ef4: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2a8ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8ef8: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x2a8ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a8efc: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x2a8efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8f00: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2a8f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8f04: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x2a8f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a8f08: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2a8f08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2a8f0c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2a8f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8f10: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2a8f10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2a8f14: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2a8f14u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2a8f18: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2a8f18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a8f1c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2a8f1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a8f20: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x2a8f20u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a8f24: 0xc494004c  lwc1        $f20, 0x4C($a0)
    ctx->pc = 0x2a8f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a8f28: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2a8f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2a8f2c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a8f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a8f30: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2a8f30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a8f34: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a8f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f38: 0xe7b50024  swc1        $f21, 0x24($sp)
    ctx->pc = 0x2a8f38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a8f3c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a8f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a8f40: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x2a8f40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a8f44: 0xc0aaa6e  jal         func_2AA9B8
    ctx->pc = 0x2A8F44u;
    SET_GPR_U32(ctx, 31, 0x2A8F4Cu);
    ctx->pc = 0x2A8F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8F44u;
    // 0x2a8f48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA9B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA9B8u, 0x2A8F44u, 0x2A8F4Cu)) {
        return;
    }
    ctx->pc = 0x2A8F4Cu;
label_2a8f4c:
    // 0x2a8f4c: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A8F4Cu;
    {
        const bool branch_taken_0x2a8f4c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2A8F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8F4Cu;
        // 0x2a8f50: 0xc7a60010  lwc1        $f6, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8f4c) {
            ctx->pc = 0x2A8F60u;
            goto label_2a8f60;
        }
    }
    ctx->pc = 0x2A8F54u;
    // 0x2a8f54: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2A8F54u;
    {
        const bool branch_taken_0x2a8f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8F54u;
        // 0x2a8f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8f54) {
            ctx->pc = 0x2A9010u;
            goto label_2a9010;
        }
    }
    ctx->pc = 0x2A8F5Cu;
    // 0x2a8f5c: 0x0  nop
    ctx->pc = 0x2a8f5cu;
    // NOP
label_2a8f60:
    // 0x2a8f60: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2a8f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8f64: 0x46023083  div.s       $f2, $f6, $f2
    ctx->pc = 0x2a8f64u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[6], ctx->f[2]);
    // 0x2a8f68: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x2a8f68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2a8f6c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2a8f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8f70: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a8f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a8f74: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x2a8f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a8f78: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2a8f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8f7c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2a8f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a8f80: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2a8f80u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2a8f84: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a8f84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2a8f88: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x2a8f88u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2a8f8c: 0xe6050004  swc1        $f5, 0x4($s0)
    ctx->pc = 0x2a8f8cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2a8f90: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x2a8f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8f94: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2a8f94u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2a8f98: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x2a8f98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2a8f9c: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x2a8f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8fa0: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2a8fa0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2a8fa4: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x2a8fa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2a8fa8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a8fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8fac: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x2a8facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a8fb0: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2a8fb0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2a8fb4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2a8fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8fb8: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x2a8fb8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x2a8fbc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2a8fbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2a8fc0: 0xe6050010  swc1        $f5, 0x10($s0)
    ctx->pc = 0x2a8fc0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2a8fc4: 0xe6030014  swc1        $f3, 0x14($s0)
    ctx->pc = 0x2a8fc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2a8fc8: 0x4606a834  c.lt.s      $f21, $f6
    ctx->pc = 0x2a8fc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8fcc: 0x0  nop
    ctx->pc = 0x2a8fccu;
    // NOP
    // 0x2a8fd0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2A8FD0u;
    {
        const bool branch_taken_0x2a8fd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FD0u;
        // 0x2a8fd4: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8fd0) {
            ctx->pc = 0x2A9000u;
            goto label_2a9000;
        }
    }
    ctx->pc = 0x2A8FD8u;
    // 0x2a8fd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a8fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8fdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a8fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8fe0: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2a8fe0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[20]);
    // 0x2a8fe4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a8fe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8fe8: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x2a8fe8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2a8fec: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2a8fecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a8ff0: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x2a8ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2a8ff4: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x2a8ff4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2a8ff8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A8FF8u;
    {
        const bool branch_taken_0x2a8ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FF8u;
        // 0x2a8ffc: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8ff8) {
            ctx->pc = 0x2A900Cu;
            goto label_2a900c;
        }
    }
    ctx->pc = 0x2A9000u;
label_2a9000:
    // 0x2a9000: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2a9000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2a9004: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2A9004u;
    SET_GPR_U32(ctx, 31, 0x2A900Cu);
    ctx->pc = 0x2A9008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9004u;
    // 0x2a9008: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2A9004u, 0x2A900Cu)) {
        return;
    }
    ctx->pc = 0x2A900Cu;
label_2a900c:
    // 0x2a900c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a900cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9010:
    // 0x2a9010: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2a9010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a9014: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2a9014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a9018: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a9018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a901c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2a901cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a9020: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2a9020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a9024: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9024u;
        // 0x2a9028: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A902Cu;
    // 0x2a902c: 0x0  nop
    ctx->pc = 0x2a902cu;
    // NOP
    ctx->pc = 0x2a9030u;
}
