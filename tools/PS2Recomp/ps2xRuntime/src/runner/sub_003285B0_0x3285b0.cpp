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

// Function: sub_003285B0
// Address: 0x3285b0 - 0x3285e0
void sub_003285B0_0x3285b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003285B0_0x3285b0");
#endif

    switch (ctx->pc) {
        case 0x3285c8u: goto label_3285c8;
        default: break;
    }

    ctx->pc = 0x3285b0u;

    // 0x3285b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3285b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3285b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3285b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3285b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3285b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3285bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3285c0: 0xc0c85d4  jal         func_321750
    ctx->pc = 0x3285C0u;
    SET_GPR_U32(ctx, 31, 0x3285C8u);
    ctx->pc = 0x3285C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3285C0u;
    // 0x3285c4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321750u, 0x3285C0u, 0x3285C8u)) {
        return;
    }
    ctx->pc = 0x3285C8u;
label_3285c8:
    // 0x3285c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3285c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3285cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3285CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3285D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285CCu;
        // 0x3285d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3285CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3285D4u;
    // 0x3285d4: 0x0  nop
    ctx->pc = 0x3285d4u;
    // NOP
    // 0x3285d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3285d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3285dc: 0x0  nop
    ctx->pc = 0x3285dcu;
    // NOP
    ctx->pc = 0x3285e0u;
}
