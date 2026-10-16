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

// Function: sub_00166278
// Address: 0x166278 - 0x1666f8
void sub_00166278_0x166278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166278_0x166278");
#endif

    switch (ctx->pc) {
        case 0x166278u: goto label_166278;
        case 0x16627cu: goto label_16627c;
        case 0x166280u: goto label_166280;
        case 0x166284u: goto label_166284;
        case 0x166288u: goto label_166288;
        case 0x16628cu: goto label_16628c;
        case 0x166290u: goto label_166290;
        case 0x166294u: goto label_166294;
        case 0x166298u: goto label_166298;
        case 0x16629cu: goto label_16629c;
        case 0x1662a0u: goto label_1662a0;
        case 0x1662a4u: goto label_1662a4;
        case 0x1662a8u: goto label_1662a8;
        case 0x1662acu: goto label_1662ac;
        case 0x1662b0u: goto label_1662b0;
        case 0x1662b4u: goto label_1662b4;
        case 0x1662b8u: goto label_1662b8;
        case 0x1662bcu: goto label_1662bc;
        case 0x1662c0u: goto label_1662c0;
        case 0x1662c4u: goto label_1662c4;
        case 0x1662c8u: goto label_1662c8;
        case 0x1662ccu: goto label_1662cc;
        case 0x1662d0u: goto label_1662d0;
        case 0x1662d4u: goto label_1662d4;
        case 0x1662d8u: goto label_1662d8;
        case 0x1662dcu: goto label_1662dc;
        case 0x1662e0u: goto label_1662e0;
        case 0x1662e4u: goto label_1662e4;
        case 0x1662e8u: goto label_1662e8;
        case 0x1662ecu: goto label_1662ec;
        case 0x1662f0u: goto label_1662f0;
        case 0x1662f4u: goto label_1662f4;
        case 0x1662f8u: goto label_1662f8;
        case 0x1662fcu: goto label_1662fc;
        case 0x166300u: goto label_166300;
        case 0x166304u: goto label_166304;
        case 0x166308u: goto label_166308;
        case 0x16630cu: goto label_16630c;
        case 0x166310u: goto label_166310;
        case 0x166314u: goto label_166314;
        case 0x166318u: goto label_166318;
        case 0x16631cu: goto label_16631c;
        case 0x166320u: goto label_166320;
        case 0x166324u: goto label_166324;
        case 0x166328u: goto label_166328;
        case 0x16632cu: goto label_16632c;
        case 0x166330u: goto label_166330;
        case 0x166334u: goto label_166334;
        case 0x166338u: goto label_166338;
        case 0x16633cu: goto label_16633c;
        case 0x166340u: goto label_166340;
        case 0x166344u: goto label_166344;
        case 0x166348u: goto label_166348;
        case 0x16634cu: goto label_16634c;
        case 0x166350u: goto label_166350;
        case 0x166354u: goto label_166354;
        case 0x166358u: goto label_166358;
        case 0x16635cu: goto label_16635c;
        case 0x166360u: goto label_166360;
        case 0x166364u: goto label_166364;
        case 0x166368u: goto label_166368;
        case 0x16636cu: goto label_16636c;
        case 0x166370u: goto label_166370;
        case 0x166374u: goto label_166374;
        case 0x166378u: goto label_166378;
        case 0x16637cu: goto label_16637c;
        case 0x166380u: goto label_166380;
        case 0x166384u: goto label_166384;
        case 0x166388u: goto label_166388;
        case 0x16638cu: goto label_16638c;
        case 0x166390u: goto label_166390;
        case 0x166394u: goto label_166394;
        case 0x166398u: goto label_166398;
        case 0x16639cu: goto label_16639c;
        case 0x1663a0u: goto label_1663a0;
        case 0x1663a4u: goto label_1663a4;
        case 0x1663a8u: goto label_1663a8;
        case 0x1663acu: goto label_1663ac;
        case 0x1663b0u: goto label_1663b0;
        case 0x1663b4u: goto label_1663b4;
        case 0x1663b8u: goto label_1663b8;
        case 0x1663bcu: goto label_1663bc;
        case 0x1663c0u: goto label_1663c0;
        case 0x1663c4u: goto label_1663c4;
        case 0x1663c8u: goto label_1663c8;
        case 0x1663ccu: goto label_1663cc;
        case 0x1663d0u: goto label_1663d0;
        case 0x1663d4u: goto label_1663d4;
        case 0x1663d8u: goto label_1663d8;
        case 0x1663dcu: goto label_1663dc;
        case 0x1663e0u: goto label_1663e0;
        case 0x1663e4u: goto label_1663e4;
        case 0x1663e8u: goto label_1663e8;
        case 0x1663ecu: goto label_1663ec;
        case 0x1663f0u: goto label_1663f0;
        case 0x1663f4u: goto label_1663f4;
        case 0x1663f8u: goto label_1663f8;
        case 0x1663fcu: goto label_1663fc;
        case 0x166400u: goto label_166400;
        case 0x166404u: goto label_166404;
        case 0x166408u: goto label_166408;
        case 0x16640cu: goto label_16640c;
        case 0x166410u: goto label_166410;
        case 0x166414u: goto label_166414;
        case 0x166418u: goto label_166418;
        case 0x16641cu: goto label_16641c;
        case 0x166420u: goto label_166420;
        case 0x166424u: goto label_166424;
        case 0x166428u: goto label_166428;
        case 0x16642cu: goto label_16642c;
        case 0x166430u: goto label_166430;
        case 0x166434u: goto label_166434;
        case 0x166438u: goto label_166438;
        case 0x16643cu: goto label_16643c;
        case 0x166440u: goto label_166440;
        case 0x166444u: goto label_166444;
        case 0x166448u: goto label_166448;
        case 0x16644cu: goto label_16644c;
        case 0x166450u: goto label_166450;
        case 0x166454u: goto label_166454;
        case 0x166458u: goto label_166458;
        case 0x16645cu: goto label_16645c;
        case 0x166460u: goto label_166460;
        case 0x166464u: goto label_166464;
        case 0x166468u: goto label_166468;
        case 0x16646cu: goto label_16646c;
        case 0x166470u: goto label_166470;
        case 0x166474u: goto label_166474;
        case 0x166478u: goto label_166478;
        case 0x16647cu: goto label_16647c;
        case 0x166480u: goto label_166480;
        case 0x166484u: goto label_166484;
        case 0x166488u: goto label_166488;
        case 0x16648cu: goto label_16648c;
        case 0x166490u: goto label_166490;
        case 0x166494u: goto label_166494;
        case 0x166498u: goto label_166498;
        case 0x16649cu: goto label_16649c;
        case 0x1664a0u: goto label_1664a0;
        case 0x1664a4u: goto label_1664a4;
        case 0x1664a8u: goto label_1664a8;
        case 0x1664acu: goto label_1664ac;
        case 0x1664b0u: goto label_1664b0;
        case 0x1664b4u: goto label_1664b4;
        case 0x1664b8u: goto label_1664b8;
        case 0x1664bcu: goto label_1664bc;
        case 0x1664c0u: goto label_1664c0;
        case 0x1664c4u: goto label_1664c4;
        case 0x1664c8u: goto label_1664c8;
        case 0x1664ccu: goto label_1664cc;
        case 0x1664d0u: goto label_1664d0;
        case 0x1664d4u: goto label_1664d4;
        case 0x1664d8u: goto label_1664d8;
        case 0x1664dcu: goto label_1664dc;
        case 0x1664e0u: goto label_1664e0;
        case 0x1664e4u: goto label_1664e4;
        case 0x1664e8u: goto label_1664e8;
        case 0x1664ecu: goto label_1664ec;
        case 0x1664f0u: goto label_1664f0;
        case 0x1664f4u: goto label_1664f4;
        case 0x1664f8u: goto label_1664f8;
        case 0x1664fcu: goto label_1664fc;
        case 0x166500u: goto label_166500;
        case 0x166504u: goto label_166504;
        case 0x166508u: goto label_166508;
        case 0x16650cu: goto label_16650c;
        case 0x166510u: goto label_166510;
        case 0x166514u: goto label_166514;
        case 0x166518u: goto label_166518;
        case 0x16651cu: goto label_16651c;
        case 0x166520u: goto label_166520;
        case 0x166524u: goto label_166524;
        case 0x166528u: goto label_166528;
        case 0x16652cu: goto label_16652c;
        case 0x166530u: goto label_166530;
        case 0x166534u: goto label_166534;
        case 0x166538u: goto label_166538;
        case 0x16653cu: goto label_16653c;
        case 0x166540u: goto label_166540;
        case 0x166544u: goto label_166544;
        case 0x166548u: goto label_166548;
        case 0x16654cu: goto label_16654c;
        case 0x166550u: goto label_166550;
        case 0x166554u: goto label_166554;
        case 0x166558u: goto label_166558;
        case 0x16655cu: goto label_16655c;
        case 0x166560u: goto label_166560;
        case 0x166564u: goto label_166564;
        case 0x166568u: goto label_166568;
        case 0x16656cu: goto label_16656c;
        case 0x166570u: goto label_166570;
        case 0x166574u: goto label_166574;
        case 0x166578u: goto label_166578;
        case 0x16657cu: goto label_16657c;
        case 0x166580u: goto label_166580;
        case 0x166584u: goto label_166584;
        case 0x166588u: goto label_166588;
        case 0x16658cu: goto label_16658c;
        case 0x166590u: goto label_166590;
        case 0x166594u: goto label_166594;
        case 0x166598u: goto label_166598;
        case 0x16659cu: goto label_16659c;
        case 0x1665a0u: goto label_1665a0;
        case 0x1665a4u: goto label_1665a4;
        case 0x1665a8u: goto label_1665a8;
        case 0x1665acu: goto label_1665ac;
        case 0x1665b0u: goto label_1665b0;
        case 0x1665b4u: goto label_1665b4;
        case 0x1665b8u: goto label_1665b8;
        case 0x1665bcu: goto label_1665bc;
        case 0x1665c0u: goto label_1665c0;
        case 0x1665c4u: goto label_1665c4;
        case 0x1665c8u: goto label_1665c8;
        case 0x1665ccu: goto label_1665cc;
        case 0x1665d0u: goto label_1665d0;
        case 0x1665d4u: goto label_1665d4;
        case 0x1665d8u: goto label_1665d8;
        case 0x1665dcu: goto label_1665dc;
        case 0x1665e0u: goto label_1665e0;
        case 0x1665e4u: goto label_1665e4;
        case 0x1665e8u: goto label_1665e8;
        case 0x1665ecu: goto label_1665ec;
        case 0x1665f0u: goto label_1665f0;
        case 0x1665f4u: goto label_1665f4;
        case 0x1665f8u: goto label_1665f8;
        case 0x1665fcu: goto label_1665fc;
        case 0x166600u: goto label_166600;
        case 0x166604u: goto label_166604;
        case 0x166608u: goto label_166608;
        case 0x16660cu: goto label_16660c;
        case 0x166610u: goto label_166610;
        case 0x166614u: goto label_166614;
        case 0x166618u: goto label_166618;
        case 0x16661cu: goto label_16661c;
        case 0x166620u: goto label_166620;
        case 0x166624u: goto label_166624;
        case 0x166628u: goto label_166628;
        case 0x16662cu: goto label_16662c;
        case 0x166630u: goto label_166630;
        case 0x166634u: goto label_166634;
        case 0x166638u: goto label_166638;
        case 0x16663cu: goto label_16663c;
        case 0x166640u: goto label_166640;
        case 0x166644u: goto label_166644;
        case 0x166648u: goto label_166648;
        case 0x16664cu: goto label_16664c;
        case 0x166650u: goto label_166650;
        case 0x166654u: goto label_166654;
        case 0x166658u: goto label_166658;
        case 0x16665cu: goto label_16665c;
        case 0x166660u: goto label_166660;
        case 0x166664u: goto label_166664;
        case 0x166668u: goto label_166668;
        case 0x16666cu: goto label_16666c;
        case 0x166670u: goto label_166670;
        case 0x166674u: goto label_166674;
        case 0x166678u: goto label_166678;
        case 0x16667cu: goto label_16667c;
        case 0x166680u: goto label_166680;
        case 0x166684u: goto label_166684;
        case 0x166688u: goto label_166688;
        case 0x16668cu: goto label_16668c;
        case 0x166690u: goto label_166690;
        case 0x166694u: goto label_166694;
        case 0x166698u: goto label_166698;
        case 0x16669cu: goto label_16669c;
        case 0x1666a0u: goto label_1666a0;
        case 0x1666a4u: goto label_1666a4;
        case 0x1666a8u: goto label_1666a8;
        case 0x1666acu: goto label_1666ac;
        case 0x1666b0u: goto label_1666b0;
        case 0x1666b4u: goto label_1666b4;
        case 0x1666b8u: goto label_1666b8;
        case 0x1666bcu: goto label_1666bc;
        case 0x1666c0u: goto label_1666c0;
        case 0x1666c4u: goto label_1666c4;
        case 0x1666c8u: goto label_1666c8;
        case 0x1666ccu: goto label_1666cc;
        case 0x1666d0u: goto label_1666d0;
        case 0x1666d4u: goto label_1666d4;
        case 0x1666d8u: goto label_1666d8;
        case 0x1666dcu: goto label_1666dc;
        case 0x1666e0u: goto label_1666e0;
        case 0x1666e4u: goto label_1666e4;
        case 0x1666e8u: goto label_1666e8;
        case 0x1666ecu: goto label_1666ec;
        case 0x1666f0u: goto label_1666f0;
        case 0x1666f4u: goto label_1666f4;
        default: break;
    }

    ctx->pc = 0x166278u;

