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

// Function: sub_00282068
// Address: 0x282068 - 0x282660
void sub_00282068_0x282068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282068_0x282068");
#endif

    switch (ctx->pc) {
        case 0x282068u: goto label_282068;
        case 0x28206cu: goto label_28206c;
        case 0x282070u: goto label_282070;
        case 0x282074u: goto label_282074;
        case 0x282078u: goto label_282078;
        case 0x28207cu: goto label_28207c;
        case 0x282080u: goto label_282080;
        case 0x282084u: goto label_282084;
        case 0x282088u: goto label_282088;
        case 0x28208cu: goto label_28208c;
        case 0x282090u: goto label_282090;
        case 0x282094u: goto label_282094;
        case 0x282098u: goto label_282098;
        case 0x28209cu: goto label_28209c;
        case 0x2820a0u: goto label_2820a0;
        case 0x2820a4u: goto label_2820a4;
        case 0x2820a8u: goto label_2820a8;
        case 0x2820acu: goto label_2820ac;
        case 0x2820b0u: goto label_2820b0;
        case 0x2820b4u: goto label_2820b4;
        case 0x2820b8u: goto label_2820b8;
        case 0x2820bcu: goto label_2820bc;
        case 0x2820c0u: goto label_2820c0;
        case 0x2820c4u: goto label_2820c4;
        case 0x2820c8u: goto label_2820c8;
        case 0x2820ccu: goto label_2820cc;
        case 0x2820d0u: goto label_2820d0;
        case 0x2820d4u: goto label_2820d4;
        case 0x2820d8u: goto label_2820d8;
        case 0x2820dcu: goto label_2820dc;
        case 0x2820e0u: goto label_2820e0;
        case 0x2820e4u: goto label_2820e4;
        case 0x2820e8u: goto label_2820e8;
        case 0x2820ecu: goto label_2820ec;
        case 0x2820f0u: goto label_2820f0;
        case 0x2820f4u: goto label_2820f4;
        case 0x2820f8u: goto label_2820f8;
        case 0x2820fcu: goto label_2820fc;
        case 0x282100u: goto label_282100;
        case 0x282104u: goto label_282104;
        case 0x282108u: goto label_282108;
        case 0x28210cu: goto label_28210c;
        case 0x282110u: goto label_282110;
        case 0x282114u: goto label_282114;
        case 0x282118u: goto label_282118;
        case 0x28211cu: goto label_28211c;
        case 0x282120u: goto label_282120;
        case 0x282124u: goto label_282124;
        case 0x282128u: goto label_282128;
        case 0x28212cu: goto label_28212c;
        case 0x282130u: goto label_282130;
        case 0x282134u: goto label_282134;
        case 0x282138u: goto label_282138;
        case 0x28213cu: goto label_28213c;
        case 0x282140u: goto label_282140;
        case 0x282144u: goto label_282144;
        case 0x282148u: goto label_282148;
        case 0x28214cu: goto label_28214c;
        case 0x282150u: goto label_282150;
        case 0x282154u: goto label_282154;
        case 0x282158u: goto label_282158;
        case 0x28215cu: goto label_28215c;
        case 0x282160u: goto label_282160;
        case 0x282164u: goto label_282164;
        case 0x282168u: goto label_282168;
        case 0x28216cu: goto label_28216c;
        case 0x282170u: goto label_282170;
        case 0x282174u: goto label_282174;
        case 0x282178u: goto label_282178;
        case 0x28217cu: goto label_28217c;
        case 0x282180u: goto label_282180;
        case 0x282184u: goto label_282184;
        case 0x282188u: goto label_282188;
        case 0x28218cu: goto label_28218c;
        case 0x282190u: goto label_282190;
        case 0x282194u: goto label_282194;
        case 0x282198u: goto label_282198;
        case 0x28219cu: goto label_28219c;
        case 0x2821a0u: goto label_2821a0;
        case 0x2821a4u: goto label_2821a4;
        case 0x2821a8u: goto label_2821a8;
        case 0x2821acu: goto label_2821ac;
        case 0x2821b0u: goto label_2821b0;
        case 0x2821b4u: goto label_2821b4;
        case 0x2821b8u: goto label_2821b8;
        case 0x2821bcu: goto label_2821bc;
        case 0x2821c0u: goto label_2821c0;
        case 0x2821c4u: goto label_2821c4;
        case 0x2821c8u: goto label_2821c8;
        case 0x2821ccu: goto label_2821cc;
        case 0x2821d0u: goto label_2821d0;
        case 0x2821d4u: goto label_2821d4;
        case 0x2821d8u: goto label_2821d8;
        case 0x2821dcu: goto label_2821dc;
        case 0x2821e0u: goto label_2821e0;
        case 0x2821e4u: goto label_2821e4;
        case 0x2821e8u: goto label_2821e8;
        case 0x2821ecu: goto label_2821ec;
        case 0x2821f0u: goto label_2821f0;
        case 0x2821f4u: goto label_2821f4;
        case 0x2821f8u: goto label_2821f8;
        case 0x2821fcu: goto label_2821fc;
        case 0x282200u: goto label_282200;
        case 0x282204u: goto label_282204;
        case 0x282208u: goto label_282208;
        case 0x28220cu: goto label_28220c;
        case 0x282210u: goto label_282210;
        case 0x282214u: goto label_282214;
        case 0x282218u: goto label_282218;
        case 0x28221cu: goto label_28221c;
        case 0x282220u: goto label_282220;
        case 0x282224u: goto label_282224;
        case 0x282228u: goto label_282228;
        case 0x28222cu: goto label_28222c;
        case 0x282230u: goto label_282230;
        case 0x282234u: goto label_282234;
        case 0x282238u: goto label_282238;
        case 0x28223cu: goto label_28223c;
        case 0x282240u: goto label_282240;
        case 0x282244u: goto label_282244;
        case 0x282248u: goto label_282248;
        case 0x28224cu: goto label_28224c;
        case 0x282250u: goto label_282250;
        case 0x282254u: goto label_282254;
        case 0x282258u: goto label_282258;
        case 0x28225cu: goto label_28225c;
        case 0x282260u: goto label_282260;
        case 0x282264u: goto label_282264;
        case 0x282268u: goto label_282268;
        case 0x28226cu: goto label_28226c;
        case 0x282270u: goto label_282270;
        case 0x282274u: goto label_282274;
        case 0x282278u: goto label_282278;
        case 0x28227cu: goto label_28227c;
        case 0x282280u: goto label_282280;
        case 0x282284u: goto label_282284;
        case 0x282288u: goto label_282288;
        case 0x28228cu: goto label_28228c;
        case 0x282290u: goto label_282290;
        case 0x282294u: goto label_282294;
        case 0x282298u: goto label_282298;
        case 0x28229cu: goto label_28229c;
        case 0x2822a0u: goto label_2822a0;
        case 0x2822a4u: goto label_2822a4;
        case 0x2822a8u: goto label_2822a8;
        case 0x2822acu: goto label_2822ac;
        case 0x2822b0u: goto label_2822b0;
        case 0x2822b4u: goto label_2822b4;
        case 0x2822b8u: goto label_2822b8;
        case 0x2822bcu: goto label_2822bc;
        case 0x2822c0u: goto label_2822c0;
        case 0x2822c4u: goto label_2822c4;
        case 0x2822c8u: goto label_2822c8;
        case 0x2822ccu: goto label_2822cc;
        case 0x2822d0u: goto label_2822d0;
        case 0x2822d4u: goto label_2822d4;
        case 0x2822d8u: goto label_2822d8;
        case 0x2822dcu: goto label_2822dc;
        case 0x2822e0u: goto label_2822e0;
        case 0x2822e4u: goto label_2822e4;
        case 0x2822e8u: goto label_2822e8;
        case 0x2822ecu: goto label_2822ec;
        case 0x2822f0u: goto label_2822f0;
        case 0x2822f4u: goto label_2822f4;
        case 0x2822f8u: goto label_2822f8;
        case 0x2822fcu: goto label_2822fc;
        case 0x282300u: goto label_282300;
        case 0x282304u: goto label_282304;
        case 0x282308u: goto label_282308;
        case 0x28230cu: goto label_28230c;
        case 0x282310u: goto label_282310;
        case 0x282314u: goto label_282314;
        case 0x282318u: goto label_282318;
        case 0x28231cu: goto label_28231c;
        case 0x282320u: goto label_282320;
        case 0x282324u: goto label_282324;
        case 0x282328u: goto label_282328;
        case 0x28232cu: goto label_28232c;
        case 0x282330u: goto label_282330;
        case 0x282334u: goto label_282334;
        case 0x282338u: goto label_282338;
        case 0x28233cu: goto label_28233c;
        case 0x282340u: goto label_282340;
        case 0x282344u: goto label_282344;
        case 0x282348u: goto label_282348;
        case 0x28234cu: goto label_28234c;
        case 0x282350u: goto label_282350;
        case 0x282354u: goto label_282354;
        case 0x282358u: goto label_282358;
        case 0x28235cu: goto label_28235c;
        case 0x282360u: goto label_282360;
        case 0x282364u: goto label_282364;
        case 0x282368u: goto label_282368;
        case 0x28236cu: goto label_28236c;
        case 0x282370u: goto label_282370;
        case 0x282374u: goto label_282374;
        case 0x282378u: goto label_282378;
        case 0x28237cu: goto label_28237c;
        case 0x282380u: goto label_282380;
        case 0x282384u: goto label_282384;
        case 0x282388u: goto label_282388;
        case 0x28238cu: goto label_28238c;
        case 0x282390u: goto label_282390;
        case 0x282394u: goto label_282394;
        case 0x282398u: goto label_282398;
        case 0x28239cu: goto label_28239c;
        case 0x2823a0u: goto label_2823a0;
        case 0x2823a4u: goto label_2823a4;
        case 0x2823a8u: goto label_2823a8;
        case 0x2823acu: goto label_2823ac;
        case 0x2823b0u: goto label_2823b0;
        case 0x2823b4u: goto label_2823b4;
        case 0x2823b8u: goto label_2823b8;
        case 0x2823bcu: goto label_2823bc;
        case 0x2823c0u: goto label_2823c0;
        case 0x2823c4u: goto label_2823c4;
        case 0x2823c8u: goto label_2823c8;
        case 0x2823ccu: goto label_2823cc;
        case 0x2823d0u: goto label_2823d0;
        case 0x2823d4u: goto label_2823d4;
        case 0x2823d8u: goto label_2823d8;
        case 0x2823dcu: goto label_2823dc;
        case 0x2823e0u: goto label_2823e0;
        case 0x2823e4u: goto label_2823e4;
        case 0x2823e8u: goto label_2823e8;
        case 0x2823ecu: goto label_2823ec;
        case 0x2823f0u: goto label_2823f0;
        case 0x2823f4u: goto label_2823f4;
        case 0x2823f8u: goto label_2823f8;
        case 0x2823fcu: goto label_2823fc;
        case 0x282400u: goto label_282400;
        case 0x282404u: goto label_282404;
        case 0x282408u: goto label_282408;
        case 0x28240cu: goto label_28240c;
        case 0x282410u: goto label_282410;
        case 0x282414u: goto label_282414;
        case 0x282418u: goto label_282418;
        case 0x28241cu: goto label_28241c;
        case 0x282420u: goto label_282420;
        case 0x282424u: goto label_282424;
        case 0x282428u: goto label_282428;
        case 0x28242cu: goto label_28242c;
        case 0x282430u: goto label_282430;
        case 0x282434u: goto label_282434;
        case 0x282438u: goto label_282438;
        case 0x28243cu: goto label_28243c;
        case 0x282440u: goto label_282440;
        case 0x282444u: goto label_282444;
        case 0x282448u: goto label_282448;
        case 0x28244cu: goto label_28244c;
        case 0x282450u: goto label_282450;
        case 0x282454u: goto label_282454;
        case 0x282458u: goto label_282458;
        case 0x28245cu: goto label_28245c;
        case 0x282460u: goto label_282460;
        case 0x282464u: goto label_282464;
        case 0x282468u: goto label_282468;
        case 0x28246cu: goto label_28246c;
        case 0x282470u: goto label_282470;
        case 0x282474u: goto label_282474;
        case 0x282478u: goto label_282478;
        case 0x28247cu: goto label_28247c;
        case 0x282480u: goto label_282480;
        case 0x282484u: goto label_282484;
        case 0x282488u: goto label_282488;
        case 0x28248cu: goto label_28248c;
        case 0x282490u: goto label_282490;
        case 0x282494u: goto label_282494;
        case 0x282498u: goto label_282498;
        case 0x28249cu: goto label_28249c;
        case 0x2824a0u: goto label_2824a0;
        case 0x2824a4u: goto label_2824a4;
        case 0x2824a8u: goto label_2824a8;
        case 0x2824acu: goto label_2824ac;
        case 0x2824b0u: goto label_2824b0;
        case 0x2824b4u: goto label_2824b4;
        case 0x2824b8u: goto label_2824b8;
        case 0x2824bcu: goto label_2824bc;
        case 0x2824c0u: goto label_2824c0;
        case 0x2824c4u: goto label_2824c4;
        case 0x2824c8u: goto label_2824c8;
        case 0x2824ccu: goto label_2824cc;
        case 0x2824d0u: goto label_2824d0;
        case 0x2824d4u: goto label_2824d4;
        case 0x2824d8u: goto label_2824d8;
        case 0x2824dcu: goto label_2824dc;
        case 0x2824e0u: goto label_2824e0;
        case 0x2824e4u: goto label_2824e4;
        case 0x2824e8u: goto label_2824e8;
        case 0x2824ecu: goto label_2824ec;
        case 0x2824f0u: goto label_2824f0;
        case 0x2824f4u: goto label_2824f4;
        case 0x2824f8u: goto label_2824f8;
        case 0x2824fcu: goto label_2824fc;
        case 0x282500u: goto label_282500;
        case 0x282504u: goto label_282504;
        case 0x282508u: goto label_282508;
        case 0x28250cu: goto label_28250c;
        case 0x282510u: goto label_282510;
        case 0x282514u: goto label_282514;
        case 0x282518u: goto label_282518;
        case 0x28251cu: goto label_28251c;
        case 0x282520u: goto label_282520;
        case 0x282524u: goto label_282524;
        case 0x282528u: goto label_282528;
        case 0x28252cu: goto label_28252c;
        case 0x282530u: goto label_282530;
        case 0x282534u: goto label_282534;
        case 0x282538u: goto label_282538;
        case 0x28253cu: goto label_28253c;
        case 0x282540u: goto label_282540;
        case 0x282544u: goto label_282544;
        case 0x282548u: goto label_282548;
        case 0x28254cu: goto label_28254c;
        case 0x282550u: goto label_282550;
        case 0x282554u: goto label_282554;
        case 0x282558u: goto label_282558;
        case 0x28255cu: goto label_28255c;
        case 0x282560u: goto label_282560;
        case 0x282564u: goto label_282564;
        case 0x282568u: goto label_282568;
        case 0x28256cu: goto label_28256c;
        case 0x282570u: goto label_282570;
        case 0x282574u: goto label_282574;
        case 0x282578u: goto label_282578;
        case 0x28257cu: goto label_28257c;
        case 0x282580u: goto label_282580;
        case 0x282584u: goto label_282584;
        case 0x282588u: goto label_282588;
        case 0x28258cu: goto label_28258c;
        case 0x282590u: goto label_282590;
        case 0x282594u: goto label_282594;
        case 0x282598u: goto label_282598;
        case 0x28259cu: goto label_28259c;
        case 0x2825a0u: goto label_2825a0;
        case 0x2825a4u: goto label_2825a4;
        case 0x2825a8u: goto label_2825a8;
        case 0x2825acu: goto label_2825ac;
        case 0x2825b0u: goto label_2825b0;
        case 0x2825b4u: goto label_2825b4;
        case 0x2825b8u: goto label_2825b8;
        case 0x2825bcu: goto label_2825bc;
        case 0x2825c0u: goto label_2825c0;
        case 0x2825c4u: goto label_2825c4;
        case 0x2825c8u: goto label_2825c8;
        case 0x2825ccu: goto label_2825cc;
        case 0x2825d0u: goto label_2825d0;
        case 0x2825d4u: goto label_2825d4;
        case 0x2825d8u: goto label_2825d8;
        case 0x2825dcu: goto label_2825dc;
        case 0x2825e0u: goto label_2825e0;
        case 0x2825e4u: goto label_2825e4;
        case 0x2825e8u: goto label_2825e8;
        case 0x2825ecu: goto label_2825ec;
        case 0x2825f0u: goto label_2825f0;
        case 0x2825f4u: goto label_2825f4;
        case 0x2825f8u: goto label_2825f8;
        case 0x2825fcu: goto label_2825fc;
        case 0x282600u: goto label_282600;
        case 0x282604u: goto label_282604;
        case 0x282608u: goto label_282608;
        case 0x28260cu: goto label_28260c;
        case 0x282610u: goto label_282610;
        case 0x282614u: goto label_282614;
        case 0x282618u: goto label_282618;
        case 0x28261cu: goto label_28261c;
        case 0x282620u: goto label_282620;
        case 0x282624u: goto label_282624;
        case 0x282628u: goto label_282628;
        case 0x28262cu: goto label_28262c;
        case 0x282630u: goto label_282630;
        case 0x282634u: goto label_282634;
        case 0x282638u: goto label_282638;
        case 0x28263cu: goto label_28263c;
        case 0x282640u: goto label_282640;
        case 0x282644u: goto label_282644;
        case 0x282648u: goto label_282648;
        case 0x28264cu: goto label_28264c;
        case 0x282650u: goto label_282650;
        case 0x282654u: goto label_282654;
        case 0x282658u: goto label_282658;
        case 0x28265cu: goto label_28265c;
        default: break;
    }

    ctx->pc = 0x282068u;

