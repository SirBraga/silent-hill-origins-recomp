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

// Function: sub_00194D78
// Address: 0x194d78 - 0x194d98
void sub_00194D78_0x194d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194D78_0x194d78");
#endif

    switch (ctx->pc) {
        case 0x194d8cu: goto label_194d8c;
        default: break;
    }

    ctx->pc = 0x194d78u;

    // 0x194d78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x194d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x194d7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x194d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194d84: 0xc06531a  jal         func_194C68
    ctx->pc = 0x194D84u;
    SET_GPR_U32(ctx, 31, 0x194D8Cu);
    ctx->pc = 0x194D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D84u;
    // 0x194d88: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x194C68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x194C68u, 0x194D84u, 0x194D8Cu)) {
        return;
    }
    ctx->pc = 0x194D8Cu;
label_194d8c:
    // 0x194d8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194d90: 0x3e00008  jr          $ra
    ctx->pc = 0x194D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D90u;
        // 0x194d94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194D98u;
}
