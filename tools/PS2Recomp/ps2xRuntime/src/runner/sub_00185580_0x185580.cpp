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

// Function: sub_00185580
// Address: 0x185580 - 0x185788
void sub_00185580_0x185580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185580_0x185580");
#endif

    switch (ctx->pc) {
        case 0x185580u: goto label_185580;
        case 0x185584u: goto label_185584;
        case 0x185588u: goto label_185588;
        case 0x18558cu: goto label_18558c;
        case 0x185590u: goto label_185590;
        case 0x185594u: goto label_185594;
        case 0x185598u: goto label_185598;
        case 0x18559cu: goto label_18559c;
        case 0x1855a0u: goto label_1855a0;
        case 0x1855a4u: goto label_1855a4;
        case 0x1855a8u: goto label_1855a8;
        case 0x1855acu: goto label_1855ac;
        case 0x1855b0u: goto label_1855b0;
        case 0x1855b4u: goto label_1855b4;
        case 0x1855b8u: goto label_1855b8;
        case 0x1855bcu: goto label_1855bc;
        case 0x1855c0u: goto label_1855c0;
        case 0x1855c4u: goto label_1855c4;
        case 0x1855c8u: goto label_1855c8;
        case 0x1855ccu: goto label_1855cc;
        case 0x1855d0u: goto label_1855d0;
        case 0x1855d4u: goto label_1855d4;
        case 0x1855d8u: goto label_1855d8;
        case 0x1855dcu: goto label_1855dc;
        case 0x1855e0u: goto label_1855e0;
        case 0x1855e4u: goto label_1855e4;
        case 0x1855e8u: goto label_1855e8;
        case 0x1855ecu: goto label_1855ec;
        case 0x1855f0u: goto label_1855f0;
        case 0x1855f4u: goto label_1855f4;
        case 0x1855f8u: goto label_1855f8;
        case 0x1855fcu: goto label_1855fc;
        case 0x185600u: goto label_185600;
        case 0x185604u: goto label_185604;
        case 0x185608u: goto label_185608;
        case 0x18560cu: goto label_18560c;
        case 0x185610u: goto label_185610;
        case 0x185614u: goto label_185614;
        case 0x185618u: goto label_185618;
        case 0x18561cu: goto label_18561c;
        case 0x185620u: goto label_185620;
        case 0x185624u: goto label_185624;
        case 0x185628u: goto label_185628;
        case 0x18562cu: goto label_18562c;
        case 0x185630u: goto label_185630;
        case 0x185634u: goto label_185634;
        case 0x185638u: goto label_185638;
        case 0x18563cu: goto label_18563c;
        case 0x185640u: goto label_185640;
        case 0x185644u: goto label_185644;
        case 0x185648u: goto label_185648;
        case 0x18564cu: goto label_18564c;
        case 0x185650u: goto label_185650;
        case 0x185654u: goto label_185654;
        case 0x185658u: goto label_185658;
        case 0x18565cu: goto label_18565c;
        case 0x185660u: goto label_185660;
        case 0x185664u: goto label_185664;
        case 0x185668u: goto label_185668;
        case 0x18566cu: goto label_18566c;
        case 0x185670u: goto label_185670;
        case 0x185674u: goto label_185674;
        case 0x185678u: goto label_185678;
        case 0x18567cu: goto label_18567c;
        case 0x185680u: goto label_185680;
        case 0x185684u: goto label_185684;
        case 0x185688u: goto label_185688;
        case 0x18568cu: goto label_18568c;
        case 0x185690u: goto label_185690;
        case 0x185694u: goto label_185694;
        case 0x185698u: goto label_185698;
        case 0x18569cu: goto label_18569c;
        case 0x1856a0u: goto label_1856a0;
        case 0x1856a4u: goto label_1856a4;
        case 0x1856a8u: goto label_1856a8;
        case 0x1856acu: goto label_1856ac;
        case 0x1856b0u: goto label_1856b0;
        case 0x1856b4u: goto label_1856b4;
        case 0x1856b8u: goto label_1856b8;
        case 0x1856bcu: goto label_1856bc;
        case 0x1856c0u: goto label_1856c0;
        case 0x1856c4u: goto label_1856c4;
        case 0x1856c8u: goto label_1856c8;
        case 0x1856ccu: goto label_1856cc;
        case 0x1856d0u: goto label_1856d0;
        case 0x1856d4u: goto label_1856d4;
        case 0x1856d8u: goto label_1856d8;
        case 0x1856dcu: goto label_1856dc;
        case 0x1856e0u: goto label_1856e0;
        case 0x1856e4u: goto label_1856e4;
        case 0x1856e8u: goto label_1856e8;
        case 0x1856ecu: goto label_1856ec;
        case 0x1856f0u: goto label_1856f0;
        case 0x1856f4u: goto label_1856f4;
        case 0x1856f8u: goto label_1856f8;
        case 0x1856fcu: goto label_1856fc;
        case 0x185700u: goto label_185700;
        case 0x185704u: goto label_185704;
        case 0x185708u: goto label_185708;
        case 0x18570cu: goto label_18570c;
        case 0x185710u: goto label_185710;
        case 0x185714u: goto label_185714;
        case 0x185718u: goto label_185718;
        case 0x18571cu: goto label_18571c;
        case 0x185720u: goto label_185720;
        case 0x185724u: goto label_185724;
        case 0x185728u: goto label_185728;
        case 0x18572cu: goto label_18572c;
        case 0x185730u: goto label_185730;
        case 0x185734u: goto label_185734;
        case 0x185738u: goto label_185738;
        case 0x18573cu: goto label_18573c;
        case 0x185740u: goto label_185740;
        case 0x185744u: goto label_185744;
        case 0x185748u: goto label_185748;
        case 0x18574cu: goto label_18574c;
        case 0x185750u: goto label_185750;
        case 0x185754u: goto label_185754;
        case 0x185758u: goto label_185758;
        case 0x18575cu: goto label_18575c;
        case 0x185760u: goto label_185760;
        case 0x185764u: goto label_185764;
        case 0x185768u: goto label_185768;
        case 0x18576cu: goto label_18576c;
        case 0x185770u: goto label_185770;
        case 0x185774u: goto label_185774;
        case 0x185778u: goto label_185778;
        case 0x18577cu: goto label_18577c;
        case 0x185780u: goto label_185780;
        case 0x185784u: goto label_185784;
        default: break;
    }

    ctx->pc = 0x185580u;

