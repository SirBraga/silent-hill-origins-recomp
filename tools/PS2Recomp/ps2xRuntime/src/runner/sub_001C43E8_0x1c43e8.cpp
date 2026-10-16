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

// Function: sub_001C43E8
// Address: 0x1c43e8 - 0x1c4408
void sub_001C43E8_0x1c43e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C43E8_0x1c43e8");
#endif

    ctx->pc = 0x1c43e8u;

    // 0x1c43e8: 0xc48102ec  lwc1        $f1, 0x2EC($a0)
    ctx->pc = 0x1c43e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c43ec: 0xc48002f0  lwc1        $f0, 0x2F0($a0)
    ctx->pc = 0x1c43ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c43f0: 0x8c8202e4  lw          $v0, 0x2E4($a0)
    ctx->pc = 0x1c43f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 740)));
    // 0x1c43f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c43f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c43f8: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1c43f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1c43fc: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x1c43fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x1c4400: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4400u;
        // 0x1c4404: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4408u;
}
