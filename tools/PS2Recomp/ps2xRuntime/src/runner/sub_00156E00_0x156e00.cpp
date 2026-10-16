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

// Function: sub_00156E00
// Address: 0x156e00 - 0x156e20
void sub_00156E00_0x156e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156E00_0x156e00");
#endif

    switch (ctx->pc) {
        case 0x156e14u: goto label_156e14;
        default: break;
    }

    ctx->pc = 0x156e00u;

    // 0x156e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x156e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x156e04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x156e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156e0c: 0xc055a82  jal         func_156A08
    ctx->pc = 0x156E0Cu;
    SET_GPR_U32(ctx, 31, 0x156E14u);
    ctx->pc = 0x156E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156E0Cu;
    // 0x156e10: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x156A08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x156A08u, 0x156E0Cu, 0x156E14u)) {
        return;
    }
    ctx->pc = 0x156E14u;
label_156e14:
    // 0x156e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156e18: 0x3e00008  jr          $ra
    ctx->pc = 0x156E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E18u;
        // 0x156e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156E20u;
}
