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

// Function: sub_002F95F0
// Address: 0x2f95f0 - 0x2f97b8
void sub_002F95F0_0x2f95f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F95F0_0x2f95f0");
#endif

    switch (ctx->pc) {
        case 0x2f95f0u: goto label_2f95f0;
        case 0x2f95f4u: goto label_2f95f4;
        case 0x2f95f8u: goto label_2f95f8;
        case 0x2f95fcu: goto label_2f95fc;
        case 0x2f9600u: goto label_2f9600;
        case 0x2f9604u: goto label_2f9604;
        case 0x2f9608u: goto label_2f9608;
        case 0x2f960cu: goto label_2f960c;
        case 0x2f9610u: goto label_2f9610;
        case 0x2f9614u: goto label_2f9614;
        case 0x2f9618u: goto label_2f9618;
        case 0x2f961cu: goto label_2f961c;
        case 0x2f9620u: goto label_2f9620;
        case 0x2f9624u: goto label_2f9624;
        case 0x2f9628u: goto label_2f9628;
        case 0x2f962cu: goto label_2f962c;
        case 0x2f9630u: goto label_2f9630;
        case 0x2f9634u: goto label_2f9634;
        case 0x2f9638u: goto label_2f9638;
        case 0x2f963cu: goto label_2f963c;
        case 0x2f9640u: goto label_2f9640;
        case 0x2f9644u: goto label_2f9644;
        case 0x2f9648u: goto label_2f9648;
        case 0x2f964cu: goto label_2f964c;
        case 0x2f9650u: goto label_2f9650;
        case 0x2f9654u: goto label_2f9654;
        case 0x2f9658u: goto label_2f9658;
        case 0x2f965cu: goto label_2f965c;
        case 0x2f9660u: goto label_2f9660;
        case 0x2f9664u: goto label_2f9664;
        case 0x2f9668u: goto label_2f9668;
        case 0x2f966cu: goto label_2f966c;
        case 0x2f9670u: goto label_2f9670;
        case 0x2f9674u: goto label_2f9674;
        case 0x2f9678u: goto label_2f9678;
        case 0x2f967cu: goto label_2f967c;
        case 0x2f9680u: goto label_2f9680;
        case 0x2f9684u: goto label_2f9684;
        case 0x2f9688u: goto label_2f9688;
        case 0x2f968cu: goto label_2f968c;
        case 0x2f9690u: goto label_2f9690;
        case 0x2f9694u: goto label_2f9694;
        case 0x2f9698u: goto label_2f9698;
        case 0x2f969cu: goto label_2f969c;
        case 0x2f96a0u: goto label_2f96a0;
        case 0x2f96a4u: goto label_2f96a4;
        case 0x2f96a8u: goto label_2f96a8;
        case 0x2f96acu: goto label_2f96ac;
        case 0x2f96b0u: goto label_2f96b0;
        case 0x2f96b4u: goto label_2f96b4;
        case 0x2f96b8u: goto label_2f96b8;
        case 0x2f96bcu: goto label_2f96bc;
        case 0x2f96c0u: goto label_2f96c0;
        case 0x2f96c4u: goto label_2f96c4;
        case 0x2f96c8u: goto label_2f96c8;
        case 0x2f96ccu: goto label_2f96cc;
        case 0x2f96d0u: goto label_2f96d0;
        case 0x2f96d4u: goto label_2f96d4;
        case 0x2f96d8u: goto label_2f96d8;
        case 0x2f96dcu: goto label_2f96dc;
        case 0x2f96e0u: goto label_2f96e0;
        case 0x2f96e4u: goto label_2f96e4;
        case 0x2f96e8u: goto label_2f96e8;
        case 0x2f96ecu: goto label_2f96ec;
        case 0x2f96f0u: goto label_2f96f0;
        case 0x2f96f4u: goto label_2f96f4;
        case 0x2f96f8u: goto label_2f96f8;
        case 0x2f96fcu: goto label_2f96fc;
        case 0x2f9700u: goto label_2f9700;
        case 0x2f9704u: goto label_2f9704;
        case 0x2f9708u: goto label_2f9708;
        case 0x2f970cu: goto label_2f970c;
        case 0x2f9710u: goto label_2f9710;
        case 0x2f9714u: goto label_2f9714;
        case 0x2f9718u: goto label_2f9718;
        case 0x2f971cu: goto label_2f971c;
        case 0x2f9720u: goto label_2f9720;
        case 0x2f9724u: goto label_2f9724;
        case 0x2f9728u: goto label_2f9728;
        case 0x2f972cu: goto label_2f972c;
        case 0x2f9730u: goto label_2f9730;
        case 0x2f9734u: goto label_2f9734;
        case 0x2f9738u: goto label_2f9738;
        case 0x2f973cu: goto label_2f973c;
        case 0x2f9740u: goto label_2f9740;
        case 0x2f9744u: goto label_2f9744;
        case 0x2f9748u: goto label_2f9748;
        case 0x2f974cu: goto label_2f974c;
        case 0x2f9750u: goto label_2f9750;
        case 0x2f9754u: goto label_2f9754;
        case 0x2f9758u: goto label_2f9758;
        case 0x2f975cu: goto label_2f975c;
        case 0x2f9760u: goto label_2f9760;
        case 0x2f9764u: goto label_2f9764;
        case 0x2f9768u: goto label_2f9768;
        case 0x2f976cu: goto label_2f976c;
        case 0x2f9770u: goto label_2f9770;
        case 0x2f9774u: goto label_2f9774;
        case 0x2f9778u: goto label_2f9778;
        case 0x2f977cu: goto label_2f977c;
        case 0x2f9780u: goto label_2f9780;
        case 0x2f9784u: goto label_2f9784;
        case 0x2f9788u: goto label_2f9788;
        case 0x2f978cu: goto label_2f978c;
        case 0x2f9790u: goto label_2f9790;
        case 0x2f9794u: goto label_2f9794;
        case 0x2f9798u: goto label_2f9798;
        case 0x2f979cu: goto label_2f979c;
        case 0x2f97a0u: goto label_2f97a0;
        case 0x2f97a4u: goto label_2f97a4;
        case 0x2f97a8u: goto label_2f97a8;
        case 0x2f97acu: goto label_2f97ac;
        case 0x2f97b0u: goto label_2f97b0;
        case 0x2f97b4u: goto label_2f97b4;
        default: break;
    }

    ctx->pc = 0x2f95f0u;

