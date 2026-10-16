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

// Function: sub_00219350
// Address: 0x219350 - 0x219720
void sub_00219350_0x219350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219350_0x219350");
#endif

    switch (ctx->pc) {
        case 0x219350u: goto label_219350;
        case 0x219354u: goto label_219354;
        case 0x219358u: goto label_219358;
        case 0x21935cu: goto label_21935c;
        case 0x219360u: goto label_219360;
        case 0x219364u: goto label_219364;
        case 0x219368u: goto label_219368;
        case 0x21936cu: goto label_21936c;
        case 0x219370u: goto label_219370;
        case 0x219374u: goto label_219374;
        case 0x219378u: goto label_219378;
        case 0x21937cu: goto label_21937c;
        case 0x219380u: goto label_219380;
        case 0x219384u: goto label_219384;
        case 0x219388u: goto label_219388;
        case 0x21938cu: goto label_21938c;
        case 0x219390u: goto label_219390;
        case 0x219394u: goto label_219394;
        case 0x219398u: goto label_219398;
        case 0x21939cu: goto label_21939c;
        case 0x2193a0u: goto label_2193a0;
        case 0x2193a4u: goto label_2193a4;
        case 0x2193a8u: goto label_2193a8;
        case 0x2193acu: goto label_2193ac;
        case 0x2193b0u: goto label_2193b0;
        case 0x2193b4u: goto label_2193b4;
        case 0x2193b8u: goto label_2193b8;
        case 0x2193bcu: goto label_2193bc;
        case 0x2193c0u: goto label_2193c0;
        case 0x2193c4u: goto label_2193c4;
        case 0x2193c8u: goto label_2193c8;
        case 0x2193ccu: goto label_2193cc;
        case 0x2193d0u: goto label_2193d0;
        case 0x2193d4u: goto label_2193d4;
        case 0x2193d8u: goto label_2193d8;
        case 0x2193dcu: goto label_2193dc;
        case 0x2193e0u: goto label_2193e0;
        case 0x2193e4u: goto label_2193e4;
        case 0x2193e8u: goto label_2193e8;
        case 0x2193ecu: goto label_2193ec;
        case 0x2193f0u: goto label_2193f0;
        case 0x2193f4u: goto label_2193f4;
        case 0x2193f8u: goto label_2193f8;
        case 0x2193fcu: goto label_2193fc;
        case 0x219400u: goto label_219400;
        case 0x219404u: goto label_219404;
        case 0x219408u: goto label_219408;
        case 0x21940cu: goto label_21940c;
        case 0x219410u: goto label_219410;
        case 0x219414u: goto label_219414;
        case 0x219418u: goto label_219418;
        case 0x21941cu: goto label_21941c;
        case 0x219420u: goto label_219420;
        case 0x219424u: goto label_219424;
        case 0x219428u: goto label_219428;
        case 0x21942cu: goto label_21942c;
        case 0x219430u: goto label_219430;
        case 0x219434u: goto label_219434;
        case 0x219438u: goto label_219438;
        case 0x21943cu: goto label_21943c;
        case 0x219440u: goto label_219440;
        case 0x219444u: goto label_219444;
        case 0x219448u: goto label_219448;
        case 0x21944cu: goto label_21944c;
        case 0x219450u: goto label_219450;
        case 0x219454u: goto label_219454;
        case 0x219458u: goto label_219458;
        case 0x21945cu: goto label_21945c;
        case 0x219460u: goto label_219460;
        case 0x219464u: goto label_219464;
        case 0x219468u: goto label_219468;
        case 0x21946cu: goto label_21946c;
        case 0x219470u: goto label_219470;
        case 0x219474u: goto label_219474;
        case 0x219478u: goto label_219478;
        case 0x21947cu: goto label_21947c;
        case 0x219480u: goto label_219480;
        case 0x219484u: goto label_219484;
        case 0x219488u: goto label_219488;
        case 0x21948cu: goto label_21948c;
        case 0x219490u: goto label_219490;
        case 0x219494u: goto label_219494;
        case 0x219498u: goto label_219498;
        case 0x21949cu: goto label_21949c;
        case 0x2194a0u: goto label_2194a0;
        case 0x2194a4u: goto label_2194a4;
        case 0x2194a8u: goto label_2194a8;
        case 0x2194acu: goto label_2194ac;
        case 0x2194b0u: goto label_2194b0;
        case 0x2194b4u: goto label_2194b4;
        case 0x2194b8u: goto label_2194b8;
        case 0x2194bcu: goto label_2194bc;
        case 0x2194c0u: goto label_2194c0;
        case 0x2194c4u: goto label_2194c4;
        case 0x2194c8u: goto label_2194c8;
        case 0x2194ccu: goto label_2194cc;
        case 0x2194d0u: goto label_2194d0;
        case 0x2194d4u: goto label_2194d4;
        case 0x2194d8u: goto label_2194d8;
        case 0x2194dcu: goto label_2194dc;
        case 0x2194e0u: goto label_2194e0;
        case 0x2194e4u: goto label_2194e4;
        case 0x2194e8u: goto label_2194e8;
        case 0x2194ecu: goto label_2194ec;
        case 0x2194f0u: goto label_2194f0;
        case 0x2194f4u: goto label_2194f4;
        case 0x2194f8u: goto label_2194f8;
        case 0x2194fcu: goto label_2194fc;
        case 0x219500u: goto label_219500;
        case 0x219504u: goto label_219504;
        case 0x219508u: goto label_219508;
        case 0x21950cu: goto label_21950c;
        case 0x219510u: goto label_219510;
        case 0x219514u: goto label_219514;
        case 0x219518u: goto label_219518;
        case 0x21951cu: goto label_21951c;
        case 0x219520u: goto label_219520;
        case 0x219524u: goto label_219524;
        case 0x219528u: goto label_219528;
        case 0x21952cu: goto label_21952c;
        case 0x219530u: goto label_219530;
        case 0x219534u: goto label_219534;
        case 0x219538u: goto label_219538;
        case 0x21953cu: goto label_21953c;
        case 0x219540u: goto label_219540;
        case 0x219544u: goto label_219544;
        case 0x219548u: goto label_219548;
        case 0x21954cu: goto label_21954c;
        case 0x219550u: goto label_219550;
        case 0x219554u: goto label_219554;
        case 0x219558u: goto label_219558;
        case 0x21955cu: goto label_21955c;
        case 0x219560u: goto label_219560;
        case 0x219564u: goto label_219564;
        case 0x219568u: goto label_219568;
        case 0x21956cu: goto label_21956c;
        case 0x219570u: goto label_219570;
        case 0x219574u: goto label_219574;
        case 0x219578u: goto label_219578;
        case 0x21957cu: goto label_21957c;
        case 0x219580u: goto label_219580;
        case 0x219584u: goto label_219584;
        case 0x219588u: goto label_219588;
        case 0x21958cu: goto label_21958c;
        case 0x219590u: goto label_219590;
        case 0x219594u: goto label_219594;
        case 0x219598u: goto label_219598;
        case 0x21959cu: goto label_21959c;
        case 0x2195a0u: goto label_2195a0;
        case 0x2195a4u: goto label_2195a4;
        case 0x2195a8u: goto label_2195a8;
        case 0x2195acu: goto label_2195ac;
        case 0x2195b0u: goto label_2195b0;
        case 0x2195b4u: goto label_2195b4;
        case 0x2195b8u: goto label_2195b8;
        case 0x2195bcu: goto label_2195bc;
        case 0x2195c0u: goto label_2195c0;
        case 0x2195c4u: goto label_2195c4;
        case 0x2195c8u: goto label_2195c8;
        case 0x2195ccu: goto label_2195cc;
        case 0x2195d0u: goto label_2195d0;
        case 0x2195d4u: goto label_2195d4;
        case 0x2195d8u: goto label_2195d8;
        case 0x2195dcu: goto label_2195dc;
        case 0x2195e0u: goto label_2195e0;
        case 0x2195e4u: goto label_2195e4;
        case 0x2195e8u: goto label_2195e8;
        case 0x2195ecu: goto label_2195ec;
        case 0x2195f0u: goto label_2195f0;
        case 0x2195f4u: goto label_2195f4;
        case 0x2195f8u: goto label_2195f8;
        case 0x2195fcu: goto label_2195fc;
        case 0x219600u: goto label_219600;
        case 0x219604u: goto label_219604;
        case 0x219608u: goto label_219608;
        case 0x21960cu: goto label_21960c;
        case 0x219610u: goto label_219610;
        case 0x219614u: goto label_219614;
        case 0x219618u: goto label_219618;
        case 0x21961cu: goto label_21961c;
        case 0x219620u: goto label_219620;
        case 0x219624u: goto label_219624;
        case 0x219628u: goto label_219628;
        case 0x21962cu: goto label_21962c;
        case 0x219630u: goto label_219630;
        case 0x219634u: goto label_219634;
        case 0x219638u: goto label_219638;
        case 0x21963cu: goto label_21963c;
        case 0x219640u: goto label_219640;
        case 0x219644u: goto label_219644;
        case 0x219648u: goto label_219648;
        case 0x21964cu: goto label_21964c;
        case 0x219650u: goto label_219650;
        case 0x219654u: goto label_219654;
        case 0x219658u: goto label_219658;
        case 0x21965cu: goto label_21965c;
        case 0x219660u: goto label_219660;
        case 0x219664u: goto label_219664;
        case 0x219668u: goto label_219668;
        case 0x21966cu: goto label_21966c;
        case 0x219670u: goto label_219670;
        case 0x219674u: goto label_219674;
        case 0x219678u: goto label_219678;
        case 0x21967cu: goto label_21967c;
        case 0x219680u: goto label_219680;
        case 0x219684u: goto label_219684;
        case 0x219688u: goto label_219688;
        case 0x21968cu: goto label_21968c;
        case 0x219690u: goto label_219690;
        case 0x219694u: goto label_219694;
        case 0x219698u: goto label_219698;
        case 0x21969cu: goto label_21969c;
        case 0x2196a0u: goto label_2196a0;
        case 0x2196a4u: goto label_2196a4;
        case 0x2196a8u: goto label_2196a8;
        case 0x2196acu: goto label_2196ac;
        case 0x2196b0u: goto label_2196b0;
        case 0x2196b4u: goto label_2196b4;
        case 0x2196b8u: goto label_2196b8;
        case 0x2196bcu: goto label_2196bc;
        case 0x2196c0u: goto label_2196c0;
        case 0x2196c4u: goto label_2196c4;
        case 0x2196c8u: goto label_2196c8;
        case 0x2196ccu: goto label_2196cc;
        case 0x2196d0u: goto label_2196d0;
        case 0x2196d4u: goto label_2196d4;
        case 0x2196d8u: goto label_2196d8;
        case 0x2196dcu: goto label_2196dc;
        case 0x2196e0u: goto label_2196e0;
        case 0x2196e4u: goto label_2196e4;
        case 0x2196e8u: goto label_2196e8;
        case 0x2196ecu: goto label_2196ec;
        case 0x2196f0u: goto label_2196f0;
        case 0x2196f4u: goto label_2196f4;
        case 0x2196f8u: goto label_2196f8;
        case 0x2196fcu: goto label_2196fc;
        case 0x219700u: goto label_219700;
        case 0x219704u: goto label_219704;
        case 0x219708u: goto label_219708;
        case 0x21970cu: goto label_21970c;
        case 0x219710u: goto label_219710;
        case 0x219714u: goto label_219714;
        case 0x219718u: goto label_219718;
        case 0x21971cu: goto label_21971c;
        default: break;
    }

    ctx->pc = 0x219350u;

