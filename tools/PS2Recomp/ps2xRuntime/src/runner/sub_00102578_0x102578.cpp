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

// Function: sub_00102578
// Address: 0x102578 - 0x102598
void sub_00102578_0x102578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102578_0x102578");
#endif

    ctx->pc = 0x102578u;

    // 0x102578: 0x8c820198  lw          $v0, 0x198($a0)
    ctx->pc = 0x102578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    // 0x10257c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10257cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102580: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x102580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102584: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x102584u;
    {
        const bool branch_taken_0x102584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102584) {
            ctx->pc = 0x102588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102584u;
            // 0x102588: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10258Cu;
            goto label_10258c;
        }
    }
    ctx->pc = 0x10258Cu;
label_10258c:
    // 0x10258c: 0x3e00008  jr          $ra
    ctx->pc = 0x10258Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10258Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102594u;
    // 0x102594: 0x0  nop
    ctx->pc = 0x102594u;
    // NOP
    ctx->pc = 0x102598u;
}
