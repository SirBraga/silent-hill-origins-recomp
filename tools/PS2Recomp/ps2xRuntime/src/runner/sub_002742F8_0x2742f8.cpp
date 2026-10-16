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

// Function: sub_002742F8
// Address: 0x2742f8 - 0x274798
void sub_002742F8_0x2742f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002742F8_0x2742f8");
#endif

    switch (ctx->pc) {
        case 0x2742f8u: goto label_2742f8;
        case 0x2742fcu: goto label_2742fc;
        case 0x274300u: goto label_274300;
        case 0x274304u: goto label_274304;
        case 0x274308u: goto label_274308;
        case 0x27430cu: goto label_27430c;
        case 0x274310u: goto label_274310;
        case 0x274314u: goto label_274314;
        case 0x274318u: goto label_274318;
        case 0x27431cu: goto label_27431c;
        case 0x274320u: goto label_274320;
        case 0x274324u: goto label_274324;
        case 0x274328u: goto label_274328;
        case 0x27432cu: goto label_27432c;
        case 0x274330u: goto label_274330;
        case 0x274334u: goto label_274334;
        case 0x274338u: goto label_274338;
        case 0x27433cu: goto label_27433c;
        case 0x274340u: goto label_274340;
        case 0x274344u: goto label_274344;
        case 0x274348u: goto label_274348;
        case 0x27434cu: goto label_27434c;
        case 0x274350u: goto label_274350;
        case 0x274354u: goto label_274354;
        case 0x274358u: goto label_274358;
        case 0x27435cu: goto label_27435c;
        case 0x274360u: goto label_274360;
        case 0x274364u: goto label_274364;
        case 0x274368u: goto label_274368;
        case 0x27436cu: goto label_27436c;
        case 0x274370u: goto label_274370;
        case 0x274374u: goto label_274374;
        case 0x274378u: goto label_274378;
        case 0x27437cu: goto label_27437c;
        case 0x274380u: goto label_274380;
        case 0x274384u: goto label_274384;
        case 0x274388u: goto label_274388;
        case 0x27438cu: goto label_27438c;
        case 0x274390u: goto label_274390;
        case 0x274394u: goto label_274394;
        case 0x274398u: goto label_274398;
        case 0x27439cu: goto label_27439c;
        case 0x2743a0u: goto label_2743a0;
        case 0x2743a4u: goto label_2743a4;
        case 0x2743a8u: goto label_2743a8;
        case 0x2743acu: goto label_2743ac;
        case 0x2743b0u: goto label_2743b0;
        case 0x2743b4u: goto label_2743b4;
        case 0x2743b8u: goto label_2743b8;
        case 0x2743bcu: goto label_2743bc;
        case 0x2743c0u: goto label_2743c0;
        case 0x2743c4u: goto label_2743c4;
        case 0x2743c8u: goto label_2743c8;
        case 0x2743ccu: goto label_2743cc;
        case 0x2743d0u: goto label_2743d0;
        case 0x2743d4u: goto label_2743d4;
        case 0x2743d8u: goto label_2743d8;
        case 0x2743dcu: goto label_2743dc;
        case 0x2743e0u: goto label_2743e0;
        case 0x2743e4u: goto label_2743e4;
        case 0x2743e8u: goto label_2743e8;
        case 0x2743ecu: goto label_2743ec;
        case 0x2743f0u: goto label_2743f0;
        case 0x2743f4u: goto label_2743f4;
        case 0x2743f8u: goto label_2743f8;
        case 0x2743fcu: goto label_2743fc;
        case 0x274400u: goto label_274400;
        case 0x274404u: goto label_274404;
        case 0x274408u: goto label_274408;
        case 0x27440cu: goto label_27440c;
        case 0x274410u: goto label_274410;
        case 0x274414u: goto label_274414;
        case 0x274418u: goto label_274418;
        case 0x27441cu: goto label_27441c;
        case 0x274420u: goto label_274420;
        case 0x274424u: goto label_274424;
        case 0x274428u: goto label_274428;
        case 0x27442cu: goto label_27442c;
        case 0x274430u: goto label_274430;
        case 0x274434u: goto label_274434;
        case 0x274438u: goto label_274438;
        case 0x27443cu: goto label_27443c;
        case 0x274440u: goto label_274440;
        case 0x274444u: goto label_274444;
        case 0x274448u: goto label_274448;
        case 0x27444cu: goto label_27444c;
        case 0x274450u: goto label_274450;
        case 0x274454u: goto label_274454;
        case 0x274458u: goto label_274458;
        case 0x27445cu: goto label_27445c;
        case 0x274460u: goto label_274460;
        case 0x274464u: goto label_274464;
        case 0x274468u: goto label_274468;
        case 0x27446cu: goto label_27446c;
        case 0x274470u: goto label_274470;
        case 0x274474u: goto label_274474;
        case 0x274478u: goto label_274478;
        case 0x27447cu: goto label_27447c;
        case 0x274480u: goto label_274480;
        case 0x274484u: goto label_274484;
        case 0x274488u: goto label_274488;
        case 0x27448cu: goto label_27448c;
        case 0x274490u: goto label_274490;
        case 0x274494u: goto label_274494;
        case 0x274498u: goto label_274498;
        case 0x27449cu: goto label_27449c;
        case 0x2744a0u: goto label_2744a0;
        case 0x2744a4u: goto label_2744a4;
        case 0x2744a8u: goto label_2744a8;
        case 0x2744acu: goto label_2744ac;
        case 0x2744b0u: goto label_2744b0;
        case 0x2744b4u: goto label_2744b4;
        case 0x2744b8u: goto label_2744b8;
        case 0x2744bcu: goto label_2744bc;
        case 0x2744c0u: goto label_2744c0;
        case 0x2744c4u: goto label_2744c4;
        case 0x2744c8u: goto label_2744c8;
        case 0x2744ccu: goto label_2744cc;
        case 0x2744d0u: goto label_2744d0;
        case 0x2744d4u: goto label_2744d4;
        case 0x2744d8u: goto label_2744d8;
        case 0x2744dcu: goto label_2744dc;
        case 0x2744e0u: goto label_2744e0;
        case 0x2744e4u: goto label_2744e4;
        case 0x2744e8u: goto label_2744e8;
        case 0x2744ecu: goto label_2744ec;
        case 0x2744f0u: goto label_2744f0;
        case 0x2744f4u: goto label_2744f4;
        case 0x2744f8u: goto label_2744f8;
        case 0x2744fcu: goto label_2744fc;
        case 0x274500u: goto label_274500;
        case 0x274504u: goto label_274504;
        case 0x274508u: goto label_274508;
        case 0x27450cu: goto label_27450c;
        case 0x274510u: goto label_274510;
        case 0x274514u: goto label_274514;
        case 0x274518u: goto label_274518;
        case 0x27451cu: goto label_27451c;
        case 0x274520u: goto label_274520;
        case 0x274524u: goto label_274524;
        case 0x274528u: goto label_274528;
        case 0x27452cu: goto label_27452c;
        case 0x274530u: goto label_274530;
        case 0x274534u: goto label_274534;
        case 0x274538u: goto label_274538;
        case 0x27453cu: goto label_27453c;
        case 0x274540u: goto label_274540;
        case 0x274544u: goto label_274544;
        case 0x274548u: goto label_274548;
        case 0x27454cu: goto label_27454c;
        case 0x274550u: goto label_274550;
        case 0x274554u: goto label_274554;
        case 0x274558u: goto label_274558;
        case 0x27455cu: goto label_27455c;
        case 0x274560u: goto label_274560;
        case 0x274564u: goto label_274564;
        case 0x274568u: goto label_274568;
        case 0x27456cu: goto label_27456c;
        case 0x274570u: goto label_274570;
        case 0x274574u: goto label_274574;
        case 0x274578u: goto label_274578;
        case 0x27457cu: goto label_27457c;
        case 0x274580u: goto label_274580;
        case 0x274584u: goto label_274584;
        case 0x274588u: goto label_274588;
        case 0x27458cu: goto label_27458c;
        case 0x274590u: goto label_274590;
        case 0x274594u: goto label_274594;
        case 0x274598u: goto label_274598;
        case 0x27459cu: goto label_27459c;
        case 0x2745a0u: goto label_2745a0;
        case 0x2745a4u: goto label_2745a4;
        case 0x2745a8u: goto label_2745a8;
        case 0x2745acu: goto label_2745ac;
        case 0x2745b0u: goto label_2745b0;
        case 0x2745b4u: goto label_2745b4;
        case 0x2745b8u: goto label_2745b8;
        case 0x2745bcu: goto label_2745bc;
        case 0x2745c0u: goto label_2745c0;
        case 0x2745c4u: goto label_2745c4;
        case 0x2745c8u: goto label_2745c8;
        case 0x2745ccu: goto label_2745cc;
        case 0x2745d0u: goto label_2745d0;
        case 0x2745d4u: goto label_2745d4;
        case 0x2745d8u: goto label_2745d8;
        case 0x2745dcu: goto label_2745dc;
        case 0x2745e0u: goto label_2745e0;
        case 0x2745e4u: goto label_2745e4;
        case 0x2745e8u: goto label_2745e8;
        case 0x2745ecu: goto label_2745ec;
        case 0x2745f0u: goto label_2745f0;
        case 0x2745f4u: goto label_2745f4;
        case 0x2745f8u: goto label_2745f8;
        case 0x2745fcu: goto label_2745fc;
        case 0x274600u: goto label_274600;
        case 0x274604u: goto label_274604;
        case 0x274608u: goto label_274608;
        case 0x27460cu: goto label_27460c;
        case 0x274610u: goto label_274610;
        case 0x274614u: goto label_274614;
        case 0x274618u: goto label_274618;
        case 0x27461cu: goto label_27461c;
        case 0x274620u: goto label_274620;
        case 0x274624u: goto label_274624;
        case 0x274628u: goto label_274628;
        case 0x27462cu: goto label_27462c;
        case 0x274630u: goto label_274630;
        case 0x274634u: goto label_274634;
        case 0x274638u: goto label_274638;
        case 0x27463cu: goto label_27463c;
        case 0x274640u: goto label_274640;
        case 0x274644u: goto label_274644;
        case 0x274648u: goto label_274648;
        case 0x27464cu: goto label_27464c;
        case 0x274650u: goto label_274650;
        case 0x274654u: goto label_274654;
        case 0x274658u: goto label_274658;
        case 0x27465cu: goto label_27465c;
        case 0x274660u: goto label_274660;
        case 0x274664u: goto label_274664;
        case 0x274668u: goto label_274668;
        case 0x27466cu: goto label_27466c;
        case 0x274670u: goto label_274670;
        case 0x274674u: goto label_274674;
        case 0x274678u: goto label_274678;
        case 0x27467cu: goto label_27467c;
        case 0x274680u: goto label_274680;
        case 0x274684u: goto label_274684;
        case 0x274688u: goto label_274688;
        case 0x27468cu: goto label_27468c;
        case 0x274690u: goto label_274690;
        case 0x274694u: goto label_274694;
        case 0x274698u: goto label_274698;
        case 0x27469cu: goto label_27469c;
        case 0x2746a0u: goto label_2746a0;
        case 0x2746a4u: goto label_2746a4;
        case 0x2746a8u: goto label_2746a8;
        case 0x2746acu: goto label_2746ac;
        case 0x2746b0u: goto label_2746b0;
        case 0x2746b4u: goto label_2746b4;
        case 0x2746b8u: goto label_2746b8;
        case 0x2746bcu: goto label_2746bc;
        case 0x2746c0u: goto label_2746c0;
        case 0x2746c4u: goto label_2746c4;
        case 0x2746c8u: goto label_2746c8;
        case 0x2746ccu: goto label_2746cc;
        case 0x2746d0u: goto label_2746d0;
        case 0x2746d4u: goto label_2746d4;
        case 0x2746d8u: goto label_2746d8;
        case 0x2746dcu: goto label_2746dc;
        case 0x2746e0u: goto label_2746e0;
        case 0x2746e4u: goto label_2746e4;
        case 0x2746e8u: goto label_2746e8;
        case 0x2746ecu: goto label_2746ec;
        case 0x2746f0u: goto label_2746f0;
        case 0x2746f4u: goto label_2746f4;
        case 0x2746f8u: goto label_2746f8;
        case 0x2746fcu: goto label_2746fc;
        case 0x274700u: goto label_274700;
        case 0x274704u: goto label_274704;
        case 0x274708u: goto label_274708;
        case 0x27470cu: goto label_27470c;
        case 0x274710u: goto label_274710;
        case 0x274714u: goto label_274714;
        case 0x274718u: goto label_274718;
        case 0x27471cu: goto label_27471c;
        case 0x274720u: goto label_274720;
        case 0x274724u: goto label_274724;
        case 0x274728u: goto label_274728;
        case 0x27472cu: goto label_27472c;
        case 0x274730u: goto label_274730;
        case 0x274734u: goto label_274734;
        case 0x274738u: goto label_274738;
        case 0x27473cu: goto label_27473c;
        case 0x274740u: goto label_274740;
        case 0x274744u: goto label_274744;
        case 0x274748u: goto label_274748;
        case 0x27474cu: goto label_27474c;
        case 0x274750u: goto label_274750;
        case 0x274754u: goto label_274754;
        case 0x274758u: goto label_274758;
        case 0x27475cu: goto label_27475c;
        case 0x274760u: goto label_274760;
        case 0x274764u: goto label_274764;
        case 0x274768u: goto label_274768;
        case 0x27476cu: goto label_27476c;
        case 0x274770u: goto label_274770;
        case 0x274774u: goto label_274774;
        case 0x274778u: goto label_274778;
        case 0x27477cu: goto label_27477c;
        case 0x274780u: goto label_274780;
        case 0x274784u: goto label_274784;
        case 0x274788u: goto label_274788;
        case 0x27478cu: goto label_27478c;
        case 0x274790u: goto label_274790;
        case 0x274794u: goto label_274794;
        default: break;
    }

    ctx->pc = 0x2742f8u;

