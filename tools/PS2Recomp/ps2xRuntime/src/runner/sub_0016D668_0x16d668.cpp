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

// Function: sub_0016D668
// Address: 0x16d668 - 0x16d688
void sub_0016D668_0x16d668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D668_0x16d668");
#endif

    switch (ctx->pc) {
        case 0x16d67cu: goto label_16d67c;
        default: break;
    }

    ctx->pc = 0x16d668u;

    // 0x16d668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16d668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d66c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d674: 0xc05b506  jal         func_16D418
    ctx->pc = 0x16D674u;
    SET_GPR_U32(ctx, 31, 0x16D67Cu);
    ctx->pc = 0x16D678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D674u;
    // 0x16d678: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16D418u, 0x16D674u, 0x16D67Cu)) {
        return;
    }
    ctx->pc = 0x16D67Cu;
label_16d67c:
    // 0x16d67c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d680: 0x3e00008  jr          $ra
    ctx->pc = 0x16D680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D680u;
        // 0x16d684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D688u;
}
