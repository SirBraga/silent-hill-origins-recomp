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

// Function: sub_002A8E98
// Address: 0x2a8e98 - 0x2a8ec0
void sub_002A8E98_0x2a8e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8E98_0x2a8e98");
#endif

    ctx->pc = 0x2a8e98u;

    // 0x2a8e98: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2a8e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8e9c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2a8e9cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2a8ea0: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x2a8ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a8ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8ea8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a8ea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8eac: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x2a8eacu;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x2a8eb0: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2a8eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2a8eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8EB4u;
        // 0x2a8eb8: 0xe4c20000  swc1        $f2, 0x0($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8EBCu;
    // 0x2a8ebc: 0x0  nop
    ctx->pc = 0x2a8ebcu;
    // NOP
    ctx->pc = 0x2a8ec0u;
}
