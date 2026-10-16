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

// Function: sub_001653C8
// Address: 0x1653c8 - 0x165478
void sub_001653C8_0x1653c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001653C8_0x1653c8");
#endif

    switch (ctx->pc) {
        case 0x165418u: goto label_165418;
        default: break;
    }

    ctx->pc = 0x1653c8u;

    // 0x1653c8: 0x90861008  lbu         $a2, 0x1008($a0)
    ctx->pc = 0x1653c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4104)));
    // 0x1653cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1653ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1653d0: 0x24830014  addiu       $v1, $a0, 0x14
    ctx->pc = 0x1653d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1653d4: 0x10c00020  beqz        $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x1653D4u;
    {
        const bool branch_taken_0x1653d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1653D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653D4u;
        // 0x1653d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1653d4) {
            ctx->pc = 0x165458u;
            goto label_165458;
        }
    }
    ctx->pc = 0x1653DCu;
    // 0x1653dc: 0x8c62fff4  lw          $v0, -0xC($v1)
    ctx->pc = 0x1653dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
    // 0x1653e0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1653E0u;
    {
        const bool branch_taken_0x1653e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1653e0) {
            ctx->pc = 0x1653E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1653E0u;
            // 0x1653e4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165418u;
            goto label_165418;
        }
    }
    ctx->pc = 0x1653E8u;
    // 0x1653e8: 0x8c62fff8  lw          $v0, -0x8($v1)
    ctx->pc = 0x1653e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x1653ec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1653ECu;
    {
        const bool branch_taken_0x1653ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1653F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653ECu;
        // 0x1653f0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1653ec) {
            ctx->pc = 0x165418u;
            goto label_165418;
        }
    }
    ctx->pc = 0x1653F4u;
    // 0x1653f4: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x1653f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x1653f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1653F8u;
    {
        const bool branch_taken_0x1653f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1653f8) {
            ctx->pc = 0x165418u;
            goto label_165418;
        }
    }
    ctx->pc = 0x165400u;
    // 0x165400: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x165400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x165404: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x165404u;
    {
        const bool branch_taken_0x165404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165404u;
        // 0x165408: 0xa6102b  sltu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165404) {
            ctx->pc = 0x16541Cu;
            goto label_16541c;
        }
    }
    ctx->pc = 0x16540Cu;
    // 0x16540c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16540Cu;
    {
        const bool branch_taken_0x16540c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16540Cu;
        // 0x165410: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16540c) {
            ctx->pc = 0x165458u;
            goto label_165458;
        }
    }
    ctx->pc = 0x165414u;
    // 0x165414: 0x0  nop
    ctx->pc = 0x165414u;
    // NOP
label_165418:
    // 0x165418: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x165418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_16541c:
    // 0x16541c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16541Cu;
    {
        const bool branch_taken_0x16541c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16541Cu;
        // 0x165420: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16541c) {
            ctx->pc = 0x165458u;
            goto label_165458;
        }
    }
    ctx->pc = 0x165424u;
    // 0x165424: 0x8c62fff4  lw          $v0, -0xC($v1)
    ctx->pc = 0x165424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
    // 0x165428: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x165428u;
    {
        const bool branch_taken_0x165428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165428) {
            ctx->pc = 0x16542Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165428u;
            // 0x16542c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165418;
        }
    }
    ctx->pc = 0x165430u;
    // 0x165430: 0x8c62fff8  lw          $v0, -0x8($v1)
    ctx->pc = 0x165430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x165434: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x165434u;
    {
        const bool branch_taken_0x165434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165434) {
            ctx->pc = 0x165438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165434u;
            // 0x165438: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165418;
        }
    }
    ctx->pc = 0x16543Cu;
    // 0x16543c: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x16543cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x165440: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x165440u;
    {
        const bool branch_taken_0x165440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165440) {
            ctx->pc = 0x165444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165440u;
            // 0x165444: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165418;
        }
    }
    ctx->pc = 0x165448u;
    // 0x165448: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x165448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16544c: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x16544Cu;
    {
        const bool branch_taken_0x16544c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16544c) {
            ctx->pc = 0x165450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16544Cu;
            // 0x165450: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165418;
        }
    }
    ctx->pc = 0x165454u;
    // 0x165454: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x165454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_165458:
    // 0x165458: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x165458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16545c: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16545Cu;
    {
        const bool branch_taken_0x16545c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x165460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16545Cu;
        // 0x165460: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16545c) {
            ctx->pc = 0x16546Cu;
            goto label_16546c;
        }
    }
    ctx->pc = 0x165464u;
    // 0x165464: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x165464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165468: 0xa0821008  sb          $v0, 0x1008($a0)
    ctx->pc = 0x165468u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4104), (uint8_t)GPR_U32(ctx, 2));
label_16546c:
    // 0x16546c: 0x3e00008  jr          $ra
    ctx->pc = 0x16546Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16546Cu;
        // 0x165470: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16546Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165474u;
    // 0x165474: 0x0  nop
    ctx->pc = 0x165474u;
    // NOP
    ctx->pc = 0x165478u;
}
