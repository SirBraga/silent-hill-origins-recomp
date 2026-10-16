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

// Function: sub_001291D0
// Address: 0x1291d0 - 0x1296b8
void sub_001291D0_0x1291d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001291D0_0x1291d0");
#endif

    switch (ctx->pc) {
        case 0x1291d0u: goto label_1291d0;
        case 0x1291d4u: goto label_1291d4;
        case 0x1291d8u: goto label_1291d8;
        case 0x1291dcu: goto label_1291dc;
        case 0x1291e0u: goto label_1291e0;
        case 0x1291e4u: goto label_1291e4;
        case 0x1291e8u: goto label_1291e8;
        case 0x1291ecu: goto label_1291ec;
        case 0x1291f0u: goto label_1291f0;
        case 0x1291f4u: goto label_1291f4;
        case 0x1291f8u: goto label_1291f8;
        case 0x1291fcu: goto label_1291fc;
        case 0x129200u: goto label_129200;
        case 0x129204u: goto label_129204;
        case 0x129208u: goto label_129208;
        case 0x12920cu: goto label_12920c;
        case 0x129210u: goto label_129210;
        case 0x129214u: goto label_129214;
        case 0x129218u: goto label_129218;
        case 0x12921cu: goto label_12921c;
        case 0x129220u: goto label_129220;
        case 0x129224u: goto label_129224;
        case 0x129228u: goto label_129228;
        case 0x12922cu: goto label_12922c;
        case 0x129230u: goto label_129230;
        case 0x129234u: goto label_129234;
        case 0x129238u: goto label_129238;
        case 0x12923cu: goto label_12923c;
        case 0x129240u: goto label_129240;
        case 0x129244u: goto label_129244;
        case 0x129248u: goto label_129248;
        case 0x12924cu: goto label_12924c;
        case 0x129250u: goto label_129250;
        case 0x129254u: goto label_129254;
        case 0x129258u: goto label_129258;
        case 0x12925cu: goto label_12925c;
        case 0x129260u: goto label_129260;
        case 0x129264u: goto label_129264;
        case 0x129268u: goto label_129268;
        case 0x12926cu: goto label_12926c;
        case 0x129270u: goto label_129270;
        case 0x129274u: goto label_129274;
        case 0x129278u: goto label_129278;
        case 0x12927cu: goto label_12927c;
        case 0x129280u: goto label_129280;
        case 0x129284u: goto label_129284;
        case 0x129288u: goto label_129288;
        case 0x12928cu: goto label_12928c;
        case 0x129290u: goto label_129290;
        case 0x129294u: goto label_129294;
        case 0x129298u: goto label_129298;
        case 0x12929cu: goto label_12929c;
        case 0x1292a0u: goto label_1292a0;
        case 0x1292a4u: goto label_1292a4;
        case 0x1292a8u: goto label_1292a8;
        case 0x1292acu: goto label_1292ac;
        case 0x1292b0u: goto label_1292b0;
        case 0x1292b4u: goto label_1292b4;
        case 0x1292b8u: goto label_1292b8;
        case 0x1292bcu: goto label_1292bc;
        case 0x1292c0u: goto label_1292c0;
        case 0x1292c4u: goto label_1292c4;
        case 0x1292c8u: goto label_1292c8;
        case 0x1292ccu: goto label_1292cc;
        case 0x1292d0u: goto label_1292d0;
        case 0x1292d4u: goto label_1292d4;
        case 0x1292d8u: goto label_1292d8;
        case 0x1292dcu: goto label_1292dc;
        case 0x1292e0u: goto label_1292e0;
        case 0x1292e4u: goto label_1292e4;
        case 0x1292e8u: goto label_1292e8;
        case 0x1292ecu: goto label_1292ec;
        case 0x1292f0u: goto label_1292f0;
        case 0x1292f4u: goto label_1292f4;
        case 0x1292f8u: goto label_1292f8;
        case 0x1292fcu: goto label_1292fc;
        case 0x129300u: goto label_129300;
        case 0x129304u: goto label_129304;
        case 0x129308u: goto label_129308;
        case 0x12930cu: goto label_12930c;
        case 0x129310u: goto label_129310;
        case 0x129314u: goto label_129314;
        case 0x129318u: goto label_129318;
        case 0x12931cu: goto label_12931c;
        case 0x129320u: goto label_129320;
        case 0x129324u: goto label_129324;
        case 0x129328u: goto label_129328;
        case 0x12932cu: goto label_12932c;
        case 0x129330u: goto label_129330;
        case 0x129334u: goto label_129334;
        case 0x129338u: goto label_129338;
        case 0x12933cu: goto label_12933c;
        case 0x129340u: goto label_129340;
        case 0x129344u: goto label_129344;
        case 0x129348u: goto label_129348;
        case 0x12934cu: goto label_12934c;
        case 0x129350u: goto label_129350;
        case 0x129354u: goto label_129354;
        case 0x129358u: goto label_129358;
        case 0x12935cu: goto label_12935c;
        case 0x129360u: goto label_129360;
        case 0x129364u: goto label_129364;
        case 0x129368u: goto label_129368;
        case 0x12936cu: goto label_12936c;
        case 0x129370u: goto label_129370;
        case 0x129374u: goto label_129374;
        case 0x129378u: goto label_129378;
        case 0x12937cu: goto label_12937c;
        case 0x129380u: goto label_129380;
        case 0x129384u: goto label_129384;
        case 0x129388u: goto label_129388;
        case 0x12938cu: goto label_12938c;
        case 0x129390u: goto label_129390;
        case 0x129394u: goto label_129394;
        case 0x129398u: goto label_129398;
        case 0x12939cu: goto label_12939c;
        case 0x1293a0u: goto label_1293a0;
        case 0x1293a4u: goto label_1293a4;
        case 0x1293a8u: goto label_1293a8;
        case 0x1293acu: goto label_1293ac;
        case 0x1293b0u: goto label_1293b0;
        case 0x1293b4u: goto label_1293b4;
        case 0x1293b8u: goto label_1293b8;
        case 0x1293bcu: goto label_1293bc;
        case 0x1293c0u: goto label_1293c0;
        case 0x1293c4u: goto label_1293c4;
        case 0x1293c8u: goto label_1293c8;
        case 0x1293ccu: goto label_1293cc;
        case 0x1293d0u: goto label_1293d0;
        case 0x1293d4u: goto label_1293d4;
        case 0x1293d8u: goto label_1293d8;
        case 0x1293dcu: goto label_1293dc;
        case 0x1293e0u: goto label_1293e0;
        case 0x1293e4u: goto label_1293e4;
        case 0x1293e8u: goto label_1293e8;
        case 0x1293ecu: goto label_1293ec;
        case 0x1293f0u: goto label_1293f0;
        case 0x1293f4u: goto label_1293f4;
        case 0x1293f8u: goto label_1293f8;
        case 0x1293fcu: goto label_1293fc;
        case 0x129400u: goto label_129400;
        case 0x129404u: goto label_129404;
        case 0x129408u: goto label_129408;
        case 0x12940cu: goto label_12940c;
        case 0x129410u: goto label_129410;
        case 0x129414u: goto label_129414;
        case 0x129418u: goto label_129418;
        case 0x12941cu: goto label_12941c;
        case 0x129420u: goto label_129420;
        case 0x129424u: goto label_129424;
        case 0x129428u: goto label_129428;
        case 0x12942cu: goto label_12942c;
        case 0x129430u: goto label_129430;
        case 0x129434u: goto label_129434;
        case 0x129438u: goto label_129438;
        case 0x12943cu: goto label_12943c;
        case 0x129440u: goto label_129440;
        case 0x129444u: goto label_129444;
        case 0x129448u: goto label_129448;
        case 0x12944cu: goto label_12944c;
        case 0x129450u: goto label_129450;
        case 0x129454u: goto label_129454;
        case 0x129458u: goto label_129458;
        case 0x12945cu: goto label_12945c;
        case 0x129460u: goto label_129460;
        case 0x129464u: goto label_129464;
        case 0x129468u: goto label_129468;
        case 0x12946cu: goto label_12946c;
        case 0x129470u: goto label_129470;
        case 0x129474u: goto label_129474;
        case 0x129478u: goto label_129478;
        case 0x12947cu: goto label_12947c;
        case 0x129480u: goto label_129480;
        case 0x129484u: goto label_129484;
        case 0x129488u: goto label_129488;
        case 0x12948cu: goto label_12948c;
        case 0x129490u: goto label_129490;
        case 0x129494u: goto label_129494;
        case 0x129498u: goto label_129498;
        case 0x12949cu: goto label_12949c;
        case 0x1294a0u: goto label_1294a0;
        case 0x1294a4u: goto label_1294a4;
        case 0x1294a8u: goto label_1294a8;
        case 0x1294acu: goto label_1294ac;
        case 0x1294b0u: goto label_1294b0;
        case 0x1294b4u: goto label_1294b4;
        case 0x1294b8u: goto label_1294b8;
        case 0x1294bcu: goto label_1294bc;
        case 0x1294c0u: goto label_1294c0;
        case 0x1294c4u: goto label_1294c4;
        case 0x1294c8u: goto label_1294c8;
        case 0x1294ccu: goto label_1294cc;
        case 0x1294d0u: goto label_1294d0;
        case 0x1294d4u: goto label_1294d4;
        case 0x1294d8u: goto label_1294d8;
        case 0x1294dcu: goto label_1294dc;
        case 0x1294e0u: goto label_1294e0;
        case 0x1294e4u: goto label_1294e4;
        case 0x1294e8u: goto label_1294e8;
        case 0x1294ecu: goto label_1294ec;
        case 0x1294f0u: goto label_1294f0;
        case 0x1294f4u: goto label_1294f4;
        case 0x1294f8u: goto label_1294f8;
        case 0x1294fcu: goto label_1294fc;
        case 0x129500u: goto label_129500;
        case 0x129504u: goto label_129504;
        case 0x129508u: goto label_129508;
        case 0x12950cu: goto label_12950c;
        case 0x129510u: goto label_129510;
        case 0x129514u: goto label_129514;
        case 0x129518u: goto label_129518;
        case 0x12951cu: goto label_12951c;
        case 0x129520u: goto label_129520;
        case 0x129524u: goto label_129524;
        case 0x129528u: goto label_129528;
        case 0x12952cu: goto label_12952c;
        case 0x129530u: goto label_129530;
        case 0x129534u: goto label_129534;
        case 0x129538u: goto label_129538;
        case 0x12953cu: goto label_12953c;
        case 0x129540u: goto label_129540;
        case 0x129544u: goto label_129544;
        case 0x129548u: goto label_129548;
        case 0x12954cu: goto label_12954c;
        case 0x129550u: goto label_129550;
        case 0x129554u: goto label_129554;
        case 0x129558u: goto label_129558;
        case 0x12955cu: goto label_12955c;
        case 0x129560u: goto label_129560;
        case 0x129564u: goto label_129564;
        case 0x129568u: goto label_129568;
        case 0x12956cu: goto label_12956c;
        case 0x129570u: goto label_129570;
        case 0x129574u: goto label_129574;
        case 0x129578u: goto label_129578;
        case 0x12957cu: goto label_12957c;
        case 0x129580u: goto label_129580;
        case 0x129584u: goto label_129584;
        case 0x129588u: goto label_129588;
        case 0x12958cu: goto label_12958c;
        case 0x129590u: goto label_129590;
        case 0x129594u: goto label_129594;
        case 0x129598u: goto label_129598;
        case 0x12959cu: goto label_12959c;
        case 0x1295a0u: goto label_1295a0;
        case 0x1295a4u: goto label_1295a4;
        case 0x1295a8u: goto label_1295a8;
        case 0x1295acu: goto label_1295ac;
        case 0x1295b0u: goto label_1295b0;
        case 0x1295b4u: goto label_1295b4;
        case 0x1295b8u: goto label_1295b8;
        case 0x1295bcu: goto label_1295bc;
        case 0x1295c0u: goto label_1295c0;
        case 0x1295c4u: goto label_1295c4;
        case 0x1295c8u: goto label_1295c8;
        case 0x1295ccu: goto label_1295cc;
        case 0x1295d0u: goto label_1295d0;
        case 0x1295d4u: goto label_1295d4;
        case 0x1295d8u: goto label_1295d8;
        case 0x1295dcu: goto label_1295dc;
        case 0x1295e0u: goto label_1295e0;
        case 0x1295e4u: goto label_1295e4;
        case 0x1295e8u: goto label_1295e8;
        case 0x1295ecu: goto label_1295ec;
        case 0x1295f0u: goto label_1295f0;
        case 0x1295f4u: goto label_1295f4;
        case 0x1295f8u: goto label_1295f8;
        case 0x1295fcu: goto label_1295fc;
        case 0x129600u: goto label_129600;
        case 0x129604u: goto label_129604;
        case 0x129608u: goto label_129608;
        case 0x12960cu: goto label_12960c;
        case 0x129610u: goto label_129610;
        case 0x129614u: goto label_129614;
        case 0x129618u: goto label_129618;
        case 0x12961cu: goto label_12961c;
        case 0x129620u: goto label_129620;
        case 0x129624u: goto label_129624;
        case 0x129628u: goto label_129628;
        case 0x12962cu: goto label_12962c;
        case 0x129630u: goto label_129630;
        case 0x129634u: goto label_129634;
        case 0x129638u: goto label_129638;
        case 0x12963cu: goto label_12963c;
        case 0x129640u: goto label_129640;
        case 0x129644u: goto label_129644;
        case 0x129648u: goto label_129648;
        case 0x12964cu: goto label_12964c;
        case 0x129650u: goto label_129650;
        case 0x129654u: goto label_129654;
        case 0x129658u: goto label_129658;
        case 0x12965cu: goto label_12965c;
        case 0x129660u: goto label_129660;
        case 0x129664u: goto label_129664;
        case 0x129668u: goto label_129668;
        case 0x12966cu: goto label_12966c;
        case 0x129670u: goto label_129670;
        case 0x129674u: goto label_129674;
        case 0x129678u: goto label_129678;
        case 0x12967cu: goto label_12967c;
        case 0x129680u: goto label_129680;
        case 0x129684u: goto label_129684;
        case 0x129688u: goto label_129688;
        case 0x12968cu: goto label_12968c;
        case 0x129690u: goto label_129690;
        case 0x129694u: goto label_129694;
        case 0x129698u: goto label_129698;
        case 0x12969cu: goto label_12969c;
        case 0x1296a0u: goto label_1296a0;
        case 0x1296a4u: goto label_1296a4;
        case 0x1296a8u: goto label_1296a8;
        case 0x1296acu: goto label_1296ac;
        case 0x1296b0u: goto label_1296b0;
        case 0x1296b4u: goto label_1296b4;
        default: break;
    }

    ctx->pc = 0x1291d0u;