label_2f95f0:
    // 0x2f95f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f95f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2f95f4:
    // 0x2f95f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f95f8:
    // 0x2f95f8: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2f95f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_2f95fc:
    // 0x2f95fc: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2f95fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_2f9600:
    // 0x2f9600: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f9600u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9604:
    // 0x2f9604: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f9604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2f9608:
    // 0x2f9608: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f9608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f960c:
    // 0x2f960c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2f960cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_2f9610:
    // 0x2f9610: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2f9610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2f9614:
    // 0x2f9614: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f9614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2f9618:
    // 0x2f9618: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x2f9618u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2f961c:
    // 0x2f961c: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_2f9620:
    if (ctx->pc == 0x2F9620u) {
        ctx->pc = 0x2F9620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F961Cu;
        // 0x2f9620: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9624u;
        goto label_2f9624;
    }
    ctx->pc = 0x2F961Cu;
    {
        const bool branch_taken_0x2f961c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F961Cu;
        // 0x2f9620: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f961c) {
            ctx->pc = 0x2F9630u;
            goto label_2f9630;
        }
    }
    ctx->pc = 0x2F9624u;
label_2f9624:
    // 0x2f9624: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x2f9624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2f9628:
    // 0x2f9628: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2f962c:
    if (ctx->pc == 0x2F962Cu) {
        ctx->pc = 0x2F962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9628u;
        // 0x2f962c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9630u;
        goto label_2f9630;
    }
    ctx->pc = 0x2F9628u;
    {
        const bool branch_taken_0x2f9628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9628) {
            ctx->pc = 0x2F962Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9628u;
            // 0x2f962c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9638u;
            goto label_2f9638;
        }
    }
    ctx->pc = 0x2F9630u;
