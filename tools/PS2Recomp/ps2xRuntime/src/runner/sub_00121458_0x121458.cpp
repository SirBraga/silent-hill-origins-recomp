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

// Function: sub_00121458
// Address: 0x121458 - 0x121af0
void sub_00121458_0x121458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121458_0x121458");
#endif

    switch (ctx->pc) {
        case 0x121458u: goto label_121458;
        case 0x12145cu: goto label_12145c;
        case 0x121460u: goto label_121460;
        case 0x121464u: goto label_121464;
        case 0x121468u: goto label_121468;
        case 0x12146cu: goto label_12146c;
        case 0x121470u: goto label_121470;
        case 0x121474u: goto label_121474;
        case 0x121478u: goto label_121478;
        case 0x12147cu: goto label_12147c;
        case 0x121480u: goto label_121480;
        case 0x121484u: goto label_121484;
        case 0x121488u: goto label_121488;
        case 0x12148cu: goto label_12148c;
        case 0x121490u: goto label_121490;
        case 0x121494u: goto label_121494;
        case 0x121498u: goto label_121498;
        case 0x12149cu: goto label_12149c;
        case 0x1214a0u: goto label_1214a0;
        case 0x1214a4u: goto label_1214a4;
        case 0x1214a8u: goto label_1214a8;
        case 0x1214acu: goto label_1214ac;
        case 0x1214b0u: goto label_1214b0;
        case 0x1214b4u: goto label_1214b4;
        case 0x1214b8u: goto label_1214b8;
        case 0x1214bcu: goto label_1214bc;
        case 0x1214c0u: goto label_1214c0;
        case 0x1214c4u: goto label_1214c4;
        case 0x1214c8u: goto label_1214c8;
        case 0x1214ccu: goto label_1214cc;
        case 0x1214d0u: goto label_1214d0;
        case 0x1214d4u: goto label_1214d4;
        case 0x1214d8u: goto label_1214d8;
        case 0x1214dcu: goto label_1214dc;
        case 0x1214e0u: goto label_1214e0;
        case 0x1214e4u: goto label_1214e4;
        case 0x1214e8u: goto label_1214e8;
        case 0x1214ecu: goto label_1214ec;
        case 0x1214f0u: goto label_1214f0;
        case 0x1214f4u: goto label_1214f4;
        case 0x1214f8u: goto label_1214f8;
        case 0x1214fcu: goto label_1214fc;
        case 0x121500u: goto label_121500;
        case 0x121504u: goto label_121504;
        case 0x121508u: goto label_121508;
        case 0x12150cu: goto label_12150c;
        case 0x121510u: goto label_121510;
        case 0x121514u: goto label_121514;
        case 0x121518u: goto label_121518;
        case 0x12151cu: goto label_12151c;
        case 0x121520u: goto label_121520;
        case 0x121524u: goto label_121524;
        case 0x121528u: goto label_121528;
        case 0x12152cu: goto label_12152c;
        case 0x121530u: goto label_121530;
        case 0x121534u: goto label_121534;
        case 0x121538u: goto label_121538;
        case 0x12153cu: goto label_12153c;
        case 0x121540u: goto label_121540;
        case 0x121544u: goto label_121544;
        case 0x121548u: goto label_121548;
        case 0x12154cu: goto label_12154c;
        case 0x121550u: goto label_121550;
        case 0x121554u: goto label_121554;
        case 0x121558u: goto label_121558;
        case 0x12155cu: goto label_12155c;
        case 0x121560u: goto label_121560;
        case 0x121564u: goto label_121564;
        case 0x121568u: goto label_121568;
        case 0x12156cu: goto label_12156c;
        case 0x121570u: goto label_121570;
        case 0x121574u: goto label_121574;
        case 0x121578u: goto label_121578;
        case 0x12157cu: goto label_12157c;
        case 0x121580u: goto label_121580;
        case 0x121584u: goto label_121584;
        case 0x121588u: goto label_121588;
        case 0x12158cu: goto label_12158c;
        case 0x121590u: goto label_121590;
        case 0x121594u: goto label_121594;
        case 0x121598u: goto label_121598;
        case 0x12159cu: goto label_12159c;
        case 0x1215a0u: goto label_1215a0;
        case 0x1215a4u: goto label_1215a4;
        case 0x1215a8u: goto label_1215a8;
        case 0x1215acu: goto label_1215ac;
        case 0x1215b0u: goto label_1215b0;
        case 0x1215b4u: goto label_1215b4;
        case 0x1215b8u: goto label_1215b8;
        case 0x1215bcu: goto label_1215bc;
        case 0x1215c0u: goto label_1215c0;
        case 0x1215c4u: goto label_1215c4;
        case 0x1215c8u: goto label_1215c8;
        case 0x1215ccu: goto label_1215cc;
        case 0x1215d0u: goto label_1215d0;
        case 0x1215d4u: goto label_1215d4;
        case 0x1215d8u: goto label_1215d8;
        case 0x1215dcu: goto label_1215dc;
        case 0x1215e0u: goto label_1215e0;
        case 0x1215e4u: goto label_1215e4;
        case 0x1215e8u: goto label_1215e8;
        case 0x1215ecu: goto label_1215ec;
        case 0x1215f0u: goto label_1215f0;
        case 0x1215f4u: goto label_1215f4;
        case 0x1215f8u: goto label_1215f8;
        case 0x1215fcu: goto label_1215fc;
        case 0x121600u: goto label_121600;
        case 0x121604u: goto label_121604;
        case 0x121608u: goto label_121608;
        case 0x12160cu: goto label_12160c;
        case 0x121610u: goto label_121610;
        case 0x121614u: goto label_121614;
        case 0x121618u: goto label_121618;
        case 0x12161cu: goto label_12161c;
        case 0x121620u: goto label_121620;
        case 0x121624u: goto label_121624;
        case 0x121628u: goto label_121628;
        case 0x12162cu: goto label_12162c;
        case 0x121630u: goto label_121630;
        case 0x121634u: goto label_121634;
        case 0x121638u: goto label_121638;
        case 0x12163cu: goto label_12163c;
        case 0x121640u: goto label_121640;
        case 0x121644u: goto label_121644;
        case 0x121648u: goto label_121648;
        case 0x12164cu: goto label_12164c;
        case 0x121650u: goto label_121650;
        case 0x121654u: goto label_121654;
        case 0x121658u: goto label_121658;
        case 0x12165cu: goto label_12165c;
        case 0x121660u: goto label_121660;
        case 0x121664u: goto label_121664;
        case 0x121668u: goto label_121668;
        case 0x12166cu: goto label_12166c;
        case 0x121670u: goto label_121670;
        case 0x121674u: goto label_121674;
        case 0x121678u: goto label_121678;
        case 0x12167cu: goto label_12167c;
        case 0x121680u: goto label_121680;
        case 0x121684u: goto label_121684;
        case 0x121688u: goto label_121688;
        case 0x12168cu: goto label_12168c;
        case 0x121690u: goto label_121690;
        case 0x121694u: goto label_121694;
        case 0x121698u: goto label_121698;
        case 0x12169cu: goto label_12169c;
        case 0x1216a0u: goto label_1216a0;
        case 0x1216a4u: goto label_1216a4;
        case 0x1216a8u: goto label_1216a8;
        case 0x1216acu: goto label_1216ac;
        case 0x1216b0u: goto label_1216b0;
        case 0x1216b4u: goto label_1216b4;
        case 0x1216b8u: goto label_1216b8;
        case 0x1216bcu: goto label_1216bc;
        case 0x1216c0u: goto label_1216c0;
        case 0x1216c4u: goto label_1216c4;
        case 0x1216c8u: goto label_1216c8;
        case 0x1216ccu: goto label_1216cc;
        case 0x1216d0u: goto label_1216d0;
        case 0x1216d4u: goto label_1216d4;
        case 0x1216d8u: goto label_1216d8;
        case 0x1216dcu: goto label_1216dc;
        case 0x1216e0u: goto label_1216e0;
        case 0x1216e4u: goto label_1216e4;
        case 0x1216e8u: goto label_1216e8;
        case 0x1216ecu: goto label_1216ec;
        case 0x1216f0u: goto label_1216f0;
        case 0x1216f4u: goto label_1216f4;
        case 0x1216f8u: goto label_1216f8;
        case 0x1216fcu: goto label_1216fc;
        case 0x121700u: goto label_121700;
        case 0x121704u: goto label_121704;
        case 0x121708u: goto label_121708;
        case 0x12170cu: goto label_12170c;
        case 0x121710u: goto label_121710;
        case 0x121714u: goto label_121714;
        case 0x121718u: goto label_121718;
        case 0x12171cu: goto label_12171c;
        case 0x121720u: goto label_121720;
        case 0x121724u: goto label_121724;
        case 0x121728u: goto label_121728;
        case 0x12172cu: goto label_12172c;
        case 0x121730u: goto label_121730;
        case 0x121734u: goto label_121734;
        case 0x121738u: goto label_121738;
        case 0x12173cu: goto label_12173c;
        case 0x121740u: goto label_121740;
        case 0x121744u: goto label_121744;
        case 0x121748u: goto label_121748;
        case 0x12174cu: goto label_12174c;
        case 0x121750u: goto label_121750;
        case 0x121754u: goto label_121754;
        case 0x121758u: goto label_121758;
        case 0x12175cu: goto label_12175c;
        case 0x121760u: goto label_121760;
        case 0x121764u: goto label_121764;
        case 0x121768u: goto label_121768;
        case 0x12176cu: goto label_12176c;
        case 0x121770u: goto label_121770;
        case 0x121774u: goto label_121774;
        case 0x121778u: goto label_121778;
        case 0x12177cu: goto label_12177c;
        case 0x121780u: goto label_121780;
        case 0x121784u: goto label_121784;
        case 0x121788u: goto label_121788;
        case 0x12178cu: goto label_12178c;
        case 0x121790u: goto label_121790;
        case 0x121794u: goto label_121794;
        case 0x121798u: goto label_121798;
        case 0x12179cu: goto label_12179c;
        case 0x1217a0u: goto label_1217a0;
        case 0x1217a4u: goto label_1217a4;
        case 0x1217a8u: goto label_1217a8;
        case 0x1217acu: goto label_1217ac;
        case 0x1217b0u: goto label_1217b0;
        case 0x1217b4u: goto label_1217b4;
        case 0x1217b8u: goto label_1217b8;
        case 0x1217bcu: goto label_1217bc;
        case 0x1217c0u: goto label_1217c0;
        case 0x1217c4u: goto label_1217c4;
        case 0x1217c8u: goto label_1217c8;
        case 0x1217ccu: goto label_1217cc;
        case 0x1217d0u: goto label_1217d0;
        case 0x1217d4u: goto label_1217d4;
        case 0x1217d8u: goto label_1217d8;
        case 0x1217dcu: goto label_1217dc;
        case 0x1217e0u: goto label_1217e0;
        case 0x1217e4u: goto label_1217e4;
        case 0x1217e8u: goto label_1217e8;
        case 0x1217ecu: goto label_1217ec;
        case 0x1217f0u: goto label_1217f0;
        case 0x1217f4u: goto label_1217f4;
        case 0x1217f8u: goto label_1217f8;
        case 0x1217fcu: goto label_1217fc;
        case 0x121800u: goto label_121800;
        case 0x121804u: goto label_121804;
        case 0x121808u: goto label_121808;
        case 0x12180cu: goto label_12180c;
        case 0x121810u: goto label_121810;
        case 0x121814u: goto label_121814;
        case 0x121818u: goto label_121818;
        case 0x12181cu: goto label_12181c;
        case 0x121820u: goto label_121820;
        case 0x121824u: goto label_121824;
        case 0x121828u: goto label_121828;
        case 0x12182cu: goto label_12182c;
        case 0x121830u: goto label_121830;
        case 0x121834u: goto label_121834;
        case 0x121838u: goto label_121838;
        case 0x12183cu: goto label_12183c;
        case 0x121840u: goto label_121840;
        case 0x121844u: goto label_121844;
        case 0x121848u: goto label_121848;
        case 0x12184cu: goto label_12184c;
        case 0x121850u: goto label_121850;
        case 0x121854u: goto label_121854;
        case 0x121858u: goto label_121858;
        case 0x12185cu: goto label_12185c;
        case 0x121860u: goto label_121860;
        case 0x121864u: goto label_121864;
        case 0x121868u: goto label_121868;
        case 0x12186cu: goto label_12186c;
        case 0x121870u: goto label_121870;
        case 0x121874u: goto label_121874;
        case 0x121878u: goto label_121878;
        case 0x12187cu: goto label_12187c;
        case 0x121880u: goto label_121880;
        case 0x121884u: goto label_121884;
        case 0x121888u: goto label_121888;
        case 0x12188cu: goto label_12188c;
        case 0x121890u: goto label_121890;
        case 0x121894u: goto label_121894;
        case 0x121898u: goto label_121898;
        case 0x12189cu: goto label_12189c;
        case 0x1218a0u: goto label_1218a0;
        case 0x1218a4u: goto label_1218a4;
        case 0x1218a8u: goto label_1218a8;
        case 0x1218acu: goto label_1218ac;
        case 0x1218b0u: goto label_1218b0;
        case 0x1218b4u: goto label_1218b4;
        case 0x1218b8u: goto label_1218b8;
        case 0x1218bcu: goto label_1218bc;
        case 0x1218c0u: goto label_1218c0;
        case 0x1218c4u: goto label_1218c4;
        case 0x1218c8u: goto label_1218c8;
        case 0x1218ccu: goto label_1218cc;
        case 0x1218d0u: goto label_1218d0;
        case 0x1218d4u: goto label_1218d4;
        case 0x1218d8u: goto label_1218d8;
        case 0x1218dcu: goto label_1218dc;
        case 0x1218e0u: goto label_1218e0;
        case 0x1218e4u: goto label_1218e4;
        case 0x1218e8u: goto label_1218e8;
        case 0x1218ecu: goto label_1218ec;
        case 0x1218f0u: goto label_1218f0;
        case 0x1218f4u: goto label_1218f4;
        case 0x1218f8u: goto label_1218f8;
        case 0x1218fcu: goto label_1218fc;
        case 0x121900u: goto label_121900;
        case 0x121904u: goto label_121904;
        case 0x121908u: goto label_121908;
        case 0x12190cu: goto label_12190c;
        case 0x121910u: goto label_121910;
        case 0x121914u: goto label_121914;
        case 0x121918u: goto label_121918;
        case 0x12191cu: goto label_12191c;
        case 0x121920u: goto label_121920;
        case 0x121924u: goto label_121924;
        case 0x121928u: goto label_121928;
        case 0x12192cu: goto label_12192c;
        case 0x121930u: goto label_121930;
        case 0x121934u: goto label_121934;
        case 0x121938u: goto label_121938;
        case 0x12193cu: goto label_12193c;
        case 0x121940u: goto label_121940;
        case 0x121944u: goto label_121944;
        case 0x121948u: goto label_121948;
        case 0x12194cu: goto label_12194c;
        case 0x121950u: goto label_121950;
        case 0x121954u: goto label_121954;
        case 0x121958u: goto label_121958;
        case 0x12195cu: goto label_12195c;
        case 0x121960u: goto label_121960;
        case 0x121964u: goto label_121964;
        case 0x121968u: goto label_121968;
        case 0x12196cu: goto label_12196c;
        case 0x121970u: goto label_121970;
        case 0x121974u: goto label_121974;
        case 0x121978u: goto label_121978;
        case 0x12197cu: goto label_12197c;
        case 0x121980u: goto label_121980;
        case 0x121984u: goto label_121984;
        case 0x121988u: goto label_121988;
        case 0x12198cu: goto label_12198c;
        case 0x121990u: goto label_121990;
        case 0x121994u: goto label_121994;
        case 0x121998u: goto label_121998;
        case 0x12199cu: goto label_12199c;
        case 0x1219a0u: goto label_1219a0;
        case 0x1219a4u: goto label_1219a4;
        case 0x1219a8u: goto label_1219a8;
        case 0x1219acu: goto label_1219ac;
        case 0x1219b0u: goto label_1219b0;
        case 0x1219b4u: goto label_1219b4;
        case 0x1219b8u: goto label_1219b8;
        case 0x1219bcu: goto label_1219bc;
        case 0x1219c0u: goto label_1219c0;
        case 0x1219c4u: goto label_1219c4;
        case 0x1219c8u: goto label_1219c8;
        case 0x1219ccu: goto label_1219cc;
        case 0x1219d0u: goto label_1219d0;
        case 0x1219d4u: goto label_1219d4;
        case 0x1219d8u: goto label_1219d8;
        case 0x1219dcu: goto label_1219dc;
        case 0x1219e0u: goto label_1219e0;
        case 0x1219e4u: goto label_1219e4;
        case 0x1219e8u: goto label_1219e8;
        case 0x1219ecu: goto label_1219ec;
        case 0x1219f0u: goto label_1219f0;
        case 0x1219f4u: goto label_1219f4;
        case 0x1219f8u: goto label_1219f8;
        case 0x1219fcu: goto label_1219fc;
        case 0x121a00u: goto label_121a00;
        case 0x121a04u: goto label_121a04;
        case 0x121a08u: goto label_121a08;
        case 0x121a0cu: goto label_121a0c;
        case 0x121a10u: goto label_121a10;
        case 0x121a14u: goto label_121a14;
        case 0x121a18u: goto label_121a18;
        case 0x121a1cu: goto label_121a1c;
        case 0x121a20u: goto label_121a20;
        case 0x121a24u: goto label_121a24;
        case 0x121a28u: goto label_121a28;
        case 0x121a2cu: goto label_121a2c;
        case 0x121a30u: goto label_121a30;
        case 0x121a34u: goto label_121a34;
        case 0x121a38u: goto label_121a38;
        case 0x121a3cu: goto label_121a3c;
        case 0x121a40u: goto label_121a40;
        case 0x121a44u: goto label_121a44;
        case 0x121a48u: goto label_121a48;
        case 0x121a4cu: goto label_121a4c;
        case 0x121a50u: goto label_121a50;
        case 0x121a54u: goto label_121a54;
        case 0x121a58u: goto label_121a58;
        case 0x121a5cu: goto label_121a5c;
        case 0x121a60u: goto label_121a60;
        case 0x121a64u: goto label_121a64;
        case 0x121a68u: goto label_121a68;
        case 0x121a6cu: goto label_121a6c;
        case 0x121a70u: goto label_121a70;
        case 0x121a74u: goto label_121a74;
        case 0x121a78u: goto label_121a78;
        case 0x121a7cu: goto label_121a7c;
        case 0x121a80u: goto label_121a80;
        case 0x121a84u: goto label_121a84;
        case 0x121a88u: goto label_121a88;
        case 0x121a8cu: goto label_121a8c;
        case 0x121a90u: goto label_121a90;
        case 0x121a94u: goto label_121a94;
        case 0x121a98u: goto label_121a98;
        case 0x121a9cu: goto label_121a9c;
        case 0x121aa0u: goto label_121aa0;
        case 0x121aa4u: goto label_121aa4;
        case 0x121aa8u: goto label_121aa8;
        case 0x121aacu: goto label_121aac;
        case 0x121ab0u: goto label_121ab0;
        case 0x121ab4u: goto label_121ab4;
        case 0x121ab8u: goto label_121ab8;
        case 0x121abcu: goto label_121abc;
        case 0x121ac0u: goto label_121ac0;
        case 0x121ac4u: goto label_121ac4;
        case 0x121ac8u: goto label_121ac8;
        case 0x121accu: goto label_121acc;
        case 0x121ad0u: goto label_121ad0;
        case 0x121ad4u: goto label_121ad4;
        case 0x121ad8u: goto label_121ad8;
        case 0x121adcu: goto label_121adc;
        case 0x121ae0u: goto label_121ae0;
        case 0x121ae4u: goto label_121ae4;
        case 0x121ae8u: goto label_121ae8;
        case 0x121aecu: goto label_121aec;
        default: break;
    }

    ctx->pc = 0x121458u;

