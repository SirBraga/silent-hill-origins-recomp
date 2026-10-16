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

// Function: sub_002A9550
// Address: 0x2a9550 - 0x2a9890
void sub_002A9550_0x2a9550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9550_0x2a9550");
#endif

    switch (ctx->pc) {
        case 0x2a9550u: goto label_2a9550;
        case 0x2a9554u: goto label_2a9554;
        case 0x2a9558u: goto label_2a9558;
        case 0x2a955cu: goto label_2a955c;
        case 0x2a9560u: goto label_2a9560;
        case 0x2a9564u: goto label_2a9564;
        case 0x2a9568u: goto label_2a9568;
        case 0x2a956cu: goto label_2a956c;
        case 0x2a9570u: goto label_2a9570;
        case 0x2a9574u: goto label_2a9574;
        case 0x2a9578u: goto label_2a9578;
        case 0x2a957cu: goto label_2a957c;
        case 0x2a9580u: goto label_2a9580;
        case 0x2a9584u: goto label_2a9584;
        case 0x2a9588u: goto label_2a9588;
        case 0x2a958cu: goto label_2a958c;
        case 0x2a9590u: goto label_2a9590;
        case 0x2a9594u: goto label_2a9594;
        case 0x2a9598u: goto label_2a9598;
        case 0x2a959cu: goto label_2a959c;
        case 0x2a95a0u: goto label_2a95a0;
        case 0x2a95a4u: goto label_2a95a4;
        case 0x2a95a8u: goto label_2a95a8;
        case 0x2a95acu: goto label_2a95ac;
        case 0x2a95b0u: goto label_2a95b0;
        case 0x2a95b4u: goto label_2a95b4;
        case 0x2a95b8u: goto label_2a95b8;
        case 0x2a95bcu: goto label_2a95bc;
        case 0x2a95c0u: goto label_2a95c0;
        case 0x2a95c4u: goto label_2a95c4;
        case 0x2a95c8u: goto label_2a95c8;
        case 0x2a95ccu: goto label_2a95cc;
        case 0x2a95d0u: goto label_2a95d0;
        case 0x2a95d4u: goto label_2a95d4;
        case 0x2a95d8u: goto label_2a95d8;
        case 0x2a95dcu: goto label_2a95dc;
        case 0x2a95e0u: goto label_2a95e0;
        case 0x2a95e4u: goto label_2a95e4;
        case 0x2a95e8u: goto label_2a95e8;
        case 0x2a95ecu: goto label_2a95ec;
        case 0x2a95f0u: goto label_2a95f0;
        case 0x2a95f4u: goto label_2a95f4;
        case 0x2a95f8u: goto label_2a95f8;
        case 0x2a95fcu: goto label_2a95fc;
        case 0x2a9600u: goto label_2a9600;
        case 0x2a9604u: goto label_2a9604;
        case 0x2a9608u: goto label_2a9608;
        case 0x2a960cu: goto label_2a960c;
        case 0x2a9610u: goto label_2a9610;
        case 0x2a9614u: goto label_2a9614;
        case 0x2a9618u: goto label_2a9618;
        case 0x2a961cu: goto label_2a961c;
        case 0x2a9620u: goto label_2a9620;
        case 0x2a9624u: goto label_2a9624;
        case 0x2a9628u: goto label_2a9628;
        case 0x2a962cu: goto label_2a962c;
        case 0x2a9630u: goto label_2a9630;
        case 0x2a9634u: goto label_2a9634;
        case 0x2a9638u: goto label_2a9638;
        case 0x2a963cu: goto label_2a963c;
        case 0x2a9640u: goto label_2a9640;
        case 0x2a9644u: goto label_2a9644;
        case 0x2a9648u: goto label_2a9648;
        case 0x2a964cu: goto label_2a964c;
        case 0x2a9650u: goto label_2a9650;
        case 0x2a9654u: goto label_2a9654;
        case 0x2a9658u: goto label_2a9658;
        case 0x2a965cu: goto label_2a965c;
        case 0x2a9660u: goto label_2a9660;
        case 0x2a9664u: goto label_2a9664;
        case 0x2a9668u: goto label_2a9668;
        case 0x2a966cu: goto label_2a966c;
        case 0x2a9670u: goto label_2a9670;
        case 0x2a9674u: goto label_2a9674;
        case 0x2a9678u: goto label_2a9678;
        case 0x2a967cu: goto label_2a967c;
        case 0x2a9680u: goto label_2a9680;
        case 0x2a9684u: goto label_2a9684;
        case 0x2a9688u: goto label_2a9688;
        case 0x2a968cu: goto label_2a968c;
        case 0x2a9690u: goto label_2a9690;
        case 0x2a9694u: goto label_2a9694;
        case 0x2a9698u: goto label_2a9698;
        case 0x2a969cu: goto label_2a969c;
        case 0x2a96a0u: goto label_2a96a0;
        case 0x2a96a4u: goto label_2a96a4;
        case 0x2a96a8u: goto label_2a96a8;
        case 0x2a96acu: goto label_2a96ac;
        case 0x2a96b0u: goto label_2a96b0;
        case 0x2a96b4u: goto label_2a96b4;
        case 0x2a96b8u: goto label_2a96b8;
        case 0x2a96bcu: goto label_2a96bc;
        case 0x2a96c0u: goto label_2a96c0;
        case 0x2a96c4u: goto label_2a96c4;
        case 0x2a96c8u: goto label_2a96c8;
        case 0x2a96ccu: goto label_2a96cc;
        case 0x2a96d0u: goto label_2a96d0;
        case 0x2a96d4u: goto label_2a96d4;
        case 0x2a96d8u: goto label_2a96d8;
        case 0x2a96dcu: goto label_2a96dc;
        case 0x2a96e0u: goto label_2a96e0;
        case 0x2a96e4u: goto label_2a96e4;
        case 0x2a96e8u: goto label_2a96e8;
        case 0x2a96ecu: goto label_2a96ec;
        case 0x2a96f0u: goto label_2a96f0;
        case 0x2a96f4u: goto label_2a96f4;
        case 0x2a96f8u: goto label_2a96f8;
        case 0x2a96fcu: goto label_2a96fc;
        case 0x2a9700u: goto label_2a9700;
        case 0x2a9704u: goto label_2a9704;
        case 0x2a9708u: goto label_2a9708;
        case 0x2a970cu: goto label_2a970c;
        case 0x2a9710u: goto label_2a9710;
        case 0x2a9714u: goto label_2a9714;
        case 0x2a9718u: goto label_2a9718;
        case 0x2a971cu: goto label_2a971c;
        case 0x2a9720u: goto label_2a9720;
        case 0x2a9724u: goto label_2a9724;
        case 0x2a9728u: goto label_2a9728;
        case 0x2a972cu: goto label_2a972c;
        case 0x2a9730u: goto label_2a9730;
        case 0x2a9734u: goto label_2a9734;
        case 0x2a9738u: goto label_2a9738;
        case 0x2a973cu: goto label_2a973c;
        case 0x2a9740u: goto label_2a9740;
        case 0x2a9744u: goto label_2a9744;
        case 0x2a9748u: goto label_2a9748;
        case 0x2a974cu: goto label_2a974c;
        case 0x2a9750u: goto label_2a9750;
        case 0x2a9754u: goto label_2a9754;
        case 0x2a9758u: goto label_2a9758;
        case 0x2a975cu: goto label_2a975c;
        case 0x2a9760u: goto label_2a9760;
        case 0x2a9764u: goto label_2a9764;
        case 0x2a9768u: goto label_2a9768;
        case 0x2a976cu: goto label_2a976c;
        case 0x2a9770u: goto label_2a9770;
        case 0x2a9774u: goto label_2a9774;
        case 0x2a9778u: goto label_2a9778;
        case 0x2a977cu: goto label_2a977c;
        case 0x2a9780u: goto label_2a9780;
        case 0x2a9784u: goto label_2a9784;
        case 0x2a9788u: goto label_2a9788;
        case 0x2a978cu: goto label_2a978c;
        case 0x2a9790u: goto label_2a9790;
        case 0x2a9794u: goto label_2a9794;
        case 0x2a9798u: goto label_2a9798;
        case 0x2a979cu: goto label_2a979c;
        case 0x2a97a0u: goto label_2a97a0;
        case 0x2a97a4u: goto label_2a97a4;
        case 0x2a97a8u: goto label_2a97a8;
        case 0x2a97acu: goto label_2a97ac;
        case 0x2a97b0u: goto label_2a97b0;
        case 0x2a97b4u: goto label_2a97b4;
        case 0x2a97b8u: goto label_2a97b8;
        case 0x2a97bcu: goto label_2a97bc;
        case 0x2a97c0u: goto label_2a97c0;
        case 0x2a97c4u: goto label_2a97c4;
        case 0x2a97c8u: goto label_2a97c8;
        case 0x2a97ccu: goto label_2a97cc;
        case 0x2a97d0u: goto label_2a97d0;
        case 0x2a97d4u: goto label_2a97d4;
        case 0x2a97d8u: goto label_2a97d8;
        case 0x2a97dcu: goto label_2a97dc;
        case 0x2a97e0u: goto label_2a97e0;
        case 0x2a97e4u: goto label_2a97e4;
        case 0x2a97e8u: goto label_2a97e8;
        case 0x2a97ecu: goto label_2a97ec;
        case 0x2a97f0u: goto label_2a97f0;
        case 0x2a97f4u: goto label_2a97f4;
        case 0x2a97f8u: goto label_2a97f8;
        case 0x2a97fcu: goto label_2a97fc;
        case 0x2a9800u: goto label_2a9800;
        case 0x2a9804u: goto label_2a9804;
        case 0x2a9808u: goto label_2a9808;
        case 0x2a980cu: goto label_2a980c;
        case 0x2a9810u: goto label_2a9810;
        case 0x2a9814u: goto label_2a9814;
        case 0x2a9818u: goto label_2a9818;
        case 0x2a981cu: goto label_2a981c;
        case 0x2a9820u: goto label_2a9820;
        case 0x2a9824u: goto label_2a9824;
        case 0x2a9828u: goto label_2a9828;
        case 0x2a982cu: goto label_2a982c;
        case 0x2a9830u: goto label_2a9830;
        case 0x2a9834u: goto label_2a9834;
        case 0x2a9838u: goto label_2a9838;
        case 0x2a983cu: goto label_2a983c;
        case 0x2a9840u: goto label_2a9840;
        case 0x2a9844u: goto label_2a9844;
        case 0x2a9848u: goto label_2a9848;
        case 0x2a984cu: goto label_2a984c;
        case 0x2a9850u: goto label_2a9850;
        case 0x2a9854u: goto label_2a9854;
        case 0x2a9858u: goto label_2a9858;
        case 0x2a985cu: goto label_2a985c;
        case 0x2a9860u: goto label_2a9860;
        case 0x2a9864u: goto label_2a9864;
        case 0x2a9868u: goto label_2a9868;
        case 0x2a986cu: goto label_2a986c;
        case 0x2a9870u: goto label_2a9870;
        case 0x2a9874u: goto label_2a9874;
        case 0x2a9878u: goto label_2a9878;
        case 0x2a987cu: goto label_2a987c;
        case 0x2a9880u: goto label_2a9880;
        case 0x2a9884u: goto label_2a9884;
        case 0x2a9888u: goto label_2a9888;
        case 0x2a988cu: goto label_2a988c;
        default: break;
    }

    ctx->pc = 0x2a9550u;

