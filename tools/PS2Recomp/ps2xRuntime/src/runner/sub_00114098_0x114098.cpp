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

// Function: sub_00114098
// Address: 0x114098 - 0x114718
void sub_00114098_0x114098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114098_0x114098");
#endif

    switch (ctx->pc) {
        case 0x114098u: goto label_114098;
        case 0x11409cu: goto label_11409c;
        case 0x1140a0u: goto label_1140a0;
        case 0x1140a4u: goto label_1140a4;
        case 0x1140a8u: goto label_1140a8;
        case 0x1140acu: goto label_1140ac;
        case 0x1140b0u: goto label_1140b0;
        case 0x1140b4u: goto label_1140b4;
        case 0x1140b8u: goto label_1140b8;
        case 0x1140bcu: goto label_1140bc;
        case 0x1140c0u: goto label_1140c0;
        case 0x1140c4u: goto label_1140c4;
        case 0x1140c8u: goto label_1140c8;
        case 0x1140ccu: goto label_1140cc;
        case 0x1140d0u: goto label_1140d0;
        case 0x1140d4u: goto label_1140d4;
        case 0x1140d8u: goto label_1140d8;
        case 0x1140dcu: goto label_1140dc;
        case 0x1140e0u: goto label_1140e0;
        case 0x1140e4u: goto label_1140e4;
        case 0x1140e8u: goto label_1140e8;
        case 0x1140ecu: goto label_1140ec;
        case 0x1140f0u: goto label_1140f0;
        case 0x1140f4u: goto label_1140f4;
        case 0x1140f8u: goto label_1140f8;
        case 0x1140fcu: goto label_1140fc;
        case 0x114100u: goto label_114100;
        case 0x114104u: goto label_114104;
        case 0x114108u: goto label_114108;
        case 0x11410cu: goto label_11410c;
        case 0x114110u: goto label_114110;
        case 0x114114u: goto label_114114;
        case 0x114118u: goto label_114118;
        case 0x11411cu: goto label_11411c;
        case 0x114120u: goto label_114120;
        case 0x114124u: goto label_114124;
        case 0x114128u: goto label_114128;
        case 0x11412cu: goto label_11412c;
        case 0x114130u: goto label_114130;
        case 0x114134u: goto label_114134;
        case 0x114138u: goto label_114138;
        case 0x11413cu: goto label_11413c;
        case 0x114140u: goto label_114140;
        case 0x114144u: goto label_114144;
        case 0x114148u: goto label_114148;
        case 0x11414cu: goto label_11414c;
        case 0x114150u: goto label_114150;
        case 0x114154u: goto label_114154;
        case 0x114158u: goto label_114158;
        case 0x11415cu: goto label_11415c;
        case 0x114160u: goto label_114160;
        case 0x114164u: goto label_114164;
        case 0x114168u: goto label_114168;
        case 0x11416cu: goto label_11416c;
        case 0x114170u: goto label_114170;
        case 0x114174u: goto label_114174;
        case 0x114178u: goto label_114178;
        case 0x11417cu: goto label_11417c;
        case 0x114180u: goto label_114180;
        case 0x114184u: goto label_114184;
        case 0x114188u: goto label_114188;
        case 0x11418cu: goto label_11418c;
        case 0x114190u: goto label_114190;
        case 0x114194u: goto label_114194;
        case 0x114198u: goto label_114198;
        case 0x11419cu: goto label_11419c;
        case 0x1141a0u: goto label_1141a0;
        case 0x1141a4u: goto label_1141a4;
        case 0x1141a8u: goto label_1141a8;
        case 0x1141acu: goto label_1141ac;
        case 0x1141b0u: goto label_1141b0;
        case 0x1141b4u: goto label_1141b4;
        case 0x1141b8u: goto label_1141b8;
        case 0x1141bcu: goto label_1141bc;
        case 0x1141c0u: goto label_1141c0;
        case 0x1141c4u: goto label_1141c4;
        case 0x1141c8u: goto label_1141c8;
        case 0x1141ccu: goto label_1141cc;
        case 0x1141d0u: goto label_1141d0;
        case 0x1141d4u: goto label_1141d4;
        case 0x1141d8u: goto label_1141d8;
        case 0x1141dcu: goto label_1141dc;
        case 0x1141e0u: goto label_1141e0;
        case 0x1141e4u: goto label_1141e4;
        case 0x1141e8u: goto label_1141e8;
        case 0x1141ecu: goto label_1141ec;
        case 0x1141f0u: goto label_1141f0;
        case 0x1141f4u: goto label_1141f4;
        case 0x1141f8u: goto label_1141f8;
        case 0x1141fcu: goto label_1141fc;
        case 0x114200u: goto label_114200;
        case 0x114204u: goto label_114204;
        case 0x114208u: goto label_114208;
        case 0x11420cu: goto label_11420c;
        case 0x114210u: goto label_114210;
        case 0x114214u: goto label_114214;
        case 0x114218u: goto label_114218;
        case 0x11421cu: goto label_11421c;
        case 0x114220u: goto label_114220;
        case 0x114224u: goto label_114224;
        case 0x114228u: goto label_114228;
        case 0x11422cu: goto label_11422c;
        case 0x114230u: goto label_114230;
        case 0x114234u: goto label_114234;
        case 0x114238u: goto label_114238;
        case 0x11423cu: goto label_11423c;
        case 0x114240u: goto label_114240;
        case 0x114244u: goto label_114244;
        case 0x114248u: goto label_114248;
        case 0x11424cu: goto label_11424c;
        case 0x114250u: goto label_114250;
        case 0x114254u: goto label_114254;
        case 0x114258u: goto label_114258;
        case 0x11425cu: goto label_11425c;
        case 0x114260u: goto label_114260;
        case 0x114264u: goto label_114264;
        case 0x114268u: goto label_114268;
        case 0x11426cu: goto label_11426c;
        case 0x114270u: goto label_114270;
        case 0x114274u: goto label_114274;
        case 0x114278u: goto label_114278;
        case 0x11427cu: goto label_11427c;
        case 0x114280u: goto label_114280;
        case 0x114284u: goto label_114284;
        case 0x114288u: goto label_114288;
        case 0x11428cu: goto label_11428c;
        case 0x114290u: goto label_114290;
        case 0x114294u: goto label_114294;
        case 0x114298u: goto label_114298;
        case 0x11429cu: goto label_11429c;
        case 0x1142a0u: goto label_1142a0;
        case 0x1142a4u: goto label_1142a4;
        case 0x1142a8u: goto label_1142a8;
        case 0x1142acu: goto label_1142ac;
        case 0x1142b0u: goto label_1142b0;
        case 0x1142b4u: goto label_1142b4;
        case 0x1142b8u: goto label_1142b8;
        case 0x1142bcu: goto label_1142bc;
        case 0x1142c0u: goto label_1142c0;
        case 0x1142c4u: goto label_1142c4;
        case 0x1142c8u: goto label_1142c8;
        case 0x1142ccu: goto label_1142cc;
        case 0x1142d0u: goto label_1142d0;
        case 0x1142d4u: goto label_1142d4;
        case 0x1142d8u: goto label_1142d8;
        case 0x1142dcu: goto label_1142dc;
        case 0x1142e0u: goto label_1142e0;
        case 0x1142e4u: goto label_1142e4;
        case 0x1142e8u: goto label_1142e8;
        case 0x1142ecu: goto label_1142ec;
        case 0x1142f0u: goto label_1142f0;
        case 0x1142f4u: goto label_1142f4;
        case 0x1142f8u: goto label_1142f8;
        case 0x1142fcu: goto label_1142fc;
        case 0x114300u: goto label_114300;
        case 0x114304u: goto label_114304;
        case 0x114308u: goto label_114308;
        case 0x11430cu: goto label_11430c;
        case 0x114310u: goto label_114310;
        case 0x114314u: goto label_114314;
        case 0x114318u: goto label_114318;
        case 0x11431cu: goto label_11431c;
        case 0x114320u: goto label_114320;
        case 0x114324u: goto label_114324;
        case 0x114328u: goto label_114328;
        case 0x11432cu: goto label_11432c;
        case 0x114330u: goto label_114330;
        case 0x114334u: goto label_114334;
        case 0x114338u: goto label_114338;
        case 0x11433cu: goto label_11433c;
        case 0x114340u: goto label_114340;
        case 0x114344u: goto label_114344;
        case 0x114348u: goto label_114348;
        case 0x11434cu: goto label_11434c;
        case 0x114350u: goto label_114350;
        case 0x114354u: goto label_114354;
        case 0x114358u: goto label_114358;
        case 0x11435cu: goto label_11435c;
        case 0x114360u: goto label_114360;
        case 0x114364u: goto label_114364;
        case 0x114368u: goto label_114368;
        case 0x11436cu: goto label_11436c;
        case 0x114370u: goto label_114370;
        case 0x114374u: goto label_114374;
        case 0x114378u: goto label_114378;
        case 0x11437cu: goto label_11437c;
        case 0x114380u: goto label_114380;
        case 0x114384u: goto label_114384;
        case 0x114388u: goto label_114388;
        case 0x11438cu: goto label_11438c;
        case 0x114390u: goto label_114390;
        case 0x114394u: goto label_114394;
        case 0x114398u: goto label_114398;
        case 0x11439cu: goto label_11439c;
        case 0x1143a0u: goto label_1143a0;
        case 0x1143a4u: goto label_1143a4;
        case 0x1143a8u: goto label_1143a8;
        case 0x1143acu: goto label_1143ac;
        case 0x1143b0u: goto label_1143b0;
        case 0x1143b4u: goto label_1143b4;
        case 0x1143b8u: goto label_1143b8;
        case 0x1143bcu: goto label_1143bc;
        case 0x1143c0u: goto label_1143c0;
        case 0x1143c4u: goto label_1143c4;
        case 0x1143c8u: goto label_1143c8;
        case 0x1143ccu: goto label_1143cc;
        case 0x1143d0u: goto label_1143d0;
        case 0x1143d4u: goto label_1143d4;
        case 0x1143d8u: goto label_1143d8;
        case 0x1143dcu: goto label_1143dc;
        case 0x1143e0u: goto label_1143e0;
        case 0x1143e4u: goto label_1143e4;
        case 0x1143e8u: goto label_1143e8;
        case 0x1143ecu: goto label_1143ec;
        case 0x1143f0u: goto label_1143f0;
        case 0x1143f4u: goto label_1143f4;
        case 0x1143f8u: goto label_1143f8;
        case 0x1143fcu: goto label_1143fc;
        case 0x114400u: goto label_114400;
        case 0x114404u: goto label_114404;
        case 0x114408u: goto label_114408;
        case 0x11440cu: goto label_11440c;
        case 0x114410u: goto label_114410;
        case 0x114414u: goto label_114414;
        case 0x114418u: goto label_114418;
        case 0x11441cu: goto label_11441c;
        case 0x114420u: goto label_114420;
        case 0x114424u: goto label_114424;
        case 0x114428u: goto label_114428;
        case 0x11442cu: goto label_11442c;
        case 0x114430u: goto label_114430;
        case 0x114434u: goto label_114434;
        case 0x114438u: goto label_114438;
        case 0x11443cu: goto label_11443c;
        case 0x114440u: goto label_114440;
        case 0x114444u: goto label_114444;
        case 0x114448u: goto label_114448;
        case 0x11444cu: goto label_11444c;
        case 0x114450u: goto label_114450;
        case 0x114454u: goto label_114454;
        case 0x114458u: goto label_114458;
        case 0x11445cu: goto label_11445c;
        case 0x114460u: goto label_114460;
        case 0x114464u: goto label_114464;
        case 0x114468u: goto label_114468;
        case 0x11446cu: goto label_11446c;
        case 0x114470u: goto label_114470;
        case 0x114474u: goto label_114474;
        case 0x114478u: goto label_114478;
        case 0x11447cu: goto label_11447c;
        case 0x114480u: goto label_114480;
        case 0x114484u: goto label_114484;
        case 0x114488u: goto label_114488;
        case 0x11448cu: goto label_11448c;
        case 0x114490u: goto label_114490;
        case 0x114494u: goto label_114494;
        case 0x114498u: goto label_114498;
        case 0x11449cu: goto label_11449c;
        case 0x1144a0u: goto label_1144a0;
        case 0x1144a4u: goto label_1144a4;
        case 0x1144a8u: goto label_1144a8;
        case 0x1144acu: goto label_1144ac;
        case 0x1144b0u: goto label_1144b0;
        case 0x1144b4u: goto label_1144b4;
        case 0x1144b8u: goto label_1144b8;
        case 0x1144bcu: goto label_1144bc;
        case 0x1144c0u: goto label_1144c0;
        case 0x1144c4u: goto label_1144c4;
        case 0x1144c8u: goto label_1144c8;
        case 0x1144ccu: goto label_1144cc;
        case 0x1144d0u: goto label_1144d0;
        case 0x1144d4u: goto label_1144d4;
        case 0x1144d8u: goto label_1144d8;
        case 0x1144dcu: goto label_1144dc;
        case 0x1144e0u: goto label_1144e0;
        case 0x1144e4u: goto label_1144e4;
        case 0x1144e8u: goto label_1144e8;
        case 0x1144ecu: goto label_1144ec;
        case 0x1144f0u: goto label_1144f0;
        case 0x1144f4u: goto label_1144f4;
        case 0x1144f8u: goto label_1144f8;
        case 0x1144fcu: goto label_1144fc;
        case 0x114500u: goto label_114500;
        case 0x114504u: goto label_114504;
        case 0x114508u: goto label_114508;
        case 0x11450cu: goto label_11450c;
        case 0x114510u: goto label_114510;
        case 0x114514u: goto label_114514;
        case 0x114518u: goto label_114518;
        case 0x11451cu: goto label_11451c;
        case 0x114520u: goto label_114520;
        case 0x114524u: goto label_114524;
        case 0x114528u: goto label_114528;
        case 0x11452cu: goto label_11452c;
        case 0x114530u: goto label_114530;
        case 0x114534u: goto label_114534;
        case 0x114538u: goto label_114538;
        case 0x11453cu: goto label_11453c;
        case 0x114540u: goto label_114540;
        case 0x114544u: goto label_114544;
        case 0x114548u: goto label_114548;
        case 0x11454cu: goto label_11454c;
        case 0x114550u: goto label_114550;
        case 0x114554u: goto label_114554;
        case 0x114558u: goto label_114558;
        case 0x11455cu: goto label_11455c;
        case 0x114560u: goto label_114560;
        case 0x114564u: goto label_114564;
        case 0x114568u: goto label_114568;
        case 0x11456cu: goto label_11456c;
        case 0x114570u: goto label_114570;
        case 0x114574u: goto label_114574;
        case 0x114578u: goto label_114578;
        case 0x11457cu: goto label_11457c;
        case 0x114580u: goto label_114580;
        case 0x114584u: goto label_114584;
        case 0x114588u: goto label_114588;
        case 0x11458cu: goto label_11458c;
        case 0x114590u: goto label_114590;
        case 0x114594u: goto label_114594;
        case 0x114598u: goto label_114598;
        case 0x11459cu: goto label_11459c;
        case 0x1145a0u: goto label_1145a0;
        case 0x1145a4u: goto label_1145a4;
        case 0x1145a8u: goto label_1145a8;
        case 0x1145acu: goto label_1145ac;
        case 0x1145b0u: goto label_1145b0;
        case 0x1145b4u: goto label_1145b4;
        case 0x1145b8u: goto label_1145b8;
        case 0x1145bcu: goto label_1145bc;
        case 0x1145c0u: goto label_1145c0;
        case 0x1145c4u: goto label_1145c4;
        case 0x1145c8u: goto label_1145c8;
        case 0x1145ccu: goto label_1145cc;
        case 0x1145d0u: goto label_1145d0;
        case 0x1145d4u: goto label_1145d4;
        case 0x1145d8u: goto label_1145d8;
        case 0x1145dcu: goto label_1145dc;
        case 0x1145e0u: goto label_1145e0;
        case 0x1145e4u: goto label_1145e4;
        case 0x1145e8u: goto label_1145e8;
        case 0x1145ecu: goto label_1145ec;
        case 0x1145f0u: goto label_1145f0;
        case 0x1145f4u: goto label_1145f4;
        case 0x1145f8u: goto label_1145f8;
        case 0x1145fcu: goto label_1145fc;
        case 0x114600u: goto label_114600;
        case 0x114604u: goto label_114604;
        case 0x114608u: goto label_114608;
        case 0x11460cu: goto label_11460c;
        case 0x114610u: goto label_114610;
        case 0x114614u: goto label_114614;
        case 0x114618u: goto label_114618;
        case 0x11461cu: goto label_11461c;
        case 0x114620u: goto label_114620;
        case 0x114624u: goto label_114624;
        case 0x114628u: goto label_114628;
        case 0x11462cu: goto label_11462c;
        case 0x114630u: goto label_114630;
        case 0x114634u: goto label_114634;
        case 0x114638u: goto label_114638;
        case 0x11463cu: goto label_11463c;
        case 0x114640u: goto label_114640;
        case 0x114644u: goto label_114644;
        case 0x114648u: goto label_114648;
        case 0x11464cu: goto label_11464c;
        case 0x114650u: goto label_114650;
        case 0x114654u: goto label_114654;
        case 0x114658u: goto label_114658;
        case 0x11465cu: goto label_11465c;
        case 0x114660u: goto label_114660;
        case 0x114664u: goto label_114664;
        case 0x114668u: goto label_114668;
        case 0x11466cu: goto label_11466c;
        case 0x114670u: goto label_114670;
        case 0x114674u: goto label_114674;
        case 0x114678u: goto label_114678;
        case 0x11467cu: goto label_11467c;
        case 0x114680u: goto label_114680;
        case 0x114684u: goto label_114684;
        case 0x114688u: goto label_114688;
        case 0x11468cu: goto label_11468c;
        case 0x114690u: goto label_114690;
        case 0x114694u: goto label_114694;
        case 0x114698u: goto label_114698;
        case 0x11469cu: goto label_11469c;
        case 0x1146a0u: goto label_1146a0;
        case 0x1146a4u: goto label_1146a4;
        case 0x1146a8u: goto label_1146a8;
        case 0x1146acu: goto label_1146ac;
        case 0x1146b0u: goto label_1146b0;
        case 0x1146b4u: goto label_1146b4;
        case 0x1146b8u: goto label_1146b8;
        case 0x1146bcu: goto label_1146bc;
        case 0x1146c0u: goto label_1146c0;
        case 0x1146c4u: goto label_1146c4;
        case 0x1146c8u: goto label_1146c8;
        case 0x1146ccu: goto label_1146cc;
        case 0x1146d0u: goto label_1146d0;
        case 0x1146d4u: goto label_1146d4;
        case 0x1146d8u: goto label_1146d8;
        case 0x1146dcu: goto label_1146dc;
        case 0x1146e0u: goto label_1146e0;
        case 0x1146e4u: goto label_1146e4;
        case 0x1146e8u: goto label_1146e8;
        case 0x1146ecu: goto label_1146ec;
        case 0x1146f0u: goto label_1146f0;
        case 0x1146f4u: goto label_1146f4;
        case 0x1146f8u: goto label_1146f8;
        case 0x1146fcu: goto label_1146fc;
        case 0x114700u: goto label_114700;
        case 0x114704u: goto label_114704;
        case 0x114708u: goto label_114708;
        case 0x11470cu: goto label_11470c;
        case 0x114710u: goto label_114710;
        case 0x114714u: goto label_114714;
        default: break;
    }

    ctx->pc = 0x114098u;

