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

// Function: sub_001324D8
// Address: 0x1324d8 - 0x132890
void sub_001324D8_0x1324d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001324D8_0x1324d8");
#endif

    switch (ctx->pc) {
        case 0x1324d8u: goto label_1324d8;
        case 0x1324dcu: goto label_1324dc;
        case 0x1324e0u: goto label_1324e0;
        case 0x1324e4u: goto label_1324e4;
        case 0x1324e8u: goto label_1324e8;
        case 0x1324ecu: goto label_1324ec;
        case 0x1324f0u: goto label_1324f0;
        case 0x1324f4u: goto label_1324f4;
        case 0x1324f8u: goto label_1324f8;
        case 0x1324fcu: goto label_1324fc;
        case 0x132500u: goto label_132500;
        case 0x132504u: goto label_132504;
        case 0x132508u: goto label_132508;
        case 0x13250cu: goto label_13250c;
        case 0x132510u: goto label_132510;
        case 0x132514u: goto label_132514;
        case 0x132518u: goto label_132518;
        case 0x13251cu: goto label_13251c;
        case 0x132520u: goto label_132520;
        case 0x132524u: goto label_132524;
        case 0x132528u: goto label_132528;
        case 0x13252cu: goto label_13252c;
        case 0x132530u: goto label_132530;
        case 0x132534u: goto label_132534;
        case 0x132538u: goto label_132538;
        case 0x13253cu: goto label_13253c;
        case 0x132540u: goto label_132540;
        case 0x132544u: goto label_132544;
        case 0x132548u: goto label_132548;
        case 0x13254cu: goto label_13254c;
        case 0x132550u: goto label_132550;
        case 0x132554u: goto label_132554;
        case 0x132558u: goto label_132558;
        case 0x13255cu: goto label_13255c;
        case 0x132560u: goto label_132560;
        case 0x132564u: goto label_132564;
        case 0x132568u: goto label_132568;
        case 0x13256cu: goto label_13256c;
        case 0x132570u: goto label_132570;
        case 0x132574u: goto label_132574;
        case 0x132578u: goto label_132578;
        case 0x13257cu: goto label_13257c;
        case 0x132580u: goto label_132580;
        case 0x132584u: goto label_132584;
        case 0x132588u: goto label_132588;
        case 0x13258cu: goto label_13258c;
        case 0x132590u: goto label_132590;
        case 0x132594u: goto label_132594;
        case 0x132598u: goto label_132598;
        case 0x13259cu: goto label_13259c;
        case 0x1325a0u: goto label_1325a0;
        case 0x1325a4u: goto label_1325a4;
        case 0x1325a8u: goto label_1325a8;
        case 0x1325acu: goto label_1325ac;
        case 0x1325b0u: goto label_1325b0;
        case 0x1325b4u: goto label_1325b4;
        case 0x1325b8u: goto label_1325b8;
        case 0x1325bcu: goto label_1325bc;
        case 0x1325c0u: goto label_1325c0;
        case 0x1325c4u: goto label_1325c4;
        case 0x1325c8u: goto label_1325c8;
        case 0x1325ccu: goto label_1325cc;
        case 0x1325d0u: goto label_1325d0;
        case 0x1325d4u: goto label_1325d4;
        case 0x1325d8u: goto label_1325d8;
        case 0x1325dcu: goto label_1325dc;
        case 0x1325e0u: goto label_1325e0;
        case 0x1325e4u: goto label_1325e4;
        case 0x1325e8u: goto label_1325e8;
        case 0x1325ecu: goto label_1325ec;
        case 0x1325f0u: goto label_1325f0;
        case 0x1325f4u: goto label_1325f4;
        case 0x1325f8u: goto label_1325f8;
        case 0x1325fcu: goto label_1325fc;
        case 0x132600u: goto label_132600;
        case 0x132604u: goto label_132604;
        case 0x132608u: goto label_132608;
        case 0x13260cu: goto label_13260c;
        case 0x132610u: goto label_132610;
        case 0x132614u: goto label_132614;
        case 0x132618u: goto label_132618;
        case 0x13261cu: goto label_13261c;
        case 0x132620u: goto label_132620;
        case 0x132624u: goto label_132624;
        case 0x132628u: goto label_132628;
        case 0x13262cu: goto label_13262c;
        case 0x132630u: goto label_132630;
        case 0x132634u: goto label_132634;
        case 0x132638u: goto label_132638;
        case 0x13263cu: goto label_13263c;
        case 0x132640u: goto label_132640;
        case 0x132644u: goto label_132644;
        case 0x132648u: goto label_132648;
        case 0x13264cu: goto label_13264c;
        case 0x132650u: goto label_132650;
        case 0x132654u: goto label_132654;
        case 0x132658u: goto label_132658;
        case 0x13265cu: goto label_13265c;
        case 0x132660u: goto label_132660;
        case 0x132664u: goto label_132664;
        case 0x132668u: goto label_132668;
        case 0x13266cu: goto label_13266c;
        case 0x132670u: goto label_132670;
        case 0x132674u: goto label_132674;
        case 0x132678u: goto label_132678;
        case 0x13267cu: goto label_13267c;
        case 0x132680u: goto label_132680;
        case 0x132684u: goto label_132684;
        case 0x132688u: goto label_132688;
        case 0x13268cu: goto label_13268c;
        case 0x132690u: goto label_132690;
        case 0x132694u: goto label_132694;
        case 0x132698u: goto label_132698;
        case 0x13269cu: goto label_13269c;
        case 0x1326a0u: goto label_1326a0;
        case 0x1326a4u: goto label_1326a4;
        case 0x1326a8u: goto label_1326a8;
        case 0x1326acu: goto label_1326ac;
        case 0x1326b0u: goto label_1326b0;
        case 0x1326b4u: goto label_1326b4;
        case 0x1326b8u: goto label_1326b8;
        case 0x1326bcu: goto label_1326bc;
        case 0x1326c0u: goto label_1326c0;
        case 0x1326c4u: goto label_1326c4;
        case 0x1326c8u: goto label_1326c8;
        case 0x1326ccu: goto label_1326cc;
        case 0x1326d0u: goto label_1326d0;
        case 0x1326d4u: goto label_1326d4;
        case 0x1326d8u: goto label_1326d8;
        case 0x1326dcu: goto label_1326dc;
        case 0x1326e0u: goto label_1326e0;
        case 0x1326e4u: goto label_1326e4;
        case 0x1326e8u: goto label_1326e8;
        case 0x1326ecu: goto label_1326ec;
        case 0x1326f0u: goto label_1326f0;
        case 0x1326f4u: goto label_1326f4;
        case 0x1326f8u: goto label_1326f8;
        case 0x1326fcu: goto label_1326fc;
        case 0x132700u: goto label_132700;
        case 0x132704u: goto label_132704;
        case 0x132708u: goto label_132708;
        case 0x13270cu: goto label_13270c;
        case 0x132710u: goto label_132710;
        case 0x132714u: goto label_132714;
        case 0x132718u: goto label_132718;
        case 0x13271cu: goto label_13271c;
        case 0x132720u: goto label_132720;
        case 0x132724u: goto label_132724;
        case 0x132728u: goto label_132728;
        case 0x13272cu: goto label_13272c;
        case 0x132730u: goto label_132730;
        case 0x132734u: goto label_132734;
        case 0x132738u: goto label_132738;
        case 0x13273cu: goto label_13273c;
        case 0x132740u: goto label_132740;
        case 0x132744u: goto label_132744;
        case 0x132748u: goto label_132748;
        case 0x13274cu: goto label_13274c;
        case 0x132750u: goto label_132750;
        case 0x132754u: goto label_132754;
        case 0x132758u: goto label_132758;
        case 0x13275cu: goto label_13275c;
        case 0x132760u: goto label_132760;
        case 0x132764u: goto label_132764;
        case 0x132768u: goto label_132768;
        case 0x13276cu: goto label_13276c;
        case 0x132770u: goto label_132770;
        case 0x132774u: goto label_132774;
        case 0x132778u: goto label_132778;
        case 0x13277cu: goto label_13277c;
        case 0x132780u: goto label_132780;
        case 0x132784u: goto label_132784;
        case 0x132788u: goto label_132788;
        case 0x13278cu: goto label_13278c;
        case 0x132790u: goto label_132790;
        case 0x132794u: goto label_132794;
        case 0x132798u: goto label_132798;
        case 0x13279cu: goto label_13279c;
        case 0x1327a0u: goto label_1327a0;
        case 0x1327a4u: goto label_1327a4;
        case 0x1327a8u: goto label_1327a8;
        case 0x1327acu: goto label_1327ac;
        case 0x1327b0u: goto label_1327b0;
        case 0x1327b4u: goto label_1327b4;
        case 0x1327b8u: goto label_1327b8;
        case 0x1327bcu: goto label_1327bc;
        case 0x1327c0u: goto label_1327c0;
        case 0x1327c4u: goto label_1327c4;
        case 0x1327c8u: goto label_1327c8;
        case 0x1327ccu: goto label_1327cc;
        case 0x1327d0u: goto label_1327d0;
        case 0x1327d4u: goto label_1327d4;
        case 0x1327d8u: goto label_1327d8;
        case 0x1327dcu: goto label_1327dc;
        case 0x1327e0u: goto label_1327e0;
        case 0x1327e4u: goto label_1327e4;
        case 0x1327e8u: goto label_1327e8;
        case 0x1327ecu: goto label_1327ec;
        case 0x1327f0u: goto label_1327f0;
        case 0x1327f4u: goto label_1327f4;
        case 0x1327f8u: goto label_1327f8;
        case 0x1327fcu: goto label_1327fc;
        case 0x132800u: goto label_132800;
        case 0x132804u: goto label_132804;
        case 0x132808u: goto label_132808;
        case 0x13280cu: goto label_13280c;
        case 0x132810u: goto label_132810;
        case 0x132814u: goto label_132814;
        case 0x132818u: goto label_132818;
        case 0x13281cu: goto label_13281c;
        case 0x132820u: goto label_132820;
        case 0x132824u: goto label_132824;
        case 0x132828u: goto label_132828;
        case 0x13282cu: goto label_13282c;
        case 0x132830u: goto label_132830;
        case 0x132834u: goto label_132834;
        case 0x132838u: goto label_132838;
        case 0x13283cu: goto label_13283c;
        case 0x132840u: goto label_132840;
        case 0x132844u: goto label_132844;
        case 0x132848u: goto label_132848;
        case 0x13284cu: goto label_13284c;
        case 0x132850u: goto label_132850;
        case 0x132854u: goto label_132854;
        case 0x132858u: goto label_132858;
        case 0x13285cu: goto label_13285c;
        case 0x132860u: goto label_132860;
        case 0x132864u: goto label_132864;
        case 0x132868u: goto label_132868;
        case 0x13286cu: goto label_13286c;
        case 0x132870u: goto label_132870;
        case 0x132874u: goto label_132874;
        case 0x132878u: goto label_132878;
        case 0x13287cu: goto label_13287c;
        case 0x132880u: goto label_132880;
        case 0x132884u: goto label_132884;
        case 0x132888u: goto label_132888;
        case 0x13288cu: goto label_13288c;
        default: break;
    }

    ctx->pc = 0x1324d8u;

