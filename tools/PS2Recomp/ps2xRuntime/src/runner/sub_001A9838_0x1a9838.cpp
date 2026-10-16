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

// Function: sub_001A9838
// Address: 0x1a9838 - 0x1a98a8
void sub_001A9838_0x1a9838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9838_0x1a9838");
#endif

    switch (ctx->pc) {
        case 0x1a9860u: goto label_1a9860;
        default: break;
    }

    ctx->pc = 0x1a9838u;

    // 0x1a9838: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a9838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a983c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1a983cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a9840: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A9840u;
    {
        const bool branch_taken_0x1a9840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9840u;
        // 0x1a9844: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9840) {
            ctx->pc = 0x1A989Cu;
            goto label_1a989c;
        }
    }
    ctx->pc = 0x1A9848u;
    // 0x1a9848: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1a9848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1a984c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a984cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a9850: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A9850u;
    {
        const bool branch_taken_0x1a9850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9850u;
        // 0x1a9854: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9850) {
            ctx->pc = 0x1A988Cu;
            goto label_1a988c;
        }
    }
    ctx->pc = 0x1A9858u;
    // 0x1a9858: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x1a9858u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x1a985c: 0x0  nop
    ctx->pc = 0x1a985cu;
    // NOP
label_1a9860:
    // 0x1a9860: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x1a9860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a9864: 0x482025  or          $a0, $v0, $t0
    ctx->pc = 0x1a9864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1a9868: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a9868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a986c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1a986cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1a9870: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x1a9870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1a9874: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1a9874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1a9878: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a987c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a987cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a9880: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x1a9880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a9884: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A9884u;
    {
        const bool branch_taken_0x1a9884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9884u;
        // 0x1a9888: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9884) {
            ctx->pc = 0x1A9860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9860;
        }
    }
    ctx->pc = 0x1A988Cu;
label_1a988c:
    // 0x1a988c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a988cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a9890: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a9890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a9894: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a9894u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a9898: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x1a9898u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_1a989c:
    // 0x1a989c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A989Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A989Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A98A4u;
    // 0x1a98a4: 0x0  nop
    ctx->pc = 0x1a98a4u;
    // NOP
    ctx->pc = 0x1a98a8u;
}
