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

// Function: sub_001A48C0
// Address: 0x1a48c0 - 0x1a4938
void sub_001A48C0_0x1a48c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A48C0_0x1a48c0");
#endif

    switch (ctx->pc) {
        case 0x1a48d8u: goto label_1a48d8;
        default: break;
    }

    ctx->pc = 0x1a48c0u;

    // 0x1a48c0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1a48c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a48c4: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A48C4u;
    {
        const bool branch_taken_0x1a48c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A48C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48C4u;
        // 0x1a48c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a48c4) {
            ctx->pc = 0x1A492Cu;
            goto label_1a492c;
        }
    }
    ctx->pc = 0x1A48CCu;
    // 0x1a48cc: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x1a48ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x1a48d0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1a48d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a48d4: 0x0  nop
    ctx->pc = 0x1a48d4u;
    // NOP
label_1a48d8:
    // 0x1a48d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1a48d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a48dc: 0x5445000f  bnel        $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A48DCu;
    {
        const bool branch_taken_0x1a48dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1a48dc) {
            ctx->pc = 0x1A48E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A48DCu;
            // 0x1a48e0: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A491Cu;
            goto label_1a491c;
        }
    }
    ctx->pc = 0x1A48E4u;
    // 0x1a48e4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1a48e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a48e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a48e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a48ec: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1a48ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1a48f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a48f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a48f4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1a48f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1a48f8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a48f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a48fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a4900: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a4900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a4904: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1a4904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1a4908: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a4908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1a490c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1a490cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a4910: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a4910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a4914: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4914u;
        // 0x1a4918: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A491Cu;
label_1a491c:
    // 0x1a491c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1a491cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a4920: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x1a4920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a4924: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1A4924u;
    {
        const bool branch_taken_0x1a4924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4924u;
        // 0x1a4928: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4924) {
            ctx->pc = 0x1A48D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a48d8;
        }
    }
    ctx->pc = 0x1A492Cu;
label_1a492c:
    // 0x1a492c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A492Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A492Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4934u;
    // 0x1a4934: 0x0  nop
    ctx->pc = 0x1a4934u;
    // NOP
    ctx->pc = 0x1a4938u;
}
