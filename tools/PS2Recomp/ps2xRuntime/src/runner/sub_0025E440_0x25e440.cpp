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

// Function: sub_0025E440
// Address: 0x25e440 - 0x25e488
void sub_0025E440_0x25e440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E440_0x25e440");
#endif

    switch (ctx->pc) {
        case 0x25e46cu: goto label_25e46c;
        default: break;
    }

    ctx->pc = 0x25e440u;

    // 0x25e440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25e440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25e444: 0x8f8285f8  lw          $v0, -0x7A08($gp)
    ctx->pc = 0x25e444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
    // 0x25e448: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25e448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25e44c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25e44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25e450: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25e450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25e458: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x25e458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x25e45c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E45Cu;
    {
        const bool branch_taken_0x25e45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E45Cu;
        // 0x25e460: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e45c) {
            ctx->pc = 0x25E46Cu;
            goto label_25e46c;
        }
    }
    ctx->pc = 0x25E464u;
    // 0x25e464: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x25E464u;
    SET_GPR_U32(ctx, 31, 0x25E46Cu);
    ctx->pc = 0x25E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E464u;
    // 0x25e468: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x25E464u, 0x25E46Cu)) {
        return;
    }
    ctx->pc = 0x25E46Cu;
label_25e46c:
    // 0x25e46c: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x25e46cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x25e470: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25e470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e474: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25e474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e478: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25e478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e47c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e480: 0x3e00008  jr          $ra
    ctx->pc = 0x25E480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E480u;
        // 0x25e484: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E488u;
}
