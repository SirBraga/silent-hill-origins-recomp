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

// Function: sub_001B8658
// Address: 0x1b8658 - 0x1b87e0
void sub_001B8658_0x1b8658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8658_0x1b8658");
#endif

    switch (ctx->pc) {
        case 0x1b8658u: goto label_1b8658;
        case 0x1b865cu: goto label_1b865c;
        case 0x1b8660u: goto label_1b8660;
        case 0x1b8664u: goto label_1b8664;
        case 0x1b8668u: goto label_1b8668;
        case 0x1b866cu: goto label_1b866c;
        case 0x1b8670u: goto label_1b8670;
        case 0x1b8674u: goto label_1b8674;
        case 0x1b8678u: goto label_1b8678;
        case 0x1b867cu: goto label_1b867c;
        case 0x1b8680u: goto label_1b8680;
        case 0x1b8684u: goto label_1b8684;
        case 0x1b8688u: goto label_1b8688;
        case 0x1b868cu: goto label_1b868c;
        case 0x1b8690u: goto label_1b8690;
        case 0x1b8694u: goto label_1b8694;
        case 0x1b8698u: goto label_1b8698;
        case 0x1b869cu: goto label_1b869c;
        case 0x1b86a0u: goto label_1b86a0;
        case 0x1b86a4u: goto label_1b86a4;
        case 0x1b86a8u: goto label_1b86a8;
        case 0x1b86acu: goto label_1b86ac;
        case 0x1b86b0u: goto label_1b86b0;
        case 0x1b86b4u: goto label_1b86b4;
        case 0x1b86b8u: goto label_1b86b8;
        case 0x1b86bcu: goto label_1b86bc;
        case 0x1b86c0u: goto label_1b86c0;
        case 0x1b86c4u: goto label_1b86c4;
        case 0x1b86c8u: goto label_1b86c8;
        case 0x1b86ccu: goto label_1b86cc;
        case 0x1b86d0u: goto label_1b86d0;
        case 0x1b86d4u: goto label_1b86d4;
        case 0x1b86d8u: goto label_1b86d8;
        case 0x1b86dcu: goto label_1b86dc;
        case 0x1b86e0u: goto label_1b86e0;
        case 0x1b86e4u: goto label_1b86e4;
        case 0x1b86e8u: goto label_1b86e8;
        case 0x1b86ecu: goto label_1b86ec;
        case 0x1b86f0u: goto label_1b86f0;
        case 0x1b86f4u: goto label_1b86f4;
        case 0x1b86f8u: goto label_1b86f8;
        case 0x1b86fcu: goto label_1b86fc;
        case 0x1b8700u: goto label_1b8700;
        case 0x1b8704u: goto label_1b8704;
        case 0x1b8708u: goto label_1b8708;
        case 0x1b870cu: goto label_1b870c;
        case 0x1b8710u: goto label_1b8710;
        case 0x1b8714u: goto label_1b8714;
        case 0x1b8718u: goto label_1b8718;
        case 0x1b871cu: goto label_1b871c;
        case 0x1b8720u: goto label_1b8720;
        case 0x1b8724u: goto label_1b8724;
        case 0x1b8728u: goto label_1b8728;
        case 0x1b872cu: goto label_1b872c;
        case 0x1b8730u: goto label_1b8730;
        case 0x1b8734u: goto label_1b8734;
        case 0x1b8738u: goto label_1b8738;
        case 0x1b873cu: goto label_1b873c;
        case 0x1b8740u: goto label_1b8740;
        case 0x1b8744u: goto label_1b8744;
        case 0x1b8748u: goto label_1b8748;
        case 0x1b874cu: goto label_1b874c;
        case 0x1b8750u: goto label_1b8750;
        case 0x1b8754u: goto label_1b8754;
        case 0x1b8758u: goto label_1b8758;
        case 0x1b875cu: goto label_1b875c;
        case 0x1b8760u: goto label_1b8760;
        case 0x1b8764u: goto label_1b8764;
        case 0x1b8768u: goto label_1b8768;
        case 0x1b876cu: goto label_1b876c;
        case 0x1b8770u: goto label_1b8770;
        case 0x1b8774u: goto label_1b8774;
        case 0x1b8778u: goto label_1b8778;
        case 0x1b877cu: goto label_1b877c;
        case 0x1b8780u: goto label_1b8780;
        case 0x1b8784u: goto label_1b8784;
        case 0x1b8788u: goto label_1b8788;
        case 0x1b878cu: goto label_1b878c;
        case 0x1b8790u: goto label_1b8790;
        case 0x1b8794u: goto label_1b8794;
        case 0x1b8798u: goto label_1b8798;
        case 0x1b879cu: goto label_1b879c;
        case 0x1b87a0u: goto label_1b87a0;
        case 0x1b87a4u: goto label_1b87a4;
        case 0x1b87a8u: goto label_1b87a8;
        case 0x1b87acu: goto label_1b87ac;
        case 0x1b87b0u: goto label_1b87b0;
        case 0x1b87b4u: goto label_1b87b4;
        case 0x1b87b8u: goto label_1b87b8;
        case 0x1b87bcu: goto label_1b87bc;
        case 0x1b87c0u: goto label_1b87c0;
        case 0x1b87c4u: goto label_1b87c4;
        case 0x1b87c8u: goto label_1b87c8;
        case 0x1b87ccu: goto label_1b87cc;
        case 0x1b87d0u: goto label_1b87d0;
        case 0x1b87d4u: goto label_1b87d4;
        case 0x1b87d8u: goto label_1b87d8;
        case 0x1b87dcu: goto label_1b87dc;
        default: break;
    }

    ctx->pc = 0x1b8658u;