label_114098:
    // 0x114098: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x114098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_11409c:
    // 0x11409c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x11409cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1140a0:
    // 0x1140a0: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x1140a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1140a4:
    // 0x1140a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1140a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1140a8:
    // 0x1140a8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1140a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1140ac:
    // 0x1140ac: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1140acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_1140b0:
    // 0x1140b0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1140b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1140b4:
    // 0x1140b4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1140b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1140b8:
    // 0x1140b8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1140b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_1140bc:
    // 0x1140bc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1140bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1140c0:
    // 0x1140c0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1140c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_1140c4:
    // 0x1140c4: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1140c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_1140c8:
    // 0x1140c8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1140c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_1140cc:
    // 0x1140cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1140ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1140d0:
    // 0x1140d0: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x1140d0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1140d4:
    // 0x1140d4: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x1140d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1140d8:
    // 0x1140d8: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1140d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1140dc:
    // 0x1140dc: 0x8e8200e0  lw          $v0, 0xE0($s4)
    ctx->pc = 0x1140dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_1140e0:
    // 0x1140e0: 0x1040017c  beqz        $v0, . + 4 + (0x17C << 2)
label_1140e4:
    if (ctx->pc == 0x1140E4u) {
        ctx->pc = 0x1140E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140E0u;
        // 0x1140e4: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1140E8u;
        goto label_1140e8;
    }
    ctx->pc = 0x1140E0u;
    {
        const bool branch_taken_0x1140e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1140E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140E0u;
        // 0x1140e4: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1140e0) {
            ctx->pc = 0x1146D4u;
            goto label_1146d4;
        }
    }
    ctx->pc = 0x1140E8u;