label_1291d0:
    // 0x1291d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1291d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1291d4:
    // 0x1291d4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1291d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1291d8:
    // 0x1291d8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1291d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1291dc:
    // 0x1291dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1291dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1291e0:
    // 0x1291e0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1291e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1291e4:
    // 0x1291e4: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x1291e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1291e8:
    // 0x1291e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1291e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1291ec:
    // 0x1291ec: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1291ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1291f0:
    // 0x1291f0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1291f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1291f4:
    // 0x1291f4: 0xc0483e6  jal         func_120F98
label_1291f8:
    if (ctx->pc == 0x1291F8u) {
        ctx->pc = 0x1291F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1291F4u;
        // 0x1291f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1291FCu;
        goto label_1291fc;
    }
    ctx->pc = 0x1291F4u;
    SET_GPR_U32(ctx, 31, 0x1291FCu);
    ctx->pc = 0x1291F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1291F4u;
    // 0x1291f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120F98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x120F98u, 0x1291F4u, 0x1291FCu)) {
        return;
    }
    ctx->pc = 0x1291FCu;
label_1291fc:
    // 0x1291fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1291fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_129200:
    // 0x129200: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x129200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_129204:
    // 0x129204: 0x8c4345e8  lw          $v1, 0x45E8($v0)
    ctx->pc = 0x129204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17896)));
