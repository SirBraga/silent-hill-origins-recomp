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

// Function: sub_00137650
// Address: 0x137650 - 0x137690
void sub_00137650_0x137650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137650_0x137650");
#endif

    ctx->pc = 0x137650u;

    // 0x137650: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x137650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137654: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x137654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x137658: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x137658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13765c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x13765cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x137660: 0xc440836c  lwc1        $f0, -0x7C94($v0)
    ctx->pc = 0x137660u;
    { uint32_t bits = FAST_READ32(0x33836Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137664: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x137664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x137668: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x137668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x13766c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x13766cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x137670: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x137670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137674: 0x0  nop
    ctx->pc = 0x137674u;
    // NOP
    // 0x137678: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x137678u;
    {
        const bool branch_taken_0x137678 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137678) {
            ctx->pc = 0x137688u;
            goto label_137688;
        }
    }
    ctx->pc = 0x137680u;
    // 0x137680: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x137680u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x137684: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x137684u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_137688:
    // 0x137688: 0x3e00008  jr          $ra
    ctx->pc = 0x137688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137690u;
}
