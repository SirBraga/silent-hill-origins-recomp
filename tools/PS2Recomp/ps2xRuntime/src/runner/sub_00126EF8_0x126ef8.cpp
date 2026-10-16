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

// Function: sub_00126EF8
// Address: 0x126ef8 - 0x126f20
void sub_00126EF8_0x126ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126EF8_0x126ef8");
#endif

    ctx->pc = 0x126ef8u;

    // 0x126ef8: 0xc4800bdc  lwc1        $f0, 0xBDC($a0)
    ctx->pc = 0x126ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126efc: 0xc4810bd8  lwc1        $f1, 0xBD8($a0)
    ctx->pc = 0x126efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126f00: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x126f00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x126f04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x126f04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126f08: 0x0  nop
    ctx->pc = 0x126f08u;
    // NOP
    // 0x126f0c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x126F0Cu;
    {
        const bool branch_taken_0x126f0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x126F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F0Cu;
        // 0x126f10: 0xe4800bdc  swc1        $f0, 0xBDC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3036), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f0c) {
            ctx->pc = 0x126F18u;
            goto label_126f18;
        }
    }
    ctx->pc = 0x126F14u;
    // 0x126f14: 0xe4810bdc  swc1        $f1, 0xBDC($a0)
    ctx->pc = 0x126f14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3036), bits); }
label_126f18:
    // 0x126f18: 0x3e00008  jr          $ra
    ctx->pc = 0x126F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126F20u;
}