label_166278:
    // 0x166278: 0x27bdfa10  addiu       $sp, $sp, -0x5F0
    ctx->pc = 0x166278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965776));
label_16627c:
    // 0x16627c: 0x7fb60550  sq          $s6, 0x550($sp)
    ctx->pc = 0x16627cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 22));
label_166280:
    // 0x166280: 0x7fb005b0  sq          $s0, 0x5B0($sp)
    ctx->pc = 0x166280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1456), GPR_VEC(ctx, 16));
label_166284:
    // 0x166284: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x166284u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_166288:
    // 0x166288: 0x7fb105a0  sq          $s1, 0x5A0($sp)
    ctx->pc = 0x166288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1440), GPR_VEC(ctx, 17));
label_16628c:
    // 0x16628c: 0x7fb20590  sq          $s2, 0x590($sp)
    ctx->pc = 0x16628cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1424), GPR_VEC(ctx, 18));
label_166290:
    // 0x166290: 0x7fb30580  sq          $s3, 0x580($sp)
    ctx->pc = 0x166290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1408), GPR_VEC(ctx, 19));
label_166294:
    // 0x166294: 0x7fb40570  sq          $s4, 0x570($sp)
    ctx->pc = 0x166294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), GPR_VEC(ctx, 20));
label_166298:
    // 0x166298: 0x7fb50560  sq          $s5, 0x560($sp)
    ctx->pc = 0x166298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), GPR_VEC(ctx, 21));