label_2a9550:
    // 0x2a9550: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2a9550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2a9554:
    // 0x2a9554: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2a9554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_2a9558:
    // 0x2a9558: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2a9558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_2a955c:
    // 0x2a955c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a955cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a9560:
    // 0x2a9560: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2a9560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_2a9564:
    // 0x2a9564: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2a9564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2a9568:
    // 0x2a9568: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2a9568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_2a956c:
    // 0x2a956c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a956cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a9570:
    // 0x2a9570: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2a9570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_2a9574:
    // 0x2a9574: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2a9574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2a9578:
    // 0x2a9578: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a9578u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a957c:
    // 0x2a957c: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x2a957cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_2a9580:
    // 0x2a9580: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2a9580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2a9584:
    // 0x2a9584: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a9584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2a9588:
    // 0x2a9588: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2a958c:
    if (ctx->pc == 0x2A958Cu) {
        ctx->pc = 0x2A958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9588u;
        // 0x2a958c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9590u;
        goto label_2a9590;
    }
    ctx->pc = 0x2A9588u;
    {
        const bool branch_taken_0x2a9588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9588u;
        // 0x2a958c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9588) {
            ctx->pc = 0x2A95C8u;
            goto label_2a95c8;
        }
    }
    ctx->pc = 0x2A9590u;
