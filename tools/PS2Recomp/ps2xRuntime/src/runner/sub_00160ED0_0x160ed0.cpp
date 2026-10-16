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

// Function: sub_00160ED0
// Address: 0x160ed0 - 0x161010
void sub_00160ED0_0x160ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160ED0_0x160ed0");
#endif

    switch (ctx->pc) {
        case 0x160ff0u: goto label_160ff0;
        default: break;
    }

    ctx->pc = 0x160ed0u;

    // 0x160ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x160ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x160ed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160ed8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x160ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x160edc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x160edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x160ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ee4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x160ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x160ee8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x160ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x160eec: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x160eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x160ef0: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x160EF0u;
    {
        const bool branch_taken_0x160ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x160EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EF0u;
        // 0x160ef4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ef0) {
            ctx->pc = 0x160F34u;
            goto label_160f34;
        }
    }
    ctx->pc = 0x160EF8u;
    // 0x160ef8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x160EF8u;
    {
        const bool branch_taken_0x160ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160ef8) {
            ctx->pc = 0x160EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160EF8u;
            // 0x160efc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160F10u;
            goto label_160f10;
        }
    }
    ctx->pc = 0x160F00u;
    // 0x160f00: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x160F00u;
    {
        const bool branch_taken_0x160f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x160f00) {
            ctx->pc = 0x160F28u;
            goto label_160f28;
        }
    }
    ctx->pc = 0x160F08u;
    // 0x160f08: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x160F08u;
    {
        const bool branch_taken_0x160f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F08u;
        // 0x160f0c: 0xc6000044  lwc1        $f0, 0x44($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f08) {
            ctx->pc = 0x160FF8u;
            goto label_160ff8;
        }
    }
    ctx->pc = 0x160F10u;
label_160f10:
    // 0x160f10: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x160F10u;
    {
        const bool branch_taken_0x160f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x160F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F10u;
        // 0x160f14: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f10) {
            ctx->pc = 0x160F7Cu;
            goto label_160f7c;
        }
    }
    ctx->pc = 0x160F18u;
    // 0x160f18: 0x5062001e  beql        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x160F18u;
    {
        const bool branch_taken_0x160f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160f18) {
            ctx->pc = 0x160F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160F18u;
            // 0x160f1c: 0xc6030060  lwc1        $f3, 0x60($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x160F94u;
            goto label_160f94;
        }
    }
    ctx->pc = 0x160F20u;
    // 0x160f20: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x160F20u;
    {
        const bool branch_taken_0x160f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F20u;
        // 0x160f24: 0xc6000044  lwc1        $f0, 0x44($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f20) {
            ctx->pc = 0x160FF8u;
            goto label_160ff8;
        }
    }
    ctx->pc = 0x160F28u;
label_160f28:
    // 0x160f28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x160f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160f2c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x160F2Cu;
    {
        const bool branch_taken_0x160f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F2Cu;
        // 0x160f30: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f2c) {
            ctx->pc = 0x161000u;
            goto label_161000;
        }
    }
    ctx->pc = 0x160F34u;
label_160f34:
    // 0x160f34: 0xc602005c  lwc1        $f2, 0x5C($s0)
    ctx->pc = 0x160f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x160f38: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x160f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160f3c: 0x46026042  mul.s       $f1, $f12, $f2
    ctx->pc = 0x160f3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x160f40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x160f40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x160f44: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x160f44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160f48: 0x0  nop
    ctx->pc = 0x160f48u;
    // NOP
    // 0x160f4c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x160F4Cu;
    {
        const bool branch_taken_0x160f4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x160F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F4Cu;
        // 0x160f50: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f4c) {
            ctx->pc = 0x160F6Cu;
            goto label_160f6c;
        }
    }
    ctx->pc = 0x160F54u;
    // 0x160f54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x160f54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160f58: 0x0  nop
    ctx->pc = 0x160f58u;
    // NOP
    // 0x160f5c: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x160f5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160f60: 0x0  nop
    ctx->pc = 0x160f60u;
    // NOP
    // 0x160f64: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x160F64u;
    {
        const bool branch_taken_0x160f64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160f64) {
            ctx->pc = 0x160F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160F64u;
            // 0x160f68: 0xc60c0068  lwc1        $f12, 0x68($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x160FD0u;
            goto label_160fd0;
        }
    }
    ctx->pc = 0x160F6Cu;
