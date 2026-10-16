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

// Function: sub_00108798
// Address: 0x108798 - 0x1087c8
void sub_00108798_0x108798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108798_0x108798");
#endif

    ctx->pc = 0x108798u;

    // 0x108798: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x108798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10879c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x10879cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1087a0: 0xc4820034  lwc1        $f2, 0x34($a0)
    ctx->pc = 0x1087a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1087a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1087a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1087a8: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x1087a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1087ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1087acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1087b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1087b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1087b4: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1087b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1087b8: 0x8ca29168  lw          $v0, -0x6E98($a1)
    ctx->pc = 0x1087b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x339168u));
    // 0x1087bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1087BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1087C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087BCu;
        // 0x1087c0: 0xac43022c  sw          $v1, 0x22C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 556), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1087BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1087C4u;
    // 0x1087c4: 0x0  nop
    ctx->pc = 0x1087c4u;
    // NOP
    ctx->pc = 0x1087c8u;
}