label_2742f8:
    // 0x2742f8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2742f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2742fc:
    // 0x2742fc: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2742fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_274300:
    // 0x274300: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x274300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_274304:
    // 0x274304: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x274304u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_274308:
    // 0x274308: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x274308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_27430c:
    // 0x27430c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x27430cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_274310:
    // 0x274310: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x274310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_274314:
    // 0x274314: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x274314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_274318:
    // 0x274318: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x274318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_27431c:
    // 0x27431c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x27431cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_274320:
    // 0x274320: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x274320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_274324:
    // 0x274324: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x274324u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_274328:
    // 0x274328: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x274328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_27432c:
    // 0x27432c: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x27432cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_274330:
    // 0x274330: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x274330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_274334:
    // 0x274334: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x274334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_274338:
    // 0x274338: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x274338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_27433c:
    // 0x27433c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27433cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_274340:
    // 0x274340: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x274340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_274344:
    // 0x274344: 0xc09cd86  jal         func_273618
label_274348:
    if (ctx->pc == 0x274348u) {
        ctx->pc = 0x274348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274344u;
        // 0x274348: 0xafab0034  sw          $t3, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27434Cu;
        goto label_27434c;
    }
    ctx->pc = 0x274344u;
    SET_GPR_U32(ctx, 31, 0x27434Cu);
    ctx->pc = 0x274348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274344u;
    // 0x274348: 0xafab0034  sw          $t3, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x273618u, 0x274344u, 0x27434Cu)) {
        return;
    }
    ctx->pc = 0x27434Cu;