label_160f6c:
    // 0x160f6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160f70: 0xe6030068  swc1        $f3, 0x68($s0)
    ctx->pc = 0x160f70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x160f74: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x160F74u;
    {
        const bool branch_taken_0x160f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F74u;
        // 0x160f78: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f74) {
            ctx->pc = 0x160FCCu;
            goto label_160fcc;
        }
    }
    ctx->pc = 0x160F7Cu;
label_160f7c:
    // 0x160f7c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x160f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x160f80: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x160F80u;
    {
        const bool branch_taken_0x160f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F80u;
        // 0x160f84: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f80) {
            ctx->pc = 0x160FF4u;
            goto label_160ff4;
        }
    }
    ctx->pc = 0x160F88u;
    // 0x160f88: 0xe6030068  swc1        $f3, 0x68($s0)
    ctx->pc = 0x160f88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x160f8c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x160F8Cu;
    {
        const bool branch_taken_0x160f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F8Cu;
        // 0x160f90: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f8c) {
            ctx->pc = 0x160FF4u;
            goto label_160ff4;
        }
    }
    ctx->pc = 0x160F94u;
label_160f94:
    // 0x160f94: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x160f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160f98: 0x46036042  mul.s       $f1, $f12, $f3
    ctx->pc = 0x160f98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x160f9c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x160f9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x160fa0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x160fa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x160fa4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x160fa4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160fa8: 0x0  nop
    ctx->pc = 0x160fa8u;
    // NOP
    // 0x160fac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x160FACu;
    {
        const bool branch_taken_0x160fac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x160FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FACu;
        // 0x160fb0: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160fac) {
            ctx->pc = 0x160FC4u;
            goto label_160fc4;
        }
    }
    ctx->pc = 0x160FB4u;
    // 0x160fb4: 0x46021832  c.eq.s      $f3, $f2
    ctx->pc = 0x160fb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160fb8: 0x0  nop
    ctx->pc = 0x160fb8u;
    // NOP
    // 0x160fbc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x160FBCu;
    {
        const bool branch_taken_0x160fbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160fbc) {
            ctx->pc = 0x160FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160FBCu;
            // 0x160fc0: 0xc60c0068  lwc1        $f12, 0x68($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x160FD0u;
            goto label_160fd0;
        }
    }
    ctx->pc = 0x160FC4u;
label_160fc4:
    // 0x160fc4: 0xe6020068  swc1        $f2, 0x68($s0)
    ctx->pc = 0x160fc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x160fc8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x160fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_160fcc:
    // 0x160fcc: 0xc60c0068  lwc1        $f12, 0x68($s0)
    ctx->pc = 0x160fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_160fd0:
    // 0x160fd0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x160fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x160fd4: 0x34210fd0  ori         $at, $at, 0xFD0
    ctx->pc = 0x160fd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4048);
    // 0x160fd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x160fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160fdc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x160fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x160fe0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x160fe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160fe4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x160fe4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x160fe8: 0xc09b164  jal         func_26C590
    ctx->pc = 0x160FE8u;
    SET_GPR_U32(ctx, 31, 0x160FF0u);
    ctx->pc = 0x160FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160FE8u;
    // 0x160fec: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x160FE8u, 0x160FF0u)) {
        return;
    }
    ctx->pc = 0x160FF0u;
label_160ff0:
    // 0x160ff0: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x160ff0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_160ff4:
    // 0x160ff4: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x160ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_160ff8:
    // 0x160ff8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x160ff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x160ffc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x160ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_161000:
    // 0x161000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161004: 0x3e00008  jr          $ra
    ctx->pc = 0x161004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161004u;
        // 0x161008: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16100Cu;
    // 0x16100c: 0x0  nop
    ctx->pc = 0x16100cu;
    // NOP
    ctx->pc = 0x161010u;
}