label_219350:
    // 0x219350: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x219350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_219354:
    // 0x219354: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x219354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_219358:
    // 0x219358: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x219358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_21935c:
    // 0x21935c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x21935cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_219360:
    // 0x219360: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x219360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_219364:
    // 0x219364: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x219364u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_219368:
    // 0x219368: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x219368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_21936c:
    // 0x21936c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21936cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_219370:
    // 0x219370: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x219370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_219374:
    // 0x219374: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x219374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_219378:
    // 0x219378: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x219378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_21937c:
    // 0x21937c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x21937cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_219380:
    // 0x219380: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x219380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_219384:
    // 0x219384: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x219384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_219388:
    // 0x219388: 0xc086c6c  jal         func_21B1B0
label_21938c:
    if (ctx->pc == 0x21938Cu) {
        ctx->pc = 0x21938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219388u;
        // 0x21938c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219390u;
        goto label_219390;
    }
    ctx->pc = 0x219388u;
    SET_GPR_U32(ctx, 31, 0x219390u);
    ctx->pc = 0x21938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219388u;
    // 0x21938c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B1B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B1B0u, 0x219388u, 0x219390u)) {
        return;
    }
    ctx->pc = 0x219390u;
label_219390:
    // 0x219390: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x219390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_219394:
    // 0x219394: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_219398:
    if (ctx->pc == 0x219398u) {
        ctx->pc = 0x219398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219394u;
        // 0x219398: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21939Cu;
        goto label_21939c;
    }
    ctx->pc = 0x219394u;
    {
        const bool branch_taken_0x219394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219394) {
            ctx->pc = 0x219398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219394u;
            // 0x219398: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2193ACu;
            goto label_2193ac;
        }
    }
    ctx->pc = 0x21939Cu;