label_1140e8:
    // 0x1140e8: 0x8e8200e4  lw          $v0, 0xE4($s4)
    ctx->pc = 0x1140e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
label_1140ec:
    // 0x1140ec: 0x10400179  beqz        $v0, . + 4 + (0x179 << 2)
label_1140f0:
    if (ctx->pc == 0x1140F0u) {
        ctx->pc = 0x1140F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140ECu;
        // 0x1140f0: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1140F4u;
        goto label_1140f4;
    }
    ctx->pc = 0x1140ECu;
    {
        const bool branch_taken_0x1140ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1140F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140ECu;
        // 0x1140f0: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1140ec) {
            ctx->pc = 0x1146D4u;
            goto label_1146d4;
        }
    }
    ctx->pc = 0x1140F4u;
label_1140f4:
    // 0x1140f4: 0x8c62831c  lw          $v0, -0x7CE4($v1)
    ctx->pc = 0x1140f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935324)));
label_1140f8:
    // 0x1140f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1140fc:
    if (ctx->pc == 0x1140FCu) {
        ctx->pc = 0x1140FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140F8u;
        // 0x1140fc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114100u;
        goto label_114100;
    }
    ctx->pc = 0x1140F8u;
    {
        const bool branch_taken_0x1140f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1140FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140F8u;
        // 0x1140fc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1140f8) {
            ctx->pc = 0x114128u;
            goto label_114128;
        }
    }
    ctx->pc = 0x114100u;
label_114100:
    // 0x114100: 0xc68000e8  lwc1        $f0, 0xE8($s4)
    ctx->pc = 0x114100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114104:
    // 0x114104: 0xc4418314  lwc1        $f1, -0x7CEC($v0)
    ctx->pc = 0x114104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_114108:
    // 0x114108: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x114108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_11410c:
    // 0x11410c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11410cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_114110:
    // 0x114110: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x114110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_114114:
    // 0x114114: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x114114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_114118:
    // 0x114118: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x114118u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_11411c:
    // 0x11411c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x11411cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_114120:
    // 0x114120: 0x10000009  b           . + 4 + (0x9 << 2)
