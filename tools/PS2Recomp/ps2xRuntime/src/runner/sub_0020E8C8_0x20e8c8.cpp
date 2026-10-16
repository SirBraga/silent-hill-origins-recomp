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

// Function: sub_0020E8C8
// Address: 0x20e8c8 - 0x20eaf8
void sub_0020E8C8_0x20e8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E8C8_0x20e8c8");
#endif

    switch (ctx->pc) {
        case 0x20e8c8u: goto label_20e8c8;
        case 0x20e8ccu: goto label_20e8cc;
        case 0x20e8d0u: goto label_20e8d0;
        case 0x20e8d4u: goto label_20e8d4;
        case 0x20e8d8u: goto label_20e8d8;
        case 0x20e8dcu: goto label_20e8dc;
        case 0x20e8e0u: goto label_20e8e0;
        case 0x20e8e4u: goto label_20e8e4;
        case 0x20e8e8u: goto label_20e8e8;
        case 0x20e8ecu: goto label_20e8ec;
        case 0x20e8f0u: goto label_20e8f0;
        case 0x20e8f4u: goto label_20e8f4;
        case 0x20e8f8u: goto label_20e8f8;
        case 0x20e8fcu: goto label_20e8fc;
        case 0x20e900u: goto label_20e900;
        case 0x20e904u: goto label_20e904;
        case 0x20e908u: goto label_20e908;
        case 0x20e90cu: goto label_20e90c;
        case 0x20e910u: goto label_20e910;
        case 0x20e914u: goto label_20e914;
        case 0x20e918u: goto label_20e918;
        case 0x20e91cu: goto label_20e91c;
        case 0x20e920u: goto label_20e920;
        case 0x20e924u: goto label_20e924;
        case 0x20e928u: goto label_20e928;
        case 0x20e92cu: goto label_20e92c;
        case 0x20e930u: goto label_20e930;
        case 0x20e934u: goto label_20e934;
        case 0x20e938u: goto label_20e938;
        case 0x20e93cu: goto label_20e93c;
        case 0x20e940u: goto label_20e940;
        case 0x20e944u: goto label_20e944;
        case 0x20e948u: goto label_20e948;
        case 0x20e94cu: goto label_20e94c;
        case 0x20e950u: goto label_20e950;
        case 0x20e954u: goto label_20e954;
        case 0x20e958u: goto label_20e958;
        case 0x20e95cu: goto label_20e95c;
        case 0x20e960u: goto label_20e960;
        case 0x20e964u: goto label_20e964;
        case 0x20e968u: goto label_20e968;
        case 0x20e96cu: goto label_20e96c;
        case 0x20e970u: goto label_20e970;
        case 0x20e974u: goto label_20e974;
        case 0x20e978u: goto label_20e978;
        case 0x20e97cu: goto label_20e97c;
        case 0x20e980u: goto label_20e980;
        case 0x20e984u: goto label_20e984;
        case 0x20e988u: goto label_20e988;
        case 0x20e98cu: goto label_20e98c;
        case 0x20e990u: goto label_20e990;
        case 0x20e994u: goto label_20e994;
        case 0x20e998u: goto label_20e998;
        case 0x20e99cu: goto label_20e99c;
        case 0x20e9a0u: goto label_20e9a0;
        case 0x20e9a4u: goto label_20e9a4;
        case 0x20e9a8u: goto label_20e9a8;
        case 0x20e9acu: goto label_20e9ac;
        case 0x20e9b0u: goto label_20e9b0;
        case 0x20e9b4u: goto label_20e9b4;
        case 0x20e9b8u: goto label_20e9b8;
        case 0x20e9bcu: goto label_20e9bc;
        case 0x20e9c0u: goto label_20e9c0;
        case 0x20e9c4u: goto label_20e9c4;
        case 0x20e9c8u: goto label_20e9c8;
        case 0x20e9ccu: goto label_20e9cc;
        case 0x20e9d0u: goto label_20e9d0;
        case 0x20e9d4u: goto label_20e9d4;
        case 0x20e9d8u: goto label_20e9d8;
        case 0x20e9dcu: goto label_20e9dc;
        case 0x20e9e0u: goto label_20e9e0;
        case 0x20e9e4u: goto label_20e9e4;
        case 0x20e9e8u: goto label_20e9e8;
        case 0x20e9ecu: goto label_20e9ec;
        case 0x20e9f0u: goto label_20e9f0;
        case 0x20e9f4u: goto label_20e9f4;
        case 0x20e9f8u: goto label_20e9f8;
        case 0x20e9fcu: goto label_20e9fc;
        case 0x20ea00u: goto label_20ea00;
        case 0x20ea04u: goto label_20ea04;
        case 0x20ea08u: goto label_20ea08;
        case 0x20ea0cu: goto label_20ea0c;
        case 0x20ea10u: goto label_20ea10;
        case 0x20ea14u: goto label_20ea14;
        case 0x20ea18u: goto label_20ea18;
        case 0x20ea1cu: goto label_20ea1c;
        case 0x20ea20u: goto label_20ea20;
        case 0x20ea24u: goto label_20ea24;
        case 0x20ea28u: goto label_20ea28;
        case 0x20ea2cu: goto label_20ea2c;
        case 0x20ea30u: goto label_20ea30;
        case 0x20ea34u: goto label_20ea34;
        case 0x20ea38u: goto label_20ea38;
        case 0x20ea3cu: goto label_20ea3c;
        case 0x20ea40u: goto label_20ea40;
        case 0x20ea44u: goto label_20ea44;
        case 0x20ea48u: goto label_20ea48;
        case 0x20ea4cu: goto label_20ea4c;
        case 0x20ea50u: goto label_20ea50;
        case 0x20ea54u: goto label_20ea54;
        case 0x20ea58u: goto label_20ea58;
        case 0x20ea5cu: goto label_20ea5c;
        case 0x20ea60u: goto label_20ea60;
        case 0x20ea64u: goto label_20ea64;
        case 0x20ea68u: goto label_20ea68;
        case 0x20ea6cu: goto label_20ea6c;
        case 0x20ea70u: goto label_20ea70;
        case 0x20ea74u: goto label_20ea74;
        case 0x20ea78u: goto label_20ea78;
        case 0x20ea7cu: goto label_20ea7c;
        case 0x20ea80u: goto label_20ea80;
        case 0x20ea84u: goto label_20ea84;
        case 0x20ea88u: goto label_20ea88;
        case 0x20ea8cu: goto label_20ea8c;
        case 0x20ea90u: goto label_20ea90;
        case 0x20ea94u: goto label_20ea94;
        case 0x20ea98u: goto label_20ea98;
        case 0x20ea9cu: goto label_20ea9c;
        case 0x20eaa0u: goto label_20eaa0;
        case 0x20eaa4u: goto label_20eaa4;
        case 0x20eaa8u: goto label_20eaa8;
        case 0x20eaacu: goto label_20eaac;
        case 0x20eab0u: goto label_20eab0;
        case 0x20eab4u: goto label_20eab4;
        case 0x20eab8u: goto label_20eab8;
        case 0x20eabcu: goto label_20eabc;
        case 0x20eac0u: goto label_20eac0;
        case 0x20eac4u: goto label_20eac4;
        case 0x20eac8u: goto label_20eac8;
        case 0x20eaccu: goto label_20eacc;
        case 0x20ead0u: goto label_20ead0;
        case 0x20ead4u: goto label_20ead4;
        case 0x20ead8u: goto label_20ead8;
        case 0x20eadcu: goto label_20eadc;
        case 0x20eae0u: goto label_20eae0;
        case 0x20eae4u: goto label_20eae4;
        case 0x20eae8u: goto label_20eae8;
        case 0x20eaecu: goto label_20eaec;
        case 0x20eaf0u: goto label_20eaf0;
        case 0x20eaf4u: goto label_20eaf4;
        default: break;
    }

    ctx->pc = 0x20e8c8u;