label_16629c:
    // 0x16629c: 0x7fb70540  sq          $s7, 0x540($sp)
    ctx->pc = 0x16629cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 23));
label_1662a0:
    // 0x1662a0: 0x7fbe0530  sq          $fp, 0x530($sp)
    ctx->pc = 0x1662a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 30));
label_1662a4:
    // 0x1662a4: 0xffbf0520  sd          $ra, 0x520($sp)
    ctx->pc = 0x1662a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1312), GPR_U64(ctx, 31));
label_1662a8:
    // 0x1662a8: 0xe7b905e8  swc1        $f25, 0x5E8($sp)
    ctx->pc = 0x1662a8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1512), bits); }
label_1662ac:
    // 0x1662ac: 0xe7b805e0  swc1        $f24, 0x5E0($sp)
    ctx->pc = 0x1662acu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1504), bits); }
label_1662b0:
    // 0x1662b0: 0xe7b705d8  swc1        $f23, 0x5D8($sp)
    ctx->pc = 0x1662b0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1496), bits); }
label_1662b4:
    // 0x1662b4: 0xe7b605d0  swc1        $f22, 0x5D0($sp)
    ctx->pc = 0x1662b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1488), bits); }
label_1662b8:
    // 0x1662b8: 0xe7b505c8  swc1        $f21, 0x5C8($sp)
    ctx->pc = 0x1662b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1480), bits); }
label_1662bc:
    // 0x1662bc: 0xe7b405c0  swc1        $f20, 0x5C0($sp)
    ctx->pc = 0x1662bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1472), bits); }
label_1662c0:
    // 0x1662c0: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x1662c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_1662c4:
    // 0x1662c4: 0x104000fa  beqz        $v0, . + 4 + (0xFA << 2)
label_1662c8:
    if (ctx->pc == 0x1662C8u) {
        ctx->pc = 0x1662C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662C4u;
        // 0x1662c8: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1662CCu;
        goto label_1662cc;
    }
    ctx->pc = 0x1662C4u;
    {
        const bool branch_taken_0x1662c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1662C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662C4u;
        // 0x1662c8: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662c4) {
            ctx->pc = 0x1666B0u;
            goto label_1666b0;
        }
    }
    ctx->pc = 0x1662CCu;
label_1662cc:
    // 0x1662cc: 0x27a504f0  addiu       $a1, $sp, 0x4F0
    ctx->pc = 0x1662ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_1662d0:
    // 0x1662d0: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x1662d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1662d4:
    // 0x1662d4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1662d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1662d8:
    // 0x1662d8: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1662d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1662dc:
    // 0x1662dc: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1662dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1662e0:
    // 0x1662e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1662e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1662e4:
    // 0x1662e4: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1662e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_1662e8:
    // 0x1662e8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1662e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1662ec:
    // 0x1662ec: 0x40f809  jalr        $v0
label_1662f0:
    if (ctx->pc == 0x1662F0u) {
        ctx->pc = 0x1662F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662ECu;
        // 0x1662f0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1662F4u;
        goto label_1662f4;
    }
    ctx->pc = 0x1662ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1662F4u);
        ctx->pc = 0x1662F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662ECu;
        // 0x1662f0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1662ECu, 0x1662F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1662F4u;
label_1662f4:
    // 0x1662f4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1662f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1662f8:
    // 0x1662f8: 0x27a504f4  addiu       $a1, $sp, 0x4F4
    ctx->pc = 0x1662f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1268));
label_1662fc:
    // 0x1662fc: 0x40f809  jalr        $v0
label_166300:
    if (ctx->pc == 0x166300u) {
        ctx->pc = 0x166300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662FCu;
        // 0x166300: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166304u;
        goto label_166304;
    }
    ctx->pc = 0x1662FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166304u);
        ctx->pc = 0x166300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662FCu;
        // 0x166300: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1662FCu, 0x166304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166304u;
label_166304:
    // 0x166304: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x166304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_166308:
    // 0x166308: 0x27a504f8  addiu       $a1, $sp, 0x4F8
    ctx->pc = 0x166308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1272));
label_16630c:
    // 0x16630c: 0x40f809  jalr        $v0
label_166310:
    if (ctx->pc == 0x166310u) {
        ctx->pc = 0x166310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16630Cu;
        // 0x166310: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166314u;
        goto label_166314;
    }
    ctx->pc = 0x16630Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166314u);
        ctx->pc = 0x166310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16630Cu;
        // 0x166310: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16630Cu, 0x166314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166314u;
label_166314:
    // 0x166314: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x166314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_166318:
    // 0x166318: 0x27a504fc  addiu       $a1, $sp, 0x4FC
    ctx->pc = 0x166318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1276));
label_16631c:
    // 0x16631c: 0x40f809  jalr        $v0
label_166320:
    if (ctx->pc == 0x166320u) {
        ctx->pc = 0x166320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16631Cu;
        // 0x166320: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166324u;
        goto label_166324;
    }
    ctx->pc = 0x16631Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166324u);
        ctx->pc = 0x166320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16631Cu;
        // 0x166320: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16631Cu, 0x166324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166324u;
label_166324:
    // 0x166324: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x166324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_166328:
    // 0x166328: 0x27a50500  addiu       $a1, $sp, 0x500
    ctx->pc = 0x166328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_16632c:
    // 0x16632c: 0x40f809  jalr        $v0
label_166330:
    if (ctx->pc == 0x166330u) {
        ctx->pc = 0x166330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16632Cu;
        // 0x166330: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166334u;
        goto label_166334;
    }
    ctx->pc = 0x16632Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166334u);
        ctx->pc = 0x166330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16632Cu;
        // 0x166330: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16632Cu, 0x166334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166334u;