label_21939c:
    // 0x21939c: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x21939cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
label_2193a0:
    // 0x2193a0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2193a4:
    if (ctx->pc == 0x2193A4u) {
        ctx->pc = 0x2193A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193A0u;
        // 0x2193a4: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2193A8u;
        goto label_2193a8;
    }
    ctx->pc = 0x2193A0u;
    {
        const bool branch_taken_0x2193a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2193a0) {
            ctx->pc = 0x2193A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2193A0u;
            // 0x2193a4: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2193C0u;
            goto label_2193c0;
        }
    }
    ctx->pc = 0x2193A8u;
label_2193a8:
    // 0x2193a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2193a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2193ac:
    // 0x2193ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2193acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2193b0:
    // 0x2193b0: 0xc0865c8  jal         func_219720
label_2193b4:
    if (ctx->pc == 0x2193B4u) {
        ctx->pc = 0x2193B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193B0u;
        // 0x2193b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2193B8u;
        goto label_2193b8;
    }
    ctx->pc = 0x2193B0u;
    SET_GPR_U32(ctx, 31, 0x2193B8u);
    ctx->pc = 0x2193B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2193B0u;
    // 0x2193b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219720u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x219720u, 0x2193B0u, 0x2193B8u)) {
        return;
    }
    ctx->pc = 0x2193B8u;
label_2193b8:
    // 0x2193b8: 0x100000ce  b           . + 4 + (0xCE << 2)
label_2193bc:
    if (ctx->pc == 0x2193BCu) {
        ctx->pc = 0x2193BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193B8u;
        // 0x2193bc: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2193C0u;
        goto label_2193c0;
    }
    ctx->pc = 0x2193B8u;
    {
        const bool branch_taken_0x2193b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2193BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193B8u;
        // 0x2193bc: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2193b8) {
            ctx->pc = 0x2196F4u;
            goto label_2196f4;
        }
    }
    ctx->pc = 0x2193C0u;
label_2193c0:
    // 0x2193c0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2193c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2193c4:
    // 0x2193c4: 0x26160001  addiu       $s6, $s0, 0x1
    ctx->pc = 0x2193c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2193c8:
    // 0x2193c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2193c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2193cc:
    // 0x2193cc: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x2193ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2193d0:
    // 0x2193d0: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2193d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_2193d4:
    // 0x2193d4: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
