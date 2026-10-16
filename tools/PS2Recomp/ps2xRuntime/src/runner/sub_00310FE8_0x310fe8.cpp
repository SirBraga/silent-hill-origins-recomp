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

// Function: sub_00310FE8
// Address: 0x310fe8 - 0x3110d0
void sub_00310FE8_0x310fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310FE8_0x310fe8");
#endif

    switch (ctx->pc) {
        case 0x310ff0u: goto label_310ff0;
        case 0x311030u: goto label_311030;
        default: break;
    }

    ctx->pc = 0x310fe8u;

    // 0x310fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x310FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FE8u;
        // 0x310fec: 0xc4800040  lwc1        $f0, 0x40($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310FF0u;
label_310ff0:
    // 0x310ff0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x310ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310ff4: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x310ff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x310ff8: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x310ff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x310ffc: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x310ffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x311000: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x311000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311004: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x311004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311008: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x311008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x31100c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x31100cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x311010: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x311010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x311014: 0x46000004  c1          0x4
    ctx->pc = 0x311014u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x311018: 0xc481004c  lwc1        $f1, 0x4C($a0)
    ctx->pc = 0x311018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31101c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x31101cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311020: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x311020u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x311024: 0x3e00008  jr          $ra
    ctx->pc = 0x311024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311024u;
        // 0x311028: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31102Cu;
    // 0x31102c: 0x0  nop
    ctx->pc = 0x31102cu;
    // NOP
label_311030:
    // 0x311030: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x311030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311034: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x311034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x311038: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x311038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x31103c: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x31103cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x311040: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x311040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x311044: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x311044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x311048: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x311048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31104c: 0xe4a10014  swc1        $f1, 0x14($a1)
    ctx->pc = 0x31104cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x311050: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x311050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x311054: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x311054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x311058: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x311058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31105c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x31105cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x311060: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x311060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x311064: 0xc483004c  lwc1        $f3, 0x4C($a0)
    ctx->pc = 0x311064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x311068: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x311068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31106c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x31106cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x311070: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x311070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x311074: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x311074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x311078: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x311078u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x31107c: 0xc7858350  lwc1        $f5, -0x7CB0($gp)
    ctx->pc = 0x31107cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x311080: 0xc7878354  lwc1        $f7, -0x7CAC($gp)
    ctx->pc = 0x311080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x311084: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x311084u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x311088: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x311088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31108c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x31108cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x311090: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x311090u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x311094: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x311094u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x311098: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x311098u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x31109c: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x31109cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3110a0: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x3110a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3110a4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x3110a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x3110a8: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x3110a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3110ac: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x3110acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x3110b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3110b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3110b4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x3110b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x3110b8: 0xe4a30008  swc1        $f3, 0x8($a1)
    ctx->pc = 0x3110b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3110bc: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x3110bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x3110c0: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x3110c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3110c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3110C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3110C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3110C4u;
        // 0x3110c8: 0xe4a20000  swc1        $f2, 0x0($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3110C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3110CCu;
    // 0x3110cc: 0x0  nop
    ctx->pc = 0x3110ccu;
    // NOP
    ctx->pc = 0x3110d0u;
}