label_166334:
    // 0x166334: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x166334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_166338:
    // 0x166338: 0x27a50504  addiu       $a1, $sp, 0x504
    ctx->pc = 0x166338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1284));
label_16633c:
    // 0x16633c: 0x40f809  jalr        $v0
label_166340:
    if (ctx->pc == 0x166340u) {
        ctx->pc = 0x166340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16633Cu;
        // 0x166340: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166344u;
        goto label_166344;
    }
    ctx->pc = 0x16633Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166344u);
        ctx->pc = 0x166340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16633Cu;
        // 0x166340: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16633Cu, 0x166344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166344u;
label_166344:
    // 0x166344: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x166344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_166348:
    // 0x166348: 0x27a50508  addiu       $a1, $sp, 0x508
    ctx->pc = 0x166348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1288));
label_16634c:
    // 0x16634c: 0x40f809  jalr        $v0
label_166350:
    if (ctx->pc == 0x166350u) {
        ctx->pc = 0x166350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16634Cu;
        // 0x166350: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166354u;
        goto label_166354;
    }
    ctx->pc = 0x16634Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166354u);
        ctx->pc = 0x166350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16634Cu;
        // 0x166350: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16634Cu, 0x166354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166354u;
label_166354:
    // 0x166354: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x166354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_166358:
    // 0x166358: 0x27a5050c  addiu       $a1, $sp, 0x50C
    ctx->pc = 0x166358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1292));
label_16635c:
    // 0x16635c: 0x40f809  jalr        $v0
label_166360:
    if (ctx->pc == 0x166360u) {
        ctx->pc = 0x166360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16635Cu;
        // 0x166360: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166364u;
        goto label_166364;
    }
    ctx->pc = 0x16635Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166364u);
        ctx->pc = 0x166360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16635Cu;
        // 0x166360: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16635Cu, 0x166364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166364u;
label_166364:
    // 0x166364: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x166364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_166368:
    // 0x166368: 0x27a50510  addiu       $a1, $sp, 0x510
    ctx->pc = 0x166368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_16636c:
    // 0x16636c: 0x40f809  jalr        $v0
label_166370:
    if (ctx->pc == 0x166370u) {
        ctx->pc = 0x166370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16636Cu;
        // 0x166370: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166374u;
        goto label_166374;
    }
    ctx->pc = 0x16636Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166374u);
        ctx->pc = 0x166370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16636Cu;
        // 0x166370: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16636Cu, 0x166374u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166374u;
label_166374:
    // 0x166374: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x166374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_166378:
    // 0x166378: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x166378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_16637c:
    // 0x16637c: 0x40f809  jalr        $v0
label_166380:
    if (ctx->pc == 0x166380u) {
        ctx->pc = 0x166380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16637Cu;
        // 0x166380: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166384u;
        goto label_166384;
    }
    ctx->pc = 0x16637Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166384u);
        ctx->pc = 0x166380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16637Cu;
        // 0x166380: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16637Cu, 0x166384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166384u;
label_166384:
    // 0x166384: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x166384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_166388:
    // 0x166388: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x166388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_16638c:
    // 0x16638c: 0x40f809  jalr        $v0
label_166390:
    if (ctx->pc == 0x166390u) {
        ctx->pc = 0x166390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16638Cu;
        // 0x166390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166394u;
        goto label_166394;
    }
    ctx->pc = 0x16638Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166394u);
        ctx->pc = 0x166390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16638Cu;
        // 0x166390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16638Cu, 0x166394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166394u;
label_166394:
    // 0x166394: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x166394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_166398:
    // 0x166398: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x166398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_16639c:
    // 0x16639c: 0x40f809  jalr        $v0
label_1663a0:
    if (ctx->pc == 0x1663A0u) {
        ctx->pc = 0x1663A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16639Cu;
        // 0x1663a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1663A4u;
        goto label_1663a4;
    }
    ctx->pc = 0x16639Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1663A4u);
        ctx->pc = 0x1663A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16639Cu;
        // 0x1663a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16639Cu, 0x1663A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1663A4u;
label_1663a4:
    // 0x1663a4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1663a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1663a8:
    // 0x1663a8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1663a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1663ac:
    // 0x1663ac: 0x40f809  jalr        $v0
label_1663b0:
    if (ctx->pc == 0x1663B0u) {
        ctx->pc = 0x1663B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663ACu;
        // 0x1663b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1663B4u;
        goto label_1663b4;
    }
    ctx->pc = 0x1663ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1663B4u);
        ctx->pc = 0x1663B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663ACu;
        // 0x1663b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1663ACu, 0x1663B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1663B4u;
label_1663b4:
    // 0x1663b4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1663b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1663b8:
    // 0x1663b8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1663b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1663bc:
    // 0x1663bc: 0x40f809  jalr        $v0
label_1663c0:
    if (ctx->pc == 0x1663C0u) {
        ctx->pc = 0x1663C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663BCu;
        // 0x1663c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1663C4u;
        goto label_1663c4;
    }
    ctx->pc = 0x1663BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1663C4u);
        ctx->pc = 0x1663C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663BCu;
        // 0x1663c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1663BCu, 0x1663C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1663C4u;
label_1663c4:
    // 0x1663c4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1663c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1663c8:
    // 0x1663c8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1663c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1663cc:
    // 0x1663cc: 0x40f809  jalr        $v0
label_1663d0:
    if (ctx->pc == 0x1663D0u) {
        ctx->pc = 0x1663D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663CCu;
        // 0x1663d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1663D4u;
        goto label_1663d4;
    }
    ctx->pc = 0x1663CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1663D4u);
        ctx->pc = 0x1663D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663CCu;
        // 0x1663d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1663CCu, 0x1663D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1663D4u;
label_1663d4:
    // 0x1663d4: 0x8ec50058  lw          $a1, 0x58($s6)
    ctx->pc = 0x1663d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
label_1663d8:
    // 0x1663d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1663d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1663dc:
    // 0x1663dc: 0x40f809  jalr        $v0
label_1663e0:
    if (ctx->pc == 0x1663E0u) {
        ctx->pc = 0x1663E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663DCu;
        // 0x1663e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1663E4u;
        goto label_1663e4;
    }
    ctx->pc = 0x1663DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1663E4u);
        ctx->pc = 0x1663E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663DCu;
        // 0x1663e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1663DCu, 0x1663E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1663E4u;
label_1663e4:
    // 0x1663e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1663e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1663e8:
    // 0x1663e8: 0xc08c4aa  jal         func_2312A8
label_1663ec:
    if (ctx->pc == 0x1663ECu) {
        ctx->pc = 0x1663ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663E8u;
        // 0x1663ec: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1663F0u;
        goto label_1663f0;
    }
    ctx->pc = 0x1663E8u;
    SET_GPR_U32(ctx, 31, 0x1663F0u);
    ctx->pc = 0x1663ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1663E8u;
    // 0x1663ec: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x1663E8u, 0x1663F0u)) {
        return;
    }
    ctx->pc = 0x1663F0u;
