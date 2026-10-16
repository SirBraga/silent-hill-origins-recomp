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

// Function: sub_001D5578
// Address: 0x1d5578 - 0x1d59d4
void sub_001D5578_0x1d5578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5578_0x1d5578");
#endif

    switch (ctx->pc) {
        case 0x1d5578u: goto label_1d5578;
        case 0x1d557cu: goto label_1d557c;
        case 0x1d5580u: goto label_1d5580;
        case 0x1d5584u: goto label_1d5584;
        case 0x1d5588u: goto label_1d5588;
        case 0x1d558cu: goto label_1d558c;
        case 0x1d5590u: goto label_1d5590;
        case 0x1d5594u: goto label_1d5594;
        case 0x1d5598u: goto label_1d5598;
        case 0x1d559cu: goto label_1d559c;
        case 0x1d55a0u: goto label_1d55a0;
        case 0x1d55a4u: goto label_1d55a4;
        case 0x1d55a8u: goto label_1d55a8;
        case 0x1d55acu: goto label_1d55ac;
        case 0x1d55b0u: goto label_1d55b0;
        case 0x1d55b4u: goto label_1d55b4;
        case 0x1d55b8u: goto label_1d55b8;
        case 0x1d55bcu: goto label_1d55bc;
        case 0x1d55c0u: goto label_1d55c0;
        case 0x1d55c4u: goto label_1d55c4;
        case 0x1d55c8u: goto label_1d55c8;
        case 0x1d55ccu: goto label_1d55cc;
        case 0x1d55d0u: goto label_1d55d0;
        case 0x1d55d4u: goto label_1d55d4;
        case 0x1d55d8u: goto label_1d55d8;
        case 0x1d55dcu: goto label_1d55dc;
        case 0x1d55e0u: goto label_1d55e0;
        case 0x1d55e4u: goto label_1d55e4;
        case 0x1d55e8u: goto label_1d55e8;
        case 0x1d55ecu: goto label_1d55ec;
        case 0x1d55f0u: goto label_1d55f0;
        case 0x1d55f4u: goto label_1d55f4;
        case 0x1d55f8u: goto label_1d55f8;
        case 0x1d55fcu: goto label_1d55fc;
        case 0x1d5600u: goto label_1d5600;
        case 0x1d5604u: goto label_1d5604;
        case 0x1d5608u: goto label_1d5608;
        case 0x1d560cu: goto label_1d560c;
        case 0x1d5610u: goto label_1d5610;
        case 0x1d5614u: goto label_1d5614;
        case 0x1d5618u: goto label_1d5618;
        case 0x1d561cu: goto label_1d561c;
        case 0x1d5620u: goto label_1d5620;
        case 0x1d5624u: goto label_1d5624;
        case 0x1d5628u: goto label_1d5628;
        case 0x1d562cu: goto label_1d562c;
        case 0x1d5630u: goto label_1d5630;
        case 0x1d5634u: goto label_1d5634;
        case 0x1d5638u: goto label_1d5638;
        case 0x1d563cu: goto label_1d563c;
        case 0x1d5640u: goto label_1d5640;
        case 0x1d5644u: goto label_1d5644;
        case 0x1d5648u: goto label_1d5648;
        case 0x1d564cu: goto label_1d564c;
        case 0x1d5650u: goto label_1d5650;
        case 0x1d5654u: goto label_1d5654;
        case 0x1d5658u: goto label_1d5658;
        case 0x1d565cu: goto label_1d565c;
        case 0x1d5660u: goto label_1d5660;
        case 0x1d5664u: goto label_1d5664;
        case 0x1d5668u: goto label_1d5668;
        case 0x1d566cu: goto label_1d566c;
        case 0x1d5670u: goto label_1d5670;
        case 0x1d5674u: goto label_1d5674;
        case 0x1d5678u: goto label_1d5678;
        case 0x1d567cu: goto label_1d567c;
        case 0x1d5680u: goto label_1d5680;
        case 0x1d5684u: goto label_1d5684;
        case 0x1d5688u: goto label_1d5688;
        case 0x1d568cu: goto label_1d568c;
        case 0x1d5690u: goto label_1d5690;
        case 0x1d5694u: goto label_1d5694;
        case 0x1d5698u: goto label_1d5698;
        case 0x1d569cu: goto label_1d569c;
        case 0x1d56a0u: goto label_1d56a0;
        case 0x1d56a4u: goto label_1d56a4;
        case 0x1d56a8u: goto label_1d56a8;
        case 0x1d56acu: goto label_1d56ac;
        case 0x1d56b0u: goto label_1d56b0;
        case 0x1d56b4u: goto label_1d56b4;
        case 0x1d56b8u: goto label_1d56b8;
        case 0x1d56bcu: goto label_1d56bc;
        case 0x1d56c0u: goto label_1d56c0;
        case 0x1d56c4u: goto label_1d56c4;
        case 0x1d56c8u: goto label_1d56c8;
        case 0x1d56ccu: goto label_1d56cc;
        case 0x1d56d0u: goto label_1d56d0;
        case 0x1d56d4u: goto label_1d56d4;
        case 0x1d56d8u: goto label_1d56d8;
        case 0x1d56dcu: goto label_1d56dc;
        case 0x1d56e0u: goto label_1d56e0;
        case 0x1d56e4u: goto label_1d56e4;
        case 0x1d56e8u: goto label_1d56e8;
        case 0x1d56ecu: goto label_1d56ec;
        case 0x1d56f0u: goto label_1d56f0;
        case 0x1d56f4u: goto label_1d56f4;
        case 0x1d56f8u: goto label_1d56f8;
        case 0x1d56fcu: goto label_1d56fc;
        case 0x1d5700u: goto label_1d5700;
        case 0x1d5704u: goto label_1d5704;
        case 0x1d5708u: goto label_1d5708;
        case 0x1d570cu: goto label_1d570c;
        case 0x1d5710u: goto label_1d5710;
        case 0x1d5714u: goto label_1d5714;
        case 0x1d5718u: goto label_1d5718;
        case 0x1d571cu: goto label_1d571c;
        case 0x1d5720u: goto label_1d5720;
        case 0x1d5724u: goto label_1d5724;
        case 0x1d5728u: goto label_1d5728;
        case 0x1d572cu: goto label_1d572c;
        case 0x1d5730u: goto label_1d5730;
        case 0x1d5734u: goto label_1d5734;
        case 0x1d5738u: goto label_1d5738;
        case 0x1d573cu: goto label_1d573c;
        case 0x1d5740u: goto label_1d5740;
        case 0x1d5744u: goto label_1d5744;
        case 0x1d5748u: goto label_1d5748;
        case 0x1d574cu: goto label_1d574c;
        case 0x1d5750u: goto label_1d5750;
        case 0x1d5754u: goto label_1d5754;
        case 0x1d5758u: goto label_1d5758;
        case 0x1d575cu: goto label_1d575c;
        case 0x1d5760u: goto label_1d5760;
        case 0x1d5764u: goto label_1d5764;
        case 0x1d5768u: goto label_1d5768;
        case 0x1d576cu: goto label_1d576c;
        case 0x1d5770u: goto label_1d5770;
        case 0x1d5774u: goto label_1d5774;
        case 0x1d5778u: goto label_1d5778;
        case 0x1d577cu: goto label_1d577c;
        case 0x1d5780u: goto label_1d5780;
        case 0x1d5784u: goto label_1d5784;
        case 0x1d5788u: goto label_1d5788;
        case 0x1d578cu: goto label_1d578c;
        case 0x1d5790u: goto label_1d5790;
        case 0x1d5794u: goto label_1d5794;
        case 0x1d5798u: goto label_1d5798;
        case 0x1d579cu: goto label_1d579c;
        case 0x1d57a0u: goto label_1d57a0;
        case 0x1d57a4u: goto label_1d57a4;
        case 0x1d57a8u: goto label_1d57a8;
        case 0x1d57acu: goto label_1d57ac;
        case 0x1d57b0u: goto label_1d57b0;
        case 0x1d57b4u: goto label_1d57b4;
        case 0x1d57b8u: goto label_1d57b8;
        case 0x1d57bcu: goto label_1d57bc;
        case 0x1d57c0u: goto label_1d57c0;
        case 0x1d57c4u: goto label_1d57c4;
        case 0x1d57c8u: goto label_1d57c8;
        case 0x1d57ccu: goto label_1d57cc;
        case 0x1d57d0u: goto label_1d57d0;
        case 0x1d57d4u: goto label_1d57d4;
        case 0x1d57d8u: goto label_1d57d8;
        case 0x1d57dcu: goto label_1d57dc;
        case 0x1d57e0u: goto label_1d57e0;
        case 0x1d57e4u: goto label_1d57e4;
        case 0x1d57e8u: goto label_1d57e8;
        case 0x1d57ecu: goto label_1d57ec;
        case 0x1d57f0u: goto label_1d57f0;
        case 0x1d57f4u: goto label_1d57f4;
        case 0x1d57f8u: goto label_1d57f8;
        case 0x1d57fcu: goto label_1d57fc;
        case 0x1d5800u: goto label_1d5800;
        case 0x1d5804u: goto label_1d5804;
        case 0x1d5808u: goto label_1d5808;
        case 0x1d580cu: goto label_1d580c;
        case 0x1d5810u: goto label_1d5810;
        case 0x1d5814u: goto label_1d5814;
        case 0x1d5818u: goto label_1d5818;
        case 0x1d581cu: goto label_1d581c;
        case 0x1d5820u: goto label_1d5820;
        case 0x1d5824u: goto label_1d5824;
        case 0x1d5828u: goto label_1d5828;
        case 0x1d582cu: goto label_1d582c;
        case 0x1d5830u: goto label_1d5830;
        case 0x1d5834u: goto label_1d5834;
        case 0x1d5838u: goto label_1d5838;
        case 0x1d583cu: goto label_1d583c;
        case 0x1d5840u: goto label_1d5840;
        case 0x1d5844u: goto label_1d5844;
        case 0x1d5848u: goto label_1d5848;
        case 0x1d584cu: goto label_1d584c;
        case 0x1d5850u: goto label_1d5850;
        case 0x1d5854u: goto label_1d5854;
        case 0x1d5858u: goto label_1d5858;
        case 0x1d585cu: goto label_1d585c;
        case 0x1d5860u: goto label_1d5860;
        case 0x1d5864u: goto label_1d5864;
        case 0x1d5868u: goto label_1d5868;
        case 0x1d586cu: goto label_1d586c;
        case 0x1d5870u: goto label_1d5870;
        case 0x1d5874u: goto label_1d5874;
        case 0x1d5878u: goto label_1d5878;
        case 0x1d587cu: goto label_1d587c;
        case 0x1d5880u: goto label_1d5880;
        case 0x1d5884u: goto label_1d5884;
        case 0x1d5888u: goto label_1d5888;
        case 0x1d588cu: goto label_1d588c;
        case 0x1d5890u: goto label_1d5890;
        case 0x1d5894u: goto label_1d5894;
        case 0x1d5898u: goto label_1d5898;
        case 0x1d589cu: goto label_1d589c;
        case 0x1d58a0u: goto label_1d58a0;
        case 0x1d58a4u: goto label_1d58a4;
        case 0x1d58a8u: goto label_1d58a8;
        case 0x1d58acu: goto label_1d58ac;
        case 0x1d58b0u: goto label_1d58b0;
        case 0x1d58b4u: goto label_1d58b4;
        case 0x1d58b8u: goto label_1d58b8;
        case 0x1d58bcu: goto label_1d58bc;
        case 0x1d58c0u: goto label_1d58c0;
        case 0x1d58c4u: goto label_1d58c4;
        case 0x1d58c8u: goto label_1d58c8;
        case 0x1d58ccu: goto label_1d58cc;
        case 0x1d58d0u: goto label_1d58d0;
        case 0x1d58d4u: goto label_1d58d4;
        case 0x1d58d8u: goto label_1d58d8;
        case 0x1d58dcu: goto label_1d58dc;
        case 0x1d58e0u: goto label_1d58e0;
        case 0x1d58e4u: goto label_1d58e4;
        case 0x1d58e8u: goto label_1d58e8;
        case 0x1d58ecu: goto label_1d58ec;
        case 0x1d58f0u: goto label_1d58f0;
        case 0x1d58f4u: goto label_1d58f4;
        case 0x1d58f8u: goto label_1d58f8;
        case 0x1d58fcu: goto label_1d58fc;
        case 0x1d5900u: goto label_1d5900;
        case 0x1d5904u: goto label_1d5904;
        case 0x1d5908u: goto label_1d5908;
        case 0x1d590cu: goto label_1d590c;
        case 0x1d5910u: goto label_1d5910;
        case 0x1d5914u: goto label_1d5914;
        case 0x1d5918u: goto label_1d5918;
        case 0x1d591cu: goto label_1d591c;
        case 0x1d5920u: goto label_1d5920;
        case 0x1d5924u: goto label_1d5924;
        case 0x1d5928u: goto label_1d5928;
        case 0x1d592cu: goto label_1d592c;
        case 0x1d5930u: goto label_1d5930;
        case 0x1d5934u: goto label_1d5934;
        case 0x1d5938u: goto label_1d5938;
        case 0x1d593cu: goto label_1d593c;
        case 0x1d5940u: goto label_1d5940;
        case 0x1d5944u: goto label_1d5944;
        case 0x1d5948u: goto label_1d5948;
        case 0x1d594cu: goto label_1d594c;
        case 0x1d5950u: goto label_1d5950;
        case 0x1d5954u: goto label_1d5954;
        case 0x1d5958u: goto label_1d5958;
        case 0x1d595cu: goto label_1d595c;
        case 0x1d5960u: goto label_1d5960;
        case 0x1d5964u: goto label_1d5964;
        case 0x1d5968u: goto label_1d5968;
        case 0x1d596cu: goto label_1d596c;
        case 0x1d5970u: goto label_1d5970;
        case 0x1d5974u: goto label_1d5974;
        case 0x1d5978u: goto label_1d5978;
        case 0x1d597cu: goto label_1d597c;
        case 0x1d5980u: goto label_1d5980;
        case 0x1d5984u: goto label_1d5984;
        case 0x1d5988u: goto label_1d5988;
        case 0x1d598cu: goto label_1d598c;
        case 0x1d5990u: goto label_1d5990;
        case 0x1d5994u: goto label_1d5994;
        case 0x1d5998u: goto label_1d5998;
        case 0x1d599cu: goto label_1d599c;
        case 0x1d59a0u: goto label_1d59a0;
        case 0x1d59a4u: goto label_1d59a4;
        case 0x1d59a8u: goto label_1d59a8;
        case 0x1d59acu: goto label_1d59ac;
        case 0x1d59b0u: goto label_1d59b0;
        case 0x1d59b4u: goto label_1d59b4;
        case 0x1d59b8u: goto label_1d59b8;
        case 0x1d59bcu: goto label_1d59bc;
        case 0x1d59c0u: goto label_1d59c0;
        case 0x1d59c4u: goto label_1d59c4;
        case 0x1d59c8u: goto label_1d59c8;
        case 0x1d59ccu: goto label_1d59cc;
        case 0x1d59d0u: goto label_1d59d0;
        default: break;
    }

    ctx->pc = 0x1d5578u;