label_114124:
    if (ctx->pc == 0x114124u) {
        ctx->pc = 0x114124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114120u;
        // 0x114124: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114128u;
        goto label_114128;
    }
    ctx->pc = 0x114120u;
    {
        const bool branch_taken_0x114120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114120u;
        // 0x114124: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114120) {
            ctx->pc = 0x114148u;
            goto label_114148;
        }
    }
    ctx->pc = 0x114128u;
label_114128:
    // 0x114128: 0xc68000e8  lwc1        $f0, 0xE8($s4)
    ctx->pc = 0x114128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11412c:
    // 0x11412c: 0xc4418314  lwc1        $f1, -0x7CEC($v0)
    ctx->pc = 0x11412cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_114130:
    // 0x114130: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x114130u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114134:
    // 0x114134: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x114134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_114138:
    // 0x114138: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x114138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_11413c:
    // 0x11413c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11413cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_114140:
    // 0x114140: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x114140u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_114144:
    // 0x114144: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x114144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_114148:
    // 0x114148: 0x0  nop
    ctx->pc = 0x114148u;
    // NOP
label_11414c:
    // 0x11414c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_114150:
    if (ctx->pc == 0x114150u) {
        ctx->pc = 0x114150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11414Cu;
        // 0x114150: 0xe4418314  swc1        $f1, -0x7CEC($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294935316), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x114154u;
        goto label_114154;
    }
    ctx->pc = 0x11414Cu;
    {
        const bool branch_taken_0x11414c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x114150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11414Cu;
        // 0x114150: 0xe4418314  swc1        $f1, -0x7CEC($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294935316), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11414c) {
            ctx->pc = 0x114160u;
            goto label_114160;
        }
    }
    ctx->pc = 0x114154u;
label_114154:
    // 0x114154: 0x8e8200f0  lw          $v0, 0xF0($s4)
    ctx->pc = 0x114154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
label_114158:
    // 0x114158: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_11415c:
    if (ctx->pc == 0x11415Cu) {
        ctx->pc = 0x11415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114158u;
        // 0x11415c: 0xae8000f0  sw          $zero, 0xF0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114160u;
        goto label_114160;
    }
    ctx->pc = 0x114158u;
    {
        const bool branch_taken_0x114158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114158) {
            ctx->pc = 0x11415Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114158u;
            // 0x11415c: 0xae8000f0  sw          $zero, 0xF0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 240), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114168u;
            goto label_114168;
        }
    }
    ctx->pc = 0x114160u;
label_114160:
    // 0x114160: 0xe4628314  swc1        $f2, -0x7CEC($v1)
    ctx->pc = 0x114160u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294935316), bits); }
label_114164:
    // 0x114164: 0xae8000f0  sw          $zero, 0xF0($s4)
    ctx->pc = 0x114164u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 240), GPR_U32(ctx, 0));
label_114168:
    // 0x114168: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x114168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_11416c:
    // 0x11416c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11416cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_114170:
    // 0x114170: 0xc46c8314  lwc1        $f12, -0x7CEC($v1)
    ctx->pc = 0x114170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294935316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_114174:
    // 0x114174: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x114174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_114178:
    // 0x114178: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x114178u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_11417c:
    // 0x11417c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11417cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_114180:
    // 0x114180: 0x46146301  sub.s       $f12, $f12, $f20
    ctx->pc = 0x114180u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
label_114184:
    // 0x114184: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_114188:
    // 0x114188: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x114188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_11418c:
    // 0x11418c: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x11418cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_114190:
    // 0x114190: 0xc09b164  jal         func_26C590
label_114194:
    if (ctx->pc == 0x114194u) {
        ctx->pc = 0x114194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114190u;
        // 0x114194: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x114198u;
        goto label_114198;
    }
    ctx->pc = 0x114190u;
    SET_GPR_U32(ctx, 31, 0x114198u);
    ctx->pc = 0x114194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114190u;
    // 0x114194: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x114190u, 0x114198u)) {
        return;
    }
    ctx->pc = 0x114198u;
label_114198:
    // 0x114198: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x114198u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_11419c:
    // 0x11419c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x11419cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1141a0:
    // 0x1141a0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1141a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1141a4:
    // 0x1141a4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1141a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1141a8:
    // 0x1141a8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1141a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1141ac:
    // 0x1141ac: 0xe4408318  swc1        $f0, -0x7CE8($v0)
    ctx->pc = 0x1141acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294935320), bits); }
label_1141b0:
    // 0x1141b0: 0x8e8600e4  lw          $a2, 0xE4($s4)
    ctx->pc = 0x1141b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
label_1141b4:
    // 0x1141b4: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1141b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1141b8:
    // 0x1141b8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1141b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1141bc:
    // 0x1141bc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1141bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1141c0:
    // 0x1141c0: 0x60f809  jalr        $v1
label_1141c4:
    if (ctx->pc == 0x1141C4u) {
        ctx->pc = 0x1141C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1141C0u;
        // 0x1141c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1141C8u;
        goto label_1141c8;
    }
    ctx->pc = 0x1141C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1141C8u);
        ctx->pc = 0x1141C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1141C0u;
        // 0x1141c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1141C0u, 0x1141C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1141C8u;
label_1141c8:
    // 0x1141c8: 0x8e8600e0  lw          $a2, 0xE0($s4)
    ctx->pc = 0x1141c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_1141cc:
    // 0x1141cc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1141ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1141d0:
    // 0x1141d0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1141d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1141d4:
    // 0x1141d4: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1141d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1141d8:
    // 0x1141d8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1141d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1141dc:
    // 0x1141dc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1141dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1141e0:
    // 0x1141e0: 0x60f809  jalr        $v1
label_1141e4:
    if (ctx->pc == 0x1141E4u) {
        ctx->pc = 0x1141E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1141E0u;
        // 0x1141e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1141E8u;
        goto label_1141e8;
    }
    ctx->pc = 0x1141E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1141E8u);
        ctx->pc = 0x1141E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1141E0u;
        // 0x1141e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1141E0u, 0x1141E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1141E8u;
label_1141e8:
    // 0x1141e8: 0x8e8200e0  lw          $v0, 0xE0($s4)
    ctx->pc = 0x1141e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_1141ec:
    // 0x1141ec: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1141ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_1141f0:
    // 0x1141f0: 0x8e8300e4  lw          $v1, 0xE4($s4)
    ctx->pc = 0x1141f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
label_1141f4:
    // 0x1141f4: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x1141f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1141f8:
    // 0x1141f8: 0xc4620058  lwc1        $f2, 0x58($v1)
    ctx->pc = 0x1141f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1141fc:
    // 0x1141fc: 0xc4818318  lwc1        $f1, -0x7CE8($a0)
    ctx->pc = 0x1141fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294935320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_114200:
    // 0x114200: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x114200u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_114204:
    // 0x114204: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x114204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_114208:
    // 0x114208: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x114208u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_11420c:
    // 0x11420c: 0xe6800058  swc1        $f0, 0x58($s4)
    ctx->pc = 0x11420cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 88), bits); }
label_114210:
    // 0x114210: 0xc4620054  lwc1        $f2, 0x54($v1)
    ctx->pc = 0x114210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_114214:
    // 0x114214: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x114214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114218:
    // 0x114218: 0xc4818318  lwc1        $f1, -0x7CE8($a0)
    ctx->pc = 0x114218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294935320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11421c:
    // 0x11421c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11421cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_114220:
    // 0x114220: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x114220u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_114224:
    // 0x114224: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x114224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_114228:
    // 0x114228: 0xe6800054  swc1        $f0, 0x54($s4)
    ctx->pc = 0x114228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 84), bits); }