label_2193d8:
    if (ctx->pc == 0x2193D8u) {
        ctx->pc = 0x2193D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193D4u;
        // 0x2193d8: 0x27be0054  addiu       $fp, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2193DCu;
        goto label_2193dc;
    }
    ctx->pc = 0x2193D4u;
    {
        const bool branch_taken_0x2193d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2193D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193D4u;
        // 0x2193d8: 0x27be0054  addiu       $fp, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2193d4) {
            ctx->pc = 0x2194DCu;
            goto label_2194dc;
        }
    }
    ctx->pc = 0x2193DCu;
label_2193dc:
    // 0x2193dc: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x2193dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2193e0:
    // 0x2193e0: 0x1a40003b  blez        $s2, . + 4 + (0x3B << 2)
label_2193e4:
    if (ctx->pc == 0x2193E4u) {
        ctx->pc = 0x2193E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193E0u;
        // 0x2193e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2193E8u;
        goto label_2193e8;
    }
    ctx->pc = 0x2193E0u;
    {
        const bool branch_taken_0x2193e0 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x2193E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193E0u;
        // 0x2193e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2193e0) {
            ctx->pc = 0x2194D0u;
            goto label_2194d0;
        }
    }
    ctx->pc = 0x2193E8u;
label_2193e8:
    // 0x2193e8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2193e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2193ec:
    // 0x2193ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2193ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2193f0:
    // 0x2193f0: 0xc086bb2  jal         func_21AEC8
label_2193f4:
    if (ctx->pc == 0x2193F4u) {
        ctx->pc = 0x2193F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193F0u;
        // 0x2193f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2193F8u;
        goto label_2193f8;
    }
    ctx->pc = 0x2193F0u;
    SET_GPR_U32(ctx, 31, 0x2193F8u);
    ctx->pc = 0x2193F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2193F0u;
    // 0x2193f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AEC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AEC8u, 0x2193F0u, 0x2193F8u)) {
        return;
    }
    ctx->pc = 0x2193F8u;
label_2193f8:
    // 0x2193f8: 0x1660000e  bnez        $s3, . + 4 + (0xE << 2)
label_2193fc:
    if (ctx->pc == 0x2193FCu) {
        ctx->pc = 0x2193FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193F8u;
        // 0x2193fc: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x219400u;
        goto label_219400;
    }
    ctx->pc = 0x2193F8u;
    {
        const bool branch_taken_0x2193f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2193FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193F8u;
        // 0x2193fc: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2193f8) {
            ctx->pc = 0x219434u;
            goto label_219434;
        }
    }
    ctx->pc = 0x219400u;
label_219400:
    // 0x219400: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x219400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_219404:
    // 0x219404: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x219404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_219408:
    // 0x219408: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x219408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_21940c:
    // 0x21940c: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x21940cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_219410:
    // 0x219410: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x219410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_219414:
    // 0x219414: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x219414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_219418:
    // 0x219418: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x219418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_21941c:
    // 0x21941c: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x21941cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_219420:
    // 0x219420: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x219420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_219424:
    // 0x219424: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x219424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_219428:
    // 0x219428: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x219428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_21942c:
    // 0x21942c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x21942cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_219430:
    // 0x219430: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x219430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219434:
    // 0x219434: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x219434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219438:
    // 0x219438: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219438u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21943c:
    // 0x21943c: 0x0  nop
    ctx->pc = 0x21943cu;
    // NOP
label_219440:
    // 0x219440: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_219444:
    if (ctx->pc == 0x219444u) {
        ctx->pc = 0x219444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219440u;
        // 0x219444: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x219448u;
        goto label_219448;
    }
    ctx->pc = 0x219440u;
    {
        const bool branch_taken_0x219440 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x219440) {
            ctx->pc = 0x219444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219440u;
            // 0x219444: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x219448u;
            goto label_219448;
        }
    }
    ctx->pc = 0x219448u;
label_219448:
    // 0x219448: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x219448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21944c:
    // 0x21944c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x21944cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219450:
    // 0x219450: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219450u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219454:
    // 0x219454: 0x0  nop
    ctx->pc = 0x219454u;
    // NOP
label_219458:
    // 0x219458: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_21945c:
    if (ctx->pc == 0x21945Cu) {
        ctx->pc = 0x21945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219458u;
        // 0x21945c: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x219460u;
        goto label_219460;
    }
    ctx->pc = 0x219458u;
    {
        const bool branch_taken_0x219458 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x219458) {
            ctx->pc = 0x21945Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219458u;
            // 0x21945c: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x219460u;
            goto label_219460;
        }
    }
    ctx->pc = 0x219460u;
label_219460:
    // 0x219460: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x219460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219464:
    // 0x219464: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x219464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219468:
    // 0x219468: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21946c:
    // 0x21946c: 0x0  nop
    ctx->pc = 0x21946cu;
    // NOP
label_219470:
    // 0x219470: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_219474:
    if (ctx->pc == 0x219474u) {
        ctx->pc = 0x219474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219470u;
        // 0x219474: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x219478u;
        goto label_219478;
    }
    ctx->pc = 0x219470u;
    {
        const bool branch_taken_0x219470 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x219470) {
            ctx->pc = 0x219474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219470u;
            // 0x219474: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x219478u;
            goto label_219478;
        }
    }
    ctx->pc = 0x219478u;