label_1324d8:
    // 0x1324d8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1324d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1324dc:
    // 0x1324dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1324dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1324e0:
    // 0x1324e0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1324e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1324e4:
    // 0x1324e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1324e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1324e8:
    // 0x1324e8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1324e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1324ec:
    // 0x1324ec: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x1324ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
label_1324f0:
    // 0x1324f0: 0x26051610  addiu       $a1, $s0, 0x1610
    ctx->pc = 0x1324f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5648));
label_1324f4:
    // 0x1324f4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1324f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1324f8:
    // 0x1324f8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1324f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_1324fc:
    // 0x1324fc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1324fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_132500:
    // 0x132500: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x132500u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_132504:
    // 0x132504: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x132504u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_132508:
    // 0x132508: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x132508u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_13250c:
    // 0x13250c: 0xc067fca  jal         func_19FF28
label_132510:
    if (ctx->pc == 0x132510u) {
        ctx->pc = 0x132510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13250Cu;
        // 0x132510: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x132514u;
        goto label_132514;
    }
    ctx->pc = 0x13250Cu;
    SET_GPR_U32(ctx, 31, 0x132514u);
    ctx->pc = 0x132510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13250Cu;
    // 0x132510: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x13250Cu, 0x132514u)) {
        return;
    }
    ctx->pc = 0x132514u;
