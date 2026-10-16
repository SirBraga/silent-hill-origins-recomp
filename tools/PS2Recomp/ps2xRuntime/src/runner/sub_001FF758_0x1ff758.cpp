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

// Function: sub_001FF758
// Address: 0x1ff758 - 0x1ff778
void sub_001FF758_0x1ff758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF758_0x1ff758");
#endif

    ctx->pc = 0x1ff758u;

    // 0x1ff758: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x1ff758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x1ff75c: 0x8c460144  lw          $a2, 0x144($v0)
    ctx->pc = 0x1ff75cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5C0144u));
    // 0x1ff760: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ff760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff764: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1ff764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ff768: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1ff768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1ff76c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ff76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff770: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF770u;
        // 0x1ff774: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF778u;
}
