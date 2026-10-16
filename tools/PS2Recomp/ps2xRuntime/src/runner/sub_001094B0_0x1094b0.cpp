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

// Function: sub_001094B0
// Address: 0x1094b0 - 0x1095f0
void sub_001094B0_0x1094b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001094B0_0x1094b0");
#endif

    switch (ctx->pc) {
        case 0x1094c8u: goto label_1094c8;
        default: break;
    }

    ctx->pc = 0x1094b0u;

    // 0x1094b0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1094b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1094b4: 0xa71023  subu        $v0, $a1, $a3
    ctx->pc = 0x1094b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1094b8: 0x24143  sra         $t0, $v0, 5
    ctx->pc = 0x1094b8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1094bc: 0x19000025  blez        $t0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1094BCu;
    {
        const bool branch_taken_0x1094bc = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x1094C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1094BCu;
        // 0x1094c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1094bc) {
            ctx->pc = 0x109554u;
            goto label_109554;
        }
    }
    ctx->pc = 0x1094C4u;
    // 0x1094c4: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1094c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1094c8:
    // 0x1094c8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1094c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1094cc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1094ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1094d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1094d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1094d4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1094d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1094d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1094d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1094dc: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1094DCu;
    {
        const bool branch_taken_0x1094dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1094dc) {
            ctx->pc = 0x1095E0u;
            goto label_1095e0;
        }
    }
    ctx->pc = 0x1094E4u;
    // 0x1094e4: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1094e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1094e8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1094e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1094ec: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1094ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1094f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1094f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1094f4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1094f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1094f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1094f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1094fc: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1094FCu;
    {
        const bool branch_taken_0x1094fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1094fc) {
            ctx->pc = 0x1095E0u;
            goto label_1095e0;
        }
    }
    ctx->pc = 0x109504u;
    // 0x109504: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x109504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x109508: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x109508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x10950c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x10950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x109510: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x109510u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109514: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x109514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x109518: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x109518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10951c: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x10951Cu;
    {
        const bool branch_taken_0x10951c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10951c) {
            ctx->pc = 0x1095E0u;
            goto label_1095e0;
        }
    }
    ctx->pc = 0x109524u;
    // 0x109524: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x109524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x109528: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x109528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x10952c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x10952cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x109530: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x109530u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109534: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x109534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x109538: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x109538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10953c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x10953Cu;
    {
        const bool branch_taken_0x10953c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10953Cu;
        // 0x109540: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10953c) {
            ctx->pc = 0x1095E0u;
            goto label_1095e0;
        }
    }
    ctx->pc = 0x109544u;
    // 0x109544: 0x1d00ffe0  bgtz        $t0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x109544u;
    {
        const bool branch_taken_0x109544 = (GPR_S64(ctx, 8) > 0);
        ctx->pc = 0x109548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109544u;
        // 0x109548: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109544) {
            ctx->pc = 0x1094C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1094c8;
        }
    }
    ctx->pc = 0x10954Cu;
    // 0x10954c: 0xa71023  subu        $v0, $a1, $a3
    ctx->pc = 0x10954cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x109550: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x109550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109554:
    // 0x109554: 0x220c3  sra         $a0, $v0, 3
    ctx->pc = 0x109554u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
    // 0x109558: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x109558u;
    {
        const bool branch_taken_0x109558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x10955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109558u;
        // 0x10955c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109558) {
            ctx->pc = 0x1095C0u;
            goto label_1095c0;
        }
    }
    ctx->pc = 0x109560u;
    // 0x109560: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x109560u;
    {
        const bool branch_taken_0x109560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109560u;
        // 0x109564: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109560) {
            ctx->pc = 0x1095E8u;
            goto label_1095e8;
        }
    }
    ctx->pc = 0x109568u;
    // 0x109568: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x109568u;
    {
        const bool branch_taken_0x109568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x10956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109568u;
        // 0x10956c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109568) {
            ctx->pc = 0x10959Cu;
            goto label_10959c;
        }
    }
    ctx->pc = 0x109570u;
    // 0x109570: 0x1482001d  bne         $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x109570u;
    {
        const bool branch_taken_0x109570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x109570) {
            ctx->pc = 0x1095E8u;
            goto label_1095e8;
        }
    }
    ctx->pc = 0x109578u;
    // 0x109578: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x109578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x10957c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x10957cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x109580: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x109580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x109584: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x109584u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109588: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x109588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x10958c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10958cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x109590: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x109590u;
    {
        const bool branch_taken_0x109590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109590) {
            ctx->pc = 0x1095E0u;
            goto label_1095e0;
        }
    }
    ctx->pc = 0x109598u;
    // 0x109598: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x109598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_10959c:
    // 0x10959c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x10959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1095a0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1095a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1095a4: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1095a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1095a8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1095a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1095ac: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1095acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1095b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1095b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1095b4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1095B4u;
    {
        const bool branch_taken_0x1095b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1095b4) {
            ctx->pc = 0x1095E0u;
            goto label_1095e0;
        }
    }
    ctx->pc = 0x1095BCu;
    // 0x1095bc: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1095bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1095c0:
    // 0x1095c0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1095c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1095c4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1095c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1095c8: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1095c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1095cc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1095ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1095d0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1095d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1095d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1095d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1095d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1095D8u;
    {
        const bool branch_taken_0x1095d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1095d8) {
            ctx->pc = 0x1095E8u;
            goto label_1095e8;
        }
    }
    ctx->pc = 0x1095E0u;
label_1095e0:
    // 0x1095e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1095E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1095E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095E0u;
        // 0x1095e4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1095E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1095E8u;
label_1095e8:
    // 0x1095e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1095E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1095ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095E8u;
        // 0x1095ec: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1095E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1095F0u;
}
