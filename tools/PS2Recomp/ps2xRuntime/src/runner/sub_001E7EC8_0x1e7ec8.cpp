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

// Function: sub_001E7EC8
// Address: 0x1e7ec8 - 0x1e8098
void sub_001E7EC8_0x1e7ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7EC8_0x1e7ec8");
#endif

    switch (ctx->pc) {
        case 0x1e8088u: goto label_1e8088;
        default: break;
    }

    ctx->pc = 0x1e7ec8u;

    // 0x1e7ec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7ecc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e7eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7ed4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1e7ed4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e7ed8: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x1e7ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x1e7edc: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x1e7edcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x1e7ee0: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x1e7ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
    // 0x1e7ee4: 0xacc00038  sw          $zero, 0x38($a2)
    ctx->pc = 0x1e7ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 0));
    // 0x1e7ee8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e7ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e7eec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e7eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e7ef0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1e7ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1e7ef4: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x1e7ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1e7ef8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e7efc: 0x102182a  slt         $v1, $t0, $v0
    ctx->pc = 0x1e7efcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e7f00: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1e7f00u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
    // 0x1e7f04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e7f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e7f08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e7f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e7f0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e7f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7f10: 0xc4620024  lwc1        $f2, 0x24($v1)
    ctx->pc = 0x1e7f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7f14: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1e7f14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7f18: 0x0  nop
    ctx->pc = 0x1e7f18u;
    // NOP
    // 0x1e7f1c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7F1Cu;
    {
        const bool branch_taken_0x1e7f1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F1Cu;
        // 0x1e7f20: 0xc4630028  lwc1        $f3, 0x28($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f1c) {
            ctx->pc = 0x1E7F30u;
            goto label_1e7f30;
        }
    }
    ctx->pc = 0x1E7F24u;
    // 0x1e7f24: 0xe4c2003c  swc1        $f2, 0x3C($a2)
    ctx->pc = 0x1e7f24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
    // 0x1e7f28: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1E7F28u;
    {
        const bool branch_taken_0x1e7f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F28u;
        // 0x1e7f2c: 0xacc00030  sw          $zero, 0x30($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f28) {
            ctx->pc = 0x1E7FE0u;
            goto label_1e7fe0;
        }
    }
    ctx->pc = 0x1E7F30u;
label_1e7f30:
    // 0x1e7f30: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1e7f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1e7f34: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1e7f34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1e7f38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e7f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7f3c: 0x0  nop
    ctx->pc = 0x1e7f3cu;
    // NOP
    // 0x1e7f40: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e7f40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7f44: 0x0  nop
    ctx->pc = 0x1e7f44u;
    // NOP
    // 0x1e7f48: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1E7F48u;
    {
        const bool branch_taken_0x1e7f48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F48u;
        // 0x1e7f4c: 0xe4c1003c  swc1        $f1, 0x3C($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f48) {
            ctx->pc = 0x1E7FACu;
            goto label_1e7fac;
        }
    }
    ctx->pc = 0x1E7F50u;
    // 0x1e7f50: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1e7f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1e7f54: 0x1448000a  bne         $v0, $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E7F54u;
    {
        const bool branch_taken_0x1e7f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x1E7F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F54u;
        // 0x1e7f58: 0xc4c20024  lwc1        $f2, 0x24($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f54) {
            ctx->pc = 0x1E7F80u;
            goto label_1e7f80;
        }
    }
    ctx->pc = 0x1E7F5Cu;
    // 0x1e7f5c: 0xe4c2003c  swc1        $f2, 0x3C($a2)
    ctx->pc = 0x1e7f5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
    // 0x1e7f60: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x1e7f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x1e7f64: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1e7f64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1e7f68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e7f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e7f6c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1e7f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7f70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e7f70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e7f74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e7f74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e7f78: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1E7F78u;
    {
        const bool branch_taken_0x1e7f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F78u;
        // 0x1e7f7c: 0xe4c00030  swc1        $f0, 0x30($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f78) {
            ctx->pc = 0x1E7FD8u;
            goto label_1e7fd8;
        }
    }
    ctx->pc = 0x1E7F80u;
label_1e7f80:
    // 0x1e7f80: 0xe4c20038  swc1        $f2, 0x38($a2)
    ctx->pc = 0x1e7f80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x1e7f84: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x1e7f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x1e7f88: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1e7f88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1e7f8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e7f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7f90: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x1e7f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7f94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e7f94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e7f98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e7f98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e7f9c: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x1e7f9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1e7fa0: 0xe4c10030  swc1        $f1, 0x30($a2)
    ctx->pc = 0x1e7fa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x1e7fa4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E7FA4u;
    {
        const bool branch_taken_0x1e7fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7FA4u;
        // 0x1e7fa8: 0xe4c2002c  swc1        $f2, 0x2C($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7fa4) {
            ctx->pc = 0x1E7FD8u;
            goto label_1e7fd8;
        }
    }
    ctx->pc = 0x1E7FACu;