label_1d5578:
    // 0x1d5578: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d5578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d557c:
    // 0x1d557c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d557cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1d5580:
    // 0x1d5580: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1d5580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1d5584:
    // 0x1d5584: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d5588:
    // 0x1d5588: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d5588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d558c:
    // 0x1d558c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1d558cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1d5590:
    // 0x1d5590: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d5594:
    // 0x1d5594: 0xc074b82  jal         func_1D2E08
label_1d5598:
    if (ctx->pc == 0x1D5598u) {
        ctx->pc = 0x1D5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5594u;
        // 0x1d5598: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D559Cu;
        goto label_1d559c;
    }
    ctx->pc = 0x1D5594u;
    SET_GPR_U32(ctx, 31, 0x1D559Cu);
    ctx->pc = 0x1D5598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5594u;
    // 0x1d5598: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2E08u, 0x1D5594u, 0x1D559Cu)) {
        return;
    }
    ctx->pc = 0x1D559Cu;
label_1d559c:
    // 0x1d559c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d559cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d55a0:
    // 0x1d55a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d55a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1d55a4:
    // 0x1d55a4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1d55a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d55a8:
    // 0x1d55a8: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_1d55ac:
    if (ctx->pc == 0x1D55ACu) {
        ctx->pc = 0x1D55ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55A8u;
        // 0x1d55ac: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D55B0u;
        goto label_1d55b0;
    }
    ctx->pc = 0x1D55A8u;
    {
        const bool branch_taken_0x1d55a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D55ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55A8u;
        // 0x1d55ac: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d55a8) {
            ctx->pc = 0x1D561Cu;
            goto label_1d561c;
        }
    }
    ctx->pc = 0x1D55B0u;