label_185580:
    // 0x185580: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x185580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_185584:
    // 0x185584: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x185584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_185588:
    // 0x185588: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x185588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_18558c:
    // 0x18558c: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x18558cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_185590:
    // 0x185590: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x185590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_185594:
    // 0x185594: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x185594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_185598:
    // 0x185598: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x185598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_18559c:
    // 0x18559c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x18559cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1855a0:
    // 0x1855a0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1855a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_1855a4:
    // 0x1855a4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1855a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_1855a8:
    // 0x1855a8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1855a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_1855ac:
    // 0x1855ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1855acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1855b0:
    // 0x1855b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1855b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1855b4:
    // 0x1855b4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1855b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1855b8:
    // 0x1855b8: 0x224182b  sltu        $v1, $s1, $a0
    ctx->pc = 0x1855b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1855bc:
    // 0x1855bc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1855c0:
    if (ctx->pc == 0x1855C0u) {
        ctx->pc = 0x1855C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855BCu;
        // 0x1855c0: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1855C4u;
        goto label_1855c4;
    }
    ctx->pc = 0x1855BCu;
    {
        const bool branch_taken_0x1855bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1855C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855BCu;
        // 0x1855c0: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1855bc) {
            ctx->pc = 0x1855E4u;
            goto label_1855e4;
        }
    }
    ctx->pc = 0x1855C4u;
label_1855c4:
    // 0x1855c4: 0x118840  sll         $s1, $s1, 1
    ctx->pc = 0x1855c4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1855c8:
    // 0x1855c8: 0x224102b  sltu        $v0, $s1, $a0
    ctx->pc = 0x1855c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1855cc:
    // 0x1855cc: 0x0  nop
    ctx->pc = 0x1855ccu;
    // NOP