label_219478:
    // 0x219478: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x219478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21947c:
    // 0x21947c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x21947cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219480:
    // 0x219480: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x219480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219484:
    // 0x219484: 0x0  nop
    ctx->pc = 0x219484u;
    // NOP
label_219488:
    // 0x219488: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_21948c:
    if (ctx->pc == 0x21948Cu) {
        ctx->pc = 0x21948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219488u;
        // 0x21948c: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x219490u;
        goto label_219490;
    }
    ctx->pc = 0x219488u;
    {
        const bool branch_taken_0x219488 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x219488) {
            ctx->pc = 0x21948Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219488u;
            // 0x21948c: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x219490u;
            goto label_219490;
        }
    }
    ctx->pc = 0x219490u;
label_219490:
    // 0x219490: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x219490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219494:
    // 0x219494: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x219494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219498:
    // 0x219498: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x219498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21949c:
    // 0x21949c: 0x0  nop
    ctx->pc = 0x21949cu;
    // NOP
label_2194a0:
    // 0x2194a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2194a4:
    if (ctx->pc == 0x2194A4u) {
        ctx->pc = 0x2194A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194A0u;
        // 0x2194a4: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194A8u;
        goto label_2194a8;
    }
    ctx->pc = 0x2194A0u;
    {
        const bool branch_taken_0x2194a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2194a0) {
            ctx->pc = 0x2194A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2194A0u;
            // 0x2194a4: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2194A8u;
            goto label_2194a8;
        }
    }
    ctx->pc = 0x2194A8u;
label_2194a8:
    // 0x2194a8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2194a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2194ac:
    // 0x2194ac: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2194acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2194b0:
    // 0x2194b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2194b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2194b4:
    // 0x2194b4: 0x0  nop
    ctx->pc = 0x2194b4u;
    // NOP
label_2194b8:
    // 0x2194b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2194bc:
    if (ctx->pc == 0x2194BCu) {
        ctx->pc = 0x2194BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194B8u;
        // 0x2194bc: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194C0u;
        goto label_2194c0;
    }
    ctx->pc = 0x2194B8u;
    {
        const bool branch_taken_0x2194b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2194b8) {
            ctx->pc = 0x2194BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2194B8u;
            // 0x2194bc: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2194C0u;
            goto label_2194c0;
        }
    }
    ctx->pc = 0x2194C0u;
label_2194c0:
    // 0x2194c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2194c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2194c4:
    // 0x2194c4: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x2194c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2194c8:
    // 0x2194c8: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
label_2194cc:
    if (ctx->pc == 0x2194CCu) {
        ctx->pc = 0x2194CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194C8u;
        // 0x2194cc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194D0u;
        goto label_2194d0;
    }
    ctx->pc = 0x2194C8u;
    {
        const bool branch_taken_0x2194c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2194CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194C8u;
        // 0x2194cc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2194c8) {
            ctx->pc = 0x2193E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2193e8;
        }
    }
    ctx->pc = 0x2194D0u;
label_2194d0:
    // 0x2194d0: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x2194d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2194d4:
    // 0x2194d4: 0x5620ffc2  bnel        $s1, $zero, . + 4 + (-0x3E << 2)
label_2194d8:
    if (ctx->pc == 0x2194D8u) {
        ctx->pc = 0x2194D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194D4u;
        // 0x2194d8: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194DCu;
        goto label_2194dc;
    }
    ctx->pc = 0x2194D4u;
    {
        const bool branch_taken_0x2194d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2194d4) {
            ctx->pc = 0x2194D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2194D4u;
            // 0x2194d8: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2193E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2193e0;
        }
    }
    ctx->pc = 0x2194DCu;
label_2194dc:
    // 0x2194dc: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2194dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2194e0:
    // 0x2194e0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2194e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2194e4:
    // 0x2194e4: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x2194e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2194e8:
    // 0x2194e8: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x2194e8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2194ec:
    // 0x2194ec: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2194ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2194f0:
    // 0x2194f0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2194f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2194f4:
    // 0x2194f4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2194f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2194f8:
    // 0x2194f8: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x2194f8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_2194fc:
    // 0x2194fc: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x2194fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_219500:
    // 0x219500: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x219500u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_219504:
    // 0x219504: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x219504u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_219508:
    // 0x219508: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x219508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21950c:
    // 0x21950c: 0x0  nop
    ctx->pc = 0x21950cu;
    // NOP
label_219510:
    // 0x219510: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_219514:
    if (ctx->pc == 0x219514u) {
        ctx->pc = 0x219514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219510u;
        // 0x219514: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x219518u;
        goto label_219518;
    }
    ctx->pc = 0x219510u;
    {
        const bool branch_taken_0x219510 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219510u;
        // 0x219514: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x219510) {
            ctx->pc = 0x219530u;
            goto label_219530;
        }
    }
    ctx->pc = 0x219518u;
label_219518:
    // 0x219518: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x219518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21951c:
    // 0x21951c: 0x0  nop
    ctx->pc = 0x21951cu;
    // NOP
