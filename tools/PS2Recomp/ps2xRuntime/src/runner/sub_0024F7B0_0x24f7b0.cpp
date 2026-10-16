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

// Function: sub_0024F7B0
// Address: 0x24f7b0 - 0x24f928
void sub_0024F7B0_0x24f7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F7B0_0x24f7b0");
#endif

    switch (ctx->pc) {
        case 0x24f810u: goto label_24f810;
        case 0x24f820u: goto label_24f820;
        case 0x24f86cu: goto label_24f86c;
        case 0x24f880u: goto label_24f880;
        case 0x24f890u: goto label_24f890;
        default: break;
    }

    ctx->pc = 0x24f7b0u;

    // 0x24f7b0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x24f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x24f7b4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x24f7b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f7b8: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x24f7b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24f7bc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x24f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24f7c0: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x24f7c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x24f7c4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24F7C4u;
    {
        const bool branch_taken_0x24f7c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F7C4u;
        // 0x24f7c8: 0x8c8c0010  lw          $t4, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7c4) {
            ctx->pc = 0x24F7FCu;
            goto label_24f7fc;
        }
    }
    ctx->pc = 0x24F7CCu;
    // 0x24f7cc: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x24f7ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x24f7d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F7D0u;
    {
        const bool branch_taken_0x24f7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F7D0u;
        // 0x24f7d4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7d0) {
            ctx->pc = 0x24F7E8u;
            goto label_24f7e8;
        }
    }
    ctx->pc = 0x24F7D8u;
    // 0x24f7d8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24F7D8u;
    {
        const bool branch_taken_0x24f7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F7D8u;
        // 0x24f7dc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7d8) {
            ctx->pc = 0x24F7FCu;
            goto label_24f7fc;
        }
    }
    ctx->pc = 0x24F7E0u;
    // 0x24f7e0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x24F7E0u;
    {
        const bool branch_taken_0x24f7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F7E0u;
        // 0x24f7e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7e0) {
            ctx->pc = 0x24F8CCu;
            goto label_24f8cc;
        }
    }
    ctx->pc = 0x24F7E8u;
label_24f7e8:
    // 0x24f7e8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x24f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x24f7ec: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x24F7ECu;
    {
        const bool branch_taken_0x24f7ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F7ECu;
        // 0x24f7f0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7ec) {
            ctx->pc = 0x24F874u;
            goto label_24f874;
        }
    }
    ctx->pc = 0x24F7F4u;
    // 0x24f7f4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x24F7F4u;
    {
        const bool branch_taken_0x24f7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F7F4u;
        // 0x24f7f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7f4) {
            ctx->pc = 0x24F8CCu;
            goto label_24f8cc;
        }
    }
    ctx->pc = 0x24F7FCu;
label_24f7fc:
    // 0x24f7fc: 0x8c890018  lw          $t1, 0x18($a0)
    ctx->pc = 0x24f7fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x24f800: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24f800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f804: 0x1940002f  blez        $t2, . + 4 + (0x2F << 2)
    ctx->pc = 0x24F804u;
    {
        const bool branch_taken_0x24f804 = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x24F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F804u;
        // 0x24f808: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f804) {
            ctx->pc = 0x24F8C4u;
            goto label_24f8c4;
        }
    }
    ctx->pc = 0x24F80Cu;
    // 0x24f80c: 0x0  nop
    ctx->pc = 0x24f80cu;
    // NOP
label_24f810:
    // 0x24f810: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x24f810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f814: 0x1900000f  blez        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x24F814u;
    {
        const bool branch_taken_0x24f814 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x24F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F814u;
        // 0x24f818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f814) {
            ctx->pc = 0x24F854u;
            goto label_24f854;
        }
    }
    ctx->pc = 0x24F81Cu;
    // 0x24f81c: 0x0  nop
    ctx->pc = 0x24f81cu;
    // NOP
label_24f820:
    // 0x24f820: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x24f820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24f824: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24f824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24f828: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x24f828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x24f82c: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x24f82cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x24f830: 0x2c4300f0  sltiu       $v1, $v0, 0xF0
    ctx->pc = 0x24f830u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
    // 0x24f834: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F834u;
    {
        const bool branch_taken_0x24f834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F834u;
        // 0x24f838: 0x2c420010  sltiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f834) {
            ctx->pc = 0x24F844u;
            goto label_24f844;
        }
    }
    ctx->pc = 0x24F83Cu;
    // 0x24f83c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24F83Cu;
    {
        const bool branch_taken_0x24f83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F83Cu;
        // 0x24f840: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f83c) {
            ctx->pc = 0x24F86Cu;
            goto label_24f86c;
        }
    }
    ctx->pc = 0x24F844u;
label_24f844:
    // 0x24f844: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24f844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x24f848: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x24f848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x24f84c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x24F84Cu;
    {
        const bool branch_taken_0x24f84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F84Cu;
        // 0x24f850: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f84c) {
            ctx->pc = 0x24F820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f820;
        }
    }
    ctx->pc = 0x24F854u;
