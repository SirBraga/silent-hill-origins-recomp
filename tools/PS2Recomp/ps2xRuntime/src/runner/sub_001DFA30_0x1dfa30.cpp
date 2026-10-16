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

// Function: sub_001DFA30
// Address: 0x1dfa30 - 0x1dfa78
void sub_001DFA30_0x1dfa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFA30_0x1dfa30");
#endif

    switch (ctx->pc) {
        case 0x1dfa60u: goto label_1dfa60;
        case 0x1dfa68u: goto label_1dfa68;
        default: break;
    }

    ctx->pc = 0x1dfa30u;

    // 0x1dfa30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dfa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dfa34: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1dfa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1dfa38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dfa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dfa3c: 0x8c43e6d0  lw          $v1, -0x1930($v0)
    ctx->pc = 0x1dfa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E6D0u));
    // 0x1dfa40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dfa40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfa44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dfa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dfa48: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1dfa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1dfa4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dfa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dfa50: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DFA50u;
    {
        const bool branch_taken_0x1dfa50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfa50) {
            ctx->pc = 0x1DFA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFA50u;
            // 0x1dfa54: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFA6Cu;
            goto label_1dfa6c;
        }
    }
    ctx->pc = 0x1DFA58u;
    // 0x1dfa58: 0xc095988  jal         func_256620
    ctx->pc = 0x1DFA58u;
    SET_GPR_U32(ctx, 31, 0x1DFA60u);
    ctx->pc = 0x1DFA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFA58u;
    // 0x1dfa5c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256620u, 0x1DFA58u, 0x1DFA60u)) {
        return;
    }
    ctx->pc = 0x1DFA60u;
label_1dfa60:
    // 0x1dfa60: 0xc09599c  jal         func_256670
    ctx->pc = 0x1DFA60u;
    SET_GPR_U32(ctx, 31, 0x1DFA68u);
    ctx->pc = 0x1DFA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFA60u;
    // 0x1dfa64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256670u, 0x1DFA60u, 0x1DFA68u)) {
        return;
    }
    ctx->pc = 0x1DFA68u;
label_1dfa68:
    // 0x1dfa68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dfa68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dfa6c:
    // 0x1dfa6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dfa6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfa70: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA70u;
        // 0x1dfa74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFA78u;
}
