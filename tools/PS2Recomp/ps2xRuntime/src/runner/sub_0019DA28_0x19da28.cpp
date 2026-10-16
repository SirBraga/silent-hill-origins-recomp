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

// Function: sub_0019DA28
// Address: 0x19da28 - 0x19da58
void sub_0019DA28_0x19da28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DA28_0x19da28");
#endif

    switch (ctx->pc) {
        case 0x19da48u: goto label_19da48;
        default: break;
    }

    ctx->pc = 0x19da28u;

    // 0x19da28: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x19da28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x19da2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19da2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19da30: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x19da30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x19da34: 0x8c449078  lw          $a0, -0x6F88($v0)
    ctx->pc = 0x19da34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339078u));
    // 0x19da38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19da38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19da3c: 0x24a5d9c0  addiu       $a1, $a1, -0x2640
    ctx->pc = 0x19da3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957504));
    // 0x19da40: 0xc08ab16  jal         func_22AC58
    ctx->pc = 0x19DA40u;
    SET_GPR_U32(ctx, 31, 0x19DA48u);
    ctx->pc = 0x19DA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DA40u;
    // 0x19da44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AC58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AC58u, 0x19DA40u, 0x19DA48u)) {
        return;
    }
    ctx->pc = 0x19DA48u;
label_19da48:
    // 0x19da48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19da48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19da4c: 0x3e00008  jr          $ra
    ctx->pc = 0x19DA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA4Cu;
        // 0x19da50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DA54u;
    // 0x19da54: 0x0  nop
    ctx->pc = 0x19da54u;
    // NOP
    ctx->pc = 0x19da58u;
}