label_1855d0:
    // 0x1855d0: 0x0  nop
    ctx->pc = 0x1855d0u;
    // NOP
label_1855d4:
    // 0x1855d4: 0x0  nop
    ctx->pc = 0x1855d4u;
    // NOP
label_1855d8:
    // 0x1855d8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_1855dc:
    if (ctx->pc == 0x1855DCu) {
        ctx->pc = 0x1855DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855D8u;
        // 0x1855dc: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1855E0u;
        goto label_1855e0;
    }
    ctx->pc = 0x1855D8u;
    {
        const bool branch_taken_0x1855d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1855d8) {
            ctx->pc = 0x1855DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1855D8u;
            // 0x1855dc: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1855C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1855c8;
        }
    }
    ctx->pc = 0x1855E0u;
label_1855e0:
    // 0x1855e0: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1855e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1855e4:
    // 0x1855e4: 0x2e020081  sltiu       $v0, $s0, 0x81
    ctx->pc = 0x1855e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_1855e8:
    // 0x1855e8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1855ec:
    if (ctx->pc == 0x1855ECu) {
        ctx->pc = 0x1855ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855E8u;
        // 0x1855ec: 0x26240017  addiu       $a0, $s1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1855F0u;
        goto label_1855f0;
    }
    ctx->pc = 0x1855E8u;
    {
        const bool branch_taken_0x1855e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1855ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855E8u;
        // 0x1855ec: 0x26240017  addiu       $a0, $s1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1855e8) {
            ctx->pc = 0x185660u;
            goto label_185660;
        }
    }
    ctx->pc = 0x1855F0u;
label_1855f0:
    // 0x1855f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1855f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1855f4:
    // 0x1855f4: 0xc0c5472  jal         func_3151C8
label_1855f8:
    if (ctx->pc == 0x1855F8u) {
        ctx->pc = 0x1855F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855F4u;
        // 0x1855f8: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1855FCu;
        goto label_1855fc;
    }
    ctx->pc = 0x1855F4u;
    SET_GPR_U32(ctx, 31, 0x1855FCu);
    ctx->pc = 0x1855F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1855F4u;
    // 0x1855f8: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x1855F4u, 0x1855FCu)) {
        return;
    }
    ctx->pc = 0x1855FCu;
label_1855fc:
    // 0x1855fc: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
label_185600:
    if (ctx->pc == 0x185600u) {
        ctx->pc = 0x185600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855FCu;
        // 0x185600: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185604u;
        goto label_185604;
    }
    ctx->pc = 0x1855FCu;
    {
        const bool branch_taken_0x1855fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1855fc) {
            ctx->pc = 0x185600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1855FCu;
            // 0x185600: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185724u;
            goto label_185724;
        }
    }
    ctx->pc = 0x185604u;
label_185604:
    // 0x185604: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x185604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_185608:
    // 0x185608: 0x3c160034  lui         $s6, 0x34
    ctx->pc = 0x185608u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
label_18560c:
    // 0x18560c: 0x24579850  addiu       $s7, $v0, -0x67B0
    ctx->pc = 0x18560cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940752));
label_185610:
    // 0x185610: 0x3c140068  lui         $s4, 0x68
    ctx->pc = 0x185610u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)104 << 16));
label_185614:
    // 0x185614: 0x3c15006a  lui         $s5, 0x6A
    ctx->pc = 0x185614u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)106 << 16));
label_185618:
    // 0x185618: 0x8ec2828c  lw          $v0, -0x7D74($s6)
    ctx->pc = 0x185618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294935180)));
label_18561c:
    // 0x18561c: 0x0  nop
    ctx->pc = 0x18561cu;
    // NOP
label_185620:
    // 0x185620: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_185624:
    if (ctx->pc == 0x185624u) {
        ctx->pc = 0x185624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185620u;
        // 0x185624: 0x26841878  addiu       $a0, $s4, 0x1878 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 6264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185628u;
        goto label_185628;
    }
    ctx->pc = 0x185620u;
    {
        const bool branch_taken_0x185620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185620u;
        // 0x185624: 0x26841878  addiu       $a0, $s4, 0x1878 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 6264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185620) {
            ctx->pc = 0x185640u;
            goto label_185640;
        }
    }
    ctx->pc = 0x185628u;
