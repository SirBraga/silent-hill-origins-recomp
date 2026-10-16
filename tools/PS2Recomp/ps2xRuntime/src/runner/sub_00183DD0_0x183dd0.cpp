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

// Function: sub_00183DD0
// Address: 0x183dd0 - 0x183df0
void sub_00183DD0_0x183dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183DD0_0x183dd0");
#endif

    ctx->pc = 0x183dd0u;

    // 0x183dd0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x183dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183dd4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x183DD4u;
    {
        const bool branch_taken_0x183dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x183dd4) {
            ctx->pc = 0x183DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183DD4u;
            // 0x183dd8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183DDCu;
            goto label_183ddc;
        }
    }
    ctx->pc = 0x183DDCu;
label_183ddc:
    // 0x183ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x183DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183DE4u;
    // 0x183de4: 0x0  nop
    ctx->pc = 0x183de4u;
    // NOP
    // 0x183de8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x183de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183dec: 0x0  nop
    ctx->pc = 0x183decu;
    // NOP
    ctx->pc = 0x183df0u;
}