label_20e8c8:
    // 0x20e8c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20e8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_20e8cc:
    // 0x20e8cc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x20e8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_20e8d0:
    // 0x20e8d0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x20e8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_20e8d4:
    // 0x20e8d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20e8d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20e8d8:
    // 0x20e8d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20e8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20e8dc:
    // 0x20e8dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20e8dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20e8e0:
    // 0x20e8e0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x20e8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_20e8e4:
    // 0x20e8e4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x20e8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_20e8e8:
    // 0x20e8e8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x20e8e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20e8ec:
    // 0x20e8ec: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x20e8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_20e8f0:
    // 0x20e8f0: 0x2879821  addu        $s3, $s4, $a3
    ctx->pc = 0x20e8f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
label_20e8f4:
    // 0x20e8f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20e8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20e8f8:
    // 0x20e8f8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x20e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20e8fc:
    // 0x20e8fc: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x20e8fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_20e900:
    // 0x20e900: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_20e904:
    if (ctx->pc == 0x20E904u) {
        ctx->pc = 0x20E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E900u;
        // 0x20e904: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E908u;
        goto label_20e908;
    }
    ctx->pc = 0x20E900u;
    {
        const bool branch_taken_0x20e900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E900u;
        // 0x20e904: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e900) {
            ctx->pc = 0x20E924u;
            goto label_20e924;
        }
    }
    ctx->pc = 0x20E908u;