label_1d55b0:
    // 0x1d55b0: 0x2462fff6  addiu       $v0, $v1, -0xA
    ctx->pc = 0x1d55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
label_1d55b4:
    // 0x1d55b4: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1d55b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1d55b8:
    // 0x1d55b8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1d55bc:
    if (ctx->pc == 0x1D55BCu) {
        ctx->pc = 0x1D55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55B8u;
        // 0x1d55bc: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D55C0u;
        goto label_1d55c0;
    }
    ctx->pc = 0x1D55B8u;
    {
        const bool branch_taken_0x1d55b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d55b8) {
            ctx->pc = 0x1D55BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D55B8u;
            // 0x1d55bc: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D55D0u;
            goto label_1d55d0;
        }
    }
    ctx->pc = 0x1D55C0u;
label_1d55c0:
    // 0x1d55c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d55c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d55c4:
    // 0x1d55c4: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_1d55c8:
    if (ctx->pc == 0x1D55C8u) {
        ctx->pc = 0x1D55C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55C4u;
        // 0x1d55c8: 0x2c62000e  sltiu       $v0, $v1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D55CCu;
        goto label_1d55cc;
    }
    ctx->pc = 0x1D55C4u;
    {
        const bool branch_taken_0x1d55c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D55C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55C4u;
        // 0x1d55c8: 0x2c62000e  sltiu       $v0, $v1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d55c4) {
            ctx->pc = 0x1D5620u;
            goto label_1d5620;
        }
    }
    ctx->pc = 0x1D55CCu;
label_1d55cc:
    // 0x1d55cc: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1d55ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1d55d0:
    // 0x1d55d0: 0x24020098  addiu       $v0, $zero, 0x98
    ctx->pc = 0x1d55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_1d55d4:
    // 0x1d55d4: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1d55d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1d55d8:
    // 0x1d55d8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1d55d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1d55dc:
    // 0x1d55dc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1d55dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1d55e0:
    // 0x1d55e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d55e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d55e4:
    // 0x1d55e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d55e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d55e8:
    // 0x1d55e8: 0x5445000c  bnel        $v0, $a1, . + 4 + (0xC << 2)
label_1d55ec:
    if (ctx->pc == 0x1D55ECu) {
        ctx->pc = 0x1D55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55E8u;
        // 0x1d55ec: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D55F0u;
        goto label_1d55f0;
    }
    ctx->pc = 0x1D55E8u;
    {
        const bool branch_taken_0x1d55e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1d55e8) {
            ctx->pc = 0x1D55ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D55E8u;
            // 0x1d55ec: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D561Cu;
            goto label_1d561c;
        }
    }
    ctx->pc = 0x1D55F0u;
label_1d55f0:
    // 0x1d55f0: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x1d55f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_1d55f4:
    // 0x1d55f4: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x1d55f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1d55f8:
    // 0x1d55f8: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x1d55f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
label_1d55fc:
    // 0x1d55fc: 0x3c02dead  lui         $v0, 0xDEAD
    ctx->pc = 0x1d55fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57005 << 16));
label_1d5600:
    // 0x1d5600: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x1d5600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1d5604:
    // 0x1d5604: 0x8cc48838  lw          $a0, -0x77C8($a2)
    ctx->pc = 0x1d5604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294936632)));
label_1d5608:
    // 0x1d5608: 0x3442f00d  ori         $v0, $v0, 0xF00D
    ctx->pc = 0x1d5608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61453);
label_1d560c:
    // 0x1d560c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d560cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d5610:
    // 0x1d5610: 0xac62ffd0  sw          $v0, -0x30($v1)
    ctx->pc = 0x1d5610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967248), GPR_U32(ctx, 2));
label_1d5614:
    // 0x1d5614: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d5614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1d5618:
    // 0x1d5618: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d5618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d561c:
    // 0x1d561c: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x1d561cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_1d5620:
    // 0x1d5620: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
label_1d5624:
    if (ctx->pc == 0x1D5624u) {
        ctx->pc = 0x1D5624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5620u;
        // 0x1d5624: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5628u;
        goto label_1d5628;
    }
    ctx->pc = 0x1D5620u;
    {
        const bool branch_taken_0x1d5620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5620u;
        // 0x1d5624: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5620) {
            ctx->pc = 0x1D57ACu;
            goto label_1d57ac;
        }
    }
    ctx->pc = 0x1D5628u;
label_1d5628:
    // 0x1d5628: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d5628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d562c:
    // 0x1d562c: 0x24421230  addiu       $v0, $v0, 0x1230
    ctx->pc = 0x1d562cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4656));
label_1d5630:
    // 0x1d5630: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d5630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d5634:
    // 0x1d5634: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d5634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d5638:
    // 0x1d5638: 0x800008  jr          $a0
label_1d563c:
    if (ctx->pc == 0x1D563Cu) {
        ctx->pc = 0x1D5640u;
        goto label_1d5640;
    }
    ctx->pc = 0x1D5638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5640u: goto label_1d5640;
            case 0x1D5698u: goto label_1d5698;
            case 0x1D573Cu: goto label_1d573c;
            case 0x1D576Cu: goto label_1d576c;
            case 0x1D57ACu: goto label_1d57ac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5638u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D5640u;
