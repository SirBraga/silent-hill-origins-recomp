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

// Function: sub_002AC5E0
// Address: 0x2ac5e0 - 0x2ac838
void sub_002AC5E0_0x2ac5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC5E0_0x2ac5e0");
#endif

    switch (ctx->pc) {
        case 0x2ac5e0u: goto label_2ac5e0;
        case 0x2ac5e4u: goto label_2ac5e4;
        case 0x2ac5e8u: goto label_2ac5e8;
        case 0x2ac5ecu: goto label_2ac5ec;
        case 0x2ac5f0u: goto label_2ac5f0;
        case 0x2ac5f4u: goto label_2ac5f4;
        case 0x2ac5f8u: goto label_2ac5f8;
        case 0x2ac5fcu: goto label_2ac5fc;
        case 0x2ac600u: goto label_2ac600;
        case 0x2ac604u: goto label_2ac604;
        case 0x2ac608u: goto label_2ac608;
        case 0x2ac60cu: goto label_2ac60c;
        case 0x2ac610u: goto label_2ac610;
        case 0x2ac614u: goto label_2ac614;
        case 0x2ac618u: goto label_2ac618;
        case 0x2ac61cu: goto label_2ac61c;
        case 0x2ac620u: goto label_2ac620;
        case 0x2ac624u: goto label_2ac624;
        case 0x2ac628u: goto label_2ac628;
        case 0x2ac62cu: goto label_2ac62c;
        case 0x2ac630u: goto label_2ac630;
        case 0x2ac634u: goto label_2ac634;
        case 0x2ac638u: goto label_2ac638;
        case 0x2ac63cu: goto label_2ac63c;
        case 0x2ac640u: goto label_2ac640;
        case 0x2ac644u: goto label_2ac644;
        case 0x2ac648u: goto label_2ac648;
        case 0x2ac64cu: goto label_2ac64c;
        case 0x2ac650u: goto label_2ac650;
        case 0x2ac654u: goto label_2ac654;
        case 0x2ac658u: goto label_2ac658;
        case 0x2ac65cu: goto label_2ac65c;
        case 0x2ac660u: goto label_2ac660;
        case 0x2ac664u: goto label_2ac664;
        case 0x2ac668u: goto label_2ac668;
        case 0x2ac66cu: goto label_2ac66c;
        case 0x2ac670u: goto label_2ac670;
        case 0x2ac674u: goto label_2ac674;
        case 0x2ac678u: goto label_2ac678;
        case 0x2ac67cu: goto label_2ac67c;
        case 0x2ac680u: goto label_2ac680;
        case 0x2ac684u: goto label_2ac684;
        case 0x2ac688u: goto label_2ac688;
        case 0x2ac68cu: goto label_2ac68c;
        case 0x2ac690u: goto label_2ac690;
        case 0x2ac694u: goto label_2ac694;
        case 0x2ac698u: goto label_2ac698;
        case 0x2ac69cu: goto label_2ac69c;
        case 0x2ac6a0u: goto label_2ac6a0;
        case 0x2ac6a4u: goto label_2ac6a4;
        case 0x2ac6a8u: goto label_2ac6a8;
        case 0x2ac6acu: goto label_2ac6ac;
        case 0x2ac6b0u: goto label_2ac6b0;
        case 0x2ac6b4u: goto label_2ac6b4;
        case 0x2ac6b8u: goto label_2ac6b8;
        case 0x2ac6bcu: goto label_2ac6bc;
        case 0x2ac6c0u: goto label_2ac6c0;
        case 0x2ac6c4u: goto label_2ac6c4;
        case 0x2ac6c8u: goto label_2ac6c8;
        case 0x2ac6ccu: goto label_2ac6cc;
        case 0x2ac6d0u: goto label_2ac6d0;
        case 0x2ac6d4u: goto label_2ac6d4;
        case 0x2ac6d8u: goto label_2ac6d8;
        case 0x2ac6dcu: goto label_2ac6dc;
        case 0x2ac6e0u: goto label_2ac6e0;
        case 0x2ac6e4u: goto label_2ac6e4;
        case 0x2ac6e8u: goto label_2ac6e8;
        case 0x2ac6ecu: goto label_2ac6ec;
        case 0x2ac6f0u: goto label_2ac6f0;
        case 0x2ac6f4u: goto label_2ac6f4;
        case 0x2ac6f8u: goto label_2ac6f8;
        case 0x2ac6fcu: goto label_2ac6fc;
        case 0x2ac700u: goto label_2ac700;
        case 0x2ac704u: goto label_2ac704;
        case 0x2ac708u: goto label_2ac708;
        case 0x2ac70cu: goto label_2ac70c;
        case 0x2ac710u: goto label_2ac710;
        case 0x2ac714u: goto label_2ac714;
        case 0x2ac718u: goto label_2ac718;
        case 0x2ac71cu: goto label_2ac71c;
        case 0x2ac720u: goto label_2ac720;
        case 0x2ac724u: goto label_2ac724;
        case 0x2ac728u: goto label_2ac728;
        case 0x2ac72cu: goto label_2ac72c;
        case 0x2ac730u: goto label_2ac730;
        case 0x2ac734u: goto label_2ac734;
        case 0x2ac738u: goto label_2ac738;
        case 0x2ac73cu: goto label_2ac73c;
        case 0x2ac740u: goto label_2ac740;
        case 0x2ac744u: goto label_2ac744;
        case 0x2ac748u: goto label_2ac748;
        case 0x2ac74cu: goto label_2ac74c;
        case 0x2ac750u: goto label_2ac750;
        case 0x2ac754u: goto label_2ac754;
        case 0x2ac758u: goto label_2ac758;
        case 0x2ac75cu: goto label_2ac75c;
        case 0x2ac760u: goto label_2ac760;
        case 0x2ac764u: goto label_2ac764;
        case 0x2ac768u: goto label_2ac768;
        case 0x2ac76cu: goto label_2ac76c;
        case 0x2ac770u: goto label_2ac770;
        case 0x2ac774u: goto label_2ac774;
        case 0x2ac778u: goto label_2ac778;
        case 0x2ac77cu: goto label_2ac77c;
        case 0x2ac780u: goto label_2ac780;
        case 0x2ac784u: goto label_2ac784;
        case 0x2ac788u: goto label_2ac788;
        case 0x2ac78cu: goto label_2ac78c;
        case 0x2ac790u: goto label_2ac790;
        case 0x2ac794u: goto label_2ac794;
        case 0x2ac798u: goto label_2ac798;
        case 0x2ac79cu: goto label_2ac79c;
        case 0x2ac7a0u: goto label_2ac7a0;
        case 0x2ac7a4u: goto label_2ac7a4;
        case 0x2ac7a8u: goto label_2ac7a8;
        case 0x2ac7acu: goto label_2ac7ac;
        case 0x2ac7b0u: goto label_2ac7b0;
        case 0x2ac7b4u: goto label_2ac7b4;
        case 0x2ac7b8u: goto label_2ac7b8;
        case 0x2ac7bcu: goto label_2ac7bc;
        case 0x2ac7c0u: goto label_2ac7c0;
        case 0x2ac7c4u: goto label_2ac7c4;
        case 0x2ac7c8u: goto label_2ac7c8;
        case 0x2ac7ccu: goto label_2ac7cc;
        case 0x2ac7d0u: goto label_2ac7d0;
        case 0x2ac7d4u: goto label_2ac7d4;
        case 0x2ac7d8u: goto label_2ac7d8;
        case 0x2ac7dcu: goto label_2ac7dc;
        case 0x2ac7e0u: goto label_2ac7e0;
        case 0x2ac7e4u: goto label_2ac7e4;
        case 0x2ac7e8u: goto label_2ac7e8;
        case 0x2ac7ecu: goto label_2ac7ec;
        case 0x2ac7f0u: goto label_2ac7f0;
        case 0x2ac7f4u: goto label_2ac7f4;
        case 0x2ac7f8u: goto label_2ac7f8;
        case 0x2ac7fcu: goto label_2ac7fc;
        case 0x2ac800u: goto label_2ac800;
        case 0x2ac804u: goto label_2ac804;
        case 0x2ac808u: goto label_2ac808;
        case 0x2ac80cu: goto label_2ac80c;
        case 0x2ac810u: goto label_2ac810;
        case 0x2ac814u: goto label_2ac814;
        case 0x2ac818u: goto label_2ac818;
        case 0x2ac81cu: goto label_2ac81c;
        case 0x2ac820u: goto label_2ac820;
        case 0x2ac824u: goto label_2ac824;
        case 0x2ac828u: goto label_2ac828;
        case 0x2ac82cu: goto label_2ac82c;
        case 0x2ac830u: goto label_2ac830;
        case 0x2ac834u: goto label_2ac834;
        default: break;
    }

    ctx->pc = 0x2ac5e0u;