label_20e908:
    // 0x20e908: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x20e908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20e90c:
    // 0x20e90c: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x20e90cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_20e910:
    // 0x20e910: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_20e914:
    if (ctx->pc == 0x20E914u) {
        ctx->pc = 0x20E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E910u;
        // 0x20e914: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E918u;
        goto label_20e918;
    }
    ctx->pc = 0x20E910u;
    {
        const bool branch_taken_0x20e910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e910) {
            ctx->pc = 0x20E914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E910u;
            // 0x20e914: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E928u;
            goto label_20e928;
        }
    }
    ctx->pc = 0x20E918u;
label_20e918:
    // 0x20e918: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20e918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20e91c:
    // 0x20e91c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_20e920:
    if (ctx->pc == 0x20E920u) {
        ctx->pc = 0x20E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E91Cu;
        // 0x20e920: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E924u;
        goto label_20e924;
    }
    ctx->pc = 0x20E91Cu;
    {
        const bool branch_taken_0x20e91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e91c) {
            ctx->pc = 0x20E920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E91Cu;
            // 0x20e920: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E944u;
            goto label_20e944;
        }
    }
    ctx->pc = 0x20E924u;
label_20e924:
    // 0x20e924: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x20e924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20e928:
    // 0x20e928: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x20e928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_20e92c:
    // 0x20e92c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20e92cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20e930:
    // 0x20e930: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20e930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20e934:
    // 0x20e934: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20e934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20e938:
    // 0x20e938: 0x60f809  jalr        $v1
label_20e93c:
    if (ctx->pc == 0x20E93Cu) {
        ctx->pc = 0x20E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E938u;
        // 0x20e93c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E940u;
        goto label_20e940;
    }
    ctx->pc = 0x20E938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20E940u);
        ctx->pc = 0x20E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E938u;
        // 0x20e93c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E938u, 0x20E940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E940u;
label_20e940:
    // 0x20e940: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x20e940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20e944:
    // 0x20e944: 0x283102b  sltu        $v0, $s4, $v1
    ctx->pc = 0x20e944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_20e948:
    // 0x20e948: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_20e94c:
    if (ctx->pc == 0x20E94Cu) {
        ctx->pc = 0x20E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E948u;
        // 0x20e94c: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E950u;
        goto label_20e950;
    }
    ctx->pc = 0x20E948u;
    {
        const bool branch_taken_0x20e948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e948) {
            ctx->pc = 0x20E94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E948u;
            // 0x20e94c: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E968u;
            goto label_20e968;
        }
    }
    ctx->pc = 0x20E950u;