label_27434c:
    // 0x27434c: 0x14400105  bnez        $v0, . + 4 + (0x105 << 2)
label_274350:
    if (ctx->pc == 0x274350u) {
        ctx->pc = 0x274350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27434Cu;
        // 0x274350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274354u;
        goto label_274354;
    }
    ctx->pc = 0x27434Cu;
    {
        const bool branch_taken_0x27434c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27434Cu;
        // 0x274350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27434c) {
            ctx->pc = 0x274764u;
            goto label_274764;
        }
    }
    ctx->pc = 0x274354u;
label_274354:
    // 0x274354: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x274354u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_274358:
    // 0x274358: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x274358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_27435c:
    // 0x27435c: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x27435cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_274360:
    // 0x274360: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x274360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_274364:
    // 0x274364: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x274364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_274368:
    // 0x274368: 0x40f809  jalr        $v0
label_27436c:
    if (ctx->pc == 0x27436Cu) {
        ctx->pc = 0x27436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274368u;
        // 0x27436c: 0x34a501be  ori         $a1, $a1, 0x1BE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)446);
        ctx->in_delay_slot = false;
        ctx->pc = 0x274370u;
        goto label_274370;
    }
    ctx->pc = 0x274368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x274370u);
        ctx->pc = 0x27436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274368u;
        // 0x27436c: 0x34a501be  ori         $a1, $a1, 0x1BE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)446);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274368u, 0x274370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274370u;
label_274370:
    // 0x274370: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
label_274374:
    // 0x274374: 0x3c050027  lui         $a1, 0x27
    ctx->pc = 0x274374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39 << 16));
label_274378:
    // 0x274378: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x274378u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27437c:
    // 0x27437c: 0x248449a8  addiu       $a0, $a0, 0x49A8
    ctx->pc = 0x27437cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18856));
label_274380:
    // 0x274380: 0x24a54998  addiu       $a1, $a1, 0x4998
    ctx->pc = 0x274380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18840));
label_274384:
    // 0x274384: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x274384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
label_274388:
    // 0x274388: 0x3c070027  lui         $a3, 0x27
    ctx->pc = 0x274388u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)39 << 16));
label_27438c:
    // 0x27438c: 0x3c080027  lui         $t0, 0x27
    ctx->pc = 0x27438cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)39 << 16));
label_274390:
    // 0x274390: 0x3c090027  lui         $t1, 0x27
    ctx->pc = 0x274390u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)39 << 16));
label_274394:
    // 0x274394: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x274394u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_274398:
    // 0x274398: 0x3c0b0027  lui         $t3, 0x27
    ctx->pc = 0x274398u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)39 << 16));
label_27439c:
    // 0x27439c: 0x3c0c0027  lui         $t4, 0x27
    ctx->pc = 0x27439cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)39 << 16));
label_2743a0:
    // 0x2743a0: 0x3c0d0027  lui         $t5, 0x27
    ctx->pc = 0x2743a0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)39 << 16));
label_2743a4:
    // 0x2743a4: 0x3c0e0027  lui         $t6, 0x27
    ctx->pc = 0x2743a4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)39 << 16));
label_2743a8:
    // 0x2743a8: 0x3c0f0027  lui         $t7, 0x27
    ctx->pc = 0x2743a8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)39 << 16));
label_2743ac:
    // 0x2743ac: 0x3c110027  lui         $s1, 0x27
    ctx->pc = 0x2743acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)39 << 16));
label_2743b0:
    // 0x2743b0: 0x24634798  addiu       $v1, $v1, 0x4798
    ctx->pc = 0x2743b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18328));
label_2743b4:
    // 0x2743b4: 0x24e73a90  addiu       $a3, $a3, 0x3A90
    ctx->pc = 0x2743b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14992));
label_2743b8:
    // 0x2743b8: 0x250847c0  addiu       $t0, $t0, 0x47C0
    ctx->pc = 0x2743b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 18368));
label_2743bc:
    // 0x2743bc: 0x25293c90  addiu       $t1, $t1, 0x3C90
    ctx->pc = 0x2743bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15504));
label_2743c0:
    // 0x2743c0: 0x254a4838  addiu       $t2, $t2, 0x4838
    ctx->pc = 0x2743c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 18488));
label_2743c4:
    // 0x2743c4: 0x256b4118  addiu       $t3, $t3, 0x4118
    ctx->pc = 0x2743c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16664));
label_2743c8:
    // 0x2743c8: 0x258c4848  addiu       $t4, $t4, 0x4848
    ctx->pc = 0x2743c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 18504));
label_2743cc:
    // 0x2743cc: 0x25ad48c8  addiu       $t5, $t5, 0x48C8
    ctx->pc = 0x2743ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 18632));
label_2743d0:
    // 0x2743d0: 0x25ce5020  addiu       $t6, $t6, 0x5020
    ctx->pc = 0x2743d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 20512));
label_2743d4:
    // 0x2743d4: 0x25ef4990  addiu       $t7, $t7, 0x4990
    ctx->pc = 0x2743d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18832));
label_2743d8:
    // 0x2743d8: 0x26314970  addiu       $s1, $s1, 0x4970
    ctx->pc = 0x2743d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18800));
label_2743dc:
    // 0x2743dc: 0xae640018  sw          $a0, 0x18($s3)
    ctx->pc = 0x2743dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 4));
label_2743e0:
    // 0x2743e0: 0xae65001c  sw          $a1, 0x1C($s3)
    ctx->pc = 0x2743e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 5));
label_2743e4:
    // 0x2743e4: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x2743e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