label_1663f0:
    // 0x1663f0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1663f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1663f4:
    // 0x1663f4: 0xc6c00054  lwc1        $f0, 0x54($s6)
    ctx->pc = 0x1663f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1663f8:
    // 0x1663f8: 0xc4618698  lwc1        $f1, -0x7968($v1)
    ctx->pc = 0x1663f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294936216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1663fc:
    // 0x1663fc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1663fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_166400:
    // 0x166400: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x166400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_166404:
    // 0x166404: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x166404u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_166408:
    // 0x166408: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x166408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_16640c:
    // 0x16640c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x16640cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_166410:
    // 0x166410: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x166410u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_166414:
    // 0x166414: 0x3c0141ff  lui         $at, 0x41FF
    ctx->pc = 0x166414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16895 << 16));
label_166418:
    // 0x166418: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x166418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16641c:
    // 0x16641c: 0x8c43869c  lw          $v1, -0x7964($v0)
    ctx->pc = 0x16641cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936220)));
label_166420:
    // 0x166420: 0x27b20480  addiu       $s2, $sp, 0x480
    ctx->pc = 0x166420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_166424:
    // 0x166424: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x166424u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_166428:
    // 0x166428: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x166428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_16642c:
    // 0x16642c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x16642cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_166430:
    // 0x166430: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x166430u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_166434:
    // 0x166434: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x166434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_166438:
    // 0x166438: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x166438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
label_16643c:
    // 0x16643c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_166440:
    if (ctx->pc == 0x166440u) {
        ctx->pc = 0x166440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16643Cu;
        // 0x166440: 0x82880a  movz        $s1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166444u;
        goto label_166444;
    }
    ctx->pc = 0x16643Cu;
    {
        const bool branch_taken_0x16643c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x166440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16643Cu;
        // 0x166440: 0x82880a  movz        $s1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16643c) {
            ctx->pc = 0x166448u;
            goto label_166448;
        }
    }
    ctx->pc = 0x166444u;
label_166444:
    // 0x166444: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x166444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_166448:
    // 0x166448: 0xc6d60050  lwc1        $f22, 0x50($s6)
    ctx->pc = 0x166448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_16644c:
    // 0x16644c: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x16644cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_166450:
    // 0x166450: 0xc6d5004c  lwc1        $f21, 0x4C($s6)
    ctx->pc = 0x166450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_166454:
    // 0x166454: 0x24150007  addiu       $s5, $zero, 0x7
    ctx->pc = 0x166454u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_166458:
    // 0x166458: 0x3c013e0c  lui         $at, 0x3E0C
    ctx->pc = 0x166458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15884 << 16));
label_16645c:
    // 0x16645c: 0x342149ba  ori         $at, $at, 0x49BA
    ctx->pc = 0x16645cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18874);
label_166460:
    // 0x166460: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x166460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_166464:
    // 0x166464: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x166464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_166468:
    // 0x166468: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x166468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_16646c:
    // 0x16646c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x16646cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_166470:
    // 0x166470: 0xc09b164  jal         func_26C590
label_166474:
    if (ctx->pc == 0x166474u) {
        ctx->pc = 0x166474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166470u;
        // 0x166474: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166478u;
        goto label_166478;
    }
    ctx->pc = 0x166470u;
    SET_GPR_U32(ctx, 31, 0x166478u);
    ctx->pc = 0x166474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166470u;
    // 0x166474: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x166470u, 0x166478u)) {
        return;
    }
    ctx->pc = 0x166478u;
label_166478:
    // 0x166478: 0x46190502  mul.s       $f20, $f0, $f25
    ctx->pc = 0x166478u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
label_16647c:
    // 0x16647c: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x16647cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_166480:
    // 0x166480: 0xc09b0e8  jal         func_26C3A0
label_166484:
    if (ctx->pc == 0x166484u) {
        ctx->pc = 0x166484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166480u;
        // 0x166484: 0x4616a502  mul.s       $f20, $f20, $f22 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166488u;
        goto label_166488;
    }
    ctx->pc = 0x166480u;
    SET_GPR_U32(ctx, 31, 0x166488u);
    ctx->pc = 0x166484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166480u;
    // 0x166484: 0x4616a502  mul.s       $f20, $f20, $f22 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x166480u, 0x166488u)) {
        return;
    }
    ctx->pc = 0x166488u;
label_166488:
    // 0x166488: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x166488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
label_16648c:
    // 0x16648c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x16648cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_166490:
    // 0x166490: 0x4600b087  neg.s       $f2, $f22
    ctx->pc = 0x166490u;
    ctx->f[2] = FPU_NEG_S(ctx->f[22]);
label_166494:
    // 0x166494: 0x4600a847  neg.s       $f1, $f21
    ctx->pc = 0x166494u;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
label_166498:
    // 0x166498: 0xafa004e4  sw          $zero, 0x4E4($sp)
    ctx->pc = 0x166498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1252), GPR_U32(ctx, 0));
label_16649c:
    // 0x16649c: 0x46141080  add.s       $f2, $f2, $f20
    ctx->pc = 0x16649cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
label_1664a0:
    // 0x1664a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1664a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1664a4:
    // 0x1664a4: 0xe7a204e0  swc1        $f2, 0x4E0($sp)
    ctx->pc = 0x1664a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1248), bits); }
label_1664a8:
    // 0x1664a8: 0xe7a104e8  swc1        $f1, 0x4E8($sp)
    ctx->pc = 0x1664a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1256), bits); }
label_1664ac:
    // 0x1664ac: 0x6ba204e7  ldl         $v0, 0x4E7($sp)
    ctx->pc = 0x1664acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1664b0:
    // 0x1664b0: 0x6fa204e0  ldr         $v0, 0x4E0($sp)
    ctx->pc = 0x1664b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1664b4:
    // 0x1664b4: 0x8fa304e8  lw          $v1, 0x4E8($sp)
    ctx->pc = 0x1664b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1256)));
label_1664b8:
    // 0x1664b8: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x1664b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1664bc:
    // 0x1664bc: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x1664bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1664c0:
    // 0x1664c0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1664c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1664c4:
    // 0x1664c4: 0x4614b500  add.s       $f20, $f22, $f20
    ctx->pc = 0x1664c4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_1664c8:
    // 0x1664c8: 0xe7a104e8  swc1        $f1, 0x4E8($sp)
    ctx->pc = 0x1664c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1256), bits); }
label_1664cc:
    // 0x1664cc: 0xe7b404e0  swc1        $f20, 0x4E0($sp)
    ctx->pc = 0x1664ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1248), bits); }
label_1664d0:
    // 0x1664d0: 0xafa004e4  sw          $zero, 0x4E4($sp)
    ctx->pc = 0x1664d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1252), GPR_U32(ctx, 0));