label_282068:
    // 0x282068: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x282068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_28206c:
    // 0x28206c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x28206cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_282070:
    // 0x282070: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x282070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
label_282074:
    // 0x282074: 0x2442e6e0  addiu       $v0, $v0, -0x1920
    ctx->pc = 0x282074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960864));
label_282078:
    // 0x282078: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x282078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
label_28207c:
    // 0x28207c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x28207cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_282080:
    // 0x282080: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x282080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
label_282084:
    // 0x282084: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x282084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_282088:
    // 0x282088: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x282088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
label_28208c:
    // 0x28208c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28208cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_282090:
    // 0x282090: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x282090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
label_282094:
    // 0x282094: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x282094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_282098:
    // 0x282098: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x282098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
label_28209c:
    // 0x28209c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x28209cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2820a0:
    // 0x2820a0: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x2820a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
label_2820a4:
    // 0x2820a4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2820a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2820a8:
    // 0x2820a8: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x2820a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
label_2820ac:
    // 0x2820ac: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2820acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2820b0:
    // 0x2820b0: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x2820b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
label_2820b4:
    // 0x2820b4: 0x34a50116  ori         $a1, $a1, 0x116
    ctx->pc = 0x2820b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
label_2820b8:
    // 0x2820b8: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x2820b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_2820bc:
    // 0x2820bc: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2820bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2820c0:
    // 0x2820c0: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x2820c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2820c4:
    // 0x2820c4: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2820c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2820c8:
    // 0x2820c8: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x2820c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_2820cc:
    // 0x2820cc: 0x40f809  jalr        $v0
