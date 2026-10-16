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

// Function: sub_001031B0
// Address: 0x1031b0 - 0x103208
void sub_001031B0_0x1031b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001031B0_0x1031b0");
#endif

    switch (ctx->pc) {
        case 0x1031c8u: goto label_1031c8;
        default: break;
    }

    ctx->pc = 0x1031b0u;

    // 0x1031b0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1031b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1031b4: 0x8c438280  lw          $v1, -0x7D80($v0)
    ctx->pc = 0x1031b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338280u));
    // 0x1031b8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1031b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1031bc: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1031BCu;
    {
        const bool branch_taken_0x1031bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1031bc) {
            ctx->pc = 0x1031C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1031BCu;
            // 0x1031c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1031E4u;
            goto label_1031e4;
        }
    }
    ctx->pc = 0x1031C4u;
    // 0x1031c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1031c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1031c8:
    // 0x1031c8: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1031C8u;
    {
        const bool branch_taken_0x1031c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1031CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1031C8u;
        // 0x1031cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1031c8) {
            ctx->pc = 0x1031E8u;
            goto label_1031e8;
        }
    }
    ctx->pc = 0x1031D0u;
    // 0x1031d0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1031d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1031d4: 0x0  nop
    ctx->pc = 0x1031d4u;
    // NOP
    // 0x1031d8: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1031D8u;
    {
        const bool branch_taken_0x1031d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1031d8) {
            ctx->pc = 0x1031DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1031D8u;
            // 0x1031dc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1031C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1031c8;
        }
    }
    ctx->pc = 0x1031E0u;
    // 0x1031e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1031e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1031e4:
    // 0x1031e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1031e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1031e8:
    // 0x1031e8: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1031e8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
    // 0x1031ec: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1031ECu;
    {
        const bool branch_taken_0x1031ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1031F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1031ECu;
        // 0x1031f0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1031ec) {
            ctx->pc = 0x103200u;
            goto label_103200;
        }
    }
    ctx->pc = 0x1031F4u;
    // 0x1031f4: 0x8ca20294  lw          $v0, 0x294($a1)
    ctx->pc = 0x1031f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 660)));
    // 0x1031f8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1031F8u;
    {
        const bool branch_taken_0x1031f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1031f8) {
            ctx->pc = 0x1031FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1031F8u;
            // 0x1031fc: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103200u;
            goto label_103200;
        }
    }
    ctx->pc = 0x103200u;
label_103200:
    // 0x103200: 0x3e00008  jr          $ra
    ctx->pc = 0x103200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103208u;
}