label_11422c:
    // 0x11422c: 0xc4838318  lwc1        $f3, -0x7CE8($a0)
    ctx->pc = 0x11422cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294935320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_114230:
    // 0x114230: 0x46171836  c.le.s      $f3, $f23
    ctx->pc = 0x114230u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_114234:
    // 0x114234: 0x0  nop
    ctx->pc = 0x114234u;
    // NOP
label_114238:
    // 0x114238: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_11423c:
    if (ctx->pc == 0x11423Cu) {
        ctx->pc = 0x114240u;
        goto label_114240;
    }
    ctx->pc = 0x114238u;
    {
        const bool branch_taken_0x114238 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x114238) {
            ctx->pc = 0x114248u;
            goto label_114248;
        }
    }
    ctx->pc = 0x114240u;
label_114240:
    // 0x114240: 0x10000006  b           . + 4 + (0x6 << 2)
label_114244:
    if (ctx->pc == 0x114244u) {
        ctx->pc = 0x114244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114240u;
        // 0x114244: 0x8c630040  lw          $v1, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114248u;
        goto label_114248;
    }
    ctx->pc = 0x114240u;
    {
        const bool branch_taken_0x114240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114240u;
        // 0x114244: 0x8c630040  lw          $v1, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114240) {
            ctx->pc = 0x11425Cu;
            goto label_11425c;
        }
    }
    ctx->pc = 0x114248u;
label_114248:
    // 0x114248: 0x4603b036  c.le.s      $f22, $f3
    ctx->pc = 0x114248u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11424c:
    // 0x11424c: 0x0  nop
    ctx->pc = 0x11424cu;
    // NOP
label_114250:
    // 0x114250: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
label_114254:
    if (ctx->pc == 0x114254u) {
        ctx->pc = 0x114254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114250u;
        // 0x114254: 0x8c750040  lw          $s5, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114258u;
        goto label_114258;
    }
    ctx->pc = 0x114250u;
    {
        const bool branch_taken_0x114250 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x114250) {
            ctx->pc = 0x114254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114250u;
            // 0x114254: 0x8c750040  lw          $s5, 0x40($v1) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1142E8u;
            goto label_1142e8;
        }
    }
    ctx->pc = 0x114258u;
label_114258:
    // 0x114258: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x114258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_11425c:
    // 0x11425c: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x11425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_114260:
    // 0x114260: 0x68650017  ldl         $a1, 0x17($v1)
    ctx->pc = 0x114260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_114264:
    // 0x114264: 0x6c650010  ldr         $a1, 0x10($v1)
    ctx->pc = 0x114264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_114268:
    // 0x114268: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x114268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_11426c:
    // 0x11426c: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x11426cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_114270:
    // 0x114270: 0x68670027  ldl         $a3, 0x27($v1)
    ctx->pc = 0x114270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_114274:
    // 0x114274: 0x6c670020  ldr         $a3, 0x20($v1)
    ctx->pc = 0x114274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_114278:
    // 0x114278: 0x6864002f  ldl         $a0, 0x2F($v1)
    ctx->pc = 0x114278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_11427c:
    // 0x11427c: 0x6c640028  ldr         $a0, 0x28($v1)
    ctx->pc = 0x11427cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_114280:
    // 0x114280: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x114280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_114284:
    // 0x114284: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x114284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_114288:
    // 0x114288: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x114288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11428c:
    // 0x11428c: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x11428cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_114290:
    // 0x114290: 0xb0470027  sdl         $a3, 0x27($v0)
    ctx->pc = 0x114290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_114294:
    // 0x114294: 0xb4470020  sdr         $a3, 0x20($v0)
    ctx->pc = 0x114294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_114298:
    // 0x114298: 0xb044002f  sdl         $a0, 0x2F($v0)
    ctx->pc = 0x114298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11429c:
    // 0x11429c: 0xb4440028  sdr         $a0, 0x28($v0)
    ctx->pc = 0x11429cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1142a0:
    // 0x1142a0: 0x68650037  ldl         $a1, 0x37($v1)
    ctx->pc = 0x1142a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1142a4:
    // 0x1142a4: 0x6c650030  ldr         $a1, 0x30($v1)
    ctx->pc = 0x1142a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1142a8:
    // 0x1142a8: 0x6866003f  ldl         $a2, 0x3F($v1)
    ctx->pc = 0x1142a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1142ac:
    // 0x1142ac: 0x6c660038  ldr         $a2, 0x38($v1)
    ctx->pc = 0x1142acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1142b0:
    // 0x1142b0: 0x68670047  ldl         $a3, 0x47($v1)
    ctx->pc = 0x1142b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1142b4:
    // 0x1142b4: 0x6c670040  ldr         $a3, 0x40($v1)
    ctx->pc = 0x1142b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1142b8:
    // 0x1142b8: 0x6864004f  ldl         $a0, 0x4F($v1)
    ctx->pc = 0x1142b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1142bc:
    // 0x1142bc: 0x6c640048  ldr         $a0, 0x48($v1)
    ctx->pc = 0x1142bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1142c0:
    // 0x1142c0: 0xb0450037  sdl         $a1, 0x37($v0)
    ctx->pc = 0x1142c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1142c4:
    // 0x1142c4: 0xb4450030  sdr         $a1, 0x30($v0)
    ctx->pc = 0x1142c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1142c8:
    // 0x1142c8: 0xb046003f  sdl         $a2, 0x3F($v0)
    ctx->pc = 0x1142c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1142cc:
    // 0x1142cc: 0xb4460038  sdr         $a2, 0x38($v0)
    ctx->pc = 0x1142ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1142d0:
    // 0x1142d0: 0xb0470047  sdl         $a3, 0x47($v0)
    ctx->pc = 0x1142d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1142d4:
    // 0x1142d4: 0xb4470040  sdr         $a3, 0x40($v0)
    ctx->pc = 0x1142d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1142d8:
    // 0x1142d8: 0xb044004f  sdl         $a0, 0x4F($v0)
    ctx->pc = 0x1142d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1142dc:
    // 0x1142dc: 0xb4440048  sdr         $a0, 0x48($v0)
    ctx->pc = 0x1142dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1142e0:
    // 0x1142e0: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_1142e4:
    if (ctx->pc == 0x1142E4u) {
        ctx->pc = 0x1142E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142E0u;
        // 0x1142e4: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1142E8u;
        goto label_1142e8;
    }
    ctx->pc = 0x1142E0u;
    {
        const bool branch_taken_0x1142e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1142E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142E0u;
        // 0x1142e4: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142e0) {
            ctx->pc = 0x114600u;
            goto label_114600;
        }
    }
    ctx->pc = 0x1142E8u;
label_1142e8:
    // 0x1142e8: 0x8c5e0040  lw          $fp, 0x40($v0)
    ctx->pc = 0x1142e8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1142ec:
    // 0x1142ec: 0x8e920040  lw          $s2, 0x40($s4)
    ctx->pc = 0x1142ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_1142f0:
    // 0x1142f0: 0x26b70010  addiu       $s7, $s5, 0x10
    ctx->pc = 0x1142f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_1142f4:
    // 0x1142f4: 0x27d60010  addiu       $s6, $fp, 0x10
    ctx->pc = 0x1142f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_1142f8:
    // 0x1142f8: 0x26a40040  addiu       $a0, $s5, 0x40
    ctx->pc = 0x1142f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_1142fc:
    // 0x1142fc: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x1142fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_114300:
    // 0x114300: 0x27c30040  addiu       $v1, $fp, 0x40
    ctx->pc = 0x114300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