label_132514:
    // 0x132514: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x132514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_132518:
    // 0x132518: 0x26050044  addiu       $a1, $s0, 0x44
    ctx->pc = 0x132518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_13251c:
    // 0x13251c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x13251cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_132520:
    // 0x132520: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x132520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_132524:
    // 0x132524: 0x40f809  jalr        $v0
label_132528:
    if (ctx->pc == 0x132528u) {
        ctx->pc = 0x132528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132524u;
        // 0x132528: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13252Cu;
        goto label_13252c;
    }
    ctx->pc = 0x132524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13252Cu);
        ctx->pc = 0x132528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132524u;
        // 0x132528: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132524u, 0x13252Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13252Cu;
label_13252c:
    // 0x13252c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_132530:
    if (ctx->pc == 0x132530u) {
        ctx->pc = 0x132530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13252Cu;
        // 0x132530: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132534u;
        goto label_132534;
    }
    ctx->pc = 0x13252Cu;
    {
        const bool branch_taken_0x13252c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13252Cu;
        // 0x132530: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13252c) {
            ctx->pc = 0x132544u;
            goto label_132544;
        }
    }
    ctx->pc = 0x132534u;
label_132534:
    // 0x132534: 0x8e02153c  lw          $v0, 0x153C($s0)
    ctx->pc = 0x132534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5436)));
label_132538:
    // 0x132538: 0x544000ca  bnel        $v0, $zero, . + 4 + (0xCA << 2)
label_13253c:
    if (ctx->pc == 0x13253Cu) {
        ctx->pc = 0x13253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132538u;
        // 0x13253c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132540u;
        goto label_132540;
    }
    ctx->pc = 0x132538u;
    {
        const bool branch_taken_0x132538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132538) {
            ctx->pc = 0x13253Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132538u;
            // 0x13253c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132864u;
            goto label_132864;
        }
    }
    ctx->pc = 0x132540u;
label_132540:
    // 0x132540: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x132540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_132544:
    // 0x132544: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x132544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_132548:
    // 0x132548: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x132548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13254c:
    // 0x13254c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13254cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132550:
    // 0x132550: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x132550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_132554:
    // 0x132554: 0xc457de08  lwc1        $f23, -0x21F8($v0)
    ctx->pc = 0x132554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_132558:
    // 0x132558: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x132558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13255c:
    // 0x13255c: 0xc0c493d  jal         func_3124F4