label_1b8658:
    // 0x1b8658: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b865c:
    // 0x1b865c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b865cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b8660:
    // 0x1b8660: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b8664:
    // 0x1b8664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b8668:
    // 0x1b8668: 0xc06bbe0  jal         func_1AEF80
label_1b866c:
    if (ctx->pc == 0x1B866Cu) {
        ctx->pc = 0x1B866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8668u;
        // 0x1b866c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8670u;
        goto label_1b8670;
    }
    ctx->pc = 0x1B8668u;
    SET_GPR_U32(ctx, 31, 0x1B8670u);
    ctx->pc = 0x1B866Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8668u;
    // 0x1b866c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1B8668u, 0x1B8670u)) {
        return;
    }
    ctx->pc = 0x1B8670u;
label_1b8670:
    // 0x1b8670: 0x26110318  addiu       $s1, $s0, 0x318
    ctx->pc = 0x1b8670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 792));
label_1b8674:
    // 0x1b8674: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1b8674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1b8678:
    // 0x1b8678: 0x260402c4  addiu       $a0, $s0, 0x2C4
    ctx->pc = 0x1b8678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 708));
label_1b867c:
    // 0x1b867c: 0xc0c493d  jal         func_3124F4
label_1b8680:
    if (ctx->pc == 0x1B8680u) {
        ctx->pc = 0x1B8680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B867Cu;
        // 0x1b8680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8684u;
        goto label_1b8684;
    }
    ctx->pc = 0x1B867Cu;
    SET_GPR_U32(ctx, 31, 0x1B8684u);
    ctx->pc = 0x1B8680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B867Cu;
    // 0x1b8680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B867Cu, 0x1B8684u)) {
        return;
    }
    ctx->pc = 0x1B8684u;
label_1b8684:
    // 0x1b8684: 0xc085ba8  jal         func_216EA0
label_1b8688:
    if (ctx->pc == 0x1B8688u) {
        ctx->pc = 0x1B8688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8684u;
        // 0x1b8688: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B868Cu;
        goto label_1b868c;
    }
    ctx->pc = 0x1B8684u;
    SET_GPR_U32(ctx, 31, 0x1B868Cu);
    ctx->pc = 0x1B8688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8684u;
    // 0x1b8688: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x1B8684u, 0x1B868Cu)) {
        return;
    }
    ctx->pc = 0x1B868Cu;
