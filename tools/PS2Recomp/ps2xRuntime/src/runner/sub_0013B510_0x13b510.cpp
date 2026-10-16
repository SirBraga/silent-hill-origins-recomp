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

// Function: sub_0013B510
// Address: 0x13b510 - 0x13b600
void sub_0013B510_0x13b510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B510_0x13b510");
#endif

    switch (ctx->pc) {
        case 0x13b538u: goto label_13b538;
        case 0x13b550u: goto label_13b550;
        case 0x13b59cu: goto label_13b59c;
        case 0x13b5b8u: goto label_13b5b8;
        case 0x13b5d4u: goto label_13b5d4;
        default: break;
    }

    ctx->pc = 0x13b510u;

    // 0x13b510: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13b510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13b514: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x13b514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x13b518: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13b518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x13b51c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13b51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b520: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x13b520u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x13b524: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13b524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x13b528: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13b528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13b52c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13b52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13b530: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x13B530u;
    SET_GPR_U32(ctx, 31, 0x13B538u);
    ctx->pc = 0x13B534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B530u;
    // 0x13b534: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x13B530u, 0x13B538u)) {
        return;
    }
    ctx->pc = 0x13B538u;
label_13b538:
    // 0x13b538: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13b538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b53c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13b540: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x13B540u;
    {
        const bool branch_taken_0x13b540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B540u;
        // 0x13b544: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b540) {
            ctx->pc = 0x13B5E4u;
            goto label_13b5e4;
        }
    }
    ctx->pc = 0x13B548u;
    // 0x13b548: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x13b548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13b54c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x13b54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13b550:
    // 0x13b550: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x13b550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13b554: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x13b554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x13b558: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B558u;
    {
        const bool branch_taken_0x13b558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B558u;
        // 0x13b55c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b558) {
            ctx->pc = 0x13B578u;
            goto label_13b578;
        }
    }
    ctx->pc = 0x13B560u;
    // 0x13b560: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x13B560u;
    {
        const bool branch_taken_0x13b560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b560) {
            ctx->pc = 0x13B564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B560u;
            // 0x13b564: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B5BCu;
            goto label_13b5bc;
        }
    }
    ctx->pc = 0x13B568u;
    // 0x13b568: 0x10720007  beq         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B568u;
    {
        const bool branch_taken_0x13b568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x13B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B568u;
        // 0x13b56c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b568) {
            ctx->pc = 0x13B588u;
            goto label_13b588;
        }
    }
    ctx->pc = 0x13B570u;
    // 0x13b570: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x13B570u;
    {
        const bool branch_taken_0x13b570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B570u;
        // 0x13b574: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b570) {
            ctx->pc = 0x13B5C0u;
            goto label_13b5c0;
        }
    }
    ctx->pc = 0x13B578u;
label_13b578:
    // 0x13b578: 0x1071000a  beq         $v1, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x13B578u;
    {
        const bool branch_taken_0x13b578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x13B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B578u;
        // 0x13b57c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b578) {
            ctx->pc = 0x13B5A4u;
            goto label_13b5a4;
        }
    }
    ctx->pc = 0x13B580u;
    // 0x13b580: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13B580u;
    {
        const bool branch_taken_0x13b580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B580u;
        // 0x13b584: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b580) {
            ctx->pc = 0x13B5C0u;
            goto label_13b5c0;
        }
    }
    ctx->pc = 0x13B588u;
label_13b588:
    // 0x13b588: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x13b588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x13b58c: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x13B58Cu;
    {
        const bool branch_taken_0x13b58c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b58c) {
            ctx->pc = 0x13B590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B58Cu;
            // 0x13b590: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B5C0u;
            goto label_13b5c0;
        }
    }
    ctx->pc = 0x13B594u;
    // 0x13b594: 0xc07f960  jal         func_1FE580
    ctx->pc = 0x13B594u;
    SET_GPR_U32(ctx, 31, 0x13B59Cu);
    ctx->pc = 0x1FE580u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE580u, 0x13B594u, 0x13B59Cu)) {
        return;
    }
    ctx->pc = 0x13B59Cu;
label_13b59c:
    // 0x13b59c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13B59Cu;
    {
        const bool branch_taken_0x13b59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B59Cu;
        // 0x13b5a0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b59c) {
            ctx->pc = 0x13B5BCu;
            goto label_13b5bc;
        }
    }
    ctx->pc = 0x13B5A4u;
label_13b5a4:
    // 0x13b5a4: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x13b5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13b5a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b5ac: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x13b5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x13b5b0: 0xc04eef0  jal         func_13BBC0
    ctx->pc = 0x13B5B0u;
    SET_GPR_U32(ctx, 31, 0x13B5B8u);
    ctx->pc = 0x13B5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B5B0u;
    // 0x13b5b4: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x13B5B0u, 0x13B5B8u)) {
        return;
    }
    ctx->pc = 0x13B5B8u;
label_13b5b8:
    // 0x13b5b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13b5bc:
    // 0x13b5bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13b5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13b5c0:
    // 0x13b5c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13b5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b5c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13b5c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13b5cc: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x13B5CCu;
    SET_GPR_U32(ctx, 31, 0x13B5D4u);
    ctx->pc = 0x13B5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B5CCu;
    // 0x13b5d0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x13B5CCu, 0x13B5D4u)) {
        return;
    }
    ctx->pc = 0x13B5D4u;
label_13b5d4:
    // 0x13b5d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b5d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13b5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b5dc: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x13B5DCu;
    {
        const bool branch_taken_0x13b5dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B5DCu;
        // 0x13b5e0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b5dc) {
            ctx->pc = 0x13B550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b550;
        }
    }
    ctx->pc = 0x13B5E4u;
label_13b5e4:
    // 0x13b5e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x13b5e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b5e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x13b5e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b5ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13b5ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b5f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13b5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x13B5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B5F4u;
        // 0x13b5f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B5FCu;
    // 0x13b5fc: 0x0  nop
    ctx->pc = 0x13b5fcu;
    // NOP
    ctx->pc = 0x13b600u;
}