label_2743e8:
    // 0x2743e8: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x2743e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_2743ec:
    // 0x2743ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2743ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2743f0:
    // 0x2743f0: 0xae630014  sw          $v1, 0x14($s3)
    ctx->pc = 0x2743f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
label_2743f4:
    // 0x2743f4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2743f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2743f8:
    // 0x2743f8: 0xae670028  sw          $a3, 0x28($s3)
    ctx->pc = 0x2743f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 7));
label_2743fc:
    // 0x2743fc: 0x34c601be  ori         $a2, $a2, 0x1BE
    ctx->pc = 0x2743fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)446);
label_274400:
    // 0x274400: 0xae68002c  sw          $t0, 0x2C($s3)
    ctx->pc = 0x274400u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 8));
label_274404:
    // 0x274404: 0xae690030  sw          $t1, 0x30($s3)
    ctx->pc = 0x274404u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 9));
label_274408:
    // 0x274408: 0xae6a0034  sw          $t2, 0x34($s3)
    ctx->pc = 0x274408u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 10));
label_27440c:
    // 0x27440c: 0xae6b0038  sw          $t3, 0x38($s3)
    ctx->pc = 0x27440cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 11));
label_274410:
    // 0x274410: 0xae6c003c  sw          $t4, 0x3C($s3)
    ctx->pc = 0x274410u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 12));
label_274414:
    // 0x274414: 0xae6d0040  sw          $t5, 0x40($s3)
    ctx->pc = 0x274414u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 13));
label_274418:
    // 0x274418: 0xae6e0044  sw          $t6, 0x44($s3)
    ctx->pc = 0x274418u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 14));
label_27441c:
    // 0x27441c: 0xae6f0048  sw          $t7, 0x48($s3)
    ctx->pc = 0x27441cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 15));
label_274420:
    // 0x274420: 0x40f809  jalr        $v0
label_274424:
    if (ctx->pc == 0x274424u) {
        ctx->pc = 0x274424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274420u;
        // 0x274424: 0xae71004c  sw          $s1, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274428u;
        goto label_274428;
    }
    ctx->pc = 0x274420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x274428u);
        ctx->pc = 0x274424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274420u;
        // 0x274424: 0xae71004c  sw          $s1, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274420u, 0x274428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274428u;
label_274428:
    // 0x274428: 0x1a800041  blez        $s4, . + 4 + (0x41 << 2)
label_27442c:
    if (ctx->pc == 0x27442Cu) {
        ctx->pc = 0x27442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274428u;
        // 0x27442c: 0xae620058  sw          $v0, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274430u;
        goto label_274430;
    }
    ctx->pc = 0x274428u;
    {
        const bool branch_taken_0x274428 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x27442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274428u;
        // 0x27442c: 0xae620058  sw          $v0, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274428) {
            ctx->pc = 0x274530u;
            goto label_274530;
        }
    }
    ctx->pc = 0x274430u;
label_274430:
    // 0x274430: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x274430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_274434:
    // 0x274434: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x274434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_274438:
    // 0x274438: 0x141023  negu        $v0, $s4
    ctx->pc = 0x274438u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
label_27443c:
    // 0x27443c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x27443cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_274440:
    // 0x274440: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x274440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_274444:
    // 0x274444: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
label_274448:
    if (ctx->pc == 0x274448u) {
        ctx->pc = 0x274448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274444u;
        // 0x274448: 0x24a30068  addiu       $v1, $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27444Cu;
        goto label_27444c;
    }
    ctx->pc = 0x274444u;
    {
        const bool branch_taken_0x274444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x274448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274444u;
        // 0x274448: 0x24a30068  addiu       $v1, $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274444) {
            ctx->pc = 0x2744B8u;
            goto label_2744b8;
        }
    }
    ctx->pc = 0x27444Cu;
label_27444c:
    // 0x27444c: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x27444cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_274450:
    // 0x274450: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_274454:
    if (ctx->pc == 0x274454u) {
        ctx->pc = 0x274454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274450u;
        // 0x274454: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x274458u;
        goto label_274458;
    }
    ctx->pc = 0x274450u;
    {
        const bool branch_taken_0x274450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274450u;
        // 0x274454: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274450) {
            ctx->pc = 0x274498u;
            goto label_274498;
        }
    }
    ctx->pc = 0x274458u;
label_274458:
    // 0x274458: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_27445c:
    if (ctx->pc == 0x27445Cu) {
        ctx->pc = 0x27445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274458u;
        // 0x27445c: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274460u;
        goto label_274460;
    }
    ctx->pc = 0x274458u;
    {
        const bool branch_taken_0x274458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274458) {
            ctx->pc = 0x27445Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274458u;
            // 0x27445c: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274480u;
            goto label_274480;
        }
    }
    ctx->pc = 0x274460u;
label_274460:
    // 0x274460: 0xac72000c  sw          $s2, 0xC($v1)
    ctx->pc = 0x274460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 18));
label_274464:
    // 0x274464: 0x2687ffff  addiu       $a3, $s4, -0x1
    ctx->pc = 0x274464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_274468:
    // 0x274468: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x274468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_27446c:
    // 0x27446c: 0xac73ffe8  sw          $s3, -0x18($v1)
    ctx->pc = 0x27446cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967272), GPR_U32(ctx, 19));
label_274470:
    // 0x274470: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x274470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_274474:
    // 0x274474: 0xaca00068  sw          $zero, 0x68($a1)
    ctx->pc = 0x274474u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 0));
label_274478:
    // 0x274478: 0x24a300e8  addiu       $v1, $a1, 0xE8
    ctx->pc = 0x274478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 232));
label_27447c:
    // 0x27447c: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x27447cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_274480:
    // 0x274480: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x274480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_274484:
    // 0x274484: 0xac73ffe8  sw          $s3, -0x18($v1)
    ctx->pc = 0x274484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967272), GPR_U32(ctx, 19));
label_274488:
    // 0x274488: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x274488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_27448c:
    // 0x27448c: 0xac72000c  sw          $s2, 0xC($v1)
    ctx->pc = 0x27448cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 18));
label_274490:
    // 0x274490: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x274490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_274494:
    // 0x274494: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x274494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_274498:
    // 0x274498: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x274498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_27449c:
    // 0x27449c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x27449cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_2744a0:
    // 0x2744a0: 0xac73ffe8  sw          $s3, -0x18($v1)
    ctx->pc = 0x2744a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967272), GPR_U32(ctx, 19));
label_2744a4:
    // 0x2744a4: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x2744a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_2744a8:
    // 0x2744a8: 0xac72000c  sw          $s2, 0xC($v1)
    ctx->pc = 0x2744a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 18));
label_2744ac:
    // 0x2744ac: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2744acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2744b0:
    // 0x2744b0: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
label_2744b4:
    if (ctx->pc == 0x2744B4u) {
        ctx->pc = 0x2744B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2744B0u;
        // 0x2744b4: 0x24630080  addiu       $v1, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2744B8u;
        goto label_2744b8;
    }
    ctx->pc = 0x2744B0u;
    {
        const bool branch_taken_0x2744b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2744B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2744B0u;
        // 0x2744b4: 0x24630080  addiu       $v1, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2744b0) {
            ctx->pc = 0x274530u;
            goto label_274530;
        }
    }
    ctx->pc = 0x2744B8u;