label_1b868c:
    // 0x1b868c: 0xae020330  sw          $v0, 0x330($s0)
    ctx->pc = 0x1b868cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
label_1b8690:
    // 0x1b8690: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1b8690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1b8694:
    // 0x1b8694: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_1b8698:
    if (ctx->pc == 0x1B8698u) {
        ctx->pc = 0x1B8698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8694u;
        // 0x1b8698: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B869Cu;
        goto label_1b869c;
    }
    ctx->pc = 0x1B8694u;
    {
        const bool branch_taken_0x1b8694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8694) {
            ctx->pc = 0x1B8698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8694u;
            // 0x1b8698: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B86F4u;
            goto label_1b86f4;
        }
    }
    ctx->pc = 0x1B869Cu;
label_1b869c:
    // 0x1b869c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1b869cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1b86a0:
    // 0x1b86a0: 0x0  nop
    ctx->pc = 0x1b86a0u;
    // NOP
label_1b86a4:
    // 0x1b86a4: 0x1080fffb  beqz        $a0, . + 4 + (-0x5 << 2)
label_1b86a8:
    if (ctx->pc == 0x1B86A8u) {
        ctx->pc = 0x1B86ACu;
        goto label_1b86ac;
    }
    ctx->pc = 0x1B86A4u;
    {
        const bool branch_taken_0x1b86a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b86a4) {
            ctx->pc = 0x1B8694u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8694;
        }
    }
    ctx->pc = 0x1B86ACu;
label_1b86ac:
    // 0x1b86ac: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b86acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b86b0:
    // 0x1b86b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1b86b4:
    if (ctx->pc == 0x1B86B4u) {
        ctx->pc = 0x1B86B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86B0u;
        // 0x1b86b4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B86B8u;
        goto label_1b86b8;
    }
    ctx->pc = 0x1B86B0u;
    {
        const bool branch_taken_0x1b86b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B86B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86B0u;
        // 0x1b86b4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86b0) {
            ctx->pc = 0x1B86C0u;
            goto label_1b86c0;
        }
    }
    ctx->pc = 0x1B86B8u;
label_1b86b8:
    // 0x1b86b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b86bc:
    if (ctx->pc == 0x1B86BCu) {
        ctx->pc = 0x1B86BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86B8u;
        // 0x1b86bc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B86C0u;
        goto label_1b86c0;
    }
    ctx->pc = 0x1B86B8u;
    {
        const bool branch_taken_0x1b86b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B86BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86B8u;
        // 0x1b86bc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86b8) {
            ctx->pc = 0x1B86C4u;
            goto label_1b86c4;
        }
    }
    ctx->pc = 0x1B86C0u;
label_1b86c0:
    // 0x1b86c0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b86c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1b86c4:
    // 0x1b86c4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b86c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b86c8:
    // 0x1b86c8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1b86cc:
    if (ctx->pc == 0x1B86CCu) {
        ctx->pc = 0x1B86CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86C8u;
        // 0x1b86cc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B86D0u;
        goto label_1b86d0;
    }
    ctx->pc = 0x1B86C8u;
    {
        const bool branch_taken_0x1b86c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B86CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86C8u;
        // 0x1b86cc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86c8) {
            ctx->pc = 0x1B86D8u;
            goto label_1b86d8;
        }
    }
    ctx->pc = 0x1B86D0u;
label_1b86d0:
    // 0x1b86d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b86d4:
    if (ctx->pc == 0x1B86D4u) {
        ctx->pc = 0x1B86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86D0u;
        // 0x1b86d4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B86D8u;
        goto label_1b86d8;
    }
    ctx->pc = 0x1B86D0u;
    {
        const bool branch_taken_0x1b86d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86D0u;
        // 0x1b86d4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86d0) {
            ctx->pc = 0x1B86DCu;
            goto label_1b86dc;
        }
    }
    ctx->pc = 0x1B86D8u;
