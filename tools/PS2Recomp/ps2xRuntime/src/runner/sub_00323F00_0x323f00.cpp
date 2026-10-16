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

// Function: sub_00323F00
// Address: 0x323f00 - 0x323f18
void sub_00323F00_0x323f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323F00_0x323f00");
#endif

    ctx->pc = 0x323f00u;

    // 0x323f00: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x323f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x323f04: 0x2463a018  addiu       $v1, $v1, -0x5FE8
    ctx->pc = 0x323f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942744));
    // 0x323f08: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x323f08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x72A02Cu));
    // 0x323f0c: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x323f0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72A030u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72A030u, _value); } while (0);
    // 0x323f10: 0x3e00008  jr          $ra
    ctx->pc = 0x323F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323F10u;
        // 0x323f14: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323F18u;
}