label_121458:
    // 0x121458: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x121458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_12145c:
    // 0x12145c: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x12145cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_121460:
    // 0x121460: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x121460u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_121464:
    // 0x121464: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x121464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_121468:
    // 0x121468: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x121468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_12146c:
    // 0x12146c: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x12146cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_121470:
    // 0x121470: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x121470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
label_121474:
    // 0x121474: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x121474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
label_121478:
    // 0x121478: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x121478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
label_12147c:
    // 0x12147c: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x12147cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
label_121480:
    // 0x121480: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x121480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
label_121484:
    // 0x121484: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x121484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
label_121488:
    // 0x121488: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x121488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_12148c:
    // 0x12148c: 0xc049d8e  jal         func_127638
label_121490:
    if (ctx->pc == 0x121490u) {
        ctx->pc = 0x121490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12148Cu;
        // 0x121490: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x121494u;
        goto label_121494;
    }
    ctx->pc = 0x12148Cu;
    SET_GPR_U32(ctx, 31, 0x121494u);
    ctx->pc = 0x121490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12148Cu;
    // 0x121490: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x127638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x127638u, 0x12148Cu, 0x121494u)) {
        return;
    }
    ctx->pc = 0x121494u;
label_121494:
    // 0x121494: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_121498:
    if (ctx->pc == 0x121498u) {
        ctx->pc = 0x121498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121494u;
        // 0x121498: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12149Cu;
        goto label_12149c;
    }
    ctx->pc = 0x121494u;
    {
        const bool branch_taken_0x121494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121494u;
        // 0x121498: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121494) {
            ctx->pc = 0x1214C8u;
            goto label_1214c8;
        }
    }
    ctx->pc = 0x12149Cu;