label_219520:
    // 0x219520: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_219524:
    if (ctx->pc == 0x219524u) {
        ctx->pc = 0x219524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219520u;
        // 0x219524: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219528u;
        goto label_219528;
    }
    ctx->pc = 0x219520u;
    {
        const bool branch_taken_0x219520 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219520u;
        // 0x219524: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219520) {
            ctx->pc = 0x219544u;
            goto label_219544;
        }
    }
    ctx->pc = 0x219528u;
label_219528:
    // 0x219528: 0x10000006  b           . + 4 + (0x6 << 2)
label_21952c:
    if (ctx->pc == 0x21952Cu) {
        ctx->pc = 0x21952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219528u;
        // 0x21952c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219530u;
        goto label_219530;
    }
    ctx->pc = 0x219528u;
    {
        const bool branch_taken_0x219528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219528u;
        // 0x21952c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219528) {
            ctx->pc = 0x219544u;
            goto label_219544;
        }
    }
    ctx->pc = 0x219530u;
label_219530:
    // 0x219530: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x219530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219534:
    // 0x219534: 0x0  nop
    ctx->pc = 0x219534u;
    // NOP
label_219538:
    // 0x219538: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_21953c:
    if (ctx->pc == 0x21953Cu) {
        ctx->pc = 0x21953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219538u;
        // 0x21953c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219540u;
        goto label_219540;
    }
    ctx->pc = 0x219538u;
    {
        const bool branch_taken_0x219538 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219538u;
        // 0x21953c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219538) {
            ctx->pc = 0x219544u;
            goto label_219544;
        }
    }
    ctx->pc = 0x219540u;
label_219540:
    // 0x219540: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x219540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219544:
    // 0x219544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219548:
    // 0x219548: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_21954c:
    if (ctx->pc == 0x21954Cu) {
        ctx->pc = 0x21954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219548u;
        // 0x21954c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x219550u;
        goto label_219550;
    }
    ctx->pc = 0x219548u;
    {
        const bool branch_taken_0x219548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219548u;
        // 0x21954c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219548) {
            ctx->pc = 0x219590u;
            goto label_219590;
        }
    }
    ctx->pc = 0x219550u;
label_219550:
    // 0x219550: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_219554:
    if (ctx->pc == 0x219554u) {
        ctx->pc = 0x219554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219550u;
        // 0x219554: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219558u;
        goto label_219558;
    }
    ctx->pc = 0x219550u;
    {
        const bool branch_taken_0x219550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219550u;
        // 0x219554: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219550) {
            ctx->pc = 0x219568u;
            goto label_219568;
        }
    }
    ctx->pc = 0x219558u;
label_219558:
    // 0x219558: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_21955c:
    if (ctx->pc == 0x21955Cu) {
        ctx->pc = 0x21955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219558u;
        // 0x21955c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219560u;
        goto label_219560;
    }
    ctx->pc = 0x219558u;
    {
        const bool branch_taken_0x219558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x219558) {
            ctx->pc = 0x21955Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219558u;
            // 0x21955c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219578u;
            goto label_219578;
        }
    }
    ctx->pc = 0x219560u;
label_219560:
    // 0x219560: 0x10000016  b           . + 4 + (0x16 << 2)
label_219564:
    if (ctx->pc == 0x219564u) {
        ctx->pc = 0x219568u;
        goto label_219568;
    }
    ctx->pc = 0x219560u;
    {
        const bool branch_taken_0x219560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219560) {
            ctx->pc = 0x2195BCu;
            goto label_2195bc;
        }
    }
    ctx->pc = 0x219568u;
label_219568:
    // 0x219568: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
label_21956c:
    if (ctx->pc == 0x21956Cu) {
        ctx->pc = 0x21956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219568u;
        // 0x21956c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219570u;
        goto label_219570;
    }
    ctx->pc = 0x219568u;
    {
        const bool branch_taken_0x219568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x219568) {
            ctx->pc = 0x21956Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219568u;
            // 0x21956c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2195A8u;
            goto label_2195a8;
        }
    }
    ctx->pc = 0x219570u;
label_219570:
    // 0x219570: 0x10000012  b           . + 4 + (0x12 << 2)
label_219574:
    if (ctx->pc == 0x219574u) {
        ctx->pc = 0x219578u;
        goto label_219578;
    }
    ctx->pc = 0x219570u;
    {
        const bool branch_taken_0x219570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219570) {
            ctx->pc = 0x2195BCu;
            goto label_2195bc;
        }
    }
    ctx->pc = 0x219578u;
label_219578:
    // 0x219578: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x219578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21957c:
    // 0x21957c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21957cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219580:
    // 0x219580: 0x0  nop
    ctx->pc = 0x219580u;
    // NOP
label_219584:
    // 0x219584: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x219584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_219588:
    // 0x219588: 0x1000000c  b           . + 4 + (0xC << 2)
label_21958c:
    if (ctx->pc == 0x21958Cu) {
        ctx->pc = 0x21958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219588u;
        // 0x21958c: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219590u;
        goto label_219590;
    }
    ctx->pc = 0x219588u;
    {
        const bool branch_taken_0x219588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219588u;
        // 0x21958c: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219588) {
            ctx->pc = 0x2195BCu;
            goto label_2195bc;
        }
    }
    ctx->pc = 0x219590u;