label_1b86d8:
    // 0x1b86d8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b86d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1b86dc:
    // 0x1b86dc: 0xc0808b8  jal         func_2022E0
label_1b86e0:
    if (ctx->pc == 0x1B86E0u) {
        ctx->pc = 0x1B86E4u;
        goto label_1b86e4;
    }
    ctx->pc = 0x1B86DCu;
    SET_GPR_U32(ctx, 31, 0x1B86E4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B86DCu, 0x1B86E4u)) {
        return;
    }
    ctx->pc = 0x1B86E4u;
label_1b86e4:
    // 0x1b86e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b86e8:
    // 0x1b86e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b86ec:
    // 0x1b86ec: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1b86f0:
    if (ctx->pc == 0x1B86F0u) {
        ctx->pc = 0x1B86F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86ECu;
        // 0x1b86f0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B86F4u;
        goto label_1b86f4;
    }
    ctx->pc = 0x1B86ECu;
    {
        const bool branch_taken_0x1b86ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B86F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86ECu;
        // 0x1b86f0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86ec) {
            ctx->pc = 0x1B8690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8690;
        }
    }
    ctx->pc = 0x1B86F4u;
label_1b86f4:
    // 0x1b86f4: 0xc06c97c  jal         func_1B25F0
label_1b86f8:
    if (ctx->pc == 0x1B86F8u) {
        ctx->pc = 0x1B86F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86F4u;
        // 0x1b86f8: 0x8e050274  lw          $a1, 0x274($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B86FCu;
        goto label_1b86fc;
    }
    ctx->pc = 0x1B86F4u;
    SET_GPR_U32(ctx, 31, 0x1B86FCu);
    ctx->pc = 0x1B86F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B86F4u;
    // 0x1b86f8: 0x8e050274  lw          $a1, 0x274($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1B86F4u, 0x1B86FCu)) {
        return;
    }
    ctx->pc = 0x1B86FCu;
label_1b86fc:
    // 0x1b86fc: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1b86fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1b8700:
    // 0x1b8700: 0x8e050278  lw          $a1, 0x278($s0)
    ctx->pc = 0x1b8700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_1b8704:
    // 0x1b8704: 0xc06c97c  jal         func_1B25F0
label_1b8708:
    if (ctx->pc == 0x1B8708u) {
        ctx->pc = 0x1B8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8704u;
        // 0x1b8708: 0xae02028c  sw          $v0, 0x28C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B870Cu;
        goto label_1b870c;
    }
    ctx->pc = 0x1B8704u;
    SET_GPR_U32(ctx, 31, 0x1B870Cu);
    ctx->pc = 0x1B8708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8704u;
    // 0x1b8708: 0xae02028c  sw          $v0, 0x28C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1B8704u, 0x1B870Cu)) {
        return;
    }
    ctx->pc = 0x1B870Cu;
label_1b870c:
    // 0x1b870c: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1b870cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1b8710:
    // 0x1b8710: 0x8e05027c  lw          $a1, 0x27C($s0)
    ctx->pc = 0x1b8710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
label_1b8714:
    // 0x1b8714: 0xc06c97c  jal         func_1B25F0
label_1b8718:
    if (ctx->pc == 0x1B8718u) {
        ctx->pc = 0x1B8718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8714u;
        // 0x1b8718: 0xae020290  sw          $v0, 0x290($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B871Cu;
        goto label_1b871c;
    }
    ctx->pc = 0x1B8714u;
    SET_GPR_U32(ctx, 31, 0x1B871Cu);
    ctx->pc = 0x1B8718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8714u;
    // 0x1b8718: 0xae020290  sw          $v0, 0x290($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1B8714u, 0x1B871Cu)) {
        return;
    }
    ctx->pc = 0x1B871Cu;
label_1b871c:
    // 0x1b871c: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1b871cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1b8720:
    // 0x1b8720: 0x8e050280  lw          $a1, 0x280($s0)
    ctx->pc = 0x1b8720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
label_1b8724:
    // 0x1b8724: 0xc06c97c  jal         func_1B25F0
