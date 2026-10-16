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

// Function: sub_0010E440
// Address: 0x10e440 - 0x10e4a8
void sub_0010E440_0x10e440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E440_0x10e440");
#endif

    switch (ctx->pc) {
        case 0x10e460u: goto label_10e460;
        case 0x10e478u: goto label_10e478;
        case 0x10e494u: goto label_10e494;
        default: break;
    }

    ctx->pc = 0x10e440u;

    // 0x10e440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10e444: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10e444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x10e448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10e448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10e44c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10e44cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10e450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e458: 0xc0433e0  jal         func_10CF80
    ctx->pc = 0x10E458u;
    SET_GPR_U32(ctx, 31, 0x10E460u);
    ctx->pc = 0x10E45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E458u;
    // 0x10e45c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10CF80u, 0x10E458u, 0x10E460u)) {
        return;
    }
    ctx->pc = 0x10E460u;
label_10e460:
    // 0x10e460: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x10E460u;
    {
        const bool branch_taken_0x10e460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E460u;
        // 0x10e464: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e460) {
            ctx->pc = 0x10E494u;
            goto label_10e494;
        }
    }
    ctx->pc = 0x10E468u;
    // 0x10e468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e46c: 0xac6282ec  sw          $v0, -0x7D14($v1)
    ctx->pc = 0x10e46cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935276), GPR_U32(ctx, 2));
    // 0x10e470: 0xc043a38  jal         func_10E8E0
    ctx->pc = 0x10E470u;
    SET_GPR_U32(ctx, 31, 0x10E478u);
    ctx->pc = 0x10E474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E470u;
    // 0x10e474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E8E0u, 0x10E470u, 0x10E478u)) {
        return;
    }
    ctx->pc = 0x10E478u;
label_10e478:
    // 0x10e478: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10E478u;
    {
        const bool branch_taken_0x10e478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E478u;
        // 0x10e47c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e478) {
            ctx->pc = 0x10E498u;
            goto label_10e498;
        }
    }
    ctx->pc = 0x10E480u;
    // 0x10e480: 0x8e241244  lw          $a0, 0x1244($s1)
    ctx->pc = 0x10e480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4676)));
    // 0x10e484: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10E484u;
    {
        const bool branch_taken_0x10e484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E484u;
        // 0x10e488: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e484) {
            ctx->pc = 0x10E49Cu;
            goto label_10e49c;
        }
    }
    ctx->pc = 0x10E48Cu;
    // 0x10e48c: 0xc0ba760  jal         func_2E9D80
    ctx->pc = 0x10E48Cu;
    SET_GPR_U32(ctx, 31, 0x10E494u);
    ctx->pc = 0x10E490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E48Cu;
    // 0x10e490: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9D80u, 0x10E48Cu, 0x10E494u)) {
        return;
    }
    ctx->pc = 0x10E494u;
label_10e494:
    // 0x10e494: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10e494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10e498:
    // 0x10e498: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10e498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10e49c:
    // 0x10e49c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x10E4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4A0u;
        // 0x10e4a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E4A8u;
}
