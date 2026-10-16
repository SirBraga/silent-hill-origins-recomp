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

// Function: sub_00247788
// Address: 0x247788 - 0x2477b0
void sub_00247788_0x247788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247788_0x247788");
#endif

    ctx->pc = 0x247788u;

    // 0x247788: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x247788u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x24778c: 0x8ce7416c  lw          $a3, 0x416C($a3)
    ctx->pc = 0x24778cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x247790: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x247790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247794: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x247794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x247798: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x247798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x24779c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x24779cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2477a0: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x2477a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2477a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2477A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2477A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2477A4u;
        // 0x2477a8: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2477A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2477ACu;
    // 0x2477ac: 0x0  nop
    ctx->pc = 0x2477acu;
    // NOP
    ctx->pc = 0x2477b0u;
}
