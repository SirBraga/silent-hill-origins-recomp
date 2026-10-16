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

// Function: sub_00277170
// Address: 0x277170 - 0x2776b8
void sub_00277170_0x277170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277170_0x277170");
#endif

    switch (ctx->pc) {
        case 0x277170u: goto label_277170;
        case 0x277174u: goto label_277174;
        case 0x277178u: goto label_277178;
        case 0x27717cu: goto label_27717c;
        case 0x277180u: goto label_277180;
        case 0x277184u: goto label_277184;
        case 0x277188u: goto label_277188;
        case 0x27718cu: goto label_27718c;
        case 0x277190u: goto label_277190;
        case 0x277194u: goto label_277194;
        case 0x277198u: goto label_277198;
        case 0x27719cu: goto label_27719c;
        case 0x2771a0u: goto label_2771a0;
        case 0x2771a4u: goto label_2771a4;
        case 0x2771a8u: goto label_2771a8;
        case 0x2771acu: goto label_2771ac;
        case 0x2771b0u: goto label_2771b0;
        case 0x2771b4u: goto label_2771b4;
        case 0x2771b8u: goto label_2771b8;
        case 0x2771bcu: goto label_2771bc;
        case 0x2771c0u: goto label_2771c0;
        case 0x2771c4u: goto label_2771c4;
        case 0x2771c8u: goto label_2771c8;
        case 0x2771ccu: goto label_2771cc;
        case 0x2771d0u: goto label_2771d0;
        case 0x2771d4u: goto label_2771d4;
        case 0x2771d8u: goto label_2771d8;
        case 0x2771dcu: goto label_2771dc;
        case 0x2771e0u: goto label_2771e0;
        case 0x2771e4u: goto label_2771e4;
        case 0x2771e8u: goto label_2771e8;
        case 0x2771ecu: goto label_2771ec;
        case 0x2771f0u: goto label_2771f0;
        case 0x2771f4u: goto label_2771f4;
        case 0x2771f8u: goto label_2771f8;
        case 0x2771fcu: goto label_2771fc;
        case 0x277200u: goto label_277200;
        case 0x277204u: goto label_277204;
        case 0x277208u: goto label_277208;
        case 0x27720cu: goto label_27720c;
        case 0x277210u: goto label_277210;
        case 0x277214u: goto label_277214;
        case 0x277218u: goto label_277218;
        case 0x27721cu: goto label_27721c;
        case 0x277220u: goto label_277220;
        case 0x277224u: goto label_277224;
        case 0x277228u: goto label_277228;
        case 0x27722cu: goto label_27722c;
        case 0x277230u: goto label_277230;
        case 0x277234u: goto label_277234;
        case 0x277238u: goto label_277238;
        case 0x27723cu: goto label_27723c;
        case 0x277240u: goto label_277240;
        case 0x277244u: goto label_277244;
        case 0x277248u: goto label_277248;
        case 0x27724cu: goto label_27724c;
        case 0x277250u: goto label_277250;
        case 0x277254u: goto label_277254;
        case 0x277258u: goto label_277258;
        case 0x27725cu: goto label_27725c;
        case 0x277260u: goto label_277260;
        case 0x277264u: goto label_277264;
        case 0x277268u: goto label_277268;
        case 0x27726cu: goto label_27726c;
        case 0x277270u: goto label_277270;
        case 0x277274u: goto label_277274;
        case 0x277278u: goto label_277278;
        case 0x27727cu: goto label_27727c;
        case 0x277280u: goto label_277280;
        case 0x277284u: goto label_277284;
        case 0x277288u: goto label_277288;
        case 0x27728cu: goto label_27728c;
        case 0x277290u: goto label_277290;
        case 0x277294u: goto label_277294;
        case 0x277298u: goto label_277298;
        case 0x27729cu: goto label_27729c;
        case 0x2772a0u: goto label_2772a0;
        case 0x2772a4u: goto label_2772a4;
        case 0x2772a8u: goto label_2772a8;
        case 0x2772acu: goto label_2772ac;
        case 0x2772b0u: goto label_2772b0;
        case 0x2772b4u: goto label_2772b4;
        case 0x2772b8u: goto label_2772b8;
        case 0x2772bcu: goto label_2772bc;
        case 0x2772c0u: goto label_2772c0;
        case 0x2772c4u: goto label_2772c4;
        case 0x2772c8u: goto label_2772c8;
        case 0x2772ccu: goto label_2772cc;
        case 0x2772d0u: goto label_2772d0;
        case 0x2772d4u: goto label_2772d4;
        case 0x2772d8u: goto label_2772d8;
        case 0x2772dcu: goto label_2772dc;
        case 0x2772e0u: goto label_2772e0;
        case 0x2772e4u: goto label_2772e4;
        case 0x2772e8u: goto label_2772e8;
        case 0x2772ecu: goto label_2772ec;
        case 0x2772f0u: goto label_2772f0;
        case 0x2772f4u: goto label_2772f4;
        case 0x2772f8u: goto label_2772f8;
        case 0x2772fcu: goto label_2772fc;
        case 0x277300u: goto label_277300;
        case 0x277304u: goto label_277304;
        case 0x277308u: goto label_277308;
        case 0x27730cu: goto label_27730c;
        case 0x277310u: goto label_277310;
        case 0x277314u: goto label_277314;
        case 0x277318u: goto label_277318;
        case 0x27731cu: goto label_27731c;
        case 0x277320u: goto label_277320;
        case 0x277324u: goto label_277324;
        case 0x277328u: goto label_277328;
        case 0x27732cu: goto label_27732c;
        case 0x277330u: goto label_277330;
        case 0x277334u: goto label_277334;
        case 0x277338u: goto label_277338;
        case 0x27733cu: goto label_27733c;
        case 0x277340u: goto label_277340;
        case 0x277344u: goto label_277344;
        case 0x277348u: goto label_277348;
        case 0x27734cu: goto label_27734c;
        case 0x277350u: goto label_277350;
        case 0x277354u: goto label_277354;
        case 0x277358u: goto label_277358;
        case 0x27735cu: goto label_27735c;
        case 0x277360u: goto label_277360;
        case 0x277364u: goto label_277364;
        case 0x277368u: goto label_277368;
        case 0x27736cu: goto label_27736c;
        case 0x277370u: goto label_277370;
        case 0x277374u: goto label_277374;
        case 0x277378u: goto label_277378;
        case 0x27737cu: goto label_27737c;
        case 0x277380u: goto label_277380;
        case 0x277384u: goto label_277384;
        case 0x277388u: goto label_277388;
        case 0x27738cu: goto label_27738c;
        case 0x277390u: goto label_277390;
        case 0x277394u: goto label_277394;
        case 0x277398u: goto label_277398;
        case 0x27739cu: goto label_27739c;
        case 0x2773a0u: goto label_2773a0;
        case 0x2773a4u: goto label_2773a4;
        case 0x2773a8u: goto label_2773a8;
        case 0x2773acu: goto label_2773ac;
        case 0x2773b0u: goto label_2773b0;
        case 0x2773b4u: goto label_2773b4;
        case 0x2773b8u: goto label_2773b8;
        case 0x2773bcu: goto label_2773bc;
        case 0x2773c0u: goto label_2773c0;
        case 0x2773c4u: goto label_2773c4;
        case 0x2773c8u: goto label_2773c8;
        case 0x2773ccu: goto label_2773cc;
        case 0x2773d0u: goto label_2773d0;
        case 0x2773d4u: goto label_2773d4;
        case 0x2773d8u: goto label_2773d8;
        case 0x2773dcu: goto label_2773dc;
        case 0x2773e0u: goto label_2773e0;
        case 0x2773e4u: goto label_2773e4;
        case 0x2773e8u: goto label_2773e8;
        case 0x2773ecu: goto label_2773ec;
        case 0x2773f0u: goto label_2773f0;
        case 0x2773f4u: goto label_2773f4;
        case 0x2773f8u: goto label_2773f8;
        case 0x2773fcu: goto label_2773fc;
        case 0x277400u: goto label_277400;
        case 0x277404u: goto label_277404;
        case 0x277408u: goto label_277408;
        case 0x27740cu: goto label_27740c;
        case 0x277410u: goto label_277410;
        case 0x277414u: goto label_277414;
        case 0x277418u: goto label_277418;
        case 0x27741cu: goto label_27741c;
        case 0x277420u: goto label_277420;
        case 0x277424u: goto label_277424;
        case 0x277428u: goto label_277428;
        case 0x27742cu: goto label_27742c;
        case 0x277430u: goto label_277430;
        case 0x277434u: goto label_277434;
        case 0x277438u: goto label_277438;
        case 0x27743cu: goto label_27743c;
        case 0x277440u: goto label_277440;
        case 0x277444u: goto label_277444;
        case 0x277448u: goto label_277448;
        case 0x27744cu: goto label_27744c;
        case 0x277450u: goto label_277450;
        case 0x277454u: goto label_277454;
        case 0x277458u: goto label_277458;
        case 0x27745cu: goto label_27745c;
        case 0x277460u: goto label_277460;
        case 0x277464u: goto label_277464;
        case 0x277468u: goto label_277468;
        case 0x27746cu: goto label_27746c;
        case 0x277470u: goto label_277470;
        case 0x277474u: goto label_277474;
        case 0x277478u: goto label_277478;
        case 0x27747cu: goto label_27747c;
        case 0x277480u: goto label_277480;
        case 0x277484u: goto label_277484;
        case 0x277488u: goto label_277488;
        case 0x27748cu: goto label_27748c;
        case 0x277490u: goto label_277490;
        case 0x277494u: goto label_277494;
        case 0x277498u: goto label_277498;
        case 0x27749cu: goto label_27749c;
        case 0x2774a0u: goto label_2774a0;
        case 0x2774a4u: goto label_2774a4;
        case 0x2774a8u: goto label_2774a8;
        case 0x2774acu: goto label_2774ac;
        case 0x2774b0u: goto label_2774b0;
        case 0x2774b4u: goto label_2774b4;
        case 0x2774b8u: goto label_2774b8;
        case 0x2774bcu: goto label_2774bc;
        case 0x2774c0u: goto label_2774c0;
        case 0x2774c4u: goto label_2774c4;
        case 0x2774c8u: goto label_2774c8;
        case 0x2774ccu: goto label_2774cc;
        case 0x2774d0u: goto label_2774d0;
        case 0x2774d4u: goto label_2774d4;
        case 0x2774d8u: goto label_2774d8;
        case 0x2774dcu: goto label_2774dc;
        case 0x2774e0u: goto label_2774e0;
        case 0x2774e4u: goto label_2774e4;
        case 0x2774e8u: goto label_2774e8;
        case 0x2774ecu: goto label_2774ec;
        case 0x2774f0u: goto label_2774f0;
        case 0x2774f4u: goto label_2774f4;
        case 0x2774f8u: goto label_2774f8;
        case 0x2774fcu: goto label_2774fc;
        case 0x277500u: goto label_277500;
        case 0x277504u: goto label_277504;
        case 0x277508u: goto label_277508;
        case 0x27750cu: goto label_27750c;
        case 0x277510u: goto label_277510;
        case 0x277514u: goto label_277514;
        case 0x277518u: goto label_277518;
        case 0x27751cu: goto label_27751c;
        case 0x277520u: goto label_277520;
        case 0x277524u: goto label_277524;
        case 0x277528u: goto label_277528;
        case 0x27752cu: goto label_27752c;
        case 0x277530u: goto label_277530;
        case 0x277534u: goto label_277534;
        case 0x277538u: goto label_277538;
        case 0x27753cu: goto label_27753c;
        case 0x277540u: goto label_277540;
        case 0x277544u: goto label_277544;
        case 0x277548u: goto label_277548;
        case 0x27754cu: goto label_27754c;
        case 0x277550u: goto label_277550;
        case 0x277554u: goto label_277554;
        case 0x277558u: goto label_277558;
        case 0x27755cu: goto label_27755c;
        case 0x277560u: goto label_277560;
        case 0x277564u: goto label_277564;
        case 0x277568u: goto label_277568;
        case 0x27756cu: goto label_27756c;
        case 0x277570u: goto label_277570;
        case 0x277574u: goto label_277574;
        case 0x277578u: goto label_277578;
        case 0x27757cu: goto label_27757c;
        case 0x277580u: goto label_277580;
        case 0x277584u: goto label_277584;
        case 0x277588u: goto label_277588;
        case 0x27758cu: goto label_27758c;
        case 0x277590u: goto label_277590;
        case 0x277594u: goto label_277594;
        case 0x277598u: goto label_277598;
        case 0x27759cu: goto label_27759c;
        case 0x2775a0u: goto label_2775a0;
        case 0x2775a4u: goto label_2775a4;
        case 0x2775a8u: goto label_2775a8;
        case 0x2775acu: goto label_2775ac;
        case 0x2775b0u: goto label_2775b0;
        case 0x2775b4u: goto label_2775b4;
        case 0x2775b8u: goto label_2775b8;
        case 0x2775bcu: goto label_2775bc;
        case 0x2775c0u: goto label_2775c0;
        case 0x2775c4u: goto label_2775c4;
        case 0x2775c8u: goto label_2775c8;
        case 0x2775ccu: goto label_2775cc;
        case 0x2775d0u: goto label_2775d0;
        case 0x2775d4u: goto label_2775d4;
        case 0x2775d8u: goto label_2775d8;
        case 0x2775dcu: goto label_2775dc;
        case 0x2775e0u: goto label_2775e0;
        case 0x2775e4u: goto label_2775e4;
        case 0x2775e8u: goto label_2775e8;
        case 0x2775ecu: goto label_2775ec;
        case 0x2775f0u: goto label_2775f0;
        case 0x2775f4u: goto label_2775f4;
        case 0x2775f8u: goto label_2775f8;
        case 0x2775fcu: goto label_2775fc;
        case 0x277600u: goto label_277600;
        case 0x277604u: goto label_277604;
        case 0x277608u: goto label_277608;
        case 0x27760cu: goto label_27760c;
        case 0x277610u: goto label_277610;
        case 0x277614u: goto label_277614;
        case 0x277618u: goto label_277618;
        case 0x27761cu: goto label_27761c;
        case 0x277620u: goto label_277620;
        case 0x277624u: goto label_277624;
        case 0x277628u: goto label_277628;
        case 0x27762cu: goto label_27762c;
        case 0x277630u: goto label_277630;
        case 0x277634u: goto label_277634;
        case 0x277638u: goto label_277638;
        case 0x27763cu: goto label_27763c;
        case 0x277640u: goto label_277640;
        case 0x277644u: goto label_277644;
        case 0x277648u: goto label_277648;
        case 0x27764cu: goto label_27764c;
        case 0x277650u: goto label_277650;
        case 0x277654u: goto label_277654;
        case 0x277658u: goto label_277658;
        case 0x27765cu: goto label_27765c;
        case 0x277660u: goto label_277660;
        case 0x277664u: goto label_277664;
        case 0x277668u: goto label_277668;
        case 0x27766cu: goto label_27766c;
        case 0x277670u: goto label_277670;
        case 0x277674u: goto label_277674;
        case 0x277678u: goto label_277678;
        case 0x27767cu: goto label_27767c;
        case 0x277680u: goto label_277680;
        case 0x277684u: goto label_277684;
        case 0x277688u: goto label_277688;
        case 0x27768cu: goto label_27768c;
        case 0x277690u: goto label_277690;
        case 0x277694u: goto label_277694;
        case 0x277698u: goto label_277698;
        case 0x27769cu: goto label_27769c;
        case 0x2776a0u: goto label_2776a0;
        case 0x2776a4u: goto label_2776a4;
        case 0x2776a8u: goto label_2776a8;
        case 0x2776acu: goto label_2776ac;
        case 0x2776b0u: goto label_2776b0;
        case 0x2776b4u: goto label_2776b4;
        default: break;
    }

    ctx->pc = 0x277170u;

