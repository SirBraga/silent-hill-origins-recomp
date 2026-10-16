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

// Function: sub_001F9A58
// Address: 0x1f9a58 - 0x1f9a70
void sub_001F9A58_0x1f9a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9A58_0x1f9a58");
#endif

    ctx->pc = 0x1f9a58u;

    // 0x1f9a58: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f9a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1f9a5c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f9a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9a60: 0x24632ce0  addiu       $v1, $v1, 0x2CE0
    ctx->pc = 0x1f9a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11488));
    // 0x1f9a64: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A64u;
        // 0x1f9a68: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9A6Cu;
    // 0x1f9a6c: 0x0  nop
    ctx->pc = 0x1f9a6cu;
    // NOP
    ctx->pc = 0x1f9a70u;
}
