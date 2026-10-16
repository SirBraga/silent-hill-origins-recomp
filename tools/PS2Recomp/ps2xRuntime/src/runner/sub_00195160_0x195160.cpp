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

// Function: sub_00195160
// Address: 0x195160 - 0x1951a0
void sub_00195160_0x195160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195160_0x195160");
#endif

    switch (ctx->pc) {
        case 0x195190u: goto label_195190;
        default: break;
    }

    ctx->pc = 0x195160u;

    // 0x195160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x195160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x195164: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x195164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195168: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195168u;
    {
        const bool branch_taken_0x195168 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195168u;
        // 0x19516c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195168) {
            ctx->pc = 0x195178u;
            goto label_195178;
        }
    }
    ctx->pc = 0x195170u;
    // 0x195170: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x195170u;
    {
        const bool branch_taken_0x195170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195170u;
        // 0x195174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195170) {
            ctx->pc = 0x195194u;
            goto label_195194;
        }
    }
    ctx->pc = 0x195178u;
label_195178:
    // 0x195178: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x195178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x19517c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x19517cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x195180: 0x24a55040  addiu       $a1, $a1, 0x5040
    ctx->pc = 0x195180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20544));
    // 0x195184: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x195184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x195188: 0xc09545a  jal         func_255168
    ctx->pc = 0x195188u;
    SET_GPR_U32(ctx, 31, 0x195190u);
    ctx->pc = 0x19518Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195188u;
    // 0x19518c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x195188u, 0x195190u)) {
        return;
    }
    ctx->pc = 0x195190u;
label_195190:
    // 0x195190: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x195190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_195194:
    // 0x195194: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x195194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195198: 0x3e00008  jr          $ra
    ctx->pc = 0x195198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195198u;
        // 0x19519c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1951A0u;
}