label_277170:
    // 0x277170: 0x27bdfbf0  addiu       $sp, $sp, -0x410
    ctx->pc = 0x277170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966256));
label_277174:
    // 0x277174: 0x7fb103e0  sq          $s1, 0x3E0($sp)
    ctx->pc = 0x277174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), GPR_VEC(ctx, 17));
label_277178:
    // 0x277178: 0x7fb403b0  sq          $s4, 0x3B0($sp)
    ctx->pc = 0x277178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 20));
label_27717c:
    // 0x27717c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27717cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_277180:
    // 0x277180: 0x7fb503a0  sq          $s5, 0x3A0($sp)
    ctx->pc = 0x277180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 21));
label_277184:
    // 0x277184: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x277184u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_277188:
    // 0x277188: 0x7fb003f0  sq          $s0, 0x3F0($sp)
    ctx->pc = 0x277188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 16));
label_27718c:
    // 0x27718c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x27718cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_277190:
    // 0x277190: 0x7fb203d0  sq          $s2, 0x3D0($sp)
    ctx->pc = 0x277190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), GPR_VEC(ctx, 18));
label_277194:
    // 0x277194: 0x7fb303c0  sq          $s3, 0x3C0($sp)
    ctx->pc = 0x277194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 19));
label_277198:
    // 0x277198: 0x7fb60390  sq          $s6, 0x390($sp)
    ctx->pc = 0x277198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 22));
