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

// Function: sub_0024EAD0
// Address: 0x24ead0 - 0x24eaf0
void sub_0024EAD0_0x24ead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EAD0_0x24ead0");
#endif

    ctx->pc = 0x24ead0u;

    // 0x24ead0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x24ead0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ead4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x24ead4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ead8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x24ead8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24eadc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x24eadcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x24eae0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24eae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24eae4: 0x46000004  c1          0x4
    ctx->pc = 0x24eae4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x24eae8: 0x3e00008  jr          $ra
    ctx->pc = 0x24EAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EAF0u;
}