label_185628:
    // 0x185628: 0xc0a6492  jal         func_299248
label_18562c:
    if (ctx->pc == 0x18562Cu) {
        ctx->pc = 0x18562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185628u;
        // 0x18562c: 0x26a585a0  addiu       $a1, $s5, -0x7A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294935968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185630u;
        goto label_185630;
    }
    ctx->pc = 0x185628u;
    SET_GPR_U32(ctx, 31, 0x185630u);
    ctx->pc = 0x18562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185628u;
    // 0x18562c: 0x26a585a0  addiu       $a1, $s5, -0x7A60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294935968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299248u, 0x185628u, 0x185630u)) {
        return;
    }
    ctx->pc = 0x185630u;
label_185630:
    // 0x185630: 0x2e0f809  jalr        $s7
label_185634:
    if (ctx->pc == 0x185634u) {
        ctx->pc = 0x185634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185630u;
        // 0x185634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185638u;
        goto label_185638;
    }
    ctx->pc = 0x185630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x185638u);
        ctx->pc = 0x185634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185630u;
        // 0x185634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185630u, 0x185638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185638u;
label_185638:
    // 0x185638: 0xc07da60  jal         func_1F6980
label_18563c:
    if (ctx->pc == 0x18563Cu) {
        ctx->pc = 0x18563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185638u;
        // 0x18563c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185640u;
        goto label_185640;
    }
    ctx->pc = 0x185638u;
    SET_GPR_U32(ctx, 31, 0x185640u);
    ctx->pc = 0x18563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185638u;
    // 0x18563c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6980u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6980u, 0x185638u, 0x185640u)) {
        return;
    }
    ctx->pc = 0x185640u;
label_185640:
    // 0x185640: 0x40f809  jalr        $v0
label_185644:
    if (ctx->pc == 0x185644u) {
        ctx->pc = 0x185648u;
        goto label_185648;
    }
    ctx->pc = 0x185640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185648u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185640u, 0x185648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185648u;
label_185648:
    // 0x185648: 0xc0c5472  jal         func_3151C8
label_18564c:
    if (ctx->pc == 0x18564Cu) {
        ctx->pc = 0x18564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185648u;
        // 0x18564c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185650u;
        goto label_185650;
    }
    ctx->pc = 0x185648u;
    SET_GPR_U32(ctx, 31, 0x185650u);
    ctx->pc = 0x18564Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185648u;
    // 0x18564c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x185648u, 0x185650u)) {
        return;
    }
    ctx->pc = 0x185650u;
label_185650:
    // 0x185650: 0x5040fff3  beql        $v0, $zero, . + 4 + (-0xD << 2)
label_185654:
    if (ctx->pc == 0x185654u) {
        ctx->pc = 0x185654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185650u;
        // 0x185654: 0x8ec2828c  lw          $v0, -0x7D74($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294935180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185658u;
        goto label_185658;
    }
    ctx->pc = 0x185650u;
    {
        const bool branch_taken_0x185650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185650) {
            ctx->pc = 0x185654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185650u;
            // 0x185654: 0x8ec2828c  lw          $v0, -0x7D74($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294935180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185620;
        }
    }
    ctx->pc = 0x185658u;
label_185658:
    // 0x185658: 0x10000032  b           . + 4 + (0x32 << 2)
label_18565c:
    if (ctx->pc == 0x18565Cu) {
        ctx->pc = 0x18565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185658u;
        // 0x18565c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185660u;
        goto label_185660;
    }
    ctx->pc = 0x185658u;
    {
        const bool branch_taken_0x185658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185658u;
        // 0x18565c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185658) {
            ctx->pc = 0x185724u;
            goto label_185724;
        }
    }
    ctx->pc = 0x185660u;
label_185660:
    // 0x185660: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x185660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_185664:
    // 0x185664: 0x410c2  srl         $v0, $a0, 3
    ctx->pc = 0x185664u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_185668:
    // 0x185668: 0x24738290  addiu       $s3, $v1, -0x7D70
    ctx->pc = 0x185668u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935184));