label_129208:
    // 0x129208: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
label_12920c:
    if (ctx->pc == 0x12920Cu) {
        ctx->pc = 0x12920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129208u;
        // 0x12920c: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129210u;
        goto label_129210;
    }
    ctx->pc = 0x129208u;
    {
        const bool branch_taken_0x129208 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x12920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129208u;
        // 0x12920c: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129208) {
            ctx->pc = 0x129218u;
            goto label_129218;
        }
    }
    ctx->pc = 0x129210u;
label_129210:
    // 0x129210: 0x10000122  b           . + 4 + (0x122 << 2)
label_129214:
    if (ctx->pc == 0x129214u) {
        ctx->pc = 0x129214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129210u;
        // 0x129214: 0xae320004  sw          $s2, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129218u;
        goto label_129218;
    }
    ctx->pc = 0x129210u;
    {
        const bool branch_taken_0x129210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129210u;
        // 0x129214: 0xae320004  sw          $s2, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129210) {
            ctx->pc = 0x12969Cu;
            goto label_12969c;
        }
    }
    ctx->pc = 0x129218u;
label_129218:
    // 0x129218: 0x8c43bcf0  lw          $v1, -0x4310($v0)
    ctx->pc = 0x129218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950128)));
label_12921c:
    // 0x12921c: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
label_129220:
    if (ctx->pc == 0x129220u) {
        ctx->pc = 0x129220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12921Cu;
        // 0x129220: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129224u;
        goto label_129224;
    }
    ctx->pc = 0x12921Cu;
    {
        const bool branch_taken_0x12921c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x129220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12921Cu;
        // 0x129220: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12921c) {
            ctx->pc = 0x129230u;
            goto label_129230;
        }
    }
    ctx->pc = 0x129224u;
label_129224:
    // 0x129224: 0xae40284c  sw          $zero, 0x284C($s2)
    ctx->pc = 0x129224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10316), GPR_U32(ctx, 0));
label_129228:
    // 0x129228: 0x1000011c  b           . + 4 + (0x11C << 2)
label_12922c:
    if (ctx->pc == 0x12922Cu) {
        ctx->pc = 0x12922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129228u;
        // 0x12922c: 0xae000d10  sw          $zero, 0xD10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129230u;
        goto label_129230;
    }
    ctx->pc = 0x129228u;
    {
        const bool branch_taken_0x129228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129228u;
        // 0x12922c: 0xae000d10  sw          $zero, 0xD10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129228) {
            ctx->pc = 0x12969Cu;
            goto label_12969c;
        }
    }
    ctx->pc = 0x129230u;
label_129230:
    // 0x129230: 0x8c438188  lw          $v1, -0x7E78($v0)
    ctx->pc = 0x129230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934920)));
label_129234:
    // 0x129234: 0x14c30020  bne         $a2, $v1, . + 4 + (0x20 << 2)
label_129238:
    if (ctx->pc == 0x129238u) {
        ctx->pc = 0x129238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129234u;
        // 0x129238: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12923Cu;
        goto label_12923c;
    }
    ctx->pc = 0x129234u;
    {
        const bool branch_taken_0x129234 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x129238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129234u;
        // 0x129238: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129234) {
            ctx->pc = 0x1292B8u;
            goto label_1292b8;
        }
    }
    ctx->pc = 0x12923Cu;
label_12923c:
    // 0x12923c: 0xc0691ec  jal         func_1A47B0
label_129240:
    if (ctx->pc == 0x129240u) {
        ctx->pc = 0x129244u;
        goto label_129244;
    }
    ctx->pc = 0x12923Cu;
    SET_GPR_U32(ctx, 31, 0x129244u);
    ctx->pc = 0x1A47B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A47B0u, 0x12923Cu, 0x129244u)) {
        return;
    }
    ctx->pc = 0x129244u;
label_129244:
    // 0x129244: 0x8e4528c4  lw          $a1, 0x28C4($s2)
    ctx->pc = 0x129244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10436)));
label_129248:
    // 0x129248: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12924c:
    // 0x12924c: 0xc0692d4  jal         func_1A4B50
label_129250:
    if (ctx->pc == 0x129250u) {
        ctx->pc = 0x129250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12924Cu;
        // 0x129250: 0x8e4628c8  lw          $a2, 0x28C8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129254u;
        goto label_129254;
    }
    ctx->pc = 0x12924Cu;
    SET_GPR_U32(ctx, 31, 0x129254u);
    ctx->pc = 0x129250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12924Cu;
    // 0x129250: 0x8e4628c8  lw          $a2, 0x28C8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4B50u, 0x12924Cu, 0x129254u)) {
        return;
    }
    ctx->pc = 0x129254u;
label_129254:
    // 0x129254: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x129254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129258:
    // 0x129258: 0x52000111  beql        $s0, $zero, . + 4 + (0x111 << 2)
label_12925c:
    if (ctx->pc == 0x12925Cu) {
        ctx->pc = 0x12925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129258u;
        // 0x12925c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129260u;
        goto label_129260;
    }
    ctx->pc = 0x129258u;
    {
        const bool branch_taken_0x129258 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x129258) {
            ctx->pc = 0x12925Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129258u;
            // 0x12925c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1296A0u;
            goto label_1296a0;
        }
    }
    ctx->pc = 0x129260u;