label_1664d4:
    // 0x1664d4: 0x6ba204e7  ldl         $v0, 0x4E7($sp)
    ctx->pc = 0x1664d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1664d8:
    // 0x1664d8: 0x6fa204e0  ldr         $v0, 0x4E0($sp)
    ctx->pc = 0x1664d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1664dc:
    // 0x1664dc: 0x8fa304e8  lw          $v1, 0x4E8($sp)
    ctx->pc = 0x1664dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1256)));
label_1664e0:
    // 0x1664e0: 0xb202002b  sdl         $v0, 0x2B($s0)
    ctx->pc = 0x1664e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1664e4:
    // 0x1664e4: 0xb6020024  sdr         $v0, 0x24($s0)
    ctx->pc = 0x1664e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1664e8:
    // 0x1664e8: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1664e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_1664ec:
    // 0x1664ec: 0xe7b404e0  swc1        $f20, 0x4E0($sp)
    ctx->pc = 0x1664ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1248), bits); }
label_1664f0:
    // 0x1664f0: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x1664f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_1664f4:
    // 0x1664f4: 0xafa004e4  sw          $zero, 0x4E4($sp)
    ctx->pc = 0x1664f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1252), GPR_U32(ctx, 0));
label_1664f8:
    // 0x1664f8: 0xe7a004e8  swc1        $f0, 0x4E8($sp)
    ctx->pc = 0x1664f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1256), bits); }
label_1664fc:
    // 0x1664fc: 0x6ba204e7  ldl         $v0, 0x4E7($sp)
    ctx->pc = 0x1664fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_166500:
    // 0x166500: 0x6fa204e0  ldr         $v0, 0x4E0($sp)
    ctx->pc = 0x166500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_166504:
    // 0x166504: 0x8fa304e8  lw          $v1, 0x4E8($sp)
    ctx->pc = 0x166504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1256)));
label_166508:
    // 0x166508: 0xb202004f  sdl         $v0, 0x4F($s0)
    ctx->pc = 0x166508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_16650c:
    // 0x16650c: 0xb6020048  sdr         $v0, 0x48($s0)
    ctx->pc = 0x16650cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_166510:
    // 0x166510: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x166510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_166514:
    // 0x166514: 0xe7a204e0  swc1        $f2, 0x4E0($sp)
    ctx->pc = 0x166514u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1248), bits); }
label_166518:
    // 0x166518: 0xe7a004e8  swc1        $f0, 0x4E8($sp)
    ctx->pc = 0x166518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1256), bits); }
label_16651c:
    // 0x16651c: 0xafa004e4  sw          $zero, 0x4E4($sp)
    ctx->pc = 0x16651cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1252), GPR_U32(ctx, 0));
label_166520:
    // 0x166520: 0x6ba204e7  ldl         $v0, 0x4E7($sp)
    ctx->pc = 0x166520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_166524:
    // 0x166524: 0x6fa204e0  ldr         $v0, 0x4E0($sp)
    ctx->pc = 0x166524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_166528:
    // 0x166528: 0x8fa304e8  lw          $v1, 0x4E8($sp)
    ctx->pc = 0x166528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1256)));
label_16652c:
    // 0x16652c: 0xb2020073  sdl         $v0, 0x73($s0)
    ctx->pc = 0x16652cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_166530:
    // 0x166530: 0xb602006c  sdr         $v0, 0x6C($s0)
    ctx->pc = 0x166530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_166534:
    // 0x166534: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x166534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
label_166538:
    // 0x166538: 0xe617001c  swc1        $f23, 0x1C($s0)
    ctx->pc = 0x166538u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_16653c:
    // 0x16653c: 0xe6170020  swc1        $f23, 0x20($s0)
    ctx->pc = 0x16653cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_166540:
    // 0x166540: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x166540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_166544:
    // 0x166544: 0xe6170044  swc1        $f23, 0x44($s0)
    ctx->pc = 0x166544u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_166548:
    // 0x166548: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x166548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_16654c:
    // 0x16654c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x16654cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_166550:
    // 0x166550: 0xe6170088  swc1        $f23, 0x88($s0)
    ctx->pc = 0x166550u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
label_166554:
    // 0x166554: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x166554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_166558:
    // 0x166558: 0xa211000c  sb          $s1, 0xC($s0)
    ctx->pc = 0x166558u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 17));
label_16655c:
    // 0x16655c: 0xa211000d  sb          $s1, 0xD($s0)
    ctx->pc = 0x16655cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 17));
label_166560:
    // 0x166560: 0xa211000e  sb          $s1, 0xE($s0)
    ctx->pc = 0x166560u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 17));
label_166564:
    // 0x166564: 0xa213000f  sb          $s3, 0xF($s0)
    ctx->pc = 0x166564u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 19));
label_166568:
    // 0x166568: 0xa2110030  sb          $s1, 0x30($s0)
    ctx->pc = 0x166568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 17));
label_16656c:
    // 0x16656c: 0xa2110031  sb          $s1, 0x31($s0)
    ctx->pc = 0x16656cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 17));
label_166570:
    // 0x166570: 0xa2110032  sb          $s1, 0x32($s0)
    ctx->pc = 0x166570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 17));
label_166574:
    // 0x166574: 0xa2130033  sb          $s3, 0x33($s0)
    ctx->pc = 0x166574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 51), (uint8_t)GPR_U32(ctx, 19));
label_166578:
    // 0x166578: 0xa2110054  sb          $s1, 0x54($s0)
    ctx->pc = 0x166578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 17));
label_16657c:
    // 0x16657c: 0xa2110055  sb          $s1, 0x55($s0)
    ctx->pc = 0x16657cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 17));
label_166580:
    // 0x166580: 0xa2110056  sb          $s1, 0x56($s0)
    ctx->pc = 0x166580u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 86), (uint8_t)GPR_U32(ctx, 17));
label_166584:
    // 0x166584: 0xa2130057  sb          $s3, 0x57($s0)
    ctx->pc = 0x166584u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 87), (uint8_t)GPR_U32(ctx, 19));
label_166588:
    // 0x166588: 0xa2110078  sb          $s1, 0x78($s0)
    ctx->pc = 0x166588u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 17));
label_16658c:
    // 0x16658c: 0xa2110079  sb          $s1, 0x79($s0)
    ctx->pc = 0x16658cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 121), (uint8_t)GPR_U32(ctx, 17));
label_166590:
    // 0x166590: 0xa211007a  sb          $s1, 0x7A($s0)
    ctx->pc = 0x166590u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 122), (uint8_t)GPR_U32(ctx, 17));
label_166594:
    // 0x166594: 0xa213007b  sb          $s3, 0x7B($s0)
    ctx->pc = 0x166594u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 123), (uint8_t)GPR_U32(ctx, 19));
label_166598:
    // 0x166598: 0xa6540000  sh          $s4, 0x0($s2)
    ctx->pc = 0x166598u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 20));
label_16659c:
    // 0x16659c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x16659cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_1665a0:
    // 0x1665a0: 0x34210f87  ori         $at, $at, 0xF87
    ctx->pc = 0x1665a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3975);