label_1b8728:
    if (ctx->pc == 0x1B8728u) {
        ctx->pc = 0x1B8728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8724u;
        // 0x1b8728: 0xae020294  sw          $v0, 0x294($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B872Cu;
        goto label_1b872c;
    }
    ctx->pc = 0x1B8724u;
    SET_GPR_U32(ctx, 31, 0x1B872Cu);
    ctx->pc = 0x1B8728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8724u;
    // 0x1b8728: 0xae020294  sw          $v0, 0x294($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1B8724u, 0x1B872Cu)) {
        return;
    }
    ctx->pc = 0x1B872Cu;
label_1b872c:
    // 0x1b872c: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1b872cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1b8730:
    // 0x1b8730: 0x8e050284  lw          $a1, 0x284($s0)
    ctx->pc = 0x1b8730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
label_1b8734:
    // 0x1b8734: 0xc06c97c  jal         func_1B25F0
label_1b8738:
    if (ctx->pc == 0x1B8738u) {
        ctx->pc = 0x1B8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8734u;
        // 0x1b8738: 0xae020298  sw          $v0, 0x298($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B873Cu;
        goto label_1b873c;
    }
    ctx->pc = 0x1B8734u;
    SET_GPR_U32(ctx, 31, 0x1B873Cu);
    ctx->pc = 0x1B8738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8734u;
    // 0x1b8738: 0xae020298  sw          $v0, 0x298($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1B8734u, 0x1B873Cu)) {
        return;
    }
    ctx->pc = 0x1B873Cu;
label_1b873c:
    // 0x1b873c: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1b873cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1b8740:
    // 0x1b8740: 0x8e050288  lw          $a1, 0x288($s0)
    ctx->pc = 0x1b8740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
label_1b8744:
    // 0x1b8744: 0xc06c97c  jal         func_1B25F0
label_1b8748:
    if (ctx->pc == 0x1B8748u) {
        ctx->pc = 0x1B8748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8744u;
        // 0x1b8748: 0xae020270  sw          $v0, 0x270($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B874Cu;
        goto label_1b874c;
    }
    ctx->pc = 0x1B8744u;
    SET_GPR_U32(ctx, 31, 0x1B874Cu);
    ctx->pc = 0x1B8748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8744u;
    // 0x1b8748: 0xae020270  sw          $v0, 0x270($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1B8744u, 0x1B874Cu)) {
        return;
    }
    ctx->pc = 0x1B874Cu;
label_1b874c:
    // 0x1b874c: 0xae02029c  sw          $v0, 0x29C($s0)
    ctx->pc = 0x1b874cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
label_1b8750:
    // 0x1b8750: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b8750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8754:
    // 0x1b8754: 0x8e02028c  lw          $v0, 0x28C($s0)
    ctx->pc = 0x1b8754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
label_1b8758:
    // 0x1b8758: 0x8e030290  lw          $v1, 0x290($s0)
    ctx->pc = 0x1b8758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_1b875c:
    // 0x1b875c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b875cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8760:
    // 0x1b8760: 0x8e040294  lw          $a0, 0x294($s0)
    ctx->pc = 0x1b8760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
label_1b8764:
    // 0x1b8764: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x1b8764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_1b8768:
    // 0x1b8768: 0x8e020298  lw          $v0, 0x298($s0)
    ctx->pc = 0x1b8768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_1b876c:
    // 0x1b876c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1b876cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8770:
    // 0x1b8770: 0x8e0502a0  lw          $a1, 0x2A0($s0)
    ctx->pc = 0x1b8770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 672)));
label_1b8774:
    // 0x1b8774: 0xe60102e4  swc1        $f1, 0x2E4($s0)
    ctx->pc = 0x1b8774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
label_1b8778:
    // 0x1b8778: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1b8778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b877c:
    // 0x1b877c: 0xe60002f8  swc1        $f0, 0x2F8($s0)
    ctx->pc = 0x1b877cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 760), bits); }
