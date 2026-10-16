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

// Function: sub_0025EC60
// Address: 0x25ec60 - 0x25ec78
void sub_0025EC60_0x25ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EC60_0x25ec60");
#endif

    ctx->pc = 0x25ec60u;

    // 0x25ec60: 0x90820062  lbu         $v0, 0x62($a0)
    ctx->pc = 0x25ec60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 98)));
    // 0x25ec64: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x25ec64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x25ec68: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x25ec68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x25ec6c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x25ec6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x25ec70: 0x3e00008  jr          $ra
    ctx->pc = 0x25EC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC70u;
        // 0x25ec74: 0xa4820062  sh          $v0, 0x62($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 98), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EC78u;
}
