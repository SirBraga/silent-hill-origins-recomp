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

// Function: sub_002AD8B0
// Address: 0x2ad8b0 - 0x2ad940
void sub_002AD8B0_0x2ad8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD8B0_0x2ad8b0");
#endif

    switch (ctx->pc) {
        case 0x2ad8d8u: goto label_2ad8d8;
        default: break;
    }

    ctx->pc = 0x2ad8b0u;

    // 0x2ad8b0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2ad8b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad8b4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2ad8b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad8b8: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x2ad8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2ad8bc: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2AD8BCu;
    {
        const bool branch_taken_0x2ad8bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD8BCu;
        // 0x2ad8c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad8bc) {
            ctx->pc = 0x2AD8F0u;
            goto label_2ad8f0;
        }
    }
    ctx->pc = 0x2AD8C4u;
    // 0x2ad8c4: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x2ad8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2ad8c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ad8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ad8cc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AD8CCu;
    {
        const bool branch_taken_0x2ad8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad8cc) {
            ctx->pc = 0x2AD8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD8CCu;
            // 0x2ad8d0: 0x8ce20010  lw          $v0, 0x10($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD8F4u;
            goto label_2ad8f4;
        }
    }
    ctx->pc = 0x2AD8D4u;
    // 0x2ad8d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ad8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2ad8d8:
    // 0x2ad8d8: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x2ad8d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2ad8dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD8DCu;
    {
        const bool branch_taken_0x2ad8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD8DCu;
        // 0x2ad8e0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad8dc) {
            ctx->pc = 0x2AD8F0u;
            goto label_2ad8f0;
        }
    }
    ctx->pc = 0x2AD8E4u;
    // 0x2ad8e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ad8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ad8e8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AD8E8u;
    {
        const bool branch_taken_0x2ad8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad8e8) {
            ctx->pc = 0x2AD8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD8E8u;
            // 0x2ad8ec: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad8d8;
        }
    }
    ctx->pc = 0x2AD8F0u;
label_2ad8f0:
    // 0x2ad8f0: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x2ad8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_2ad8f4:
    // 0x2ad8f4: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD8F4u;
    {
        const bool branch_taken_0x2ad8f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ad8f4) {
            ctx->pc = 0x2AD8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD8F4u;
            // 0x2ad8f8: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD904u;
            goto label_2ad904;
        }
    }
    ctx->pc = 0x2AD8FCu;
    // 0x2ad8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD8FCu;
        // 0x2ad900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD904u;
label_2ad904:
    // 0x2ad904: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD904u;
    {
        const bool branch_taken_0x2ad904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ad904) {
            ctx->pc = 0x2AD908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD904u;
            // 0x2ad908: 0x8ce30008  lw          $v1, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD918u;
            goto label_2ad918;
        }
    }
    ctx->pc = 0x2AD90Cu;
    // 0x2ad90c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2ad90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ad910: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x2ad910u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x2ad914: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x2ad914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2ad918:
    // 0x2ad918: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ad918u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ad91c: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2ad91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2ad920: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2ad920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad924: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ad924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ad928: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2ad928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ad92c: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x2ad92cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x2ad930: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD930u;
        // 0x2ad934: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD938u;
    // 0x2ad938: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2ad938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ad93c: 0x0  nop
    ctx->pc = 0x2ad93cu;
    // NOP
    ctx->pc = 0x2ad940u;
}
