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

// Function: sub_00202118
// Address: 0x202118 - 0x202140
void sub_00202118_0x202118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202118_0x202118");
#endif

    ctx->pc = 0x202118u;

    // 0x202118: 0x3e00008  jr          $ra
    ctx->pc = 0x202118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202118u;
        // 0x20211c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202120u;
    // 0x202120: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x202120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x202124: 0x0  nop
    ctx->pc = 0x202124u;
    // NOP
    // 0x202128: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x202128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20212c: 0x0  nop
    ctx->pc = 0x20212cu;
    // NOP
    // 0x202130: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x202130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x202134: 0x0  nop
    ctx->pc = 0x202134u;
    // NOP
    // 0x202138: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x202138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20213c: 0x0  nop
    ctx->pc = 0x20213cu;
    // NOP
    ctx->pc = 0x202140u;
}
