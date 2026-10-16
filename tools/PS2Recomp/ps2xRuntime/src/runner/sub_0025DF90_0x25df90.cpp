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

// Function: sub_0025DF90
// Address: 0x25df90 - 0x25dfb0
void sub_0025DF90_0x25df90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DF90_0x25df90");
#endif

    switch (ctx->pc) {
        case 0x25dfa0u: goto label_25dfa0;
        default: break;
    }

    ctx->pc = 0x25df90u;

    // 0x25df90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25df90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25df94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25df94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25df98: 0xc097cea  jal         func_25F3A8
    ctx->pc = 0x25DF98u;
    SET_GPR_U32(ctx, 31, 0x25DFA0u);
    ctx->pc = 0x25DF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DF98u;
    // 0x25df9c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F3A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25F3A8u, 0x25DF98u, 0x25DFA0u)) {
        return;
    }
    ctx->pc = 0x25DFA0u;
label_25dfa0:
    // 0x25dfa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25dfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25dfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x25DFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DFA4u;
        // 0x25dfa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DFACu;
    // 0x25dfac: 0x0  nop
    ctx->pc = 0x25dfacu;
    // NOP
    ctx->pc = 0x25dfb0u;
}