label_24f854:
    // 0x24f854: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24f854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x24f858: 0xea102a  slt         $v0, $a3, $t2
    ctx->pc = 0x24f858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x24f85c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x24F85Cu;
    {
        const bool branch_taken_0x24f85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F85Cu;
        // 0x24f860: 0x8c2021  addu        $a0, $a0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f85c) {
            ctx->pc = 0x24F810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f810;
        }
    }
    ctx->pc = 0x24F864u;
    // 0x24f864: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x24F864u;
    {
        const bool branch_taken_0x24f864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F864u;
        // 0x24f868: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f864) {
            ctx->pc = 0x24F8C8u;
            goto label_24f8c8;
        }
    }
    ctx->pc = 0x24F86Cu;
label_24f86c:
    // 0x24f86c: 0x3e00008  jr          $ra
    ctx->pc = 0x24F86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F86Cu;
        // 0x24f870: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F874u;
label_24f874:
    // 0x24f874: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x24f874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x24f878: 0x19400012  blez        $t2, . + 4 + (0x12 << 2)
    ctx->pc = 0x24F878u;
    {
        const bool branch_taken_0x24f878 = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x24F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F878u;
        // 0x24f87c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f878) {
            ctx->pc = 0x24F8C4u;
            goto label_24f8c4;
        }
    }
    ctx->pc = 0x24F880u;
label_24f880:
    // 0x24f880: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x24f880u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f884: 0x1900000b  blez        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x24F884u;
    {
        const bool branch_taken_0x24f884 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x24F888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F884u;
        // 0x24f888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f884) {
            ctx->pc = 0x24F8B4u;
            goto label_24f8b4;
        }
    }
    ctx->pc = 0x24F88Cu;
    // 0x24f88c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x24f88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_24f890:
    // 0x24f890: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x24f890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x24f894: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F894u;
    {
        const bool branch_taken_0x24f894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x24F898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F894u;
        // 0x24f898: 0x2c420010  sltiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f894) {
            ctx->pc = 0x24F8A4u;
            goto label_24f8a4;
        }
    }
    ctx->pc = 0x24F89Cu;
    // 0x24f89c: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x24F89Cu;
    {
        const bool branch_taken_0x24f89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F89Cu;
        // 0x24f8a0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f89c) {
            ctx->pc = 0x24F86Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f86c;
        }
    }
    ctx->pc = 0x24F8A4u;
label_24f8a4:
    // 0x24f8a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24f8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x24f8a8: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x24f8a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x24f8ac: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24F8ACu;
    {
        const bool branch_taken_0x24f8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F8ACu;
        // 0x24f8b0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f8ac) {
            ctx->pc = 0x24F890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f890;
        }
    }
    ctx->pc = 0x24F8B4u;
label_24f8b4:
    // 0x24f8b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24f8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x24f8b8: 0xea102a  slt         $v0, $a3, $t2
    ctx->pc = 0x24f8b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x24f8bc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x24F8BCu;
    {
        const bool branch_taken_0x24f8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F8BCu;
        // 0x24f8c0: 0x8c2021  addu        $a0, $a0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f8bc) {
            ctx->pc = 0x24F880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f880;
        }
    }
    ctx->pc = 0x24F8C4u;
label_24f8c4:
    // 0x24f8c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24f8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24f8c8:
    // 0x24f8c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24f8cc:
    // 0x24f8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x24F8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F8CCu;
        // 0x24f8d0: 0x6b100b  movn        $v0, $v1, $t3 (Delay Slot)
        if (GPR_U64(ctx, 11) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F8D4u;
    // 0x24f8d4: 0x0  nop
    ctx->pc = 0x24f8d4u;
    // NOP
    // 0x24f8d8: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x24f8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f8dc: 0x0  nop
    ctx->pc = 0x24f8dcu;
    // NOP
    // 0x24f8e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24f8e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f8e4: 0x0  nop
    ctx->pc = 0x24f8e4u;
    // NOP
    // 0x24f8e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24f8e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f8ec: 0x0  nop
    ctx->pc = 0x24f8ecu;
    // NOP
    // 0x24f8f0: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x24f8f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f8f4: 0x0  nop
    ctx->pc = 0x24f8f4u;
    // NOP
    // 0x24f8f8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x24f8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x24f8fc: 0x0  nop
    ctx->pc = 0x24f8fcu;
    // NOP
    // 0x24f900: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x24f900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24f904: 0x0  nop
    ctx->pc = 0x24f904u;
    // NOP
    // 0x24f908: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x24f908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x24f90c: 0x0  nop
    ctx->pc = 0x24f90cu;
    // NOP
    // 0x24f910: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x24f910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x24f914: 0x0  nop
    ctx->pc = 0x24f914u;
    // NOP
    // 0x24f918: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x24f918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24f91c: 0x0  nop
    ctx->pc = 0x24f91cu;
    // NOP
    // 0x24f920: 0x0  nop
    ctx->pc = 0x24f920u;
    // NOP
    // 0x24f924: 0x0  nop
    ctx->pc = 0x24f924u;
    // NOP
    ctx->pc = 0x24f928u;
}
