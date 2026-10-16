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

// Function: sub_0013BA18
// Address: 0x13ba18 - 0x13ba58
void sub_0013BA18_0x13ba18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BA18_0x13ba18");
#endif

    switch (ctx->pc) {
        case 0x13ba34u: goto label_13ba34;
        case 0x13ba40u: goto label_13ba40;
        default: break;
    }

    ctx->pc = 0x13ba18u;

    // 0x13ba18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ba18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13ba1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13ba1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13ba20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13ba20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13ba24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13ba24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13ba28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ba2c: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x13BA2Cu;
    SET_GPR_U32(ctx, 31, 0x13BA34u);
    ctx->pc = 0x13BA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BA2Cu;
    // 0x13ba30: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x13BA2Cu, 0x13BA34u)) {
        return;
    }
    ctx->pc = 0x13BA34u;
label_13ba34:
    // 0x13ba34: 0x2604004c  addiu       $a0, $s0, 0x4C
    ctx->pc = 0x13ba34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x13ba38: 0xc041ec6  jal         func_107B18
    ctx->pc = 0x13BA38u;
    SET_GPR_U32(ctx, 31, 0x13BA40u);
    ctx->pc = 0x13BA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BA38u;
    // 0x13ba3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107B18u, 0x13BA38u, 0x13BA40u)) {
        return;
    }
    ctx->pc = 0x13BA40u;
label_13ba40:
    // 0x13ba40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13ba40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ba44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ba44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ba48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ba48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ba4c: 0x3e00008  jr          $ra
    ctx->pc = 0x13BA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA4Cu;
        // 0x13ba50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BA54u;
    // 0x13ba54: 0x0  nop
    ctx->pc = 0x13ba54u;
    // NOP
    ctx->pc = 0x13ba58u;
}