label_20e950:
    // 0x20e950: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x20e950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_20e954:
    // 0x20e954: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20e954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20e958:
    // 0x20e958: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x20e958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_20e95c:
    // 0x20e95c: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_20e960:
    if (ctx->pc == 0x20E960u) {
        ctx->pc = 0x20E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E95Cu;
        // 0x20e960: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E964u;
        goto label_20e964;
    }
    ctx->pc = 0x20E95Cu;
    {
        const bool branch_taken_0x20e95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e95c) {
            ctx->pc = 0x20E960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E95Cu;
            // 0x20e960: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E9F8u;
            goto label_20e9f8;
        }
    }
    ctx->pc = 0x20E964u;
label_20e964:
    // 0x20e964: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x20e964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_20e968:
    // 0x20e968: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_20e96c:
    if (ctx->pc == 0x20E96Cu) {
        ctx->pc = 0x20E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E968u;
        // 0x20e96c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E970u;
        goto label_20e970;
    }
    ctx->pc = 0x20E968u;
    {
        const bool branch_taken_0x20e968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e968) {
            ctx->pc = 0x20E96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E968u;
            // 0x20e96c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E990u;
            goto label_20e990;
        }
    }
    ctx->pc = 0x20E970u;
label_20e970:
    // 0x20e970: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x20e970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20e974:
    // 0x20e974: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x20e974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_20e978:
    // 0x20e978: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20e978u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20e97c:
    // 0x20e97c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20e980:
    // 0x20e980: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20e980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20e984:
    // 0x20e984: 0x60f809  jalr        $v1
label_20e988:
    if (ctx->pc == 0x20E988u) {
        ctx->pc = 0x20E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E984u;
        // 0x20e988: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E98Cu;
        goto label_20e98c;
    }
    ctx->pc = 0x20E984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20E98Cu);
        ctx->pc = 0x20E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E984u;
        // 0x20e988: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E984u, 0x20E98Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E98Cu;
label_20e98c:
    // 0x20e98c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x20e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_20e990:
    // 0x20e990: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20e994:
    if (ctx->pc == 0x20E994u) {
        ctx->pc = 0x20E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E990u;
        // 0x20e994: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E998u;
        goto label_20e998;
    }
    ctx->pc = 0x20E990u;
    {
        const bool branch_taken_0x20e990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E990u;
        // 0x20e994: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e990) {
            ctx->pc = 0x20E9A8u;
            goto label_20e9a8;
        }
    }
    ctx->pc = 0x20E998u;
label_20e998:
    // 0x20e998: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20e998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20e99c:
    // 0x20e99c: 0xc083982  jal         func_20E608
label_20e9a0:
    if (ctx->pc == 0x20E9A0u) {
        ctx->pc = 0x20E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E99Cu;
        // 0x20e9a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E9A4u;
        goto label_20e9a4;
    }
    ctx->pc = 0x20E99Cu;
    SET_GPR_U32(ctx, 31, 0x20E9A4u);
    ctx->pc = 0x20E9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E99Cu;
    // 0x20e9a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20E608u, 0x20E99Cu, 0x20E9A4u)) {
        return;
    }
    ctx->pc = 0x20E9A4u;
label_20e9a4:
    // 0x20e9a4: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x20e9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_20e9a8:
    // 0x20e9a8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x20e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20e9ac:
    // 0x20e9ac: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x20e9acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_20e9b0:
    // 0x20e9b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20e9b4:
    if (ctx->pc == 0x20E9B4u) {
        ctx->pc = 0x20E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9B0u;
        // 0x20e9b4: 0x13103c  dsll32      $v0, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E9B8u;
        goto label_20e9b8;
    }
    ctx->pc = 0x20E9B0u;
    {
        const bool branch_taken_0x20e9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9B0u;
        // 0x20e9b4: 0x13103c  dsll32      $v0, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9b0) {
            ctx->pc = 0x20E9C0u;
            goto label_20e9c0;
        }
    }
    ctx->pc = 0x20E9B8u;