label_12149c:
    // 0x12149c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x12149cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1214a0:
    // 0x1214a0: 0x8c454600  lw          $a1, 0x4600($v0)
    ctx->pc = 0x1214a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17920)));
label_1214a4:
    // 0x1214a4: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1214a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_1214a8:
    // 0x1214a8: 0x50a30008  beql        $a1, $v1, . + 4 + (0x8 << 2)
label_1214ac:
    if (ctx->pc == 0x1214ACu) {
        ctx->pc = 0x1214ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214A8u;
        // 0x1214ac: 0x8e2214b4  lw          $v0, 0x14B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1214B0u;
        goto label_1214b0;
    }
    ctx->pc = 0x1214A8u;
    {
        const bool branch_taken_0x1214a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1214a8) {
            ctx->pc = 0x1214ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1214A8u;
            // 0x1214ac: 0x8e2214b4  lw          $v0, 0x14B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1214CCu;
            goto label_1214cc;
        }
    }
    ctx->pc = 0x1214B0u;
label_1214b0:
    // 0x1214b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1214b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1214b4:
    // 0x1214b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1214b8:
    if (ctx->pc == 0x1214B8u) {
        ctx->pc = 0x1214B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214B4u;
        // 0x1214b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1214BCu;
        goto label_1214bc;
    }
    ctx->pc = 0x1214B4u;
    {
        const bool branch_taken_0x1214b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1214B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214B4u;
        // 0x1214b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214b4) {
            ctx->pc = 0x1214C8u;
            goto label_1214c8;
        }
    }
    ctx->pc = 0x1214BCu;
label_1214bc:
    // 0x1214bc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1214bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1214c0:
    // 0x1214c0: 0xc07fd18  jal         func_1FF460
label_1214c4:
    if (ctx->pc == 0x1214C4u) {
        ctx->pc = 0x1214C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214C0u;
        // 0x1214c4: 0xafb10004  sw          $s1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1214C8u;
        goto label_1214c8;
    }
    ctx->pc = 0x1214C0u;
    SET_GPR_U32(ctx, 31, 0x1214C8u);
    ctx->pc = 0x1214C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1214C0u;
    // 0x1214c4: 0xafb10004  sw          $s1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1214C0u, 0x1214C8u)) {
        return;
    }
    ctx->pc = 0x1214C8u;
label_1214c8:
    // 0x1214c8: 0x8e2214b4  lw          $v0, 0x14B4($s1)
    ctx->pc = 0x1214c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5300)));
label_1214cc:
    // 0x1214cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1214d0:
    if (ctx->pc == 0x1214D0u) {
        ctx->pc = 0x1214D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214CCu;
        // 0x1214d0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1214D4u;
        goto label_1214d4;
    }
    ctx->pc = 0x1214CCu;
    {
        const bool branch_taken_0x1214cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1214D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214CCu;
        // 0x1214d0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214cc) {
            ctx->pc = 0x1214E0u;
            goto label_1214e0;
        }
    }
    ctx->pc = 0x1214D4u;
label_1214d4:
    // 0x1214d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1214d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1214d8:
    // 0x1214d8: 0xc049cb8  jal         func_1272E0
label_1214dc:
    if (ctx->pc == 0x1214DCu) {
        ctx->pc = 0x1214DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214D8u;
        // 0x1214dc: 0xae2214b4  sw          $v0, 0x14B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1214E0u;
        goto label_1214e0;
    }
    ctx->pc = 0x1214D8u;
    SET_GPR_U32(ctx, 31, 0x1214E0u);
    ctx->pc = 0x1214DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1214D8u;
    // 0x1214dc: 0xae2214b4  sw          $v0, 0x14B4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5300), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1272E0u, 0x1214D8u, 0x1214E0u)) {
        return;
    }
    ctx->pc = 0x1214E0u;
label_1214e0:
    // 0x1214e0: 0xc6200bc4  lwc1        $f0, 0xBC4($s1)
    ctx->pc = 0x1214e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1214e4:
    // 0x1214e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1214e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1214e8:
    // 0x1214e8: 0x0  nop
    ctx->pc = 0x1214e8u;
    // NOP
label_1214ec:
    // 0x1214ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1214ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1214f0:
    // 0x1214f0: 0x0  nop
    ctx->pc = 0x1214f0u;
    // NOP
label_1214f4:
    // 0x1214f4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1214f8:
    if (ctx->pc == 0x1214F8u) {
        ctx->pc = 0x1214FCu;
        goto label_1214fc;
    }
    ctx->pc = 0x1214F4u;
    {
        const bool branch_taken_0x1214f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1214f4) {
            ctx->pc = 0x12152Cu;
            goto label_12152c;
        }
    }
    ctx->pc = 0x1214FCu;
label_1214fc:
    // 0x1214fc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1214fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_121500:
    // 0x121500: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x121500u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_121504:
    // 0x121504: 0x0  nop
    ctx->pc = 0x121504u;
    // NOP
label_121508:
    // 0x121508: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_12150c:
    if (ctx->pc == 0x12150Cu) {
        ctx->pc = 0x12150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121508u;
        // 0x12150c: 0xe6200bc4  swc1        $f0, 0xBC4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3012), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x121510u;
        goto label_121510;
    }
    ctx->pc = 0x121508u;
    {
        const bool branch_taken_0x121508 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121508u;
        // 0x12150c: 0xe6200bc4  swc1        $f0, 0xBC4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3012), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121508) {
            ctx->pc = 0x12152Cu;
            goto label_12152c;
        }
    }
    ctx->pc = 0x121510u;
label_121510:
    // 0x121510: 0xe6210bc4  swc1        $f1, 0xBC4($s1)
    ctx->pc = 0x121510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3012), bits); }
label_121514:
    // 0x121514: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x121514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_121518:
    // 0x121518: 0xc62c0bc0  lwc1        $f12, 0xBC0($s1)
    ctx->pc = 0x121518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12151c:
    // 0x12151c: 0x844402a0  lh          $a0, 0x2A0($v0)
    ctx->pc = 0x12151cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 672)));
label_121520:
    // 0x121520: 0x8c4302a4  lw          $v1, 0x2A4($v0)
    ctx->pc = 0x121520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 676)));
label_121524:
    // 0x121524: 0x60f809  jalr        $v1
label_121528:
    if (ctx->pc == 0x121528u) {
        ctx->pc = 0x121528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121524u;
        // 0x121528: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12152Cu;
        goto label_12152c;
    }
    ctx->pc = 0x121524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12152Cu);
        ctx->pc = 0x121528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121524u;
        // 0x121528: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121524u, 0x12152Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12152Cu;
label_12152c:
    // 0x12152c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12152cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_121530:
    // 0x121530: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x121530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121534:
    // 0x121534: 0x8e240c70  lw          $a0, 0xC70($s1)
    ctx->pc = 0x121534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3184)));
label_121538:
    // 0x121538: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x121538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_12153c:
    // 0x12153c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x12153cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_121540:
    // 0x121540: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_121544:
    if (ctx->pc == 0x121544u) {
        ctx->pc = 0x121544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121540u;
        // 0x121544: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121548u;
        goto label_121548;
    }
    ctx->pc = 0x121540u;
    {
        const bool branch_taken_0x121540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x121544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121540u;
        // 0x121544: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121540) {
            ctx->pc = 0x121550u;
            goto label_121550;
        }
    }
    ctx->pc = 0x121548u;
label_121548:
    // 0x121548: 0xc0411ce  jal         func_104738
label_12154c:
    if (ctx->pc == 0x12154Cu) {
        ctx->pc = 0x121550u;
        goto label_121550;
    }
    ctx->pc = 0x121548u;
    SET_GPR_U32(ctx, 31, 0x121550u);
    ctx->pc = 0x104738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x104738u, 0x121548u, 0x121550u)) {
        return;
    }
    ctx->pc = 0x121550u;
label_121550:
    // 0x121550: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x121550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_121554:
    // 0x121554: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x121554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
label_121558:
    // 0x121558: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x121558u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_12155c:
    // 0x12155c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x12155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_121560:
    // 0x121560: 0x40f809  jalr        $v0
label_121564:
    if (ctx->pc == 0x121564u) {
        ctx->pc = 0x121564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121560u;
        // 0x121564: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121568u;
        goto label_121568;
    }
    ctx->pc = 0x121560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x121568u);
        ctx->pc = 0x121564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121560u;
        // 0x121564: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121560u, 0x121568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121568u;
label_121568:
    // 0x121568: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_12156c:
    if (ctx->pc == 0x12156Cu) {
        ctx->pc = 0x12156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121568u;
        // 0x12156c: 0x26220320  addiu       $v0, $s1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121570u;
        goto label_121570;
    }
    ctx->pc = 0x121568u;
    {
        const bool branch_taken_0x121568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121568u;
        // 0x12156c: 0x26220320  addiu       $v0, $s1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121568) {
            ctx->pc = 0x12157Cu;
            goto label_12157c;
        }
    }
    ctx->pc = 0x121570u;
label_121570:
    // 0x121570: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x121570u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121574:
    // 0x121574: 0x10000003  b           . + 4 + (0x3 << 2)
label_121578:
    if (ctx->pc == 0x121578u) {
        ctx->pc = 0x121578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121574u;
        // 0x121578: 0x8c450838  lw          $a1, 0x838($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12157Cu;
        goto label_12157c;
    }
    ctx->pc = 0x121574u;
    {
        const bool branch_taken_0x121574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121574u;
        // 0x121578: 0x8c450838  lw          $a1, 0x838($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121574) {
            ctx->pc = 0x121584u;
            goto label_121584;
        }
    }
    ctx->pc = 0x12157Cu;
label_12157c:
    // 0x12157c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12157cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121580:
    // 0x121580: 0x26340320  addiu       $s4, $s1, 0x320
    ctx->pc = 0x121580u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_121584:
    // 0x121584: 0x8e240c70  lw          $a0, 0xC70($s1)
    ctx->pc = 0x121584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3184)));
label_121588:
    // 0x121588: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_12158c:
    if (ctx->pc == 0x12158Cu) {
        ctx->pc = 0x121590u;
        goto label_121590;
    }
    ctx->pc = 0x121588u;
    {
        const bool branch_taken_0x121588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x121588) {
            ctx->pc = 0x121598u;
            goto label_121598;
        }
    }
    ctx->pc = 0x121590u;
