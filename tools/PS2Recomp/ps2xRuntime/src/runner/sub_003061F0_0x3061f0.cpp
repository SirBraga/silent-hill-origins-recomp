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

// Function: sub_003061F0
// Address: 0x3061f0 - 0x306230
void sub_003061F0_0x3061f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003061F0_0x3061f0");
#endif

    switch (ctx->pc) {
        case 0x306200u: goto label_306200;
        default: break;
    }

    ctx->pc = 0x3061f0u;

    // 0x3061f0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x3061F0u;
    {
        const bool branch_taken_0x3061f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3061F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061F0u;
        // 0x3061f4: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3061f0) {
            ctx->pc = 0x306220u;
            goto label_306220;
        }
    }
    ctx->pc = 0x3061F8u;
    // 0x3061f8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3061F8u;
    {
        const bool branch_taken_0x3061f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3061FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061F8u;
        // 0x3061fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3061f8) {
            ctx->pc = 0x306218u;
            goto label_306218;
        }
    }
    ctx->pc = 0x306200u;
label_306200:
    // 0x306200: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x306200u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x306204: 0x0  nop
    ctx->pc = 0x306204u;
    // NOP
    // 0x306208: 0x0  nop
    ctx->pc = 0x306208u;
    // NOP
    // 0x30620c: 0x0  nop
    ctx->pc = 0x30620cu;
    // NOP
    // 0x306210: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x306210u;
    {
        const bool branch_taken_0x306210 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x306214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306210u;
        // 0x306214: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306210) {
            ctx->pc = 0x306200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306200;
        }
    }
    ctx->pc = 0x306218u;
label_306218:
    // 0x306218: 0x3e00008  jr          $ra
    ctx->pc = 0x306218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306220u;
label_306220:
    // 0x306220: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x306220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x306224: 0x3e00008  jr          $ra
    ctx->pc = 0x306224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306224u;
        // 0x306228: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30622Cu;
    // 0x30622c: 0x0  nop
    ctx->pc = 0x30622cu;
    // NOP
    ctx->pc = 0x306230u;
}