label_1d5640:
    // 0x1d5640: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d5640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5644:
    // 0x1d5644: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1d5644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d5648:
    // 0x1d5648: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_1d564c:
    if (ctx->pc == 0x1D564Cu) {
        ctx->pc = 0x1D564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5648u;
        // 0x1d564c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5650u;
        goto label_1d5650;
    }
    ctx->pc = 0x1D5648u;
    {
        const bool branch_taken_0x1d5648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d5648) {
            ctx->pc = 0x1D564Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5648u;
            // 0x1d564c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D567Cu;
            goto label_1d567c;
        }
    }
    ctx->pc = 0x1D5650u;
label_1d5650:
    // 0x1d5650: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x1d5650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_1d5654:
    // 0x1d5654: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1d5658:
    if (ctx->pc == 0x1D5658u) {
        ctx->pc = 0x1D5658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5654u;
        // 0x1d5658: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D565Cu;
        goto label_1d565c;
    }
    ctx->pc = 0x1D5654u;
    {
        const bool branch_taken_0x1d5654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5654u;
        // 0x1d5658: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5654) {
            ctx->pc = 0x1D566Cu;
            goto label_1d566c;
        }
    }
    ctx->pc = 0x1D565Cu;
label_1d565c:
    // 0x1d565c: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_1d5660:
    if (ctx->pc == 0x1D5660u) {
        ctx->pc = 0x1D5660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D565Cu;
        // 0x1d5660: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5664u;
        goto label_1d5664;
    }
    ctx->pc = 0x1D565Cu;
    {
        const bool branch_taken_0x1d565c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d565c) {
            ctx->pc = 0x1D5660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D565Cu;
            // 0x1d5660: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D567Cu;
            goto label_1d567c;
        }
    }
    ctx->pc = 0x1D5664u;
label_1d5664:
    // 0x1d5664: 0x10000053  b           . + 4 + (0x53 << 2)
label_1d5668:
    if (ctx->pc == 0x1D5668u) {
        ctx->pc = 0x1D5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5664u;
        // 0x1d5668: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D566Cu;
        goto label_1d566c;
    }
    ctx->pc = 0x1D5664u;
    {
        const bool branch_taken_0x1d5664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5664u;
        // 0x1d5668: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5664) {
            ctx->pc = 0x1D57B4u;
            goto label_1d57b4;
        }
    }
    ctx->pc = 0x1D566Cu;
label_1d566c:
    // 0x1d566c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1d566cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d5670:
    // 0x1d5670: 0x1462004f  bne         $v1, $v0, . + 4 + (0x4F << 2)
label_1d5674:
    if (ctx->pc == 0x1D5674u) {
        ctx->pc = 0x1D5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5670u;
        // 0x1d5674: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5678u;
        goto label_1d5678;
    }
    ctx->pc = 0x1D5670u;
    {
        const bool branch_taken_0x1d5670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5670u;
        // 0x1d5674: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5670) {
            ctx->pc = 0x1D57B0u;
            goto label_1d57b0;
        }
    }
    ctx->pc = 0x1D5678u;
label_1d5678:
    // 0x1d5678: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d5678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d567c:
    // 0x1d567c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d567cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d5680:
    // 0x1d5680: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1d5680u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1d5684:
    // 0x1d5684: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1d5684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1d5688:
    // 0x1d5688: 0x60f809  jalr        $v1
label_1d568c:
    if (ctx->pc == 0x1D568Cu) {
        ctx->pc = 0x1D568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5688u;
        // 0x1d568c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5690u;
        goto label_1d5690;
    }
    ctx->pc = 0x1D5688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D5690u);
        ctx->pc = 0x1D568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5688u;
        // 0x1d568c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5688u, 0x1D5690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5690u;
label_1d5690:
    // 0x1d5690: 0x10000045  b           . + 4 + (0x45 << 2)
label_1d5694:
    if (ctx->pc == 0x1D5694u) {
        ctx->pc = 0x1D5694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5690u;
        // 0x1d5694: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5698u;
        goto label_1d5698;
    }
    ctx->pc = 0x1D5690u;
    {
        const bool branch_taken_0x1d5690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5690u;
        // 0x1d5694: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5690) {
            ctx->pc = 0x1D57A8u;
            goto label_1d57a8;
        }
    }
    ctx->pc = 0x1D5698u;
label_1d5698:
    // 0x1d5698: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d5698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1d569c:
    // 0x1d569c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d569cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d56a0:
    // 0x1d56a0: 0x14620044  bne         $v1, $v0, . + 4 + (0x44 << 2)
label_1d56a4:
    if (ctx->pc == 0x1D56A4u) {
        ctx->pc = 0x1D56A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56A0u;
        // 0x1d56a4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D56A8u;
        goto label_1d56a8;
    }
    ctx->pc = 0x1D56A0u;
    {
        const bool branch_taken_0x1d56a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D56A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56A0u;
        // 0x1d56a4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56a0) {
            ctx->pc = 0x1D57B4u;
            goto label_1d57b4;
        }
    }
    ctx->pc = 0x1D56A8u;
label_1d56a8:
    // 0x1d56a8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d56a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d56ac:
    // 0x1d56ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d56acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d56b0:
    // 0x1d56b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d56b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d56b4:
    // 0x1d56b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d56b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d56b8:
    // 0x1d56b8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1d56b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1d56bc:
    // 0x1d56bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d56bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d56c0:
    // 0x1d56c0: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1d56c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1d56c4:
    // 0x1d56c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d56c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d56c8:
    // 0x1d56c8: 0x60f809  jalr        $v1
label_1d56cc:
    if (ctx->pc == 0x1D56CCu) {
        ctx->pc = 0x1D56CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56C8u;
        // 0x1d56cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D56D0u;
        goto label_1d56d0;
    }
    ctx->pc = 0x1D56C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D56D0u);
        ctx->pc = 0x1D56CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56C8u;
        // 0x1d56cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D56C8u, 0x1D56D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D56D0u;
label_1d56d0:
    // 0x1d56d0: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1d56d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1d56d4:
    // 0x1d56d4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1d56d8:
    if (ctx->pc == 0x1D56D8u) {
        ctx->pc = 0x1D56D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56D4u;
        // 0x1d56d8: 0xae00008c  sw          $zero, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D56DCu;
        goto label_1d56dc;
    }
    ctx->pc = 0x1D56D4u;
    {
        const bool branch_taken_0x1d56d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D56D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56D4u;
        // 0x1d56d8: 0xae00008c  sw          $zero, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56d4) {
            ctx->pc = 0x1D56E4u;
            goto label_1d56e4;
        }
    }
    ctx->pc = 0x1D56DCu;
label_1d56dc:
    // 0x1d56dc: 0xc07596a  jal         func_1D65A8
label_1d56e0:
    if (ctx->pc == 0x1D56E0u) {
        ctx->pc = 0x1D56E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56DCu;
        // 0x1d56e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D56E4u;
        goto label_1d56e4;
    }
    ctx->pc = 0x1D56DCu;
    SET_GPR_U32(ctx, 31, 0x1D56E4u);
    ctx->pc = 0x1D56E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D56DCu;
    // 0x1d56e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D56DCu, 0x1D56E4u)) {
        return;
    }
    ctx->pc = 0x1D56E4u;
label_1d56e4:
    // 0x1d56e4: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x1d56e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1d56e8:
    // 0x1d56e8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_1d56ec:
    if (ctx->pc == 0x1D56ECu) {
        ctx->pc = 0x1D56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56E8u;
        // 0x1d56ec: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D56F0u;
        goto label_1d56f0;
    }
    ctx->pc = 0x1D56E8u;
    {
        const bool branch_taken_0x1d56e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d56e8) {
            ctx->pc = 0x1D56ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D56E8u;
            // 0x1d56ec: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D56FCu;
            goto label_1d56fc;
        }
    }
    ctx->pc = 0x1D56F0u;