label_2ac5e0:
    // 0x2ac5e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2ac5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2ac5e4:
    // 0x2ac5e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ac5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2ac5e8:
    // 0x2ac5e8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2ac5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2ac5ec:
    // 0x2ac5ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ac5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ac5f0:
    // 0x2ac5f0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2ac5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2ac5f4:
    // 0x2ac5f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ac5f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ac5f8:
    // 0x2ac5f8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2ac5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2ac5fc:
    // 0x2ac5fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ac5fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ac600:
    // 0x2ac600: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2ac600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_2ac604:
    // 0x2ac604: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ac604u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ac608:
    // 0x2ac608: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2ac608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2ac60c:
    // 0x2ac60c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2ac60cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ac610:
    // 0x2ac610: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2ac610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2ac614:
    // 0x2ac614: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2ac614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2ac618:
    // 0x2ac618: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2ac618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_2ac61c:
    // 0x2ac61c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2ac61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_2ac620:
    // 0x2ac620: 0x1622002b  bne         $s1, $v0, . + 4 + (0x2B << 2)
label_2ac624:
    if (ctx->pc == 0x2AC624u) {
        ctx->pc = 0x2AC624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC620u;
        // 0x2ac624: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC628u;
        goto label_2ac628;
    }
    ctx->pc = 0x2AC620u;
    {
        const bool branch_taken_0x2ac620 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AC624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC620u;
        // 0x2ac624: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac620) {
            ctx->pc = 0x2AC6D0u;
            goto label_2ac6d0;
        }
    }
    ctx->pc = 0x2AC628u;