label_2744b8:
    // 0x2744b8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2744b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2744bc:
    // 0x2744bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2744bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2744c0:
    // 0x2744c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2744c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2744c4:
    // 0x2744c4: 0x0  nop
    ctx->pc = 0x2744c4u;
    // NOP
label_2744c8:
    // 0x2744c8: 0xacb2000c  sw          $s2, 0xC($a1)
    ctx->pc = 0x2744c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 18));
label_2744cc:
    // 0x2744cc: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x2744ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_2744d0:
    // 0x2744d0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2744d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2744d4:
    // 0x2744d4: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2744d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_2744d8:
    // 0x2744d8: 0xacb2008c  sw          $s2, 0x8C($a1)
    ctx->pc = 0x2744d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 18));
label_2744dc:
    // 0x2744dc: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x2744dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_2744e0:
    // 0x2744e0: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x2744e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
label_2744e4:
    // 0x2744e4: 0xac860088  sw          $a2, 0x88($a0)
    ctx->pc = 0x2744e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 6));
label_2744e8:
    // 0x2744e8: 0xacb2010c  sw          $s2, 0x10C($a1)
    ctx->pc = 0x2744e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 268), GPR_U32(ctx, 18));
label_2744ec:
    // 0x2744ec: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x2744ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_2744f0:
    // 0x2744f0: 0xac860108  sw          $a2, 0x108($a0)
    ctx->pc = 0x2744f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 6));
label_2744f4:
    // 0x2744f4: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x2744f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
label_2744f8:
    // 0x2744f8: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x2744f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_2744fc:
    // 0x2744fc: 0xacb2018c  sw          $s2, 0x18C($a1)
    ctx->pc = 0x2744fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 396), GPR_U32(ctx, 18));
label_274500:
    // 0x274500: 0xac860188  sw          $a2, 0x188($a0)
    ctx->pc = 0x274500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 392), GPR_U32(ctx, 6));
label_274504:
    // 0x274504: 0x24a50200  addiu       $a1, $a1, 0x200
    ctx->pc = 0x274504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
label_274508:
    // 0x274508: 0xac73ffe8  sw          $s3, -0x18($v1)
    ctx->pc = 0x274508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967272), GPR_U32(ctx, 19));
label_27450c:
    // 0x27450c: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x27450cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_274510:
    // 0x274510: 0xac730068  sw          $s3, 0x68($v1)
    ctx->pc = 0x274510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 19));
label_274514:
    // 0x274514: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x274514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
label_274518:
    // 0x274518: 0xac7300e8  sw          $s3, 0xE8($v1)
    ctx->pc = 0x274518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 19));
label_27451c:
    // 0x27451c: 0xac730168  sw          $s3, 0x168($v1)
    ctx->pc = 0x27451cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 360), GPR_U32(ctx, 19));
label_274520:
    // 0x274520: 0xac400180  sw          $zero, 0x180($v0)
    ctx->pc = 0x274520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 0));
label_274524:
    // 0x274524: 0x24630200  addiu       $v1, $v1, 0x200
    ctx->pc = 0x274524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
label_274528:
    // 0x274528: 0x14e0ffe7  bnez        $a3, . + 4 + (-0x19 << 2)
label_27452c:
    if (ctx->pc == 0x27452Cu) {
        ctx->pc = 0x27452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274528u;
        // 0x27452c: 0x24420200  addiu       $v0, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274530u;
        goto label_274530;
    }
    ctx->pc = 0x274528u;
    {
        const bool branch_taken_0x274528 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x27452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274528u;
        // 0x27452c: 0x24420200  addiu       $v0, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274528) {
            ctx->pc = 0x2744C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2744c8;
        }
    }
    ctx->pc = 0x274530u;
label_274530:
    // 0x274530: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x274530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_274534:
    // 0x274534: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x274534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_274538:
    // 0x274538: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x274538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27453c:
    // 0x27453c: 0xc09d2ec  jal         func_274BB0
label_274540:
    if (ctx->pc == 0x274540u) {
        ctx->pc = 0x274540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27453Cu;
        // 0x274540: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274544u;
        goto label_274544;
    }
    ctx->pc = 0x27453Cu;
    SET_GPR_U32(ctx, 31, 0x274544u);
    ctx->pc = 0x274540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27453Cu;
    // 0x274540: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274BB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x274BB0u, 0x27453Cu, 0x274544u)) {
        return;
    }
    ctx->pc = 0x274544u;
label_274544:
    // 0x274544: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x274544u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_274548:
    // 0x274548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27454c:
    // 0x27454c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_274550:
    if (ctx->pc == 0x274550u) {
        ctx->pc = 0x274550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27454Cu;
        // 0x274550: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274554u;
        goto label_274554;
    }
    ctx->pc = 0x27454Cu;
    {
        const bool branch_taken_0x27454c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x274550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27454Cu;
        // 0x274550: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27454c) {
            ctx->pc = 0x274564u;
            goto label_274564;
        }
    }
    ctx->pc = 0x274554u;
label_274554:
    // 0x274554: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x274554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_274558:
    // 0x274558: 0x24500fc8  addiu       $s0, $v0, 0xFC8
    ctx->pc = 0x274558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_27455c:
    // 0x27455c: 0x1000007b  b           . + 4 + (0x7B << 2)
label_274560:
    if (ctx->pc == 0x274560u) {
        ctx->pc = 0x274560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27455Cu;
        // 0x274560: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274564u;
        goto label_274564;
    }
    ctx->pc = 0x27455Cu;
    {
        const bool branch_taken_0x27455c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27455Cu;
        // 0x274560: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27455c) {
            ctx->pc = 0x27474Cu;
            goto label_27474c;
        }
    }
    ctx->pc = 0x274564u;
label_274564:
    // 0x274564: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x274564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_274568:
    // 0x274568: 0x3c150070  lui         $s5, 0x70
    ctx->pc = 0x274568u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)112 << 16));
label_27456c:
    // 0x27456c: 0x3c160070  lui         $s6, 0x70
    ctx->pc = 0x27456cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)112 << 16));
label_274570:
    // 0x274570: 0x3c170070  lui         $s7, 0x70
    ctx->pc = 0x274570u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)112 << 16));
label_274574:
    // 0x274574: 0x8e720058  lw          $s2, 0x58($s3)
    ctx->pc = 0x274574u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_274578:
    // 0x274578: 0x1a80002a  blez        $s4, . + 4 + (0x2A << 2)
label_27457c:
    if (ctx->pc == 0x27457Cu) {
        ctx->pc = 0x27457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274578u;
        // 0x27457c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274580u;
        goto label_274580;
    }
    ctx->pc = 0x274578u;
    {
        const bool branch_taken_0x274578 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x27457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274578u;
        // 0x27457c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274578) {
            ctx->pc = 0x274624u;
            goto label_274624;
        }
    }
    ctx->pc = 0x274580u;
