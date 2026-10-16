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

// Function: sub_00170D78
// Address: 0x170d78 - 0x170d98
void sub_00170D78_0x170d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170D78_0x170d78");
#endif

    switch (ctx->pc) {
        case 0x170d8cu: goto label_170d8c;
        default: break;
    }

    ctx->pc = 0x170d78u;

    // 0x170d78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170d7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x170d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170d84: 0xc05c250  jal         func_170940
    ctx->pc = 0x170D84u;
    SET_GPR_U32(ctx, 31, 0x170D8Cu);
    ctx->pc = 0x170D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170D84u;
    // 0x170d88: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x170940u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x170940u, 0x170D84u, 0x170D8Cu)) {
        return;
    }
    ctx->pc = 0x170D8Cu;
label_170d8c:
    // 0x170d8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170d90: 0x3e00008  jr          $ra
    ctx->pc = 0x170D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D90u;
        // 0x170d94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170D98u;
}