label_1e7fac:
    // 0x1e7fac: 0x0  nop
    ctx->pc = 0x1e7facu;
    // NOP
    // 0x1e7fb0: 0x0  nop
    ctx->pc = 0x1e7fb0u;
    // NOP
    // 0x1e7fb4: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x1e7fb4u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[2]);
    // 0x1e7fb8: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x1e7fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x1e7fbc: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1e7fbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1e7fc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e7fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7fc4: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x1e7fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7fc8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1e7fc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1e7fcc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1e7fccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e7fd0: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x1e7fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x1e7fd4: 0xe4c1002c  swc1        $f1, 0x2C($a2)
    ctx->pc = 0x1e7fd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
label_1e7fd8:
    // 0x1e7fd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e7fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e7fdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e7fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e7fe0:
    // 0x1e7fe0: 0x0  nop
    ctx->pc = 0x1e7fe0u;
    // NOP
    // 0x1e7fe4: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x1e7fe4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7fe8: 0x0  nop
    ctx->pc = 0x1e7fe8u;
    // NOP
    // 0x1e7fec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7FECu;
    {
        const bool branch_taken_0x1e7fec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7fec) {
            ctx->pc = 0x1E8000u;
            goto label_1e8000;
        }
    }
    ctx->pc = 0x1E7FF4u;
    // 0x1e7ff4: 0xe4c30040  swc1        $f3, 0x40($a2)
    ctx->pc = 0x1e7ff4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
    // 0x1e7ff8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1E7FF8u;
    {
        const bool branch_taken_0x1e7ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7FF8u;
        // 0x1e7ffc: 0xacc00034  sw          $zero, 0x34($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ff8) {
            ctx->pc = 0x1E8050u;
            goto label_1e8050;
        }
    }
    ctx->pc = 0x1E8000u;
label_1e8000:
    // 0x1e8000: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1e8000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1e8004: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1e8004u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1e8008: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e8008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e800c: 0x0  nop
    ctx->pc = 0x1e800cu;
    // NOP
    // 0x1e8010: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1e8010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8014: 0x0  nop
    ctx->pc = 0x1e8014u;
    // NOP
    // 0x1e8018: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E8018u;
    {
        const bool branch_taken_0x1e8018 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8018) {
            ctx->pc = 0x1E802Cu;
            goto label_1e802c;
        }
    }
    ctx->pc = 0x1E8020u;
    // 0x1e8020: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1e8020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e8024: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E8024u;
    {
        const bool branch_taken_0x1e8024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8024) {
            ctx->pc = 0x1E8038u;
            goto label_1e8038;
        }
    }
    ctx->pc = 0x1E802Cu;
label_1e802c:
    // 0x1e802c: 0x0  nop
    ctx->pc = 0x1e802cu;
    // NOP
    // 0x1e8030: 0x0  nop
    ctx->pc = 0x1e8030u;
    // NOP
    // 0x1e8034: 0x460308c3  div.s       $f3, $f1, $f3
    ctx->pc = 0x1e8034u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[3]);
label_1e8038:
    // 0x1e8038: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x1e8038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x1e803c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1e803cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1e8040: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e8040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8044: 0xacc00040  sw          $zero, 0x40($a2)
    ctx->pc = 0x1e8044u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 0));
    // 0x1e8048: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1e8048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1e804c: 0xe4c00034  swc1        $f0, 0x34($a2)
    ctx->pc = 0x1e804cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
label_1e8050:
    // 0x1e8050: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x1e8050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8054: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x1e8054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x1e8058: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1e8058u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1e805c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e805cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e8060: 0x0  nop
    ctx->pc = 0x1e8060u;
    // NOP
    // 0x1e8064: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e8064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e8068: 0xe4c00044  swc1        $f0, 0x44($a2)
    ctx->pc = 0x1e8068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 68), bits); }
    // 0x1e806c: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x1e806cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8070: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1e8070u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1e8074: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E8074u;
    {
        const bool branch_taken_0x1e8074 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8074u;
        // 0x1e8078: 0xe4c10048  swc1        $f1, 0x48($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8074) {
            ctx->pc = 0x1E8088u;
            goto label_1e8088;
        }
    }
    ctx->pc = 0x1E807Cu;
    // 0x1e807c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1e807cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8080: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1E8080u;
    SET_GPR_U32(ctx, 31, 0x1E8088u);
    ctx->pc = 0x1E8084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8080u;
    // 0x1e8084: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ECDA0u, 0x1E8080u, 0x1E8088u)) {
        return;
    }
    ctx->pc = 0x1E8088u;
label_1e8088:
    // 0x1e8088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e808c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E808Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E808Cu;
        // 0x1e8090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E808Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8094u;
    // 0x1e8094: 0x0  nop
    ctx->pc = 0x1e8094u;
    // NOP
    ctx->pc = 0x1e8098u;
}
