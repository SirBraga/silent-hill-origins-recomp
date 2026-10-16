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

// Function: sub_001DCCD8
// Address: 0x1dccd8 - 0x1dcd18
void sub_001DCCD8_0x1dccd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCCD8_0x1dccd8");
#endif

    switch (ctx->pc) {
        case 0x1dccf4u: goto label_1dccf4;
        default: break;
    }

    ctx->pc = 0x1dccd8u;

    // 0x1dccd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dccd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dccdc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dccdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1dcce0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dcce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dcce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dcce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dcce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dccec: 0xc07810e  jal         func_1E0438
    ctx->pc = 0x1DCCECu;
    SET_GPR_U32(ctx, 31, 0x1DCCF4u);
    ctx->pc = 0x1DCCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCCECu;
    // 0x1dccf0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E0438u, 0x1DCCECu, 0x1DCCF4u)) {
        return;
    }
    ctx->pc = 0x1DCCF4u;
label_1dccf4:
    // 0x1dccf4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DCCF4u;
    {
        const bool branch_taken_0x1dccf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCF4u;
        // 0x1dccf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dccf4) {
            ctx->pc = 0x1DCD00u;
            goto label_1dcd00;
        }
    }
    ctx->pc = 0x1DCCFCu;
    // 0x1dccfc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1dccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1dcd00:
    // 0x1dcd00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dcd00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dcd04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcd08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dcd08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dcd0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dcd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcd10: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD10u;
        // 0x1dcd14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCD18u;
}