label_114304:
    // 0x114304: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x114304u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_114308:
    // 0x114308: 0xc7c00040  lwc1        $f0, 0x40($fp)
    ctx->pc = 0x114308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11430c:
    // 0x11430c: 0xc6a10040  lwc1        $f1, 0x40($s5)
    ctx->pc = 0x11430cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_114310:
    // 0x114310: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x114310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_114314:
    // 0x114314: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x114314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_114318:
    // 0x114318: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x114318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11431c:
    // 0x11431c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x11431cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_114320:
    // 0x114320: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x114320u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_114324:
    // 0x114324: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x114324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_114328:
    // 0x114328: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x114328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11432c:
    // 0x11432c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x11432cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114330:
    // 0x114330: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x114330u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_114334:
    // 0x114334: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x114334u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_114338:
    // 0x114338: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x114338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11433c:
    // 0x11433c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x11433cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_114340:
    // 0x114340: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x114340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_114344:
    // 0x114344: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x114344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_114348:
    // 0x114348: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x114348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11434c:
    // 0x11434c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x11434cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_114350:
    // 0x114350: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x114350u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_114354:
    // 0x114354: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x114354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_114358:
    // 0x114358: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x114358u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_11435c:
    // 0x11435c: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x11435cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114360:
    // 0x114360: 0xc6a10040  lwc1        $f1, 0x40($s5)
    ctx->pc = 0x114360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_114364:
    // 0x114364: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x114364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_114368:
    // 0x114368: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x114368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_11436c:
    // 0x11436c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x11436cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_114370:
    // 0x114370: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x114370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114374:
    // 0x114374: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x114374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_114378:
    // 0x114378: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x114378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_11437c:
    // 0x11437c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x11437cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_114380:
    // 0x114380: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x114380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_114384:
    // 0x114384: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x114384u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_114388:
    // 0x114388: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x114388u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_11438c:
    // 0x11438c: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x11438cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_114390:
    // 0x114390: 0xc6c30020  lwc1        $f3, 0x20($s6)
    ctx->pc = 0x114390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_114394:
    // 0x114394: 0xc6c40024  lwc1        $f4, 0x24($s6)
    ctx->pc = 0x114394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_114398:
    // 0x114398: 0xc6e00020  lwc1        $f0, 0x20($s7)
    ctx->pc = 0x114398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11439c:
    // 0x11439c: 0xc6e20024  lwc1        $f2, 0x24($s7)
    ctx->pc = 0x11439cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1143a0:
    // 0x1143a0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1143a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1143a4:
    // 0x1143a4: 0xc6e10028  lwc1        $f1, 0x28($s7)
    ctx->pc = 0x1143a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1143a8:
    // 0x1143a8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1143a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_1143ac:
    // 0x1143ac: 0xc6c30028  lwc1        $f3, 0x28($s6)
    ctx->pc = 0x1143acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1143b0:
    // 0x1143b0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1143b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_1143b4:
    // 0x1143b4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1143b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1143b8:
    // 0x1143b8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1143b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1143bc:
    // 0x1143bc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1143bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1143c0:
    // 0x1143c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1143c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1143c4:
    // 0x1143c4: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x1143c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1143c8:
    // 0x1143c8: 0x0  nop
    ctx->pc = 0x1143c8u;
    // NOP
label_1143cc:
    // 0x1143cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1143d0:
    if (ctx->pc == 0x1143D0u) {
        ctx->pc = 0x1143D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143CCu;
        // 0x1143d0: 0x26510020  addiu       $s1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1143D4u;
        goto label_1143d4;
    }
    ctx->pc = 0x1143CCu;
    {
        const bool branch_taken_0x1143cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1143D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143CCu;
        // 0x1143d0: 0x26510020  addiu       $s1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143cc) {
            ctx->pc = 0x1143E0u;
            goto label_1143e0;
        }
    }
    ctx->pc = 0x1143D4u;
label_1143d4:
    // 0x1143d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1143d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1143d8:
    // 0x1143d8: 0xae8200f0  sw          $v0, 0xF0($s4)
    ctx->pc = 0x1143d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 240), GPR_U32(ctx, 2));
label_1143dc:
    // 0x1143dc: 0x0  nop
    ctx->pc = 0x1143dcu;
    // NOP
label_1143e0:
    // 0x1143e0: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1143e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_1143e4:
    // 0x1143e4: 0x26a30030  addiu       $v1, $s5, 0x30
    ctx->pc = 0x1143e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_1143e8:
    // 0x1143e8: 0xc4a38318  lwc1        $f3, -0x7CE8($a1)
    ctx->pc = 0x1143e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294935320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1143ec:
    // 0x1143ec: 0x27c20030  addiu       $v0, $fp, 0x30
    ctx->pc = 0x1143ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
label_1143f0:
    // 0x1143f0: 0xc6c00020  lwc1        $f0, 0x20($s6)
    ctx->pc = 0x1143f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1143f4:
    // 0x1143f4: 0xc6e10020  lwc1        $f1, 0x20($s7)
    ctx->pc = 0x1143f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1143f8:
    // 0x1143f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1143f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1143fc:
    // 0x1143fc: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x1143fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_114400:
    // 0x114400: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x114400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114404:
    // 0x114404: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x114404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_114408:
    // 0x114408: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x114408u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_11440c:
    // 0x11440c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x11440cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_114410:
    // 0x114410: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x114410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_114414:
    // 0x114414: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x114414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114418:
    // 0x114418: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x114418u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_11441c:
    // 0x11441c: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x11441cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_114420:
    // 0x114420: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x114420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114424:
    // 0x114424: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x114424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_114428:
    // 0x114428: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x114428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_11442c:
    // 0x11442c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x11442cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_114430:
    // 0x114430: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x114430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_114434:
    // 0x114434: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x114434u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_114438:
    // 0x114438: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x114438u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_11443c:
    // 0x11443c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x11443cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_114440:
    // 0x114440: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x114440u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_114444:
    // 0x114444: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x114444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114448:
    // 0x114448: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x114448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11444c:
    // 0x11444c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11444cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_114450:
    // 0x114450: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x114450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_114454:
    // 0x114454: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x114454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_114458:
    // 0x114458: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x114458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11445c:
    // 0x11445c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x11445cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_114460:
    // 0x114460: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x114460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_114464:
    // 0x114464: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x114464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_114468:
    // 0x114468: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x114468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11446c:
    // 0x11446c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x11446cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_114470:
    // 0x114470: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x114470u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_114474:
    // 0x114474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_114478:
    // 0x114478: 0xc093a88  jal         func_24EA20
label_11447c:
    if (ctx->pc == 0x11447Cu) {
        ctx->pc = 0x11447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114478u;
        // 0x11447c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114480u;
        goto label_114480;
    }
    ctx->pc = 0x114478u;
    SET_GPR_U32(ctx, 31, 0x114480u);
    ctx->pc = 0x11447Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114478u;
    // 0x11447c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x114478u, 0x114480u)) {
        return;
    }
    ctx->pc = 0x114480u;
label_114480:
    // 0x114480: 0x8e8200f4  lw          $v0, 0xF4($s4)
    ctx->pc = 0x114480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
label_114484:
    // 0x114484: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
label_114488:
    if (ctx->pc == 0x114488u) {
        ctx->pc = 0x114488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114484u;
        // 0x114488: 0xe6570020  swc1        $f23, 0x20($s2) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11448Cu;
        goto label_11448c;
    }
    ctx->pc = 0x114484u;
    {
        const bool branch_taken_0x114484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114484) {
            ctx->pc = 0x114488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114484u;
            // 0x114488: 0xe6570020  swc1        $f23, 0x20($s2) (Delay Slot)
            { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x114528u;
            goto label_114528;
        }
    }
    ctx->pc = 0x11448Cu;
label_11448c:
    // 0x11448c: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x11448cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
label_114490:
    // 0x114490: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x114490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