label_2f9630:
    // 0x2f9630: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2f9630u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9634:
    // 0x2f9634: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f9634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2f9638:
    // 0x2f9638: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f963c:
    if (ctx->pc == 0x2F963Cu) {
        ctx->pc = 0x2F963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9638u;
        // 0x2f963c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9640u;
        goto label_2f9640;
    }
    ctx->pc = 0x2F9638u;
    {
        const bool branch_taken_0x2f9638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9638u;
        // 0x2f963c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9638) {
            ctx->pc = 0x2F964Cu;
            goto label_2f964c;
        }
    }
    ctx->pc = 0x2F9640u;
label_2f9640:
    // 0x2f9640: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2f9640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2f9644:
    // 0x2f9644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f9644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9648:
    // 0x2f9648: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2f9648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2f964c:
    // 0x2f964c: 0xc0be472  jal         func_2F91C8
label_2f9650:
    if (ctx->pc == 0x2F9650u) {
        ctx->pc = 0x2F9650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F964Cu;
        // 0x2f9650: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9654u;
        goto label_2f9654;
    }
    ctx->pc = 0x2F964Cu;
    SET_GPR_U32(ctx, 31, 0x2F9654u);
    ctx->pc = 0x2F9650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F964Cu;
    // 0x2f9650: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F91C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F91C8u, 0x2F964Cu, 0x2F9654u)) {
        return;
    }
    ctx->pc = 0x2F9654u;
label_2f9654:
    // 0x2f9654: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2f9658:
    if (ctx->pc == 0x2F9658u) {
        ctx->pc = 0x2F9658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9654u;
        // 0x2f9658: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F965Cu;
        goto label_2f965c;
    }
    ctx->pc = 0x2F9654u;
    {
        const bool branch_taken_0x2f9654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9654) {
            ctx->pc = 0x2F9658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9654u;
            // 0x2f9658: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9670u;
            goto label_2f9670;
        }
    }
    ctx->pc = 0x2F965Cu;
label_2f965c:
    // 0x2f965c: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
label_2f9660:
    if (ctx->pc == 0x2F9660u) {
        ctx->pc = 0x2F9660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F965Cu;
        // 0x2f9660: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9664u;
        goto label_2f9664;
    }
    ctx->pc = 0x2F965Cu;
    {
        const bool branch_taken_0x2f965c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f965c) {
            ctx->pc = 0x2F9660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F965Cu;
            // 0x2f9660: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9670u;
            goto label_2f9670;
        }
    }
    ctx->pc = 0x2F9664u;
label_2f9664:
    // 0x2f9664: 0xc0be6d8  jal         func_2F9B60
label_2f9668:
    if (ctx->pc == 0x2F9668u) {
        ctx->pc = 0x2F9668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9664u;
        // 0x2f9668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F966Cu;
        goto label_2f966c;
    }
    ctx->pc = 0x2F9664u;
    SET_GPR_U32(ctx, 31, 0x2F966Cu);
    ctx->pc = 0x2F9668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9664u;
    // 0x2f9668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9B60u, 0x2F9664u, 0x2F966Cu)) {
        return;
    }
    ctx->pc = 0x2F966Cu;
label_2f966c:
    // 0x2f966c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x2f966cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_2f9670:
    // 0x2f9670: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
label_2f9674:
    if (ctx->pc == 0x2F9674u) {
        ctx->pc = 0x2F9674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9670u;
        // 0x2f9674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9678u;
        goto label_2f9678;
    }
    ctx->pc = 0x2F9670u;
    {
        const bool branch_taken_0x2f9670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9670u;
        // 0x2f9674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9670) {
            ctx->pc = 0x2F9794u;
            goto label_2f9794;
        }
    }
    ctx->pc = 0x2F9678u;
label_2f9678:
    // 0x2f9678: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f9678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f967c:
    // 0x2f967c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f967cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f9680:
    // 0x2f9680: 0xc0c0a02  jal         func_302808
