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

// Function: sub_00226438
// Address: 0x226438 - 0x226498
void sub_00226438_0x226438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226438_0x226438");
#endif

    switch (ctx->pc) {
        case 0x226460u: goto label_226460;
        case 0x226468u: goto label_226468;
        case 0x226480u: goto label_226480;
        default: break;
    }

    ctx->pc = 0x226438u;

label_226438:
    // 0x226438: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22643c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22643cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x226440: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x226440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x226444: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x226444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226448: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x226448u;
    {
        const bool branch_taken_0x226448 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226448u;
        // 0x22644c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226448) {
            ctx->pc = 0x226480u;
            goto label_226480;
        }
    }
    ctx->pc = 0x226450u;
    // 0x226450: 0x8e300098  lw          $s0, 0x98($s1)
    ctx->pc = 0x226450u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x226454: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x226454u;
    {
        const bool branch_taken_0x226454 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x226458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226454u;
        // 0x226458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226454) {
            ctx->pc = 0x226478u;
            goto label_226478;
        }
    }
    ctx->pc = 0x22645Cu;
    // 0x22645c: 0x0  nop
    ctx->pc = 0x22645cu;
    // NOP
label_226460:
    // 0x226460: 0xc08990e  jal         func_226438
    ctx->pc = 0x226460u;
    SET_GPR_U32(ctx, 31, 0x226468u);
    ctx->pc = 0x226464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226460u;
    // 0x226464: 0x8e10009c  lw          $s0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226438u;
    goto label_226438;
    ctx->pc = 0x226468u;
label_226468:
    // 0x226468: 0x0  nop
    ctx->pc = 0x226468u;
    // NOP
    // 0x22646c: 0x0  nop
    ctx->pc = 0x22646cu;
    // NOP
    // 0x226470: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x226470u;
    {
        const bool branch_taken_0x226470 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x226474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226470u;
        // 0x226474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226470) {
            ctx->pc = 0x226460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226460;
        }
    }
    ctx->pc = 0x226478u;
label_226478:
    // 0x226478: 0xc0898fc  jal         func_2263F0
    ctx->pc = 0x226478u;
    SET_GPR_U32(ctx, 31, 0x226480u);
    ctx->pc = 0x22647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226478u;
    // 0x22647c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2263F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2263F0u, 0x226478u, 0x226480u)) {
        return;
    }
    ctx->pc = 0x226480u;
label_226480:
    // 0x226480: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x226480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226484: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x226484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22648c: 0x3e00008  jr          $ra
    ctx->pc = 0x22648Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22648Cu;
        // 0x226490: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22648Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226494u;
    // 0x226494: 0x0  nop
    ctx->pc = 0x226494u;
    // NOP
    ctx->pc = 0x226498u;
}