label_1b8780:
    // 0x1b8780: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b8780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8784:
    // 0x1b8784: 0xae060264  sw          $a2, 0x264($s0)
    ctx->pc = 0x1b8784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 6));
label_1b8788:
    // 0x1b8788: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_1b878c:
    if (ctx->pc == 0x1B878Cu) {
        ctx->pc = 0x1B878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8788u;
        // 0x1b878c: 0xe601030c  swc1        $f1, 0x30C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 780), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8790u;
        goto label_1b8790;
    }
    ctx->pc = 0x1B8788u;
    {
        const bool branch_taken_0x1b8788 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8788u;
        // 0x1b878c: 0xe601030c  swc1        $f1, 0x30C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 780), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8788) {
            ctx->pc = 0x1B87CCu;
            goto label_1b87cc;
        }
    }
    ctx->pc = 0x1B8790u;
label_1b8790:
    // 0x1b8790: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1b8790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_1b8794:
    // 0x1b8794: 0x84440110  lh          $a0, 0x110($v0)
    ctx->pc = 0x1b8794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
label_1b8798:
    // 0x1b8798: 0x8c430114  lw          $v1, 0x114($v0)
    ctx->pc = 0x1b8798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
label_1b879c:
    // 0x1b879c: 0x60f809  jalr        $v1
label_1b87a0:
    if (ctx->pc == 0x1B87A0u) {
        ctx->pc = 0x1B87A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B879Cu;
        // 0x1b87a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B87A4u;
        goto label_1b87a4;
    }
    ctx->pc = 0x1B879Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B87A4u);
        ctx->pc = 0x1B87A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B879Cu;
        // 0x1b87a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B879Cu, 0x1B87A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B87A4u;
label_1b87a4:
    // 0x1b87a4: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1b87a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_1b87a8:
    // 0x1b87a8: 0x84440118  lh          $a0, 0x118($v0)
    ctx->pc = 0x1b87a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
label_1b87ac:
    // 0x1b87ac: 0x8c43011c  lw          $v1, 0x11C($v0)
    ctx->pc = 0x1b87acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
label_1b87b0:
    // 0x1b87b0: 0x60f809  jalr        $v1
label_1b87b4:
    if (ctx->pc == 0x1B87B4u) {
        ctx->pc = 0x1B87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87B0u;
        // 0x1b87b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B87B8u;
        goto label_1b87b8;
    }
    ctx->pc = 0x1B87B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B87B8u);
        ctx->pc = 0x1B87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87B0u;
        // 0x1b87b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B87B0u, 0x1B87B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B87B8u;
label_1b87b8:
    // 0x1b87b8: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1b87b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_1b87bc:
    // 0x1b87bc: 0x84440120  lh          $a0, 0x120($v0)
    ctx->pc = 0x1b87bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 288)));
label_1b87c0:
    // 0x1b87c0: 0x8c430124  lw          $v1, 0x124($v0)
    ctx->pc = 0x1b87c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_1b87c4:
    // 0x1b87c4: 0x60f809  jalr        $v1
label_1b87c8:
    if (ctx->pc == 0x1B87C8u) {
        ctx->pc = 0x1B87C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87C4u;
        // 0x1b87c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B87CCu;
        goto label_1b87cc;
    }
    ctx->pc = 0x1B87C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B87CCu);
        ctx->pc = 0x1B87C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87C4u;
        // 0x1b87c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B87C4u, 0x1B87CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B87CCu;
label_1b87cc:
    // 0x1b87cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b87ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b87d0:
    // 0x1b87d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b87d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b87d4:
    // 0x1b87d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b87d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b87d8:
    // 0x1b87d8: 0x3e00008  jr          $ra
label_1b87dc:
    if (ctx->pc == 0x1B87DCu) {
        ctx->pc = 0x1B87DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87D8u;
        // 0x1b87dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B87E0u;
        goto label_fallthrough_0x1b87d8;
    }
    ctx->pc = 0x1B87D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B87DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87D8u;
        // 0x1b87dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B87D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b87d8:
    ctx->pc = 0x1B87E0u;
}