label_2a9590:
    // 0x2a9590: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2a9590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2a9594:
    // 0x2a9594: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2a9594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_2a9598:
    // 0x2a9598: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a9598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2a959c:
    // 0x2a959c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2a95a0:
    if (ctx->pc == 0x2A95A0u) {
        ctx->pc = 0x2A95A4u;
        goto label_2a95a4;
    }
    ctx->pc = 0x2A959Cu;
    {
        const bool branch_taken_0x2a959c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a959c) {
            ctx->pc = 0x2A95C8u;
            goto label_2a95c8;
        }
    }
    ctx->pc = 0x2A95A4u;
label_2a95a4:
    // 0x2a95a4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2a95a8:
    if (ctx->pc == 0x2A95A8u) {
        ctx->pc = 0x2A95A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95A4u;
        // 0x2a95a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A95ACu;
        goto label_2a95ac;
    }
    ctx->pc = 0x2A95A4u;
    {
        const bool branch_taken_0x2a95a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A95A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95A4u;
        // 0x2a95a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a95a4) {
            ctx->pc = 0x2A95C0u;
            goto label_2a95c0;
        }
    }
    ctx->pc = 0x2A95ACu;
label_2a95ac:
    // 0x2a95ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a95acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a95b0:
    // 0x2a95b0: 0xc092d9c  jal         func_24B670