label_18566c:
    // 0x18566c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18566cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_185670:
    // 0x185670: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x185670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_185674:
    // 0x185674: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x185674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_185678:
    // 0x185678: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x185678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18567c:
    // 0x18567c: 0x54600026  bnel        $v1, $zero, . + 4 + (0x26 << 2)
label_185680:
    if (ctx->pc == 0x185680u) {
        ctx->pc = 0x185680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18567Cu;
        // 0x185680: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185684u;
        goto label_185684;
    }
    ctx->pc = 0x18567Cu;
    {
        const bool branch_taken_0x18567c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18567c) {
            ctx->pc = 0x185680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18567Cu;
            // 0x185680: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185718u;
            goto label_185718;
        }
    }
    ctx->pc = 0x185684u;
label_185684:
    // 0x185684: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x185684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_185688:
    // 0x185688: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x185688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_18568c:
    // 0x18568c: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x18568cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
label_185690:
    // 0x185690: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x185690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_185694:
    // 0x185694: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x185694u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_185698:
    // 0x185698: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x185698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18569c:
    // 0x18569c: 0xc04257c  jal         func_1095F0
label_1856a0:
    if (ctx->pc == 0x1856A0u) {
        ctx->pc = 0x1856A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18569Cu;
        // 0x1856a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1856A4u;
        goto label_1856a4;
    }
    ctx->pc = 0x18569Cu;
    SET_GPR_U32(ctx, 31, 0x1856A4u);
    ctx->pc = 0x1856A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18569Cu;
    // 0x1856a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1095F0u, 0x18569Cu, 0x1856A4u)) {
        return;
    }
    ctx->pc = 0x1856A4u;
label_1856a4:
    // 0x1856a4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1856a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1856a8:
    // 0x1856a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1856a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1856ac:
    // 0x1856ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1856acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1856b0:
    // 0x1856b0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1856b4:
    if (ctx->pc == 0x1856B4u) {
        ctx->pc = 0x1856B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856B0u;
        // 0x1856b4: 0x1010c2  srl         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1856B8u;
        goto label_1856b8;
    }
    ctx->pc = 0x1856B0u;
    {
        const bool branch_taken_0x1856b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1856B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856B0u;
        // 0x1856b4: 0x1010c2  srl         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1856b0) {
            ctx->pc = 0x1856C0u;
            goto label_1856c0;
        }
    }
    ctx->pc = 0x1856B8u;
label_1856b8:
    // 0x1856b8: 0x10000015  b           . + 4 + (0x15 << 2)
label_1856bc:
    if (ctx->pc == 0x1856BCu) {
        ctx->pc = 0x1856BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856B8u;
        // 0x1856bc: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1856C0u;
        goto label_1856c0;
    }
    ctx->pc = 0x1856B8u;
    {
        const bool branch_taken_0x1856b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1856BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856B8u;
        // 0x1856bc: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1856b8) {
            ctx->pc = 0x185710u;
            goto label_185710;
        }
    }
    ctx->pc = 0x1856C0u;
label_1856c0:
    // 0x1856c0: 0xf02821  addu        $a1, $a3, $s0
    ctx->pc = 0x1856c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_1856c4:
    // 0x1856c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1856c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1856c8:
    // 0x1856c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1856c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1856cc:
    // 0x1856cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1856ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1856d0:
    // 0x1856d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1856d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1856d4:
    // 0x1856d4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1856d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1856d8:
    // 0x1856d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1856d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1856dc:
    // 0x1856dc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1856dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1856e0:
    // 0x1856e0: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x1856e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1856e4:
    // 0x1856e4: 0x10660009  beq         $v1, $a2, . + 4 + (0x9 << 2)
label_1856e8:
    if (ctx->pc == 0x1856E8u) {
        ctx->pc = 0x1856E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856E4u;
        // 0x1856e8: 0x902821  addu        $a1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1856ECu;
        goto label_1856ec;
    }
    ctx->pc = 0x1856E4u;
    {
        const bool branch_taken_0x1856e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1856E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856E4u;
        // 0x1856e8: 0x902821  addu        $a1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1856e4) {
            ctx->pc = 0x18570Cu;
            goto label_18570c;
        }
    }
    ctx->pc = 0x1856ECu;
