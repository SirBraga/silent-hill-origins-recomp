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

// Function: sub_0029EEC8
// Address: 0x29eec8 - 0x29eef8
void sub_0029EEC8_0x29eec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EEC8_0x29eec8");
#endif

    switch (ctx->pc) {
        case 0x29eee8u: goto label_29eee8;
        default: break;
    }

    ctx->pc = 0x29eec8u;

    // 0x29eec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29eec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29eecc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x29eeccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29eed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29eed4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29eed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29eed8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29EED8u;
    {
        const bool branch_taken_0x29eed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EED8u;
        // 0x29eedc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eed8) {
            ctx->pc = 0x29EEE8u;
            goto label_29eee8;
        }
    }
    ctx->pc = 0x29EEE0u;
    // 0x29eee0: 0xc0a744c  jal         func_29D130
    ctx->pc = 0x29EEE0u;
    SET_GPR_U32(ctx, 31, 0x29EEE8u);
    ctx->pc = 0x29EEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EEE0u;
    // 0x29eee4: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29D130u, 0x29EEE0u, 0x29EEE8u)) {
        return;
    }
    ctx->pc = 0x29EEE8u;
label_29eee8:
    // 0x29eee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29eee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29eeec: 0x3e00008  jr          $ra
    ctx->pc = 0x29EEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EEECu;
        // 0x29eef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EEF4u;
    // 0x29eef4: 0x0  nop
    ctx->pc = 0x29eef4u;
    // NOP
    ctx->pc = 0x29eef8u;
}
