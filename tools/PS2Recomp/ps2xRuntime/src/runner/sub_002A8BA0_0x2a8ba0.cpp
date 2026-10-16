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

// Function: sub_002A8BA0
// Address: 0x2a8ba0 - 0x2a8e78
void sub_002A8BA0_0x2a8ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8BA0_0x2a8ba0");
#endif

    switch (ctx->pc) {
        case 0x2a8ba8u: goto label_2a8ba8;
        case 0x2a8bd0u: goto label_2a8bd0;
        case 0x2a8c60u: goto label_2a8c60;
        case 0x2a8d28u: goto label_2a8d28;
        case 0x2a8d68u: goto label_2a8d68;
        default: break;
    }

    ctx->pc = 0x2a8ba0u;

    // 0x2a8ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BA0u;
        // 0x2a8ba4: 0xe48c0040  swc1        $f12, 0x40($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8BA8u;
label_2a8ba8:
    // 0x2a8ba8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a8ba8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8bac: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2a8bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8bb0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2a8bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2a8bb4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2a8bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2a8bb8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2a8bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2a8bbc: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x2a8bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8bc0: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x2a8bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8bc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a8bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BC8u;
        // 0x2a8bcc: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8BD0u;
label_2a8bd0:
    // 0x2a8bd0: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x2a8bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8bd4: 0xc78580a8  lwc1        $f5, -0x7F58($gp)
    ctx->pc = 0x2a8bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a8bd8: 0xc4840040  lwc1        $f4, 0x40($a0)
    ctx->pc = 0x2a8bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a8bdc: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x2a8bdcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2a8be0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2a8be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2a8be4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a8be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8be8: 0xc78380ac  lwc1        $f3, -0x7F54($gp)
    ctx->pc = 0x2a8be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8bec: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a8becu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8bf0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a8bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a8bf4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a8bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a8bf8: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x2a8bf8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x2a8bfc: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2a8bfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a8c00: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a8c00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8c04: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x2a8c04u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x2a8c08: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2a8c08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a8c0c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2a8c0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2a8c10: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x2a8c10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2a8c14: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2a8c14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2a8c18: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2a8c18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2a8c1c: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x2a8c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2a8c20: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x2a8c20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2a8c24: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x2a8c24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x2a8c28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a8c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8c2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a8c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8c30: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x2a8c30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x2a8c34: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x2a8c34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x2a8c38: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2a8c38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x2a8c3c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2a8c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8c40: 0xc78280b0  lwc1        $f2, -0x7F50($gp)
    ctx->pc = 0x2a8c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8c44: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x2a8c44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2a8c48: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2a8c48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a8c4c: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x2a8c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2a8c50: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x2a8c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2a8c54: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a8c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a8c58: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C58u;
        // 0x2a8c5c: 0x46040002  mul.s       $f0, $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8C60u;
label_2a8c60:
    // 0x2a8c60: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2A8C60u;
    {
        const bool branch_taken_0x2a8c60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C60u;
        // 0x2a8c64: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c60) {
            ctx->pc = 0x2A8CECu;
            goto label_2a8cec;
        }
    }
    ctx->pc = 0x2A8C68u;
    // 0x2a8c68: 0xc4850040  lwc1        $f5, 0x40($a0)
    ctx->pc = 0x2a8c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a8c6c: 0xc4a40020  lwc1        $f4, 0x20($a1)
    ctx->pc = 0x2a8c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a8c70: 0x46002105  abs.s       $f4, $f4
    ctx->pc = 0x2a8c70u;
    ctx->f[4] = FPU_ABS_S(ctx->f[4]);
    // 0x2a8c74: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x2a8c74u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2a8c78: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x2a8c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8c7c: 0xc4a30024  lwc1        $f3, 0x24($a1)
    ctx->pc = 0x2a8c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8c80: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2a8c80u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2a8c84: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x2a8c84u;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
    // 0x2a8c88: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2a8c88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2a8c8c: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x2a8c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8c90: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2a8c90u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2a8c94: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2a8c94u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2a8c98: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x2a8c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8c9c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2a8c9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2a8ca0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2a8ca0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2a8ca4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2a8ca4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2a8ca8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2a8ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a8cac: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x2a8cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8cb0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2a8cb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2a8cb4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2a8cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a8cb8: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x2a8cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8cbc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a8cbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2a8cc0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2a8cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2a8cc4: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2a8cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8cc8: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2a8cc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2a8ccc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2a8cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2a8cd0: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x2a8cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8cd4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2a8cd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2a8cd8: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x2a8cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2a8cdc: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x2a8cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8ce0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2a8ce0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a8ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8CE4u;
        // 0x2a8ce8: 0xe4400018  swc1        $f0, 0x18($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8CECu;
label_2a8cec:
    // 0x2a8cec: 0xc481004c  lwc1        $f1, 0x4C($a0)
    ctx->pc = 0x2a8cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8cf0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2a8cf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a8cf4: 0xc482004c  lwc1        $f2, 0x4C($a0)
    ctx->pc = 0x2a8cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8cf8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2a8cf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a8cfc: 0xc483004c  lwc1        $f3, 0x4C($a0)
    ctx->pc = 0x2a8cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8d00: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x2a8d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8d04: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2a8d04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2a8d08: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a8d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2a8d0c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2a8d0cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2a8d10: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2a8d10u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2a8d14: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x2a8d14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2a8d18: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2a8d18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2a8d1c: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x2a8d1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2a8d20: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D20u;
        // 0x2a8d24: 0xe4400018  swc1        $f0, 0x18($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8D28u;
