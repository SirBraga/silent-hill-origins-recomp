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

// Function: sub_001DF9B0
// Address: 0x1df9b0 - 0x1dfa18
void sub_001DF9B0_0x1df9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF9B0_0x1df9b0");
#endif

    switch (ctx->pc) {
        case 0x1df9f4u: goto label_1df9f4;
        default: break;
    }

    ctx->pc = 0x1df9b0u;

    // 0x1df9b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df9b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1df9b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df9b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1df9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1df9bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df9c0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DF9C0u;
    {
        const bool branch_taken_0x1df9c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9C0u;
        // 0x1df9c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9c0) {
            ctx->pc = 0x1DF9F4u;
            goto label_1df9f4;
        }
    }
    ctx->pc = 0x1DF9C8u;
    // 0x1df9c8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1df9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1df9cc: 0x8c43e6c8  lw          $v1, -0x1938($v0)
    ctx->pc = 0x1df9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E6C8u));
    // 0x1df9d0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1df9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1df9d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1df9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1df9d8: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DF9D8u;
    {
        const bool branch_taken_0x1df9d8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1DF9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9D8u;
        // 0x1df9dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9d8) {
            ctx->pc = 0x1DF9E4u;
            goto label_1df9e4;
        }
    }
    ctx->pc = 0x1DF9E0u;
    // 0x1df9e0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1df9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1df9e4:
    // 0x1df9e4: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1df9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1df9e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df9ec: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1DF9ECu;
    SET_GPR_U32(ctx, 31, 0x1DF9F4u);
    ctx->pc = 0x1DF9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF9ECu;
    // 0x1df9f0: 0x24a5f9b0  addiu       $a1, $a1, -0x650 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2266F0u, 0x1DF9ECu, 0x1DF9F4u)) {
        return;
    }
    ctx->pc = 0x1DF9F4u;
label_1df9f4:
    // 0x1df9f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1df9f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df9f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df9fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1df9fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfa00: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA00u;
        // 0x1dfa04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFA08u;
    // 0x1dfa08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1dfa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dfa0c: 0x0  nop
    ctx->pc = 0x1dfa0cu;
    // NOP
    // 0x1dfa10: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1dfa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1dfa14: 0x0  nop
    ctx->pc = 0x1dfa14u;
    // NOP
    ctx->pc = 0x1dfa18u;
}