label_2a95b4:
    if (ctx->pc == 0x2A95B4u) {
        ctx->pc = 0x2A95B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95B0u;
        // 0x2a95b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A95B8u;
        goto label_2a95b8;
    }
    ctx->pc = 0x2A95B0u;
    SET_GPR_U32(ctx, 31, 0x2A95B8u);
    ctx->pc = 0x2A95B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A95B0u;
    // 0x2a95b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x2A95B0u, 0x2A95B8u)) {
        return;
    }
    ctx->pc = 0x2A95B8u;
label_2a95b8:
    // 0x2a95b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a95bc:
    if (ctx->pc == 0x2A95BCu) {
        ctx->pc = 0x2A95BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95B8u;
        // 0x2a95bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A95C0u;
        goto label_2a95c0;
    }
    ctx->pc = 0x2A95B8u;
    {
        const bool branch_taken_0x2a95b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A95BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95B8u;
        // 0x2a95bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a95b8) {
            ctx->pc = 0x2A95C8u;
            goto label_2a95c8;
        }
    }
    ctx->pc = 0x2A95C0u;
label_2a95c0:
    // 0x2a95c0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2a95c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a95c4:
    // 0x2a95c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a95c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a95c8:
    // 0x2a95c8: 0x52000053  beql        $s0, $zero, . + 4 + (0x53 << 2)
label_2a95cc:
    if (ctx->pc == 0x2A95CCu) {
        ctx->pc = 0x2A95CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95C8u;
        // 0x2a95cc: 0x8e83005c  lw          $v1, 0x5C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A95D0u;
        goto label_2a95d0;
    }
    ctx->pc = 0x2A95C8u;
    {
        const bool branch_taken_0x2a95c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a95c8) {
            ctx->pc = 0x2A95CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A95C8u;
            // 0x2a95cc: 0x8e83005c  lw          $v1, 0x5C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9718u;
            goto label_2a9718;
        }
    }
    ctx->pc = 0x2A95D0u;