label_2f9684:
    if (ctx->pc == 0x2F9684u) {
        ctx->pc = 0x2F9684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9680u;
        // 0x2f9684: 0xae120130  sw          $s2, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9688u;
        goto label_2f9688;
    }
    ctx->pc = 0x2F9680u;
    SET_GPR_U32(ctx, 31, 0x2F9688u);
    ctx->pc = 0x2F9684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9680u;
    // 0x2f9684: 0xae120130  sw          $s2, 0x130($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x302808u, 0x2F9680u, 0x2F9688u)) {
        return;
    }
    ctx->pc = 0x2F9688u;
label_2f9688:
    // 0x2f9688: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2f968c:
    if (ctx->pc == 0x2F968Cu) {
        ctx->pc = 0x2F968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9688u;
        // 0x2f968c: 0x8e0200e8  lw          $v0, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9690u;
        goto label_2f9690;
    }
    ctx->pc = 0x2F9688u;
    {
        const bool branch_taken_0x2f9688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9688) {
            ctx->pc = 0x2F968Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9688u;
            // 0x2f968c: 0x8e0200e8  lw          $v0, 0xE8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F96A4u;
            goto label_2f96a4;
        }
    }
    ctx->pc = 0x2F9690u;
label_2f9690:
    // 0x2f9690: 0xc0be9a6  jal         func_2FA698
label_2f9694:
    if (ctx->pc == 0x2F9694u) {
        ctx->pc = 0x2F9694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9690u;
        // 0x2f9694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9698u;
        goto label_2f9698;
    }
    ctx->pc = 0x2F9690u;
    SET_GPR_U32(ctx, 31, 0x2F9698u);
    ctx->pc = 0x2F9694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9690u;
    // 0x2f9694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FA698u, 0x2F9690u, 0x2F9698u)) {
        return;
    }
    ctx->pc = 0x2F9698u;
label_2f9698:
    // 0x2f9698: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2f9698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_2f969c:
    // 0x2f969c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_2f96a0:
    if (ctx->pc == 0x2F96A0u) {
        ctx->pc = 0x2F96A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F969Cu;
        // 0x2f96a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F96A4u;
        goto label_2f96a4;
    }
    ctx->pc = 0x2F969Cu;
    {
        const bool branch_taken_0x2f969c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F96A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F969Cu;
        // 0x2f96a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f969c) {
            ctx->pc = 0x2F9794u;
            goto label_2f9794;
        }
    }
    ctx->pc = 0x2F96A4u;
label_2f96a4:
    // 0x2f96a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f96a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f96a8:
    // 0x2f96a8: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x2f96a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_2f96ac:
    // 0x2f96ac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f96acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2f96b0:
    // 0x2f96b0: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x2f96b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18));
label_2f96b4:
    // 0x2f96b4: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
label_2f96b8:
    if (ctx->pc == 0x2F96B8u) {
        ctx->pc = 0x2F96B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96B4u;
        // 0x2f96b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F96BCu;
        goto label_2f96bc;
    }
    ctx->pc = 0x2F96B4u;
    {
        const bool branch_taken_0x2f96b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F96B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96B4u;
        // 0x2f96b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f96b4) {
            ctx->pc = 0x2F9794u;
            goto label_2f9794;
        }
    }
    ctx->pc = 0x2F96BCu;
label_2f96bc:
    // 0x2f96bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f96bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f96c0:
    // 0x2f96c0: 0xc0be472  jal         func_2F91C8
label_2f96c4:
    if (ctx->pc == 0x2F96C4u) {
        ctx->pc = 0x2F96C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96C0u;
        // 0x2f96c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F96C8u;
        goto label_2f96c8;
    }
    ctx->pc = 0x2F96C0u;
    SET_GPR_U32(ctx, 31, 0x2F96C8u);
    ctx->pc = 0x2F96C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F96C0u;
    // 0x2f96c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F91C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F91C8u, 0x2F96C0u, 0x2F96C8u)) {
        return;
    }
    ctx->pc = 0x2F96C8u;
label_2f96c8:
    // 0x2f96c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f96c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f96cc:
    // 0x2f96cc: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x2f96ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18));
