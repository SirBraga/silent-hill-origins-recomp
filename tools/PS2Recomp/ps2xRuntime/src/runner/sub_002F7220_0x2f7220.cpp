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

// Function: sub_002F7220
// Address: 0x2f7220 - 0x2f7248
void sub_002F7220_0x2f7220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7220_0x2f7220");
#endif

    ctx->pc = 0x2f7220u;

    // 0x2f7220: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2f7220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2f7224: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2f7224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2f7228: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2f7228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f722c: 0x246314c8  addiu       $v1, $v1, 0x14C8
    ctx->pc = 0x2f722cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5320));
    // 0x2f7230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f7230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7234: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x2f7234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f7238: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2f7238u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f723c: 0xace5001c  sw          $a1, 0x1C($a3)
    ctx->pc = 0x2f723cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 5));
    // 0x2f7240: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7240u;
        // 0x2f7244: 0xac660020  sw          $a2, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7248u;
}