label_132560:
    if (ctx->pc == 0x132560u) {
        ctx->pc = 0x132560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13255Cu;
        // 0x132560: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132564u;
        goto label_132564;
    }
    ctx->pc = 0x13255Cu;
    SET_GPR_U32(ctx, 31, 0x132564u);
    ctx->pc = 0x132560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13255Cu;
    // 0x132560: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x13255Cu, 0x132564u)) {
        return;
    }
    ctx->pc = 0x132564u;
label_132564:
    // 0x132564: 0xc0691d8  jal         func_1A4760
label_132568:
    if (ctx->pc == 0x132568u) {
        ctx->pc = 0x13256Cu;
        goto label_13256c;
    }
    ctx->pc = 0x132564u;
    SET_GPR_U32(ctx, 31, 0x13256Cu);
    ctx->pc = 0x1A4760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4760u, 0x132564u, 0x13256Cu)) {
        return;
    }
    ctx->pc = 0x13256Cu;
label_13256c:
    // 0x13256c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_132570:
    if (ctx->pc == 0x132570u) {
        ctx->pc = 0x132570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13256Cu;
        // 0x132570: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132574u;
        goto label_132574;
    }
    ctx->pc = 0x13256Cu;
    {
        const bool branch_taken_0x13256c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13256Cu;
        // 0x132570: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13256c) {
            ctx->pc = 0x1325BCu;
            goto label_1325bc;
        }
    }
    ctx->pc = 0x132574u;
label_132574:
    // 0x132574: 0xc0691ec  jal         func_1A47B0
label_132578:
    if (ctx->pc == 0x132578u) {
        ctx->pc = 0x13257Cu;
        goto label_13257c;
    }
    ctx->pc = 0x132574u;
    SET_GPR_U32(ctx, 31, 0x13257Cu);
    ctx->pc = 0x1A47B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A47B0u, 0x132574u, 0x13257Cu)) {
        return;
    }
    ctx->pc = 0x13257Cu;
label_13257c:
    // 0x13257c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13257cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132580:
    // 0x132580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132584:
    // 0x132584: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x132584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_132588:
    // 0x132588: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_13258c:
    if (ctx->pc == 0x13258Cu) {
        ctx->pc = 0x13258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132588u;
        // 0x13258c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132590u;
        goto label_132590;
    }
    ctx->pc = 0x132588u;
    {
        const bool branch_taken_0x132588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132588u;
        // 0x13258c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132588) {
            ctx->pc = 0x1325B8u;
            goto label_1325b8;
        }
    }
    ctx->pc = 0x132590u;
label_132590:
    // 0x132590: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x132590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_132594:
    // 0x132594: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x132594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_132598:
    // 0x132598: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x132598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13259c:
    // 0x13259c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x13259cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1325a0:
    // 0x1325a0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1325a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1325a4:
    // 0x1325a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1325a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1325a8:
    // 0x1325a8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1325a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1325ac:
    // 0x1325ac: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1325acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1325b0:
    // 0x1325b0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1325b4:
    if (ctx->pc == 0x1325B4u) {
        ctx->pc = 0x1325B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1325B0u;
        // 0x1325b4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1325B8u;
        goto label_1325b8;
    }
    ctx->pc = 0x1325B0u;
    {
        const bool branch_taken_0x1325b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1325B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1325B0u;
        // 0x1325b4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1325b0) {
            ctx->pc = 0x132598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132598;
        }
    }
    ctx->pc = 0x1325B8u;
label_1325b8:
    // 0x1325b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1325b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1325bc:
    // 0x1325bc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1325bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1325c0:
    // 0x1325c0: 0x1062009f  beq         $v1, $v0, . + 4 + (0x9F << 2)
label_1325c4:
    if (ctx->pc == 0x1325C4u) {
        ctx->pc = 0x1325C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1325C0u;
        // 0x1325c4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1325C8u;
        goto label_1325c8;
    }
    ctx->pc = 0x1325C0u;
    {
        const bool branch_taken_0x1325c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1325C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1325C0u;
        // 0x1325c4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1325c0) {
            ctx->pc = 0x132840u;
            goto label_132840;
        }
    }
    ctx->pc = 0x1325C8u;
label_1325c8:
    // 0x1325c8: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x1325c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1325cc:
    // 0x1325cc: 0x0  nop
    ctx->pc = 0x1325ccu;
    // NOP
label_1325d0:
    // 0x1325d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1325d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1325d4:
    // 0x1325d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1325d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1325d8:
    // 0x1325d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1325d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1325dc:
    // 0x1325dc: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1325dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_1325e0:
    // 0x1325e0: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1325e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1325e4:
    // 0x1325e4: 0x84650160  lh          $a1, 0x160($v1)
    ctx->pc = 0x1325e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 352)));
label_1325e8:
    // 0x1325e8: 0x8c620164  lw          $v0, 0x164($v1)
    ctx->pc = 0x1325e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 356)));
label_1325ec:
    // 0x1325ec: 0x40f809  jalr        $v0
