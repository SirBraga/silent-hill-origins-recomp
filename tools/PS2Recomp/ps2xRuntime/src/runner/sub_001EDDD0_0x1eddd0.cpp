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

// Function: sub_001EDDD0
// Address: 0x1eddd0 - 0x1ede08
void sub_001EDDD0_0x1eddd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDDD0_0x1eddd0");
#endif

    ctx->pc = 0x1eddd0u;

    // 0x1eddd0: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1eddd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1eddd4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1eddd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eddd8: 0x8cc5e7bc  lw          $a1, -0x1844($a2)
    ctx->pc = 0x1eddd8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x33E7BCu));
    // 0x1edddc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1edddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edde0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1edde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1edde4: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x1edde4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x1edde8: 0x8cc3e7bc  lw          $v1, -0x1844($a2)
    ctx->pc = 0x1edde8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E7BCu));
    // 0x1eddec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1eddecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1eddf0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1eddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1eddf4: 0x8cc5e7bc  lw          $a1, -0x1844($a2)
    ctx->pc = 0x1eddf4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x33E7BCu));
    // 0x1eddf8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1eddf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1eddfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDFCu;
        // 0x1ede00: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDE04u;
    // 0x1ede04: 0x0  nop
    ctx->pc = 0x1ede04u;
    // NOP
    ctx->pc = 0x1ede08u;
}