label_274580:
    // 0x274580: 0x141023  negu        $v0, $s4
    ctx->pc = 0x274580u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
label_274584:
    // 0x274584: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x274584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_274588:
    // 0x274588: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x274588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_27458c:
    // 0x27458c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_274590:
    if (ctx->pc == 0x274590u) {
        ctx->pc = 0x274590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27458Cu;
        // 0x274590: 0x26500060  addiu       $s0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274594u;
        goto label_274594;
    }
    ctx->pc = 0x27458Cu;
    {
        const bool branch_taken_0x27458c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x274590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27458Cu;
        // 0x274590: 0x26500060  addiu       $s0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27458c) {
            ctx->pc = 0x2745E8u;
            goto label_2745e8;
        }
    }
    ctx->pc = 0x274594u;
label_274594:
    // 0x274594: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x274594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_274598:
    // 0x274598: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_27459c:
    if (ctx->pc == 0x27459Cu) {
        ctx->pc = 0x27459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274598u;
        // 0x27459c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2745A0u;
        goto label_2745a0;
    }
    ctx->pc = 0x274598u;
    {
        const bool branch_taken_0x274598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274598u;
        // 0x27459c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274598) {
            ctx->pc = 0x2745CCu;
            goto label_2745cc;
        }
    }
    ctx->pc = 0x2745A0u;
label_2745a0:
    // 0x2745a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2745a4:
    if (ctx->pc == 0x2745A4u) {
        ctx->pc = 0x2745A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745A0u;
        // 0x2745a4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2745A8u;
        goto label_2745a8;
    }
    ctx->pc = 0x2745A0u;
    {
        const bool branch_taken_0x2745a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2745A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745A0u;
        // 0x2745a4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2745a0) {
            ctx->pc = 0x2745B8u;
            goto label_2745b8;
        }
    }
    ctx->pc = 0x2745A8u;
label_2745a8:
    // 0x2745a8: 0xc0c84c8  jal         func_321320
label_2745ac:
    if (ctx->pc == 0x2745ACu) {
        ctx->pc = 0x2745ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745A8u;
        // 0x2745ac: 0x265000e0  addiu       $s0, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2745B0u;
        goto label_2745b0;
    }
    ctx->pc = 0x2745A8u;
    SET_GPR_U32(ctx, 31, 0x2745B0u);
    ctx->pc = 0x2745ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2745A8u;
    // 0x2745ac: 0x265000e0  addiu       $s0, $s2, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x2745A8u, 0x2745B0u)) {
        return;
    }
    ctx->pc = 0x2745B0u;
label_2745b0:
    // 0x2745b0: 0x2691ffff  addiu       $s1, $s4, -0x1
    ctx->pc = 0x2745b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2745b4:
    // 0x2745b4: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x2745b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
label_2745b8:
    // 0x2745b8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2745b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2745bc:
    // 0x2745bc: 0xc0c84c8  jal         func_321320
label_2745c0:
    if (ctx->pc == 0x2745C0u) {
        ctx->pc = 0x2745C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745BCu;
        // 0x2745c0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2745C4u;
        goto label_2745c4;
    }
    ctx->pc = 0x2745BCu;
    SET_GPR_U32(ctx, 31, 0x2745C4u);
    ctx->pc = 0x2745C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2745BCu;
    // 0x2745c0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x2745BCu, 0x2745C4u)) {
        return;
    }
    ctx->pc = 0x2745C4u;
label_2745c4:
    // 0x2745c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2745c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2745c8:
    // 0x2745c8: 0x26100080  addiu       $s0, $s0, 0x80
    ctx->pc = 0x2745c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_2745cc:
    // 0x2745cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2745ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2745d0:
    // 0x2745d0: 0xc0c84c8  jal         func_321320
label_2745d4:
    if (ctx->pc == 0x2745D4u) {
        ctx->pc = 0x2745D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745D0u;
        // 0x2745d4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2745D8u;
        goto label_2745d8;
    }
    ctx->pc = 0x2745D0u;
    SET_GPR_U32(ctx, 31, 0x2745D8u);
    ctx->pc = 0x2745D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2745D0u;
    // 0x2745d4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x2745D0u, 0x2745D8u)) {
        return;
    }
    ctx->pc = 0x2745D8u;
label_2745d8:
    // 0x2745d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2745d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2745dc:
    // 0x2745dc: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_2745e0:
    if (ctx->pc == 0x2745E0u) {
        ctx->pc = 0x2745E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745DCu;
        // 0x2745e0: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2745E4u;
        goto label_2745e4;
    }
    ctx->pc = 0x2745DCu;
    {
        const bool branch_taken_0x2745dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2745E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745DCu;
        // 0x2745e0: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2745dc) {
            ctx->pc = 0x274624u;
            goto label_274624;
        }
    }
    ctx->pc = 0x2745E4u;
label_2745e4:
    // 0x2745e4: 0x0  nop
    ctx->pc = 0x2745e4u;
    // NOP
label_2745e8:
    // 0x2745e8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2745e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2745ec:
    // 0x2745ec: 0xc0c84c8  jal         func_321320
label_2745f0:
    if (ctx->pc == 0x2745F0u) {
        ctx->pc = 0x2745F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745ECu;
        // 0x2745f0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2745F4u;
        goto label_2745f4;
    }
    ctx->pc = 0x2745ECu;
    SET_GPR_U32(ctx, 31, 0x2745F4u);
    ctx->pc = 0x2745F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2745ECu;
    // 0x2745f0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x2745ECu, 0x2745F4u)) {
        return;
    }
    ctx->pc = 0x2745F4u;
label_2745f4:
    // 0x2745f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2745f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2745f8:
    // 0x2745f8: 0xc0c84c8  jal         func_321320
label_2745fc:
    if (ctx->pc == 0x2745FCu) {
        ctx->pc = 0x2745FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745F8u;
        // 0x2745fc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274600u;
        goto label_274600;
    }
    ctx->pc = 0x2745F8u;
    SET_GPR_U32(ctx, 31, 0x274600u);
    ctx->pc = 0x2745FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2745F8u;
    // 0x2745fc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x2745F8u, 0x274600u)) {
        return;
    }
    ctx->pc = 0x274600u;
label_274600:
    // 0x274600: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x274600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_274604:
    // 0x274604: 0xc0c84c8  jal         func_321320
label_274608:
    if (ctx->pc == 0x274608u) {
        ctx->pc = 0x274608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274604u;
        // 0x274608: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27460Cu;
        goto label_27460c;
    }
    ctx->pc = 0x274604u;
    SET_GPR_U32(ctx, 31, 0x27460Cu);
    ctx->pc = 0x274608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274604u;
    // 0x274608: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x274604u, 0x27460Cu)) {
        return;
    }
    ctx->pc = 0x27460Cu;
label_27460c:
    // 0x27460c: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x27460cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_274610:
    // 0x274610: 0xc0c84c8  jal         func_321320
label_274614:
    if (ctx->pc == 0x274614u) {
        ctx->pc = 0x274614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274610u;
        // 0x274614: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274618u;
        goto label_274618;
    }
    ctx->pc = 0x274610u;
    SET_GPR_U32(ctx, 31, 0x274618u);
    ctx->pc = 0x274614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274610u;
    // 0x274614: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x274610u, 0x274618u)) {
        return;
    }
    ctx->pc = 0x274618u;
