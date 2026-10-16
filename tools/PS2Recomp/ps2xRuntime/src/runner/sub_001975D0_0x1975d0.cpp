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

// Function: sub_001975D0
// Address: 0x1975d0 - 0x1977a8
void sub_001975D0_0x1975d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001975D0_0x1975d0");
#endif

    switch (ctx->pc) {
        case 0x1975f4u: goto label_1975f4;
        case 0x197640u: goto label_197640;
        default: break;
    }

    ctx->pc = 0x1975d0u;

    // 0x1975d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1975d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1975d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1975d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1975d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1975d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1975dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1975dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1975e0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1975e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1975e4: 0x7fb40000  sq          $s4, 0x0($sp)
    ctx->pc = 0x1975e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 20));
    // 0x1975e8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1975e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1975ec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1975ECu;
    {
        const bool branch_taken_0x1975ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1975F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975ECu;
        // 0x1975f0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975ec) {
            ctx->pc = 0x1975FCu;
            goto label_1975fc;
        }
    }
    ctx->pc = 0x1975F4u;
label_1975f4:
    // 0x1975f4: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1975F4u;
    {
        const bool branch_taken_0x1975f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1975F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975F4u;
        // 0x1975f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975f4) {
            ctx->pc = 0x19778Cu;
            goto label_19778c;
        }
    }
    ctx->pc = 0x1975FCu;
label_1975fc:
    // 0x1975fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1975fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197600: 0x1860005a  blez        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x197600u;
    {
        const bool branch_taken_0x197600 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x197604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197600u;
        // 0x197604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197600) {
            ctx->pc = 0x19776Cu;
            goto label_19776c;
        }
    }
    ctx->pc = 0x197608u;
    // 0x197608: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x197608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x19760c: 0x60782d  daddu       $t7, $v1, $zero
    ctx->pc = 0x19760cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197610: 0x245411d1  addiu       $s4, $v0, 0x11D1
    ctx->pc = 0x197610u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4561));
    // 0x197614: 0x240e0007  addiu       $t6, $zero, 0x7
    ctx->pc = 0x197614u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x197618: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x197618u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19761c: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x19761cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197620: 0x24130022  addiu       $s3, $zero, 0x22
    ctx->pc = 0x197620u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x197624: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x197624u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x197628: 0x2412002f  addiu       $s2, $zero, 0x2F
    ctx->pc = 0x197628u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x19762c: 0x2411003d  addiu       $s1, $zero, 0x3D
    ctx->pc = 0x19762cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x197630: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x197630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197634: 0x2419005f  addiu       $t9, $zero, 0x5F
    ctx->pc = 0x197634u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x197638: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x197638u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19763c: 0x2488000c  addiu       $t0, $a0, 0xC
    ctx->pc = 0x19763cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_197640:
    // 0x197640: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x197640u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x197644: 0xd41021  addu        $v0, $a2, $s4
    ctx->pc = 0x197644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x197648: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x197648u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19764c: 0x30e30008  andi        $v1, $a3, 0x8
    ctx->pc = 0x19764cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x197650: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x197650u;
    {
        const bool branch_taken_0x197650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197650) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x197658u;
    // 0x197658: 0x50a0004c  beql        $a1, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x197658u;
    {
        const bool branch_taken_0x197658 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x197658) {
            ctx->pc = 0x19765Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197658u;
            // 0x19765c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19778Cu;
            goto label_19778c;
        }
    }
    ctx->pc = 0x197660u;
    // 0x197660: 0x50ae0004  beql        $a1, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x197660u;
    {
        const bool branch_taken_0x197660 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 14));
        if (branch_taken_0x197660) {
            ctx->pc = 0x197664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197660u;
            // 0x197664: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197674u;
            goto label_197674;
        }
    }
    ctx->pc = 0x197668u;
    // 0x197668: 0x14ad0003  bne         $a1, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x197668u;
    {
        const bool branch_taken_0x197668 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 13));
        ctx->pc = 0x19766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197668u;
        // 0x19766c: 0x38a20003  xori        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x197668) {
            ctx->pc = 0x197678u;
            goto label_197678;
        }
    }
    ctx->pc = 0x197670u;
    // 0x197670: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x197670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197674:
    // 0x197674: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x197674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
label_197678:
    // 0x197678: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x197678u;
    {
        const bool branch_taken_0x197678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197678u;
        // 0x19767c: 0x182280a  movz        $a1, $t4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197678) {
            ctx->pc = 0x19775Cu;
            goto label_19775c;
        }
    }
    ctx->pc = 0x197680u;
