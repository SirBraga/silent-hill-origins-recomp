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

// Function: sub_001B33F8
// Address: 0x1b33f8 - 0x1b3490
void sub_001B33F8_0x1b33f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B33F8_0x1b33f8");
#endif

    switch (ctx->pc) {
        case 0x1b340cu: goto label_1b340c;
        default: break;
    }

    ctx->pc = 0x1b33f8u;

    // 0x1b33f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b33f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b33fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b33fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b3400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3404: 0xc07cdf0  jal         func_1F37C0
    ctx->pc = 0x1B3404u;
    SET_GPR_U32(ctx, 31, 0x1B340Cu);
    ctx->pc = 0x1B3408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3404u;
    // 0x1b3408: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F37C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F37C0u, 0x1B3404u, 0x1B340Cu)) {
        return;
    }
    ctx->pc = 0x1B340Cu;
label_1b340c:
    // 0x1b340c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B340Cu;
    {
        const bool branch_taken_0x1b340c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B340Cu;
        // 0x1b3410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b340c) {
            ctx->pc = 0x1B3468u;
            goto label_1b3468;
        }
    }
    ctx->pc = 0x1B3414u;
    // 0x1b3414: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B3414u;
    {
        const bool branch_taken_0x1b3414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B3418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3414u;
        // 0x1b3418: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3414) {
            ctx->pc = 0x1B3454u;
            goto label_1b3454;
        }
    }
    ctx->pc = 0x1B341Cu;
    // 0x1b341c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B341Cu;
    {
        const bool branch_taken_0x1b341c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B341Cu;
        // 0x1b3420: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b341c) {
            ctx->pc = 0x1B3434u;
            goto label_1b3434;
        }
    }
    ctx->pc = 0x1B3424u;
    // 0x1b3424: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B3424u;
    {
        const bool branch_taken_0x1b3424 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3424u;
        // 0x1b3428: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3424) {
            ctx->pc = 0x1B344Cu;
            goto label_1b344c;
        }
    }
    ctx->pc = 0x1B342Cu;
    // 0x1b342c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B342Cu;
    {
        const bool branch_taken_0x1b342c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B342Cu;
        // 0x1b3430: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b342c) {
            ctx->pc = 0x1B3470u;
            goto label_1b3470;
        }
    }
    ctx->pc = 0x1B3434u;
label_1b3434:
    // 0x1b3434: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B3434u;
    {
        const bool branch_taken_0x1b3434 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3434u;
        // 0x1b3438: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3434) {
            ctx->pc = 0x1B345Cu;
            goto label_1b345c;
        }
    }
    ctx->pc = 0x1B343Cu;
    // 0x1b343c: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B343Cu;
    {
        const bool branch_taken_0x1b343c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B343Cu;
        // 0x1b3440: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b343c) {
            ctx->pc = 0x1B3464u;
            goto label_1b3464;
        }
    }
    ctx->pc = 0x1B3444u;
    // 0x1b3444: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B3444u;
    {
        const bool branch_taken_0x1b3444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3444u;
        // 0x1b3448: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3444) {
            ctx->pc = 0x1B3470u;
            goto label_1b3470;
        }
    }
    ctx->pc = 0x1B344Cu;
label_1b344c:
    // 0x1b344c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B344Cu;
    {
        const bool branch_taken_0x1b344c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B344Cu;
        // 0x1b3450: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b344c) {
            ctx->pc = 0x1B3468u;
            goto label_1b3468;
        }
    }
    ctx->pc = 0x1B3454u;
label_1b3454:
    // 0x1b3454: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3454u;
    {
        const bool branch_taken_0x1b3454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3454u;
        // 0x1b3458: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3454) {
            ctx->pc = 0x1B3468u;
            goto label_1b3468;
        }
    }
    ctx->pc = 0x1B345Cu;
label_1b345c:
    // 0x1b345c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B345Cu;
    {
        const bool branch_taken_0x1b345c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B345Cu;
        // 0x1b3460: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b345c) {
            ctx->pc = 0x1B3468u;
            goto label_1b3468;
        }
    }
    ctx->pc = 0x1B3464u;
label_1b3464:
    // 0x1b3464: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b3464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b3468:
    // 0x1b3468: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1b3468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1b346c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1b346cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1b3470:
    // 0x1b3470: 0x24428630  addiu       $v0, $v0, -0x79D0
    ctx->pc = 0x1b3470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936112));
    // 0x1b3474: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b3474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3478: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b3478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b347c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b347cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3480: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b3480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b3484: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3484u;
        // 0x1b3488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B348Cu;
    // 0x1b348c: 0x0  nop
    ctx->pc = 0x1b348cu;
    // NOP
    ctx->pc = 0x1b3490u;
}
