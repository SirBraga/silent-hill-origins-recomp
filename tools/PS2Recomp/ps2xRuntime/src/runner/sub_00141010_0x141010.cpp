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

// Function: sub_00141010
// Address: 0x141010 - 0x141060
void sub_00141010_0x141010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141010_0x141010");
#endif

    ctx->pc = 0x141010u;

    // 0x141010: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x141010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x141014: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x141014u;
    {
        const bool branch_taken_0x141014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141014) {
            ctx->pc = 0x141054u;
            goto label_141054;
        }
    }
    ctx->pc = 0x14101Cu;
    // 0x14101c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x14101cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x141020: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x141020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x141024: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x141024u;
    {
        const bool branch_taken_0x141024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141024) {
            ctx->pc = 0x141054u;
            goto label_141054;
        }
    }
    ctx->pc = 0x14102Cu;
    // 0x14102c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x14102cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x141030: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x141030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x141034: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x141034u;
    {
        const bool branch_taken_0x141034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141034) {
            ctx->pc = 0x141038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141034u;
            // 0x141038: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14104Cu;
            goto label_14104c;
        }
    }
    ctx->pc = 0x14103Cu;
    // 0x14103c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x14103cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x141040: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x141040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x141044: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x141044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x141048: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x141048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14104c:
    // 0x14104c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14104cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x141050: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x141050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_141054:
    // 0x141054: 0x3e00008  jr          $ra
    ctx->pc = 0x141054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141054u;
        // 0x141058: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14105Cu;
    // 0x14105c: 0x0  nop
    ctx->pc = 0x14105cu;
    // NOP
    ctx->pc = 0x141060u;
}
