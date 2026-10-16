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

// Function: sub_001BB5B0
// Address: 0x1bb5b0 - 0x1bb6e0
void sub_001BB5B0_0x1bb5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB5B0_0x1bb5b0");
#endif

    switch (ctx->pc) {
        case 0x1bb5e0u: goto label_1bb5e0;
        case 0x1bb5e8u: goto label_1bb5e8;
        case 0x1bb620u: goto label_1bb620;
        case 0x1bb648u: goto label_1bb648;
        case 0x1bb660u: goto label_1bb660;
        case 0x1bb668u: goto label_1bb668;
        case 0x1bb698u: goto label_1bb698;
        case 0x1bb6a0u: goto label_1bb6a0;
        default: break;
    }

    ctx->pc = 0x1bb5b0u;

    // 0x1bb5b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bb5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bb5b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb5b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1bb5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1bb5bc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1bb5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1bb5c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bb5c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb5c4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1bb5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1bb5c8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1bb5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1bb5cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1bb5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1bb5d0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1bb5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1bb5d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb5d8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BB5D8u;
    SET_GPR_U32(ctx, 31, 0x1BB5E0u);
    ctx->pc = 0x1BB5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5D8u;
    // 0x1bb5dc: 0x2664033c  addiu       $a0, $s3, 0x33C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 828));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BB5D8u, 0x1BB5E0u)) {
        return;
    }
    ctx->pc = 0x1BB5E0u;
label_1bb5e0:
    // 0x1bb5e0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1bb5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bb5e4: 0x26620394  addiu       $v0, $s3, 0x394
    ctx->pc = 0x1bb5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 916));
label_1bb5e8:
    // 0x1bb5e8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1bb5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1bb5ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bb5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bb5f0: 0x0  nop
    ctx->pc = 0x1bb5f0u;
    // NOP
    // 0x1bb5f4: 0x0  nop
    ctx->pc = 0x1bb5f4u;
    // NOP
    // 0x1bb5f8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BB5F8u;
    {
        const bool branch_taken_0x1bb5f8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1BB5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB5F8u;
        // 0x1bb5fc: 0x2442fff8  addiu       $v0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb5f8) {
            ctx->pc = 0x1BB5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb5e8;
        }
    }
    ctx->pc = 0x1BB600u;
    // 0x1bb600: 0x8e620324  lw          $v0, 0x324($s3)
    ctx->pc = 0x1bb600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 804)));
    // 0x1bb604: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1BB604u;
    {
        const bool branch_taken_0x1bb604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB604u;
        // 0x1bb608: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb604) {
            ctx->pc = 0x1BB6C4u;
            goto label_1bb6c4;
        }
    }
    ctx->pc = 0x1BB60Cu;
    // 0x1bb60c: 0x8e6202dc  lw          $v0, 0x2DC($s3)
    ctx->pc = 0x1bb60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 732)));
    // 0x1bb610: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1bb610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bb614: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB614u;
    {
        const bool branch_taken_0x1bb614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB614u;
        // 0x1bb618: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb614) {
            ctx->pc = 0x1BB638u;
            goto label_1bb638;
        }
    }
    ctx->pc = 0x1BB61Cu;
    // 0x1bb61c: 0x8e620320  lw          $v0, 0x320($s3)
    ctx->pc = 0x1bb61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 800)));
label_1bb620:
    // 0x1bb620: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB620u;
    {
        const bool branch_taken_0x1bb620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bb620) {
            ctx->pc = 0x1BB624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB620u;
            // 0x1bb624: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB630u;
            goto label_1bb630;
        }
    }
    ctx->pc = 0x1BB628u;
    // 0x1bb628: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB628u;
    {
        const bool branch_taken_0x1bb628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB628u;
        // 0x1bb62c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb628) {
            ctx->pc = 0x1BB63Cu;
            goto label_1bb63c;
        }
    }
    ctx->pc = 0x1BB630u;
label_1bb630:
    // 0x1bb630: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BB630u;
    {
        const bool branch_taken_0x1bb630 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB630u;
        // 0x1bb634: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb630) {
            ctx->pc = 0x1BB620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb620;
        }
    }
    ctx->pc = 0x1BB638u;