label_27719c:
    // 0x27719c: 0xffbf0380  sd          $ra, 0x380($sp)
    ctx->pc = 0x27719cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 896), GPR_U64(ctx, 31));
label_2771a0:
    // 0x2771a0: 0xe7b40400  swc1        $f20, 0x400($sp)
    ctx->pc = 0x2771a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1024), bits); }
label_2771a4:
    // 0x2771a4: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x2771a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2771a8:
    // 0x2771a8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2771a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2771ac:
    // 0x2771ac: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x2771acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2771b0:
    // 0x2771b0: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x2771b0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2771b4:
    // 0x2771b4: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2771b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2771b8:
    // 0x2771b8: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2771b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2771bc:
    // 0x2771bc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2771bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2771c0:
    // 0x2771c0: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x2771c0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_2771c4:
    // 0x2771c4: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x2771c4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2771c8:
    // 0x2771c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2771c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2771cc:
    // 0x2771cc: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2771ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2771d0:
    // 0x2771d0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2771d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2771d4:
    // 0x2771d4: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x2771d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_2771d8:
    // 0x2771d8: 0x8f8387cc  lw          $v1, -0x7834($gp)
    ctx->pc = 0x2771d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936524)));
label_2771dc:
    // 0x2771dc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2771dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2771e0:
    // 0x2771e0: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x2771e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_2771e4:
    // 0x2771e4: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x2771e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_2771e8:
    // 0x2771e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2771e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2771ec:
    // 0x2771ec: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x2771ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2771f0:
    // 0x2771f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2771f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2771f4:
    // 0x2771f4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2771f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2771f8:
    // 0x2771f8: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x2771f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2771fc:
    // 0x2771fc: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x2771fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_277200:
    // 0x277200: 0x46040500  add.s       $f20, $f0, $f4
    ctx->pc = 0x277200u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_277204:
    // 0x277204: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x277204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_277208:
    // 0x277208: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x277208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_27720c:
    // 0x27720c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x27720cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_277210:
    // 0x277210: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x277210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_277214:
    // 0x277214: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x277214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_277218:
    // 0x277218: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x277218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_27721c:
    // 0x27721c: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x27721cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_277220:
    // 0x277220: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x277220u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_277224:
    // 0x277224: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277228:
    // 0x277228: 0x46002832  c.eq.s      $f5, $f0
    ctx->pc = 0x277228u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27722c:
    // 0x27722c: 0x0  nop
    ctx->pc = 0x27722cu;
    // NOP
label_277230:
    // 0x277230: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_277234:
    if (ctx->pc == 0x277234u) {
        ctx->pc = 0x277234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277230u;
        // 0x277234: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277238u;
        goto label_277238;
    }
    ctx->pc = 0x277230u;
    {
        const bool branch_taken_0x277230 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x277234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277230u;
        // 0x277234: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277230) {
            ctx->pc = 0x277248u;
            goto label_277248;
        }
    }
    ctx->pc = 0x277238u;
label_277238:
    // 0x277238: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x277238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27723c:
    // 0x27723c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27723cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277240:
    // 0x277240: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x277240u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[5]);
label_277244:
    // 0x277244: 0x0  nop
    ctx->pc = 0x277244u;
    // NOP
label_277248:
    // 0x277248: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x277248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27724c:
    // 0x27724c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x27724cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_277250:
    // 0x277250: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x277250u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277254:
    // 0x277254: 0x0  nop
    ctx->pc = 0x277254u;
    // NOP
label_277258:
    // 0x277258: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_27725c:
    if (ctx->pc == 0x27725Cu) {
        ctx->pc = 0x27725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277258u;
        // 0x27725c: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277260u;
        goto label_277260;
    }
    ctx->pc = 0x277258u;
    {
        const bool branch_taken_0x277258 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277258u;
        // 0x27725c: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277258) {
            ctx->pc = 0x277274u;
            goto label_277274;
        }
    }
    ctx->pc = 0x277260u;
label_277260:
    // 0x277260: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x277260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_277264:
    // 0x277264: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x277264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277268:
    // 0x277268: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x277268u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_27726c:
    // 0x27726c: 0x10000004  b           . + 4 + (0x4 << 2)
label_277270:
    if (ctx->pc == 0x277270u) {
        ctx->pc = 0x277270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27726Cu;
        // 0x277270: 0xc7a10024  lwc1        $f1, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277274u;
        goto label_277274;
    }
    ctx->pc = 0x27726Cu;
    {
        const bool branch_taken_0x27726c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27726Cu;
        // 0x277270: 0xc7a10024  lwc1        $f1, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27726c) {
            ctx->pc = 0x277280u;
            goto label_277280;
        }
    }
    ctx->pc = 0x277274u;
