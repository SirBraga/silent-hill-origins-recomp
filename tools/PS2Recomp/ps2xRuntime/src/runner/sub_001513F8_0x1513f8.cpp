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

// Function: sub_001513F8
// Address: 0x1513f8 - 0x1514a8
void sub_001513F8_0x1513f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001513F8_0x1513f8");
#endif

    switch (ctx->pc) {
        case 0x151408u: goto label_151408;
        default: break;
    }

    ctx->pc = 0x1513f8u;

    // 0x1513f8: 0x8c832894  lw          $v1, 0x2894($a0)
    ctx->pc = 0x1513f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10388)));
    // 0x1513fc: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1513FCu;
    {
        const bool branch_taken_0x1513fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1513fc) {
            ctx->pc = 0x15149Cu;
            goto label_15149c;
        }
    }
    ctx->pc = 0x151404u;
    // 0x151404: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x151404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_151408:
    // 0x151408: 0x54450022  bnel        $v0, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x151408u;
    {
        const bool branch_taken_0x151408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x151408) {
            ctx->pc = 0x15140Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151408u;
            // 0x15140c: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151494u;
            goto label_151494;
        }
    }
    ctx->pc = 0x151410u;
    // 0x151410: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x151410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x151414: 0x2486288c  addiu       $a2, $a0, 0x288C
    ctx->pc = 0x151414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 10380));
    // 0x151418: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x151418u;
    {
        const bool branch_taken_0x151418 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151418u;
        // 0x15141c: 0x24872894  addiu       $a3, $a0, 0x2894 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 10388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151418) {
            ctx->pc = 0x151428u;
            goto label_151428;
        }
    }
    ctx->pc = 0x151420u;
    // 0x151420: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x151420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x151424: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x151424u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_151428:
    // 0x151428: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x151428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15142c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15142Cu;
    {
        const bool branch_taken_0x15142c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15142c) {
            ctx->pc = 0x151430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15142Cu;
            // 0x151430: 0x8c822894  lw          $v0, 0x2894($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151440u;
            goto label_151440;
        }
    }
    ctx->pc = 0x151434u;
    // 0x151434: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x151434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x151438: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x151438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x15143c: 0x8c822894  lw          $v0, 0x2894($a0)
    ctx->pc = 0x15143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10388)));
label_151440:
    // 0x151440: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x151440u;
    {
        const bool branch_taken_0x151440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x151440) {
            ctx->pc = 0x151444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151440u;
            // 0x151444: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151454u;
            goto label_151454;
        }
    }
    ctx->pc = 0x151448u;
    // 0x151448: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x151448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15144c: 0xac822894  sw          $v0, 0x2894($a0)
    ctx->pc = 0x15144cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10388), GPR_U32(ctx, 2));
    // 0x151450: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x151450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_151454:
    // 0x151454: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x151454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x151458: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x151458u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x15145c: 0x8c82288c  lw          $v0, 0x288C($a0)
    ctx->pc = 0x15145cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10380)));
    // 0x151460: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x151460u;
    {
        const bool branch_taken_0x151460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151460) {
            ctx->pc = 0x151464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151460u;
            // 0x151464: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151468u;
            goto label_151468;
        }
    }
    ctx->pc = 0x151468u;
label_151468:
    // 0x151468: 0x8c82288c  lw          $v0, 0x288C($a0)
    ctx->pc = 0x151468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10380)));
    // 0x15146c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x15146cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x151470: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x151470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x151474: 0xac83288c  sw          $v1, 0x288C($a0)
    ctx->pc = 0x151474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10380), GPR_U32(ctx, 3));
    // 0x151478: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x151478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x15147c: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x15147cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x151480: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x151480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151484: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x151484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x151488: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x151488u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x15148c: 0x3e00008  jr          $ra
    ctx->pc = 0x15148Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15148Cu;
        // 0x151490: 0xacc30014  sw          $v1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15148Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151494u;
label_151494:
    // 0x151494: 0x5460ffdc  bnel        $v1, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x151494u;
    {
        const bool branch_taken_0x151494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151494) {
            ctx->pc = 0x151498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151494u;
            // 0x151498: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151408;
        }
    }
    ctx->pc = 0x15149Cu;
label_15149c:
    // 0x15149c: 0x3e00008  jr          $ra
    ctx->pc = 0x15149Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15149Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1514A4u;
    // 0x1514a4: 0x0  nop
    ctx->pc = 0x1514a4u;
    // NOP
    ctx->pc = 0x1514a8u;
}
