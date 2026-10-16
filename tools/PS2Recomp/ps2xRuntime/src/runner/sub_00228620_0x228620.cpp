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

// Function: sub_00228620
// Address: 0x228620 - 0x2286c0
void sub_00228620_0x228620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228620_0x228620");
#endif

    switch (ctx->pc) {
        case 0x228620u: goto label_228620;
        case 0x228624u: goto label_228624;
        case 0x228628u: goto label_228628;
        case 0x22862cu: goto label_22862c;
        case 0x228630u: goto label_228630;
        case 0x228634u: goto label_228634;
        case 0x228638u: goto label_228638;
        case 0x22863cu: goto label_22863c;
        case 0x228640u: goto label_228640;
        case 0x228644u: goto label_228644;
        case 0x228648u: goto label_228648;
        case 0x22864cu: goto label_22864c;
        case 0x228650u: goto label_228650;
        case 0x228654u: goto label_228654;
        case 0x228658u: goto label_228658;
        case 0x22865cu: goto label_22865c;
        case 0x228660u: goto label_228660;
        case 0x228664u: goto label_228664;
        case 0x228668u: goto label_228668;
        case 0x22866cu: goto label_22866c;
        case 0x228670u: goto label_228670;
        case 0x228674u: goto label_228674;
        case 0x228678u: goto label_228678;
        case 0x22867cu: goto label_22867c;
        case 0x228680u: goto label_228680;
        case 0x228684u: goto label_228684;
        case 0x228688u: goto label_228688;
        case 0x22868cu: goto label_22868c;
        case 0x228690u: goto label_228690;
        case 0x228694u: goto label_228694;
        case 0x228698u: goto label_228698;
        case 0x22869cu: goto label_22869c;
        case 0x2286a0u: goto label_2286a0;
        case 0x2286a4u: goto label_2286a4;
        case 0x2286a8u: goto label_2286a8;
        case 0x2286acu: goto label_2286ac;
        case 0x2286b0u: goto label_2286b0;
        case 0x2286b4u: goto label_2286b4;
        case 0x2286b8u: goto label_2286b8;
        case 0x2286bcu: goto label_2286bc;
        default: break;
    }

    ctx->pc = 0x228620u;

label_228620:
    // 0x228620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_228624:
    // 0x228624: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x228624u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_228628:
    // 0x228628: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x228628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_22862c:
    // 0x22862c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22862cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_228630:
    // 0x228630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x228630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_228634:
    // 0x228634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_228638:
    // 0x228638: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x228638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
label_22863c:
    // 0x22863c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x22863cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_228640:
    // 0x228640: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_228644:
    if (ctx->pc == 0x228644u) {
        ctx->pc = 0x228644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228640u;
        // 0x228644: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228648u;
        goto label_228648;
    }
    ctx->pc = 0x228640u;
    {
        const bool branch_taken_0x228640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228640u;
        // 0x228644: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228640) {
            ctx->pc = 0x228698u;
            goto label_228698;
        }
    }
    ctx->pc = 0x228648u;
label_228648:
    // 0x228648: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x228648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_22864c:
    // 0x22864c: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x22864cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
label_228650:
    // 0x228650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_228654:
    // 0x228654: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x228654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_228658:
    // 0x228658: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x228658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_22865c:
    // 0x22865c: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x22865cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_228660:
    // 0x228660: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x228660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_228664:
    // 0x228664: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x228664u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_228668:
    // 0x228668: 0x9622001c  lhu         $v0, 0x1C($s1)
    ctx->pc = 0x228668u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
label_22866c:
    // 0x22866c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22866cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_228670:
    // 0x228670: 0xa602001c  sh          $v0, 0x1C($s0)
    ctx->pc = 0x228670u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
label_228674:
    // 0x228674: 0x95030004  lhu         $v1, 0x4($t0)
    ctx->pc = 0x228674u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_228678:
    // 0x228678: 0x9622001e  lhu         $v0, 0x1E($s1)
    ctx->pc = 0x228678u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
label_22867c:
    // 0x22867c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22867cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_228680:
    // 0x228680: 0xa602001e  sh          $v0, 0x1E($s0)
    ctx->pc = 0x228680u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
label_228684:
    // 0x228684: 0x8ce21040  lw          $v0, 0x1040($a3)
    ctx->pc = 0x228684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4160)));
label_228688:
    // 0x228688: 0x40f809  jalr        $v0
label_22868c:
    if (ctx->pc == 0x22868Cu) {
        ctx->pc = 0x22868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228688u;
        // 0x22868c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228690u;
        goto label_228690;
    }
    ctx->pc = 0x228688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228690u);
        ctx->pc = 0x22868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228688u;
        // 0x22868c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228688u, 0x228690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228690u;
label_228690:
    // 0x228690: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_228694:
    if (ctx->pc == 0x228694u) {
        ctx->pc = 0x228694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228690u;
        // 0x228694: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228698u;
        goto label_228698;
    }
    ctx->pc = 0x228690u;
    {
        const bool branch_taken_0x228690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228690) {
            ctx->pc = 0x228694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228690u;
            // 0x228694: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2286A0u;
            goto label_2286a0;
        }
    }
    ctx->pc = 0x228698u;
label_228698:
    // 0x228698: 0x10000003  b           . + 4 + (0x3 << 2)
label_22869c:
    if (ctx->pc == 0x22869Cu) {
        ctx->pc = 0x22869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228698u;
        // 0x22869c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2286A0u;
        goto label_2286a0;
    }
    ctx->pc = 0x228698u;
    {
        const bool branch_taken_0x228698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228698u;
        // 0x22869c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228698) {
            ctx->pc = 0x2286A8u;
            goto label_2286a8;
        }
    }
    ctx->pc = 0x2286A0u;
label_2286a0:
    // 0x2286a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2286a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2286a4:
    // 0x2286a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2286a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2286a8:
    // 0x2286a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2286a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2286ac:
    // 0x2286ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2286acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2286b0:
    // 0x2286b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2286b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2286b4:
    // 0x2286b4: 0x3e00008  jr          $ra
label_2286b8:
    if (ctx->pc == 0x2286B8u) {
        ctx->pc = 0x2286B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286B4u;
        // 0x2286b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2286BCu;
        goto label_2286bc;
    }
    ctx->pc = 0x2286B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2286B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286B4u;
        // 0x2286b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2286B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2286BCu;
label_2286bc:
    // 0x2286bc: 0x0  nop
    ctx->pc = 0x2286bcu;
    // NOP
    ctx->pc = 0x2286c0u;
}
