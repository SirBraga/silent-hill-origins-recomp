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

// Function: sub_001F23D0
// Address: 0x1f23d0 - 0x1f2420
void sub_001F23D0_0x1f23d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F23D0_0x1f23d0");
#endif

    switch (ctx->pc) {
        case 0x1f23e0u: goto label_1f23e0;
        case 0x1f23f0u: goto label_1f23f0;
        default: break;
    }

    ctx->pc = 0x1f23d0u;

    // 0x1f23d0: 0x8c822718  lw          $v0, 0x2718($a0)
    ctx->pc = 0x1f23d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10008)));
    // 0x1f23d4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F23D4u;
    {
        const bool branch_taken_0x1f23d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F23D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F23D4u;
        // 0x1f23d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f23d4) {
            ctx->pc = 0x1F2418u;
            goto label_1f2418;
        }
    }
    ctx->pc = 0x1F23DCu;
    // 0x1f23dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1f23dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f23e0:
    // 0x1f23e0: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F23E0u;
    {
        const bool branch_taken_0x1f23e0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1F23E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F23E0u;
        // 0x1f23e4: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f23e0) {
            ctx->pc = 0x1F240Cu;
            goto label_1f240c;
        }
    }
    ctx->pc = 0x1F23E8u;
    // 0x1f23e8: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x1f23e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1f23ec: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f23ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f23f0:
    // 0x1f23f0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f23f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f23f4: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x1f23f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f23f8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1f23f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1f23fc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1f23fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f2400: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x1f2400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x1f2404: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F2404u;
    {
        const bool branch_taken_0x1f2404 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2404u;
        // 0x1f2408: 0x62380a  movz        $a3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2404) {
            ctx->pc = 0x1F23F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f23f0;
        }
    }
    ctx->pc = 0x1F240Cu;
label_1f240c:
    // 0x1f240c: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1f240cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2410: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1F2410u;
    {
        const bool branch_taken_0x1f2410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2410) {
            ctx->pc = 0x1F2414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2410u;
            // 0x1f2414: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F23E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f23e0;
        }
    }
    ctx->pc = 0x1F2418u;
label_1f2418:
    // 0x1f2418: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2418u;
        // 0x1f241c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2420u;
}