label_2ac628:
    // 0x2ac628: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ac628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ac62c:
    // 0x2ac62c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ac62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ac630:
    // 0x2ac630: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2ac634:
    if (ctx->pc == 0x2AC634u) {
        ctx->pc = 0x2AC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC630u;
        // 0x2ac634: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC638u;
        goto label_2ac638;
    }
    ctx->pc = 0x2AC630u;
    {
        const bool branch_taken_0x2ac630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC630u;
        // 0x2ac634: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac630) {
            ctx->pc = 0x2AC670u;
            goto label_2ac670;
        }
    }
    ctx->pc = 0x2AC638u;
label_2ac638:
    // 0x2ac638: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2ac638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2ac63c:
    // 0x2ac63c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ac63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ac640:
    // 0x2ac640: 0x1451000b  bne         $v0, $s1, . + 4 + (0xB << 2)
label_2ac644:
    if (ctx->pc == 0x2AC644u) {
        ctx->pc = 0x2AC648u;
        goto label_2ac648;
    }
    ctx->pc = 0x2AC640u;
    {
        const bool branch_taken_0x2ac640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2ac640) {
            ctx->pc = 0x2AC670u;
            goto label_2ac670;
        }
    }
    ctx->pc = 0x2AC648u;
label_2ac648:
    // 0x2ac648: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2ac648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2ac64c:
    // 0x2ac64c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2ac64cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ac650:
    // 0x2ac650: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2ac650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_2ac654:
    // 0x2ac654: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ac654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2ac658:
    // 0x2ac658: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x2ac658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2ac65c:
    // 0x2ac65c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ac660:
    if (ctx->pc == 0x2AC660u) {
        ctx->pc = 0x2AC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC65Cu;
        // 0x2ac660: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC664u;
        goto label_2ac664;
    }
    ctx->pc = 0x2AC65Cu;
    {
        const bool branch_taken_0x2ac65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC65Cu;
        // 0x2ac660: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac65c) {
            ctx->pc = 0x2AC670u;
            goto label_2ac670;
        }
    }
    ctx->pc = 0x2AC664u;