label_2f96d0:
    // 0x2f96d0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2f96d4:
    if (ctx->pc == 0x2F96D4u) {
        ctx->pc = 0x2F96D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96D0u;
        // 0x2f96d4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F96D8u;
        goto label_2f96d8;
    }
    ctx->pc = 0x2F96D0u;
    {
        const bool branch_taken_0x2f96d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F96D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96D0u;
        // 0x2f96d4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f96d0) {
            ctx->pc = 0x2F96ECu;
            goto label_2f96ec;
        }
    }
    ctx->pc = 0x2F96D8u;
label_2f96d8:
    // 0x2f96d8: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
label_2f96dc:
    if (ctx->pc == 0x2F96DCu) {
        ctx->pc = 0x2F96DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96D8u;
        // 0x2f96dc: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F96E0u;
        goto label_2f96e0;
    }
    ctx->pc = 0x2F96D8u;
    {
        const bool branch_taken_0x2f96d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f96d8) {
            ctx->pc = 0x2F96DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F96D8u;
            // 0x2f96dc: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F96F0u;
            goto label_2f96f0;
        }
    }
    ctx->pc = 0x2F96E0u;
label_2f96e0:
    // 0x2f96e0: 0xc0be6d8  jal         func_2F9B60
label_2f96e4:
    if (ctx->pc == 0x2F96E4u) {
        ctx->pc = 0x2F96E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96E0u;
        // 0x2f96e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F96E8u;
        goto label_2f96e8;
    }
    ctx->pc = 0x2F96E0u;
    SET_GPR_U32(ctx, 31, 0x2F96E8u);
    ctx->pc = 0x2F96E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F96E0u;
    // 0x2f96e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9B60u, 0x2F96E0u, 0x2F96E8u)) {
        return;
    }
    ctx->pc = 0x2F96E8u;
label_2f96e8:
    // 0x2f96e8: 0x242a00b  movn        $s4, $s2, $v0
    ctx->pc = 0x2f96e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18));
label_2f96ec:
    // 0x2f96ec: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x2f96ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_2f96f0:
    // 0x2f96f0: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_2f96f4:
    if (ctx->pc == 0x2F96F4u) {
        ctx->pc = 0x2F96F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96F0u;
        // 0x2f96f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F96F8u;
        goto label_2f96f8;
    }
    ctx->pc = 0x2F96F0u;
    {
        const bool branch_taken_0x2f96f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F96F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96F0u;
        // 0x2f96f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f96f0) {
            ctx->pc = 0x2F9794u;
            goto label_2f9794;
        }
    }
    ctx->pc = 0x2F96F8u;
label_2f96f8:
    // 0x2f96f8: 0x8e050128  lw          $a1, 0x128($s0)
    ctx->pc = 0x2f96f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_2f96fc:
    // 0x2f96fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f96fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f9700:
    // 0x2f9700: 0xc0be9d6  jal         func_2FA758
label_2f9704:
    if (ctx->pc == 0x2F9704u) {
        ctx->pc = 0x2F9704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9700u;
        // 0x2f9704: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9708u;
        goto label_2f9708;
    }
    ctx->pc = 0x2F9700u;
    SET_GPR_U32(ctx, 31, 0x2F9708u);
    ctx->pc = 0x2F9704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9700u;
    // 0x2f9704: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FA758u, 0x2F9700u, 0x2F9708u)) {
        return;
    }
    ctx->pc = 0x2F9708u;
label_2f9708:
    // 0x2f9708: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x2f9708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_2f970c:
    // 0x2f970c: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x2f970cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2f9710:
    // 0x2f9710: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x2f9710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_2f9714:
    // 0x2f9714: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2f9714u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f9718:
    // 0x2f9718: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2f9718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2f971c:
    // 0x2f971c: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x2f971cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_2f9720:
    // 0x2f9720: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f9720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2f9724:
    // 0x2f9724: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f9724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2f9728:
    // 0x2f9728: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f9728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f972c:
    // 0x2f972c: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x2f972cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
label_2f9730:
    // 0x2f9730: 0x16600017  bnez        $s3, . + 4 + (0x17 << 2)