label_121590:
    // 0x121590: 0xc041126  jal         func_104498
label_121594:
    if (ctx->pc == 0x121594u) {
        ctx->pc = 0x121598u;
        goto label_121598;
    }
    ctx->pc = 0x121590u;
    SET_GPR_U32(ctx, 31, 0x121598u);
    ctx->pc = 0x104498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x104498u, 0x121590u, 0x121598u)) {
        return;
    }
    ctx->pc = 0x121598u;
label_121598:
    // 0x121598: 0xc04094c  jal         func_102530
label_12159c:
    if (ctx->pc == 0x12159Cu) {
        ctx->pc = 0x12159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121598u;
        // 0x12159c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1215A0u;
        goto label_1215a0;
    }
    ctx->pc = 0x121598u;
    SET_GPR_U32(ctx, 31, 0x1215A0u);
    ctx->pc = 0x12159Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121598u;
    // 0x12159c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102530u, 0x121598u, 0x1215A0u)) {
        return;
    }
    ctx->pc = 0x1215A0u;
label_1215a0:
    // 0x1215a0: 0xc681081c  lwc1        $f1, 0x81C($s4)
    ctx->pc = 0x1215a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1215a4:
    // 0x1215a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1215a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1215a8:
    // 0x1215a8: 0xe680081c  swc1        $f0, 0x81C($s4)
    ctx->pc = 0x1215a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 2076), bits); }
label_1215ac:
    // 0x1215ac: 0xc040950  jal         func_102540
label_1215b0:
    if (ctx->pc == 0x1215B0u) {
        ctx->pc = 0x1215B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215ACu;
        // 0x1215b0: 0xe6810820  swc1        $f1, 0x820($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 2080), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1215B4u;
        goto label_1215b4;
    }
    ctx->pc = 0x1215ACu;
    SET_GPR_U32(ctx, 31, 0x1215B4u);
    ctx->pc = 0x1215B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1215ACu;
    // 0x1215b0: 0xe6810820  swc1        $f1, 0x820($s4) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 2080), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x102540u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102540u, 0x1215ACu, 0x1215B4u)) {
        return;
    }
    ctx->pc = 0x1215B4u;
label_1215b4:
    // 0x1215b4: 0xc6810828  lwc1        $f1, 0x828($s4)
    ctx->pc = 0x1215b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1215b8:
    // 0x1215b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1215b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1215bc:
    // 0x1215bc: 0xe6800828  swc1        $f0, 0x828($s4)
    ctx->pc = 0x1215bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 2088), bits); }
label_1215c0:
    // 0x1215c0: 0xe681082c  swc1        $f1, 0x82C($s4)
    ctx->pc = 0x1215c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 2092), bits); }
label_1215c4:
    // 0x1215c4: 0x8e2201a4  lw          $v0, 0x1A4($s1)
    ctx->pc = 0x1215c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
label_1215c8:
    // 0x1215c8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1215c8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_1215cc:
    // 0x1215cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1215ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1215d0:
    // 0x1215d0: 0xc04095e  jal         func_102578
label_1215d4:
    if (ctx->pc == 0x1215D4u) {
        ctx->pc = 0x1215D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215D0u;
        // 0x1215d4: 0xae820894  sw          $v0, 0x894($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1215D8u;
        goto label_1215d8;
    }
    ctx->pc = 0x1215D0u;
    SET_GPR_U32(ctx, 31, 0x1215D8u);
    ctx->pc = 0x1215D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1215D0u;
    // 0x1215d4: 0xae820894  sw          $v0, 0x894($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 2196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102578u, 0x1215D0u, 0x1215D8u)) {
        return;
    }
    ctx->pc = 0x1215D8u;
label_1215d8:
    // 0x1215d8: 0xe6800824  swc1        $f0, 0x824($s4)
    ctx->pc = 0x1215d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 2084), bits); }
label_1215dc:
    // 0x1215dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1215dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1215e0:
    // 0x1215e0: 0x26250d94  addiu       $a1, $s1, 0xD94
    ctx->pc = 0x1215e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3476));
label_1215e4:
    // 0x1215e4: 0xc067fca  jal         func_19FF28
label_1215e8:
    if (ctx->pc == 0x1215E8u) {
        ctx->pc = 0x1215E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215E4u;
        // 0x1215e8: 0x8e260de0  lw          $a2, 0xDE0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1215ECu;
        goto label_1215ec;
    }
    ctx->pc = 0x1215E4u;
    SET_GPR_U32(ctx, 31, 0x1215ECu);
    ctx->pc = 0x1215E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1215E4u;
    // 0x1215e8: 0x8e260de0  lw          $a2, 0xDE0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x1215E4u, 0x1215ECu)) {
        return;
    }
    ctx->pc = 0x1215ECu;
label_1215ec:
    // 0x1215ec: 0x8e260de4  lw          $a2, 0xDE4($s1)
    ctx->pc = 0x1215ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3556)));
label_1215f0:
    // 0x1215f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1215f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1215f4:
    // 0x1215f4: 0xc067fca  jal         func_19FF28
label_1215f8:
    if (ctx->pc == 0x1215F8u) {
        ctx->pc = 0x1215F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215F4u;
        // 0x1215f8: 0x26250d9c  addiu       $a1, $s1, 0xD9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3484));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1215FCu;
        goto label_1215fc;
    }
    ctx->pc = 0x1215F4u;
    SET_GPR_U32(ctx, 31, 0x1215FCu);
    ctx->pc = 0x1215F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1215F4u;
    // 0x1215f8: 0x26250d9c  addiu       $a1, $s1, 0xD9C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3484));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x1215F4u, 0x1215FCu)) {
        return;
    }
    ctx->pc = 0x1215FCu;
label_1215fc:
    // 0x1215fc: 0x8e260de8  lw          $a2, 0xDE8($s1)
    ctx->pc = 0x1215fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3560)));
label_121600:
    // 0x121600: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x121600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_121604:
    // 0x121604: 0xc067fca  jal         func_19FF28
label_121608:
    if (ctx->pc == 0x121608u) {
        ctx->pc = 0x121608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121604u;
        // 0x121608: 0x26250da4  addiu       $a1, $s1, 0xDA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3492));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12160Cu;
        goto label_12160c;
    }
    ctx->pc = 0x121604u;
    SET_GPR_U32(ctx, 31, 0x12160Cu);
    ctx->pc = 0x121608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121604u;
    // 0x121608: 0x26250da4  addiu       $a1, $s1, 0xDA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3492));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x121604u, 0x12160Cu)) {
        return;
    }
    ctx->pc = 0x12160Cu;
label_12160c:
    // 0x12160c: 0x8e260dd4  lw          $a2, 0xDD4($s1)
    ctx->pc = 0x12160cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3540)));
label_121610:
    // 0x121610: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x121610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_121614:
    // 0x121614: 0xc067ffc  jal         func_19FFF0
label_121618:
    if (ctx->pc == 0x121618u) {
        ctx->pc = 0x121618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121614u;
        // 0x121618: 0x26250dac  addiu       $a1, $s1, 0xDAC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12161Cu;
        goto label_12161c;
    }
    ctx->pc = 0x121614u;
    SET_GPR_U32(ctx, 31, 0x12161Cu);
    ctx->pc = 0x121618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121614u;
    // 0x121618: 0x26250dac  addiu       $a1, $s1, 0xDAC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FFF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FFF0u, 0x121614u, 0x12161Cu)) {
        return;
    }
    ctx->pc = 0x12161Cu;
label_12161c:
    // 0x12161c: 0x8e260dec  lw          $a2, 0xDEC($s1)
    ctx->pc = 0x12161cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3564)));
label_121620:
    // 0x121620: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x121620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_121624:
    // 0x121624: 0xc067fca  jal         func_19FF28
label_121628:
    if (ctx->pc == 0x121628u) {
        ctx->pc = 0x121628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121624u;
        // 0x121628: 0x26250db4  addiu       $a1, $s1, 0xDB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3508));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12162Cu;
        goto label_12162c;
    }
    ctx->pc = 0x121624u;
    SET_GPR_U32(ctx, 31, 0x12162Cu);
    ctx->pc = 0x121628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121624u;
    // 0x121628: 0x26250db4  addiu       $a1, $s1, 0xDB4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3508));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x121624u, 0x12162Cu)) {
        return;
    }
    ctx->pc = 0x12162Cu;
label_12162c:
    // 0x12162c: 0xc62c0bdc  lwc1        $f12, 0xBDC($s1)
    ctx->pc = 0x12162cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_121630:
    // 0x121630: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x121630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_121634:
    // 0x121634: 0xc06802e  jal         func_1A00B8
label_121638:
    if (ctx->pc == 0x121638u) {
        ctx->pc = 0x121638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121634u;
        // 0x121638: 0x26250d1c  addiu       $a1, $s1, 0xD1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12163Cu;
        goto label_12163c;
    }
    ctx->pc = 0x121634u;
    SET_GPR_U32(ctx, 31, 0x12163Cu);
    ctx->pc = 0x121638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121634u;
    // 0x121638: 0x26250d1c  addiu       $a1, $s1, 0xD1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x121634u, 0x12163Cu)) {
        return;
    }
    ctx->pc = 0x12163Cu;
label_12163c:
    // 0x12163c: 0xc62c0d14  lwc1        $f12, 0xD14($s1)
    ctx->pc = 0x12163cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_121640:
    // 0x121640: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x121640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_121644:
    // 0x121644: 0xc06802e  jal         func_1A00B8
label_121648:
    if (ctx->pc == 0x121648u) {
        ctx->pc = 0x121648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121644u;
        // 0x121648: 0x26250dbc  addiu       $a1, $s1, 0xDBC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3516));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12164Cu;
        goto label_12164c;
    }
    ctx->pc = 0x121644u;
    SET_GPR_U32(ctx, 31, 0x12164Cu);
    ctx->pc = 0x121648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121644u;
    // 0x121648: 0x26250dbc  addiu       $a1, $s1, 0xDBC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3516));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x121644u, 0x12164Cu)) {
        return;
    }
    ctx->pc = 0x12164Cu;
label_12164c:
    // 0x12164c: 0x8e220c9c  lw          $v0, 0xC9C($s1)
    ctx->pc = 0x12164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3228)));
label_121650:
    // 0x121650: 0xae200de0  sw          $zero, 0xDE0($s1)
    ctx->pc = 0x121650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3552), GPR_U32(ctx, 0));
label_121654:
    // 0x121654: 0xae200de4  sw          $zero, 0xDE4($s1)
    ctx->pc = 0x121654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3556), GPR_U32(ctx, 0));