label_2a95d0:
    // 0x2a95d0: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2a95d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a95d4:
    // 0x2a95d4: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x2a95d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a95d8:
    // 0x2a95d8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2a95d8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_2a95dc:
    // 0x2a95dc: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x2a95dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2a95e0:
    // 0x2a95e0: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2a95e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a95e4:
    // 0x2a95e4: 0xc6450004  lwc1        $f5, 0x4($s2)
    ctx->pc = 0x2a95e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a95e8:
    // 0x2a95e8: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2a95e8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_2a95ec:
    // 0x2a95ec: 0xe7a50064  swc1        $f5, 0x64($sp)
    ctx->pc = 0x2a95ecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2a95f0:
    // 0x2a95f0: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x2a95f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a95f4:
    // 0x2a95f4: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2a95f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a95f8:
    // 0x2a95f8: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2a95f8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_2a95fc:
    // 0x2a95fc: 0xe7a40068  swc1        $f4, 0x68($sp)
    ctx->pc = 0x2a95fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2a9600:
    // 0x2a9600: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2a9600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9604:
    // 0x2a9604: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2a9604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a9608:
    // 0x2a9608: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2a9608u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2a960c:
    // 0x2a960c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2a960cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a9610:
    // 0x2a9610: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2a9610u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2a9614:
    // 0x2a9614: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2a9614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_2a9618:
    // 0x2a9618: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a9618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2a961c:
    // 0x2a961c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a961cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a9620:
    // 0x2a9620: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2a9620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2a9624:
    // 0x2a9624: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2a9624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a9628:
    // 0x2a9628: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x2a9628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a962c:
    // 0x2a962c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2a962cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2a9630:
    // 0x2a9630: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2a9630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9634:
    // 0x2a9634: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2a9634u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2a9638:
    // 0x2a9638: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2a9638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2a963c:
    // 0x2a963c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a963cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2a9640:
    // 0x2a9640: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a9640u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a9644:
    // 0x2a9644: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2a9644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2a9648:
    // 0x2a9648: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2a9648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a964c:
    // 0x2a964c: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x2a964cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a9650:
    // 0x2a9650: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2a9650u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2a9654:
    // 0x2a9654: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x2a9654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a9658:
    // 0x2a9658: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2a9658u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2a965c:
    // 0x2a965c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2a965cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_2a9660:
    // 0x2a9660: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2a9660u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
label_2a9664:
    // 0x2a9664: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2a9664u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_2a9668:
    // 0x2a9668: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x2a9668u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2a966c:
    // 0x2a966c: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x2a966cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a9670:
    // 0x2a9670: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x2a9670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a9674:
    // 0x2a9674: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2a9674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9678:
    // 0x2a9678: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2a9678u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_2a967c:
    // 0x2a967c: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x2a967cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2a9680:
    // 0x2a9680: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2a9680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9684:
    // 0x2a9684: 0xc6650004  lwc1        $f5, 0x4($s3)
    ctx->pc = 0x2a9684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a9688:
    // 0x2a9688: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2a9688u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_2a968c:
    // 0x2a968c: 0xe7a50074  swc1        $f5, 0x74($sp)
    ctx->pc = 0x2a968cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_2a9690:
    // 0x2a9690: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x2a9690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a9694:
    // 0x2a9694: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2a9694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9698:
    // 0x2a9698: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2a9698u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_2a969c:
    // 0x2a969c: 0xe7a40078  swc1        $f4, 0x78($sp)
    ctx->pc = 0x2a969cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2a96a0:
    // 0x2a96a0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2a96a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a96a4:
    // 0x2a96a4: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2a96a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a96a8:
    // 0x2a96a8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2a96a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2a96ac:
    // 0x2a96ac: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2a96acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a96b0:
    // 0x2a96b0: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2a96b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2a96b4:
    // 0x2a96b4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2a96b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_2a96b8:
    // 0x2a96b8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a96b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2a96bc:
    // 0x2a96bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a96bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a96c0:
    // 0x2a96c0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2a96c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2a96c4:
    // 0x2a96c4: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2a96c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a96c8:
    // 0x2a96c8: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x2a96c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a96cc:
    // 0x2a96cc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2a96ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2a96d0:
    // 0x2a96d0: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2a96d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a96d4:
    // 0x2a96d4: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2a96d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2a96d8:
    // 0x2a96d8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2a96d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2a96dc:
    // 0x2a96dc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a96dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2a96e0:
    // 0x2a96e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a96e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a96e4:
    // 0x2a96e4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2a96e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2a96e8:
    // 0x2a96e8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2a96e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a96ec:
    // 0x2a96ec: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x2a96ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a96f0:
    // 0x2a96f0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2a96f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2a96f4:
    // 0x2a96f4: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x2a96f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a96f8:
    // 0x2a96f8: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2a96f8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2a96fc:
    // 0x2a96fc: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2a96fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_2a9700:
    // 0x2a9700: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2a9700u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