label_129260:
    // 0x129260: 0xc04f0cc  jal         func_13C330
label_129264:
    if (ctx->pc == 0x129264u) {
        ctx->pc = 0x129264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129260u;
        // 0x129264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129268u;
        goto label_129268;
    }
    ctx->pc = 0x129260u;
    SET_GPR_U32(ctx, 31, 0x129268u);
    ctx->pc = 0x129264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129260u;
    // 0x129264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x129260u, 0x129268u)) {
        return;
    }
    ctx->pc = 0x129268u;
label_129268:
    // 0x129268: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x129268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_12926c:
    // 0x12926c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x12926cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_129270:
    // 0x129270: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x129270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_129274:
    // 0x129274: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x129274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_129278:
    // 0x129278: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x129278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12927c:
    // 0x12927c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12927cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129280:
    // 0x129280: 0xc04f0f0  jal         func_13C3C0
label_129284:
    if (ctx->pc == 0x129284u) {
        ctx->pc = 0x129284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129280u;
        // 0x129284: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129288u;
        goto label_129288;
    }
    ctx->pc = 0x129280u;
    SET_GPR_U32(ctx, 31, 0x129288u);
    ctx->pc = 0x129284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129280u;
    // 0x129284: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x129280u, 0x129288u)) {
        return;
    }
    ctx->pc = 0x129288u;
label_129288:
    // 0x129288: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x129288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12928c:
    // 0x12928c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12928cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_129290:
    // 0x129290: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x129290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_129294:
    // 0x129294: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x129294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_129298:
    // 0x129298: 0x8c490008  lw          $t1, 0x8($v0)
    ctx->pc = 0x129298u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_12929c:
    // 0x12929c: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x12929cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1292a0:
    // 0x1292a0: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x1292a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1292a4:
    // 0x1292a4: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x1292a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
label_1292a8:
    // 0x1292a8: 0xc04a5ae  jal         func_1296B8
label_1292ac:
    if (ctx->pc == 0x1292ACu) {
        ctx->pc = 0x1292ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292A8u;
        // 0x1292ac: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1292B0u;
        goto label_1292b0;
    }
    ctx->pc = 0x1292A8u;
    SET_GPR_U32(ctx, 31, 0x1292B0u);
    ctx->pc = 0x1292ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1292A8u;
    // 0x1292ac: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1296B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1296B8u, 0x1292A8u, 0x1292B0u)) {
        return;
    }
    ctx->pc = 0x1292B0u;
label_1292b0:
    // 0x1292b0: 0x100000fb  b           . + 4 + (0xFB << 2)
label_1292b4:
    if (ctx->pc == 0x1292B4u) {
        ctx->pc = 0x1292B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292B0u;
        // 0x1292b4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1292B8u;
        goto label_1292b8;
    }
    ctx->pc = 0x1292B0u;
    {
        const bool branch_taken_0x1292b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1292B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292B0u;
        // 0x1292b4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292b0) {
            ctx->pc = 0x1296A0u;
            goto label_1296a0;
        }
    }
    ctx->pc = 0x1292B8u;
label_1292b8:
    // 0x1292b8: 0x8c43bcf8  lw          $v1, -0x4308($v0)
    ctx->pc = 0x1292b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
label_1292bc:
    // 0x1292bc: 0x14c300aa  bne         $a2, $v1, . + 4 + (0xAA << 2)
label_1292c0:
    if (ctx->pc == 0x1292C0u) {
        ctx->pc = 0x1292C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292BCu;
        // 0x1292c0: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1292C4u;
        goto label_1292c4;
    }
    ctx->pc = 0x1292BCu;
    {
        const bool branch_taken_0x1292bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1292C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292BCu;
        // 0x1292c0: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292bc) {
            ctx->pc = 0x129568u;
            goto label_129568;
        }
    }
    ctx->pc = 0x1292C4u;
label_1292c4:
    // 0x1292c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1292c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1292c8:
    // 0x1292c8: 0xae43284c  sw          $v1, 0x284C($s2)
    ctx->pc = 0x1292c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10316), GPR_U32(ctx, 3));
label_1292cc:
    // 0x1292cc: 0xae030d10  sw          $v1, 0xD10($s0)
    ctx->pc = 0x1292ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3344), GPR_U32(ctx, 3));
label_1292d0:
    // 0x1292d0: 0x8e020198  lw          $v0, 0x198($s0)
    ctx->pc = 0x1292d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
label_1292d4:
    // 0x1292d4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1292d8:
    if (ctx->pc == 0x1292D8u) {
        ctx->pc = 0x1292D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292D4u;
        // 0x1292d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1292DCu;
        goto label_1292dc;
    }
    ctx->pc = 0x1292D4u;
    {
        const bool branch_taken_0x1292d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1292D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292D4u;
        // 0x1292d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292d4) {
            ctx->pc = 0x129324u;
            goto label_129324;
        }
    }
    ctx->pc = 0x1292DCu;
label_1292dc:
    // 0x1292dc: 0xc040688  jal         func_101A20
label_1292e0:
    if (ctx->pc == 0x1292E0u) {
        ctx->pc = 0x1292E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292DCu;
        // 0x1292e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1292E4u;
        goto label_1292e4;
    }
    ctx->pc = 0x1292DCu;
    SET_GPR_U32(ctx, 31, 0x1292E4u);
    ctx->pc = 0x1292E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1292DCu;
    // 0x1292e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x1292DCu, 0x1292E4u)) {
        return;
    }
    ctx->pc = 0x1292E4u;
label_1292e4:
    // 0x1292e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1292e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1292e8:
    // 0x1292e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1292e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1292ec:
    // 0x1292ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1292ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1292f0:
    // 0x1292f0: 0x5082000d  beql        $a0, $v0, . + 4 + (0xD << 2)
label_1292f4:
    if (ctx->pc == 0x1292F4u) {
        ctx->pc = 0x1292F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292F0u;
        // 0x1292f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1292F8u;
        goto label_1292f8;
    }
    ctx->pc = 0x1292F0u;
    {
        const bool branch_taken_0x1292f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1292f0) {
            ctx->pc = 0x1292F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1292F0u;
            // 0x1292f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129328u;
            goto label_129328;
        }
    }
    ctx->pc = 0x1292F8u;
label_1292f8:
    // 0x1292f8: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x1292f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
label_1292fc:
    // 0x1292fc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1292fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_129300:
    // 0x129300: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x129300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_129304:
    // 0x129304: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x129304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_129308:
    // 0x129308: 0x10000007  b           . + 4 + (0x7 << 2)
label_12930c:
    if (ctx->pc == 0x12930Cu) {
        ctx->pc = 0x12930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129308u;
        // 0x12930c: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129310u;
        goto label_129310;
    }
    ctx->pc = 0x129308u;
    {
        const bool branch_taken_0x129308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129308u;
        // 0x12930c: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129308) {
            ctx->pc = 0x129328u;
            goto label_129328;
        }
    }
    ctx->pc = 0x129310u;