label_2ac664:
    // 0x2ac664: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ac664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ac668:
    // 0x2ac668: 0x5045fffb  beql        $v0, $a1, . + 4 + (-0x5 << 2)
label_2ac66c:
    if (ctx->pc == 0x2AC66Cu) {
        ctx->pc = 0x2AC66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC668u;
        // 0x2ac66c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC670u;
        goto label_2ac670;
    }
    ctx->pc = 0x2AC668u;
    {
        const bool branch_taken_0x2ac668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2ac668) {
            ctx->pc = 0x2AC66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC668u;
            // 0x2ac66c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ac658;
        }
    }
    ctx->pc = 0x2AC670u;
label_2ac670:
    // 0x2ac670: 0x10870064  beq         $a0, $a3, . + 4 + (0x64 << 2)
label_2ac674:
    if (ctx->pc == 0x2AC674u) {
        ctx->pc = 0x2AC674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC670u;
        // 0x2ac674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC678u;
        goto label_2ac678;
    }
    ctx->pc = 0x2AC670u;
    {
        const bool branch_taken_0x2ac670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x2AC674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC670u;
        // 0x2ac674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac670) {
            ctx->pc = 0x2AC804u;
            goto label_2ac804;
        }
    }
    ctx->pc = 0x2AC678u;
label_2ac678:
    // 0x2ac678: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2ac678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2ac67c:
    // 0x2ac67c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac67cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2ac680:
    // 0x2ac680: 0x48940  sll         $s1, $a0, 5
    ctx->pc = 0x2ac680u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2ac684:
    // 0x2ac684: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x2ac684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_2ac688:
    // 0x2ac688: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ac688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ac68c:
    // 0x2ac68c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ac68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ac690:
    // 0x2ac690: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2ac690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2ac694:
    // 0x2ac694: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2ac698:
    if (ctx->pc == 0x2AC698u) {
        ctx->pc = 0x2AC698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC694u;
        // 0x2ac698: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC69Cu;
        goto label_2ac69c;
    }
    ctx->pc = 0x2AC694u;
    {
        const bool branch_taken_0x2ac694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC694u;
        // 0x2ac698: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac694) {
            ctx->pc = 0x2AC6BCu;
            goto label_2ac6bc;
        }
    }
    ctx->pc = 0x2AC69Cu;
label_2ac69c:
    // 0x2ac69c: 0x0  nop
    ctx->pc = 0x2ac69cu;
    // NOP
label_2ac6a0:
    // 0x2ac6a0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2ac6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2ac6a4:
    // 0x2ac6a4: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x2ac6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2ac6a8:
    // 0x2ac6a8: 0x0  nop
    ctx->pc = 0x2ac6a8u;
    // NOP
label_2ac6ac:
    // 0x2ac6ac: 0x0  nop
    ctx->pc = 0x2ac6acu;
    // NOP
label_2ac6b0:
    // 0x2ac6b0: 0x0  nop
    ctx->pc = 0x2ac6b0u;
    // NOP
label_2ac6b4:
    // 0x2ac6b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2ac6b8:
    if (ctx->pc == 0x2AC6B8u) {
        ctx->pc = 0x2AC6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC6B4u;
        // 0x2ac6b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC6BCu;
        goto label_2ac6bc;
    }
    ctx->pc = 0x2AC6B4u;
    {
        const bool branch_taken_0x2ac6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC6B4u;
        // 0x2ac6b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac6b4) {
            ctx->pc = 0x2AC6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ac6a0;
        }
    }
    ctx->pc = 0x2AC6BCu;