label_114494:
    // 0x114494: 0xc4c38318  lwc1        $f3, -0x7CE8($a2)
    ctx->pc = 0x114494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294935320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_114498:
    // 0x114498: 0x26a30020  addiu       $v1, $s5, 0x20
    ctx->pc = 0x114498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_11449c:
    // 0x11449c: 0xc6c00010  lwc1        $f0, 0x10($s6)
    ctx->pc = 0x11449cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1144a0:
    // 0x1144a0: 0xc6e10010  lwc1        $f1, 0x10($s7)
    ctx->pc = 0x1144a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1144a4:
    // 0x1144a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1144a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1144a8:
    // 0x1144a8: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1144a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_1144ac:
    // 0x1144ac: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1144acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1144b0:
    // 0x1144b0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1144b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1144b4:
    // 0x1144b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1144b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1144b8:
    // 0x1144b8: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1144b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1144bc:
    // 0x1144bc: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1144bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1144c0:
    // 0x1144c0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1144c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1144c4:
    // 0x1144c4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1144c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1144c8:
    // 0x1144c8: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x1144c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1144cc:
    // 0x1144cc: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1144ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1144d0:
    // 0x1144d0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1144d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1144d4:
    // 0x1144d4: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1144d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_1144d8:
    // 0x1144d8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1144d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1144dc:
    // 0x1144dc: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1144dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1144e0:
    // 0x1144e0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1144e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1144e4:
    // 0x1144e4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1144e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1144e8:
    // 0x1144e8: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1144e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1144ec:
    // 0x1144ec: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x1144ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1144f0:
    // 0x1144f0: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1144f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1144f4:
    // 0x1144f4: 0xc6a10020  lwc1        $f1, 0x20($s5)
    ctx->pc = 0x1144f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1144f8:
    // 0x1144f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1144f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1144fc:
    // 0x1144fc: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1144fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_114500:
    // 0x114500: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x114500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_114504:
    // 0x114504: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x114504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114508:
    // 0x114508: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x114508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11450c:
    // 0x11450c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11450cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_114510:
    // 0x114510: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x114510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_114514:
    // 0x114514: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x114514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_114518:
    // 0x114518: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x114518u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_11451c:
    // 0x11451c: 0x10000004  b           . + 4 + (0x4 << 2)
label_114520:
    if (ctx->pc == 0x114520u) {
        ctx->pc = 0x114520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11451Cu;
        // 0x114520: 0xe6220008  swc1        $f2, 0x8($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x114524u;
        goto label_114524;
    }
    ctx->pc = 0x11451Cu;
    {
        const bool branch_taken_0x11451c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11451Cu;
        // 0x114520: 0xe6220008  swc1        $f2, 0x8($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11451c) {
            ctx->pc = 0x114530u;
            goto label_114530;
        }
    }
    ctx->pc = 0x114524u;
label_114524:
    // 0x114524: 0x0  nop
    ctx->pc = 0x114524u;
    // NOP
label_114528:
    // 0x114528: 0xe6360004  swc1        $f22, 0x4($s1)
    ctx->pc = 0x114528u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_11452c:
    // 0x11452c: 0xe6370008  swc1        $f23, 0x8($s1)
    ctx->pc = 0x11452cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_114530:
    // 0x114530: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x114530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_114534:
    // 0x114534: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x114534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_114538:
    // 0x114538: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x114538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11453c:
    // 0x11453c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x11453cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114540:
    // 0x114540: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x114540u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_114544:
    // 0x114544: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x114544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_114548:
    // 0x114548: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x114548u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_11454c:
    // 0x11454c: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x11454cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_114550:
    // 0x114550: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x114550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_114554:
    // 0x114554: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x114554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_114558:
    // 0x114558: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x114558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11455c:
    // 0x11455c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x11455cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114560:
    // 0x114560: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x114560u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_114564:
    // 0x114564: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x114564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_114568:
    // 0x114568: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x114568u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_11456c:
    // 0x11456c: 0xe6620004  swc1        $f2, 0x4($s3)
    ctx->pc = 0x11456cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_114570:
    // 0x114570: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x114570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_114574:
    // 0x114574: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x114574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_114578:
    // 0x114578: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x114578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11457c:
    // 0x11457c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x11457cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_114580:
    // 0x114580: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x114580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_114584:
    // 0x114584: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x114584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_114588:
    // 0x114588: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x114588u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_11458c:
    // 0x11458c: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x11458cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_114590:
    // 0x114590: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x114590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_114594:
    // 0x114594: 0xc093a88  jal         func_24EA20
label_114598:
    if (ctx->pc == 0x114598u) {
        ctx->pc = 0x114598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114594u;
        // 0x114598: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11459Cu;
        goto label_11459c;
    }
    ctx->pc = 0x114594u;
    SET_GPR_U32(ctx, 31, 0x11459Cu);
    ctx->pc = 0x114598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114594u;
    // 0x114598: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x114594u, 0x11459Cu)) {
        return;
    }
    ctx->pc = 0x11459Cu;
label_11459c:
    // 0x11459c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x11459cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1145a0:
    // 0x1145a0: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x1145a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1145a4:
    // 0x1145a4: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x1145a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1145a8:
    // 0x1145a8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1145a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1145ac:
    // 0x1145ac: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1145acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1145b0:
    // 0x1145b0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1145b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1145b4:
    // 0x1145b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1145b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1145b8:
    // 0x1145b8: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1145b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1145bc:
    // 0x1145bc: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x1145bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1145c0:
    // 0x1145c0: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1145c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1145c4:
    // 0x1145c4: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1145c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1145c8:
    // 0x1145c8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1145c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1145cc:
    // 0x1145cc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1145ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1145d0:
    // 0x1145d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1145d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1145d4:
    // 0x1145d4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1145d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1145d8:
    // 0x1145d8: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x1145d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1145dc:
    // 0x1145dc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1145dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1145e0:
    // 0x1145e0: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x1145e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1145e4:
    // 0x1145e4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1145e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1145e8:
    // 0x1145e8: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x1145e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1145ec:
    // 0x1145ec: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1145ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1145f0:
    // 0x1145f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1145f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1145f4:
    // 0x1145f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1145f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1145f8:
    // 0x1145f8: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1145f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1145fc:
    // 0x1145fc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1145fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_114600:
    // 0x114600: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x114600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_114604:
    // 0x114604: 0x8c42bda8  lw          $v0, -0x4258($v0)
    ctx->pc = 0x114604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950312)));
label_114608:
    // 0x114608: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x114608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_11460c:
    // 0x11460c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x11460cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_114610:
    // 0x114610: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
label_114614:
    if (ctx->pc == 0x114614u) {
        ctx->pc = 0x114614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114610u;
        // 0x114614: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114618u;
        goto label_114618;
    }
    ctx->pc = 0x114610u;
    {
        const bool branch_taken_0x114610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x114614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114610u;
        // 0x114614: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114610) {
            ctx->pc = 0x11462Cu;
            goto label_11462c;
        }
    }
    ctx->pc = 0x114618u;
label_114618:
    // 0x114618: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x114618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11461c:
    // 0x11461c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_114620:
    if (ctx->pc == 0x114620u) {
        ctx->pc = 0x114620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11461Cu;
        // 0x114620: 0xc68000fc  lwc1        $f0, 0xFC($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x114624u;
        goto label_114624;
    }
    ctx->pc = 0x11461Cu;
    {
        const bool branch_taken_0x11461c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11461c) {
            ctx->pc = 0x114620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11461Cu;
            // 0x114620: 0xc68000fc  lwc1        $f0, 0xFC($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x114630u;
            goto label_114630;
        }
    }
    ctx->pc = 0x114624u;
label_114624:
    // 0x114624: 0xc07fd18  jal         func_1FF460