label_2820d0:
    if (ctx->pc == 0x2820D0u) {
        ctx->pc = 0x2820D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820CCu;
        // 0x2820d0: 0xafa60100  sw          $a2, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2820D4u;
        goto label_2820d4;
    }
    ctx->pc = 0x2820CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2820D4u);
        ctx->pc = 0x2820D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820CCu;
        // 0x2820d0: 0xafa60100  sw          $a2, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2820CCu, 0x2820D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2820D4u;
label_2820d4:
    // 0x2820d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2820d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2820d8:
    // 0x2820d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2820d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2820dc:
    // 0x2820dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2820dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2820e0:
    // 0x2820e0: 0xc0c493d  jal         func_3124F4
label_2820e4:
    if (ctx->pc == 0x2820E4u) {
        ctx->pc = 0x2820E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820E0u;
        // 0x2820e4: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2820E8u;
        goto label_2820e8;
    }
    ctx->pc = 0x2820E0u;
    SET_GPR_U32(ctx, 31, 0x2820E8u);
    ctx->pc = 0x2820E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2820E0u;
    // 0x2820e4: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2820E0u, 0x2820E8u)) {
        return;
    }
    ctx->pc = 0x2820E8u;
label_2820e8:
    // 0x2820e8: 0x16000066  bnez        $s0, . + 4 + (0x66 << 2)
label_2820ec:
    if (ctx->pc == 0x2820ECu) {
        ctx->pc = 0x2820ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820E8u;
        // 0x2820ec: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2820F0u;
        goto label_2820f0;
    }
    ctx->pc = 0x2820E8u;
    {
        const bool branch_taken_0x2820e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2820ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820E8u;
        // 0x2820ec: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2820e8) {
            ctx->pc = 0x282284u;
            goto label_282284;
        }
    }
    ctx->pc = 0x2820F0u;
label_2820f0:
    // 0x2820f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2820f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2820f4:
    // 0x2820f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2820f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2820f8:
    // 0x2820f8: 0x12600061  beqz        $s3, . + 4 + (0x61 << 2)
label_2820fc:
    if (ctx->pc == 0x2820FCu) {
        ctx->pc = 0x2820FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820F8u;
        // 0x2820fc: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282100u;
        goto label_282100;
    }
    ctx->pc = 0x2820F8u;
    {
        const bool branch_taken_0x2820f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2820FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820F8u;
        // 0x2820fc: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2820f8) {
            ctx->pc = 0x282280u;
            goto label_282280;
        }
    }
    ctx->pc = 0x282100u;
label_282100:
    // 0x282100: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x282100u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_282104:
    // 0x282104: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282104u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282108:
    // 0x282108: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x282108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28210c:
    // 0x28210c: 0x1a600003  blez        $s3, . + 4 + (0x3 << 2)
label_282110:
    if (ctx->pc == 0x282110u) {
        ctx->pc = 0x282110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28210Cu;
        // 0x282110: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x282114u;
        goto label_282114;
    }
    ctx->pc = 0x28210Cu;
    {
        const bool branch_taken_0x28210c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x282110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28210Cu;
        // 0x282110: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28210c) {
            ctx->pc = 0x28211Cu;
            goto label_28211c;
        }
    }
    ctx->pc = 0x282114u;
label_282114:
    // 0x282114: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_282118:
    if (ctx->pc == 0x282118u) {
        ctx->pc = 0x282118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282114u;
        // 0x282118: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28211Cu;
        goto label_28211c;
    }
    ctx->pc = 0x282114u;
    {
        const bool branch_taken_0x282114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282114) {
            ctx->pc = 0x282118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282114u;
            // 0x282118: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282184u;
            goto label_282184;
        }
    }
    ctx->pc = 0x28211Cu;
label_28211c:
    // 0x28211c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x28211cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_282120:
    // 0x282120: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_282124:
    if (ctx->pc == 0x282124u) {
        ctx->pc = 0x282124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282120u;
        // 0x282124: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282128u;
        goto label_282128;
    }
    ctx->pc = 0x282120u;
    {
        const bool branch_taken_0x282120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282120u;
        // 0x282124: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282120) {
            ctx->pc = 0x28216Cu;
            goto label_28216c;
        }
    }
    ctx->pc = 0x282128u;
label_282128:
    // 0x282128: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x282128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28212c:
    // 0x28212c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x28212cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_282130:
    // 0x282130: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x282130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_282134:
    // 0x282134: 0x26830008  addiu       $v1, $s4, 0x8
    ctx->pc = 0x282134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_282138:
    // 0x282138: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x282138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_28213c:
    // 0x28213c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_282140:
    if (ctx->pc == 0x282140u) {
        ctx->pc = 0x282140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28213Cu;
        // 0x282140: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282144u;
        goto label_282144;
    }
    ctx->pc = 0x28213Cu;
    {
        const bool branch_taken_0x28213c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28213c) {
            ctx->pc = 0x282140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28213Cu;
            // 0x282140: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282170u;
            goto label_282170;
        }
    }
    ctx->pc = 0x282144u;
label_282144:
    // 0x282144: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x282144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_282148:
    // 0x282148: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_28214c:
    if (ctx->pc == 0x28214Cu) {
        ctx->pc = 0x28214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282148u;
        // 0x28214c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282150u;
        goto label_282150;
    }
    ctx->pc = 0x282148u;
    {
        const bool branch_taken_0x282148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282148) {
            ctx->pc = 0x28214Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282148u;
            // 0x28214c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282170u;
            goto label_282170;
        }
    }
    ctx->pc = 0x282150u;
label_282150:
    // 0x282150: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x282150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_282154:
    // 0x282154: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x282154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_282158:
    // 0x282158: 0x10450049  beq         $v0, $a1, . + 4 + (0x49 << 2)
label_28215c:
    if (ctx->pc == 0x28215Cu) {
        ctx->pc = 0x28215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282158u;
        // 0x28215c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282160u;
        goto label_282160;
    }
    ctx->pc = 0x282158u;
    {
        const bool branch_taken_0x282158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x28215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282158u;
        // 0x28215c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282158) {
            ctx->pc = 0x282280u;
            goto label_282280;
        }
    }
    ctx->pc = 0x282160u;