label_277274:
    // 0x277274: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x277274u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_277278:
    // 0x277278: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x277278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27727c:
    // 0x27727c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x27727cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_277280:
    // 0x277280: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x277280u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277284:
    // 0x277284: 0x0  nop
    ctx->pc = 0x277284u;
    // NOP
label_277288:
    // 0x277288: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_27728c:
    if (ctx->pc == 0x27728Cu) {
        ctx->pc = 0x27728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277288u;
        // 0x27728c: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277290u;
        goto label_277290;
    }
    ctx->pc = 0x277288u;
    {
        const bool branch_taken_0x277288 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277288u;
        // 0x27728c: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277288) {
            ctx->pc = 0x2772A4u;
            goto label_2772a4;
        }
    }
    ctx->pc = 0x277290u;
label_277290:
    // 0x277290: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x277290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_277294:
    // 0x277294: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x277294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277298:
    // 0x277298: 0x46010183  div.s       $f6, $f0, $f1
    ctx->pc = 0x277298u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_27729c:
    // 0x27729c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2772a0:
    if (ctx->pc == 0x2772A0u) {
        ctx->pc = 0x2772A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27729Cu;
        // 0x2772a0: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2772A4u;
        goto label_2772a4;
    }
    ctx->pc = 0x27729Cu;
    {
        const bool branch_taken_0x27729c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2772A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27729Cu;
        // 0x2772a0: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27729c) {
            ctx->pc = 0x2772ACu;
            goto label_2772ac;
        }
    }
    ctx->pc = 0x2772A4u;
label_2772a4:
    // 0x2772a4: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x2772a4u;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
label_2772a8:
    // 0x2772a8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2772a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2772ac:
    // 0x2772ac: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x2772acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2772b0:
    // 0x2772b0: 0xc6250010  lwc1        $f5, 0x10($s1)
    ctx->pc = 0x2772b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2772b4:
    // 0x2772b4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2772b4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_2772b8:
    // 0x2772b8: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2772b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2772bc:
    // 0x2772bc: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x2772bcu;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
label_2772c0:
    // 0x2772c0: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x2772c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2772c4:
    // 0x2772c4: 0x46002945  abs.s       $f5, $f5
    ctx->pc = 0x2772c4u;
    ctx->f[5] = FPU_ABS_S(ctx->f[5]);
label_2772c8:
    // 0x2772c8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2772c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2772cc:
    // 0x2772cc: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2772ccu;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
label_2772d0:
    // 0x2772d0: 0x46002105  abs.s       $f4, $f4
    ctx->pc = 0x2772d0u;
    ctx->f[4] = FPU_ABS_S(ctx->f[4]);
label_2772d4:
    // 0x2772d4: 0x460018e8  max.s       $f3, $f3, $f0
    ctx->pc = 0x2772d4u;
    ctx->f[3] = std::max(ctx->f[3], ctx->f[0]);
label_2772d8:
    // 0x2772d8: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2772d8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_2772dc:
    // 0x2772dc: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x2772dcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2772e0:
    // 0x2772e0: 0x460510a8  max.s       $f2, $f2, $f5
    ctx->pc = 0x2772e0u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[5]);
label_2772e4:
    // 0x2772e4: 0x46040868  max.s       $f1, $f1, $f4
    ctx->pc = 0x2772e4u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[4]);
label_2772e8:
    // 0x2772e8: 0xc7808014  lwc1        $f0, -0x7FEC($gp)
    ctx->pc = 0x2772e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2772ec:
    // 0x2772ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2772ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2772f0:
    // 0x2772f0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2772f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2772f4:
    // 0x2772f4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2772f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2772f8:
    // 0x2772f8: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x2772f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2772fc:
    // 0x2772fc: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x2772fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_277300:
    // 0x277300: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x277300u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_277304:
    // 0x277304: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x277304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_277308:
    // 0x277308: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x277308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27730c:
    // 0x27730c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27730cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277310:
    // 0x277310: 0x27a3004c  addiu       $v1, $sp, 0x4C
    ctx->pc = 0x277310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_277314:
    // 0x277314: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x277314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_277318:
    // 0x277318: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x277318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_27731c:
    // 0x27731c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x27731cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_277320:
    // 0x277320: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x277320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_277324:
    // 0x277324: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x277324u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_277328:
    // 0x277328: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x277328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_27732c:
    // 0x27732c: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
label_277330:
    if (ctx->pc == 0x277330u) {
        ctx->pc = 0x277330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27732Cu;
        // 0x277330: 0xafa3034c  sw          $v1, 0x34C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277334u;
        goto label_277334;
    }
    ctx->pc = 0x27732Cu;
    {
        const bool branch_taken_0x27732c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27732Cu;
        // 0x277330: 0xafa3034c  sw          $v1, 0x34C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27732c) {
            ctx->pc = 0x277688u;
            goto label_277688;
        }
    }
    ctx->pc = 0x277334u;
label_277334:
    // 0x277334: 0x8c62fff4  lw          $v0, -0xC($v1)
    ctx->pc = 0x277334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
label_277338:
    // 0x277338: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x277338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_27733c:
    // 0x27733c: 0xafa3034c  sw          $v1, 0x34C($sp)
    ctx->pc = 0x27733cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 3));
label_277340:
    // 0x277340: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x277340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_277344:
    // 0x277344: 0x4800067  bltz        $a0, . + 4 + (0x67 << 2)
label_277348:
    if (ctx->pc == 0x277348u) {
        ctx->pc = 0x277348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277344u;
        // 0x277348: 0x8fa2034c  lw          $v0, 0x34C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27734Cu;
        goto label_27734c;
    }
    ctx->pc = 0x277344u;
    {
        const bool branch_taken_0x277344 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x277348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277344u;
        // 0x277348: 0x8fa2034c  lw          $v0, 0x34C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277344) {
            ctx->pc = 0x2774E4u;
            goto label_2774e4;
        }
    }
    ctx->pc = 0x27734Cu;
label_27734c:
    // 0x27734c: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x27734cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_277350:
    // 0x277350: 0x27ab001c  addiu       $t3, $sp, 0x1C
    ctx->pc = 0x277350u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_277354:
    // 0x277354: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x277354u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_277358:
    // 0x277358: 0x27a90034  addiu       $t1, $sp, 0x34
    ctx->pc = 0x277358u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_27735c:
    // 0x27735c: 0x27a80028  addiu       $t0, $sp, 0x28
    ctx->pc = 0x27735cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_277360:
    // 0x277360: 0x8fa5034c  lw          $a1, 0x34C($sp)
    ctx->pc = 0x277360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_277364:
    // 0x277364: 0x0  nop
    ctx->pc = 0x277364u;
    // NOP