label_1d56f0:
    // 0x1d56f0: 0xc07596e  jal         func_1D65B8
label_1d56f4:
    if (ctx->pc == 0x1D56F4u) {
        ctx->pc = 0x1D56F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56F0u;
        // 0x1d56f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D56F8u;
        goto label_1d56f8;
    }
    ctx->pc = 0x1D56F0u;
    SET_GPR_U32(ctx, 31, 0x1D56F8u);
    ctx->pc = 0x1D56F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D56F0u;
    // 0x1d56f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D56F0u, 0x1D56F8u)) {
        return;
    }
    ctx->pc = 0x1D56F8u;
label_1d56f8:
    // 0x1d56f8: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1d56f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1d56fc:
    // 0x1d56fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d56fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5700:
    // 0x1d5700: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_1d5704:
    if (ctx->pc == 0x1D5704u) {
        ctx->pc = 0x1D5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5700u;
        // 0x1d5704: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5708u;
        goto label_1d5708;
    }
    ctx->pc = 0x1D5700u;
    {
        const bool branch_taken_0x1d5700 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5700u;
        // 0x1d5704: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5700) {
            ctx->pc = 0x1D5730u;
            goto label_1d5730;
        }
    }
    ctx->pc = 0x1D5708u;
label_1d5708:
    // 0x1d5708: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d5708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d570c:
    // 0x1d570c: 0x0  nop
    ctx->pc = 0x1d570cu;
    // NOP
label_1d5710:
    // 0x1d5710: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1d5710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1d5714:
    // 0x1d5714: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d5714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d5718:
    // 0x1d5718: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d5718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d571c:
    // 0x1d571c: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x1d571cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
label_1d5720:
    // 0x1d5720: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1d5720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1d5724:
    // 0x1d5724: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d5724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d5728:
    // 0x1d5728: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1d572c:
    if (ctx->pc == 0x1D572Cu) {
        ctx->pc = 0x1D572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5728u;
        // 0x1d572c: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5730u;
        goto label_1d5730;
    }
    ctx->pc = 0x1D5728u;
    {
        const bool branch_taken_0x1d5728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5728u;
        // 0x1d572c: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5728) {
            ctx->pc = 0x1D5710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5710;
        }
    }
    ctx->pc = 0x1D5730u;
label_1d5730:
    // 0x1d5730: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1d5730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1d5734:
    // 0x1d5734: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1d5738:
    if (ctx->pc == 0x1D5738u) {
        ctx->pc = 0x1D5738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5734u;
        // 0x1d5738: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D573Cu;
        goto label_1d573c;
    }
    ctx->pc = 0x1D5734u;
    {
        const bool branch_taken_0x1d5734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5734u;
        // 0x1d5738: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5734) {
            ctx->pc = 0x1D57A8u;
            goto label_1d57a8;
        }
    }
    ctx->pc = 0x1D573Cu;
label_1d573c:
    // 0x1d573c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d573cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5740:
    // 0x1d5740: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d5740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d5744:
    // 0x1d5744: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1d5748:
    if (ctx->pc == 0x1D5748u) {
        ctx->pc = 0x1D5748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5744u;
        // 0x1d5748: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D574Cu;
        goto label_1d574c;
    }
    ctx->pc = 0x1D5744u;
    {
        const bool branch_taken_0x1d5744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5744u;
        // 0x1d5748: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5744) {
            ctx->pc = 0x1D575Cu;
            goto label_1d575c;
        }
    }
    ctx->pc = 0x1D574Cu;
label_1d574c:
    // 0x1d574c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1d5750:
    if (ctx->pc == 0x1D5750u) {
        ctx->pc = 0x1D5750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D574Cu;
        // 0x1d5750: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5754u;
        goto label_1d5754;
    }
    ctx->pc = 0x1D574Cu;
    {
        const bool branch_taken_0x1d574c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D574Cu;
        // 0x1d5750: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d574c) {
            ctx->pc = 0x1D5764u;
            goto label_1d5764;
        }
    }
    ctx->pc = 0x1D5754u;
label_1d5754:
    // 0x1d5754: 0x10000017  b           . + 4 + (0x17 << 2)
label_1d5758:
    if (ctx->pc == 0x1D5758u) {
        ctx->pc = 0x1D575Cu;
        goto label_1d575c;
    }
    ctx->pc = 0x1D5754u;
    {
        const bool branch_taken_0x1d5754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5754) {
            ctx->pc = 0x1D57B4u;
            goto label_1d57b4;
        }
    }
    ctx->pc = 0x1D575Cu;
label_1d575c:
    // 0x1d575c: 0x10000013  b           . + 4 + (0x13 << 2)
label_1d5760:
    if (ctx->pc == 0x1D5760u) {
        ctx->pc = 0x1D5760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D575Cu;
        // 0x1d5760: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5764u;
        goto label_1d5764;
    }
    ctx->pc = 0x1D575Cu;
    {
        const bool branch_taken_0x1d575c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D575Cu;
        // 0x1d5760: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d575c) {
            ctx->pc = 0x1D57ACu;
            goto label_1d57ac;
        }
    }
    ctx->pc = 0x1D5764u;
label_1d5764:
    // 0x1d5764: 0x10000010  b           . + 4 + (0x10 << 2)
label_1d5768:
    if (ctx->pc == 0x1D5768u) {
        ctx->pc = 0x1D5768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5764u;
        // 0x1d5768: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D576Cu;
        goto label_1d576c;
    }
    ctx->pc = 0x1D5764u;
    {
        const bool branch_taken_0x1d5764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5764u;
        // 0x1d5768: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5764) {
            ctx->pc = 0x1D57A8u;
            goto label_1d57a8;
        }
    }
    ctx->pc = 0x1D576Cu;
label_1d576c:
    // 0x1d576c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d576cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5770:
    // 0x1d5770: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d5770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d5774:
    // 0x1d5774: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_1d5778:
    if (ctx->pc == 0x1D5778u) {
        ctx->pc = 0x1D5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5774u;
        // 0x1d5778: 0x2462fff3  addiu       $v0, $v1, -0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967283));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D577Cu;
        goto label_1d577c;
    }
    ctx->pc = 0x1D5774u;
    {
        const bool branch_taken_0x1d5774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5774u;
        // 0x1d5778: 0x2462fff3  addiu       $v0, $v1, -0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967283));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5774) {
            ctx->pc = 0x1D57B0u;
            goto label_1d57b0;
        }
    }
    ctx->pc = 0x1D577Cu;
label_1d577c:
    // 0x1d577c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d577cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1d5780:
    // 0x1d5780: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1d5784:
    if (ctx->pc == 0x1D5784u) {
        ctx->pc = 0x1D5784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5780u;
        // 0x1d5784: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5788u;
        goto label_1d5788;
    }
    ctx->pc = 0x1D5780u;
    {
        const bool branch_taken_0x1d5780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5780u;
        // 0x1d5784: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5780) {
            ctx->pc = 0x1D57B4u;
            goto label_1d57b4;
        }
    }
    ctx->pc = 0x1D5788u;
label_1d5788:
    // 0x1d5788: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1d578c:
    if (ctx->pc == 0x1D578Cu) {
        ctx->pc = 0x1D578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5788u;
        // 0x1d578c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5790u;
        goto label_1d5790;
    }
    ctx->pc = 0x1D5788u;
    {
        const bool branch_taken_0x1d5788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5788u;
        // 0x1d578c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5788) {
            ctx->pc = 0x1D57B4u;
            goto label_1d57b4;
        }
    }
    ctx->pc = 0x1D5790u;