label_282160:
    // 0x282160: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x282160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_282164:
    // 0x282164: 0x1000fff4  b           . + 4 + (-0xC << 2)
label_282168:
    if (ctx->pc == 0x282168u) {
        ctx->pc = 0x282168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282164u;
        // 0x282168: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28216Cu;
        goto label_28216c;
    }
    ctx->pc = 0x282164u;
    {
        const bool branch_taken_0x282164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282164u;
        // 0x282168: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282164) {
            ctx->pc = 0x282138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282138;
        }
    }
    ctx->pc = 0x28216Cu;
label_28216c:
    // 0x28216c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x28216cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_282170:
    // 0x282170: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x282170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_282174:
    // 0x282174: 0xf3102b  sltu        $v0, $a3, $s3
    ctx->pc = 0x282174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_282178:
    // 0x282178: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_28217c:
    if (ctx->pc == 0x28217Cu) {
        ctx->pc = 0x28217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282178u;
        // 0x28217c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282180u;
        goto label_282180;
    }
    ctx->pc = 0x282178u;
    {
        const bool branch_taken_0x282178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282178u;
        // 0x28217c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282178) {
            ctx->pc = 0x282280u;
            goto label_282280;
        }
    }
    ctx->pc = 0x282180u;
label_282180:
    // 0x282180: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x282180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_282184:
    // 0x282184: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x282184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_282188:
    // 0x282188: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_28218c:
    if (ctx->pc == 0x28218Cu) {
        ctx->pc = 0x28218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282188u;
        // 0x28218c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282190u;
        goto label_282190;
    }
    ctx->pc = 0x282188u;
    {
        const bool branch_taken_0x282188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282188u;
        // 0x28218c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282188) {
            ctx->pc = 0x2821F4u;
            goto label_2821f4;
        }
    }
    ctx->pc = 0x282190u;
label_282190:
    // 0x282190: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x282190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_282194:
    // 0x282194: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x282194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_282198:
    // 0x282198: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_28219c:
    if (ctx->pc == 0x28219Cu) {
        ctx->pc = 0x28219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282198u;
        // 0x28219c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2821A0u;
        goto label_2821a0;
    }
    ctx->pc = 0x282198u;
    {
        const bool branch_taken_0x282198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282198u;
        // 0x28219c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282198) {
            ctx->pc = 0x2821F4u;
            goto label_2821f4;
        }
    }
    ctx->pc = 0x2821A0u;
label_2821a0:
    // 0x2821a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2821a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2821a4:
    // 0x2821a4: 0x10890036  beq         $a0, $t1, . + 4 + (0x36 << 2)
label_2821a8:
    if (ctx->pc == 0x2821A8u) {
        ctx->pc = 0x2821A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821A4u;
        // 0x2821a8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2821ACu;
        goto label_2821ac;
    }
    ctx->pc = 0x2821A4u;
    {
        const bool branch_taken_0x2821a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        ctx->pc = 0x2821A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821A4u;
        // 0x2821a8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2821a4) {
            ctx->pc = 0x282280u;
            goto label_282280;
        }
    }
    ctx->pc = 0x2821ACu;
label_2821ac:
    // 0x2821ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2821acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2821b0:
    // 0x2821b0: 0x1141021  addu        $v0, $t0, $s4
    ctx->pc = 0x2821b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
label_2821b4:
    // 0x2821b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2821b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2821b8:
    // 0x2821b8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2821b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2821bc:
    // 0x2821bc: 0x0  nop
    ctx->pc = 0x2821bcu;
    // NOP
label_2821c0:
    // 0x2821c0: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x2821c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2821c4:
    // 0x2821c4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_2821c8:
    if (ctx->pc == 0x2821C8u) {
        ctx->pc = 0x2821C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821C4u;
        // 0x2821c8: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2821CCu;
        goto label_2821cc;
    }
    ctx->pc = 0x2821C4u;
    {
        const bool branch_taken_0x2821c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2821c4) {
            ctx->pc = 0x2821C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2821C4u;
            // 0x2821c8: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2821F8u;
            goto label_2821f8;
        }
    }
    ctx->pc = 0x2821CCu;
label_2821cc:
    // 0x2821cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2821ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2821d0:
    // 0x2821d0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2821d4:
    if (ctx->pc == 0x2821D4u) {
        ctx->pc = 0x2821D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821D0u;
        // 0x2821d4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2821D8u;
        goto label_2821d8;
    }
    ctx->pc = 0x2821D0u;
    {
        const bool branch_taken_0x2821d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2821d0) {
            ctx->pc = 0x2821D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2821D0u;
            // 0x2821d4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2821F8u;
            goto label_2821f8;
        }
    }
    ctx->pc = 0x2821D8u;
label_2821d8:
    // 0x2821d8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2821d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2821dc:
    // 0x2821dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2821dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2821e0:
    // 0x2821e0: 0x10450027  beq         $v0, $a1, . + 4 + (0x27 << 2)
label_2821e4:
    if (ctx->pc == 0x2821E4u) {
        ctx->pc = 0x2821E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821E0u;
        // 0x2821e4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2821E8u;
        goto label_2821e8;
    }
    ctx->pc = 0x2821E0u;
    {
        const bool branch_taken_0x2821e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2821E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821E0u;
        // 0x2821e4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2821e0) {
            ctx->pc = 0x282280u;
            goto label_282280;
        }
    }
    ctx->pc = 0x2821E8u;
label_2821e8:
    // 0x2821e8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2821e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2821ec:
    // 0x2821ec: 0x1000fff4  b           . + 4 + (-0xC << 2)
label_2821f0:
    if (ctx->pc == 0x2821F0u) {
        ctx->pc = 0x2821F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821ECu;
        // 0x2821f0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2821F4u;
        goto label_2821f4;
    }
    ctx->pc = 0x2821ECu;
    {
        const bool branch_taken_0x2821ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2821F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821ECu;
        // 0x2821f0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2821ec) {
            ctx->pc = 0x2821C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2821c0;
        }
    }
    ctx->pc = 0x2821F4u;
label_2821f4:
    // 0x2821f4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2821f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2821f8:
    // 0x2821f8: 0x25050010  addiu       $a1, $t0, 0x10
    ctx->pc = 0x2821f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_2821fc:
    // 0x2821fc: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x2821fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_282200:
    // 0x282200: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_282204:
    if (ctx->pc == 0x282204u) {
        ctx->pc = 0x282204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282200u;
        // 0x282204: 0x24c30010  addiu       $v1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282208u;
        goto label_282208;
    }
    ctx->pc = 0x282200u;
    {
        const bool branch_taken_0x282200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282200u;
        // 0x282204: 0x24c30010  addiu       $v1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282200) {
            ctx->pc = 0x28226Cu;
            goto label_28226c;
        }
    }
    ctx->pc = 0x282208u;
label_282208:
    // 0x282208: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x282208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28220c:
    // 0x28220c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_282210:
    // 0x282210: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x282210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_282214:
    // 0x282214: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_282218:
    if (ctx->pc == 0x282218u) {
        ctx->pc = 0x282218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282214u;
        // 0x282218: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28221Cu;
        goto label_28221c;
    }
    ctx->pc = 0x282214u;
    {
        const bool branch_taken_0x282214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x282218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282214u;
        // 0x282218: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282214) {
            ctx->pc = 0x28226Cu;
            goto label_28226c;
        }
    }
    ctx->pc = 0x28221Cu;
label_28221c:
    // 0x28221c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28221cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_282220:
    // 0x282220: 0x10890017  beq         $a0, $t1, . + 4 + (0x17 << 2)
label_282224:
    if (ctx->pc == 0x282224u) {
        ctx->pc = 0x282224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282220u;
        // 0x282224: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282228u;
        goto label_282228;
    }
    ctx->pc = 0x282220u;
    {
        const bool branch_taken_0x282220 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        ctx->pc = 0x282224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282220u;
        // 0x282224: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282220) {
            ctx->pc = 0x282280u;
            goto label_282280;
        }
    }
    ctx->pc = 0x282228u;
label_282228:
    // 0x282228: 0xb41821  addu        $v1, $a1, $s4
    ctx->pc = 0x282228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_28222c:
    // 0x28222c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x28222cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_282230:
    // 0x282230: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x282230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_282234:
    // 0x282234: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x282234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_282238:
    // 0x282238: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x282238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_28223c:
    // 0x28223c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_282240:
    if (ctx->pc == 0x282240u) {
        ctx->pc = 0x282240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28223Cu;
        // 0x282240: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282244u;
        goto label_282244;
    }
    ctx->pc = 0x28223Cu;
    {
        const bool branch_taken_0x28223c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28223c) {
            ctx->pc = 0x282240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28223Cu;
            // 0x282240: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282270u;
            goto label_282270;
        }
    }
    ctx->pc = 0x282244u;