label_2ac6bc:
    // 0x2ac6bc: 0x225102b  sltu        $v0, $s1, $a1
    ctx->pc = 0x2ac6bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2ac6c0:
    // 0x2ac6c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2ac6c4:
    if (ctx->pc == 0x2AC6C4u) {
        ctx->pc = 0x2AC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC6C0u;
        // 0x2ac6c4: 0x111142  srl         $v0, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC6C8u;
        goto label_2ac6c8;
    }
    ctx->pc = 0x2AC6C0u;
    {
        const bool branch_taken_0x2ac6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC6C0u;
        // 0x2ac6c4: 0x111142  srl         $v0, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac6c0) {
            ctx->pc = 0x2AC6D4u;
            goto label_2ac6d4;
        }
    }
    ctx->pc = 0x2AC6C8u;
label_2ac6c8:
    // 0x2ac6c8: 0x1000004e  b           . + 4 + (0x4E << 2)
label_2ac6cc:
    if (ctx->pc == 0x2AC6CCu) {
        ctx->pc = 0x2AC6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC6C8u;
        // 0x2ac6cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC6D0u;
        goto label_2ac6d0;
    }
    ctx->pc = 0x2AC6C8u;
    {
        const bool branch_taken_0x2ac6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC6C8u;
        // 0x2ac6cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac6c8) {
            ctx->pc = 0x2AC804u;
            goto label_2ac804;
        }
    }
    ctx->pc = 0x2AC6D0u;
label_2ac6d0:
    // 0x2ac6d0: 0x111142  srl         $v0, $s1, 5
    ctx->pc = 0x2ac6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
label_2ac6d4:
    // 0x2ac6d4: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x2ac6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2ac6d8:
    // 0x2ac6d8: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x2ac6d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ac6dc:
    // 0x2ac6dc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2ac6dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ac6e0:
    // 0x2ac6e0: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x2ac6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_2ac6e4:
    // 0x2ac6e4: 0x3226001f  andi        $a2, $s1, 0x1F
    ctx->pc = 0x2ac6e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
label_2ac6e8:
    // 0x2ac6e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ac6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ac6ec:
    // 0x2ac6ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ac6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ac6f0:
    // 0x2ac6f0: 0xc3a804  sllv        $s5, $v1, $a2
    ctx->pc = 0x2ac6f0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
label_2ac6f4:
    // 0x2ac6f4: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x2ac6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2ac6f8:
    // 0x2ac6f8: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x2ac6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
label_2ac6fc:
    // 0x2ac6fc: 0x159827  nor         $s3, $zero, $s5
    ctx->pc = 0x2ac6fcu;
    SET_GPR_U64(ctx, 19, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 21)));
label_2ac700:
    // 0x2ac700: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2ac700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2ac704:
    // 0x2ac704: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x2ac704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_2ac708:
    // 0x2ac708: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2ac708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ac70c:
    // 0x2ac70c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2ac70cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ac710:
    // 0x2ac710: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2ac710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ac714:
    // 0x2ac714: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x2ac714u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2ac718:
    // 0x2ac718: 0x8e080064  lw          $t0, 0x64($s0)
    ctx->pc = 0x2ac718u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_2ac71c:
    // 0x2ac71c: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x2ac71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_2ac720:
    // 0x2ac720: 0x8e070060  lw          $a3, 0x60($s0)
    ctx->pc = 0x2ac720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2ac724:
    // 0x2ac724: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2ac724u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2ac728:
    // 0x2ac728: 0x2484021  addu        $t0, $s2, $t0
    ctx->pc = 0x2ac728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_2ac72c:
    // 0x2ac72c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2ac72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2ac730:
    // 0x2ac730: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x2ac730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_2ac734:
    // 0x2ac734: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2ac734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2ac738:
    // 0x2ac738: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ac738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ac73c:
    // 0x2ac73c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2ac73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2ac740:
    // 0x2ac740: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x2ac740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
label_2ac744:
    // 0x2ac744: 0xa6910020  sh          $s1, 0x20($s4)
    ctx->pc = 0x2ac744u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 32), (uint16_t)GPR_U32(ctx, 17));
label_2ac748:
    // 0x2ac748: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2ac748u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_2ac74c:
    // 0x2ac74c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2ac74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2ac750:
    // 0x2ac750: 0xae900024  sw          $s0, 0x24($s4)
    ctx->pc = 0x2ac750u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 16));
