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

// Function: sub_002E3E48
// Address: 0x2e3e48 - 0x2e3e90
void sub_002E3E48_0x2e3e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3E48_0x2e3e48");
#endif

    switch (ctx->pc) {
        case 0x2e3e68u: goto label_2e3e68;
        case 0x2e3e74u: goto label_2e3e74;
        default: break;
    }

    ctx->pc = 0x2e3e48u;

    // 0x2e3e48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e3e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e3e4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e3e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2e3e50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e3e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e3e54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e3e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3e58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e3e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3e5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3e60: 0xc0b7d4e  jal         func_2DF538
    ctx->pc = 0x2E3E60u;
    SET_GPR_U32(ctx, 31, 0x2E3E68u);
    ctx->pc = 0x2E3E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3E60u;
    // 0x2e3e64: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF538u, 0x2E3E60u, 0x2E3E68u)) {
        return;
    }
    ctx->pc = 0x2E3E68u;
label_2e3e68:
    // 0x2e3e68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e3e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3e6c: 0xc0b7d62  jal         func_2DF588
    ctx->pc = 0x2E3E6Cu;
    SET_GPR_U32(ctx, 31, 0x2E3E74u);
    ctx->pc = 0x2E3E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3E6Cu;
    // 0x2e3e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF588u, 0x2E3E6Cu, 0x2E3E74u)) {
        return;
    }
    ctx->pc = 0x2E3E74u;
label_2e3e74:
    // 0x2e3e74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e3e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3e78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e3e78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3e7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e3e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3e84: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E84u;
        // 0x2e3e88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3E8Cu;
    // 0x2e3e8c: 0x0  nop
    ctx->pc = 0x2e3e8cu;
    // NOP
    ctx->pc = 0x2e3e90u;
}