label_282244:
    // 0x282244: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x282244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_282248:
    // 0x282248: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_28224c:
    if (ctx->pc == 0x28224Cu) {
        ctx->pc = 0x28224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282248u;
        // 0x28224c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282250u;
        goto label_282250;
    }
    ctx->pc = 0x282248u;
    {
        const bool branch_taken_0x282248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282248) {
            ctx->pc = 0x28224Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282248u;
            // 0x28224c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282270u;
            goto label_282270;
        }
    }
    ctx->pc = 0x282250u;
label_282250:
    // 0x282250: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x282250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_282254:
    // 0x282254: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x282254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_282258:
    // 0x282258: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
label_28225c:
    if (ctx->pc == 0x28225Cu) {
        ctx->pc = 0x28225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282258u;
        // 0x28225c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282260u;
        goto label_282260;
    }
    ctx->pc = 0x282258u;
    {
        const bool branch_taken_0x282258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x28225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282258u;
        // 0x28225c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282258) {
            ctx->pc = 0x282280u;
            goto label_282280;
        }
    }
    ctx->pc = 0x282260u;
label_282260:
    // 0x282260: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x282260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_282264:
    // 0x282264: 0x1000fff4  b           . + 4 + (-0xC << 2)
label_282268:
    if (ctx->pc == 0x282268u) {
        ctx->pc = 0x282268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282264u;
        // 0x282268: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28226Cu;
        goto label_28226c;
    }
    ctx->pc = 0x282264u;
    {
        const bool branch_taken_0x282264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282264u;
        // 0x282268: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282264) {
            ctx->pc = 0x282238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282238;
        }
    }
    ctx->pc = 0x28226Cu;
label_28226c:
    // 0x28226c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x28226cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_282270:
    // 0x282270: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x282270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_282274:
    // 0x282274: 0xf3102b  sltu        $v0, $a3, $s3
    ctx->pc = 0x282274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_282278:
    // 0x282278: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
label_28227c:
    if (ctx->pc == 0x28227Cu) {
        ctx->pc = 0x28227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282278u;
        // 0x28227c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282280u;
        goto label_282280;
    }
    ctx->pc = 0x282278u;
    {
        const bool branch_taken_0x282278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282278u;
        // 0x28227c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282278) {
            ctx->pc = 0x282180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282180;
        }
    }
    ctx->pc = 0x282280u;
label_282280:
    // 0x282280: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x282280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_282284:
    // 0x282284: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_282288:
    if (ctx->pc == 0x282288u) {
        ctx->pc = 0x282288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282284u;
        // 0x282288: 0x17a980  sll         $s5, $s7, 6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28228Cu;
        goto label_28228c;
    }
    ctx->pc = 0x282284u;
    {
        const bool branch_taken_0x282284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282284u;
        // 0x282288: 0x17a980  sll         $s5, $s7, 6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282284) {
            ctx->pc = 0x282368u;
            goto label_282368;
        }
    }
    ctx->pc = 0x28228Cu;
label_28228c:
    // 0x28228c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x28228cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_282290:
    // 0x282290: 0x27a90100  addiu       $t1, $sp, 0x100
    ctx->pc = 0x282290u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_282294:
    // 0x282294: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x282294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_282298:
    // 0x282298: 0x12600033  beqz        $s3, . + 4 + (0x33 << 2)
label_28229c:
    if (ctx->pc == 0x28229Cu) {
        ctx->pc = 0x28229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282298u;
        // 0x28229c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2822A0u;
        goto label_2822a0;
    }
    ctx->pc = 0x282298u;
    {
        const bool branch_taken_0x282298 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282298u;
        // 0x28229c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282298) {
            ctx->pc = 0x282368u;
            goto label_282368;
        }
    }
    ctx->pc = 0x2822A0u;
label_2822a0:
    // 0x2822a0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2822a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2822a4:
    // 0x2822a4: 0x0  nop
    ctx->pc = 0x2822a4u;
    // NOP
label_2822a8:
    // 0x2822a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2822a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2822ac:
    // 0x2822ac: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_2822b0:
    if (ctx->pc == 0x2822B0u) {
        ctx->pc = 0x2822B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822ACu;
        // 0x2822b0: 0x24ad0001  addiu       $t5, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2822B4u;
        goto label_2822b4;
    }
    ctx->pc = 0x2822ACu;
    {
        const bool branch_taken_0x2822ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2822B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822ACu;
        // 0x2822b0: 0x24ad0001  addiu       $t5, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822ac) {
            ctx->pc = 0x282358u;
            goto label_282358;
        }
    }
    ctx->pc = 0x2822B4u;
label_2822b4:
    // 0x2822b4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2822b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2822b8:
    // 0x2822b8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2822b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2822bc:
    // 0x2822bc: 0x546021  addu        $t4, $v0, $s4
    ctx->pc = 0x2822bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2822c0:
    // 0x2822c0: 0x765821  addu        $t3, $v1, $s6
    ctx->pc = 0x2822c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_2822c4:
    // 0x2822c4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2822c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2822c8:
    // 0x2822c8: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2822c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_2822cc:
    // 0x2822cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2822ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2822d0:
    // 0x2822d0: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_2822d4:
    if (ctx->pc == 0x2822D4u) {
        ctx->pc = 0x2822D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822D0u;
        // 0x2822d4: 0x248a0001  addiu       $t2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2822D8u;
        goto label_2822d8;
    }
    ctx->pc = 0x2822D0u;
    {
        const bool branch_taken_0x2822d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2822D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822D0u;
        // 0x2822d4: 0x248a0001  addiu       $t2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822d0) {
            ctx->pc = 0x282344u;
            goto label_282344;
        }
    }
    ctx->pc = 0x2822D8u;
label_2822d8:
    // 0x2822d8: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x2822d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_2822dc:
    // 0x2822dc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2822dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2822e0:
    // 0x2822e0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x2822e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_2822e4:
    // 0x2822e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2822e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2822e8:
    // 0x2822e8: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x2822e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_2822ec:
    // 0x2822ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2822ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2822f0:
    // 0x2822f0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2822f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2822f4:
    // 0x2822f4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_2822f8:
    if (ctx->pc == 0x2822F8u) {
        ctx->pc = 0x2822F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822F4u;
        // 0x2822f8: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2822FCu;
        goto label_2822fc;
    }
    ctx->pc = 0x2822F4u;
    {
        const bool branch_taken_0x2822f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2822F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822F4u;
        // 0x2822f8: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822f4) {
            ctx->pc = 0x28232Cu;
            goto label_28232c;
        }
    }
    ctx->pc = 0x2822FCu;
label_2822fc:
    // 0x2822fc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x2822fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_282300:
    // 0x282300: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
label_282304:
    if (ctx->pc == 0x282304u) {
        ctx->pc = 0x282304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282300u;
        // 0x282304: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282308u;
        goto label_282308;
    }
    ctx->pc = 0x282300u;
    {
        const bool branch_taken_0x282300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x282300) {
            ctx->pc = 0x282304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282300u;
            // 0x282304: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28232Cu;
            goto label_28232c;
        }
    }
    ctx->pc = 0x282308u;
label_282308:
    // 0x282308: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x282308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_28230c:
    // 0x28230c: 0x0  nop
    ctx->pc = 0x28230cu;
    // NOP
label_282310:
    // 0x282310: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x282310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_282314:
    // 0x282314: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_282318:
    if (ctx->pc == 0x282318u) {
        ctx->pc = 0x282318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282314u;
        // 0x282318: 0x1051021  addu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28231Cu;
        goto label_28231c;
    }
    ctx->pc = 0x282314u;
    {
        const bool branch_taken_0x282314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282314u;
        // 0x282318: 0x1051021  addu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282314) {
            ctx->pc = 0x28232Cu;
            goto label_28232c;
        }
    }
    ctx->pc = 0x28231Cu;
label_28231c:
    // 0x28231c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x28231cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_282320:
    // 0x282320: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
label_282324:
    if (ctx->pc == 0x282324u) {
        ctx->pc = 0x282324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282320u;
        // 0x282324: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282328u;
        goto label_282328;
    }
    ctx->pc = 0x282320u;
    {
        const bool branch_taken_0x282320 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x282320) {
            ctx->pc = 0x282324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282320u;
            // 0x282324: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282310;
        }
    }
    ctx->pc = 0x282328u;