label_1856ec:
    // 0x1856ec: 0x0  nop
    ctx->pc = 0x1856ecu;
    // NOP
label_1856f0:
    // 0x1856f0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1856f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1856f4:
    // 0x1856f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1856f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1856f8:
    // 0x1856f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1856f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1856fc:
    // 0x1856fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1856fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_185700:
    // 0x185700: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x185700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_185704:
    // 0x185704: 0x1446fffa  bne         $v0, $a2, . + 4 + (-0x6 << 2)
label_185708:
    if (ctx->pc == 0x185708u) {
        ctx->pc = 0x185708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185704u;
        // 0x185708: 0x902821  addu        $a1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18570Cu;
        goto label_18570c;
    }
    ctx->pc = 0x185704u;
    {
        const bool branch_taken_0x185704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x185708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185704u;
        // 0x185708: 0x902821  addu        $a1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185704) {
            ctx->pc = 0x1856F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1856f0;
        }
    }
    ctx->pc = 0x18570Cu;
label_18570c:
    // 0x18570c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x18570cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_185710:
    // 0x185710: 0x10000004  b           . + 4 + (0x4 << 2)
label_185714:
    if (ctx->pc == 0x185714u) {
        ctx->pc = 0x185714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185710u;
        // 0x185714: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185718u;
        goto label_185718;
    }
    ctx->pc = 0x185710u;
    {
        const bool branch_taken_0x185710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185710u;
        // 0x185714: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185710) {
            ctx->pc = 0x185724u;
            goto label_185724;
        }
    }
    ctx->pc = 0x185718u;
label_185718:
    // 0x185718: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x185718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18571c:
    // 0x18571c: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x18571cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_185720:
    // 0x185720: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x185720u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_185724:
    // 0x185724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_185728:
    // 0x185728: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x185728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_18572c:
    // 0x18572c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x18572cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_185730:
    // 0x185730: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x185730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_185734:
    // 0x185734: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x185734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_185738:
    // 0x185738: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_18573c:
    if (ctx->pc == 0x18573Cu) {
        ctx->pc = 0x18573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185738u;
        // 0x18573c: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185740u;
        goto label_185740;
    }
    ctx->pc = 0x185738u;
    {
        const bool branch_taken_0x185738 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x18573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185738u;
        // 0x18573c: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185738) {
            ctx->pc = 0x18574Cu;
            goto label_18574c;
        }
    }
    ctx->pc = 0x185740u;
label_185740:
    // 0x185740: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x185740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_185744:
    // 0x185744: 0xc075fdc  jal         func_1D7F70
label_185748:
    if (ctx->pc == 0x185748u) {
        ctx->pc = 0x185748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185744u;
        // 0x185748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18574Cu;
        goto label_18574c;
    }
    ctx->pc = 0x185744u;
    SET_GPR_U32(ctx, 31, 0x18574Cu);
    ctx->pc = 0x185748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185744u;
    // 0x185748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x185744u, 0x18574Cu)) {
        return;
    }
    ctx->pc = 0x18574Cu;
label_18574c:
    // 0x18574c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x18574cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_185750:
    // 0x185750: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x185750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_185754:
    // 0x185754: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x185754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_185758:
    // 0x185758: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x185758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_18575c:
    // 0x18575c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x18575cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_185760:
    // 0x185760: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x185760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_185764:
    // 0x185764: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x185764u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_185768:
    // 0x185768: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x185768u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18576c:
    // 0x18576c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x18576cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_185770:
    // 0x185770: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x185770u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_185774:
    // 0x185774: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x185774u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_185778:
    // 0x185778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x185778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18577c:
    // 0x18577c: 0x3e00008  jr          $ra
label_185780:
    if (ctx->pc == 0x185780u) {
        ctx->pc = 0x185780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18577Cu;
        // 0x185780: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185784u;
        goto label_185784;
    }
    ctx->pc = 0x18577Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18577Cu;
        // 0x185780: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18577Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185784u;
label_185784:
    // 0x185784: 0x0  nop
    ctx->pc = 0x185784u;
    // NOP
    ctx->pc = 0x185788u;
}