label_1bb638:
    // 0x1bb638: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bb638u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb63c:
    // 0x1bb63c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bb63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb640: 0xc06f8c4  jal         func_1BE310
    ctx->pc = 0x1BB640u;
    SET_GPR_U32(ctx, 31, 0x1BB648u);
    ctx->pc = 0x1BB644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB640u;
    // 0x1bb644: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE310u, 0x1BB640u, 0x1BB648u)) {
        return;
    }
    ctx->pc = 0x1BB648u;
label_1bb648:
    // 0x1bb648: 0xae620344  sw          $v0, 0x344($s3)
    ctx->pc = 0x1bb648u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 836), GPR_U32(ctx, 2));
    // 0x1bb64c: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x1bb64cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1bb650: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BB650u;
    {
        const bool branch_taken_0x1bb650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB650u;
        // 0x1bb654: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb650) {
            ctx->pc = 0x1BB684u;
            goto label_1bb684;
        }
    }
    ctx->pc = 0x1BB658u;
    // 0x1bb658: 0x26710340  addiu       $s1, $s3, 0x340
    ctx->pc = 0x1bb658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
    // 0x1bb65c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bb65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb660:
    // 0x1bb660: 0xc06f8c4  jal         func_1BE310
    ctx->pc = 0x1BB660u;
    SET_GPR_U32(ctx, 31, 0x1BB668u);
    ctx->pc = 0x1BB664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB660u;
    // 0x1bb664: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE310u, 0x1BB660u, 0x1BB668u)) {
        return;
    }
    ctx->pc = 0x1BB668u;
label_1bb668:
    // 0x1bb668: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1bb668u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1bb66c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1bb66cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1bb670: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x1bb670u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bb674: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB674u;
    {
        const bool branch_taken_0x1bb674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB674u;
        // 0x1bb678: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb674) {
            ctx->pc = 0x1BB684u;
            goto label_1bb684;
        }
    }
    ctx->pc = 0x1BB67Cu;
    // 0x1bb67c: 0x641fff8  bgez        $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1BB67Cu;
    {
        const bool branch_taken_0x1bb67c = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1BB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB67Cu;
        // 0x1bb680: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb67c) {
            ctx->pc = 0x1BB660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb660;
        }
    }
    ctx->pc = 0x1BB684u;
label_1bb684:
    // 0x1bb684: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x1bb684u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1bb688: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BB688u;
    {
        const bool branch_taken_0x1bb688 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB688u;
        // 0x1bb68c: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb688) {
            ctx->pc = 0x1BB6C0u;
            goto label_1bb6c0;
        }
    }
    ctx->pc = 0x1BB690u;
    // 0x1bb690: 0x26710348  addiu       $s1, $s3, 0x348
    ctx->pc = 0x1bb690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 840));
    // 0x1bb694: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bb694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb698:
    // 0x1bb698: 0xc06f8c4  jal         func_1BE310
    ctx->pc = 0x1BB698u;
    SET_GPR_U32(ctx, 31, 0x1BB6A0u);
    ctx->pc = 0x1BB69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB698u;
    // 0x1bb69c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE310u, 0x1BB698u, 0x1BB6A0u)) {
        return;
    }
    ctx->pc = 0x1BB6A0u;
label_1bb6a0:
    // 0x1bb6a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bb6a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1bb6a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1bb6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1bb6a8: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1bb6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bb6ac: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB6ACu;
    {
        const bool branch_taken_0x1bb6ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB6ACu;
        // 0x1bb6b0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb6ac) {
            ctx->pc = 0x1BB6C0u;
            goto label_1bb6c0;
        }
    }
    ctx->pc = 0x1BB6B4u;
    // 0x1bb6b4: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x1bb6b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1bb6b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1BB6B8u;
    {
        const bool branch_taken_0x1bb6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB6B8u;
        // 0x1bb6bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb6b8) {
            ctx->pc = 0x1BB698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb698;
        }
    }
    ctx->pc = 0x1BB6C0u;
label_1bb6c0:
    // 0x1bb6c0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1bb6c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1bb6c4:
    // 0x1bb6c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1bb6c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bb6c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1bb6c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb6cc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1bb6ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb6d0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1bb6d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb6d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB6D8u;
        // 0x1bb6dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB6E0u;
}
