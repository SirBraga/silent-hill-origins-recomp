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

// Function: sub_002DB148
// Address: 0x2db148 - 0x2db188
void sub_002DB148_0x2db148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB148_0x2db148");
#endif

    switch (ctx->pc) {
        case 0x2db164u: goto label_2db164;
        case 0x2db170u: goto label_2db170;
        default: break;
    }

    ctx->pc = 0x2db148u;

    // 0x2db148: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2db148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2db14c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2db14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2db150: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2db150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2db154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2db154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2db158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2db15c: 0xc0b7d62  jal         func_2DF588
    ctx->pc = 0x2DB15Cu;
    SET_GPR_U32(ctx, 31, 0x2DB164u);
    ctx->pc = 0x2DB160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB15Cu;
    // 0x2db160: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF588u, 0x2DB15Cu, 0x2DB164u)) {
        return;
    }
    ctx->pc = 0x2DB164u;
label_2db164:
    // 0x2db164: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2db164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db168: 0xc0b7d4e  jal         func_2DF538
    ctx->pc = 0x2DB168u;
    SET_GPR_U32(ctx, 31, 0x2DB170u);
    ctx->pc = 0x2DB16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB168u;
    // 0x2db16c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF538u, 0x2DB168u, 0x2DB170u)) {
        return;
    }
    ctx->pc = 0x2DB170u;
label_2db170:
    // 0x2db170: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2db170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db174: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2db174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db178: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2db178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db17c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2db17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db180: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB180u;
        // 0x2db184: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB188u;
}