label_129310:
    // 0x129310: 0x0  nop
    ctx->pc = 0x129310u;
    // NOP
label_129314:
    // 0x129314: 0x0  nop
    ctx->pc = 0x129314u;
    // NOP
label_129318:
    // 0x129318: 0x4602a103  div.s       $f4, $f20, $f2
    ctx->pc = 0x129318u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[2]);
label_12931c:
    // 0x12931c: 0x10000064  b           . + 4 + (0x64 << 2)
label_129320:
    if (ctx->pc == 0x129320u) {
        ctx->pc = 0x129320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12931Cu;
        // 0x129320: 0xc7a20060  lwc1        $f2, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x129324u;
        goto label_129324;
    }
    ctx->pc = 0x12931Cu;
    {
        const bool branch_taken_0x12931c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12931Cu;
        // 0x129320: 0xc7a20060  lwc1        $f2, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12931c) {
            ctx->pc = 0x1294B0u;
            goto label_1294b0;
        }
    }
    ctx->pc = 0x129324u;
label_129324:
    // 0x129324: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x129324u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_129328:
    // 0x129328: 0x106000dc  beqz        $v1, . + 4 + (0xDC << 2)
label_12932c:
    if (ctx->pc == 0x12932Cu) {
        ctx->pc = 0x12932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129328u;
        // 0x12932c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129330u;
        goto label_129330;
    }
    ctx->pc = 0x129328u;
    {
        const bool branch_taken_0x129328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129328u;
        // 0x12932c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129328) {
            ctx->pc = 0x12969Cu;
            goto label_12969c;
        }
    }
    ctx->pc = 0x129330u;
label_129330:
    // 0x129330: 0xc4690008  lwc1        $f9, 0x8($v1)
    ctx->pc = 0x129330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_129334:
    // 0x129334: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x129334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_129338:
    // 0x129338: 0x46094882  mul.s       $f2, $f9, $f9
    ctx->pc = 0x129338u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
label_12933c:
    // 0x12933c: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x12933cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129340:
    // 0x129340: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x129340u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_129344:
    // 0x129344: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x129344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129348:
    // 0x129348: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x129348u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_12934c:
    // 0x12934c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x12934cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_129350:
    // 0x129350: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x129350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_129354:
    // 0x129354: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x129354u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_129358:
    // 0x129358: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x129358u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_12935c:
    // 0x12935c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x12935cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_129360:
    // 0x129360: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x129360u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_129364:
    // 0x129364: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x129364u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[0]);
label_129368:
    // 0x129368: 0x46044a42  mul.s       $f9, $f9, $f4
    ctx->pc = 0x129368u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
label_12936c:
    // 0x12936c: 0xe7a90000  swc1        $f9, 0x0($sp)
    ctx->pc = 0x12936cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_129370:
    // 0x129370: 0xc468000c  lwc1        $f8, 0xC($v1)
    ctx->pc = 0x129370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_129374:
    // 0x129374: 0x46044202  mul.s       $f8, $f8, $f4
    ctx->pc = 0x129374u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
label_129378:
    // 0x129378: 0xe7a80004  swc1        $f8, 0x4($sp)
    ctx->pc = 0x129378u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_12937c:
    // 0x12937c: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x12937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_129380:
    // 0x129380: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x129380u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_129384:
    // 0x129384: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x129384u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_129388:
    // 0x129388: 0xc4650014  lwc1        $f5, 0x14($v1)
    ctx->pc = 0x129388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_12938c:
    // 0x12938c: 0x46054942  mul.s       $f5, $f9, $f5
    ctx->pc = 0x12938cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
label_129390:
    // 0x129390: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x129390u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_129394:
    // 0x129394: 0xc4660014  lwc1        $f6, 0x14($v1)
    ctx->pc = 0x129394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_129398:
    // 0x129398: 0x46064182  mul.s       $f6, $f8, $f6
    ctx->pc = 0x129398u;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
label_12939c:
    // 0x12939c: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x12939cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1293a0:
    // 0x1293a0: 0xc4670014  lwc1        $f7, 0x14($v1)
    ctx->pc = 0x1293a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1293a4:
    // 0x1293a4: 0x460719c2  mul.s       $f7, $f3, $f7
    ctx->pc = 0x1293a4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
label_1293a8:
    // 0x1293a8: 0xe7a70018  swc1        $f7, 0x18($sp)
    ctx->pc = 0x1293a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1293ac:
    // 0x1293ac: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x1293acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1293b0:
    // 0x1293b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1293b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1293b4:
    // 0x1293b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1293b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1293b8:
    // 0x1293b8: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x1293b8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
label_1293bc:
    // 0x1293bc: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x1293bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1293c0:
    // 0x1293c0: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x1293c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1293c4:
    // 0x1293c4: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x1293c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
label_1293c8:
    // 0x1293c8: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1293c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1293cc:
    // 0x1293cc: 0x46022280  add.s       $f10, $f4, $f2
    ctx->pc = 0x1293ccu;
    ctx->f[10] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_1293d0:
    // 0x1293d0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1293d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1293d4:
    // 0x1293d4: 0x460aa281  sub.s       $f10, $f20, $f10
    ctx->pc = 0x1293d4u;
    ctx->f[10] = FPU_SUB_S(ctx->f[20], ctx->f[10]);
label_1293d8:
    // 0x1293d8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1293d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1293dc:
    // 0x1293dc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1293dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1293e0:
    // 0x1293e0: 0x46040100  add.s       $f4, $f0, $f4
    ctx->pc = 0x1293e0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1293e4:
    // 0x1293e4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1293e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1293e8:
    // 0x1293e8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1293e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1293ec:
    // 0x1293ec: 0x4604a101  sub.s       $f4, $f20, $f4
    ctx->pc = 0x1293ecu;
    ctx->f[4] = FPU_SUB_S(ctx->f[20], ctx->f[4]);
label_1293f0:
    // 0x1293f0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1293f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1293f4:
    // 0x1293f4: 0x4602a081  sub.s       $f2, $f20, $f2
    ctx->pc = 0x1293f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_1293f8:
    // 0x1293f8: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1293f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1293fc:
    // 0x1293fc: 0x46050ac1  sub.s       $f11, $f1, $f5
    ctx->pc = 0x1293fcu;
    ctx->f[11] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_129400:
    // 0x129400: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x129400u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_129404:
    // 0x129404: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x129404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129408:
    // 0x129408: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x129408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_12940c:
    // 0x12940c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x12940cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_129410:
    // 0x129410: 0x46060140  add.s       $f5, $f0, $f6
    ctx->pc = 0x129410u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_129414:
    // 0x129414: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x129414u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_129418:
    // 0x129418: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x129418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12941c:
    // 0x12941c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x12941cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_129420:
    // 0x129420: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x129420u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
label_129424:
    // 0x129424: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x129424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_129428:
    // 0x129428: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x129428u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_12942c:
    // 0x12942c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x12942cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_129430:
    // 0x129430: 0x46071801  sub.s       $f0, $f3, $f7
    ctx->pc = 0x129430u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
