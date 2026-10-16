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

// Function: sub_001C47D0
// Address: 0x1c47d0 - 0x1c4828
void sub_001C47D0_0x1c47d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C47D0_0x1c47d0");
#endif

    switch (ctx->pc) {
        case 0x1c4804u: goto label_1c4804;
        case 0x1c4814u: goto label_1c4814;
        default: break;
    }

    ctx->pc = 0x1c47d0u;

    // 0x1c47d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c47d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c47d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c47d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c47d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c47dc: 0x2442e5b0  addiu       $v0, $v0, -0x1A50
    ctx->pc = 0x1c47dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960560));
    // 0x1c47e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c47e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c47e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c47e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c47e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c47e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c47ec: 0xae020258  sw          $v0, 0x258($s0)
    ctx->pc = 0x1c47ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
    // 0x1c47f0: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1c47f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c47f4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C47F4u;
    {
        const bool branch_taken_0x1c47f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C47F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C47F4u;
        // 0x1c47f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c47f4) {
            ctx->pc = 0x1C4808u;
            goto label_1c4808;
        }
    }
    ctx->pc = 0x1C47FCu;
    // 0x1c47fc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1C47FCu;
    SET_GPR_U32(ctx, 31, 0x1C4804u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1C47FCu, 0x1C4804u)) {
        return;
    }
    ctx->pc = 0x1C4804u;
label_1c4804:
    // 0x1c4804: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1c4804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
label_1c4808:
    // 0x1c4808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c480c: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1C480Cu;
    SET_GPR_U32(ctx, 31, 0x1C4814u);
    ctx->pc = 0x1C4810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C480Cu;
    // 0x1c4810: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1C480Cu, 0x1C4814u)) {
        return;
    }
    ctx->pc = 0x1C4814u;
label_1c4814:
    // 0x1c4814: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c4814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4818: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c4818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c481c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c481cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4820: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4820u;
        // 0x1c4824: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4828u;
}
