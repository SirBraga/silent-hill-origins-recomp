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

// Function: sub_002A9078
// Address: 0x2a9078 - 0x2a90f0
void sub_002A9078_0x2a9078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9078_0x2a9078");
#endif

    switch (ctx->pc) {
        case 0x2a9098u: goto label_2a9098;
        default: break;
    }

    ctx->pc = 0x2a9078u;

    // 0x2a9078: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a9078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a907c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2a907cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9080: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2a9080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2a9084: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2a9084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2a9088: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2a9088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2a908c: 0xc481004c  lwc1        $f1, 0x4C($a0)
    ctx->pc = 0x2a908cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9090: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9090u;
        // 0x2a9094: 0xe4a1000c  swc1        $f1, 0xC($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9098u;
label_2a9098:
    // 0x2a9098: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a9098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a909c: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x2a909cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2a90a0: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x2a90a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2a90a4: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x2a90a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2a90a8: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x2a90a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x2a90ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a90acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a90b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a90b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a90b4: 0xe4a10014  swc1        $f1, 0x14($a1)
    ctx->pc = 0x2a90b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x2a90b8: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x2a90b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x2a90bc: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x2a90bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x2a90c0: 0xc482004c  lwc1        $f2, 0x4C($a0)
    ctx->pc = 0x2a90c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a90c4: 0xc78080b4  lwc1        $f0, -0x7F4C($gp)
    ctx->pc = 0x2a90c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a90c8: 0xc78180b8  lwc1        $f1, -0x7F48($gp)
    ctx->pc = 0x2a90c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a90cc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2a90ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a90d0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2a90d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2a90d4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2a90d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a90d8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2a90d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2a90dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a90dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a90e0: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x2a90e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2a90e4: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x2a90e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2a90e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A90E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A90ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90E8u;
        // 0x2a90ec: 0xe4a10004  swc1        $f1, 0x4($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A90E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A90F0u;
}
