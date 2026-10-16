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

// Function: sub_00202140
// Address: 0x202140 - 0x202160
void sub_00202140_0x202140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202140_0x202140");
#endif

    ctx->pc = 0x202140u;

    // 0x202140: 0x3e00008  jr          $ra
    ctx->pc = 0x202140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202140u;
        // 0x202144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202148u;
    // 0x202148: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x202148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20214c: 0x0  nop
    ctx->pc = 0x20214cu;
    // NOP
    // 0x202150: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x202150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x202154: 0x0  nop
    ctx->pc = 0x202154u;
    // NOP
    // 0x202158: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x202158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20215c: 0x0  nop
    ctx->pc = 0x20215cu;
    // NOP
    ctx->pc = 0x202160u;
}
