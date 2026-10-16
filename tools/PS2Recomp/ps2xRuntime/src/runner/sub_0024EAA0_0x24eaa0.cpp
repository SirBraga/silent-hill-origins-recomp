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

// Function: sub_0024EAA0
// Address: 0x24eaa0 - 0x24ead0
void sub_0024EAA0_0x24eaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EAA0_0x24eaa0");
#endif

    ctx->pc = 0x24eaa0u;

    // 0x24eaa0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x24eaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24eaa4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x24eaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24eaa8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x24eaa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24eaac: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x24eaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24eab0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x24eab0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x24eab4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x24eab4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x24eab8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24eab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24eabc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24eabcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24eac0: 0x46000004  c1          0x4
    ctx->pc = 0x24eac0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x24eac4: 0x3e00008  jr          $ra
    ctx->pc = 0x24EAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EACCu;
    // 0x24eacc: 0x0  nop
    ctx->pc = 0x24eaccu;
    // NOP
    ctx->pc = 0x24ead0u;
}