label_129434:
    // 0x129434: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x129434u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_129438:
    // 0x129438: 0x460719c0  add.s       $f7, $f3, $f7
    ctx->pc = 0x129438u;
    ctx->f[7] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
label_12943c:
    // 0x12943c: 0xe7ab0044  swc1        $f11, 0x44($sp)
    ctx->pc = 0x12943cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_129440:
    // 0x129440: 0xe7aa0048  swc1        $f10, 0x48($sp)
    ctx->pc = 0x129440u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_129444:
    // 0x129444: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x129444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_129448:
    // 0x129448: 0xe7a70024  swc1        $f7, 0x24($sp)
    ctx->pc = 0x129448u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_12944c:
    // 0x12944c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x12944cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_129450:
    // 0x129450: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x129450u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_129454:
    // 0x129454: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x129454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_129458:
    // 0x129458: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x129458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_12945c:
    // 0x12945c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x12945cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_129460:
    // 0x129460: 0x6ba80047  ldl         $t0, 0x47($sp)
    ctx->pc = 0x129460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_129464:
    // 0x129464: 0x6fa80040  ldr         $t0, 0x40($sp)
    ctx->pc = 0x129464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_129468:
    // 0x129468: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x129468u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12946c:
    // 0x12946c: 0xb3a80067  sdl         $t0, 0x67($sp)
    ctx->pc = 0x12946cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_129470:
    // 0x129470: 0xb7a80060  sdr         $t0, 0x60($sp)
    ctx->pc = 0x129470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_129474:
    // 0x129474: 0xafa90068  sw          $t1, 0x68($sp)
    ctx->pc = 0x129474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 9));
label_129478:
    // 0x129478: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x129478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_12947c:
    // 0x12947c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x12947cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_129480:
    // 0x129480: 0xc04642c  jal         func_1190B0
label_129484:
    if (ctx->pc == 0x129484u) {
        ctx->pc = 0x129484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129480u;
        // 0x129484: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129488u;
        goto label_129488;
    }
    ctx->pc = 0x129480u;
    SET_GPR_U32(ctx, 31, 0x129488u);
    ctx->pc = 0x129484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129480u;
    // 0x129484: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x129480u, 0x129488u)) {
        return;
    }
    ctx->pc = 0x129488u;
label_129488:
    // 0x129488: 0x0  nop
    ctx->pc = 0x129488u;
    // NOP
label_12948c:
    // 0x12948c: 0x0  nop
    ctx->pc = 0x12948cu;
    // NOP
label_129490:
    // 0x129490: 0x46000084  c1          0x84
    ctx->pc = 0x129490u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_129494:
    // 0x129494: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x129494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129498:
    // 0x129498: 0x0  nop
    ctx->pc = 0x129498u;
    // NOP
label_12949c:
    // 0x12949c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x12949cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1294a0:
    // 0x1294a0: 0x0  nop
    ctx->pc = 0x1294a0u;
    // NOP
label_1294a4:
    // 0x1294a4: 0x4501ff9a  bc1t        . + 4 + (-0x66 << 2)
label_1294a8:
    if (ctx->pc == 0x1294A8u) {
        ctx->pc = 0x1294A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1294A4u;
        // 0x1294a8: 0x46001106  mov.s       $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1294ACu;
        goto label_1294ac;
    }
    ctx->pc = 0x1294A4u;
    {
        const bool branch_taken_0x1294a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1294A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1294A4u;
        // 0x1294a8: 0x46001106  mov.s       $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1294a4) {
            ctx->pc = 0x129310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129310;
        }
    }
    ctx->pc = 0x1294ACu;
label_1294ac:
    // 0x1294ac: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x1294acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1294b0:
    // 0x1294b0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1294b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1294b4:
    // 0x1294b4: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x1294b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1294b8:
    // 0x1294b8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1294b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_1294bc:
    // 0x1294bc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1294bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_1294c0:
    // 0x1294c0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1294c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_1294c4:
    // 0x1294c4: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x1294c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1294c8:
    // 0x1294c8: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1294c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1294cc:
    // 0x1294cc: 0xe7a30068  swc1        $f3, 0x68($sp)
    ctx->pc = 0x1294ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1294d0:
    // 0x1294d0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1294d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1294d4:
    // 0x1294d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1294d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1294d8:
    // 0x1294d8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1294d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1294dc:
    // 0x1294dc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1294dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1294e0:
    // 0x1294e0: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x1294e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1294e4:
    // 0x1294e4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1294e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1294e8:
    // 0x1294e8: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x1294e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1294ec:
    // 0x1294ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1294ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1294f0:
    // 0x1294f0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1294f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1294f4:
    // 0x1294f4: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x1294f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1294f8:
    // 0x1294f8: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1294f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_1294fc:
    // 0x1294fc: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x1294fcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_129500:
    // 0x129500: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x129500u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_129504:
    // 0x129504: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x129504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_129508:
    // 0x129508: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x129508u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_12950c:
    // 0x12950c: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x12950cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_129510:
    // 0x129510: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x129510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_129514:
    // 0x129514: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x129514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_129518:
    // 0x129518: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x129518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12951c:
    // 0x12951c: 0xb0440017  sdl         $a0, 0x17($v0)
    ctx->pc = 0x12951cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_129520:
    // 0x129520: 0xb4440010  sdr         $a0, 0x10($v0)
    ctx->pc = 0x129520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_129524:
    // 0x129524: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x129524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
label_129528:
    // 0x129528: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x129528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_12952c:
    // 0x12952c: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x12952cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_129530:
    // 0x129530: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x129530u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_129534:
    // 0x129534: 0xb0480027  sdl         $t0, 0x27($v0)
    ctx->pc = 0x129534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_129538:
    // 0x129538: 0xb4480020  sdr         $t0, 0x20($v0)
    ctx->pc = 0x129538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12953c:
    // 0x12953c: 0xac490028  sw          $t1, 0x28($v0)
    ctx->pc = 0x12953cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 9));
label_129540:
    // 0x129540: 0x6ba60067  ldl         $a2, 0x67($sp)
    ctx->pc = 0x129540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_129544:
    // 0x129544: 0x6fa60060  ldr         $a2, 0x60($sp)
    ctx->pc = 0x129544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_129548:
    // 0x129548: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x129548u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12954c:
    // 0x12954c: 0xb0460037  sdl         $a2, 0x37($v0)
    ctx->pc = 0x12954cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_129550:
    // 0x129550: 0xb4460030  sdr         $a2, 0x30($v0)
    ctx->pc = 0x129550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_129554:
    // 0x129554: 0xac470038  sw          $a3, 0x38($v0)
    ctx->pc = 0x129554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 7));
label_129558:
    // 0x129558: 0xc092d94  jal         func_24B650
label_12955c:
    if (ctx->pc == 0x12955Cu) {
        ctx->pc = 0x12955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129558u;
        // 0x12955c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129560u;
        goto label_129560;
    }
    ctx->pc = 0x129558u;
    SET_GPR_U32(ctx, 31, 0x129560u);
    ctx->pc = 0x12955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129558u;
    // 0x12955c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x129558u, 0x129560u)) {
        return;
    }
    ctx->pc = 0x129560u;
