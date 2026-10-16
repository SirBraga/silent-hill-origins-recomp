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

// Function: sub_0023A4A0
// Address: 0x23a4a0 - 0x23a4b8
void sub_0023A4A0_0x23a4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A4A0_0x23a4a0");
#endif

    switch (ctx->pc) {
        case 0x23a4a4u: goto label_23a4a4;
        default: break;
    }

    ctx->pc = 0x23a4a0u;

    // 0x23a4a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23a4a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a4a4:
    // 0x23a4a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a4a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x23a4a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x23A4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4ACu;
        // 0x23a4b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A4B4u;
    // 0x23a4b4: 0x0  nop
    ctx->pc = 0x23a4b4u;
    // NOP
    ctx->pc = 0x23a4b8u;
}