label_277368:
    // 0x277368: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x277368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_27736c:
    // 0x27736c: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x27736cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_277370:
    // 0x277370: 0x1671021  addu        $v0, $t3, $a3
    ctx->pc = 0x277370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_277374:
    // 0x277374: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x277374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_277378:
    // 0x277378: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x277378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27737c:
    // 0x27737c: 0x1471821  addu        $v1, $t2, $a3
    ctx->pc = 0x27737cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_277380:
    // 0x277380: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x277380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_277384:
    // 0x277384: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x277384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_277388:
    // 0x277388: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x277388u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_27738c:
    // 0x27738c: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x27738cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277390:
    // 0x277390: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x277390u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_277394:
    // 0x277394: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x277394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_277398:
    // 0x277398: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x277398u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27739c:
    // 0x27739c: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x27739cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2773a0:
    // 0x2773a0: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2773a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2773a4:
    // 0x2773a4: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x2773a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_2773a8:
    // 0x2773a8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2773a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2773ac:
    // 0x2773ac: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x2773acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2773b0:
    // 0x2773b0: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_2773b4:
    if (ctx->pc == 0x2773B4u) {
        ctx->pc = 0x2773B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2773B0u;
        // 0x2773b4: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2773B8u;
        goto label_2773b8;
    }
    ctx->pc = 0x2773B0u;
    {
        const bool branch_taken_0x2773b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2773B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2773B0u;
        // 0x2773b4: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2773b0) {
            ctx->pc = 0x277434u;
            goto label_277434;
        }
    }
    ctx->pc = 0x2773B8u;
label_2773b8:
    // 0x2773b8: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2773b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2773bc:
    // 0x2773bc: 0x0  nop
    ctx->pc = 0x2773bcu;
    // NOP
label_2773c0:
    // 0x2773c0: 0x45030027  bc1tl       . + 4 + (0x27 << 2)
label_2773c4:
    if (ctx->pc == 0x2773C4u) {
        ctx->pc = 0x2773C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2773C0u;
        // 0x2773c4: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2773C8u;
        goto label_2773c8;
    }
    ctx->pc = 0x2773C0u;
    {
        const bool branch_taken_0x2773c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2773c0) {
            ctx->pc = 0x2773C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2773C0u;
            // 0x2773c4: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277460u;
            goto label_277460;
        }
    }
    ctx->pc = 0x2773C8u;
label_2773c8:
    // 0x2773c8: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x2773c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2773cc:
    // 0x2773cc: 0x0  nop
    ctx->pc = 0x2773ccu;
    // NOP
label_2773d0:
    // 0x2773d0: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
label_2773d4:
    if (ctx->pc == 0x2773D4u) {
        ctx->pc = 0x2773D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2773D0u;
        // 0x2773d4: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2773D8u;
        goto label_2773d8;
    }
    ctx->pc = 0x2773D0u;
    {
        const bool branch_taken_0x2773d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2773d0) {
            ctx->pc = 0x2773D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2773D0u;
            // 0x2773d4: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277444u;
            goto label_277444;
        }
    }
    ctx->pc = 0x2773D8u;
label_2773d8:
    // 0x2773d8: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x2773d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_2773dc:
    // 0x2773dc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2773dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2773e0:
    // 0x2773e0: 0xc480fff8  lwc1        $f0, -0x8($a0)
    ctx->pc = 0x2773e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2773e4:
    // 0x2773e4: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x2773e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_2773e8:
    // 0x2773e8: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x2773e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2773ec:
    // 0x2773ec: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2773ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2773f0:
    // 0x2773f0: 0xc484fffc  lwc1        $f4, -0x4($a0)
    ctx->pc = 0x2773f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2773f4:
    // 0x2773f4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x2773f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_2773f8:
    // 0x2773f8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2773f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2773fc:
    // 0x2773fc: 0xafa4034c  sw          $a0, 0x34C($sp)
    ctx->pc = 0x2773fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 4));
label_277400:
    // 0x277400: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_277404:
    if (ctx->pc == 0x277404u) {
        ctx->pc = 0x277404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277400u;
        // 0x277404: 0xe4840008  swc1        $f4, 0x8($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277408u;
        goto label_277408;
    }
    ctx->pc = 0x277400u;
    {
        const bool branch_taken_0x277400 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277400u;
        // 0x277404: 0xe4840008  swc1        $f4, 0x8($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277400) {
            ctx->pc = 0x277418u;
            goto label_277418;
        }
    }
    ctx->pc = 0x277408u;
label_277408:
    // 0x277408: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x277408u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_27740c:
    // 0x27740c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x27740cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_277410:
    // 0x277410: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x277410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_277414:
    // 0x277414: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x277414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_277418:
    // 0x277418: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x277418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_27741c:
    // 0x27741c: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x27741cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277420:
    // 0x277420: 0x8fa3034c  lw          $v1, 0x34C($sp)
    ctx->pc = 0x277420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_277424:
    // 0x277424: 0x45000029  bc1f        . + 4 + (0x29 << 2)
label_277428:
    if (ctx->pc == 0x277428u) {
        ctx->pc = 0x277428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277424u;
        // 0x277428: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27742Cu;
        goto label_27742c;
    }
    ctx->pc = 0x277424u;
    {
        const bool branch_taken_0x277424 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277424u;
        // 0x277428: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277424) {
            ctx->pc = 0x2774CCu;
            goto label_2774cc;
        }
    }
    ctx->pc = 0x27742Cu;
label_27742c:
    // 0x27742c: 0x10000023  b           . + 4 + (0x23 << 2)
label_277430:
    if (ctx->pc == 0x277430u) {
        ctx->pc = 0x277430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27742Cu;
        // 0x277430: 0x46050801  sub.s       $f0, $f1, $f5 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277434u;
        goto label_277434;
    }
    ctx->pc = 0x27742Cu;
    {
        const bool branch_taken_0x27742c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27742Cu;
        // 0x277430: 0x46050801  sub.s       $f0, $f1, $f5 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27742c) {
            ctx->pc = 0x2774BCu;
            goto label_2774bc;
        }
    }
    ctx->pc = 0x277434u;
label_277434:
    // 0x277434: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x277434u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277438:
    // 0x277438: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_27743c:
    if (ctx->pc == 0x27743Cu) {
        ctx->pc = 0x277440u;
        goto label_277440;
    }
    ctx->pc = 0x277438u;
    {
        const bool branch_taken_0x277438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277438) {
            ctx->pc = 0x27744Cu;
            goto label_27744c;
        }
    }
    ctx->pc = 0x277440u;
label_277440:
    // 0x277440: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x277440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_277444:
    // 0x277444: 0x10000021  b           . + 4 + (0x21 << 2)
label_277448:
    if (ctx->pc == 0x277448u) {
        ctx->pc = 0x277448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277444u;
        // 0x277448: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27744Cu;
        goto label_27744c;
    }
    ctx->pc = 0x277444u;
    {
        const bool branch_taken_0x277444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277444u;
        // 0x277448: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277444) {
            ctx->pc = 0x2774CCu;
            goto label_2774cc;
        }
    }
    ctx->pc = 0x27744Cu;
label_27744c:
    // 0x27744c: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x27744cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277450:
    // 0x277450: 0x0  nop
    ctx->pc = 0x277450u;
    // NOP
label_277454:
    // 0x277454: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_277458:
    if (ctx->pc == 0x277458u) {
        ctx->pc = 0x277458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277454u;
        // 0x277458: 0x24a4000c  addiu       $a0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27745Cu;
        goto label_27745c;
    }
    ctx->pc = 0x277454u;
    {
        const bool branch_taken_0x277454 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277454u;
        // 0x277458: 0x24a4000c  addiu       $a0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277454) {
            ctx->pc = 0x277468u;
            goto label_277468;
        }
    }
    ctx->pc = 0x27745Cu;
label_27745c:
    // 0x27745c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x27745cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_277460:
    // 0x277460: 0x1000001a  b           . + 4 + (0x1A << 2)