label_129560:
    // 0x129560: 0x1000004f  b           . + 4 + (0x4F << 2)
label_129564:
    if (ctx->pc == 0x129564u) {
        ctx->pc = 0x129564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129560u;
        // 0x129564: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129568u;
        goto label_129568;
    }
    ctx->pc = 0x129560u;
    {
        const bool branch_taken_0x129560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129560u;
        // 0x129564: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129560) {
            ctx->pc = 0x1296A0u;
            goto label_1296a0;
        }
    }
    ctx->pc = 0x129568u;
label_129568:
    // 0x129568: 0x8c438888  lw          $v1, -0x7778($v0)
    ctx->pc = 0x129568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936712)));
label_12956c:
    // 0x12956c: 0x14c30033  bne         $a2, $v1, . + 4 + (0x33 << 2)
label_129570:
    if (ctx->pc == 0x129570u) {
        ctx->pc = 0x129570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12956Cu;
        // 0x129570: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129574u;
        goto label_129574;
    }
    ctx->pc = 0x12956Cu;
    {
        const bool branch_taken_0x12956c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x129570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12956Cu;
        // 0x129570: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12956c) {
            ctx->pc = 0x12963Cu;
            goto label_12963c;
        }
    }
    ctx->pc = 0x129574u;
label_129574:
    // 0x129574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129578:
    // 0x129578: 0xc04f0c2  jal         func_13C308
label_12957c:
    if (ctx->pc == 0x12957Cu) {
        ctx->pc = 0x12957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129578u;
        // 0x12957c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129580u;
        goto label_129580;
    }
    ctx->pc = 0x129578u;
    SET_GPR_U32(ctx, 31, 0x129580u);
    ctx->pc = 0x12957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129578u;
    // 0x12957c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x129578u, 0x129580u)) {
        return;
    }
    ctx->pc = 0x129580u;
label_129580:
    // 0x129580: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x129580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129584:
    // 0x129584: 0x3c01c43b  lui         $at, 0xC43B
    ctx->pc = 0x129584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50235 << 16));
label_129588:
    // 0x129588: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x129588u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
label_12958c:
    // 0x12958c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12958cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129590:
    // 0x129590: 0x0  nop
    ctx->pc = 0x129590u;
    // NOP
label_129594:
    // 0x129594: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x129594u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129598:
    // 0x129598: 0x0  nop
    ctx->pc = 0x129598u;
    // NOP
label_12959c:
    // 0x12959c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_1295a0:
    if (ctx->pc == 0x1295A0u) {
        ctx->pc = 0x1295A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12959Cu;
        // 0x1295a0: 0x8e0200c4  lw          $v0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1295A4u;
        goto label_1295a4;
    }
    ctx->pc = 0x12959Cu;
    {
        const bool branch_taken_0x12959c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12959c) {
            ctx->pc = 0x1295A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12959Cu;
            // 0x1295a0: 0x8e0200c4  lw          $v0, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1295C4u;
            goto label_1295c4;
        }
    }
    ctx->pc = 0x1295A4u;
label_1295a4:
    // 0x1295a4: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x1295a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_1295a8:
    // 0x1295a8: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1295a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
label_1295ac:
    // 0x1295ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1295acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1295b0:
    // 0x1295b0: 0x844402a0  lh          $a0, 0x2A0($v0)
    ctx->pc = 0x1295b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 672)));
label_1295b4:
    // 0x1295b4: 0x8c4302a4  lw          $v1, 0x2A4($v0)
    ctx->pc = 0x1295b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 676)));
label_1295b8:
    // 0x1295b8: 0x60f809  jalr        $v1
label_1295bc:
    if (ctx->pc == 0x1295BCu) {
        ctx->pc = 0x1295BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295B8u;
        // 0x1295bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1295C0u;
        goto label_1295c0;
    }
    ctx->pc = 0x1295B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1295C0u);
        ctx->pc = 0x1295BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295B8u;
        // 0x1295bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1295B8u, 0x1295C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1295C0u;
label_1295c0:
    // 0x1295c0: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x1295c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1295c4:
    // 0x1295c4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_1295c8:
    if (ctx->pc == 0x1295C8u) {
        ctx->pc = 0x1295C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295C4u;
        // 0x1295c8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1295CCu;
        goto label_1295cc;
    }
    ctx->pc = 0x1295C4u;
    {
        const bool branch_taken_0x1295c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1295C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295C4u;
        // 0x1295c8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1295c4) {
            ctx->pc = 0x1296A0u;
            goto label_1296a0;
        }
    }
    ctx->pc = 0x1295CCu;
label_1295cc:
    // 0x1295cc: 0xc07600c  jal         func_1D8030
label_1295d0:
    if (ctx->pc == 0x1295D0u) {
        ctx->pc = 0x1295D4u;
        goto label_1295d4;
    }
    ctx->pc = 0x1295CCu;
    SET_GPR_U32(ctx, 31, 0x1295D4u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1295CCu, 0x1295D4u)) {
        return;
    }
    ctx->pc = 0x1295D4u;
label_1295d4:
    // 0x1295d4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1295d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1295d8:
    // 0x1295d8: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_1295dc:
    if (ctx->pc == 0x1295DCu) {
        ctx->pc = 0x1295DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295D8u;
        // 0x1295dc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1295E0u;
        goto label_1295e0;
    }
    ctx->pc = 0x1295D8u;
    {
        const bool branch_taken_0x1295d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1295DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295D8u;
        // 0x1295dc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1295d8) {
            ctx->pc = 0x1296A0u;
            goto label_1296a0;
        }
    }
    ctx->pc = 0x1295E0u;
label_1295e0:
    // 0x1295e0: 0xc07600c  jal         func_1D8030
label_1295e4:
    if (ctx->pc == 0x1295E4u) {
        ctx->pc = 0x1295E8u;
        goto label_1295e8;
    }
    ctx->pc = 0x1295E0u;
    SET_GPR_U32(ctx, 31, 0x1295E8u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1295E0u, 0x1295E8u)) {
        return;
    }
    ctx->pc = 0x1295E8u;
label_1295e8:
    // 0x1295e8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1295e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1295ec:
    // 0x1295ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1295ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1295f0:
    // 0x1295f0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_1295f4:
    if (ctx->pc == 0x1295F4u) {
        ctx->pc = 0x1295F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295F0u;
        // 0x1295f4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1295F8u;
        goto label_1295f8;
    }
    ctx->pc = 0x1295F0u;
    {
        const bool branch_taken_0x1295f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1295F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295F0u;
        // 0x1295f4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1295f0) {
            ctx->pc = 0x1296A0u;
            goto label_1296a0;
        }
    }
    ctx->pc = 0x1295F8u;
label_1295f8:
    // 0x1295f8: 0x68430047  ldl         $v1, 0x47($v0)
    ctx->pc = 0x1295f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1295fc:
    // 0x1295fc: 0x6c430040  ldr         $v1, 0x40($v0)
    ctx->pc = 0x1295fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_129600:
    // 0x129600: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x129600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_129604:
    // 0x129604: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x129604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_129608:
    // 0x129608: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x129608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12960c:
    // 0x12960c: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x12960cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_129610:
    // 0x129610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x129610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_129614:
    // 0x129614: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x129614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_129618:
    // 0x129618: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x129618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_12961c:
    // 0x12961c: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x12961cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_129620:
    // 0x129620: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x129620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_129624:
    // 0x129624: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x129624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_129628:
    // 0x129628: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x129628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