label_219590:
    // 0x219590: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x219590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_219594:
    // 0x219594: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x219594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219598:
    // 0x219598: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x219598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_21959c:
    // 0x21959c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x21959cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2195a0:
    // 0x2195a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2195a4:
    if (ctx->pc == 0x2195A4u) {
        ctx->pc = 0x2195A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2195A0u;
        // 0x2195a4: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2195A8u;
        goto label_2195a8;
    }
    ctx->pc = 0x2195A0u;
    {
        const bool branch_taken_0x2195a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2195A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2195A0u;
        // 0x2195a4: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2195a0) {
            ctx->pc = 0x2195BCu;
            goto label_2195bc;
        }
    }
    ctx->pc = 0x2195A8u;
label_2195a8:
    // 0x2195a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2195a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2195ac:
    // 0x2195ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2195acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2195b0:
    // 0x2195b0: 0x0  nop
    ctx->pc = 0x2195b0u;
    // NOP
label_2195b4:
    // 0x2195b4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2195b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2195b8:
    // 0x2195b8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2195b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_2195bc:
    // 0x2195bc: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x2195bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2195c0:
    // 0x2195c0: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x2195c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2195c4:
    // 0x2195c4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2195c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2195c8:
    // 0x2195c8: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x2195c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2195cc:
    // 0x2195cc: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x2195ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2195d0:
    // 0x2195d0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2195d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_2195d4:
    // 0x2195d4: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x2195d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2195d8:
    // 0x2195d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2195d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2195dc:
    // 0x2195dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2195dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2195e0:
    // 0x2195e0: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x2195e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2195e4:
    // 0x2195e4: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x2195e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2195e8:
    // 0x2195e8: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2195e8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_2195ec:
    // 0x2195ec: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2195ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2195f0:
    // 0x2195f0: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2195f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2195f4:
    // 0x2195f4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2195f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2195f8:
    // 0x2195f8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2195f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2195fc:
    // 0x2195fc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2195fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219600:
    // 0x219600: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x219600u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_219604:
    // 0x219604: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x219604u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_219608:
    // 0x219608: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x219608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_21960c:
    // 0x21960c: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x21960cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_219610:
    // 0x219610: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x219610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_219614:
    // 0x219614: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x219614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_219618:
    // 0x219618: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x219618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_21961c:
    // 0x21961c: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x21961cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_219620:
    // 0x219620: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x219620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_219624:
    // 0x219624: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x219624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_219628:
    // 0x219628: 0x40f809  jalr        $v0
label_21962c:
    if (ctx->pc == 0x21962Cu) {
        ctx->pc = 0x21962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219628u;
        // 0x21962c: 0x8ea40028  lw          $a0, 0x28($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219630u;
        goto label_219630;
    }
    ctx->pc = 0x219628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x219630u);
        ctx->pc = 0x21962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219628u;
        // 0x21962c: 0x8ea40028  lw          $a0, 0x28($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219628u, 0x219630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x219630u;
label_219630:
    // 0x219630: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x219630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219634:
    // 0x219634: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x219634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_219638:
    // 0x219638: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x219638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_21963c:
    // 0x21963c: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x21963cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_219640:
    // 0x219640: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x219640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_219644:
    // 0x219644: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x219644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219648:
    // 0x219648: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x219648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21964c:
    // 0x21964c: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x21964cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_219650:
    // 0x219650: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x219650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219654:
    // 0x219654: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x219654u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_219658:
    // 0x219658: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x219658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21965c:
    // 0x21965c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x21965cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_219660:
    // 0x219660: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x219660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_219664:
    // 0x219664: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x219664u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_219668:
    // 0x219668: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x219668u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_21966c:
    // 0x21966c: 0xc086ada  jal         func_21AB68
label_219670:
    if (ctx->pc == 0x219670u) {
        ctx->pc = 0x219670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21966Cu;
        // 0x219670: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x219674u;
        goto label_219674;
    }
    ctx->pc = 0x21966Cu;
    SET_GPR_U32(ctx, 31, 0x219674u);
    ctx->pc = 0x219670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21966Cu;
    // 0x219670: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AB68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AB68u, 0x21966Cu, 0x219674u)) {
        return;
    }
    ctx->pc = 0x219674u;
label_219674:
    // 0x219674: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x219674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_219678:
    // 0x219678: 0xc086c6c  jal         func_21B1B0
label_21967c:
    if (ctx->pc == 0x21967Cu) {
        ctx->pc = 0x21967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219678u;
        // 0x21967c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219680u;
        goto label_219680;
    }
    ctx->pc = 0x219678u;
    SET_GPR_U32(ctx, 31, 0x219680u);
    ctx->pc = 0x21967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219678u;
    // 0x21967c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B1B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B1B0u, 0x219678u, 0x219680u)) {
        return;
    }
    ctx->pc = 0x219680u;
label_219680:
    // 0x219680: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x219680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_219684:
    // 0x219684: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x219684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_219688:
    // 0x219688: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x219688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_21968c:
    // 0x21968c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21968cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219690:
    // 0x219690: 0xc0869d6  jal         func_21A758