label_121658:
    // 0x121658: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_12165c:
    if (ctx->pc == 0x12165Cu) {
        ctx->pc = 0x12165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121658u;
        // 0x12165c: 0xae200de8  sw          $zero, 0xDE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121660u;
        goto label_121660;
    }
    ctx->pc = 0x121658u;
    {
        const bool branch_taken_0x121658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121658u;
        // 0x12165c: 0xae200de8  sw          $zero, 0xDE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121658) {
            ctx->pc = 0x12168Cu;
            goto label_12168c;
        }
    }
    ctx->pc = 0x121660u;
label_121660:
    // 0x121660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_121664:
    // 0x121664: 0xc0497e8  jal         func_125FA0
label_121668:
    if (ctx->pc == 0x121668u) {
        ctx->pc = 0x121668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121664u;
        // 0x121668: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12166Cu;
        goto label_12166c;
    }
    ctx->pc = 0x121664u;
    SET_GPR_U32(ctx, 31, 0x12166Cu);
    ctx->pc = 0x121668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121664u;
    // 0x121668: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x125FA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x125FA0u, 0x121664u, 0x12166Cu)) {
        return;
    }
    ctx->pc = 0x12166Cu;
label_12166c:
    // 0x12166c: 0x1000000b  b           . + 4 + (0xB << 2)
label_121670:
    if (ctx->pc == 0x121670u) {
        ctx->pc = 0x121670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12166Cu;
        // 0x121670: 0x8e220c8c  lw          $v0, 0xC8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121674u;
        goto label_121674;
    }
    ctx->pc = 0x12166Cu;
    {
        const bool branch_taken_0x12166c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12166Cu;
        // 0x121670: 0x8e220c8c  lw          $v0, 0xC8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12166c) {
            ctx->pc = 0x12169Cu;
            goto label_12169c;
        }
    }
    ctx->pc = 0x121674u;
label_121674:
    // 0x121674: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_121678:
    // 0x121678: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x121678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12167c:
    // 0x12167c: 0x0  nop
    ctx->pc = 0x12167cu;
    // NOP
label_121680:
    // 0x121680: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x121680u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_121684:
    // 0x121684: 0x10000064  b           . + 4 + (0x64 << 2)
label_121688:
    if (ctx->pc == 0x121688u) {
        ctx->pc = 0x121688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121684u;
        // 0x121688: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12168Cu;
        goto label_12168c;
    }
    ctx->pc = 0x121684u;
    {
        const bool branch_taken_0x121684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121684u;
        // 0x121688: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121684) {
            ctx->pc = 0x121818u;
            goto label_121818;
        }
    }
    ctx->pc = 0x12168Cu;
label_12168c:
    // 0x12168c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12168cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_121690:
    // 0x121690: 0xc0486bc  jal         func_121AF0
label_121694:
    if (ctx->pc == 0x121694u) {
        ctx->pc = 0x121694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121690u;
        // 0x121694: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x121698u;
        goto label_121698;
    }
    ctx->pc = 0x121690u;
    SET_GPR_U32(ctx, 31, 0x121698u);
    ctx->pc = 0x121694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121690u;
    // 0x121694: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x121AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x121AF0u, 0x121690u, 0x121698u)) {
        return;
    }
    ctx->pc = 0x121698u;
label_121698:
    // 0x121698: 0x8e220c8c  lw          $v0, 0xC8C($s1)
    ctx->pc = 0x121698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3212)));
label_12169c:
    // 0x12169c: 0x6a230d07  ldl         $v1, 0xD07($s1)
    ctx->pc = 0x12169cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1216a0:
    // 0x1216a0: 0x6e230d00  ldr         $v1, 0xD00($s1)
    ctx->pc = 0x1216a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1216a4:
    // 0x1216a4: 0x8e240d08  lw          $a0, 0xD08($s1)
    ctx->pc = 0x1216a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3336)));
label_1216a8:
    // 0x1216a8: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x1216a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1216ac:
    // 0x1216ac: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x1216acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1216b0:
    // 0x1216b0: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1216b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1216b4:
    // 0x1216b4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1216b8:
    if (ctx->pc == 0x1216B8u) {
        ctx->pc = 0x1216B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1216B4u;
        // 0x1216b8: 0x8e230034  lw          $v1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1216BCu;
        goto label_1216bc;
    }
    ctx->pc = 0x1216B4u;
    {
        const bool branch_taken_0x1216b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1216b4) {
            ctx->pc = 0x1216B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1216B4u;
            // 0x1216b8: 0x8e230034  lw          $v1, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1216CCu;
            goto label_1216cc;
        }
    }
    ctx->pc = 0x1216BCu;
label_1216bc:
    // 0x1216bc: 0x8e220e64  lw          $v0, 0xE64($s1)
    ctx->pc = 0x1216bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3684)));
label_1216c0:
    // 0x1216c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1216c4:
    if (ctx->pc == 0x1216C4u) {
        ctx->pc = 0x1216C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1216C0u;
        // 0x1216c4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1216C8u;
        goto label_1216c8;
    }
    ctx->pc = 0x1216C0u;
    {
        const bool branch_taken_0x1216c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1216C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1216C0u;
        // 0x1216c4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1216c0) {
            ctx->pc = 0x1216E8u;
            goto label_1216e8;
        }
    }
    ctx->pc = 0x1216C8u;
label_1216c8:
    // 0x1216c8: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1216c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1216cc:
    // 0x1216cc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1216ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1216d0:
    // 0x1216d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1216d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1216d4:
    // 0x1216d4: 0x84640208  lh          $a0, 0x208($v1)
    ctx->pc = 0x1216d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 520)));
label_1216d8:
    // 0x1216d8: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x1216d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_1216dc:
    // 0x1216dc: 0x40f809  jalr        $v0
label_1216e0:
    if (ctx->pc == 0x1216E0u) {
        ctx->pc = 0x1216E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1216DCu;
        // 0x1216e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1216E4u;
        goto label_1216e4;
    }
    ctx->pc = 0x1216DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1216E4u);
        ctx->pc = 0x1216E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1216DCu;
        // 0x1216e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1216DCu, 0x1216E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1216E4u;
label_1216e4:
    // 0x1216e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1216e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1216e8:
    // 0x1216e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1216e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1216ec:
    // 0x1216ec: 0xc049a1e  jal         func_126878
label_1216f0:
    if (ctx->pc == 0x1216F0u) {
        ctx->pc = 0x1216F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1216ECu;
        // 0x1216f0: 0x26370d2c  addiu       $s7, $s1, 0xD2C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 3372));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1216F4u;
        goto label_1216f4;
    }
    ctx->pc = 0x1216ECu;
    SET_GPR_U32(ctx, 31, 0x1216F4u);
    ctx->pc = 0x1216F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1216ECu;
    // 0x1216f0: 0x26370d2c  addiu       $s7, $s1, 0xD2C (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 3372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126878u, 0x1216ECu, 0x1216F4u)) {
        return;
    }
    ctx->pc = 0x1216F4u;
label_1216f4:
    // 0x1216f4: 0x263e0d34  addiu       $fp, $s1, 0xD34
    ctx->pc = 0x1216f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 3380));
label_1216f8:
    // 0x1216f8: 0x26270d3c  addiu       $a3, $s1, 0xD3C
    ctx->pc = 0x1216f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 3388));
label_1216fc:
    // 0x1216fc: 0x26230d44  addiu       $v1, $s1, 0xD44
    ctx->pc = 0x1216fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3396));
label_121700:
    // 0x121700: 0x26240d4c  addiu       $a0, $s1, 0xD4C
    ctx->pc = 0x121700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3404));
label_121704:
    // 0x121704: 0x26250d54  addiu       $a1, $s1, 0xD54
    ctx->pc = 0x121704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3412));
label_121708:
    // 0x121708: 0xafa70098  sw          $a3, 0x98($sp)
    ctx->pc = 0x121708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 7));
label_12170c:
    // 0x12170c: 0x26260d5c  addiu       $a2, $s1, 0xD5C
    ctx->pc = 0x12170cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 3420));
label_121710:
    // 0x121710: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x121710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_121714:
    // 0x121714: 0x26270d64  addiu       $a3, $s1, 0xD64
    ctx->pc = 0x121714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 3428));
label_121718:
    // 0x121718: 0xafa400a4  sw          $a0, 0xA4($sp)
    ctx->pc = 0x121718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
label_12171c:
    // 0x12171c: 0x26230d6c  addiu       $v1, $s1, 0xD6C
    ctx->pc = 0x12171cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3436));
label_121720:
    // 0x121720: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x121720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_121724:
    // 0x121724: 0x26240d8c  addiu       $a0, $s1, 0xD8C
    ctx->pc = 0x121724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3468));
label_121728:
    // 0x121728: 0x26250f84  addiu       $a1, $s1, 0xF84
    ctx->pc = 0x121728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3972));
label_12172c:
    // 0x12172c: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x12172cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
label_121730:
    // 0x121730: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x121730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
label_121734:
    // 0x121734: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x121734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
label_121738:
    // 0x121738: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x121738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
label_12173c:
    // 0x12173c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_121740:
    if (ctx->pc == 0x121740u) {
        ctx->pc = 0x121740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12173Cu;
        // 0x121740: 0xafa500a0  sw          $a1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121744u;
        goto label_121744;
    }
    ctx->pc = 0x12173Cu;
    {
        const bool branch_taken_0x12173c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12173Cu;
        // 0x121740: 0xafa500a0  sw          $a1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12173c) {
            ctx->pc = 0x1217E4u;
            goto label_1217e4;
        }
    }
    ctx->pc = 0x121744u;
label_121744:
    // 0x121744: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x121744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_121748:
    // 0x121748: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x121748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_12174c:
    // 0x12174c: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x12174cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_121750:
    // 0x121750: 0xb2260cf7  sdl         $a2, 0xCF7($s1)
    ctx->pc = 0x121750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_121754:
    // 0x121754: 0xb6260cf0  sdr         $a2, 0xCF0($s1)
    ctx->pc = 0x121754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_121758:
    // 0x121758: 0xae270cf8  sw          $a3, 0xCF8($s1)
    ctx->pc = 0x121758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3320), GPR_U32(ctx, 7));
label_12175c:
    // 0x12175c: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x12175cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_121760:
    // 0x121760: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x121760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_121764:
    // 0x121764: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x121764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_121768:
    // 0x121768: 0xb2240ce7  sdl         $a0, 0xCE7($s1)
    ctx->pc = 0x121768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12176c:
    // 0x12176c: 0xb6240ce0  sdr         $a0, 0xCE0($s1)
    ctx->pc = 0x12176cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_121770:
    // 0x121770: 0xae250ce8  sw          $a1, 0xCE8($s1)
    ctx->pc = 0x121770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3304), GPR_U32(ctx, 5));
