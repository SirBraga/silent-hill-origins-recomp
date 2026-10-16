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

// Function: sub_0031A268
// Address: 0x31a268 - 0x31a2d8
void sub_0031A268_0x31a268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A268_0x31a268");
#endif

    switch (ctx->pc) {
        case 0x31a290u: goto label_31a290;
        default: break;
    }

    ctx->pc = 0x31a268u;

    // 0x31a268: 0x18a00018  blez        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x31A268u;
    {
        const bool branch_taken_0x31a268 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x31A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A268u;
        // 0x31a26c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a268) {
            ctx->pc = 0x31A2CCu;
            goto label_31a2cc;
        }
    }
    ctx->pc = 0x31A270u;
    // 0x31a270: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x31a270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x31a274: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31a274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31a278: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x31a278u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31a27c: 0x2c420035  sltiu       $v0, $v0, 0x35
    ctx->pc = 0x31a27cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)53) ? 1 : 0);
    // 0x31a280: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31A280u;
    {
        const bool branch_taken_0x31a280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A280u;
        // 0x31a284: 0x24070030  addiu       $a3, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a280) {
            ctx->pc = 0x31A2CCu;
            goto label_31a2cc;
        }
    }
    ctx->pc = 0x31A288u;
    // 0x31a288: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x31a288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x31a28c: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x31a28cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
label_31a290:
    // 0x31a290: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x31a290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x31a294: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A294u;
    {
        const bool branch_taken_0x31a294 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x31A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A294u;
        // 0x31a298: 0x2463fffe  addiu       $v1, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a294) {
            ctx->pc = 0x31A2A8u;
            goto label_31a2a8;
        }
    }
    ctx->pc = 0x31A29Cu;
    // 0x31a29c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x31a29cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31a2a0: 0x5046fffb  beql        $v0, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31A2A0u;
    {
        const bool branch_taken_0x31a2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x31a2a0) {
            ctx->pc = 0x31A2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A2A0u;
            // 0x31a2a4: 0xa4670000  sh          $a3, 0x0($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a290;
        }
    }
    ctx->pc = 0x31A2A8u;
label_31a2a8:
    // 0x31a2a8: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x31a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x31a2ac: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x31a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x31a2b0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x31a2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31a2b4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x31a2b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31a2b8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A2B8u;
    {
        const bool branch_taken_0x31a2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A2B8u;
        // 0x31a2bc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a2b8) {
            ctx->pc = 0x31A2C8u;
            goto label_31a2c8;
        }
    }
    ctx->pc = 0x31A2C0u;
    // 0x31a2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x31A2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A2C0u;
        // 0x31a2c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A2C8u;
label_31a2c8:
    // 0x31a2c8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x31a2c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_31a2cc:
    // 0x31a2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x31A2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A2CCu;
        // 0x31a2d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A2D4u;
    // 0x31a2d4: 0x0  nop
    ctx->pc = 0x31a2d4u;
    // NOP
    ctx->pc = 0x31a2d8u;
}