label_1665a4:
    // 0x1665a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1665a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1665a8:
    // 0x1665a8: 0x26840002  addiu       $a0, $s4, 0x2
    ctx->pc = 0x1665a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_1665ac:
    // 0x1665ac: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1665acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1665b0:
    // 0x1665b0: 0x26830003  addiu       $v1, $s4, 0x3
    ctx->pc = 0x1665b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
label_1665b4:
    // 0x1665b4: 0xa6540006  sh          $s4, 0x6($s2)
    ctx->pc = 0x1665b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 20));
label_1665b8:
    // 0x1665b8: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x1665b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
label_1665bc:
    // 0x1665bc: 0x4600c600  add.s       $f24, $f24, $f0
    ctx->pc = 0x1665bcu;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_1665c0:
    // 0x1665c0: 0xa6440008  sh          $a0, 0x8($s2)
    ctx->pc = 0x1665c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 4));
label_1665c4:
    // 0x1665c4: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x1665c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_1665c8:
    // 0x1665c8: 0xa643000a  sh          $v1, 0xA($s2)
    ctx->pc = 0x1665c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 3));
label_1665cc:
    // 0x1665cc: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1665ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_1665d0:
    // 0x1665d0: 0xa6440004  sh          $a0, 0x4($s2)
    ctx->pc = 0x1665d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 4));
label_1665d4:
    // 0x1665d4: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1665d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_1665d8:
    // 0x1665d8: 0x6a1ffa5  bgez        $s5, . + 4 + (-0x5B << 2)
label_1665dc:
    if (ctx->pc == 0x1665DCu) {
        ctx->pc = 0x1665DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665D8u;
        // 0x1665dc: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1665E0u;
        goto label_1665e0;
    }
    ctx->pc = 0x1665D8u;
    {
        const bool branch_taken_0x1665d8 = (GPR_S64(ctx, 21) >= 0);
        ctx->pc = 0x1665DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665D8u;
        // 0x1665dc: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1665d8) {
            ctx->pc = 0x166470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166470;
        }
    }
    ctx->pc = 0x1665E0u;
label_1665e0:
    // 0x1665e0: 0x8ec60038  lw          $a2, 0x38($s6)
    ctx->pc = 0x1665e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
label_1665e4:
    // 0x1665e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1665e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1665e8:
    // 0x1665e8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1665e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1665ec:
    // 0x1665ec: 0xc091fea  jal         func_247FA8
label_1665f0:
    if (ctx->pc == 0x1665F0u) {
        ctx->pc = 0x1665F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665ECu;
        // 0x1665f0: 0x24070019  addiu       $a3, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1665F4u;
        goto label_1665f4;
    }
    ctx->pc = 0x1665ECu;
    SET_GPR_U32(ctx, 31, 0x1665F4u);
    ctx->pc = 0x1665F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1665ECu;
    // 0x1665f0: 0x24070019  addiu       $a3, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247FA8u, 0x1665ECu, 0x1665F4u)) {
        return;
    }
    ctx->pc = 0x1665F4u;
label_1665f4:
    // 0x1665f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1665f8:
    if (ctx->pc == 0x1665F8u) {
        ctx->pc = 0x1665F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665F4u;
        // 0x1665f8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1665FCu;
        goto label_1665fc;
    }
    ctx->pc = 0x1665F4u;
    {
        const bool branch_taken_0x1665f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1665F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665F4u;
        // 0x1665f8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1665f4) {
            ctx->pc = 0x166610u;
            goto label_166610;
        }
    }
    ctx->pc = 0x1665FCu;
label_1665fc:
    // 0x1665fc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1665fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_166600:
    // 0x166600: 0xc09202a  jal         func_2480A8
label_166604:
    if (ctx->pc == 0x166604u) {
        ctx->pc = 0x166604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166600u;
        // 0x166604: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166608u;
        goto label_166608;
    }
    ctx->pc = 0x166600u;
    SET_GPR_U32(ctx, 31, 0x166608u);
    ctx->pc = 0x166604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166600u;
    // 0x166604: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2480A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2480A8u, 0x166600u, 0x166608u)) {
        return;
    }
    ctx->pc = 0x166608u;
label_166608:
    // 0x166608: 0xc092016  jal         func_248058
label_16660c:
    if (ctx->pc == 0x16660Cu) {
        ctx->pc = 0x166610u;
        goto label_166610;
    }
    ctx->pc = 0x166608u;
    SET_GPR_U32(ctx, 31, 0x166610u);
    ctx->pc = 0x248058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248058u, 0x166608u, 0x166610u)) {
        return;
    }
    ctx->pc = 0x166610u;
label_166610:
    // 0x166610: 0x27d00fd8  addiu       $s0, $fp, 0xFD8
    ctx->pc = 0x166610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4056));
label_166614:
    // 0x166614: 0x8fa504f4  lw          $a1, 0x4F4($sp)
    ctx->pc = 0x166614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1268)));
label_166618:
    // 0x166618: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x166618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_16661c:
    // 0x16661c: 0x40f809  jalr        $v0
label_166620:
    if (ctx->pc == 0x166620u) {
        ctx->pc = 0x166620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16661Cu;
        // 0x166620: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166624u;
        goto label_166624;
    }
    ctx->pc = 0x16661Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166624u);
        ctx->pc = 0x166620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16661Cu;
        // 0x166620: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16661Cu, 0x166624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166624u;
label_166624:
    // 0x166624: 0x8fa504f8  lw          $a1, 0x4F8($sp)
    ctx->pc = 0x166624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1272)));
label_166628:
    // 0x166628: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x166628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_16662c:
    // 0x16662c: 0x40f809  jalr        $v0
label_166630:
    if (ctx->pc == 0x166630u) {
        ctx->pc = 0x166630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16662Cu;
        // 0x166630: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166634u;
        goto label_166634;
    }
    ctx->pc = 0x16662Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166634u);
        ctx->pc = 0x166630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16662Cu;
        // 0x166630: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16662Cu, 0x166634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166634u;
label_166634:
    // 0x166634: 0x8fa504fc  lw          $a1, 0x4FC($sp)
    ctx->pc = 0x166634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1276)));
label_166638:
    // 0x166638: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x166638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_16663c:
    // 0x16663c: 0x40f809  jalr        $v0
label_166640:
    if (ctx->pc == 0x166640u) {
        ctx->pc = 0x166640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16663Cu;
        // 0x166640: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166644u;
        goto label_166644;
    }
    ctx->pc = 0x16663Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166644u);
        ctx->pc = 0x166640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16663Cu;
        // 0x166640: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16663Cu, 0x166644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166644u;
label_166644:
    // 0x166644: 0x8fa50500  lw          $a1, 0x500($sp)
    ctx->pc = 0x166644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1280)));
label_166648:
    // 0x166648: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x166648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_16664c:
    // 0x16664c: 0x40f809  jalr        $v0
