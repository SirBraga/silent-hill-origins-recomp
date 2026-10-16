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

// Function: sub_001F7E30
// Address: 0x1f7e30 - 0x1f7e60
void sub_001F7E30_0x1f7e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7E30_0x1f7e30");
#endif

    switch (ctx->pc) {
        case 0x1f7e50u: goto label_1f7e50;
        default: break;
    }

    ctx->pc = 0x1f7e30u;

    // 0x1f7e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f7e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f7e34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1f7e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1f7e38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f7e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f7e3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f7e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e40: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1f7e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1f7e44: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1f7e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1f7e48: 0xc07dc7e  jal         func_1F71F8
    ctx->pc = 0x1F7E48u;
    SET_GPR_U32(ctx, 31, 0x1F7E50u);
    ctx->pc = 0x1F7E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7E48u;
    // 0x1f7e4c: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F71F8u, 0x1F7E48u, 0x1F7E50u)) {
        return;
    }
    ctx->pc = 0x1F7E50u;
label_1f7e50:
    // 0x1f7e50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f7e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7e54: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E54u;
        // 0x1f7e58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7E5Cu;
    // 0x1f7e5c: 0x0  nop
    ctx->pc = 0x1f7e5cu;
    // NOP
    ctx->pc = 0x1f7e60u;
}