label_121774:
    // 0x121774: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x121774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_121778:
    // 0x121778: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x121778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_12177c:
    // 0x12177c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12177cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_121780:
    // 0x121780: 0xb2220d07  sdl         $v0, 0xD07($s1)
    ctx->pc = 0x121780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_121784:
    // 0x121784: 0xb6220d00  sdr         $v0, 0xD00($s1)
    ctx->pc = 0x121784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_121788:
    // 0x121788: 0xae230d08  sw          $v1, 0xD08($s1)
    ctx->pc = 0x121788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3336), GPR_U32(ctx, 3));
label_12178c:
    // 0x12178c: 0x8e22025c  lw          $v0, 0x25C($s1)
    ctx->pc = 0x12178cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_121790:
    // 0x121790: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_121794:
    if (ctx->pc == 0x121794u) {
        ctx->pc = 0x121794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121790u;
        // 0x121794: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121798u;
        goto label_121798;
    }
    ctx->pc = 0x121790u;
    {
        const bool branch_taken_0x121790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121790u;
        // 0x121794: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121790) {
            ctx->pc = 0x1217E4u;
            goto label_1217e4;
        }
    }
    ctx->pc = 0x121798u;
label_121798:
    // 0x121798: 0x3c150034  lui         $s5, 0x34
    ctx->pc = 0x121798u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
label_12179c:
    // 0x12179c: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x12179cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1217a0:
    // 0x1217a0: 0x2632021c  addiu       $s2, $s1, 0x21C
    ctx->pc = 0x1217a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 540));
label_1217a4:
    // 0x1217a4: 0x0  nop
    ctx->pc = 0x1217a4u;
    // NOP
label_1217a8:
    // 0x1217a8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1217a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1217ac:
    // 0x1217ac: 0x8ea48668  lw          $a0, -0x7998($s5)
    ctx->pc = 0x1217acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
label_1217b0:
    // 0x1217b0: 0xc0595cc  jal         func_165730
label_1217b4:
    if (ctx->pc == 0x1217B4u) {
        ctx->pc = 0x1217B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217B0u;
        // 0x1217b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1217B8u;
        goto label_1217b8;
    }
    ctx->pc = 0x1217B0u;
    SET_GPR_U32(ctx, 31, 0x1217B8u);
    ctx->pc = 0x1217B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1217B0u;
    // 0x1217b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165730u, 0x1217B0u, 0x1217B8u)) {
        return;
    }
    ctx->pc = 0x1217B8u;
label_1217b8:
    // 0x1217b8: 0x54560006  bnel        $v0, $s6, . + 4 + (0x6 << 2)
label_1217bc:
    if (ctx->pc == 0x1217BCu) {
        ctx->pc = 0x1217BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217B8u;
        // 0x1217bc: 0x8e22025c  lw          $v0, 0x25C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1217C0u;
        goto label_1217c0;
    }
    ctx->pc = 0x1217B8u;
    {
        const bool branch_taken_0x1217b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1217b8) {
            ctx->pc = 0x1217BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1217B8u;
            // 0x1217bc: 0x8e22025c  lw          $v0, 0x25C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1217D4u;
            goto label_1217d4;
        }
    }
    ctx->pc = 0x1217C0u;
label_1217c0:
    // 0x1217c0: 0x8ea48668  lw          $a0, -0x7998($s5)
    ctx->pc = 0x1217c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
label_1217c4:
    // 0x1217c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1217c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1217c8:
    // 0x1217c8: 0xc05961e  jal         func_165878
label_1217cc:
    if (ctx->pc == 0x1217CCu) {
        ctx->pc = 0x1217CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217C8u;
        // 0x1217cc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1217D0u;
        goto label_1217d0;
    }
    ctx->pc = 0x1217C8u;
    SET_GPR_U32(ctx, 31, 0x1217D0u);
    ctx->pc = 0x1217CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1217C8u;
    // 0x1217cc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165878u, 0x1217C8u, 0x1217D0u)) {
        return;
    }
    ctx->pc = 0x1217D0u;
label_1217d0:
    // 0x1217d0: 0x8e22025c  lw          $v0, 0x25C($s1)
    ctx->pc = 0x1217d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_1217d4:
    // 0x1217d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1217d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1217d8:
    // 0x1217d8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1217d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1217dc:
    // 0x1217dc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1217e0:
    if (ctx->pc == 0x1217E0u) {
        ctx->pc = 0x1217E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217DCu;
        // 0x1217e0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1217E4u;
        goto label_1217e4;
    }
    ctx->pc = 0x1217DCu;
    {
        const bool branch_taken_0x1217dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1217E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217DCu;
        // 0x1217e0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1217dc) {
            ctx->pc = 0x1217A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1217a8;
        }
    }
    ctx->pc = 0x1217E4u;
label_1217e4:
    // 0x1217e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1217e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1217e8:
    // 0x1217e8: 0xc04642c  jal         func_1190B0
label_1217ec:
    if (ctx->pc == 0x1217ECu) {
        ctx->pc = 0x1217ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217E8u;
        // 0x1217ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1217F0u;
        goto label_1217f0;
    }
    ctx->pc = 0x1217E8u;
    SET_GPR_U32(ctx, 31, 0x1217F0u);
    ctx->pc = 0x1217ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1217E8u;
    // 0x1217ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1217E8u, 0x1217F0u)) {
        return;
    }
    ctx->pc = 0x1217F0u;
label_1217f0:
    // 0x1217f0: 0x0  nop
    ctx->pc = 0x1217f0u;
    // NOP
label_1217f4:
    // 0x1217f4: 0x0  nop
    ctx->pc = 0x1217f4u;
    // NOP
label_1217f8:
    // 0x1217f8: 0x46000044  c1          0x44
    ctx->pc = 0x1217f8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_1217fc:
    // 0x1217fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1217fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121800:
    // 0x121800: 0x0  nop
    ctx->pc = 0x121800u;
    // NOP
label_121804:
    // 0x121804: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x121804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_121808:
    // 0x121808: 0x0  nop
    ctx->pc = 0x121808u;
    // NOP
label_12180c:
    // 0x12180c: 0x4501ff99  bc1t        . + 4 + (-0x67 << 2)
label_121810:
    if (ctx->pc == 0x121810u) {
        ctx->pc = 0x121810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12180Cu;
        // 0x121810: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x121814u;
        goto label_121814;
    }
    ctx->pc = 0x12180Cu;
    {
        const bool branch_taken_0x12180c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x121810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12180Cu;
        // 0x121810: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12180c) {
            ctx->pc = 0x121674u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121674;
        }
    }
    ctx->pc = 0x121814u;
label_121814:
    // 0x121814: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x121814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_121818:
    // 0x121818: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x121818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_12181c:
    // 0x12181c: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x12181cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_121820:
    // 0x121820: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x121820u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_121824:
    // 0x121824: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x121824u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_121828:
    // 0x121828: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x121828u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_12182c:
    // 0x12182c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x12182cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_121830:
    // 0x121830: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x121830u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_121834:
    // 0x121834: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x121834u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_121838:
    // 0x121838: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x121838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12183c:
    // 0x12183c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x12183cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_121840:
    // 0x121840: 0x460219c2  mul.s       $f7, $f3, $f2
    ctx->pc = 0x121840u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_121844:
    // 0x121844: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x121844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_121848:
    // 0x121848: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x121848u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_12184c:
    // 0x12184c: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x12184cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_121850:
    // 0x121850: 0x46060042  mul.s       $f1, $f0, $f6
    ctx->pc = 0x121850u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_121854:
    // 0x121854: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x121854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_121858:
    // 0x121858: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x121858u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_12185c:
    // 0x12185c: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x12185cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
label_121860:
    // 0x121860: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x121860u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_121864:
    // 0x121864: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x121864u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_121868:
    // 0x121868: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x121868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_12186c:
    // 0x12186c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x12186cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_121870:
    // 0x121870: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x121870u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_121874:
    // 0x121874: 0xc04f0f0  jal         func_13C3C0
label_121878:
    if (ctx->pc == 0x121878u) {
        ctx->pc = 0x121878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121874u;
        // 0x121878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12187Cu;
        goto label_12187c;
    }
    ctx->pc = 0x121874u;
    SET_GPR_U32(ctx, 31, 0x12187Cu);
    ctx->pc = 0x121878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121874u;
    // 0x121878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x121874u, 0x12187Cu)) {
        return;
    }
    ctx->pc = 0x12187Cu;
label_12187c:
    // 0x12187c: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x12187cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_121880:
    // 0x121880: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x121880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_121884:
    // 0x121884: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x121884u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_121888:
    // 0x121888: 0xb0460007  sdl         $a2, 0x7($v0)
    ctx->pc = 0x121888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12188c:
    // 0x12188c: 0xb4460000  sdr         $a2, 0x0($v0)
    ctx->pc = 0x12188cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_121890:
    // 0x121890: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x121890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
label_121894:
    // 0x121894: 0xc04f0d4  jal         func_13C350
label_121898:
    if (ctx->pc == 0x121898u) {
        ctx->pc = 0x121898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121894u;
        // 0x121898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12189Cu;
        goto label_12189c;
    }
    ctx->pc = 0x121894u;
    SET_GPR_U32(ctx, 31, 0x12189Cu);
    ctx->pc = 0x121898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121894u;
    // 0x121898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C350u, 0x121894u, 0x12189Cu)) {
        return;
    }
    ctx->pc = 0x12189Cu;
label_12189c:
    // 0x12189c: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x12189cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1218a0:
    // 0x1218a0: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x1218a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1218a4:
    // 0x1218a4: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1218a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1218a8:
    // 0x1218a8: 0xb0460007  sdl         $a2, 0x7($v0)
    ctx->pc = 0x1218a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1218ac:
    // 0x1218ac: 0xb4460000  sdr         $a2, 0x0($v0)
    ctx->pc = 0x1218acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1218b0:
    // 0x1218b0: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x1218b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
label_1218b4:
    // 0x1218b4: 0x6ba50017  ldl         $a1, 0x17($sp)
    ctx->pc = 0x1218b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1218b8:
    // 0x1218b8: 0x6fa50010  ldr         $a1, 0x10($sp)
    ctx->pc = 0x1218b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1218bc:
    // 0x1218bc: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x1218bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1218c0:
    // 0x1218c0: 0xb2250d07  sdl         $a1, 0xD07($s1)
    ctx->pc = 0x1218c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1218c4:
    // 0x1218c4: 0xb6250d00  sdr         $a1, 0xD00($s1)
    ctx->pc = 0x1218c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1218c8:
    // 0x1218c8: 0xae260d08  sw          $a2, 0xD08($s1)
    ctx->pc = 0x1218c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3336), GPR_U32(ctx, 6));
