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

// Function: sub_0016F978
// Address: 0x16f978 - 0x16f998
void sub_0016F978_0x16f978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F978_0x16f978");
#endif

    switch (ctx->pc) {
        case 0x16f98cu: goto label_16f98c;
        default: break;
    }

    ctx->pc = 0x16f978u;

    // 0x16f978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16f97c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16f97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f984: 0xc05bde4  jal         func_16F790
    ctx->pc = 0x16F984u;
    SET_GPR_U32(ctx, 31, 0x16F98Cu);
    ctx->pc = 0x16F988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F984u;
    // 0x16f988: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F790u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16F790u, 0x16F984u, 0x16F98Cu)) {
        return;
    }
    ctx->pc = 0x16F98Cu;
label_16f98c:
    // 0x16f98c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f990: 0x3e00008  jr          $ra
    ctx->pc = 0x16F990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F990u;
        // 0x16f994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F998u;
}