label_2a9704:
    // 0x2a9704: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2a9704u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_2a9708:
    // 0x2a9708: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x2a9708u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2a970c:
    // 0x2a970c: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x2a970cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a9710:
    // 0x2a9710: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x2a9710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_2a9714:
    // 0x2a9714: 0x0  nop
    ctx->pc = 0x2a9714u;
    // NOP
label_2a9718:
    // 0x2a9718: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a9718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a971c:
    // 0x2a971c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a971cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a9720:
    // 0x2a9720: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2a9720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a9724:
    // 0x2a9724: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x2a9724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2a9728:
    // 0x2a9728: 0x40f809  jalr        $v0
label_2a972c:
    if (ctx->pc == 0x2A972Cu) {
        ctx->pc = 0x2A972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9728u;
        // 0x2a972c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9730u;
        goto label_2a9730;
    }
    ctx->pc = 0x2A9728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A9730u);
        ctx->pc = 0x2A972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9728u;
        // 0x2a972c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9728u, 0x2A9730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A9730u;
label_2a9730:
    // 0x2a9730: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
label_2a9734:
    if (ctx->pc == 0x2A9734u) {
        ctx->pc = 0x2A9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9730u;
        // 0x2a9734: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9738u;
        goto label_2a9738;
    }
    ctx->pc = 0x2A9730u;
    {
        const bool branch_taken_0x2a9730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9730) {
            ctx->pc = 0x2A9734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9730u;
            // 0x2a9734: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9870u;
            goto label_2a9870;
        }
    }
    ctx->pc = 0x2A9738u;
label_2a9738:
    // 0x2a9738: 0x5200004d  beql        $s0, $zero, . + 4 + (0x4D << 2)
label_2a973c:
    if (ctx->pc == 0x2A973Cu) {
        ctx->pc = 0x2A973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9738u;
        // 0x2a973c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9740u;
        goto label_2a9740;
    }
    ctx->pc = 0x2A9738u;
    {
        const bool branch_taken_0x2a9738 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9738) {
            ctx->pc = 0x2A973Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9738u;
            // 0x2a973c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9870u;
            goto label_2a9870;
        }
    }
    ctx->pc = 0x2A9740u;
label_2a9740:
    // 0x2a9740: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x2a9740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a9744:
    // 0x2a9744: 0xc6270008  lwc1        $f7, 0x8($s1)
    ctx->pc = 0x2a9744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2a9748:
    // 0x2a9748: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x2a9748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a974c:
    // 0x2a974c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2a974cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a9750:
    // 0x2a9750: 0x46041902  mul.s       $f4, $f3, $f4
    ctx->pc = 0x2a9750u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_2a9754:
    // 0x2a9754: 0xc626000c  lwc1        $f6, 0xC($s1)
    ctx->pc = 0x2a9754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2a9758:
    // 0x2a9758: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2a9758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_2a975c:
    // 0x2a975c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2a975cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9760:
    // 0x2a9760: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2a9760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_2a9764:
    // 0x2a9764: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2a9764u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_2a9768:
    // 0x2a9768: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2a9768u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_2a976c:
    // 0x2a976c: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x2a976cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2a9770:
    // 0x2a9770: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2a9770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a9774:
    // 0x2a9774: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2a9774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a9778:
    // 0x2a9778: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2a9778u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2a977c:
    // 0x2a977c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2a977cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9780:
    // 0x2a9780: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2a9780u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_2a9784:
    // 0x2a9784: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2a9784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_2a9788:
    // 0x2a9788: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2a9788u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2a978c:
    // 0x2a978c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2a978cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2a9790:
    // 0x2a9790: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x2a9790u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_2a9794:
    // 0x2a9794: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2a9794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9798:
    // 0x2a9798: 0xc6050018  lwc1        $f5, 0x18($s0)
    ctx->pc = 0x2a9798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a979c:
    // 0x2a979c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2a979cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2a97a0:
    // 0x2a97a0: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x2a97a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a97a4:
    // 0x2a97a4: 0x460539c2  mul.s       $f7, $f7, $f5
    ctx->pc = 0x2a97a4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_2a97a8:
    // 0x2a97a8: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x2a97a8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_2a97ac:
    // 0x2a97ac: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x2a97acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
