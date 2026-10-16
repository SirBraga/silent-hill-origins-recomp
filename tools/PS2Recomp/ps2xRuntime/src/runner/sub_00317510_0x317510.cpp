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

// Function: sub_00317510
// Address: 0x317510 - 0x3175b0
void sub_00317510_0x317510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317510_0x317510");
#endif

    switch (ctx->pc) {
        case 0x31752cu: goto label_31752c;
        case 0x317540u: goto label_317540;
        case 0x317570u: goto label_317570;
        case 0x317580u: goto label_317580;
        default: break;
    }

    ctx->pc = 0x317510u;

    // 0x317510: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x317510u;
    {
        const bool branch_taken_0x317510 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x317514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317510u;
        // 0x317514: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317510) {
            ctx->pc = 0x31752Cu;
            goto label_31752c;
        }
    }
    ctx->pc = 0x317518u;
    // 0x317518: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x317518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31751c: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31751Cu;
    {
        const bool branch_taken_0x31751c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31751c) {
            ctx->pc = 0x317520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31751Cu;
            // 0x317520: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317530u;
            goto label_317530;
        }
    }
    ctx->pc = 0x317524u;
    // 0x317524: 0x3e00008  jr          $ra
    ctx->pc = 0x317524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317524u;
        // 0x317528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31752Cu;
label_31752c:
    // 0x31752c: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x31752cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_317530:
    // 0x317530: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x317530u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x317534: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x317534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x317538: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x317538u;
    {
        const bool branch_taken_0x317538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317538u;
        // 0x31753c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317538) {
            ctx->pc = 0x317558u;
            goto label_317558;
        }
    }
    ctx->pc = 0x317540u;
label_317540:
    // 0x317540: 0x5103fffa  beql        $t0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x317540u;
    {
        const bool branch_taken_0x317540 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x317540) {
            ctx->pc = 0x317544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317540u;
            // 0x317544: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31752Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31752c;
        }
    }
    ctx->pc = 0x317548u;
    // 0x317548: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x317548u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31754c: 0x0  nop
    ctx->pc = 0x31754cu;
    // NOP
    // 0x317550: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x317550u;
    {
        const bool branch_taken_0x317550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x317554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317550u;
        // 0x317554: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317550) {
            ctx->pc = 0x317540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317540;
        }
    }
    ctx->pc = 0x317558u;
label_317558:
    // 0x317558: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x317558u;
    {
        const bool branch_taken_0x317558 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x31755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317558u;
        // 0x31755c: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317558) {
            ctx->pc = 0x31756Cu;
            goto label_31756c;
        }
    }
    ctx->pc = 0x317560u;
    // 0x317560: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x317560u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x317564: 0x3e00008  jr          $ra
    ctx->pc = 0x317564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317564u;
        // 0x317568: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31756Cu;
label_31756c:
    // 0x31756c: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x31756cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_317570:
    // 0x317570: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x317570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317574: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x317574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x317578: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x317578u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31757c: 0x0  nop
    ctx->pc = 0x31757cu;
    // NOP
label_317580:
    // 0x317580: 0x14680006  bne         $v1, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x317580u;
    {
        const bool branch_taken_0x317580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x317584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317580u;
        // 0x317584: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317580) {
            ctx->pc = 0x31759Cu;
            goto label_31759c;
        }
    }
    ctx->pc = 0x317588u;
    // 0x317588: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x317588u;
    {
        const bool branch_taken_0x317588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x317588) {
            ctx->pc = 0x31758Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317588u;
            // 0x31758c: 0xa080ffff  sb          $zero, -0x1($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317594u;
            goto label_317594;
        }
    }
    ctx->pc = 0x317590u;
    // 0x317590: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x317590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317594:
    // 0x317594: 0x3e00008  jr          $ra
    ctx->pc = 0x317594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317594u;
        // 0x317598: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31759Cu;
label_31759c:
    // 0x31759c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31759Cu;
    {
        const bool branch_taken_0x31759c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31759c) {
            ctx->pc = 0x3175A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31759Cu;
            // 0x3175a0: 0x80e30000  lb          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317580;
        }
    }
    ctx->pc = 0x3175A4u;
    // 0x3175a4: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x3175A4u;
    {
        const bool branch_taken_0x3175a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3175A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175A4u;
        // 0x3175a8: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3175a4) {
            ctx->pc = 0x317570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317570;
        }
    }
    ctx->pc = 0x3175ACu;
    // 0x3175ac: 0x0  nop
    ctx->pc = 0x3175acu;
    // NOP
    ctx->pc = 0x3175b0u;
}
