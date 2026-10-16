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

// Function: sub_001467D0
// Address: 0x1467d0 - 0x146850
void sub_001467D0_0x1467d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001467D0_0x1467d0");
#endif

    ctx->pc = 0x1467d0u;

    // 0x1467d0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1467d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1467d4: 0x8c628474  lw          $v0, -0x7B8C($v1)
    ctx->pc = 0x1467d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338474u));
    // 0x1467d8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1467D8u;
    {
        const bool branch_taken_0x1467d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1467DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1467D8u;
        // 0x1467dc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1467d8) {
            ctx->pc = 0x146824u;
            goto label_146824;
        }
    }
    ctx->pc = 0x1467E0u;
    // 0x1467e0: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x1467e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x1467e4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1467E4u;
    {
        const bool branch_taken_0x1467e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1467e4) {
            ctx->pc = 0x1467E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1467E4u;
            // 0x1467e8: 0x8c820114  lw          $v0, 0x114($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146814u;
            goto label_146814;
        }
    }
    ctx->pc = 0x1467ECu;
    // 0x1467ec: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x1467ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x1467f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1467F0u;
    {
        const bool branch_taken_0x1467f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1467F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1467F0u;
        // 0x1467f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1467f0) {
            ctx->pc = 0x146804u;
            goto label_146804;
        }
    }
    ctx->pc = 0x1467F8u;
    // 0x1467f8: 0x8c830114  lw          $v1, 0x114($a0)
    ctx->pc = 0x1467f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x1467fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1467FCu;
    {
        const bool branch_taken_0x1467fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1467FCu;
        // 0x146800: 0xa0620002  sb          $v0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1467fc) {
            ctx->pc = 0x146818u;
            goto label_146818;
        }
    }
    ctx->pc = 0x146804u;
label_146804:
    // 0x146804: 0x8c830114  lw          $v1, 0x114($a0)
    ctx->pc = 0x146804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x146808: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x146808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14680c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14680Cu;
    {
        const bool branch_taken_0x14680c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14680Cu;
        // 0x146810: 0xa0620002  sb          $v0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14680c) {
            ctx->pc = 0x146818u;
            goto label_146818;
        }
    }
    ctx->pc = 0x146814u;
label_146814:
    // 0x146814: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x146814u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_146818:
    // 0x146818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14681c: 0x3e00008  jr          $ra
    ctx->pc = 0x14681Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14681Cu;
        // 0x146820: 0xac820100  sw          $v0, 0x100($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14681Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146824u;
label_146824:
    // 0x146824: 0x8c438478  lw          $v1, -0x7B88($v0)
    ctx->pc = 0x146824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935672)));
    // 0x146828: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x146828u;
    {
        const bool branch_taken_0x146828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146828u;
        // 0x14682c: 0x8c820114  lw          $v0, 0x114($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146828) {
            ctx->pc = 0x146840u;
            goto label_146840;
        }
    }
    ctx->pc = 0x146830u;
    // 0x146830: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x146830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146834: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x146834u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146838: 0x3e00008  jr          $ra
    ctx->pc = 0x146838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146838u;
        // 0x14683c: 0xac830100  sw          $v1, 0x100($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146840u;
label_146840:
    // 0x146840: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x146840u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146844: 0x3e00008  jr          $ra
    ctx->pc = 0x146844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146844u;
        // 0x146848: 0xac800100  sw          $zero, 0x100($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14684Cu;
    // 0x14684c: 0x0  nop
    ctx->pc = 0x14684cu;
    // NOP
    ctx->pc = 0x146850u;
}