label_2a97b0:
    // 0x2a97b0: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x2a97b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_2a97b4:
    // 0x2a97b4: 0xe7a30088  swc1        $f3, 0x88($sp)
    ctx->pc = 0x2a97b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_2a97b8:
    // 0x2a97b8: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2a97b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a97bc:
    // 0x2a97bc: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2a97bcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_2a97c0:
    // 0x2a97c0: 0xe6240004  swc1        $f4, 0x4($s1)
    ctx->pc = 0x2a97c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2a97c4:
    // 0x2a97c4: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2a97c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a97c8:
    // 0x2a97c8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2a97c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2a97cc:
    // 0x2a97cc: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2a97ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2a97d0:
    // 0x2a97d0: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2a97d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a97d4:
    // 0x2a97d4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2a97d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2a97d8:
    // 0x2a97d8: 0xe623000c  swc1        $f3, 0xC($s1)
    ctx->pc = 0x2a97d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2a97dc:
    // 0x2a97dc: 0x6a230017  ldl         $v1, 0x17($s1)
    ctx->pc = 0x2a97dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2a97e0:
    // 0x2a97e0: 0x6e230010  ldr         $v1, 0x10($s1)
    ctx->pc = 0x2a97e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2a97e4:
    // 0x2a97e4: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2a97e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2a97e8:
    // 0x2a97e8: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x2a97e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a97ec:
    // 0x2a97ec: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x2a97ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a97f0:
    // 0x2a97f0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2a97f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_2a97f4:
    // 0x2a97f4: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x2a97f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a97f8:
    // 0x2a97f8: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x2a97f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a97fc:
    // 0x2a97fc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2a97fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a9800:
    // 0x2a9800: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2a9800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a9804:
    // 0x2a9804: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2a9804u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2a9808:
    // 0x2a9808: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x2a9808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a980c:
    // 0x2a980c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2a980cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2a9810:
    // 0x2a9810: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2a9810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9814:
    // 0x2a9814: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2a9814u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2a9818:
    // 0x2a9818: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a9818u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2a981c:
    // 0x2a981c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a981cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a9820:
    // 0x2a9820: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x2a9820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2a9824:
    // 0x2a9824: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2a9824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9828:
    // 0x2a9828: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x2a9828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a982c:
    // 0x2a982c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2a982cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2a9830:
    // 0x2a9830: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x2a9830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a9834:
    // 0x2a9834: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2a9834u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2a9838:
    // 0x2a9838: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2a9838u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_2a983c:
    // 0x2a983c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a983cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2a9840:
    // 0x2a9840: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a9844:
    // 0x2a9844: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2a9844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_2a9848:
    // 0x2a9848: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2a9848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a984c:
    // 0x2a984c: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x2a984cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a9850:
    // 0x2a9850: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2a9850u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2a9854:
    // 0x2a9854: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x2a9854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9858:
    // 0x2a9858: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2a9858u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2a985c:
    // 0x2a985c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2a985cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2a9860:
    // 0x2a9860: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2a9860u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
label_2a9864:
    // 0x2a9864: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2a9864u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_2a9868:
    // 0x2a9868: 0xe6230018  swc1        $f3, 0x18($s1)
    ctx->pc = 0x2a9868u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_2a986c:
    // 0x2a986c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2a986cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2a9870:
    // 0x2a9870: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2a9870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2a9874:
    // 0x2a9874: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2a9874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2a9878:
    // 0x2a9878: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2a9878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2a987c:
    // 0x2a987c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2a987cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2a9880:
    // 0x2a9880: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a9880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2a9884:
    // 0x2a9884: 0x3e00008  jr          $ra
label_2a9888:
    if (ctx->pc == 0x2A9888u) {
        ctx->pc = 0x2A9888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9884u;
        // 0x2a9888: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A988Cu;
        goto label_2a988c;
    }
    ctx->pc = 0x2A9884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9884u;
        // 0x2a9888: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A988Cu;
label_2a988c:
    // 0x2a988c: 0x0  nop
    ctx->pc = 0x2a988cu;
    // NOP
    ctx->pc = 0x2a9890u;
}