label_1d5790:
    // 0x1d5790: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d5790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d5794:
    // 0x1d5794: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1d5794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1d5798:
    // 0x1d5798: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1d5798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1d579c:
    // 0x1d579c: 0x60f809  jalr        $v1
label_1d57a0:
    if (ctx->pc == 0x1D57A0u) {
        ctx->pc = 0x1D57A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D579Cu;
        // 0x1d57a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D57A4u;
        goto label_1d57a4;
    }
    ctx->pc = 0x1D579Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D57A4u);
        ctx->pc = 0x1D57A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D579Cu;
        // 0x1d57a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D579Cu, 0x1D57A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D57A4u;
label_1d57a4:
    // 0x1d57a4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1d57a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d57a8:
    // 0x1d57a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1d57a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1d57ac:
    // 0x1d57ac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d57acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1d57b0:
    // 0x1d57b0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d57b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d57b4:
    // 0x1d57b4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1d57b8:
    if (ctx->pc == 0x1D57B8u) {
        ctx->pc = 0x1D57B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57B4u;
        // 0x1d57b8: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D57BCu;
        goto label_1d57bc;
    }
    ctx->pc = 0x1D57B4u;
    {
        const bool branch_taken_0x1d57b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D57B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57B4u;
        // 0x1d57b8: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d57b4) {
            ctx->pc = 0x1D57CCu;
            goto label_1d57cc;
        }
    }
    ctx->pc = 0x1D57BCu;
label_1d57bc:
    // 0x1d57bc: 0x8c438830  lw          $v1, -0x77D0($v0)
    ctx->pc = 0x1d57bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936624)));
label_1d57c0:
    // 0x1d57c0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1d57c4:
    if (ctx->pc == 0x1D57C4u) {
        ctx->pc = 0x1D57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57C0u;
        // 0x1d57c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D57C8u;
        goto label_1d57c8;
    }
    ctx->pc = 0x1D57C0u;
    {
        const bool branch_taken_0x1d57c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57C0u;
        // 0x1d57c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d57c0) {
            ctx->pc = 0x1D57CCu;
            goto label_1d57cc;
        }
    }
    ctx->pc = 0x1D57C8u;
label_1d57c8:
    // 0x1d57c8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1d57c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1d57cc:
    // 0x1d57cc: 0x16200084  bnez        $s1, . + 4 + (0x84 << 2)
label_1d57d0:
    if (ctx->pc == 0x1D57D0u) {
        ctx->pc = 0x1D57D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57CCu;
        // 0x1d57d0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D57D4u;
        goto label_1d57d4;
    }
    ctx->pc = 0x1D57CCu;
    {
        const bool branch_taken_0x1d57cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D57D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57CCu;
        // 0x1d57d0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d57cc) {
            ctx->pc = 0x1D59E0u;
            return;
        }
    }
    ctx->pc = 0x1D57D4u;
label_1d57d4:
    // 0x1d57d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d57d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1d57d8:
    // 0x1d57d8: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x1d57d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_1d57dc:
    // 0x1d57dc: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
label_1d57e0:
    if (ctx->pc == 0x1D57E0u) {
        ctx->pc = 0x1D57E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57DCu;
        // 0x1d57e0: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D57E4u;
        goto label_1d57e4;
    }
    ctx->pc = 0x1D57DCu;
    {
        const bool branch_taken_0x1d57dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D57E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57DCu;
        // 0x1d57e0: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d57dc) {
            ctx->pc = 0x1D59DCu;
            return;
        }
    }
    ctx->pc = 0x1D57E4u;
label_1d57e4:
    // 0x1d57e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d57e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d57e8:
    // 0x1d57e8: 0x24421270  addiu       $v0, $v0, 0x1270
    ctx->pc = 0x1d57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4720));
label_1d57ec:
    // 0x1d57ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d57ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d57f0:
    // 0x1d57f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d57f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d57f4:
    // 0x1d57f4: 0x800008  jr          $a0
label_1d57f8:
    if (ctx->pc == 0x1D57F8u) {
        ctx->pc = 0x1D57FCu;
        goto label_1d57fc;
    }
    ctx->pc = 0x1D57F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D57FCu: goto label_1d57fc;
            case 0x1D5818u: goto label_1d5818;
            case 0x1D5828u: goto label_1d5828;
            case 0x1D5844u: goto label_1d5844;
            case 0x1D58B4u: goto label_1d58b4;
            case 0x1D58C4u: goto label_1d58c4;
            case 0x1D58F8u: goto label_1d58f8;
            case 0x1D5914u: goto label_1d5914;
            case 0x1D5924u: goto label_1d5924;
            case 0x1D5934u: goto label_1d5934;
            case 0x1D5944u: goto label_1d5944;
            case 0x1D5978u: goto label_1d5978;
            case 0x1D59A8u: goto label_1d59a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D57F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D57FCu;
label_1d57fc:
    // 0x1d57fc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d57fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d5800:
    // 0x1d5800: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d5800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1d5804:
    // 0x1d5804: 0x24a51120  addiu       $a1, $a1, 0x1120
    ctx->pc = 0x1d5804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4384));
label_1d5808:
    // 0x1d5808: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d580c:
    // 0x1d580c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1d580cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1d5810:
    // 0x1d5810: 0x10000052  b           . + 4 + (0x52 << 2)
label_1d5814:
    if (ctx->pc == 0x1D5814u) {
        ctx->pc = 0x1D5814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5810u;
        // 0x1d5814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5818u;
        goto label_1d5818;
    }
    ctx->pc = 0x1D5810u;
    {
        const bool branch_taken_0x1d5810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5810u;
        // 0x1d5814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5810) {
            ctx->pc = 0x1D595Cu;
            goto label_1d595c;
        }
    }
    ctx->pc = 0x1D5818u;
label_1d5818:
    // 0x1d5818: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d5818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d581c:
    // 0x1d581c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d581cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1d5820:
    // 0x1d5820: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1d5824:
    if (ctx->pc == 0x1D5824u) {
        ctx->pc = 0x1D5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5820u;
        // 0x1d5824: 0x24a51138  addiu       $a1, $a1, 0x1138 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5828u;
        goto label_1d5828;
    }
    ctx->pc = 0x1D5820u;
    {
        const bool branch_taken_0x1d5820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5820u;
        // 0x1d5824: 0x24a51138  addiu       $a1, $a1, 0x1138 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5820) {
            ctx->pc = 0x1D5950u;
            goto label_1d5950;
        }
    }
    ctx->pc = 0x1D5828u;
label_1d5828:
    // 0x1d5828: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d5828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d582c:
    // 0x1d582c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d582cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1d5830:
    // 0x1d5830: 0x24a51150  addiu       $a1, $a1, 0x1150
    ctx->pc = 0x1d5830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4432));
label_1d5834:
    // 0x1d5834: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d5834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d5838:
    // 0x1d5838: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1d5838u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1d583c:
    // 0x1d583c: 0x10000047  b           . + 4 + (0x47 << 2)
label_1d5840:
    if (ctx->pc == 0x1D5840u) {
        ctx->pc = 0x1D5840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D583Cu;
        // 0x1d5840: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5844u;
        goto label_1d5844;
    }
    ctx->pc = 0x1D583Cu;
    {
        const bool branch_taken_0x1d583c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D583Cu;
        // 0x1d5840: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d583c) {
            ctx->pc = 0x1D595Cu;
            goto label_1d595c;
        }
    }
    ctx->pc = 0x1D5844u;