label_197680:
    // 0x197680: 0x14d3000a  bne         $a2, $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x197680u;
    {
        const bool branch_taken_0x197680 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 19));
        ctx->pc = 0x197684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197680u;
        // 0x197684: 0x24a2fffb  addiu       $v0, $a1, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197680) {
            ctx->pc = 0x1976ACu;
            goto label_1976ac;
        }
    }
    ctx->pc = 0x197688u;
    // 0x197688: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x197688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x19768c: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x19768Cu;
    {
        const bool branch_taken_0x19768c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19768Cu;
        // 0x197690: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19768c) {
            ctx->pc = 0x19778Cu;
            goto label_19778c;
        }
    }
    ctx->pc = 0x197694u;
    // 0x197694: 0x1540003d  bnez        $t2, . + 4 + (0x3D << 2)
    ctx->pc = 0x197694u;
    {
        const bool branch_taken_0x197694 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x197698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197694u;
        // 0x197698: 0x38a30005  xori        $v1, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x197694) {
            ctx->pc = 0x19778Cu;
            goto label_19778c;
        }
    }
    ctx->pc = 0x19769Cu;
    // 0x19769c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x19769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1976a0: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x1976a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1976a4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1976A4u;
    {
        const bool branch_taken_0x1976a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976A4u;
        // 0x1976a8: 0x43280b  movn        $a1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976a4) {
            ctx->pc = 0x19775Cu;
            goto label_19775c;
        }
    }
    ctx->pc = 0x1976ACu;
label_1976ac:
    // 0x1976ac: 0x14d2000d  bne         $a2, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1976ACu;
    {
        const bool branch_taken_0x1976ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 18));
        if (branch_taken_0x1976ac) {
            ctx->pc = 0x1976E4u;
            goto label_1976e4;
        }
    }
    ctx->pc = 0x1976B4u;
    // 0x1976b4: 0x50ab002a  beql        $a1, $t3, . + 4 + (0x2A << 2)
    ctx->pc = 0x1976B4u;
    {
        const bool branch_taken_0x1976b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 11));
        if (branch_taken_0x1976b4) {
            ctx->pc = 0x1976B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1976B4u;
            // 0x1976b8: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197760u;
            goto label_197760;
        }
    }
    ctx->pc = 0x1976BCu;
    // 0x1976bc: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1976BCu;
    {
        const bool branch_taken_0x1976bc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1976bc) {
            ctx->pc = 0x1976D4u;
            goto label_1976d4;
        }
    }
    ctx->pc = 0x1976C4u;
    // 0x1976c4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1976c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1976c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1976c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1976cc: 0x1522002f  bne         $t1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1976CCu;
    {
        const bool branch_taken_0x1976cc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1976D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976CCu;
        // 0x1976d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976cc) {
            ctx->pc = 0x19778Cu;
            goto label_19778c;
        }
    }
    ctx->pc = 0x1976D4u;
label_1976d4:
    // 0x1976d4: 0x1540ffc7  bnez        $t2, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1976D4u;
    {
        const bool branch_taken_0x1976d4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1976D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976D4u;
        // 0x1976d8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976d4) {
            ctx->pc = 0x1975F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1975f4;
        }
    }
    ctx->pc = 0x1976DCu;
    // 0x1976dc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1976DCu;
    {
        const bool branch_taken_0x1976dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976DCu;
        // 0x1976e0: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976dc) {
            ctx->pc = 0x197760u;
            goto label_197760;
        }
    }
    ctx->pc = 0x1976E4u;
label_1976e4:
    // 0x1976e4: 0x14d1000b  bne         $a2, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1976E4u;
    {
        const bool branch_taken_0x1976e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        if (branch_taken_0x1976e4) {
            ctx->pc = 0x197714u;
            goto label_197714;
        }
    }
    ctx->pc = 0x1976ECu;
    // 0x1976ec: 0x10ab0005  beq         $a1, $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1976ECu;
    {
        const bool branch_taken_0x1976ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 11));
        if (branch_taken_0x1976ec) {
            ctx->pc = 0x197704u;
            goto label_197704;
        }
    }
    ctx->pc = 0x1976F4u;
    // 0x1976f4: 0x10ac0003  beq         $a1, $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1976F4u;
    {
        const bool branch_taken_0x1976f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 12));
        if (branch_taken_0x1976f4) {
            ctx->pc = 0x197704u;
            goto label_197704;
        }
    }
    ctx->pc = 0x1976FCu;
    // 0x1976fc: 0x14b00023  bne         $a1, $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1976FCu;
    {
        const bool branch_taken_0x1976fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x197700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976FCu;
        // 0x197700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976fc) {
            ctx->pc = 0x19778Cu;
            goto label_19778c;
        }
    }
    ctx->pc = 0x197704u;
label_197704:
    // 0x197704: 0x1540ffbb  bnez        $t2, . + 4 + (-0x45 << 2)
    ctx->pc = 0x197704u;
    {
        const bool branch_taken_0x197704 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x197708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197704u;
        // 0x197708: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197704) {
            ctx->pc = 0x1975F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1975f4;
        }
    }
    ctx->pc = 0x19770Cu;
    // 0x19770c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19770Cu;
    {
        const bool branch_taken_0x19770c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19770Cu;
        // 0x197710: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19770c) {
            ctx->pc = 0x197760u;
            goto label_197760;
        }
    }
    ctx->pc = 0x197714u;
