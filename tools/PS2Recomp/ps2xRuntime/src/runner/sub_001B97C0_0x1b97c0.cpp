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

// Function: sub_001B97C0
// Address: 0x1b97c0 - 0x1b9818
void sub_001B97C0_0x1b97c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B97C0_0x1b97c0");
#endif

    switch (ctx->pc) {
        case 0x1b97f4u: goto label_1b97f4;
        case 0x1b9804u: goto label_1b9804;
        default: break;
    }

    ctx->pc = 0x1b97c0u;

    // 0x1b97c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b97c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b97c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1b97c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1b97c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b97c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b97cc: 0x2442d058  addiu       $v0, $v0, -0x2FA8
    ctx->pc = 0x1b97ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955096));
    // 0x1b97d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b97d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b97d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b97d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b97d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b97d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b97dc: 0xae020258  sw          $v0, 0x258($s0)
    ctx->pc = 0x1b97dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
    // 0x1b97e0: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1b97e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1b97e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B97E4u;
    {
        const bool branch_taken_0x1b97e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B97E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B97E4u;
        // 0x1b97e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b97e4) {
            ctx->pc = 0x1B97F8u;
            goto label_1b97f8;
        }
    }
    ctx->pc = 0x1B97ECu;
    // 0x1b97ec: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B97ECu;
    SET_GPR_U32(ctx, 31, 0x1B97F4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B97ECu, 0x1B97F4u)) {
        return;
    }
    ctx->pc = 0x1B97F4u;
label_1b97f4:
    // 0x1b97f4: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1b97f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
label_1b97f8:
    // 0x1b97f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b97f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b97fc: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1B97FCu;
    SET_GPR_U32(ctx, 31, 0x1B9804u);
    ctx->pc = 0x1B9800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B97FCu;
    // 0x1b9800: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1B97FCu, 0x1B9804u)) {
        return;
    }
    ctx->pc = 0x1B9804u;
label_1b9804:
    // 0x1b9804: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b9804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b9808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b980c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b980cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9810: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9810u;
        // 0x1b9814: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9818u;
}