label_282328:
    // 0x282328: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x282328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28232c:
    // 0x28232c: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_282330:
    if (ctx->pc == 0x282330u) {
        ctx->pc = 0x282330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28232Cu;
        // 0x282330: 0x1061821  addu        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282334u;
        goto label_282334;
    }
    ctx->pc = 0x28232Cu;
    {
        const bool branch_taken_0x28232c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x282330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28232Cu;
        // 0x282330: 0x1061821  addu        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28232c) {
            ctx->pc = 0x282344u;
            goto label_282344;
        }
    }
    ctx->pc = 0x282334u;
label_282334:
    // 0x282334: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x282334u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_282338:
    // 0x282338: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x282338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_28233c:
    // 0x28233c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28233cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_282340:
    // 0x282340: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x282340u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_282344:
    // 0x282344: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x282344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_282348:
    // 0x282348: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x282348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_28234c:
    // 0x28234c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x28234cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_282350:
    // 0x282350: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_282354:
    if (ctx->pc == 0x282354u) {
        ctx->pc = 0x282354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282350u;
        // 0x282354: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282358u;
        goto label_282358;
    }
    ctx->pc = 0x282350u;
    {
        const bool branch_taken_0x282350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282350u;
        // 0x282354: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282350) {
            ctx->pc = 0x2822C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2822c8;
        }
    }
    ctx->pc = 0x282358u;
label_282358:
    // 0x282358: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x282358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_28235c:
    // 0x28235c: 0xb3102b  sltu        $v0, $a1, $s3
    ctx->pc = 0x28235cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_282360:
    // 0x282360: 0x5440ffd1  bnel        $v0, $zero, . + 4 + (-0x2F << 2)
label_282364:
    if (ctx->pc == 0x282364u) {
        ctx->pc = 0x282364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282360u;
        // 0x282364: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282368u;
        goto label_282368;
    }
    ctx->pc = 0x282360u;
    {
        const bool branch_taken_0x282360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282360) {
            ctx->pc = 0x282364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282360u;
            // 0x282364: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2822A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2822a8;
        }
    }
    ctx->pc = 0x282368u;
label_282368:
    // 0x282368: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x282368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_28236c:
    // 0x28236c: 0x8fb20100  lw          $s2, 0x100($sp)
    ctx->pc = 0x28236cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_282370:
    // 0x282370: 0x2631018  mult        $v0, $s3, $v1
    ctx->pc = 0x282370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_282374:
    // 0x282374: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x282374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_282378:
    // 0x282378: 0x34a50116  ori         $a1, $a1, 0x116
    ctx->pc = 0x282378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
label_28237c:
    // 0x28237c: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x28237cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_282380:
    // 0x282380: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x282380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_282384:
    // 0x282384: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x282384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_282388:
    // 0x282388: 0x24440fc8  addiu       $a0, $v0, 0xFC8
    ctx->pc = 0x282388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_28238c:
    // 0x28238c: 0x2470000f  addiu       $s0, $v1, 0xF
    ctx->pc = 0x28238cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_282390:
    // 0x282390: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x282390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_282394:
    // 0x282394: 0x40f809  jalr        $v0
label_282398:
    if (ctx->pc == 0x282398u) {
        ctx->pc = 0x282398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282394u;
        // 0x282398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28239Cu;
        goto label_28239c;
    }
    ctx->pc = 0x282394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28239Cu);
        ctx->pc = 0x282398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282394u;
        // 0x282398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282394u, 0x28239Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28239Cu;
label_28239c:
    // 0x28239c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2823a0:
    if (ctx->pc == 0x2823A0u) {
        ctx->pc = 0x2823A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28239Cu;
        // 0x2823a0: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2823A4u;
        goto label_2823a4;
    }
    ctx->pc = 0x28239Cu;
    {
        const bool branch_taken_0x28239c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2823A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28239Cu;
        // 0x2823a0: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28239c) {
            ctx->pc = 0x2823ACu;
            goto label_2823ac;
        }
    }
    ctx->pc = 0x2823A4u;
label_2823a4:
    // 0x2823a4: 0x10000097  b           . + 4 + (0x97 << 2)
label_2823a8:
    if (ctx->pc == 0x2823A8u) {
        ctx->pc = 0x2823A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823A4u;
        // 0x2823a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2823ACu;
        goto label_2823ac;
    }
    ctx->pc = 0x2823A4u;
    {
        const bool branch_taken_0x2823a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2823A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823A4u;
        // 0x2823a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2823a4) {
            ctx->pc = 0x282604u;
            goto label_282604;
        }
    }
    ctx->pc = 0x2823ACu;
label_2823ac:
    // 0x2823ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2823acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2823b0:
    // 0x2823b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2823b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2823b4:
    // 0x2823b4: 0xc0c493d  jal         func_3124F4
label_2823b8:
    if (ctx->pc == 0x2823B8u) {
        ctx->pc = 0x2823B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823B4u;
        // 0x2823b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2823BCu;
        goto label_2823bc;
    }
    ctx->pc = 0x2823B4u;
    SET_GPR_U32(ctx, 31, 0x2823BCu);
    ctx->pc = 0x2823B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2823B4u;
    // 0x2823b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2823B4u, 0x2823BCu)) {
        return;
    }
    ctx->pc = 0x2823BCu;
label_2823bc:
    // 0x2823bc: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x2823bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_2823c0:
    // 0x2823c0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2823c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2823c4:
    // 0x2823c4: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x2823c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_2823c8:
    // 0x2823c8: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x2823c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2823cc:
    // 0x2823cc: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x2823ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_2823d0:
    // 0x2823d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2823d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2823d4:
    // 0x2823d4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2823d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_2823d8:
    // 0x2823d8: 0xae370000  sw          $s7, 0x0($s1)
    ctx->pc = 0x2823d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 23));
label_2823dc:
    // 0x2823dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2823dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2823e0:
    // 0x2823e0: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x2823e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_2823e4:
    // 0x2823e4: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x2823e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2823e8:
    // 0x2823e8: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x2823e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
label_2823ec:
    // 0x2823ec: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2823ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2823f0:
    // 0x2823f0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2823f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2823f4:
    // 0x2823f4: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x2823f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
label_2823f8:
    // 0x2823f8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_2823fc:
    if (ctx->pc == 0x2823FCu) {
        ctx->pc = 0x2823FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823F8u;
        // 0x2823fc: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282400u;
        goto label_282400;
    }
    ctx->pc = 0x2823F8u;
    {
        const bool branch_taken_0x2823f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2823FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823F8u;
        // 0x2823fc: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2823f8) {
            ctx->pc = 0x282410u;
            goto label_282410;
        }
    }
    ctx->pc = 0x282400u;
label_282400:
    // 0x282400: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x282400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_282404:
    // 0x282404: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x282404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_282408:
    // 0x282408: 0xc075fdc  jal         func_1D7F70
label_28240c:
    if (ctx->pc == 0x28240Cu) {
        ctx->pc = 0x28240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282408u;
        // 0x28240c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282410u;
        goto label_282410;
    }
    ctx->pc = 0x282408u;
    SET_GPR_U32(ctx, 31, 0x282410u);
    ctx->pc = 0x28240Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282408u;
    // 0x28240c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x282408u, 0x282410u)) {
        return;
    }
    ctx->pc = 0x282410u;
label_282410:
    // 0x282410: 0x13c00071  beqz        $fp, . + 4 + (0x71 << 2)
label_282414:
    if (ctx->pc == 0x282414u) {
        ctx->pc = 0x282418u;
        goto label_282418;
    }
    ctx->pc = 0x282410u;
    {
        const bool branch_taken_0x282410 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x282410) {
            ctx->pc = 0x2825D8u;
            goto label_2825d8;
        }
    }
    ctx->pc = 0x282418u;
label_282418:
    // 0x282418: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x282418u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28241c:
    // 0x28241c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28241cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_282420:
    // 0x282420: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x282420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_282424:
    // 0x282424: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x282424u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_282428:
    // 0x282428: 0x11c2006b  beq         $t6, $v0, . + 4 + (0x6B << 2)
label_28242c:
    if (ctx->pc == 0x28242Cu) {
        ctx->pc = 0x28242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282428u;
        // 0x28242c: 0xe1980  sll         $v1, $t6, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282430u;
        goto label_282430;
    }
    ctx->pc = 0x282428u;
    {
        const bool branch_taken_0x282428 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 2));
        ctx->pc = 0x28242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282428u;
        // 0x28242c: 0xe1980  sll         $v1, $t6, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282428) {
            ctx->pc = 0x2825D8u;
            goto label_2825d8;
        }
    }
    ctx->pc = 0x282430u;