label_197714:
    // 0x197714: 0x10ab0011  beq         $a1, $t3, . + 4 + (0x11 << 2)
    ctx->pc = 0x197714u;
    {
        const bool branch_taken_0x197714 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 11));
        ctx->pc = 0x197718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197714u;
        // 0x197718: 0x30e20007  andi        $v0, $a3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x197714) {
            ctx->pc = 0x19775Cu;
            goto label_19775c;
        }
    }
    ctx->pc = 0x19771Cu;
    // 0x19771c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19771Cu;
    {
        const bool branch_taken_0x19771c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19771c) {
            ctx->pc = 0x19772Cu;
            goto label_19772c;
        }
    }
    ctx->pc = 0x197724u;
    // 0x197724: 0x14d90019  bne         $a2, $t9, . + 4 + (0x19 << 2)
    ctx->pc = 0x197724u;
    {
        const bool branch_taken_0x197724 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 25));
        ctx->pc = 0x197728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197724u;
        // 0x197728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197724) {
            ctx->pc = 0x19778Cu;
            goto label_19778c;
        }
    }
    ctx->pc = 0x19772Cu;
label_19772c:
    // 0x19772c: 0x10ae0017  beq         $a1, $t6, . + 4 + (0x17 << 2)
    ctx->pc = 0x19772Cu;
    {
        const bool branch_taken_0x19772c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 14));
        ctx->pc = 0x197730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19772Cu;
        // 0x197730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19772c) {
            ctx->pc = 0x19778Cu;
            goto label_19778c;
        }
    }
    ctx->pc = 0x197734u;
    // 0x197734: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x197734u;
    {
        const bool branch_taken_0x197734 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x197738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197734u;
        // 0x197738: 0x2ca20002  sltiu       $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x197734) {
            ctx->pc = 0x197744u;
            goto label_197744;
        }
    }
    ctx->pc = 0x19773Cu;
    // 0x19773c: 0x50b80013  beql        $a1, $t8, . + 4 + (0x13 << 2)
    ctx->pc = 0x19773Cu;
    {
        const bool branch_taken_0x19773c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 24));
        if (branch_taken_0x19773c) {
            ctx->pc = 0x197740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19773Cu;
            // 0x197740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19778Cu;
            goto label_19778c;
        }
    }
    ctx->pc = 0x197744u;
label_197744:
    // 0x197744: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197744u;
    {
        const bool branch_taken_0x197744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197744u;
        // 0x197748: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x197744) {
            ctx->pc = 0x19775Cu;
            goto label_19775c;
        }
    }
    ctx->pc = 0x19774Cu;
    // 0x19774c: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x19774Cu;
    {
        const bool branch_taken_0x19774c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19774Cu;
        // 0x197750: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19774c) {
            ctx->pc = 0x1975F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1975f4;
        }
    }
    ctx->pc = 0x197754u;
    // 0x197754: 0x1a5100a  movz        $v0, $t5, $a1
    ctx->pc = 0x197754u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13));
    // 0x197758: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x197758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19775c:
    // 0x19775c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x19775cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_197760:
    // 0x197760: 0x12f102a  slt         $v0, $t1, $t7
    ctx->pc = 0x197760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x197764: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x197764u;
    {
        const bool branch_taken_0x197764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197764u;
        // 0x197768: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197764) {
            ctx->pc = 0x197640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197640;
        }
    }
    ctx->pc = 0x19776Cu;
label_19776c:
    // 0x19776c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19776cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197770: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197770u;
    {
        const bool branch_taken_0x197770 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x197774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197770u;
        // 0x197774: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197770) {
            ctx->pc = 0x197788u;
            goto label_197788;
        }
    }
    ctx->pc = 0x197778u;
    // 0x197778: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197778u;
    {
        const bool branch_taken_0x197778 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x19777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197778u;
        // 0x19777c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197778) {
            ctx->pc = 0x197788u;
            goto label_197788;
        }
    }
    ctx->pc = 0x197780u;
    // 0x197780: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x197780u;
    {
        const bool branch_taken_0x197780 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x197784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197780u;
        // 0x197784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197780) {
            ctx->pc = 0x19778Cu;
            goto label_19778c;
        }
    }
    ctx->pc = 0x197788u;
label_197788:
    // 0x197788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19778c:
    // 0x19778c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19778cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197790: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x197790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197794: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x197794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197798: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x197798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19779c: 0x7bb40000  lq          $s4, 0x0($sp)
    ctx->pc = 0x19779cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1977a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1977A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1977A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1977A0u;
        // 0x1977a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1977A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1977A8u;
}
