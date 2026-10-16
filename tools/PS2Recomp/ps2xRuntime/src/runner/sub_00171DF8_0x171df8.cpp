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

// Function: sub_00171DF8
// Address: 0x171df8 - 0x171e40
void sub_00171DF8_0x171df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171DF8_0x171df8");
#endif

    switch (ctx->pc) {
        case 0x171e2cu: goto label_171e2c;
        default: break;
    }

    ctx->pc = 0x171df8u;

    // 0x171df8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171dfc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x171dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x171e00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x171e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x171e04: 0x24425800  addiu       $v0, $v0, 0x5800
    ctx->pc = 0x171e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22528));
    // 0x171e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171e0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x171e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171e10: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x171e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x171e14: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x171e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x171e18: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x171e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x171e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171e20: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x171e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x171e24: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x171E24u;
    SET_GPR_U32(ctx, 31, 0x171E2Cu);
    ctx->pc = 0x171E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171E24u;
    // 0x171e28: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x171E24u, 0x171E2Cu)) {
        return;
    }
    ctx->pc = 0x171E2Cu;
label_171e2c:
    // 0x171e2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x171e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171e30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171e34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x171e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171e38: 0x3e00008  jr          $ra
    ctx->pc = 0x171E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E38u;
        // 0x171e3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171E40u;
}