label_1d5844:
    // 0x1d5844: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d5844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d5848:
    // 0x1d5848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d584c:
    // 0x1d584c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_1d5850:
    if (ctx->pc == 0x1D5850u) {
        ctx->pc = 0x1D5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D584Cu;
        // 0x1d5850: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5854u;
        goto label_1d5854;
    }
    ctx->pc = 0x1D584Cu;
    {
        const bool branch_taken_0x1d584c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D584Cu;
        // 0x1d5850: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d584c) {
            ctx->pc = 0x1D5878u;
            goto label_1d5878;
        }
    }
    ctx->pc = 0x1D5854u;
label_1d5854:
    // 0x1d5854: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d5854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d5858:
    // 0x1d5858: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1d585c:
    if (ctx->pc == 0x1D585Cu) {
        ctx->pc = 0x1D585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5858u;
        // 0x1d585c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5860u;
        goto label_1d5860;
    }
    ctx->pc = 0x1D5858u;
    {
        const bool branch_taken_0x1d5858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5858u;
        // 0x1d585c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5858) {
            ctx->pc = 0x1D5878u;
            goto label_1d5878;
        }
    }
    ctx->pc = 0x1D5860u;
label_1d5860:
    // 0x1d5860: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1d5864:
    if (ctx->pc == 0x1D5864u) {
        ctx->pc = 0x1D5864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5860u;
        // 0x1d5864: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5868u;
        goto label_1d5868;
    }
    ctx->pc = 0x1D5860u;
    {
        const bool branch_taken_0x1d5860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5860u;
        // 0x1d5864: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5860) {
            ctx->pc = 0x1D5878u;
            goto label_1d5878;
        }
    }
    ctx->pc = 0x1D5868u;
label_1d5868:
    // 0x1d5868: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1d586c:
    if (ctx->pc == 0x1D586Cu) {
        ctx->pc = 0x1D586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5868u;
        // 0x1d586c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5870u;
        goto label_1d5870;
    }
    ctx->pc = 0x1D5868u;
    {
        const bool branch_taken_0x1d5868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5868u;
        // 0x1d586c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5868) {
            ctx->pc = 0x1D5878u;
            goto label_1d5878;
        }
    }
    ctx->pc = 0x1D5870u;
label_1d5870:
    // 0x1d5870: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1d5874:
    if (ctx->pc == 0x1D5874u) {
        ctx->pc = 0x1D5878u;
        goto label_1d5878;
    }
    ctx->pc = 0x1D5870u;
    {
        const bool branch_taken_0x1d5870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d5870) {
            ctx->pc = 0x1D587Cu;
            goto label_1d587c;
        }
    }
    ctx->pc = 0x1D5878u;
label_1d5878:
    // 0x1d5878: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d5878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d587c:
    // 0x1d587c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1d5880:
    if (ctx->pc == 0x1D5880u) {
        ctx->pc = 0x1D5880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D587Cu;
        // 0x1d5880: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5884u;
        goto label_1d5884;
    }
    ctx->pc = 0x1D587Cu;
    {
        const bool branch_taken_0x1d587c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D587Cu;
        // 0x1d5880: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d587c) {
            ctx->pc = 0x1D589Cu;
            goto label_1d589c;
        }
    }
    ctx->pc = 0x1D5884u;
label_1d5884:
    // 0x1d5884: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d5884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d5888:
    // 0x1d5888: 0x24a51168  addiu       $a1, $a1, 0x1168
    ctx->pc = 0x1d5888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4456));
label_1d588c:
    // 0x1d588c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d588cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d5890:
    // 0x1d5890: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1d5890u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1d5894:
    // 0x1d5894: 0x10000031  b           . + 4 + (0x31 << 2)
label_1d5898:
    if (ctx->pc == 0x1D5898u) {
        ctx->pc = 0x1D5898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5894u;
        // 0x1d5898: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D589Cu;
        goto label_1d589c;
    }
    ctx->pc = 0x1D5894u;
    {
        const bool branch_taken_0x1d5894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5894u;
        // 0x1d5898: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5894) {
            ctx->pc = 0x1D595Cu;
            goto label_1d595c;
        }
    }
    ctx->pc = 0x1D589Cu;
label_1d589c:
    // 0x1d589c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d58a0:
    // 0x1d58a0: 0x24a51168  addiu       $a1, $a1, 0x1168
    ctx->pc = 0x1d58a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4456));
label_1d58a4:
    // 0x1d58a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d58a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d58a8:
    // 0x1d58a8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1d58a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1d58ac:
    // 0x1d58ac: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1d58b0:
    if (ctx->pc == 0x1D58B0u) {
        ctx->pc = 0x1D58B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58ACu;
        // 0x1d58b0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D58B4u;
        goto label_1d58b4;
    }
    ctx->pc = 0x1D58ACu;
    {
        const bool branch_taken_0x1d58ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D58B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58ACu;
        // 0x1d58b0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d58ac) {
            ctx->pc = 0x1D595Cu;
            goto label_1d595c;
        }
    }
    ctx->pc = 0x1D58B4u;
label_1d58b4:
    // 0x1d58b4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d58b8:
    // 0x1d58b8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d58b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1d58bc:
    // 0x1d58bc: 0x10000024  b           . + 4 + (0x24 << 2)
label_1d58c0:
    if (ctx->pc == 0x1D58C0u) {
        ctx->pc = 0x1D58C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58BCu;
        // 0x1d58c0: 0x24a51180  addiu       $a1, $a1, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D58C4u;
        goto label_1d58c4;
    }
    ctx->pc = 0x1D58BCu;
    {
        const bool branch_taken_0x1d58bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D58C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58BCu;
        // 0x1d58c0: 0x24a51180  addiu       $a1, $a1, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d58bc) {
            ctx->pc = 0x1D5950u;
            goto label_1d5950;
        }
    }
    ctx->pc = 0x1D58C4u;
label_1d58c4:
    // 0x1d58c4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d58c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d58c8:
    // 0x1d58c8: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d58c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d58cc:
    // 0x1d58cc: 0x8c458830  lw          $a1, -0x77D0($v0)
    ctx->pc = 0x1d58ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936624)));
label_1d58d0:
    // 0x1d58d0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d58d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d58d4:
    // 0x1d58d4: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1d58d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1d58d8:
    // 0x1d58d8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1d58d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d58dc:
    // 0x1d58dc: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1d58dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1d58e0:
    // 0x1d58e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d58e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d58e4:
    // 0x1d58e4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1d58e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1d58e8:
    // 0x1d58e8: 0x40f809  jalr        $v0
label_1d58ec:
    if (ctx->pc == 0x1D58ECu) {
        ctx->pc = 0x1D58ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58E8u;
        // 0x1d58ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D58F0u;
        goto label_1d58f0;
    }
    ctx->pc = 0x1D58E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D58F0u);
        ctx->pc = 0x1D58ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58E8u;
        // 0x1d58ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D58E8u, 0x1D58F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D58F0u;
label_1d58f0:
    // 0x1d58f0: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1d58f4:
    if (ctx->pc == 0x1D58F4u) {
        ctx->pc = 0x1D58F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58F0u;
        // 0x1d58f4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D58F8u;
        goto label_1d58f8;
    }
    ctx->pc = 0x1D58F0u;
    {
        const bool branch_taken_0x1d58f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D58F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58F0u;
        // 0x1d58f4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d58f0) {
            ctx->pc = 0x1D59E0u;
            return;
        }
    }
    ctx->pc = 0x1D58F8u;
