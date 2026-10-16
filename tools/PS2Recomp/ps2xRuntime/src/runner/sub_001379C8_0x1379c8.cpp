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

// Function: sub_001379C8
// Address: 0x1379c8 - 0x137a18
void sub_001379C8_0x1379c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001379C8_0x1379c8");
#endif

    ctx->pc = 0x1379c8u;

    // 0x1379c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1379c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1379cc: 0xc4801acc  lwc1        $f0, 0x1ACC($a0)
    ctx->pc = 0x1379ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1379d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1379d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1379d4: 0x0  nop
    ctx->pc = 0x1379d4u;
    // NOP
    // 0x1379d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1379D8u;
    {
        const bool branch_taken_0x1379d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1379d8) {
            ctx->pc = 0x1379DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1379D8u;
            // 0x1379dc: 0xe4811acc  swc1        $f1, 0x1ACC($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6860), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1379E0u;
            goto label_1379e0;
        }
    }
    ctx->pc = 0x1379E0u;
label_1379e0:
    // 0x1379e0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1379e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1379e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1379e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1379e8: 0xc4821ac0  lwc1        $f2, 0x1AC0($a0)
    ctx->pc = 0x1379e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1379ec: 0x46016043  div.s       $f1, $f12, $f1
    ctx->pc = 0x1379ecu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[1]);
    // 0x1379f0: 0xc4801abc  lwc1        $f0, 0x1ABC($a0)
    ctx->pc = 0x1379f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1379f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1379f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1379f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1379f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1379fc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1379fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137a00: 0x0  nop
    ctx->pc = 0x137a00u;
    // NOP
    // 0x137a04: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x137A04u;
    {
        const bool branch_taken_0x137a04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x137A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A04u;
        // 0x137a08: 0xe4801abc  swc1        $f0, 0x1ABC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6844), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a04) {
            ctx->pc = 0x137A10u;
            goto label_137a10;
        }
    }
    ctx->pc = 0x137A0Cu;
    // 0x137a0c: 0xe4821abc  swc1        $f2, 0x1ABC($a0)
    ctx->pc = 0x137a0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6844), bits); }
label_137a10:
    // 0x137a10: 0x3e00008  jr          $ra
    ctx->pc = 0x137A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137A18u;
}