label_219694:
    if (ctx->pc == 0x219694u) {
        ctx->pc = 0x219694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219690u;
        // 0x219694: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219698u;
        goto label_219698;
    }
    ctx->pc = 0x219690u;
    SET_GPR_U32(ctx, 31, 0x219698u);
    ctx->pc = 0x219694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219690u;
    // 0x219694: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21A758u, 0x219690u, 0x219698u)) {
        return;
    }
    ctx->pc = 0x219698u;
label_219698:
    // 0x219698: 0xc086c6c  jal         func_21B1B0
label_21969c:
    if (ctx->pc == 0x21969Cu) {
        ctx->pc = 0x21969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219698u;
        // 0x21969c: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2196A0u;
        goto label_2196a0;
    }
    ctx->pc = 0x219698u;
    SET_GPR_U32(ctx, 31, 0x2196A0u);
    ctx->pc = 0x21969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219698u;
    // 0x21969c: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B1B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B1B0u, 0x219698u, 0x2196A0u)) {
        return;
    }
    ctx->pc = 0x2196A0u;
label_2196a0:
    // 0x2196a0: 0xc086c6c  jal         func_21B1B0
label_2196a4:
    if (ctx->pc == 0x2196A4u) {
        ctx->pc = 0x2196A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196A0u;
        // 0x2196a4: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2196A8u;
        goto label_2196a8;
    }
    ctx->pc = 0x2196A0u;
    SET_GPR_U32(ctx, 31, 0x2196A8u);
    ctx->pc = 0x2196A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196A0u;
    // 0x2196a4: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B1B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B1B0u, 0x2196A0u, 0x2196A8u)) {
        return;
    }
    ctx->pc = 0x2196A8u;
label_2196a8:
    // 0x2196a8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_2196ac:
    if (ctx->pc == 0x2196ACu) {
        ctx->pc = 0x2196ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196A8u;
        // 0x2196ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2196B0u;
        goto label_2196b0;
    }
    ctx->pc = 0x2196A8u;
    {
        const bool branch_taken_0x2196a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2196ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196A8u;
        // 0x2196ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2196a8) {
            ctx->pc = 0x2196B8u;
            goto label_2196b8;
        }
    }
    ctx->pc = 0x2196B0u;
label_2196b0:
    // 0x2196b0: 0xc086bd0  jal         func_21AF40
label_2196b4:
    if (ctx->pc == 0x2196B4u) {
        ctx->pc = 0x2196B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196B0u;
        // 0x2196b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2196B8u;
        goto label_2196b8;
    }
    ctx->pc = 0x2196B0u;
    SET_GPR_U32(ctx, 31, 0x2196B8u);
    ctx->pc = 0x2196B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196B0u;
    // 0x2196b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AF40u, 0x2196B0u, 0x2196B8u)) {
        return;
    }
    ctx->pc = 0x2196B8u;
label_2196b8:
    // 0x2196b8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x2196b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_2196bc:
    // 0x2196bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2196bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2196c0:
    // 0x2196c0: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2196c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2196c4:
    // 0x2196c4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2196c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2196c8:
    // 0x2196c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2196c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2196cc:
    // 0x2196cc: 0xc0864d4  jal         func_219350
label_2196d0:
    if (ctx->pc == 0x2196D0u) {
        ctx->pc = 0x2196D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196CCu;
        // 0x2196d0: 0xaea2000c  sw          $v0, 0xC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2196D4u;
        goto label_2196d4;
    }
    ctx->pc = 0x2196CCu;
    SET_GPR_U32(ctx, 31, 0x2196D4u);
    ctx->pc = 0x2196D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196CCu;
    // 0x2196d0: 0xaea2000c  sw          $v0, 0xC($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219350u;
    goto label_219350;
    ctx->pc = 0x2196D4u;
label_2196d4:
    // 0x2196d4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2196d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2196d8:
    // 0x2196d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2196d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2196dc:
    // 0x2196dc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2196dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2196e0:
    // 0x2196e0: 0xc0864d4  jal         func_219350
label_2196e4:
    if (ctx->pc == 0x2196E4u) {
        ctx->pc = 0x2196E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196E0u;
        // 0x2196e4: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2196E8u;
        goto label_2196e8;
    }
    ctx->pc = 0x2196E0u;
    SET_GPR_U32(ctx, 31, 0x2196E8u);
    ctx->pc = 0x2196E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196E0u;
    // 0x2196e4: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219350u;
    goto label_219350;
    ctx->pc = 0x2196E8u;
label_2196e8:
    // 0x2196e8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2196e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2196ec:
    // 0x2196ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2196ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2196f0:
    // 0x2196f0: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2196f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2196f4:
    // 0x2196f4: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2196f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2196f8:
    // 0x2196f8: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2196f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2196fc:
    // 0x2196fc: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2196fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_219700:
    // 0x219700: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x219700u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_219704:
    // 0x219704: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x219704u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_219708:
    // 0x219708: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x219708u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21970c:
    // 0x21970c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x21970cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_219710:
    // 0x219710: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x219710u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_219714:
    // 0x219714: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x219714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_219718:
    // 0x219718: 0x3e00008  jr          $ra
label_21971c:
    if (ctx->pc == 0x21971Cu) {
        ctx->pc = 0x21971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219718u;
        // 0x21971c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219720u;
        goto label_fallthrough_0x219718;
    }
    ctx->pc = 0x219718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219718u;
        // 0x21971c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x219718:
    ctx->pc = 0x219720u;
}