label_274618:
    // 0x274618: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x274618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
label_27461c:
    // 0x27461c: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
label_274620:
    if (ctx->pc == 0x274620u) {
        ctx->pc = 0x274620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27461Cu;
        // 0x274620: 0x26100200  addiu       $s0, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274624u;
        goto label_274624;
    }
    ctx->pc = 0x27461Cu;
    {
        const bool branch_taken_0x27461c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x274620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27461Cu;
        // 0x274620: 0x26100200  addiu       $s0, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27461c) {
            ctx->pc = 0x2745E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2745e8;
        }
    }
    ctx->pc = 0x274624u;
label_274624:
    // 0x274624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274628:
    // 0x274628: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x274628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_27462c:
    // 0x27462c: 0xc0c84c8  jal         func_321320
label_274630:
    if (ctx->pc == 0x274630u) {
        ctx->pc = 0x274630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27462Cu;
        // 0x274630: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274634u;
        goto label_274634;
    }
    ctx->pc = 0x27462Cu;
    SET_GPR_U32(ctx, 31, 0x274634u);
    ctx->pc = 0x274630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27462Cu;
    // 0x274630: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x27462Cu, 0x274634u)) {
        return;
    }
    ctx->pc = 0x274634u;
label_274634:
    // 0x274634: 0xaf828f8c  sw          $v0, -0x7074($gp)
    ctx->pc = 0x274634u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938508), GPR_U32(ctx, 2));
label_274638:
    // 0x274638: 0xc0c9ba4  jal         func_326E90
label_27463c:
    if (ctx->pc == 0x27463Cu) {
        ctx->pc = 0x27463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274638u;
        // 0x27463c: 0xaf808f88  sw          $zero, -0x7078($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274640u;
        goto label_274640;
    }
    ctx->pc = 0x274638u;
    SET_GPR_U32(ctx, 31, 0x274640u);
    ctx->pc = 0x27463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274638u;
    // 0x27463c: 0xaf808f88  sw          $zero, -0x7078($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938504), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x274638u, 0x274640u)) {
        return;
    }
    ctx->pc = 0x274640u;
label_274640:
    // 0x274640: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
label_274644:
    if (ctx->pc == 0x274644u) {
        ctx->pc = 0x274644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274640u;
        // 0x274644: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274648u;
        goto label_274648;
    }
    ctx->pc = 0x274640u;
    {
        const bool branch_taken_0x274640 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x274644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274640u;
        // 0x274644: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274640) {
            ctx->pc = 0x274654u;
            goto label_274654;
        }
    }
    ctx->pc = 0x274648u;
label_274648:
    // 0x274648: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x274648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27464c:
    // 0x27464c: 0xc0c8fc0  jal         func_323F00
label_274650:
    if (ctx->pc == 0x274650u) {
        ctx->pc = 0x274650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27464Cu;
        // 0x274650: 0x24845400  addiu       $a0, $a0, 0x5400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274654u;
        goto label_274654;
    }
    ctx->pc = 0x27464Cu;
    SET_GPR_U32(ctx, 31, 0x274654u);
    ctx->pc = 0x274650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27464Cu;
    // 0x274650: 0x24845400  addiu       $a0, $a0, 0x5400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323F00u, 0x27464Cu, 0x274654u)) {
        return;
    }
    ctx->pc = 0x274654u;
label_274654:
    // 0x274654: 0x3c050027  lui         $a1, 0x27
    ctx->pc = 0x274654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39 << 16));
label_274658:
    // 0x274658: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x274658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27465c:
    // 0x27465c: 0x24a54a80  addiu       $a1, $a1, 0x4A80
    ctx->pc = 0x27465cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19072));
label_274660:
    // 0x274660: 0xc0c8fc6  jal         func_323F18
label_274664:
    if (ctx->pc == 0x274664u) {
        ctx->pc = 0x274664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274660u;
        // 0x274664: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274668u;
        goto label_274668;
    }
    ctx->pc = 0x274660u;
    SET_GPR_U32(ctx, 31, 0x274668u);
    ctx->pc = 0x274664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274660u;
    // 0x274664: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323F18u, 0x274660u, 0x274668u)) {
        return;
    }
    ctx->pc = 0x274668u;
label_274668:
    // 0x274668: 0x3c050027  lui         $a1, 0x27
    ctx->pc = 0x274668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39 << 16));
label_27466c:
    // 0x27466c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x27466cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_274670:
    // 0x274670: 0x24a54b58  addiu       $a1, $a1, 0x4B58
    ctx->pc = 0x274670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19288));
label_274674:
    // 0x274674: 0xc0c8fc6  jal         func_323F18
label_274678:
    if (ctx->pc == 0x274678u) {
        ctx->pc = 0x274678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274674u;
        // 0x274678: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27467Cu;
        goto label_27467c;
    }
    ctx->pc = 0x274674u;
    SET_GPR_U32(ctx, 31, 0x27467Cu);
    ctx->pc = 0x274678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274674u;
    // 0x274678: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323F18u, 0x274674u, 0x27467Cu)) {
        return;
    }
    ctx->pc = 0x27467Cu;
label_27467c:
    // 0x27467c: 0xc0c9bb8  jal         func_326EE0
label_274680:
    if (ctx->pc == 0x274680u) {
        ctx->pc = 0x274684u;
        goto label_274684;
    }
    ctx->pc = 0x27467Cu;
    SET_GPR_U32(ctx, 31, 0x274684u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x27467Cu, 0x274684u)) {
        return;
    }
    ctx->pc = 0x274684u;
label_274684:
    // 0x274684: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x274684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_274688:
    // 0x274688: 0x24705448  addiu       $s0, $v1, 0x5448
    ctx->pc = 0x274688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21576));
label_27468c:
    // 0x27468c: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x27468cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
label_274690:
    // 0x274690: 0x26a45448  addiu       $a0, $s5, 0x5448
    ctx->pc = 0x274690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 21576));
label_274694:
    // 0x274694: 0x34a55446  ori         $a1, $a1, 0x5446
    ctx->pc = 0x274694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21574);
label_274698:
    // 0x274698: 0xc0c9276  jal         func_3249D8
label_27469c:
    if (ctx->pc == 0x27469Cu) {
        ctx->pc = 0x27469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274698u;
        // 0x27469c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2746A0u;
        goto label_2746a0;
    }
    ctx->pc = 0x274698u;
    SET_GPR_U32(ctx, 31, 0x2746A0u);
    ctx->pc = 0x27469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274698u;
    // 0x27469c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3249D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3249D8u, 0x274698u, 0x2746A0u)) {
        return;
    }
    ctx->pc = 0x2746A0u;
label_2746a0:
    // 0x2746a0: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2746a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_2746a4:
    // 0x2746a4: 0x0  nop
    ctx->pc = 0x2746a4u;
    // NOP