label_282430:
    // 0x282430: 0x3c0fffff  lui         $t7, 0xFFFF
    ctx->pc = 0x282430u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65535 << 16));
label_282434:
    // 0x282434: 0x7e5021  addu        $t2, $v1, $fp
    ctx->pc = 0x282434u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_282438:
    // 0x282438: 0xe1027  nor         $v0, $zero, $t6
    ctx->pc = 0x282438u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 14)));
label_28243c:
    // 0x28243c: 0x30490003  andi        $t1, $v0, 0x3
    ctx->pc = 0x28243cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_282440:
    // 0x282440: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x282440u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_282444:
    // 0x282444: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x282444u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
label_282448:
    // 0x282448: 0x1120002d  beqz        $t1, . + 4 + (0x2D << 2)
label_28244c:
    if (ctx->pc == 0x28244Cu) {
        ctx->pc = 0x28244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282448u;
        // 0x28244c: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282450u;
        goto label_282450;
    }
    ctx->pc = 0x282448u;
    {
        const bool branch_taken_0x282448 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x28244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282448u;
        // 0x28244c: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282448) {
            ctx->pc = 0x282500u;
            goto label_282500;
        }
    }
    ctx->pc = 0x282450u;
label_282450:
    // 0x282450: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x282450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
label_282454:
    // 0x282454: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_282458:
    if (ctx->pc == 0x282458u) {
        ctx->pc = 0x282458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282454u;
        // 0x282458: 0x29220002  slti        $v0, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28245Cu;
        goto label_28245c;
    }
    ctx->pc = 0x282454u;
    {
        const bool branch_taken_0x282454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282454u;
        // 0x282458: 0x29220002  slti        $v0, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282454) {
            ctx->pc = 0x2824C8u;
            goto label_2824c8;
        }
    }
    ctx->pc = 0x28245Cu;
label_28245c:
    // 0x28245c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_282460:
    if (ctx->pc == 0x282460u) {
        ctx->pc = 0x282460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28245Cu;
        // 0x282460: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282464u;
        goto label_282464;
    }
    ctx->pc = 0x28245Cu;
    {
        const bool branch_taken_0x28245c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28245Cu;
        // 0x282460: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28245c) {
            ctx->pc = 0x282498u;
            goto label_282498;
        }
    }
    ctx->pc = 0x282464u;
label_282464:
    // 0x282464: 0x2545ffc0  addiu       $a1, $t2, -0x40
    ctx->pc = 0x282464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967232));
label_282468:
    // 0x282468: 0x79420000  lq          $v0, 0x0($t2)
    ctx->pc = 0x282468u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_28246c:
    // 0x28246c: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x28246cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_282470:
    // 0x282470: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x282470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_282474:
    // 0x282474: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x282474u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_282478:
    // 0x282478: 0x256bffc0  addiu       $t3, $t3, -0x40
    ctx->pc = 0x282478u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967232));
label_28247c:
    // 0x28247c: 0x79420010  lq          $v0, 0x10($t2)
    ctx->pc = 0x28247cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 16)));
label_282480:
    // 0x282480: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x282480u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_282484:
    // 0x282484: 0x79430020  lq          $v1, 0x20($t2)
    ctx->pc = 0x282484u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 32)));
label_282488:
    // 0x282488: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x282488u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
label_28248c:
    // 0x28248c: 0x79420030  lq          $v0, 0x30($t2)
    ctx->pc = 0x28248cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 48)));
label_282490:
    // 0x282490: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x282490u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_282494:
    // 0x282494: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x282494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_282498:
    // 0x282498: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x282498u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_28249c:
    // 0x28249c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x28249cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2824a0:
    // 0x2824a0: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x2824a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_2824a4:
    // 0x2824a4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2824a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_2824a8:
    // 0x2824a8: 0x256bffc0  addiu       $t3, $t3, -0x40
    ctx->pc = 0x2824a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967232));
label_2824ac:
    // 0x2824ac: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x2824acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_2824b0:
    // 0x2824b0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2824b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_2824b4:
    // 0x2824b4: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x2824b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_2824b8:
    // 0x2824b8: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x2824b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
label_2824bc:
    // 0x2824bc: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x2824bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_2824c0:
    // 0x2824c0: 0x24a5ffc0  addiu       $a1, $a1, -0x40
    ctx->pc = 0x2824c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
label_2824c4:
    // 0x2824c4: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x2824c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_2824c8:
    // 0x2824c8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2824c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2824cc:
    // 0x2824cc: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x2824ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_2824d0:
    // 0x2824d0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2824d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2824d4:
    // 0x2824d4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x2824d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_2824d8:
    // 0x2824d8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2824d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_2824dc:
    // 0x2824dc: 0x256bffc0  addiu       $t3, $t3, -0x40
    ctx->pc = 0x2824dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967232));
label_2824e0:
    // 0x2824e0: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x2824e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_2824e4:
    // 0x2824e4: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2824e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_2824e8:
    // 0x2824e8: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x2824e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_2824ec:
    // 0x2824ec: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x2824ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
label_2824f0:
    // 0x2824f0: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x2824f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_2824f4:
    // 0x2824f4: 0x24a5ffc0  addiu       $a1, $a1, -0x40
    ctx->pc = 0x2824f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
label_2824f8:
    // 0x2824f8: 0x11cf0037  beq         $t6, $t7, . + 4 + (0x37 << 2)
label_2824fc:
    if (ctx->pc == 0x2824FCu) {
        ctx->pc = 0x2824FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2824F8u;
        // 0x2824fc: 0x7c820030  sq          $v0, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282500u;
        goto label_282500;
    }
    ctx->pc = 0x2824F8u;
    {
        const bool branch_taken_0x2824f8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2824FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2824F8u;
        // 0x2824fc: 0x7c820030  sq          $v0, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2824f8) {
            ctx->pc = 0x2825D8u;
            goto label_2825d8;
        }
    }
    ctx->pc = 0x282500u;
label_282500:
    // 0x282500: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x282500u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_282504:
    // 0x282504: 0x120682d  daddu       $t5, $t1, $zero
    ctx->pc = 0x282504u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_282508:
    // 0x282508: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x282508u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_28250c:
    // 0x28250c: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x28250cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_282510:
    // 0x282510: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x282510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_282514:
    // 0x282514: 0x2566ffc0  addiu       $a2, $t3, -0x40
    ctx->pc = 0x282514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967232));
label_282518:
    // 0x282518: 0x79420000  lq          $v0, 0x0($t2)
    ctx->pc = 0x282518u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_28251c:
    // 0x28251c: 0x2567ff80  addiu       $a3, $t3, -0x80
    ctx->pc = 0x28251cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967168));
label_282520:
    // 0x282520: 0x1652821  addu        $a1, $t3, $a1
    ctx->pc = 0x282520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
label_282524:
    // 0x282524: 0x2568ff40  addiu       $t0, $t3, -0xC0
    ctx->pc = 0x282524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967104));
label_282528:
    // 0x282528: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x282528u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_28252c:
    // 0x28252c: 0x256bff00  addiu       $t3, $t3, -0x100
    ctx->pc = 0x28252cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967040));
label_282530:
    // 0x282530: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x282530u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
label_282534:
    // 0x282534: 0x79820010  lq          $v0, 0x10($t4)
    ctx->pc = 0x282534u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 12), 16)));
label_282538:
    // 0x282538: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x282538u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
label_28253c:
    // 0x28253c: 0x79a30020  lq          $v1, 0x20($t5)
    ctx->pc = 0x28253cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 13), 32)));
label_282540:
    // 0x282540: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x282540u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
label_282544:
    // 0x282544: 0x79220030  lq          $v0, 0x30($t1)
    ctx->pc = 0x282544u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 48)));
label_282548:
    // 0x282548: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x282548u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
label_28254c:
    // 0x28254c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x28254cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_282550:
    // 0x282550: 0x7943ffc0  lq          $v1, -0x40($t2)
    ctx->pc = 0x282550u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 4294967232)));
label_282554:
    // 0x282554: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x282554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_282558:
    // 0x282558: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x282558u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_28255c:
    // 0x28255c: 0x7982ffd0  lq          $v0, -0x30($t4)
    ctx->pc = 0x28255cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 12), 4294967248)));
label_282560:
    // 0x282560: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x282560u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
label_282564:
    // 0x282564: 0x79a3ffe0  lq          $v1, -0x20($t5)
    ctx->pc = 0x282564u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 13), 4294967264)));
