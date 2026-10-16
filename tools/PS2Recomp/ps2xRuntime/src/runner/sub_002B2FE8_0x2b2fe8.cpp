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

// Function: sub_002B2FE8
// Address: 0x2b2fe8 - 0x2b3000
void sub_002B2FE8_0x2b2fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2FE8_0x2b2fe8");
#endif

    ctx->pc = 0x2b2fe8u;

    // 0x2b2fe8: 0xac850034  sw          $a1, 0x34($a0)
    ctx->pc = 0x2b2fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
    // 0x2b2fec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b2fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2ff0: 0xac860030  sw          $a2, 0x30($a0)
    ctx->pc = 0x2b2ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
    // 0x2b2ff4: 0xac870038  sw          $a3, 0x38($a0)
    ctx->pc = 0x2b2ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 7));
    // 0x2b2ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FF8u;
        // 0x2b2ffc: 0xac88003c  sw          $t0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3000u;
}
