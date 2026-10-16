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

// Function: sub_0029BE28
// Address: 0x29be28 - 0x29be50
void sub_0029BE28_0x29be28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BE28_0x29be28");
#endif

    switch (ctx->pc) {
        case 0x29be40u: goto label_29be40;
        default: break;
    }

    ctx->pc = 0x29be28u;

    // 0x29be28: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29be28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29be2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29be30: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x29be30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29be34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29be38: 0xc0a7bd0  jal         func_29EF40
    ctx->pc = 0x29BE38u;
    SET_GPR_U32(ctx, 31, 0x29BE40u);
    ctx->pc = 0x29BE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE38u;
    // 0x29be3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EF40u, 0x29BE38u, 0x29BE40u)) {
        return;
    }
    ctx->pc = 0x29BE40u;
label_29be40:
    // 0x29be40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29be40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29be44: 0x3e00008  jr          $ra
    ctx->pc = 0x29BE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE44u;
        // 0x29be48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BE4Cu;
    // 0x29be4c: 0x0  nop
    ctx->pc = 0x29be4cu;
    // NOP
    ctx->pc = 0x29be50u;
}
