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

// Function: sub_002DC108
// Address: 0x2dc108 - 0x2dc158
void sub_002DC108_0x2dc108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC108_0x2dc108");
#endif

    switch (ctx->pc) {
        case 0x2dc120u: goto label_2dc120;
        case 0x2dc138u: goto label_2dc138;
        default: break;
    }

    ctx->pc = 0x2dc108u;

    // 0x2dc108: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2dc108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dc10c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x2dc10cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2dc110: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC110u;
    {
        const bool branch_taken_0x2dc110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc110) {
            ctx->pc = 0x2DC120u;
            goto label_2dc120;
        }
    }
    ctx->pc = 0x2DC118u;
    // 0x2dc118: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC118u;
    {
        const bool branch_taken_0x2dc118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc118) {
            ctx->pc = 0x2DC11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC118u;
            // 0x2dc11c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC128u;
            goto label_2dc128;
        }
    }
    ctx->pc = 0x2DC120u;
label_2dc120:
    // 0x2dc120: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC120u;
        // 0x2dc124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC128u;
label_2dc128:
    // 0x2dc128: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dc128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc12c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2dc12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2dc130: 0x18a00007  blez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DC130u;
    {
        const bool branch_taken_0x2dc130 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x2DC134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC130u;
        // 0x2dc134: 0x2467ffe0  addiu       $a3, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc130) {
            ctx->pc = 0x2DC150u;
            goto label_2dc150;
        }
    }
    ctx->pc = 0x2DC138u;
label_2dc138:
    // 0x2dc138: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2dc138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dc13c: 0x1064fff8  beq         $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DC13Cu;
    {
        const bool branch_taken_0x2dc13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2DC140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC13Cu;
        // 0x2dc140: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc13c) {
            ctx->pc = 0x2DC120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc120;
        }
    }
    ctx->pc = 0x2DC144u;
    // 0x2dc144: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x2dc144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2dc148: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2DC148u;
    {
        const bool branch_taken_0x2dc148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC148u;
        // 0x2dc14c: 0x2467ffe0  addiu       $a3, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc148) {
            ctx->pc = 0x2DC138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc138;
        }
    }
    ctx->pc = 0x2DC150u;
label_2dc150:
    // 0x2dc150: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC150u;
        // 0x2dc154: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC158u;
}