label_12962c:
    // 0x12962c: 0xc04acfc  jal         func_12B3F0
label_129630:
    if (ctx->pc == 0x129630u) {
        ctx->pc = 0x129630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12962Cu;
        // 0x129630: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129634u;
        goto label_129634;
    }
    ctx->pc = 0x12962Cu;
    SET_GPR_U32(ctx, 31, 0x129634u);
    ctx->pc = 0x129630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12962Cu;
    // 0x129630: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B3F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x12B3F0u, 0x12962Cu, 0x129634u)) {
        return;
    }
    ctx->pc = 0x129634u;
label_129634:
    // 0x129634: 0x1000001a  b           . + 4 + (0x1A << 2)
label_129638:
    if (ctx->pc == 0x129638u) {
        ctx->pc = 0x129638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129634u;
        // 0x129638: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12963Cu;
        goto label_12963c;
    }
    ctx->pc = 0x129634u;
    {
        const bool branch_taken_0x129634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129634u;
        // 0x129638: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129634) {
            ctx->pc = 0x1296A0u;
            goto label_1296a0;
        }
    }
    ctx->pc = 0x12963Cu;
label_12963c:
    // 0x12963c: 0x8c4345f8  lw          $v1, 0x45F8($v0)
    ctx->pc = 0x12963cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17912)));
label_129640:
    // 0x129640: 0x54c3000f  bnel        $a2, $v1, . + 4 + (0xF << 2)
label_129644:
    if (ctx->pc == 0x129644u) {
        ctx->pc = 0x129644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129640u;
        // 0x129644: 0x8e422d74  lw          $v0, 0x2D74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129648u;
        goto label_129648;
    }
    ctx->pc = 0x129640u;
    {
        const bool branch_taken_0x129640 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x129640) {
            ctx->pc = 0x129644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129640u;
            // 0x129644: 0x8e422d74  lw          $v0, 0x2D74($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129680u;
            goto label_129680;
        }
    }
    ctx->pc = 0x129648u;
label_129648:
    // 0x129648: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x129648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12964c:
    // 0x12964c: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x12964cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_129650:
    // 0x129650: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_129654:
    if (ctx->pc == 0x129654u) {
        ctx->pc = 0x129654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129650u;
        // 0x129654: 0x264529b4  addiu       $a1, $s2, 0x29B4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 10676));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129658u;
        goto label_129658;
    }
    ctx->pc = 0x129650u;
    {
        const bool branch_taken_0x129650 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x129654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129650u;
        // 0x129654: 0x264529b4  addiu       $a1, $s2, 0x29B4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 10676));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129650) {
            ctx->pc = 0x12966Cu;
            goto label_12966c;
        }
    }
    ctx->pc = 0x129658u;
label_129658:
    // 0x129658: 0x26441510  addiu       $a0, $s2, 0x1510
    ctx->pc = 0x129658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5392));
label_12965c:
    // 0x12965c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12965cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_129660:
    // 0x129660: 0xc0685da  jal         func_1A1768
label_129664:
    if (ctx->pc == 0x129664u) {
        ctx->pc = 0x129664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129660u;
        // 0x129664: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129668u;
        goto label_129668;
    }
    ctx->pc = 0x129660u;
    SET_GPR_U32(ctx, 31, 0x129668u);
    ctx->pc = 0x129664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129660u;
    // 0x129664: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A1768u, 0x129660u, 0x129668u)) {
        return;
    }
    ctx->pc = 0x129668u;
label_129668:
    // 0x129668: 0x264529b4  addiu       $a1, $s2, 0x29B4
    ctx->pc = 0x129668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 10676));
label_12966c:
    // 0x12966c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12966cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129670:
    // 0x129670: 0xc067fca  jal         func_19FF28
label_129674:
    if (ctx->pc == 0x129674u) {
        ctx->pc = 0x129674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129670u;
        // 0x129674: 0x26440360  addiu       $a0, $s2, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129678u;
        goto label_129678;
    }
    ctx->pc = 0x129670u;
    SET_GPR_U32(ctx, 31, 0x129678u);
    ctx->pc = 0x129674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129670u;
    // 0x129674: 0x26440360  addiu       $a0, $s2, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x129670u, 0x129678u)) {
        return;
    }
    ctx->pc = 0x129678u;
label_129678:
    // 0x129678: 0x10000009  b           . + 4 + (0x9 << 2)
label_12967c:
    if (ctx->pc == 0x12967Cu) {
        ctx->pc = 0x12967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129678u;
        // 0x12967c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129680u;
        goto label_129680;
    }
    ctx->pc = 0x129678u;
    {
        const bool branch_taken_0x129678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129678u;
        // 0x12967c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129678) {
            ctx->pc = 0x1296A0u;
            goto label_1296a0;
        }
    }
    ctx->pc = 0x129680u;
label_129680:
    // 0x129680: 0x54c20007  bnel        $a2, $v0, . + 4 + (0x7 << 2)
label_129684:
    if (ctx->pc == 0x129684u) {
        ctx->pc = 0x129684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129680u;
        // 0x129684: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129688u;
        goto label_129688;
    }
    ctx->pc = 0x129680u;
    {
        const bool branch_taken_0x129680 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x129680) {
            ctx->pc = 0x129684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129680u;
            // 0x129684: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1296A0u;
            goto label_1296a0;
        }
    }
    ctx->pc = 0x129688u;
label_129688:
    // 0x129688: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x129688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12968c:
    // 0x12968c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12968cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129690:
    // 0x129690: 0x8c8500c4  lw          $a1, 0xC4($a0)
    ctx->pc = 0x129690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
label_129694:
    // 0x129694: 0xc04eef0  jal         func_13BBC0
label_129698:
    if (ctx->pc == 0x129698u) {
        ctx->pc = 0x129698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129694u;
        // 0x129698: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12969Cu;
        goto label_12969c;
    }
    ctx->pc = 0x129694u;
    SET_GPR_U32(ctx, 31, 0x12969Cu);
    ctx->pc = 0x129698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129694u;
    // 0x129698: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x129694u, 0x12969Cu)) {
        return;
    }
    ctx->pc = 0x12969Cu;
label_12969c:
    // 0x12969c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x12969cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1296a0:
    // 0x1296a0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1296a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1296a4:
    // 0x1296a4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1296a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1296a8:
    // 0x1296a8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1296a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1296ac:
    // 0x1296ac: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1296acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1296b0:
    // 0x1296b0: 0x3e00008  jr          $ra
label_1296b4:
    if (ctx->pc == 0x1296B4u) {
        ctx->pc = 0x1296B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296B0u;
        // 0x1296b4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1296B8u;
        goto label_fallthrough_0x1296b0;
    }
    ctx->pc = 0x1296B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1296B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296B0u;
        // 0x1296b4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1296B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1296b0:
    ctx->pc = 0x1296B8u;
}