label_2746a8:
    // 0x2746a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2746a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2746ac:
    // 0x2746ac: 0x0  nop
    ctx->pc = 0x2746acu;
    // NOP
label_2746b0:
    // 0x2746b0: 0x0  nop
    ctx->pc = 0x2746b0u;
    // NOP
label_2746b4:
    // 0x2746b4: 0x0  nop
    ctx->pc = 0x2746b4u;
    // NOP
label_2746b8:
    // 0x2746b8: 0x0  nop
    ctx->pc = 0x2746b8u;
    // NOP
label_2746bc:
    // 0x2746bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2746c0:
    if (ctx->pc == 0x2746C0u) {
        ctx->pc = 0x2746C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746BCu;
        // 0x2746c0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2746C4u;
        goto label_2746c4;
    }
    ctx->pc = 0x2746BCu;
    {
        const bool branch_taken_0x2746bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2746C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746BCu;
        // 0x2746c0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2746bc) {
            ctx->pc = 0x2746A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2746a8;
        }
    }
    ctx->pc = 0x2746C4u;
label_2746c4:
    // 0x2746c4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2746c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2746c8:
    // 0x2746c8: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
label_2746cc:
    if (ctx->pc == 0x2746CCu) {
        ctx->pc = 0x2746CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746C8u;
        // 0x2746cc: 0x3c050052  lui         $a1, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2746D0u;
        goto label_2746d0;
    }
    ctx->pc = 0x2746C8u;
    {
        const bool branch_taken_0x2746c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2746CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746C8u;
        // 0x2746cc: 0x3c050052  lui         $a1, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2746c8) {
            ctx->pc = 0x274690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274690;
        }
    }
    ctx->pc = 0x2746D0u;
label_2746d0:
    // 0x2746d0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2746d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2746d4:
    // 0x2746d4: 0x26d05480  addiu       $s0, $s6, 0x5480
    ctx->pc = 0x2746d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 21632));
label_2746d8:
    // 0x2746d8: 0xaed45480  sw          $s4, 0x5480($s6)
    ctx->pc = 0x2746d8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 21632), GPR_U32(ctx, 20));
label_2746dc:
    // 0x2746dc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2746dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2746e0:
    // 0x2746e0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2746e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2746e4:
    // 0x2746e4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2746e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2746e8:
    // 0x2746e8: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x2746e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_2746ec:
    // 0x2746ec: 0xae1e0010  sw          $fp, 0x10($s0)
    ctx->pc = 0x2746ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 30));
label_2746f0:
    // 0x2746f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2746f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2746f4:
    // 0x2746f4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2746f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2746f8:
    // 0x2746f8: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x2746f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_2746fc:
    // 0x2746fc: 0xaf828f90  sw          $v0, -0x7070($gp)
    ctx->pc = 0x2746fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938512), GPR_U32(ctx, 2));
label_274700:
    // 0x274700: 0xc0c8568  jal         func_3215A0
label_274704:
    if (ctx->pc == 0x274704u) {
        ctx->pc = 0x274704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274700u;
        // 0x274704: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274708u;
        goto label_274708;
    }
    ctx->pc = 0x274700u;
    SET_GPR_U32(ctx, 31, 0x274708u);
    ctx->pc = 0x274704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274700u;
    // 0x274704: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3215A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3215A0u, 0x274700u, 0x274708u)) {
        return;
    }
    ctx->pc = 0x274708u;
label_274708:
    // 0x274708: 0x26a45448  addiu       $a0, $s5, 0x5448
    ctx->pc = 0x274708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 21576));
label_27470c:
    // 0x27470c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27470cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_274710:
    // 0x274710: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x274710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_274714:
    // 0x274714: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x274714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274718:
    // 0x274718: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x274718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27471c:
    // 0x27471c: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x27471cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_274720:
    // 0x274720: 0x26e95580  addiu       $t1, $s7, 0x5580
    ctx->pc = 0x274720u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 23), 21888));
label_274724:
    // 0x274724: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x274724u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_274728:
    // 0x274728: 0xc0c92ee  jal         func_324BB8
label_27472c:
    if (ctx->pc == 0x27472Cu) {
        ctx->pc = 0x27472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274728u;
        // 0x27472c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274730u;
        goto label_274730;
    }
    ctx->pc = 0x274728u;
    SET_GPR_U32(ctx, 31, 0x274730u);
    ctx->pc = 0x27472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274728u;
    // 0x27472c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x274728u, 0x274730u)) {
        return;
    }
    ctx->pc = 0x274730u;
label_274730:
    // 0x274730: 0x8ee35580  lw          $v1, 0x5580($s7)
    ctx->pc = 0x274730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 21888)));
label_274734:
    // 0x274734: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_274738:
    if (ctx->pc == 0x274738u) {
        ctx->pc = 0x274738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274734u;
        // 0x274738: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27473Cu;
        goto label_27473c;
    }
    ctx->pc = 0x274734u;
    {
        const bool branch_taken_0x274734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x274738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274734u;
        // 0x274738: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274734) {
            ctx->pc = 0x274764u;
            goto label_274764;
        }
    }
    ctx->pc = 0x27473Cu;
label_27473c:
    // 0x27473c: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x27473cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_274740:
    // 0x274740: 0x24900fc8  addiu       $s0, $a0, 0xFC8
    ctx->pc = 0x274740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
label_274744:
    // 0x274744: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x274744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_274748:
    // 0x274748: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x274748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_27474c:
    // 0x27474c: 0x40f809  jalr        $v0
label_274750:
    if (ctx->pc == 0x274750u) {
        ctx->pc = 0x274754u;
        goto label_274754;
    }
    ctx->pc = 0x27474Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x274754u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27474Cu, 0x274754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274754u;
label_274754:
    // 0x274754: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x274754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_274758:
    // 0x274758: 0x60f809  jalr        $v1
label_27475c:
    if (ctx->pc == 0x27475Cu) {
        ctx->pc = 0x27475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274758u;
        // 0x27475c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274760u;
        goto label_274760;
    }
    ctx->pc = 0x274758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x274760u);
        ctx->pc = 0x27475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274758u;
        // 0x27475c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274758u, 0x274760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274760u;
label_274760:
    // 0x274760: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x274760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274764:
    // 0x274764: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x274764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_274768:
    // 0x274768: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x274768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_27476c:
    // 0x27476c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x27476cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_274770:
    // 0x274770: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x274770u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_274774:
    // 0x274774: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x274774u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_274778:
    // 0x274778: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x274778u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27477c:
    // 0x27477c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x27477cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_274780:
    // 0x274780: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x274780u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_274784:
    // 0x274784: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x274784u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_274788:
    // 0x274788: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x274788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27478c:
    // 0x27478c: 0x3e00008  jr          $ra
label_274790:
    if (ctx->pc == 0x274790u) {
        ctx->pc = 0x274790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27478Cu;
        // 0x274790: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274794u;
        goto label_274794;
    }
    ctx->pc = 0x27478Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27478Cu;
        // 0x274790: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27478Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274794u;
label_274794:
    // 0x274794: 0x0  nop
    ctx->pc = 0x274794u;
    // NOP
    ctx->pc = 0x274798u;
}