label_1218cc:
    // 0x1218cc: 0x8e230180  lw          $v1, 0x180($s1)
    ctx->pc = 0x1218ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_1218d0:
    // 0x1218d0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1218d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1218d4:
    // 0x1218d4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_1218d8:
    if (ctx->pc == 0x1218D8u) {
        ctx->pc = 0x1218D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218D4u;
        // 0x1218d8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1218DCu;
        goto label_1218dc;
    }
    ctx->pc = 0x1218D4u;
    {
        const bool branch_taken_0x1218d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1218D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218D4u;
        // 0x1218d8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1218d4) {
            ctx->pc = 0x121960u;
            goto label_121960;
        }
    }
    ctx->pc = 0x1218DCu;
label_1218dc:
    // 0x1218dc: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x1218dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1218e0:
    // 0x1218e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1218e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1218e4:
    // 0x1218e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1218e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1218e8:
    // 0x1218e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1218e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1218ec:
    // 0x1218ec: 0xc62c02b0  lwc1        $f12, 0x2B0($s1)
    ctx->pc = 0x1218ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1218f0:
    // 0x1218f0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1218f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1218f4:
    // 0x1218f4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1218f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1218f8:
    // 0x1218f8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1218f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_1218fc:
    // 0x1218fc: 0xc092e32  jal         func_24B8C8
label_121900:
    if (ctx->pc == 0x121900u) {
        ctx->pc = 0x121900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218FCu;
        // 0x121900: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121904u;
        goto label_121904;
    }
    ctx->pc = 0x1218FCu;
    SET_GPR_U32(ctx, 31, 0x121904u);
    ctx->pc = 0x121900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1218FCu;
    // 0x121900: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x1218FCu, 0x121904u)) {
        return;
    }
    ctx->pc = 0x121904u;
label_121904:
    // 0x121904: 0xc08992e  jal         func_2264B8
label_121908:
    if (ctx->pc == 0x121908u) {
        ctx->pc = 0x121908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121904u;
        // 0x121908: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12190Cu;
        goto label_12190c;
    }
    ctx->pc = 0x121904u;
    SET_GPR_U32(ctx, 31, 0x12190Cu);
    ctx->pc = 0x121908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121904u;
    // 0x121908: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x121904u, 0x12190Cu)) {
        return;
    }
    ctx->pc = 0x12190Cu;
label_12190c:
    // 0x12190c: 0x6a030037  ldl         $v1, 0x37($s0)
    ctx->pc = 0x12190cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_121910:
    // 0x121910: 0x6e030030  ldr         $v1, 0x30($s0)
    ctx->pc = 0x121910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_121914:
    // 0x121914: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x121914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_121918:
    // 0x121918: 0xb2230cf7  sdl         $v1, 0xCF7($s1)
    ctx->pc = 0x121918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12191c:
    // 0x12191c: 0xb6230cf0  sdr         $v1, 0xCF0($s1)
    ctx->pc = 0x12191cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_121920:
    // 0x121920: 0xae240cf8  sw          $a0, 0xCF8($s1)
    ctx->pc = 0x121920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3320), GPR_U32(ctx, 4));
label_121924:
    // 0x121924: 0x6a070037  ldl         $a3, 0x37($s0)
    ctx->pc = 0x121924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_121928:
    // 0x121928: 0x6e070030  ldr         $a3, 0x30($s0)
    ctx->pc = 0x121928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_12192c:
    // 0x12192c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x12192cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_121930:
    // 0x121930: 0xb2270ce7  sdl         $a3, 0xCE7($s1)
    ctx->pc = 0x121930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_121934:
    // 0x121934: 0xb6270ce0  sdr         $a3, 0xCE0($s1)
    ctx->pc = 0x121934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_121938:
    // 0x121938: 0xae220ce8  sw          $v0, 0xCE8($s1)
    ctx->pc = 0x121938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3304), GPR_U32(ctx, 2));
label_12193c:
    // 0x12193c: 0x6a050037  ldl         $a1, 0x37($s0)
    ctx->pc = 0x12193cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_121940:
    // 0x121940: 0x6e050030  ldr         $a1, 0x30($s0)
    ctx->pc = 0x121940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_121944:
    // 0x121944: 0x8e060038  lw          $a2, 0x38($s0)
    ctx->pc = 0x121944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_121948:
    // 0x121948: 0xb2250d07  sdl         $a1, 0xD07($s1)
    ctx->pc = 0x121948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12194c:
    // 0x12194c: 0xb6250d00  sdr         $a1, 0xD00($s1)
    ctx->pc = 0x12194cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_121950:
    // 0x121950: 0xae260d08  sw          $a2, 0xD08($s1)
    ctx->pc = 0x121950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3336), GPR_U32(ctx, 6));
label_121954:
    // 0x121954: 0x10000026  b           . + 4 + (0x26 << 2)
label_121958:
    if (ctx->pc == 0x121958u) {
        ctx->pc = 0x121958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121954u;
        // 0x121958: 0x8e2601c8  lw          $a2, 0x1C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12195Cu;
        goto label_12195c;
    }
    ctx->pc = 0x121954u;
    {
        const bool branch_taken_0x121954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121954u;
        // 0x121958: 0x8e2601c8  lw          $a2, 0x1C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121954) {
            ctx->pc = 0x1219F0u;
            goto label_1219f0;
        }
    }
    ctx->pc = 0x12195Cu;
label_12195c:
    // 0x12195c: 0x0  nop
    ctx->pc = 0x12195cu;
    // NOP
label_121960:
    // 0x121960: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x121960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_121964:
    // 0x121964: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_121968:
    if (ctx->pc == 0x121968u) {
        ctx->pc = 0x121968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121964u;
        // 0x121968: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12196Cu;
        goto label_12196c;
    }
    ctx->pc = 0x121964u;
    {
        const bool branch_taken_0x121964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121964u;
        // 0x121968: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121964) {
            ctx->pc = 0x1219E0u;
            goto label_1219e0;
        }
    }
    ctx->pc = 0x12196Cu;
label_12196c:
    // 0x12196c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12196cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_121970:
    // 0x121970: 0x6a230207  ldl         $v1, 0x207($s1)
    ctx->pc = 0x121970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 519); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_121974:
    // 0x121974: 0x6e230200  ldr         $v1, 0x200($s1)
    ctx->pc = 0x121974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 512); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_121978:
    // 0x121978: 0x8e260208  lw          $a2, 0x208($s1)
    ctx->pc = 0x121978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
label_12197c:
    // 0x12197c: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x12197cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_121980:
    // 0x121980: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x121980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_121984:
    // 0x121984: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x121984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
label_121988:
    // 0x121988: 0xc04f0fe  jal         func_13C3F8
label_12198c:
    if (ctx->pc == 0x12198Cu) {
        ctx->pc = 0x12198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121988u;
        // 0x12198c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121990u;
        goto label_121990;
    }
    ctx->pc = 0x121988u;
    SET_GPR_U32(ctx, 31, 0x121990u);
    ctx->pc = 0x12198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121988u;
    // 0x12198c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3F8u, 0x121988u, 0x121990u)) {
        return;
    }
    ctx->pc = 0x121990u;
label_121990:
    // 0x121990: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x121990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_121994:
    // 0x121994: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x121994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121998:
    // 0x121998: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x121998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12199c:
    // 0x12199c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x12199cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1219a0:
    // 0x1219a0: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x1219a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1219a4:
    // 0x1219a4: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x1219a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1219a8:
    // 0x1219a8: 0xc7a50048  lwc1        $f5, 0x48($sp)
    ctx->pc = 0x1219a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1219ac:
    // 0x1219ac: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1219acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1219b0:
    // 0x1219b0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1219b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1219b4:
    // 0x1219b4: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1219b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1219b8:
    // 0x1219b8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1219b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_1219bc:
    // 0x1219bc: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x1219bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1219c0:
    // 0x1219c0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1219c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1219c4:
    // 0x1219c4: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x1219c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1219c8:
    // 0x1219c8: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1219c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1219cc:
    // 0x1219cc: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1219ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1219d0:
    // 0x1219d0: 0x40f809  jalr        $v0
label_1219d4:
    if (ctx->pc == 0x1219D4u) {
        ctx->pc = 0x1219D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219D0u;
        // 0x1219d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1219D8u;
        goto label_1219d8;
    }
    ctx->pc = 0x1219D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1219D8u);
        ctx->pc = 0x1219D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219D0u;
        // 0x1219d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1219D0u, 0x1219D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1219D8u;
label_1219d8:
    // 0x1219d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1219dc:
    if (ctx->pc == 0x1219DCu) {
        ctx->pc = 0x1219DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219D8u;
        // 0x1219dc: 0x8e2601c8  lw          $a2, 0x1C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1219E0u;
        goto label_1219e0;
    }
    ctx->pc = 0x1219D8u;
    {
        const bool branch_taken_0x1219d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1219DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219D8u;
        // 0x1219dc: 0x8e2601c8  lw          $a2, 0x1C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219d8) {
            ctx->pc = 0x1219F0u;
            goto label_1219f0;
        }
    }
    ctx->pc = 0x1219E0u;
label_1219e0:
    // 0x1219e0: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x1219e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1219e4:
    // 0x1219e4: 0xc092d94  jal         func_24B650
label_1219e8:
    if (ctx->pc == 0x1219E8u) {
        ctx->pc = 0x1219E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219E4u;
        // 0x1219e8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1219ECu;
        goto label_1219ec;
    }
    ctx->pc = 0x1219E4u;
    SET_GPR_U32(ctx, 31, 0x1219ECu);
    ctx->pc = 0x1219E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219E4u;
    // 0x1219e8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x1219E4u, 0x1219ECu)) {
        return;
    }
    ctx->pc = 0x1219ECu;
label_1219ec:
    // 0x1219ec: 0x8e2601c8  lw          $a2, 0x1C8($s1)
    ctx->pc = 0x1219ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
label_1219f0:
    // 0x1219f0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1219f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1219f4:
    // 0x1219f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1219f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1219f8:
    // 0x1219f8: 0xc067fca  jal         func_19FF28
label_1219fc:
    if (ctx->pc == 0x1219FCu) {
        ctx->pc = 0x1219FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219F8u;
        // 0x1219fc: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A00u;
        goto label_121a00;
    }
    ctx->pc = 0x1219F8u;
    SET_GPR_U32(ctx, 31, 0x121A00u);
    ctx->pc = 0x1219FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219F8u;
    // 0x1219fc: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x1219F8u, 0x121A00u)) {
        return;
    }
    ctx->pc = 0x121A00u;