label_1325f0:
    if (ctx->pc == 0x1325F0u) {
        ctx->pc = 0x1325F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1325ECu;
        // 0x1325f0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1325F4u;
        goto label_1325f4;
    }
    ctx->pc = 0x1325ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1325F4u);
        ctx->pc = 0x1325F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1325ECu;
        // 0x1325f0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1325ECu, 0x1325F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1325F4u;
label_1325f4:
    // 0x1325f4: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
label_1325f8:
    if (ctx->pc == 0x1325F8u) {
        ctx->pc = 0x1325F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1325F4u;
        // 0x1325f8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1325FCu;
        goto label_1325fc;
    }
    ctx->pc = 0x1325F4u;
    {
        const bool branch_taken_0x1325f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1325F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1325F4u;
        // 0x1325f8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1325f4) {
            ctx->pc = 0x132818u;
            goto label_132818;
        }
    }
    ctx->pc = 0x1325FCu;
label_1325fc:
    // 0x1325fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1325fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_132600:
    // 0x132600: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x132600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_132604:
    // 0x132604: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x132604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_132608:
    // 0x132608: 0x8c432d1c  lw          $v1, 0x2D1C($v0)
    ctx->pc = 0x132608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11548)));
label_13260c:
    // 0x13260c: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
label_132610:
    if (ctx->pc == 0x132610u) {
        ctx->pc = 0x132610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13260Cu;
        // 0x132610: 0x24450084  addiu       $a1, $v0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132614u;
        goto label_132614;
    }
    ctx->pc = 0x13260Cu;
    {
        const bool branch_taken_0x13260c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x132610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13260Cu;
        // 0x132610: 0x24450084  addiu       $a1, $v0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13260c) {
            ctx->pc = 0x132818u;
            goto label_132818;
        }
    }
    ctx->pc = 0x132614u;
label_132614:
    // 0x132614: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x132614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_132618:
    // 0x132618: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x132618u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_13261c:
    // 0x13261c: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x13261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_132620:
    // 0x132620: 0x40f809  jalr        $v0
label_132624:
    if (ctx->pc == 0x132624u) {
        ctx->pc = 0x132624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132620u;
        // 0x132624: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132628u;
        goto label_132628;
    }
    ctx->pc = 0x132620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132628u);
        ctx->pc = 0x132624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132620u;
        // 0x132624: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132620u, 0x132628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x132628u;
label_132628:
    // 0x132628: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_13262c:
    if (ctx->pc == 0x13262Cu) {
        ctx->pc = 0x13262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132628u;
        // 0x13262c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132630u;
        goto label_132630;
    }
    ctx->pc = 0x132628u;
    {
        const bool branch_taken_0x132628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132628u;
        // 0x13262c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132628) {
            ctx->pc = 0x132818u;
            goto label_132818;
        }
    }
    ctx->pc = 0x132630u;
label_132630:
    // 0x132630: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x132630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_132634:
    // 0x132634: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x132634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_132638:
    // 0x132638: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x132638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13263c:
    // 0x13263c: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x13263cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_132640:
    // 0x132640: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x132640u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_132644:
    // 0x132644: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x132644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_132648:
    // 0x132648: 0x40f809  jalr        $v0
label_13264c:
    if (ctx->pc == 0x13264Cu) {
        ctx->pc = 0x13264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132648u;
        // 0x13264c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132650u;
        goto label_132650;
    }
    ctx->pc = 0x132648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132650u);
        ctx->pc = 0x13264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132648u;
        // 0x13264c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132648u, 0x132650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x132650u;
label_132650:
    // 0x132650: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_132654:
    if (ctx->pc == 0x132654u) {
        ctx->pc = 0x132654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132650u;
        // 0x132654: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132658u;
        goto label_132658;
    }
    ctx->pc = 0x132650u;
    {
        const bool branch_taken_0x132650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132650u;
        // 0x132654: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132650) {
            ctx->pc = 0x132818u;
            goto label_132818;
        }
    }
    ctx->pc = 0x132658u;
label_132658:
    // 0x132658: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x132658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_13265c:
    // 0x13265c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13265cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_132660:
    // 0x132660: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x132660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_132664:
    // 0x132664: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x132664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_132668:
    // 0x132668: 0xc4742d40  lwc1        $f20, 0x2D40($v1)
    ctx->pc = 0x132668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 11584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13266c:
    // 0x13266c: 0xc04f0cc  jal         func_13C330
label_132670:
    if (ctx->pc == 0x132670u) {
        ctx->pc = 0x132670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13266Cu;
        // 0x132670: 0xc4762d44  lwc1        $f22, 0x2D44($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 11588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x132674u;
        goto label_132674;
    }
    ctx->pc = 0x13266Cu;
    SET_GPR_U32(ctx, 31, 0x132674u);
    ctx->pc = 0x132670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13266Cu;
    // 0x132670: 0xc4762d44  lwc1        $f22, 0x2D44($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 11588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x13266Cu, 0x132674u)) {
        return;
    }
    ctx->pc = 0x132674u;