label_282568:
    // 0x282568: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x282568u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
label_28256c:
    // 0x28256c: 0x7922fff0  lq          $v0, -0x10($t1)
    ctx->pc = 0x28256cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 4294967280)));
label_282570:
    // 0x282570: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x282570u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
label_282574:
    // 0x282574: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x282574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_282578:
    // 0x282578: 0x7943ff80  lq          $v1, -0x80($t2)
    ctx->pc = 0x282578u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 4294967168)));
label_28257c:
    // 0x28257c: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x28257cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_282580:
    // 0x282580: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x282580u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_282584:
    // 0x282584: 0x7982ff90  lq          $v0, -0x70($t4)
    ctx->pc = 0x282584u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 12), 4294967184)));
label_282588:
    // 0x282588: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x282588u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
label_28258c:
    // 0x28258c: 0x79a3ffa0  lq          $v1, -0x60($t5)
    ctx->pc = 0x28258cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 13), 4294967200)));
label_282590:
    // 0x282590: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x282590u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
label_282594:
    // 0x282594: 0x7922ffb0  lq          $v0, -0x50($t1)
    ctx->pc = 0x282594u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 4294967216)));
label_282598:
    // 0x282598: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x282598u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
label_28259c:
    // 0x28259c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x28259cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2825a0:
    // 0x2825a0: 0x7943ff40  lq          $v1, -0xC0($t2)
    ctx->pc = 0x2825a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 4294967104)));
label_2825a4:
    // 0x2825a4: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x2825a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_2825a8:
    // 0x2825a8: 0x254aff00  addiu       $t2, $t2, -0x100
    ctx->pc = 0x2825a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967040));
label_2825ac:
    // 0x2825ac: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x2825acu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
label_2825b0:
    // 0x2825b0: 0x7982ff50  lq          $v0, -0xB0($t4)
    ctx->pc = 0x2825b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 12), 4294967120)));
label_2825b4:
    // 0x2825b4: 0x258cff00  addiu       $t4, $t4, -0x100
    ctx->pc = 0x2825b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967040));
label_2825b8:
    // 0x2825b8: 0x7d020010  sq          $v0, 0x10($t0)
    ctx->pc = 0x2825b8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 2));
label_2825bc:
    // 0x2825bc: 0x79a3ff60  lq          $v1, -0xA0($t5)
    ctx->pc = 0x2825bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 13), 4294967136)));
label_2825c0:
    // 0x2825c0: 0x25adff00  addiu       $t5, $t5, -0x100
    ctx->pc = 0x2825c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967040));
label_2825c4:
    // 0x2825c4: 0x7d030020  sq          $v1, 0x20($t0)
    ctx->pc = 0x2825c4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 3));
label_2825c8:
    // 0x2825c8: 0x7922ff70  lq          $v0, -0x90($t1)
    ctx->pc = 0x2825c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 4294967152)));
label_2825cc:
    // 0x2825cc: 0x2529ff00  addiu       $t1, $t1, -0x100
    ctx->pc = 0x2825ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967040));
label_2825d0:
    // 0x2825d0: 0x15cfffcf  bne         $t6, $t7, . + 4 + (-0x31 << 2)
label_2825d4:
    if (ctx->pc == 0x2825D4u) {
        ctx->pc = 0x2825D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2825D0u;
        // 0x2825d4: 0x7d020030  sq          $v0, 0x30($t0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2825D8u;
        goto label_2825d8;
    }
    ctx->pc = 0x2825D0u;
    {
        const bool branch_taken_0x2825d0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2825D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2825D0u;
        // 0x2825d4: 0x7d020030  sq          $v0, 0x30($t0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2825d0) {
            ctx->pc = 0x282510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282510;
        }
    }
    ctx->pc = 0x2825D8u;
label_2825d8:
    // 0x2825d8: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_2825dc:
    if (ctx->pc == 0x2825DCu) {
        ctx->pc = 0x2825DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2825D8u;
        // 0x2825dc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2825E0u;
        goto label_2825e0;
    }
    ctx->pc = 0x2825D8u;
    {
        const bool branch_taken_0x2825d8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2825DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2825D8u;
        // 0x2825dc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2825d8) {
            ctx->pc = 0x2825ECu;
            goto label_2825ec;
        }
    }
    ctx->pc = 0x2825E0u;
label_2825e0:
    // 0x2825e0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2825e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2825e4:
    // 0x2825e4: 0xc075fdc  jal         func_1D7F70
label_2825e8:
    if (ctx->pc == 0x2825E8u) {
        ctx->pc = 0x2825E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2825E4u;
        // 0x2825e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2825ECu;
        goto label_2825ec;
    }
    ctx->pc = 0x2825E4u;
    SET_GPR_U32(ctx, 31, 0x2825ECu);
    ctx->pc = 0x2825E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2825E4u;
    // 0x2825e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2825E4u, 0x2825ECu)) {
        return;
    }
    ctx->pc = 0x2825ECu;
label_2825ec:
    // 0x2825ec: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_2825f0:
    if (ctx->pc == 0x2825F0u) {
        ctx->pc = 0x2825F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2825ECu;
        // 0x2825f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2825F4u;
        goto label_2825f4;
    }
    ctx->pc = 0x2825ECu;
    {
        const bool branch_taken_0x2825ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2825F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2825ECu;
        // 0x2825f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2825ec) {
            ctx->pc = 0x282600u;
            goto label_282600;
        }
    }
    ctx->pc = 0x2825F4u;
label_2825f4:
    // 0x2825f4: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2825f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2825f8:
    // 0x2825f8: 0xc075fdc  jal         func_1D7F70
label_2825fc:
    if (ctx->pc == 0x2825FCu) {
        ctx->pc = 0x2825FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2825F8u;
        // 0x2825fc: 0x133100  sll         $a2, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282600u;
        goto label_282600;
    }
    ctx->pc = 0x2825F8u;
    SET_GPR_U32(ctx, 31, 0x282600u);
    ctx->pc = 0x2825FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2825F8u;
    // 0x2825fc: 0x133100  sll         $a2, $s3, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2825F8u, 0x282600u)) {
        return;
    }
    ctx->pc = 0x282600u;
label_282600:
    // 0x282600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_282604:
    // 0x282604: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_282608:
    if (ctx->pc == 0x282608u) {
        ctx->pc = 0x282608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282604u;
        // 0x282608: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28260Cu;
        goto label_28260c;
    }
    ctx->pc = 0x282604u;
    {
        const bool branch_taken_0x282604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282604u;
        // 0x282608: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282604) {
            ctx->pc = 0x282630u;
            goto label_282630;
        }
    }
    ctx->pc = 0x28260Cu;
label_28260c:
    // 0x28260c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x28260cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_282610:
    // 0x282610: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x282610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_282614:
    // 0x282614: 0x24430fc8  addiu       $v1, $v0, 0xFC8
    ctx->pc = 0x282614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_282618:
    // 0x282618: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x282618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_28261c:
    // 0x28261c: 0x2446e6e0  addiu       $a2, $v0, -0x1920
    ctx->pc = 0x28261cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960864));
label_282620:
    // 0x282620: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x282620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_282624:
    // 0x282624: 0x40f809  jalr        $v0
label_282628:
    if (ctx->pc == 0x282628u) {
        ctx->pc = 0x282628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282624u;
        // 0x282628: 0x8cc40018  lw          $a0, 0x18($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28262Cu;
        goto label_28262c;
    }
    ctx->pc = 0x282624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28262Cu);
        ctx->pc = 0x282628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282624u;
        // 0x282628: 0x8cc40018  lw          $a0, 0x18($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282624u, 0x28262Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28262Cu;
label_28262c:
    // 0x28262c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28262cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282630:
    // 0x282630: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x282630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_282634:
    // 0x282634: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x282634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_282638:
    // 0x282638: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x282638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_28263c:
    // 0x28263c: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x28263cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_282640:
    // 0x282640: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x282640u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_282644:
    // 0x282644: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x282644u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_282648:
    // 0x282648: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x282648u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_28264c:
    // 0x28264c: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x28264cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_282650:
    // 0x282650: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x282650u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_282654:
    // 0x282654: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x282654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_282658:
    // 0x282658: 0x3e00008  jr          $ra
label_28265c:
    if (ctx->pc == 0x28265Cu) {
        ctx->pc = 0x28265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282658u;
        // 0x28265c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282660u;
        goto label_fallthrough_0x282658;
    }
    ctx->pc = 0x282658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282658u;
        // 0x28265c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x282658:
    ctx->pc = 0x282660u;
}
