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

// Function: sub_001379A0
// Address: 0x1379a0 - 0x1379c8
void sub_001379A0_0x1379a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001379A0_0x1379a0");
#endif

    ctx->pc = 0x1379a0u;

    // 0x1379a0: 0xc4801abc  lwc1        $f0, 0x1ABC($a0)
    ctx->pc = 0x1379a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1379a4: 0xc4811ac0  lwc1        $f1, 0x1AC0($a0)
    ctx->pc = 0x1379a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1379a8: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1379a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1379ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1379acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1379b0: 0x0  nop
    ctx->pc = 0x1379b0u;
    // NOP
    // 0x1379b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1379B4u;
    {
        const bool branch_taken_0x1379b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1379B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1379B4u;
        // 0x1379b8: 0xe4801abc  swc1        $f0, 0x1ABC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6844), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1379b4) {
            ctx->pc = 0x1379C0u;
            goto label_1379c0;
        }
    }
    ctx->pc = 0x1379BCu;
    // 0x1379bc: 0xe4811abc  swc1        $f1, 0x1ABC($a0)
    ctx->pc = 0x1379bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6844), bits); }
label_1379c0:
    // 0x1379c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1379C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1379C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1379C8u;
}