label_166650:
    if (ctx->pc == 0x166650u) {
        ctx->pc = 0x166650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16664Cu;
        // 0x166650: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166654u;
        goto label_166654;
    }
    ctx->pc = 0x16664Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166654u);
        ctx->pc = 0x166650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16664Cu;
        // 0x166650: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16664Cu, 0x166654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166654u;
label_166654:
    // 0x166654: 0x8fa50504  lw          $a1, 0x504($sp)
    ctx->pc = 0x166654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1284)));
label_166658:
    // 0x166658: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x166658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_16665c:
    // 0x16665c: 0x40f809  jalr        $v0
label_166660:
    if (ctx->pc == 0x166660u) {
        ctx->pc = 0x166660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16665Cu;
        // 0x166660: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166664u;
        goto label_166664;
    }
    ctx->pc = 0x16665Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166664u);
        ctx->pc = 0x166660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16665Cu;
        // 0x166660: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16665Cu, 0x166664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166664u;
label_166664:
    // 0x166664: 0x8fa50508  lw          $a1, 0x508($sp)
    ctx->pc = 0x166664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
label_166668:
    // 0x166668: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x166668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_16666c:
    // 0x16666c: 0x40f809  jalr        $v0
label_166670:
    if (ctx->pc == 0x166670u) {
        ctx->pc = 0x166670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16666Cu;
        // 0x166670: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166674u;
        goto label_166674;
    }
    ctx->pc = 0x16666Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166674u);
        ctx->pc = 0x166670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16666Cu;
        // 0x166670: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16666Cu, 0x166674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166674u;
label_166674:
    // 0x166674: 0x8fa5050c  lw          $a1, 0x50C($sp)
    ctx->pc = 0x166674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1292)));
label_166678:
    // 0x166678: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x166678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_16667c:
    // 0x16667c: 0x40f809  jalr        $v0
label_166680:
    if (ctx->pc == 0x166680u) {
        ctx->pc = 0x166680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16667Cu;
        // 0x166680: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166684u;
        goto label_166684;
    }
    ctx->pc = 0x16667Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166684u);
        ctx->pc = 0x166680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16667Cu;
        // 0x166680: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16667Cu, 0x166684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166684u;
label_166684:
    // 0x166684: 0x8fa50510  lw          $a1, 0x510($sp)
    ctx->pc = 0x166684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_166688:
    // 0x166688: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x166688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_16668c:
    // 0x16668c: 0x40f809  jalr        $v0
label_166690:
    if (ctx->pc == 0x166690u) {
        ctx->pc = 0x166690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16668Cu;
        // 0x166690: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166694u;
        goto label_166694;
    }
    ctx->pc = 0x16668Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166694u);
        ctx->pc = 0x166690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16668Cu;
        // 0x166690: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16668Cu, 0x166694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166694u;
label_166694:
    // 0x166694: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x166694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_166698:
    // 0x166698: 0xc08c4aa  jal         func_2312A8
label_16669c:
    if (ctx->pc == 0x16669Cu) {
        ctx->pc = 0x16669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166698u;
        // 0x16669c: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1666A0u;
        goto label_1666a0;
    }
    ctx->pc = 0x166698u;
    SET_GPR_U32(ctx, 31, 0x1666A0u);
    ctx->pc = 0x16669Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166698u;
    // 0x16669c: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x166698u, 0x1666A0u)) {
        return;
    }
    ctx->pc = 0x1666A0u;
label_1666a0:
    // 0x1666a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1666a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1666a4:
    // 0x1666a4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1666a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1666a8:
    // 0x1666a8: 0x40f809  jalr        $v0
label_1666ac:
    if (ctx->pc == 0x1666ACu) {
        ctx->pc = 0x1666ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666A8u;
        // 0x1666ac: 0x8fa504f0  lw          $a1, 0x4F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1666B0u;
        goto label_1666b0;
    }
    ctx->pc = 0x1666A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1666B0u);
        ctx->pc = 0x1666ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666A8u;
        // 0x1666ac: 0x8fa504f0  lw          $a1, 0x4F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1666A8u, 0x1666B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1666B0u;
label_1666b0:
    // 0x1666b0: 0x7bb005b0  lq          $s0, 0x5B0($sp)
    ctx->pc = 0x1666b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1456)));
label_1666b4:
    // 0x1666b4: 0x7bb105a0  lq          $s1, 0x5A0($sp)
    ctx->pc = 0x1666b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1440)));
label_1666b8:
    // 0x1666b8: 0x7bb20590  lq          $s2, 0x590($sp)
    ctx->pc = 0x1666b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1424)));
label_1666bc:
    // 0x1666bc: 0x7bb30580  lq          $s3, 0x580($sp)
    ctx->pc = 0x1666bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
label_1666c0:
    // 0x1666c0: 0x7bb40570  lq          $s4, 0x570($sp)
    ctx->pc = 0x1666c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
label_1666c4:
    // 0x1666c4: 0x7bb50560  lq          $s5, 0x560($sp)
    ctx->pc = 0x1666c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
label_1666c8:
    // 0x1666c8: 0x7bb60550  lq          $s6, 0x550($sp)
    ctx->pc = 0x1666c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
label_1666cc:
    // 0x1666cc: 0x7bb70540  lq          $s7, 0x540($sp)
    ctx->pc = 0x1666ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_1666d0:
    // 0x1666d0: 0x7bbe0530  lq          $fp, 0x530($sp)
    ctx->pc = 0x1666d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_1666d4:
    // 0x1666d4: 0xdfbf0520  ld          $ra, 0x520($sp)
    ctx->pc = 0x1666d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1312)));
label_1666d8:
    // 0x1666d8: 0xc7b905e8  lwc1        $f25, 0x5E8($sp)
    ctx->pc = 0x1666d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1666dc:
    // 0x1666dc: 0xc7b805e0  lwc1        $f24, 0x5E0($sp)
    ctx->pc = 0x1666dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1666e0:
    // 0x1666e0: 0xc7b705d8  lwc1        $f23, 0x5D8($sp)
    ctx->pc = 0x1666e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1666e4:
    // 0x1666e4: 0xc7b605d0  lwc1        $f22, 0x5D0($sp)
    ctx->pc = 0x1666e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1666e8:
    // 0x1666e8: 0xc7b505c8  lwc1        $f21, 0x5C8($sp)
    ctx->pc = 0x1666e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1666ec:
    // 0x1666ec: 0xc7b405c0  lwc1        $f20, 0x5C0($sp)
    ctx->pc = 0x1666ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1666f0:
    // 0x1666f0: 0x3e00008  jr          $ra
label_1666f4:
    if (ctx->pc == 0x1666F4u) {
        ctx->pc = 0x1666F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666F0u;
        // 0x1666f4: 0x27bd05f0  addiu       $sp, $sp, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1666F8u;
        goto label_fallthrough_0x1666f0;
    }
    ctx->pc = 0x1666F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1666F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666F0u;
        // 0x1666f4: 0x27bd05f0  addiu       $sp, $sp, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1520));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1666F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1666f0:
    ctx->pc = 0x1666F8u;
}