label_2ac754:
    // 0x2ac754: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ac754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ac758:
    // 0x2ac758: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2ac758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2ac75c:
    // 0x2ac75c: 0xacd40000  sw          $s4, 0x0($a2)
    ctx->pc = 0x2ac75cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 20));
label_2ac760:
    // 0x2ac760: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x2ac760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
label_2ac764:
    // 0x2ac764: 0x40f809  jalr        $v0
label_2ac768:
    if (ctx->pc == 0x2AC768u) {
        ctx->pc = 0x2AC768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC764u;
        // 0x2ac768: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC76Cu;
        goto label_2ac76c;
    }
    ctx->pc = 0x2AC764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AC76Cu);
        ctx->pc = 0x2AC768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC764u;
        // 0x2ac768: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC764u, 0x2AC76Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AC76Cu;
label_2ac76c:
    // 0x2ac76c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2ac770:
    if (ctx->pc == 0x2AC770u) {
        ctx->pc = 0x2AC770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC76Cu;
        // 0x2ac770: 0x3225ffff  andi        $a1, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC774u;
        goto label_2ac774;
    }
    ctx->pc = 0x2AC76Cu;
    {
        const bool branch_taken_0x2ac76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC76Cu;
        // 0x2ac770: 0x3225ffff  andi        $a1, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac76c) {
            ctx->pc = 0x2AC794u;
            goto label_2ac794;
        }
    }
    ctx->pc = 0x2AC774u;
label_2ac774:
    // 0x2ac774: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ac774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ac778:
    // 0x2ac778: 0xc0adc58  jal         func_2B7160
label_2ac77c:
    if (ctx->pc == 0x2AC77Cu) {
        ctx->pc = 0x2AC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC778u;
        // 0x2ac77c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC780u;
        goto label_2ac780;
    }
    ctx->pc = 0x2AC778u;
    SET_GPR_U32(ctx, 31, 0x2AC780u);
    ctx->pc = 0x2AC77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC778u;
    // 0x2ac77c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B7160u, 0x2AC778u, 0x2AC780u)) {
        return;
    }
    ctx->pc = 0x2AC780u;
label_2ac780:
    // 0x2ac780: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2ac780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_2ac784:
    // 0x2ac784: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2ac784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_2ac788:
    // 0x2ac788: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ac788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ac78c:
    // 0x2ac78c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2ac790:
    if (ctx->pc == 0x2AC790u) {
        ctx->pc = 0x2AC790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC78Cu;
        // 0x2ac790: 0x551025  or          $v0, $v0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC794u;
        goto label_2ac794;
    }
    ctx->pc = 0x2AC78Cu;
    {
        const bool branch_taken_0x2ac78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC78Cu;
        // 0x2ac790: 0x551025  or          $v0, $v0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac78c) {
            ctx->pc = 0x2AC7A4u;
            goto label_2ac7a4;
        }
    }
    ctx->pc = 0x2AC794u;
label_2ac794:
    // 0x2ac794: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2ac794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_2ac798:
    // 0x2ac798: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2ac798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_2ac79c:
    // 0x2ac79c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ac79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ac7a0:
    // 0x2ac7a0: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x2ac7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_2ac7a4:
    // 0x2ac7a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2ac7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2ac7a8:
    // 0x2ac7a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ac7ac:
    // 0x2ac7ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ac7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ac7b0:
    // 0x2ac7b0: 0xc0ab42e  jal         func_2AD0B8
label_2ac7b4:
    if (ctx->pc == 0x2AC7B4u) {
        ctx->pc = 0x2AC7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC7B0u;
        // 0x2ac7b4: 0x32c60001  andi        $a2, $s6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC7B8u;
        goto label_2ac7b8;
    }
    ctx->pc = 0x2AC7B0u;
    SET_GPR_U32(ctx, 31, 0x2AC7B8u);
    ctx->pc = 0x2AC7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC7B0u;
    // 0x2ac7b4: 0x32c60001  andi        $a2, $s6, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD0B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD0B8u, 0x2AC7B0u, 0x2AC7B8u)) {
        return;
    }
    ctx->pc = 0x2AC7B8u;