label_277464:
    if (ctx->pc == 0x277464u) {
        ctx->pc = 0x277464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277460u;
        // 0x277464: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277468u;
        goto label_277468;
    }
    ctx->pc = 0x277460u;
    {
        const bool branch_taken_0x277460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277460u;
        // 0x277464: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277460) {
            ctx->pc = 0x2774CCu;
            goto label_2774cc;
        }
    }
    ctx->pc = 0x277468u;
label_277468:
    // 0x277468: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x277468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_27746c:
    // 0x27746c: 0xc480fff8  lwc1        $f0, -0x8($a0)
    ctx->pc = 0x27746cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277470:
    // 0x277470: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x277470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_277474:
    // 0x277474: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x277474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_277478:
    // 0x277478: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x277478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27747c:
    // 0x27747c: 0xc484fffc  lwc1        $f4, -0x4($a0)
    ctx->pc = 0x27747cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_277480:
    // 0x277480: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x277480u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_277484:
    // 0x277484: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x277484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_277488:
    // 0x277488: 0xafa4034c  sw          $a0, 0x34C($sp)
    ctx->pc = 0x277488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 4));
label_27748c:
    // 0x27748c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_277490:
    if (ctx->pc == 0x277490u) {
        ctx->pc = 0x277490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27748Cu;
        // 0x277490: 0xe4840008  swc1        $f4, 0x8($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277494u;
        goto label_277494;
    }
    ctx->pc = 0x27748Cu;
    {
        const bool branch_taken_0x27748c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27748Cu;
        // 0x277490: 0xe4840008  swc1        $f4, 0x8($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27748c) {
            ctx->pc = 0x2774A4u;
            goto label_2774a4;
        }
    }
    ctx->pc = 0x277494u;
label_277494:
    // 0x277494: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x277494u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_277498:
    // 0x277498: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x277498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_27749c:
    // 0x27749c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x27749cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_2774a0:
    // 0x2774a0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2774a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2774a4:
    // 0x2774a4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2774a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2774a8:
    // 0x2774a8: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x2774a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2774ac:
    // 0x2774ac: 0x8fa3034c  lw          $v1, 0x34C($sp)
    ctx->pc = 0x2774acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_2774b0:
    // 0x2774b0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2774b4:
    if (ctx->pc == 0x2774B4u) {
        ctx->pc = 0x2774B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2774B0u;
        // 0x2774b4: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2774B8u;
        goto label_2774b8;
    }
    ctx->pc = 0x2774B0u;
    {
        const bool branch_taken_0x2774b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2774B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2774B0u;
        // 0x2774b4: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2774b0) {
            ctx->pc = 0x2774CCu;
            goto label_2774cc;
        }
    }
    ctx->pc = 0x2774B8u;
label_2774b8:
    // 0x2774b8: 0x46051001  sub.s       $f0, $f2, $f5
    ctx->pc = 0x2774b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_2774bc:
    // 0x2774bc: 0xc461fff8  lwc1        $f1, -0x8($v1)
    ctx->pc = 0x2774bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2774c0:
    // 0x2774c0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2774c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_2774c4:
    // 0x2774c4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2774c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2774c8:
    // 0x2774c8: 0xe461fff8  swc1        $f1, -0x8($v1)
    ctx->pc = 0x2774c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
label_2774cc:
    // 0x2774cc: 0x8fa2034c  lw          $v0, 0x34C($sp)
    ctx->pc = 0x2774ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_2774d0:
    // 0x2774d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2774d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2774d4:
    // 0x2774d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2774d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2774d8:
    // 0x2774d8: 0x481ffa3  bgez        $a0, . + 4 + (-0x5D << 2)
label_2774dc:
    if (ctx->pc == 0x2774DCu) {
        ctx->pc = 0x2774DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2774D8u;
        // 0x2774dc: 0x8fa5034c  lw          $a1, 0x34C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2774E0u;
        goto label_2774e0;
    }
    ctx->pc = 0x2774D8u;
    {
        const bool branch_taken_0x2774d8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2774DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2774D8u;
        // 0x2774dc: 0x8fa5034c  lw          $a1, 0x34C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2774d8) {
            ctx->pc = 0x277368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277368;
        }
    }
    ctx->pc = 0x2774E0u;
label_2774e0:
    // 0x2774e0: 0x8fa2034c  lw          $v0, 0x34C($sp)
    ctx->pc = 0x2774e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_2774e4:
    // 0x2774e4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2774e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2774e8:
    // 0x2774e8: 0x26430038  addiu       $v1, $s2, 0x38
    ctx->pc = 0x2774e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
label_2774ec:
    // 0x2774ec: 0xafa30354  sw          $v1, 0x354($sp)
    ctx->pc = 0x2774ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 852), GPR_U32(ctx, 3));
label_2774f0:
    // 0x2774f0: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x2774f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2774f4:
    // 0x2774f4: 0x10430060  beq         $v0, $v1, . + 4 + (0x60 << 2)
label_2774f8:
    if (ctx->pc == 0x2774F8u) {
        ctx->pc = 0x2774F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2774F4u;
        // 0x2774f8: 0xafa20350  sw          $v0, 0x350($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2774FCu;
        goto label_2774fc;
    }
    ctx->pc = 0x2774F4u;
    {
        const bool branch_taken_0x2774f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2774F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2774F4u;
        // 0x2774f8: 0xafa20350  sw          $v0, 0x350($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2774f4) {
            ctx->pc = 0x277678u;
            goto label_277678;
        }
    }
    ctx->pc = 0x2774FCu;
label_2774fc:
    // 0x2774fc: 0x8fa30350  lw          $v1, 0x350($sp)
    ctx->pc = 0x2774fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_277500:
    // 0x277500: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x277500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_277504:
    // 0x277504: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x277504u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_277508:
    // 0x277508: 0x12000057  beqz        $s0, . + 4 + (0x57 << 2)
label_27750c:
    if (ctx->pc == 0x27750Cu) {
        ctx->pc = 0x27750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277508u;
        // 0x27750c: 0xafa20350  sw          $v0, 0x350($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277510u;
        goto label_277510;
    }
    ctx->pc = 0x277508u;
    {
        const bool branch_taken_0x277508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277508u;
        // 0x27750c: 0xafa20350  sw          $v0, 0x350($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277508) {
            ctx->pc = 0x277668u;
            goto label_277668;
        }
    }
    ctx->pc = 0x277510u;
label_277510:
    // 0x277510: 0x8f8287d0  lw          $v0, -0x7830($gp)
    ctx->pc = 0x277510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_277514:
    // 0x277514: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x277514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_277518:
    // 0x277518: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x277518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27751c:
    // 0x27751c: 0x10730053  beq         $v1, $s3, . + 4 + (0x53 << 2)
label_277520:
    if (ctx->pc == 0x277520u) {
        ctx->pc = 0x277520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27751Cu;
        // 0x277520: 0x8fa30350  lw          $v1, 0x350($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277524u;
        goto label_277524;
    }
    ctx->pc = 0x27751Cu;
    {
        const bool branch_taken_0x27751c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x277520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27751Cu;
        // 0x277520: 0x8fa30350  lw          $v1, 0x350($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27751c) {
            ctx->pc = 0x27766Cu;
            goto label_27766c;
        }
    }
    ctx->pc = 0x277524u;