label_2a8d28:
    // 0x2a8d28: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2a8d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8d2c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a8d2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8d30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a8d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8d34: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a8d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a8d38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a8d38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8d3c: 0x0  nop
    ctx->pc = 0x2a8d3cu;
    // NOP
    // 0x2a8d40: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8D40u;
    {
        const bool branch_taken_0x2a8d40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D40u;
        // 0x2a8d44: 0xe4c10004  swc1        $f1, 0x4($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8d40) {
            ctx->pc = 0x2A8D50u;
            goto label_2a8d50;
        }
    }
    ctx->pc = 0x2A8D48u;
    // 0x2a8d48: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a8d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2a8d4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a8d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2a8d50:
    // 0x2a8d50: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2a8d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d54: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x2a8d54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2a8d58: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x2a8d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8d5c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2a8d5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a8d60: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D60u;
        // 0x2a8d64: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8D68u;
label_2a8d68:
    // 0x2a8d68: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2a8d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8d6c: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x2a8d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2a8d70: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a8d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a8d74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a8d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8d78: 0xace30050  sw          $v1, 0x50($a3)
    ctx->pc = 0x2a8d78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 3));
    // 0x2a8d7c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2a8d7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8d80: 0x0  nop
    ctx->pc = 0x2a8d80u;
    // NOP
    // 0x2a8d84: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x2A8D84u;
    {
        const bool branch_taken_0x2a8d84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D84u;
        // 0x2a8d88: 0xc4830040  lwc1        $f3, 0x40($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8d84) {
            ctx->pc = 0x2A8E10u;
            goto label_2a8e10;
        }
    }
    ctx->pc = 0x2A8D8Cu;
    // 0x2a8d8c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2a8d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2a8d90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a8d90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8d94: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x2a8d94u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x2a8d98: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x2a8d98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x2a8d9c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2a8d9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8da0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a8da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2a8da4: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x2A8DA4u;
    {
        const bool branch_taken_0x2a8da4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8DA4u;
        // 0x2a8da8: 0xe4610008  swc1        $f1, 0x8($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8da4) {
            ctx->pc = 0x2A8E04u;
            goto label_2a8e04;
        }
    }
    ctx->pc = 0x2A8DACu;
    // 0x2a8dac: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x2a8dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a8db0: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x2a8db0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8db4: 0x0  nop
    ctx->pc = 0x2a8db4u;
    // NOP
    // 0x2a8db8: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2A8DB8u;
    {
        const bool branch_taken_0x2a8db8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8DB8u;
        // 0x2a8dbc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8db8) {
            ctx->pc = 0x2A8E04u;
            goto label_2a8e04;
        }
    }
    ctx->pc = 0x2A8DC0u;
    // 0x2a8dc0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2a8dc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2a8dc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a8dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8dc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a8dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8dcc: 0xe4630018  swc1        $f3, 0x18($v1)
    ctx->pc = 0x2a8dccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2a8dd0: 0xa4e20054  sh          $v0, 0x54($a3)
    ctx->pc = 0x2a8dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 84), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a8dd4: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x2a8dd4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2a8dd8: 0xe4640010  swc1        $f4, 0x10($v1)
    ctx->pc = 0x2a8dd8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2a8ddc: 0xe4640014  swc1        $f4, 0x14($v1)
    ctx->pc = 0x2a8ddcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2a8de0: 0x46020856  rsqrt.s     $f1, $f1, $f2
    ctx->pc = 0x2a8de0u;
    ctx->f[1] = FPU_RSQRT_S(ctx, ctx->f[1], ctx->f[2]);
    // 0x2a8de4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2a8de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8de8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a8de8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8dec: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2a8decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2a8df0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2a8df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8df4: 0xe4e40008  swc1        $f4, 0x8($a3)
    ctx->pc = 0x2a8df4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2a8df8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a8df8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2a8dfc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A8DFCu;
    {
        const bool branch_taken_0x2a8dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8DFCu;
        // 0x2a8e00: 0xe4e10004  swc1        $f1, 0x4($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8dfc) {
            ctx->pc = 0x2A8E3Cu;
            goto label_2a8e3c;
        }
    }
    ctx->pc = 0x2A8E04u;
label_2a8e04:
    // 0x2a8e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a8e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8e08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A8E08u;
    {
        const bool branch_taken_0x2a8e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8E08u;
        // 0x2a8e0c: 0xa4e20054  sh          $v0, 0x54($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 84), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8e08) {
            ctx->pc = 0x2A8E24u;
            goto label_2a8e24;
        }
    }
    ctx->pc = 0x2A8E10u;
label_2a8e10:
    // 0x2a8e10: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x2a8e10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x2a8e14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a8e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8e18: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x2a8e18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2a8e1c: 0xa4e20054  sh          $v0, 0x54($a3)
    ctx->pc = 0x2a8e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 84), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a8e20: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a8e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2a8e24:
    // 0x2a8e24: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x2a8e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a8e28: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x2a8e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a8e2c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2a8e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a8e30: 0xb0e20007  sdl         $v0, 0x7($a3)
    ctx->pc = 0x2a8e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8e34: 0xb4e20000  sdr         $v0, 0x0($a3)
    ctx->pc = 0x2a8e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8e38: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x2a8e38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_2a8e3c:
    // 0x2a8e3c: 0x8ce30050  lw          $v1, 0x50($a3)
    ctx->pc = 0x2a8e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x2a8e40: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2a8e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8e44: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2a8e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8e48: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a8e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8e4c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2a8e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8e50: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x2a8e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a8e54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a8e54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8e58: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2a8e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8e5c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2a8e5cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2a8e60: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2a8e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8e64: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2a8e64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2a8e68: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2a8e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2a8e6c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a8e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a8e70: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8E70u;
        // 0x2a8e74: 0xe4e0000c  swc1        $f0, 0xC($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8E78u;
}