label_20e9b8:
    // 0x20e9b8: 0x1000000a  b           . + 4 + (0xA << 2)
label_20e9bc:
    if (ctx->pc == 0x20E9BCu) {
        ctx->pc = 0x20E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9B8u;
        // 0x20e9bc: 0xae340018  sw          $s4, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E9C0u;
        goto label_20e9c0;
    }
    ctx->pc = 0x20E9B8u;
    {
        const bool branch_taken_0x20e9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9B8u;
        // 0x20e9bc: 0xae340018  sw          $s4, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9b8) {
            ctx->pc = 0x20E9E4u;
            goto label_20e9e4;
        }
    }
    ctx->pc = 0x20E9C0u;
label_20e9c0:
    // 0x20e9c0: 0x9e240010  lwu         $a0, 0x10($s1)
    ctx->pc = 0x20e9c0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_20e9c4:
    // 0x20e9c4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x20e9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_20e9c8:
    // 0x20e9c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20e9cc:
    // 0x20e9cc: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x20e9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
label_20e9d0:
    // 0x20e9d0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x20e9d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20e9d4:
    // 0x20e9d4: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x20e9d4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
label_20e9d8:
    // 0x20e9d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20e9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20e9dc:
    // 0x20e9dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20e9dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20e9e0:
    // 0x20e9e0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x20e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_20e9e4:
    // 0x20e9e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20e9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20e9e8:
    // 0x20e9e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20e9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20e9ec:
    // 0x20e9ec: 0xc083982  jal         func_20E608
label_20e9f0:
    if (ctx->pc == 0x20E9F0u) {
        ctx->pc = 0x20E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9ECu;
        // 0x20e9f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E9F4u;
        goto label_20e9f4;
    }
    ctx->pc = 0x20E9ECu;
    SET_GPR_U32(ctx, 31, 0x20E9F4u);
    ctx->pc = 0x20E9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E9ECu;
    // 0x20e9f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20E608u, 0x20E9ECu, 0x20E9F4u)) {
        return;
    }
    ctx->pc = 0x20E9F4u;
label_20e9f4:
    // 0x20e9f4: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x20e9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_20e9f8:
    // 0x20e9f8: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x20e9f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_20e9fc:
    // 0x20e9fc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_20ea00:
    if (ctx->pc == 0x20EA00u) {
        ctx->pc = 0x20EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9FCu;
        // 0x20ea00: 0x74102b  sltu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA04u;
        goto label_20ea04;
    }
    ctx->pc = 0x20E9FCu;
    {
        const bool branch_taken_0x20e9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9FCu;
        // 0x20ea00: 0x74102b  sltu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9fc) {
            ctx->pc = 0x20EAB0u;
            goto label_20eab0;
        }
    }
    ctx->pc = 0x20EA04u;
label_20ea04:
    // 0x20ea04: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_20ea08:
    if (ctx->pc == 0x20EA08u) {
        ctx->pc = 0x20EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA04u;
        // 0x20ea08: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA0Cu;
        goto label_20ea0c;
    }
    ctx->pc = 0x20EA04u;
    {
        const bool branch_taken_0x20ea04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA04u;
        // 0x20ea08: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea04) {
            ctx->pc = 0x20EA30u;
            goto label_20ea30;
        }
    }
    ctx->pc = 0x20EA0Cu;
label_20ea0c:
    // 0x20ea0c: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_20ea10:
    if (ctx->pc == 0x20EA10u) {
        ctx->pc = 0x20EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA0Cu;
        // 0x20ea10: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA14u;
        goto label_20ea14;
    }
    ctx->pc = 0x20EA0Cu;
    {
        const bool branch_taken_0x20ea0c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA0Cu;
        // 0x20ea10: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea0c) {
            ctx->pc = 0x20EA2Cu;
            goto label_20ea2c;
        }
    }
    ctx->pc = 0x20EA14u;