label_277524:
    // 0x277524: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x277524u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_277528:
    // 0x277528: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x277528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_27752c:
    // 0x27752c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_277530:
    if (ctx->pc == 0x277530u) {
        ctx->pc = 0x277530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27752Cu;
        // 0x277530: 0x8fa20354  lw          $v0, 0x354($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 852)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277534u;
        goto label_277534;
    }
    ctx->pc = 0x27752Cu;
    {
        const bool branch_taken_0x27752c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27752Cu;
        // 0x277530: 0x8fa20354  lw          $v0, 0x354($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27752c) {
            ctx->pc = 0x277670u;
            goto label_277670;
        }
    }
    ctx->pc = 0x277534u;
label_277534:
    // 0x277534: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x277534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_277538:
    // 0x277538: 0xc09533c  jal         func_254CF0
label_27753c:
    if (ctx->pc == 0x27753Cu) {
        ctx->pc = 0x27753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277538u;
        // 0x27753c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277540u;
        goto label_277540;
    }
    ctx->pc = 0x277538u;
    SET_GPR_U32(ctx, 31, 0x277540u);
    ctx->pc = 0x27753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277538u;
    // 0x27753c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254CF0u, 0x277538u, 0x277540u)) {
        return;
    }
    ctx->pc = 0x277540u;
label_277540:
    // 0x277540: 0xc4490000  lwc1        $f9, 0x0($v0)
    ctx->pc = 0x277540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_277544:
    // 0x277544: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x277544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277548:
    // 0x277548: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x277548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27754c:
    // 0x27754c: 0x46004a41  sub.s       $f9, $f9, $f0
    ctx->pc = 0x27754cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
label_277550:
    // 0x277550: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x277550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_277554:
    // 0x277554: 0xe7a90360  swc1        $f9, 0x360($sp)
    ctx->pc = 0x277554u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 864), bits); }
label_277558:
    // 0x277558: 0xc4460004  lwc1        $f6, 0x4($v0)
    ctx->pc = 0x277558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_27755c:
    // 0x27755c: 0x46013181  sub.s       $f6, $f6, $f1
    ctx->pc = 0x27755cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
label_277560:
    // 0x277560: 0xe7a60364  swc1        $f6, 0x364($sp)
    ctx->pc = 0x277560u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 868), bits); }
label_277564:
    // 0x277564: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x277564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277568:
    // 0x277568: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x277568u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_27756c:
    // 0x27756c: 0xe7a50368  swc1        $f5, 0x368($sp)
    ctx->pc = 0x27756cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 872), bits); }
label_277570:
    // 0x277570: 0xc7a70000  lwc1        $f7, 0x0($sp)
    ctx->pc = 0x277570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_277574:
    // 0x277574: 0xc7a80004  lwc1        $f8, 0x4($sp)
    ctx->pc = 0x277574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_277578:
    // 0x277578: 0x46074802  mul.s       $f0, $f9, $f7
    ctx->pc = 0x277578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
label_27757c:
    // 0x27757c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x27757cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_277580:
    // 0x277580: 0x46083042  mul.s       $f1, $f6, $f8
    ctx->pc = 0x277580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
label_277584:
    // 0x277584: 0x46042882  mul.s       $f2, $f5, $f4
    ctx->pc = 0x277584u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_277588:
    // 0x277588: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x277588u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27758c:
    // 0x27758c: 0x46020280  add.s       $f10, $f0, $f2
    ctx->pc = 0x27758cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_277590:
    // 0x277590: 0x46144842  mul.s       $f1, $f9, $f20
    ctx->pc = 0x277590u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[20]);
label_277594:
    // 0x277594: 0x46143082  mul.s       $f2, $f6, $f20
    ctx->pc = 0x277594u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
label_277598:
    // 0x277598: 0x461428c2  mul.s       $f3, $f5, $f20
    ctx->pc = 0x277598u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
label_27759c:
    // 0x27759c: 0x46005007  neg.s       $f0, $f10
    ctx->pc = 0x27759cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[10]);
label_2775a0:
    // 0x2775a0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2775a0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2775a4:
    // 0x2775a4: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x2775a4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_2775a8:
    // 0x2775a8: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x2775a8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_2775ac:
    // 0x2775ac: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2775acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_2775b0:
    // 0x2775b0: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x2775b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_2775b4:
    // 0x2775b4: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x2775b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
label_2775b8:
    // 0x2775b8: 0xe7a30378  swc1        $f3, 0x378($sp)
    ctx->pc = 0x2775b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 888), bits); }
label_2775bc:
    // 0x2775bc: 0xe7a10370  swc1        $f1, 0x370($sp)
    ctx->pc = 0x2775bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 880), bits); }
label_2775c0:
    // 0x2775c0: 0xe7a20374  swc1        $f2, 0x374($sp)
    ctx->pc = 0x2775c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 884), bits); }
label_2775c4:
    // 0x2775c4: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x2775c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
label_2775c8:
    // 0x2775c8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2775c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2775cc:
    // 0x2775cc: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2775ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_2775d0:
    // 0x2775d0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2775d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2775d4:
    // 0x2775d4: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2775d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_2775d8:
    // 0x2775d8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2775d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2775dc:
    // 0x2775dc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2775dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2775e0:
    // 0x2775e0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2775e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2775e4:
    // 0x2775e4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2775e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_2775e8:
    // 0x2775e8: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2775e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2775ec:
    // 0x2775ec: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x2775ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2775f0:
    // 0x2775f0: 0x0  nop
    ctx->pc = 0x2775f0u;
    // NOP
label_2775f4:
    // 0x2775f4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_2775f8:
    if (ctx->pc == 0x2775F8u) {
        ctx->pc = 0x2775F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775F4u;
        // 0x2775f8: 0x46005306  mov.s       $f12, $f10 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2775FCu;
        goto label_2775fc;
    }
    ctx->pc = 0x2775F4u;
    {
        const bool branch_taken_0x2775f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2775F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775F4u;
        // 0x2775f8: 0x46005306  mov.s       $f12, $f10 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2775f4) {
            ctx->pc = 0x277640u;
            goto label_277640;
        }
    }
    ctx->pc = 0x2775FCu;
label_2775fc:
    // 0x2775fc: 0x46045034  c.lt.s      $f10, $f4
    ctx->pc = 0x2775fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277600:
    // 0x277600: 0x0  nop
    ctx->pc = 0x277600u;
    // NOP
label_277604:
    // 0x277604: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_277608:
    if (ctx->pc == 0x277608u) {
        ctx->pc = 0x277608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277604u;
        // 0x277608: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27760Cu;
        goto label_27760c;
    }
    ctx->pc = 0x277604u;
    {
        const bool branch_taken_0x277604 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277604u;
        // 0x277608: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277604) {
            ctx->pc = 0x277624u;
            goto label_277624;
        }
    }
    ctx->pc = 0x27760Cu;
label_27760c:
    // 0x27760c: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x27760cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
label_277610:
    // 0x277610: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x277610u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277614:
    // 0x277614: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_277618:
    if (ctx->pc == 0x277618u) {
        ctx->pc = 0x27761Cu;
        goto label_27761c;
    }
    ctx->pc = 0x277614u;
    {
        const bool branch_taken_0x277614 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x277614) {
            ctx->pc = 0x277644u;
            goto label_277644;
        }
    }
    ctx->pc = 0x27761Cu;
label_27761c:
    // 0x27761c: 0x10000009  b           . + 4 + (0x9 << 2)