label_2ac7b8:
    // 0x2ac7b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ac7bc:
    // 0x2ac7bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ac7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ac7c0:
    // 0x2ac7c0: 0xc0ab44a  jal         func_2AD128
label_2ac7c4:
    if (ctx->pc == 0x2AC7C4u) {
        ctx->pc = 0x2AC7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC7C0u;
        // 0x2ac7c4: 0x32c60002  andi        $a2, $s6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC7C8u;
        goto label_2ac7c8;
    }
    ctx->pc = 0x2AC7C0u;
    SET_GPR_U32(ctx, 31, 0x2AC7C8u);
    ctx->pc = 0x2AC7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC7C0u;
    // 0x2ac7c4: 0x32c60002  andi        $a2, $s6, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD128u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD128u, 0x2AC7C0u, 0x2AC7C8u)) {
        return;
    }
    ctx->pc = 0x2AC7C8u;
label_2ac7c8:
    // 0x2ac7c8: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x2ac7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2ac7cc:
    // 0x2ac7cc: 0x1e2080  sll         $a0, $fp, 2
    ctx->pc = 0x2ac7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_2ac7d0:
    // 0x2ac7d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ac7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ac7d4:
    // 0x2ac7d4: 0x32c60004  andi        $a2, $s6, 0x4
    ctx->pc = 0x2ac7d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_2ac7d8:
    // 0x2ac7d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2ac7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2ac7dc:
    // 0x2ac7dc: 0x2e31804  sllv        $v1, $v1, $s7
    ctx->pc = 0x2ac7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 23) & 0x1F));
label_2ac7e0:
    // 0x2ac7e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ac7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ac7e4:
    // 0x2ac7e4: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2ac7e4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_2ac7e8:
    // 0x2ac7e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ac7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ac7ec:
    // 0x2ac7ec: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_2ac7f0:
    if (ctx->pc == 0x2AC7F0u) {
        ctx->pc = 0x2AC7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC7ECu;
        // 0x2ac7f0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC7F4u;
        goto label_2ac7f4;
    }
    ctx->pc = 0x2AC7ECu;
    {
        const bool branch_taken_0x2ac7ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC7ECu;
        // 0x2ac7f0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac7ec) {
            ctx->pc = 0x2AC800u;
            goto label_2ac800;
        }
    }
    ctx->pc = 0x2AC7F4u;
label_2ac7f4:
    // 0x2ac7f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ac7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ac7f8:
    // 0x2ac7f8: 0xc0ab4d4  jal         func_2AD350
label_2ac7fc:
    if (ctx->pc == 0x2AC7FCu) {
        ctx->pc = 0x2AC7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC7F8u;
        // 0x2ac7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC800u;
        goto label_2ac800;
    }
    ctx->pc = 0x2AC7F8u;
    SET_GPR_U32(ctx, 31, 0x2AC800u);
    ctx->pc = 0x2AC7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC7F8u;
    // 0x2ac7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD350u, 0x2AC7F8u, 0x2AC800u)) {
        return;
    }
    ctx->pc = 0x2AC800u;
label_2ac800:
    // 0x2ac800: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ac800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ac804:
    // 0x2ac804: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2ac804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2ac808:
    // 0x2ac808: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2ac808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2ac80c:
    // 0x2ac80c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2ac80cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2ac810:
    // 0x2ac810: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2ac810u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ac814:
    // 0x2ac814: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2ac814u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ac818:
    // 0x2ac818: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2ac818u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ac81c:
    // 0x2ac81c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2ac81cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ac820:
    // 0x2ac820: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2ac820u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ac824:
    // 0x2ac824: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2ac824u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ac828:
    // 0x2ac828: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ac828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ac82c:
    // 0x2ac82c: 0x3e00008  jr          $ra
label_2ac830:
    if (ctx->pc == 0x2AC830u) {
        ctx->pc = 0x2AC830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC82Cu;
        // 0x2ac830: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC834u;
        goto label_2ac834;
    }
    ctx->pc = 0x2AC82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC82Cu;
        // 0x2ac830: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC834u;
label_2ac834:
    // 0x2ac834: 0x0  nop
    ctx->pc = 0x2ac834u;
    // NOP
    ctx->pc = 0x2ac838u;
}