label_114628:
    if (ctx->pc == 0x114628u) {
        ctx->pc = 0x114628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114624u;
        // 0x114628: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11462Cu;
        goto label_11462c;
    }
    ctx->pc = 0x114624u;
    SET_GPR_U32(ctx, 31, 0x11462Cu);
    ctx->pc = 0x114628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114624u;
    // 0x114628: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x114624u, 0x11462Cu)) {
        return;
    }
    ctx->pc = 0x11462Cu;
label_11462c:
    // 0x11462c: 0xc68000fc  lwc1        $f0, 0xFC($s4)
    ctx->pc = 0x11462cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114630:
    // 0x114630: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x114630u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
label_114634:
    // 0x114634: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x114634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_114638:
    // 0x114638: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x114638u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_11463c:
    // 0x11463c: 0x8ce3831c  lw          $v1, -0x7CE4($a3)
    ctx->pc = 0x11463cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294935324)));
label_114640:
    // 0x114640: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x114640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_114644:
    // 0x114644: 0x0  nop
    ctx->pc = 0x114644u;
    // NOP
label_114648:
    // 0x114648: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_11464c:
    if (ctx->pc == 0x11464Cu) {
        ctx->pc = 0x11464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114648u;
        // 0x11464c: 0xe68000fc  swc1        $f0, 0xFC($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 252), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x114650u;
        goto label_114650;
    }
    ctx->pc = 0x114648u;
    {
        const bool branch_taken_0x114648 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114648u;
        // 0x11464c: 0xe68000fc  swc1        $f0, 0xFC($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x114648) {
            ctx->pc = 0x114654u;
            goto label_114654;
        }
    }
    ctx->pc = 0x114650u;
label_114650:
    // 0x114650: 0xe68100fc  swc1        $f1, 0xFC($s4)
    ctx->pc = 0x114650u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 252), bits); }
label_114654:
    // 0x114654: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x114654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_114658:
    // 0x114658: 0x8c82831c  lw          $v0, -0x7CE4($a0)
    ctx->pc = 0x114658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294935324)));
label_11465c:
    // 0x11465c: 0x5062001d  beql        $v1, $v0, . + 4 + (0x1D << 2)
label_114660:
    if (ctx->pc == 0x114660u) {
        ctx->pc = 0x114660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11465Cu;
        // 0x114660: 0xae8000f8  sw          $zero, 0xF8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114664u;
        goto label_114664;
    }
    ctx->pc = 0x11465Cu;
    {
        const bool branch_taken_0x11465c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11465c) {
            ctx->pc = 0x114660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11465Cu;
            // 0x114660: 0xae8000f8  sw          $zero, 0xF8($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 248), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1146D4u;
            goto label_1146d4;
        }
    }
    ctx->pc = 0x114664u;
label_114664:
    // 0x114664: 0xac83831c  sw          $v1, -0x7CE4($a0)
    ctx->pc = 0x114664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294935324), GPR_U32(ctx, 3));
label_114668:
    // 0x114668: 0x8e8200ec  lw          $v0, 0xEC($s4)
    ctx->pc = 0x114668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 236)));
label_11466c:
    // 0x11466c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_114670:
    if (ctx->pc == 0x114670u) {
        ctx->pc = 0x114674u;
        goto label_114674;
    }
    ctx->pc = 0x11466Cu;
    {
        const bool branch_taken_0x11466c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11466c) {
            ctx->pc = 0x1146BCu;
            goto label_1146bc;
        }
    }
    ctx->pc = 0x114674u;
label_114674:
    // 0x114674: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_114678:
    if (ctx->pc == 0x114678u) {
        ctx->pc = 0x114678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114674u;
        // 0x114678: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11467Cu;
        goto label_11467c;
    }
    ctx->pc = 0x114674u;
    {
        const bool branch_taken_0x114674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114674u;
        // 0x114678: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114674) {
            ctx->pc = 0x1146A0u;
            goto label_1146a0;
        }
    }
    ctx->pc = 0x11467Cu;
label_11467c:
    // 0x11467c: 0x8e8600e0  lw          $a2, 0xE0($s4)
    ctx->pc = 0x11467cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_114680:
    // 0x114680: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x114680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_114684:
    // 0x114684: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x114684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_114688:
    // 0x114688: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x114688u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_11468c:
    // 0x11468c: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x11468cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_114690:
    // 0x114690: 0x60f809  jalr        $v1
label_114694:
    if (ctx->pc == 0x114694u) {
        ctx->pc = 0x114694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114690u;
        // 0x114694: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114698u;
        goto label_114698;
    }
    ctx->pc = 0x114690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x114698u);
        ctx->pc = 0x114694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114690u;
        // 0x114694: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114690u, 0x114698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114698u;
label_114698:
    // 0x114698: 0x10000008  b           . + 4 + (0x8 << 2)
label_11469c:
    if (ctx->pc == 0x11469Cu) {
        ctx->pc = 0x1146A0u;
        goto label_1146a0;
    }
    ctx->pc = 0x114698u;
    {
        const bool branch_taken_0x114698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114698) {
            ctx->pc = 0x1146BCu;
            goto label_1146bc;
        }
    }
    ctx->pc = 0x1146A0u;
label_1146a0:
    // 0x1146a0: 0x8e8600e4  lw          $a2, 0xE4($s4)
    ctx->pc = 0x1146a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
label_1146a4:
    // 0x1146a4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1146a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1146a8:
    // 0x1146a8: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1146a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1146ac:
    // 0x1146ac: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1146acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_1146b0:
    // 0x1146b0: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1146b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1146b4:
    // 0x1146b4: 0x60f809  jalr        $v1
label_1146b8:
    if (ctx->pc == 0x1146B8u) {
        ctx->pc = 0x1146B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146B4u;
        // 0x1146b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1146BCu;
        goto label_1146bc;
    }
    ctx->pc = 0x1146B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1146BCu);
        ctx->pc = 0x1146B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146B4u;
        // 0x1146b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1146B4u, 0x1146BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1146BCu;
label_1146bc:
    // 0x1146bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1146bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1146c0:
    // 0x1146c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1146c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1146c4:
    // 0x1146c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1146c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1146c8:
    // 0x1146c8: 0xae8200f8  sw          $v0, 0xF8($s4)
    ctx->pc = 0x1146c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 248), GPR_U32(ctx, 2));
label_1146cc:
    // 0x1146cc: 0xe68000fc  swc1        $f0, 0xFC($s4)
    ctx->pc = 0x1146ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 252), bits); }
label_1146d0:
    // 0x1146d0: 0xae8000f8  sw          $zero, 0xF8($s4)
    ctx->pc = 0x1146d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 248), GPR_U32(ctx, 0));
label_1146d4:
    // 0x1146d4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1146d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1146d8:
    // 0x1146d8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1146d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1146dc:
    // 0x1146dc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1146dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1146e0:
    // 0x1146e0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1146e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1146e4:
    // 0x1146e4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1146e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1146e8:
    // 0x1146e8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1146e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1146ec:
    // 0x1146ec: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1146ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1146f0:
    // 0x1146f0: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1146f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1146f4:
    // 0x1146f4: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1146f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1146f8:
    // 0x1146f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1146f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1146fc:
    // 0x1146fc: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x1146fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_114700:
    // 0x114700: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x114700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_114704:
    // 0x114704: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x114704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_114708:
    // 0x114708: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x114708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11470c:
    // 0x11470c: 0x3e00008  jr          $ra
label_114710:
    if (ctx->pc == 0x114710u) {
        ctx->pc = 0x114710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11470Cu;
        // 0x114710: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114714u;
        goto label_114714;
    }
    ctx->pc = 0x11470Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11470Cu;
        // 0x114710: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11470Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114714u;
label_114714:
    // 0x114714: 0x0  nop
    ctx->pc = 0x114714u;
    // NOP
    ctx->pc = 0x114718u;
}