label_132674:
    // 0x132674: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x132674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_132678:
    // 0x132678: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x132678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_13267c:
    // 0x13267c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x13267cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_132680:
    // 0x132680: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x132680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_132684:
    // 0x132684: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x132684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_132688:
    // 0x132688: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x132688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
label_13268c:
    // 0x13268c: 0xc04f0cc  jal         func_13C330
label_132690:
    if (ctx->pc == 0x132690u) {
        ctx->pc = 0x132690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13268Cu;
        // 0x132690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132694u;
        goto label_132694;
    }
    ctx->pc = 0x13268Cu;
    SET_GPR_U32(ctx, 31, 0x132694u);
    ctx->pc = 0x132690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13268Cu;
    // 0x132690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x13268Cu, 0x132694u)) {
        return;
    }
    ctx->pc = 0x132694u;
label_132694:
    // 0x132694: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x132694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_132698:
    // 0x132698: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x132698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_13269c:
    // 0x13269c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x13269cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1326a0:
    // 0x1326a0: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x1326a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1326a4:
    // 0x1326a4: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x1326a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1326a8:
    // 0x1326a8: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1326a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_1326ac:
    // 0x1326ac: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1326acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1326b0:
    // 0x1326b0: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x1326b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1326b4:
    // 0x1326b4: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1326b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1326b8:
    // 0x1326b8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1326b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1326bc:
    // 0x1326bc: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x1326bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1326c0:
    // 0x1326c0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1326c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1326c4:
    // 0x1326c4: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x1326c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1326c8:
    // 0x1326c8: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1326c8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_1326cc:
    // 0x1326cc: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x1326ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1326d0:
    // 0x1326d0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1326d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1326d4:
    // 0x1326d4: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1326d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1326d8:
    // 0x1326d8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1326d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1326dc:
    // 0x1326dc: 0x6ba70067  ldl         $a3, 0x67($sp)
    ctx->pc = 0x1326dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1326e0:
    // 0x1326e0: 0x6fa70060  ldr         $a3, 0x60($sp)
    ctx->pc = 0x1326e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1326e4:
    // 0x1326e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1326e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1326e8:
    // 0x1326e8: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x1326e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1326ec:
    // 0x1326ec: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x1326ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1326f0:
    // 0x1326f0: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1326f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_1326f4:
    // 0x1326f4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1326f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1326f8:
    // 0x1326f8: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x1326f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1326fc:
    // 0x1326fc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1326fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_132700:
    // 0x132700: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x132700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132704:
    // 0x132704: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x132704u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_132708:
    // 0x132708: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x132708u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_13270c:
    // 0x13270c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x13270cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_132710:
    // 0x132710: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x132710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_132714:
    // 0x132714: 0x0  nop
    ctx->pc = 0x132714u;
    // NOP
label_132718:
    // 0x132718: 0x0  nop
    ctx->pc = 0x132718u;
    // NOP
label_13271c:
    // 0x13271c: 0x46000544  c1          0x544
    ctx->pc = 0x13271cu;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
label_132720:
    // 0x132720: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x132720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_132724:
    // 0x132724: 0x0  nop
    ctx->pc = 0x132724u;
    // NOP
label_132728:
    // 0x132728: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
label_13272c:
    if (ctx->pc == 0x13272Cu) {
        ctx->pc = 0x13272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132728u;
        // 0x13272c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132730u;
        goto label_132730;
    }
    ctx->pc = 0x132728u;
    {
        const bool branch_taken_0x132728 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132728u;
        // 0x13272c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132728) {
            ctx->pc = 0x132818u;
            goto label_132818;
        }
    }
    ctx->pc = 0x132730u;
label_132730:
    // 0x132730: 0xc04642c  jal         func_1190B0
label_132734:
    if (ctx->pc == 0x132734u) {
        ctx->pc = 0x132734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132730u;
        // 0x132734: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132738u;
        goto label_132738;
    }
    ctx->pc = 0x132730u;
    SET_GPR_U32(ctx, 31, 0x132738u);
    ctx->pc = 0x132734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132730u;
    // 0x132734: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x132730u, 0x132738u)) {
        return;
    }
    ctx->pc = 0x132738u;
label_132738:
    // 0x132738: 0x0  nop
    ctx->pc = 0x132738u;
    // NOP
label_13273c:
    // 0x13273c: 0x0  nop
    ctx->pc = 0x13273cu;
    // NOP
label_132740:
    // 0x132740: 0x46000044  c1          0x44
    ctx->pc = 0x132740u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_132744:
    // 0x132744: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x132744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_132748:
    // 0x132748: 0x0  nop
    ctx->pc = 0x132748u;
    // NOP
label_13274c:
    // 0x13274c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13274cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_132750:
    // 0x132750: 0x0  nop
    ctx->pc = 0x132750u;
    // NOP
label_132754:
    // 0x132754: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
