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

// Function: sub_0013D700
// Address: 0x13d700 - 0x13d720
void sub_0013D700_0x13d700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D700_0x13d700");
#endif

    switch (ctx->pc) {
        case 0x13d714u: goto label_13d714;
        default: break;
    }

    ctx->pc = 0x13d700u;

    // 0x13d700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13d700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d704: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13d704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d70c: 0xc04f504  jal         func_13D410
    ctx->pc = 0x13D70Cu;
    SET_GPR_U32(ctx, 31, 0x13D714u);
    ctx->pc = 0x13D710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D70Cu;
    // 0x13d710: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D410u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13D410u, 0x13D70Cu, 0x13D714u)) {
        return;
    }
    ctx->pc = 0x13D714u;
label_13d714:
    // 0x13d714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d718: 0x3e00008  jr          $ra
    ctx->pc = 0x13D718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D718u;
        // 0x13d71c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D720u;
}