label_2f9734:
    if (ctx->pc == 0x2F9734u) {
        ctx->pc = 0x2F9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9730u;
        // 0x2f9734: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9738u;
        goto label_2f9738;
    }
    ctx->pc = 0x2F9730u;
    {
        const bool branch_taken_0x2f9730 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9730u;
        // 0x2f9734: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9730) {
            ctx->pc = 0x2F9790u;
            goto label_2f9790;
        }
    }
    ctx->pc = 0x2F9738u;
label_2f9738:
    // 0x2f9738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f9738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f973c:
    // 0x2f973c: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_2f9740:
    if (ctx->pc == 0x2F9740u) {
        ctx->pc = 0x2F9740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F973Cu;
        // 0x2f9740: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9744u;
        goto label_2f9744;
    }
    ctx->pc = 0x2F973Cu;
    {
        const bool branch_taken_0x2f973c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F973Cu;
        // 0x2f9740: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f973c) {
            ctx->pc = 0x2F9790u;
            goto label_2f9790;
        }
    }
    ctx->pc = 0x2F9744u;
label_2f9744:
    // 0x2f9744: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x2f9744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2f9748:
    // 0x2f9748: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_2f974c:
    if (ctx->pc == 0x2F974Cu) {
        ctx->pc = 0x2F974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9748u;
        // 0x2f974c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9750u;
        goto label_2f9750;
    }
    ctx->pc = 0x2F9748u;
    {
        const bool branch_taken_0x2f9748 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9748u;
        // 0x2f974c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9748) {
            ctx->pc = 0x2F9794u;
            goto label_2f9794;
        }
    }
    ctx->pc = 0x2F9750u;
label_2f9750:
    // 0x2f9750: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x2f9750u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_2f9754:
    // 0x2f9754: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
label_2f9758:
    if (ctx->pc == 0x2F9758u) {
        ctx->pc = 0x2F9758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9754u;
        // 0x2f9758: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F975Cu;
        goto label_2f975c;
    }
    ctx->pc = 0x2F9754u;
    {
        const bool branch_taken_0x2f9754 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9754u;
        // 0x2f9758: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9754) {
            ctx->pc = 0x2F9798u;
            goto label_2f9798;
        }
    }
    ctx->pc = 0x2F975Cu;
label_2f975c:
    // 0x2f975c: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x2f975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_2f9760:
    // 0x2f9760: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f9760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f9764:
    // 0x2f9764: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x2f9764u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f9768:
    // 0x2f9768: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2f9768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f976c:
    // 0x2f976c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2f976cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2f9770:
    // 0x2f9770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f9770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f9774:
    // 0x2f9774: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f9774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f9778:
    // 0x2f9778: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x2f9778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_2f977c:
    // 0x2f977c: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x2f977cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_2f9780:
    // 0x2f9780: 0xe0f809  jalr        $a3
label_2f9784:
    if (ctx->pc == 0x2F9784u) {
        ctx->pc = 0x2F9784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9780u;
        // 0x2f9784: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9788u;
        goto label_2f9788;
    }
    ctx->pc = 0x2F9780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2F9788u);
        ctx->pc = 0x2F9784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9780u;
        // 0x2f9784: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9780u, 0x2F9788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F9788u;
label_2f9788:
    // 0x2f9788: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x2f9788u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f978c:
    // 0x2f978c: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f978cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f9790:
    // 0x2f9790: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2f9790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f9794:
    // 0x2f9794: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f9794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2f9798:
    // 0x2f9798: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2f9798u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2f979c:
    // 0x2f979c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2f979cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f97a0:
    // 0x2f97a0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2f97a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f97a4:
    // 0x2f97a4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2f97a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f97a8:
    // 0x2f97a8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f97a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f97ac:
    // 0x2f97ac: 0x3e00008  jr          $ra
label_2f97b0:
    if (ctx->pc == 0x2F97B0u) {
        ctx->pc = 0x2F97B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F97ACu;
        // 0x2f97b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F97B4u;
        goto label_2f97b4;
    }
    ctx->pc = 0x2F97ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F97B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F97ACu;
        // 0x2f97b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F97ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F97B4u;
label_2f97b4:
    // 0x2f97b4: 0x0  nop
    ctx->pc = 0x2f97b4u;
    // NOP
    ctx->pc = 0x2f97b8u;
}