label_20ea14:
    // 0x20ea14: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x20ea14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20ea18:
    // 0x20ea18: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20ea18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20ea1c:
    // 0x20ea1c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20ea20:
    // 0x20ea20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20ea24:
    // 0x20ea24: 0x60f809  jalr        $v1
label_20ea28:
    if (ctx->pc == 0x20EA28u) {
        ctx->pc = 0x20EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA24u;
        // 0x20ea28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA2Cu;
        goto label_20ea2c;
    }
    ctx->pc = 0x20EA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20EA2Cu);
        ctx->pc = 0x20EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA24u;
        // 0x20ea28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EA24u, 0x20EA2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20EA2Cu;
label_20ea2c:
    // 0x20ea2c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x20ea2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20ea30:
    // 0x20ea30: 0x56a00001  bnel        $s5, $zero, . + 4 + (0x1 << 2)
label_20ea34:
    if (ctx->pc == 0x20EA34u) {
        ctx->pc = 0x20EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA30u;
        // 0x20ea34: 0xae33001c  sw          $s3, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA38u;
        goto label_20ea38;
    }
    ctx->pc = 0x20EA30u;
    {
        const bool branch_taken_0x20ea30 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ea30) {
            ctx->pc = 0x20EA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EA30u;
            // 0x20ea34: 0xae33001c  sw          $s3, 0x1C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EA38u;
            goto label_20ea38;
        }
    }
    ctx->pc = 0x20EA38u;
label_20ea38:
    // 0x20ea38: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x20ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_20ea3c:
    // 0x20ea3c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_20ea40:
    if (ctx->pc == 0x20EA40u) {
        ctx->pc = 0x20EA44u;
        goto label_20ea44;
    }
    ctx->pc = 0x20EA3Cu;
    {
        const bool branch_taken_0x20ea3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ea3c) {
            ctx->pc = 0x20EA8Cu;
            goto label_20ea8c;
        }
    }
    ctx->pc = 0x20EA44u;
label_20ea44:
    // 0x20ea44: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x20ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20ea48:
    // 0x20ea48: 0x2639823  subu        $s3, $s3, $v1
    ctx->pc = 0x20ea48u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_20ea4c:
    // 0x20ea4c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x20ea4cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_20ea50:
    // 0x20ea50: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x20ea50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_20ea54:
    // 0x20ea54: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_20ea58:
    if (ctx->pc == 0x20EA58u) {
        ctx->pc = 0x20EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA54u;
        // 0x20ea58: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA5Cu;
        goto label_20ea5c;
    }
    ctx->pc = 0x20EA54u;
    {
        const bool branch_taken_0x20ea54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA54u;
        // 0x20ea58: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea54) {
            ctx->pc = 0x20EAB0u;
            goto label_20eab0;
        }
    }
    ctx->pc = 0x20EA5Cu;
label_20ea5c:
    // 0x20ea5c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20ea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ea60:
    // 0x20ea60: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x20ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_20ea64:
    // 0x20ea64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20ea64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20ea68:
    // 0x20ea68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20ea68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20ea6c:
    // 0x20ea6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20ea70:
    // 0x20ea70: 0xc08489c  jal         func_212270
label_20ea74:
    if (ctx->pc == 0x20EA74u) {
        ctx->pc = 0x20EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA70u;
        // 0x20ea74: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA78u;
        goto label_20ea78;
    }
    ctx->pc = 0x20EA70u;
    SET_GPR_U32(ctx, 31, 0x20EA78u);
    ctx->pc = 0x20EA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA70u;
    // 0x20ea74: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212270u, 0x20EA70u, 0x20EA78u)) {
        return;
    }
    ctx->pc = 0x20EA78u;
label_20ea78:
    // 0x20ea78: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x20ea78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_20ea7c:
    // 0x20ea7c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_20ea80:
    if (ctx->pc == 0x20EA80u) {
        ctx->pc = 0x20EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA7Cu;
        // 0x20ea80: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA84u;
        goto label_20ea84;
    }
    ctx->pc = 0x20EA7Cu;
    {
        const bool branch_taken_0x20ea7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ea7c) {
            ctx->pc = 0x20EA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EA7Cu;
            // 0x20ea80: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ea60;
        }
    }
    ctx->pc = 0x20EA84u;