label_132758:
    if (ctx->pc == 0x132758u) {
        ctx->pc = 0x132758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132754u;
        // 0x132758: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13275Cu;
        goto label_13275c;
    }
    ctx->pc = 0x132754u;
    {
        const bool branch_taken_0x132754 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x132758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132754u;
        // 0x132758: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132754) {
            ctx->pc = 0x132800u;
            goto label_132800;
        }
    }
    ctx->pc = 0x13275Cu;
label_13275c:
    // 0x13275c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x13275cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132760:
    // 0x132760: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x132760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132764:
    // 0x132764: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x132764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_132768:
    // 0x132768: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x132768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_13276c:
    // 0x13276c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x13276cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_132770:
    // 0x132770: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x132770u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_132774:
    // 0x132774: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x132774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_132778:
    // 0x132778: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x132778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_13277c:
    // 0x13277c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x13277cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_132780:
    // 0x132780: 0xc04f0f0  jal         func_13C3C0
label_132784:
    if (ctx->pc == 0x132784u) {
        ctx->pc = 0x132784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132780u;
        // 0x132784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132788u;
        goto label_132788;
    }
    ctx->pc = 0x132780u;
    SET_GPR_U32(ctx, 31, 0x132788u);
    ctx->pc = 0x132784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132780u;
    // 0x132784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x132780u, 0x132788u)) {
        return;
    }
    ctx->pc = 0x132788u;
label_132788:
    // 0x132788: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x132788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13278c:
    // 0x13278c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x13278cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_132790:
    // 0x132790: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x132790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_132794:
    // 0x132794: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x132794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_132798:
    // 0x132798: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x132798u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_13279c:
    // 0x13279c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x13279cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1327a0:
    // 0x1327a0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1327a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1327a4:
    // 0x1327a4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1327a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1327a8:
    // 0x1327a8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1327a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_1327ac:
    // 0x1327ac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1327acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1327b0:
    // 0x1327b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1327b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1327b4:
    // 0x1327b4: 0x4601b036  c.le.s      $f22, $f1
    ctx->pc = 0x1327b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1327b8:
    // 0x1327b8: 0x0  nop
    ctx->pc = 0x1327b8u;
    // NOP
label_1327bc:
    // 0x1327bc: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_1327c0:
    if (ctx->pc == 0x1327C0u) {
        ctx->pc = 0x1327C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1327BCu;
        // 0x1327c0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1327C4u;
        goto label_1327c4;
    }
    ctx->pc = 0x1327BCu;
    {
        const bool branch_taken_0x1327bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1327C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1327BCu;
        // 0x1327c0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1327bc) {
            ctx->pc = 0x13281Cu;
            goto label_13281c;
        }
    }
    ctx->pc = 0x1327C4u;
label_1327c4:
    // 0x1327c4: 0x4617a834  c.lt.s      $f21, $f23
    ctx->pc = 0x1327c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1327c8:
    // 0x1327c8: 0x0  nop
    ctx->pc = 0x1327c8u;
    // NOP
label_1327cc:
    // 0x1327cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1327d0:
    if (ctx->pc == 0x1327D0u) {
        ctx->pc = 0x1327D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1327CCu;
        // 0x1327d0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1327D4u;
        goto label_1327d4;
    }
    ctx->pc = 0x1327CCu;
    {
        const bool branch_taken_0x1327cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1327D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1327CCu;
        // 0x1327d0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1327cc) {
            ctx->pc = 0x1327E0u;
            goto label_1327e0;
        }
    }
    ctx->pc = 0x1327D4u;
label_1327d4:
    // 0x1327d4: 0x4600adc6  mov.s       $f23, $f21
    ctx->pc = 0x1327d4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[21]);
label_1327d8:
    // 0x1327d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1327d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1327dc:
    // 0x1327dc: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1327dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1327e0:
    // 0x1327e0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1327e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1327e4:
    // 0x1327e4: 0x8e04153c  lw          $a0, 0x153C($s0)
    ctx->pc = 0x1327e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5436)));
label_1327e8:
    // 0x1327e8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1327e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1327ec:
    // 0x1327ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1327ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1327f0:
    // 0x1327f0: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
label_1327f4:
    if (ctx->pc == 0x1327F4u) {
        ctx->pc = 0x1327F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1327F0u;
        // 0x1327f4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1327F8u;
        goto label_1327f8;
    }
    ctx->pc = 0x1327F0u;
    {
        const bool branch_taken_0x1327f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1327F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1327F0u;
        // 0x1327f4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1327f0) {
            ctx->pc = 0x13281Cu;
            goto label_13281c;
        }
    }
    ctx->pc = 0x1327F8u;
label_1327f8:
    // 0x1327f8: 0x10000011  b           . + 4 + (0x11 << 2)
label_1327fc:
    if (ctx->pc == 0x1327FCu) {
        ctx->pc = 0x1327FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1327F8u;
        // 0x1327fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132800u;
        goto label_132800;
    }
    ctx->pc = 0x1327F8u;
    {
        const bool branch_taken_0x1327f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1327FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1327F8u;
        // 0x1327fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1327f8) {
            ctx->pc = 0x132840u;
            goto label_132840;
        }
    }
    ctx->pc = 0x132800u;
