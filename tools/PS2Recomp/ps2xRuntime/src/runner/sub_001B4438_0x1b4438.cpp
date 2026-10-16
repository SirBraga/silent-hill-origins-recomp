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

// Function: sub_001B4438
// Address: 0x1b4438 - 0x1b4480
void sub_001B4438_0x1b4438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4438_0x1b4438");
#endif

    switch (ctx->pc) {
        case 0x1b445cu: goto label_1b445c;
        default: break;
    }

    ctx->pc = 0x1b4438u;

    // 0x1b4438: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b443c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b443cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b4440: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b4440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b4444: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4448: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b4448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b444c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b444cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4450: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b4450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b4454: 0xc0c5c96  jal         func_317258
    ctx->pc = 0x1B4454u;
    SET_GPR_U32(ctx, 31, 0x1B445Cu);
    ctx->pc = 0x1B4458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4454u;
    // 0x1b4458: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317258u, 0x1B4454u, 0x1B445Cu)) {
        return;
    }
    ctx->pc = 0x1B445Cu;
label_1b445c:
    // 0x1b445c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B445Cu;
    {
        const bool branch_taken_0x1b445c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B445Cu;
        // 0x1b4460: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b445c) {
            ctx->pc = 0x1B446Cu;
            goto label_1b446c;
        }
    }
    ctx->pc = 0x1B4464u;
    // 0x1b4464: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1b4464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1b4468: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b446c:
    // 0x1b446c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b446cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b4470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4478: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4478u;
        // 0x1b447c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4480u;
}