label_20ea84:
    // 0x20ea84: 0x1000000a  b           . + 4 + (0xA << 2)
label_20ea88:
    if (ctx->pc == 0x20EA88u) {
        ctx->pc = 0x20EA8Cu;
        goto label_20ea8c;
    }
    ctx->pc = 0x20EA84u;
    {
        const bool branch_taken_0x20ea84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ea84) {
            ctx->pc = 0x20EAB0u;
            goto label_20eab0;
        }
    }
    ctx->pc = 0x20EA8Cu;
label_20ea8c:
    // 0x20ea8c: 0x16a0000a  bnez        $s5, . + 4 + (0xA << 2)
label_20ea90:
    if (ctx->pc == 0x20EA90u) {
        ctx->pc = 0x20EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA8Cu;
        // 0x20ea90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA94u;
        goto label_20ea94;
    }
    ctx->pc = 0x20EA8Cu;
    {
        const bool branch_taken_0x20ea8c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA8Cu;
        // 0x20ea90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea8c) {
            ctx->pc = 0x20EAB8u;
            goto label_20eab8;
        }
    }
    ctx->pc = 0x20EA94u;
label_20ea94:
    // 0x20ea94: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x20ea94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20ea98:
    // 0x20ea98: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x20ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_20ea9c:
    // 0x20ea9c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20ea9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20eaa0:
    // 0x20eaa0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20eaa4:
    // 0x20eaa4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20eaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20eaa8:
    // 0x20eaa8: 0x60f809  jalr        $v1
label_20eaac:
    if (ctx->pc == 0x20EAACu) {
        ctx->pc = 0x20EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAA8u;
        // 0x20eaac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EAB0u;
        goto label_20eab0;
    }
    ctx->pc = 0x20EAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20EAB0u);
        ctx->pc = 0x20EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAA8u;
        // 0x20eaac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EAA8u, 0x20EAB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20EAB0u;
label_20eab0:
    // 0x20eab0: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
label_20eab4:
    if (ctx->pc == 0x20EAB4u) {
        ctx->pc = 0x20EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAB0u;
        // 0x20eab4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EAB8u;
        goto label_20eab8;
    }
    ctx->pc = 0x20EAB0u;
    {
        const bool branch_taken_0x20eab0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAB0u;
        // 0x20eab4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eab0) {
            ctx->pc = 0x20EABCu;
            goto label_20eabc;
        }
    }
    ctx->pc = 0x20EAB8u;
label_20eab8:
    // 0x20eab8: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x20eab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_20eabc:
    // 0x20eabc: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x20eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_20eac0:
    // 0x20eac0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20eac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20eac4:
    // 0x20eac4: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x20eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_20eac8:
    // 0x20eac8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x20eac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20eacc:
    // 0x20eacc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20ead0:
    // 0x20ead0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x20ead0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20ead4:
    // 0x20ead4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x20ead4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20ead8:
    // 0x20ead8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20eadc:
    // 0x20eadc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20eadcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20eae0:
    // 0x20eae0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x20eae0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20eae4:
    // 0x20eae4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x20eae4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20eae8:
    // 0x20eae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20eae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20eaec:
    // 0x20eaec: 0x3e00008  jr          $ra
label_20eaf0:
    if (ctx->pc == 0x20EAF0u) {
        ctx->pc = 0x20EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAECu;
        // 0x20eaf0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EAF4u;
        goto label_20eaf4;
    }
    ctx->pc = 0x20EAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAECu;
        // 0x20eaf0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EAF4u;
label_20eaf4:
    // 0x20eaf4: 0x0  nop
    ctx->pc = 0x20eaf4u;
    // NOP
    ctx->pc = 0x20eaf8u;
}
