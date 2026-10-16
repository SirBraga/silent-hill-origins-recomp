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

// Function: sub_002EBC98
// Address: 0x2ebc98 - 0x2ebcb8
void sub_002EBC98_0x2ebc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBC98_0x2ebc98");
#endif

    ctx->pc = 0x2ebc98u;

    // 0x2ebc98: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ebc98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc9c: 0xc44006a0  lwc1        $f0, 0x6A0($v0)
    ctx->pc = 0x2ebc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ebca0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ebca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ebca4: 0xc78182dc  lwc1        $f1, -0x7D24($gp)
    ctx->pc = 0x2ebca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ebca8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ebca8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x2ebcac: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBCACu;
        // 0x2ebcb0: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBCB4u;
    // 0x2ebcb4: 0x0  nop
    ctx->pc = 0x2ebcb4u;
    // NOP
    ctx->pc = 0x2ebcb8u;
}