label_121a00:
    // 0x121a00: 0x8e2601cc  lw          $a2, 0x1CC($s1)
    ctx->pc = 0x121a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
label_121a04:
    // 0x121a04: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x121a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_121a08:
    // 0x121a08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x121a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_121a0c:
    // 0x121a0c: 0xc067fca  jal         func_19FF28
label_121a10:
    if (ctx->pc == 0x121A10u) {
        ctx->pc = 0x121A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A0Cu;
        // 0x121a10: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A14u;
        goto label_121a14;
    }
    ctx->pc = 0x121A0Cu;
    SET_GPR_U32(ctx, 31, 0x121A14u);
    ctx->pc = 0x121A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A0Cu;
    // 0x121a10: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x121A0Cu, 0x121A14u)) {
        return;
    }
    ctx->pc = 0x121A14u;
label_121a14:
    // 0x121a14: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x121a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_121a18:
    // 0x121a18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x121a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_121a1c:
    // 0x121a1c: 0xc067fca  jal         func_19FF28
label_121a20:
    if (ctx->pc == 0x121A20u) {
        ctx->pc = 0x121A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A1Cu;
        // 0x121a20: 0x8e2601d8  lw          $a2, 0x1D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A24u;
        goto label_121a24;
    }
    ctx->pc = 0x121A1Cu;
    SET_GPR_U32(ctx, 31, 0x121A24u);
    ctx->pc = 0x121A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A1Cu;
    // 0x121a20: 0x8e2601d8  lw          $a2, 0x1D8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x121A1Cu, 0x121A24u)) {
        return;
    }
    ctx->pc = 0x121A24u;
label_121a24:
    // 0x121a24: 0x8fa5009c  lw          $a1, 0x9C($sp)
    ctx->pc = 0x121a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_121a28:
    // 0x121a28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x121a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_121a2c:
    // 0x121a2c: 0xc067fca  jal         func_19FF28
label_121a30:
    if (ctx->pc == 0x121A30u) {
        ctx->pc = 0x121A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A2Cu;
        // 0x121a30: 0x8e2601dc  lw          $a2, 0x1DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A34u;
        goto label_121a34;
    }
    ctx->pc = 0x121A2Cu;
    SET_GPR_U32(ctx, 31, 0x121A34u);
    ctx->pc = 0x121A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A2Cu;
    // 0x121a30: 0x8e2601dc  lw          $a2, 0x1DC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x121A2Cu, 0x121A34u)) {
        return;
    }
    ctx->pc = 0x121A34u;
label_121a34:
    // 0x121a34: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x121a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_121a38:
    // 0x121a38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x121a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_121a3c:
    // 0x121a3c: 0xc06802e  jal         func_1A00B8
label_121a40:
    if (ctx->pc == 0x121A40u) {
        ctx->pc = 0x121A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A3Cu;
        // 0x121a40: 0xc68c0810  lwc1        $f12, 0x810($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A44u;
        goto label_121a44;
    }
    ctx->pc = 0x121A3Cu;
    SET_GPR_U32(ctx, 31, 0x121A44u);
    ctx->pc = 0x121A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A3Cu;
    // 0x121a40: 0xc68c0810  lwc1        $f12, 0x810($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x121A3Cu, 0x121A44u)) {
        return;
    }
    ctx->pc = 0x121A44u;
label_121a44:
    // 0x121a44: 0xc04094c  jal         func_102530
label_121a48:
    if (ctx->pc == 0x121A48u) {
        ctx->pc = 0x121A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A44u;
        // 0x121a48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A4Cu;
        goto label_121a4c;
    }
    ctx->pc = 0x121A44u;
    SET_GPR_U32(ctx, 31, 0x121A4Cu);
    ctx->pc = 0x121A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A44u;
    // 0x121a48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102530u, 0x121A44u, 0x121A4Cu)) {
        return;
    }
    ctx->pc = 0x121A4Cu;
label_121a4c:
    // 0x121a4c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x121a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_121a50:
    // 0x121a50: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x121a50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_121a54:
    // 0x121a54: 0xc06802e  jal         func_1A00B8
label_121a58:
    if (ctx->pc == 0x121A58u) {
        ctx->pc = 0x121A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A54u;
        // 0x121a58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A5Cu;
        goto label_121a5c;
    }
    ctx->pc = 0x121A54u;
    SET_GPR_U32(ctx, 31, 0x121A5Cu);
    ctx->pc = 0x121A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A54u;
    // 0x121a58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x121A54u, 0x121A5Cu)) {
        return;
    }
    ctx->pc = 0x121A5Cu;
label_121a5c:
    // 0x121a5c: 0xc040950  jal         func_102540
label_121a60:
    if (ctx->pc == 0x121A60u) {
        ctx->pc = 0x121A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A5Cu;
        // 0x121a60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A64u;
        goto label_121a64;
    }
    ctx->pc = 0x121A5Cu;
    SET_GPR_U32(ctx, 31, 0x121A64u);
    ctx->pc = 0x121A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A5Cu;
    // 0x121a60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102540u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102540u, 0x121A5Cu, 0x121A64u)) {
        return;
    }
    ctx->pc = 0x121A64u;
label_121a64:
    // 0x121a64: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x121a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_121a68:
    // 0x121a68: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x121a68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_121a6c:
    // 0x121a6c: 0xc06802e  jal         func_1A00B8
label_121a70:
    if (ctx->pc == 0x121A70u) {
        ctx->pc = 0x121A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A6Cu;
        // 0x121a70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A74u;
        goto label_121a74;
    }
    ctx->pc = 0x121A6Cu;
    SET_GPR_U32(ctx, 31, 0x121A74u);
    ctx->pc = 0x121A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A6Cu;
    // 0x121a70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x121A6Cu, 0x121A74u)) {
        return;
    }
    ctx->pc = 0x121A74u;
label_121a74:
    // 0x121a74: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x121a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_121a78:
    // 0x121a78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x121a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_121a7c:
    // 0x121a7c: 0xc067fca  jal         func_19FF28
label_121a80:
    if (ctx->pc == 0x121A80u) {
        ctx->pc = 0x121A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A7Cu;
        // 0x121a80: 0x8e260c80  lw          $a2, 0xC80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A84u;
        goto label_121a84;
    }
    ctx->pc = 0x121A7Cu;
    SET_GPR_U32(ctx, 31, 0x121A84u);
    ctx->pc = 0x121A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A7Cu;
    // 0x121a80: 0x8e260c80  lw          $a2, 0xC80($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x121A7Cu, 0x121A84u)) {
        return;
    }
    ctx->pc = 0x121A84u;
label_121a84:
    // 0x121a84: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x121a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_121a88:
    // 0x121a88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x121a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_121a8c:
    // 0x121a8c: 0xc067fca  jal         func_19FF28
label_121a90:
    if (ctx->pc == 0x121A90u) {
        ctx->pc = 0x121A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A8Cu;
        // 0x121a90: 0x8e260c84  lw          $a2, 0xC84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121A94u;
        goto label_121a94;
    }
    ctx->pc = 0x121A8Cu;
    SET_GPR_U32(ctx, 31, 0x121A94u);
    ctx->pc = 0x121A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A8Cu;
    // 0x121a90: 0x8e260c84  lw          $a2, 0xC84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x121A8Cu, 0x121A94u)) {
        return;
    }
    ctx->pc = 0x121A94u;
label_121a94:
    // 0x121a94: 0x8e260ddc  lw          $a2, 0xDDC($s1)
    ctx->pc = 0x121a94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3548)));
label_121a98:
    // 0x121a98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x121a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_121a9c:
    // 0x121a9c: 0xc067ffc  jal         func_19FFF0
label_121aa0:
    if (ctx->pc == 0x121AA0u) {
        ctx->pc = 0x121AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A9Cu;
        // 0x121aa0: 0x8fa50094  lw          $a1, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121AA4u;
        goto label_121aa4;
    }
    ctx->pc = 0x121A9Cu;
    SET_GPR_U32(ctx, 31, 0x121AA4u);
    ctx->pc = 0x121AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A9Cu;
    // 0x121aa0: 0x8fa50094  lw          $a1, 0x94($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FFF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FFF0u, 0x121A9Cu, 0x121AA4u)) {
        return;
    }
    ctx->pc = 0x121AA4u;
label_121aa4:
    // 0x121aa4: 0xc048a6e  jal         func_1229B8
label_121aa8:
    if (ctx->pc == 0x121AA8u) {
        ctx->pc = 0x121AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AA4u;
        // 0x121aa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121AACu;
        goto label_121aac;
    }
    ctx->pc = 0x121AA4u;
    SET_GPR_U32(ctx, 31, 0x121AACu);
    ctx->pc = 0x121AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AA4u;
    // 0x121aa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1229B8u, 0x121AA4u, 0x121AACu)) {
        return;
    }
    ctx->pc = 0x121AACu;
label_121aac:
    // 0x121aac: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x121aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_121ab0:
    // 0x121ab0: 0xc04185e  jal         func_106178
label_121ab4:
    if (ctx->pc == 0x121AB4u) {
        ctx->pc = 0x121AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AB0u;
        // 0x121ab4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x121AB8u;
        goto label_121ab8;
    }
    ctx->pc = 0x121AB0u;
    SET_GPR_U32(ctx, 31, 0x121AB8u);
    ctx->pc = 0x121AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AB0u;
    // 0x121ab4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x106178u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x106178u, 0x121AB0u, 0x121AB8u)) {
        return;
    }
    ctx->pc = 0x121AB8u;
label_121ab8:
    // 0x121ab8: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x121ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_121abc:
    // 0x121abc: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x121abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_121ac0:
    // 0x121ac0: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x121ac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_121ac4:
    // 0x121ac4: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x121ac4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_121ac8:
    // 0x121ac8: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x121ac8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_121acc:
    // 0x121acc: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x121accu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_121ad0:
    // 0x121ad0: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x121ad0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_121ad4:
    // 0x121ad4: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x121ad4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_121ad8:
    // 0x121ad8: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x121ad8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_121adc:
    // 0x121adc: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x121adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_121ae0:
    // 0x121ae0: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x121ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_121ae4:
    // 0x121ae4: 0x3e00008  jr          $ra
label_121ae8:
    if (ctx->pc == 0x121AE8u) {
        ctx->pc = 0x121AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AE4u;
        // 0x121ae8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121AECu;
        goto label_121aec;
    }
    ctx->pc = 0x121AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AE4u;
        // 0x121ae8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121AECu;
label_121aec:
    // 0x121aec: 0x0  nop
    ctx->pc = 0x121aecu;
    // NOP
    ctx->pc = 0x121af0u;
}
