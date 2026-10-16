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

// Function: sub_001DE4D8
// Address: 0x1de4d8 - 0x1de530
void sub_001DE4D8_0x1de4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE4D8_0x1de4d8");
#endif

    switch (ctx->pc) {
        case 0x1de4fcu: goto label_1de4fc;
        case 0x1de514u: goto label_1de514;
        default: break;
    }

    ctx->pc = 0x1de4d8u;

    // 0x1de4d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de4dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1de4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1de4e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1de4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1de4e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de4ec: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DE4ECu;
    {
        const bool branch_taken_0x1de4ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4ECu;
        // 0x1de4f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4ec) {
            ctx->pc = 0x1DE514u;
            goto label_1de514;
        }
    }
    ctx->pc = 0x1DE4F4u;
    // 0x1de4f4: 0xc07b4cc  jal         func_1ED330
    ctx->pc = 0x1DE4F4u;
    SET_GPR_U32(ctx, 31, 0x1DE4FCu);
    ctx->pc = 0x1ED330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED330u, 0x1DE4F4u, 0x1DE4FCu)) {
        return;
    }
    ctx->pc = 0x1DE4FCu;
label_1de4fc:
    // 0x1de4fc: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE4FCu;
    {
        const bool branch_taken_0x1de4fc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1DE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4FCu;
        // 0x1de500: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4fc) {
            ctx->pc = 0x1DE518u;
            goto label_1de518;
        }
    }
    ctx->pc = 0x1DE504u;
    // 0x1de504: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE504u;
    {
        const bool branch_taken_0x1de504 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE504u;
        // 0x1de508: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de504) {
            ctx->pc = 0x1DE518u;
            goto label_1de518;
        }
    }
    ctx->pc = 0x1DE50Cu;
    // 0x1de50c: 0xc077736  jal         func_1DDCD8
    ctx->pc = 0x1DE50Cu;
    SET_GPR_U32(ctx, 31, 0x1DE514u);
    ctx->pc = 0x1DE510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE50Cu;
    // 0x1de510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDCD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DDCD8u, 0x1DE50Cu, 0x1DE514u)) {
        return;
    }
    ctx->pc = 0x1DE514u;
label_1de514:
    // 0x1de514: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1de514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1de518:
    // 0x1de518: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1de518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de51c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1de51cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de524: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE524u;
        // 0x1de528: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE52Cu;
    // 0x1de52c: 0x0  nop
    ctx->pc = 0x1de52cu;
    // NOP
    ctx->pc = 0x1de530u;
}