label_132800:
    // 0x132800: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x132800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_132804:
    // 0x132804: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x132804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_132808:
    // 0x132808: 0x0  nop
    ctx->pc = 0x132808u;
    // NOP
label_13280c:
    // 0x13280c: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x13280cu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_132810:
    // 0x132810: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
label_132814:
    if (ctx->pc == 0x132814u) {
        ctx->pc = 0x132814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132810u;
        // 0x132814: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x132818u;
        goto label_132818;
    }
    ctx->pc = 0x132810u;
    {
        const bool branch_taken_0x132810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132810u;
        // 0x132814: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132810) {
            ctx->pc = 0x132760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132760;
        }
    }
    ctx->pc = 0x132818u;
label_132818:
    // 0x132818: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x132818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13281c:
    // 0x13281c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x13281cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_132820:
    // 0x132820: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x132820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_132824:
    // 0x132824: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_132828:
    if (ctx->pc == 0x132828u) {
        ctx->pc = 0x132828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132824u;
        // 0x132828: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13282Cu;
        goto label_13282c;
    }
    ctx->pc = 0x132824u;
    {
        const bool branch_taken_0x132824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132824u;
        // 0x132828: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132824) {
            ctx->pc = 0x132830u;
            goto label_132830;
        }
    }
    ctx->pc = 0x13282Cu;
label_13282c:
    // 0x13282c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x13282cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_132830:
    // 0x132830: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x132830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_132834:
    // 0x132834: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x132834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_132838:
    // 0x132838: 0x1462ff65  bne         $v1, $v0, . + 4 + (-0x9B << 2)
label_13283c:
    if (ctx->pc == 0x13283Cu) {
        ctx->pc = 0x13283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132838u;
        // 0x13283c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132840u;
        goto label_132840;
    }
    ctx->pc = 0x132838u;
    {
        const bool branch_taken_0x132838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132838u;
        // 0x13283c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132838) {
            ctx->pc = 0x1325D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1325d0;
        }
    }
    ctx->pc = 0x132840u;
label_132840:
    // 0x132840: 0x56600001  bnel        $s3, $zero, . + 4 + (0x1 << 2)
label_132844:
    if (ctx->pc == 0x132844u) {
        ctx->pc = 0x132844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132840u;
        // 0x132844: 0xae12153c  sw          $s2, 0x153C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5436), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132848u;
        goto label_132848;
    }
    ctx->pc = 0x132840u;
    {
        const bool branch_taken_0x132840 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x132840) {
            ctx->pc = 0x132844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132840u;
            // 0x132844: 0xae12153c  sw          $s2, 0x153C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 5436), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132848u;
            goto label_132848;
        }
    }
    ctx->pc = 0x132848u;
label_132848:
    // 0x132848: 0x8e02153c  lw          $v0, 0x153C($s0)
    ctx->pc = 0x132848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5436)));
label_13284c:
    // 0x13284c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_132850:
    if (ctx->pc == 0x132850u) {
        ctx->pc = 0x132850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13284Cu;
        // 0x132850: 0x26051610  addiu       $a1, $s0, 0x1610 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132854u;
        goto label_132854;
    }
    ctx->pc = 0x13284Cu;
    {
        const bool branch_taken_0x13284c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13284Cu;
        // 0x132850: 0x26051610  addiu       $a1, $s0, 0x1610 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13284c) {
            ctx->pc = 0x132860u;
            goto label_132860;
        }
    }
    ctx->pc = 0x132854u;
label_132854:
    // 0x132854: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x132854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
label_132858:
    // 0x132858: 0xc067fca  jal         func_19FF28
label_13285c:
    if (ctx->pc == 0x13285Cu) {
        ctx->pc = 0x13285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132858u;
        // 0x13285c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132860u;
        goto label_132860;
    }
    ctx->pc = 0x132858u;
    SET_GPR_U32(ctx, 31, 0x132860u);
    ctx->pc = 0x13285Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132858u;
    // 0x13285c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x132858u, 0x132860u)) {
        return;
    }
    ctx->pc = 0x132860u;
label_132860:
    // 0x132860: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x132860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_132864:
    // 0x132864: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x132864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_132868:
    // 0x132868: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x132868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13286c:
    // 0x13286c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x13286cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_132870:
    // 0x132870: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x132870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_132874:
    // 0x132874: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x132874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_132878:
    // 0x132878: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x132878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_13287c:
    // 0x13287c: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x13287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_132880:
    // 0x132880: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x132880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_132884:
    // 0x132884: 0x3e00008  jr          $ra
label_132888:
    if (ctx->pc == 0x132888u) {
        ctx->pc = 0x132888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132884u;
        // 0x132888: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13288Cu;
        goto label_13288c;
    }
    ctx->pc = 0x132884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132884u;
        // 0x132888: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13288Cu;
label_13288c:
    // 0x13288c: 0x0  nop
    ctx->pc = 0x13288cu;
    // NOP
    ctx->pc = 0x132890u;
}