label_277620:
    if (ctx->pc == 0x277620u) {
        ctx->pc = 0x277620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27761Cu;
        // 0x277620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277624u;
        goto label_277624;
    }
    ctx->pc = 0x27761Cu;
    {
        const bool branch_taken_0x27761c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27761Cu;
        // 0x277620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27761c) {
            ctx->pc = 0x277644u;
            goto label_277644;
        }
    }
    ctx->pc = 0x277624u;
label_277624:
    // 0x277624: 0x460aa034  c.lt.s      $f20, $f10
    ctx->pc = 0x277624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277628:
    // 0x277628: 0x0  nop
    ctx->pc = 0x277628u;
    // NOP
label_27762c:
    // 0x27762c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_277630:
    if (ctx->pc == 0x277630u) {
        ctx->pc = 0x277630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27762Cu;
        // 0x277630: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277634u;
        goto label_277634;
    }
    ctx->pc = 0x27762Cu;
    {
        const bool branch_taken_0x27762c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27762c) {
            ctx->pc = 0x277630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27762Cu;
            // 0x277630: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277644u;
            goto label_277644;
        }
    }
    ctx->pc = 0x277634u;
label_277634:
    // 0x277634: 0x46145001  sub.s       $f0, $f10, $f20
    ctx->pc = 0x277634u;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[20]);
label_277638:
    // 0x277638: 0x1000fff5  b           . + 4 + (-0xB << 2)
label_27763c:
    if (ctx->pc == 0x27763Cu) {
        ctx->pc = 0x27763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277638u;
        // 0x27763c: 0x46000002  mul.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277640u;
        goto label_277640;
    }
    ctx->pc = 0x277638u;
    {
        const bool branch_taken_0x277638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277638u;
        // 0x27763c: 0x46000002  mul.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277638) {
            ctx->pc = 0x277610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277610;
        }
    }
    ctx->pc = 0x277640u;
label_277640:
    // 0x277640: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x277640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_277644:
    // 0x277644: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_277648:
    if (ctx->pc == 0x277648u) {
        ctx->pc = 0x277648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277644u;
        // 0x277648: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27764Cu;
        goto label_27764c;
    }
    ctx->pc = 0x277644u;
    {
        const bool branch_taken_0x277644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277644u;
        // 0x277648: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277644) {
            ctx->pc = 0x277668u;
            goto label_277668;
        }
    }
    ctx->pc = 0x27764Cu;
label_27764c:
    // 0x27764c: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x27764cu;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[20]);
label_277650:
    // 0x277650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_277654:
    // 0x277654: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x277654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_277658:
    // 0x277658: 0x2a0f809  jalr        $s5
label_27765c:
    if (ctx->pc == 0x27765Cu) {
        ctx->pc = 0x27765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277658u;
        // 0x27765c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277660u;
        goto label_277660;
    }
    ctx->pc = 0x277658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x277660u);
        ctx->pc = 0x27765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277658u;
        // 0x27765c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277658u, 0x277660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277660u;
label_277660:
    // 0x277660: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_277664:
    if (ctx->pc == 0x277664u) {
        ctx->pc = 0x277664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277660u;
        // 0x277664: 0x7bb003f0  lq          $s0, 0x3F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277668u;
        goto label_277668;
    }
    ctx->pc = 0x277660u;
    {
        const bool branch_taken_0x277660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277660) {
            ctx->pc = 0x277664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277660u;
            // 0x277664: 0x7bb003f0  lq          $s0, 0x3F0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27768Cu;
            goto label_27768c;
        }
    }
    ctx->pc = 0x277668u;
label_277668:
    // 0x277668: 0x8fa30350  lw          $v1, 0x350($sp)
    ctx->pc = 0x277668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_27766c:
    // 0x27766c: 0x8fa20354  lw          $v0, 0x354($sp)
    ctx->pc = 0x27766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 852)));
label_277670:
    // 0x277670: 0x1462ffa3  bne         $v1, $v0, . + 4 + (-0x5D << 2)
label_277674:
    if (ctx->pc == 0x277674u) {
        ctx->pc = 0x277674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277670u;
        // 0x277674: 0x8fa30350  lw          $v1, 0x350($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277678u;
        goto label_277678;
    }
    ctx->pc = 0x277670u;
    {
        const bool branch_taken_0x277670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x277674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277670u;
        // 0x277674: 0x8fa30350  lw          $v1, 0x350($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277670) {
            ctx->pc = 0x277500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277500;
        }
    }
    ctx->pc = 0x277678u;
label_277678:
    // 0x277678: 0x8fa3034c  lw          $v1, 0x34C($sp)
    ctx->pc = 0x277678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_27767c:
    // 0x27767c: 0x2c3102b  sltu        $v0, $s6, $v1
    ctx->pc = 0x27767cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_277680:
    // 0x277680: 0x5440ff2d  bnel        $v0, $zero, . + 4 + (-0xD3 << 2)
label_277684:
    if (ctx->pc == 0x277684u) {
        ctx->pc = 0x277684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277680u;
        // 0x277684: 0x8c62fff4  lw          $v0, -0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277688u;
        goto label_277688;
    }
    ctx->pc = 0x277680u;
    {
        const bool branch_taken_0x277680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277680) {
            ctx->pc = 0x277684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277680u;
            // 0x277684: 0x8c62fff4  lw          $v0, -0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277338;
        }
    }
    ctx->pc = 0x277688u;
label_277688:
    // 0x277688: 0x7bb003f0  lq          $s0, 0x3F0($sp)
    ctx->pc = 0x277688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
label_27768c:
    // 0x27768c: 0x7bb103e0  lq          $s1, 0x3E0($sp)
    ctx->pc = 0x27768cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 992)));
label_277690:
    // 0x277690: 0x7bb203d0  lq          $s2, 0x3D0($sp)
    ctx->pc = 0x277690u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 976)));
label_277694:
    // 0x277694: 0x7bb303c0  lq          $s3, 0x3C0($sp)
    ctx->pc = 0x277694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 960)));
label_277698:
    // 0x277698: 0x7bb403b0  lq          $s4, 0x3B0($sp)
    ctx->pc = 0x277698u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 944)));
label_27769c:
    // 0x27769c: 0x7bb503a0  lq          $s5, 0x3A0($sp)
    ctx->pc = 0x27769cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 928)));
label_2776a0:
    // 0x2776a0: 0x7bb60390  lq          $s6, 0x390($sp)
    ctx->pc = 0x2776a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 912)));
label_2776a4:
    // 0x2776a4: 0xdfbf0380  ld          $ra, 0x380($sp)
    ctx->pc = 0x2776a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 896)));
label_2776a8:
    // 0x2776a8: 0xc7b40400  lwc1        $f20, 0x400($sp)
    ctx->pc = 0x2776a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2776ac:
    // 0x2776ac: 0x3e00008  jr          $ra
label_2776b0:
    if (ctx->pc == 0x2776B0u) {
        ctx->pc = 0x2776B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776ACu;
        // 0x2776b0: 0x27bd0410  addiu       $sp, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2776B4u;
        goto label_2776b4;
    }
    ctx->pc = 0x2776ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2776B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776ACu;
        // 0x2776b0: 0x27bd0410  addiu       $sp, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2776ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2776B4u;
label_2776b4:
    // 0x2776b4: 0x0  nop
    ctx->pc = 0x2776b4u;
    // NOP
    ctx->pc = 0x2776b8u;
}
