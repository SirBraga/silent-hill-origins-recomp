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

// Function: sub_001AA358
// Address: 0x1aa358 - 0x1aa380
void sub_001AA358_0x1aa358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA358_0x1aa358");
#endif

    switch (ctx->pc) {
        case 0x1aa370u: goto label_1aa370;
        default: break;
    }

    ctx->pc = 0x1aa358u;

    // 0x1aa358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa35c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1aa35cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1aa360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa364: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1aa364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aa368: 0xc06a7ea  jal         func_1A9FA8
    ctx->pc = 0x1AA368u;
    SET_GPR_U32(ctx, 31, 0x1AA370u);
    ctx->pc = 0x1AA36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA368u;
    // 0x1aa36c: 0x24848420  addiu       $a0, $a0, -0x7BE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9FA8u, 0x1AA368u, 0x1AA370u)) {
        return;
    }
    ctx->pc = 0x1AA370u;
label_1aa370:
    // 0x1aa370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa374: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA374u;
        // 0x1aa378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA37Cu;
    // 0x1aa37c: 0x0  nop
    ctx->pc = 0x1aa37cu;
    // NOP
    ctx->pc = 0x1aa380u;
}