label_1d58f8:
    // 0x1d58f8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d58f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d58fc:
    // 0x1d58fc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d58fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1d5900:
    // 0x1d5900: 0x24a51198  addiu       $a1, $a1, 0x1198
    ctx->pc = 0x1d5900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4504));
label_1d5904:
    // 0x1d5904: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d5904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d5908:
    // 0x1d5908: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1d5908u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1d590c:
    // 0x1d590c: 0x10000013  b           . + 4 + (0x13 << 2)
label_1d5910:
    if (ctx->pc == 0x1D5910u) {
        ctx->pc = 0x1D5910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D590Cu;
        // 0x1d5910: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5914u;
        goto label_1d5914;
    }
    ctx->pc = 0x1D590Cu;
    {
        const bool branch_taken_0x1d590c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D590Cu;
        // 0x1d5910: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d590c) {
            ctx->pc = 0x1D595Cu;
            goto label_1d595c;
        }
    }
    ctx->pc = 0x1D5914u;
label_1d5914:
    // 0x1d5914: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d5914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d5918:
    // 0x1d5918: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d5918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1d591c:
    // 0x1d591c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1d5920:
    if (ctx->pc == 0x1D5920u) {
        ctx->pc = 0x1D5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D591Cu;
        // 0x1d5920: 0x24a511b0  addiu       $a1, $a1, 0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5924u;
        goto label_1d5924;
    }
    ctx->pc = 0x1D591Cu;
    {
        const bool branch_taken_0x1d591c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D591Cu;
        // 0x1d5920: 0x24a511b0  addiu       $a1, $a1, 0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d591c) {
            ctx->pc = 0x1D5950u;
            goto label_1d5950;
        }
    }
    ctx->pc = 0x1D5924u;
label_1d5924:
    // 0x1d5924: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d5924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d5928:
    // 0x1d5928: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d5928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1d592c:
    // 0x1d592c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d5930:
    if (ctx->pc == 0x1D5930u) {
        ctx->pc = 0x1D5930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D592Cu;
        // 0x1d5930: 0x24a511d0  addiu       $a1, $a1, 0x11D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5934u;
        goto label_1d5934;
    }
    ctx->pc = 0x1D592Cu;
    {
        const bool branch_taken_0x1d592c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D592Cu;
        // 0x1d5930: 0x24a511d0  addiu       $a1, $a1, 0x11D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d592c) {
            ctx->pc = 0x1D5950u;
            goto label_1d5950;
        }
    }
    ctx->pc = 0x1D5934u;
label_1d5934:
    // 0x1d5934: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d5934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d5938:
    // 0x1d5938: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d5938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1d593c:
    // 0x1d593c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d5940:
    if (ctx->pc == 0x1D5940u) {
        ctx->pc = 0x1D5940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D593Cu;
        // 0x1d5940: 0x24a511f0  addiu       $a1, $a1, 0x11F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5944u;
        goto label_1d5944;
    }
    ctx->pc = 0x1D593Cu;
    {
        const bool branch_taken_0x1d593c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D593Cu;
        // 0x1d5940: 0x24a511f0  addiu       $a1, $a1, 0x11F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d593c) {
            ctx->pc = 0x1D5950u;
            goto label_1d5950;
        }
    }
    ctx->pc = 0x1D5944u;
label_1d5944:
    // 0x1d5944: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d5944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d5948:
    // 0x1d5948: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d5948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1d594c:
    // 0x1d594c: 0x24a51210  addiu       $a1, $a1, 0x1210
    ctx->pc = 0x1d594cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4624));
label_1d5950:
    // 0x1d5950: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d5950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d5954:
    // 0x1d5954: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1d5954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1d5958:
    // 0x1d5958: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1d5958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d595c:
    // 0x1d595c: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1d595cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1d5960:
    // 0x1d5960: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5960u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5964:
    // 0x1d5964: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1d5964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1d5968:
    // 0x1d5968: 0x60f809  jalr        $v1
label_1d596c:
    if (ctx->pc == 0x1D596Cu) {
        ctx->pc = 0x1D596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5968u;
        // 0x1d596c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5970u;
        goto label_1d5970;
    }
    ctx->pc = 0x1D5968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D5970u);
        ctx->pc = 0x1D596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5968u;
        // 0x1d596c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5968u, 0x1D5970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5970u;
label_1d5970:
    // 0x1d5970: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1d5974:
    if (ctx->pc == 0x1D5974u) {
        ctx->pc = 0x1D5974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5970u;
        // 0x1d5974: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5978u;
        goto label_1d5978;
    }
    ctx->pc = 0x1D5970u;
    {
        const bool branch_taken_0x1d5970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5970u;
        // 0x1d5974: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5970) {
            ctx->pc = 0x1D59E0u;
            return;
        }
    }
    ctx->pc = 0x1D5978u;
label_1d5978:
    // 0x1d5978: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d5978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d597c:
    // 0x1d597c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d597cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d5980:
    // 0x1d5980: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x1d5980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1d5984:
    // 0x1d5984: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d5984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5988:
    // 0x1d5988: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1d5988u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1d598c:
    // 0x1d598c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d598cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5990:
    // 0x1d5990: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1d5990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1d5994:
    // 0x1d5994: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d5994u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5998:
    // 0x1d5998: 0x60f809  jalr        $v1
label_1d599c:
    if (ctx->pc == 0x1D599Cu) {
        ctx->pc = 0x1D599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5998u;
        // 0x1d599c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D59A0u;
        goto label_1d59a0;
    }
    ctx->pc = 0x1D5998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D59A0u);
        ctx->pc = 0x1D599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5998u;
        // 0x1d599c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5998u, 0x1D59A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D59A0u;
label_1d59a0:
    // 0x1d59a0: 0x1000000f  b           . + 4 + (0xF << 2)
label_1d59a4:
    if (ctx->pc == 0x1D59A4u) {
        ctx->pc = 0x1D59A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59A0u;
        // 0x1d59a4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D59A8u;
        goto label_1d59a8;
    }
    ctx->pc = 0x1D59A0u;
    {
        const bool branch_taken_0x1d59a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D59A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59A0u;
        // 0x1d59a4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d59a0) {
            ctx->pc = 0x1D59E0u;
            return;
        }
    }
    ctx->pc = 0x1D59A8u;
label_1d59a8:
    // 0x1d59a8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d59a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d59ac:
    // 0x1d59ac: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d59acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d59b0:
    // 0x1d59b0: 0x8c45882c  lw          $a1, -0x77D4($v0)
    ctx->pc = 0x1d59b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936620)));
label_1d59b4:
    // 0x1d59b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d59b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d59b8:
    // 0x1d59b8: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1d59b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1d59bc:
    // 0x1d59bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d59bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d59c0:
    // 0x1d59c0: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1d59c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1d59c4:
    // 0x1d59c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d59c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d59c8:
    // 0x1d59c8: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1d59c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1d59cc:
    // 0x1d59cc: 0x40f809  jalr        $v0
label_1d59d0:
    if (ctx->pc == 0x1D59D0u) {
        ctx->pc = 0x1D59D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59CCu;
        // 0x1d59d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D59D4u;
        goto label_fallthrough_0x1d59cc;
    }
    ctx->pc = 0x1D59CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D59D4u);
        ctx->pc = 0x1D59D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59CCu;
        // 0x1d59d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D59CCu, 0x1D59D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1d59cc:
    ctx->pc = 0x1D59D4u;
}
