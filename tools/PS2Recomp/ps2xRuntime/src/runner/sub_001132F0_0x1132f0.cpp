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

// Function: sub_001132F0
// Address: 0x1132f0 - 0x113718
void sub_001132F0_0x1132f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001132F0_0x1132f0");
#endif

    switch (ctx->pc) {
        case 0x1132f0u: goto label_1132f0;
        case 0x1132f4u: goto label_1132f4;
        case 0x1132f8u: goto label_1132f8;
        case 0x1132fcu: goto label_1132fc;
        case 0x113300u: goto label_113300;
        case 0x113304u: goto label_113304;
        case 0x113308u: goto label_113308;
        case 0x11330cu: goto label_11330c;
        case 0x113310u: goto label_113310;
        case 0x113314u: goto label_113314;
        case 0x113318u: goto label_113318;
        case 0x11331cu: goto label_11331c;
        case 0x113320u: goto label_113320;
        case 0x113324u: goto label_113324;
        case 0x113328u: goto label_113328;
        case 0x11332cu: goto label_11332c;
        case 0x113330u: goto label_113330;
        case 0x113334u: goto label_113334;
        case 0x113338u: goto label_113338;
        case 0x11333cu: goto label_11333c;
        case 0x113340u: goto label_113340;
        case 0x113344u: goto label_113344;
        case 0x113348u: goto label_113348;
        case 0x11334cu: goto label_11334c;
        case 0x113350u: goto label_113350;
        case 0x113354u: goto label_113354;
        case 0x113358u: goto label_113358;
        case 0x11335cu: goto label_11335c;
        case 0x113360u: goto label_113360;
        case 0x113364u: goto label_113364;
        case 0x113368u: goto label_113368;
        case 0x11336cu: goto label_11336c;
        case 0x113370u: goto label_113370;
        case 0x113374u: goto label_113374;
        case 0x113378u: goto label_113378;
        case 0x11337cu: goto label_11337c;
        case 0x113380u: goto label_113380;
        case 0x113384u: goto label_113384;
        case 0x113388u: goto label_113388;
        case 0x11338cu: goto label_11338c;
        case 0x113390u: goto label_113390;
        case 0x113394u: goto label_113394;
        case 0x113398u: goto label_113398;
        case 0x11339cu: goto label_11339c;
        case 0x1133a0u: goto label_1133a0;
        case 0x1133a4u: goto label_1133a4;
        case 0x1133a8u: goto label_1133a8;
        case 0x1133acu: goto label_1133ac;
        case 0x1133b0u: goto label_1133b0;
        case 0x1133b4u: goto label_1133b4;
        case 0x1133b8u: goto label_1133b8;
        case 0x1133bcu: goto label_1133bc;
        case 0x1133c0u: goto label_1133c0;
        case 0x1133c4u: goto label_1133c4;
        case 0x1133c8u: goto label_1133c8;
        case 0x1133ccu: goto label_1133cc;
        case 0x1133d0u: goto label_1133d0;
        case 0x1133d4u: goto label_1133d4;
        case 0x1133d8u: goto label_1133d8;
        case 0x1133dcu: goto label_1133dc;
        case 0x1133e0u: goto label_1133e0;
        case 0x1133e4u: goto label_1133e4;
        case 0x1133e8u: goto label_1133e8;
        case 0x1133ecu: goto label_1133ec;
        case 0x1133f0u: goto label_1133f0;
        case 0x1133f4u: goto label_1133f4;
        case 0x1133f8u: goto label_1133f8;
        case 0x1133fcu: goto label_1133fc;
        case 0x113400u: goto label_113400;
        case 0x113404u: goto label_113404;
        case 0x113408u: goto label_113408;
        case 0x11340cu: goto label_11340c;
        case 0x113410u: goto label_113410;
        case 0x113414u: goto label_113414;
        case 0x113418u: goto label_113418;
        case 0x11341cu: goto label_11341c;
        case 0x113420u: goto label_113420;
        case 0x113424u: goto label_113424;
        case 0x113428u: goto label_113428;
        case 0x11342cu: goto label_11342c;
        case 0x113430u: goto label_113430;
        case 0x113434u: goto label_113434;
        case 0x113438u: goto label_113438;
        case 0x11343cu: goto label_11343c;
        case 0x113440u: goto label_113440;
        case 0x113444u: goto label_113444;
        case 0x113448u: goto label_113448;
        case 0x11344cu: goto label_11344c;
        case 0x113450u: goto label_113450;
        case 0x113454u: goto label_113454;
        case 0x113458u: goto label_113458;
        case 0x11345cu: goto label_11345c;
        case 0x113460u: goto label_113460;
        case 0x113464u: goto label_113464;
        case 0x113468u: goto label_113468;
        case 0x11346cu: goto label_11346c;
        case 0x113470u: goto label_113470;
        case 0x113474u: goto label_113474;
        case 0x113478u: goto label_113478;
        case 0x11347cu: goto label_11347c;
        case 0x113480u: goto label_113480;
        case 0x113484u: goto label_113484;
        case 0x113488u: goto label_113488;
        case 0x11348cu: goto label_11348c;
        case 0x113490u: goto label_113490;
        case 0x113494u: goto label_113494;
        case 0x113498u: goto label_113498;
        case 0x11349cu: goto label_11349c;
        case 0x1134a0u: goto label_1134a0;
        case 0x1134a4u: goto label_1134a4;
        case 0x1134a8u: goto label_1134a8;
        case 0x1134acu: goto label_1134ac;
        case 0x1134b0u: goto label_1134b0;
        case 0x1134b4u: goto label_1134b4;
        case 0x1134b8u: goto label_1134b8;
        case 0x1134bcu: goto label_1134bc;
        case 0x1134c0u: goto label_1134c0;
        case 0x1134c4u: goto label_1134c4;
        case 0x1134c8u: goto label_1134c8;
        case 0x1134ccu: goto label_1134cc;
        case 0x1134d0u: goto label_1134d0;
        case 0x1134d4u: goto label_1134d4;
        case 0x1134d8u: goto label_1134d8;
        case 0x1134dcu: goto label_1134dc;
        case 0x1134e0u: goto label_1134e0;
        case 0x1134e4u: goto label_1134e4;
        case 0x1134e8u: goto label_1134e8;
        case 0x1134ecu: goto label_1134ec;
        case 0x1134f0u: goto label_1134f0;
        case 0x1134f4u: goto label_1134f4;
        case 0x1134f8u: goto label_1134f8;
        case 0x1134fcu: goto label_1134fc;
        case 0x113500u: goto label_113500;
        case 0x113504u: goto label_113504;
        case 0x113508u: goto label_113508;
        case 0x11350cu: goto label_11350c;
        case 0x113510u: goto label_113510;
        case 0x113514u: goto label_113514;
        case 0x113518u: goto label_113518;
        case 0x11351cu: goto label_11351c;
        case 0x113520u: goto label_113520;
        case 0x113524u: goto label_113524;
        case 0x113528u: goto label_113528;
        case 0x11352cu: goto label_11352c;
        case 0x113530u: goto label_113530;
        case 0x113534u: goto label_113534;
        case 0x113538u: goto label_113538;
        case 0x11353cu: goto label_11353c;
        case 0x113540u: goto label_113540;
        case 0x113544u: goto label_113544;
        case 0x113548u: goto label_113548;
        case 0x11354cu: goto label_11354c;
        case 0x113550u: goto label_113550;
        case 0x113554u: goto label_113554;
        case 0x113558u: goto label_113558;
        case 0x11355cu: goto label_11355c;
        case 0x113560u: goto label_113560;
        case 0x113564u: goto label_113564;
        case 0x113568u: goto label_113568;
        case 0x11356cu: goto label_11356c;
        case 0x113570u: goto label_113570;
        case 0x113574u: goto label_113574;
        case 0x113578u: goto label_113578;
        case 0x11357cu: goto label_11357c;
        case 0x113580u: goto label_113580;
        case 0x113584u: goto label_113584;
        case 0x113588u: goto label_113588;
        case 0x11358cu: goto label_11358c;
        case 0x113590u: goto label_113590;
        case 0x113594u: goto label_113594;
        case 0x113598u: goto label_113598;
        case 0x11359cu: goto label_11359c;
        case 0x1135a0u: goto label_1135a0;
        case 0x1135a4u: goto label_1135a4;
        case 0x1135a8u: goto label_1135a8;
        case 0x1135acu: goto label_1135ac;
        case 0x1135b0u: goto label_1135b0;
        case 0x1135b4u: goto label_1135b4;
        case 0x1135b8u: goto label_1135b8;
        case 0x1135bcu: goto label_1135bc;
        case 0x1135c0u: goto label_1135c0;
        case 0x1135c4u: goto label_1135c4;
        case 0x1135c8u: goto label_1135c8;
        case 0x1135ccu: goto label_1135cc;
        case 0x1135d0u: goto label_1135d0;
        case 0x1135d4u: goto label_1135d4;
        case 0x1135d8u: goto label_1135d8;
        case 0x1135dcu: goto label_1135dc;
        case 0x1135e0u: goto label_1135e0;
        case 0x1135e4u: goto label_1135e4;
        case 0x1135e8u: goto label_1135e8;
        case 0x1135ecu: goto label_1135ec;
        case 0x1135f0u: goto label_1135f0;
        case 0x1135f4u: goto label_1135f4;
        case 0x1135f8u: goto label_1135f8;
        case 0x1135fcu: goto label_1135fc;
        case 0x113600u: goto label_113600;
        case 0x113604u: goto label_113604;
        case 0x113608u: goto label_113608;
        case 0x11360cu: goto label_11360c;
        case 0x113610u: goto label_113610;
        case 0x113614u: goto label_113614;
        case 0x113618u: goto label_113618;
        case 0x11361cu: goto label_11361c;
        case 0x113620u: goto label_113620;
        case 0x113624u: goto label_113624;
        case 0x113628u: goto label_113628;
        case 0x11362cu: goto label_11362c;
        case 0x113630u: goto label_113630;
        case 0x113634u: goto label_113634;
        case 0x113638u: goto label_113638;
        case 0x11363cu: goto label_11363c;
        case 0x113640u: goto label_113640;
        case 0x113644u: goto label_113644;
        case 0x113648u: goto label_113648;
        case 0x11364cu: goto label_11364c;
        case 0x113650u: goto label_113650;
        case 0x113654u: goto label_113654;
        case 0x113658u: goto label_113658;
        case 0x11365cu: goto label_11365c;
        case 0x113660u: goto label_113660;
        case 0x113664u: goto label_113664;
        case 0x113668u: goto label_113668;
        case 0x11366cu: goto label_11366c;
        case 0x113670u: goto label_113670;
        case 0x113674u: goto label_113674;
        case 0x113678u: goto label_113678;
        case 0x11367cu: goto label_11367c;
        case 0x113680u: goto label_113680;
        case 0x113684u: goto label_113684;
        case 0x113688u: goto label_113688;
        case 0x11368cu: goto label_11368c;
        case 0x113690u: goto label_113690;
        case 0x113694u: goto label_113694;
        case 0x113698u: goto label_113698;
        case 0x11369cu: goto label_11369c;
        case 0x1136a0u: goto label_1136a0;
        case 0x1136a4u: goto label_1136a4;
        case 0x1136a8u: goto label_1136a8;
        case 0x1136acu: goto label_1136ac;
        case 0x1136b0u: goto label_1136b0;
        case 0x1136b4u: goto label_1136b4;
        case 0x1136b8u: goto label_1136b8;
        case 0x1136bcu: goto label_1136bc;
        case 0x1136c0u: goto label_1136c0;
        case 0x1136c4u: goto label_1136c4;
        case 0x1136c8u: goto label_1136c8;
        case 0x1136ccu: goto label_1136cc;
        case 0x1136d0u: goto label_1136d0;
        case 0x1136d4u: goto label_1136d4;
        case 0x1136d8u: goto label_1136d8;
        case 0x1136dcu: goto label_1136dc;
        case 0x1136e0u: goto label_1136e0;
        case 0x1136e4u: goto label_1136e4;
        case 0x1136e8u: goto label_1136e8;
        case 0x1136ecu: goto label_1136ec;
        case 0x1136f0u: goto label_1136f0;
        case 0x1136f4u: goto label_1136f4;
        case 0x1136f8u: goto label_1136f8;
        case 0x1136fcu: goto label_1136fc;
        case 0x113700u: goto label_113700;
        case 0x113704u: goto label_113704;
        case 0x113708u: goto label_113708;
        case 0x11370cu: goto label_11370c;
        case 0x113710u: goto label_113710;
        case 0x113714u: goto label_113714;
        default: break;
    }

    ctx->pc = 0x1132f0u;

label_1132f0:
    // 0x1132f0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1132f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1132f4:
    // 0x1132f4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1132f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1132f8:
    // 0x1132f8: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1132f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_1132fc:
    // 0x1132fc: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1132fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_113300:
    // 0x113300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x113300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_113304:
    // 0x113304: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x113304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_113308:
    // 0x113308: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x113308u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11330c:
    // 0x11330c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x11330cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_113310:
    // 0x113310: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x113310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_113314:
    // 0x113314: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x113314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_113318:
    // 0x113318: 0x8c628978  lw          $v0, -0x7688($v1)
    ctx->pc = 0x113318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936952)));
label_11331c:
    // 0x11331c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x11331cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_113320:
    // 0x113320: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_113324:
    if (ctx->pc == 0x113324u) {
        ctx->pc = 0x113324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113320u;
        // 0x113324: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113328u;
        goto label_113328;
    }
    ctx->pc = 0x113320u;
    {
        const bool branch_taken_0x113320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x113324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113320u;
        // 0x113324: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113320) {
            ctx->pc = 0x113338u;
            goto label_113338;
        }
    }
    ctx->pc = 0x113328u;
label_113328:
    // 0x113328: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x113328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_11332c:
    // 0x11332c: 0x8c438980  lw          $v1, -0x7680($v0)
    ctx->pc = 0x11332cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936960)));
label_113330:
    // 0x113330: 0x548300f1  bnel        $a0, $v1, . + 4 + (0xF1 << 2)
label_113334:
    if (ctx->pc == 0x113334u) {
        ctx->pc = 0x113334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113330u;
        // 0x113334: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113338u;
        goto label_113338;
    }
    ctx->pc = 0x113330u;
    {
        const bool branch_taken_0x113330 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x113330) {
            ctx->pc = 0x113334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113330u;
            // 0x113334: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1136F8u;
            goto label_1136f8;
        }
    }
    ctx->pc = 0x113338u;
label_113338:
    // 0x113338: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x113338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_11333c:
    // 0x11333c: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x11333cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
label_113340:
    // 0x113340: 0x8c828310  lw          $v0, -0x7CF0($a0)
    ctx->pc = 0x113340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294935312)));
label_113344:
    // 0x113344: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_113348:
    if (ctx->pc == 0x113348u) {
        ctx->pc = 0x113348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113344u;
        // 0x113348: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11334Cu;
        goto label_11334c;
    }
    ctx->pc = 0x113344u;
    {
        const bool branch_taken_0x113344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x113348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113344u;
        // 0x113348: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113344) {
            ctx->pc = 0x113358u;
            goto label_113358;
        }
    }
    ctx->pc = 0x11334Cu;
label_11334c:
    // 0x11334c: 0xac838310  sw          $v1, -0x7CF0($a0)
    ctx->pc = 0x11334cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294935312), GPR_U32(ctx, 3));
label_113350:
    // 0x113350: 0xc06c928  jal         func_1B24A0
label_113354:
    if (ctx->pc == 0x113354u) {
        ctx->pc = 0x113354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113350u;
        // 0x113354: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113358u;
        goto label_113358;
    }
    ctx->pc = 0x113350u;
    SET_GPR_U32(ctx, 31, 0x113358u);
    ctx->pc = 0x113354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113350u;
    // 0x113354: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B24A0u, 0x113350u, 0x113358u)) {
        return;
    }
    ctx->pc = 0x113358u;
label_113358:
    // 0x113358: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x113358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_11335c:
    // 0x11335c: 0x260300d8  addiu       $v1, $s0, 0xD8
    ctx->pc = 0x11335cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
label_113360:
    // 0x113360: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x113360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_113364:
    // 0x113364: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_113368:
    // 0x113368: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x113368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11336c:
    // 0x11336c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11336cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_113370:
    // 0x113370: 0x5480000a  bnel        $a0, $zero, . + 4 + (0xA << 2)
label_113374:
    if (ctx->pc == 0x113374u) {
        ctx->pc = 0x113374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113370u;
        // 0x113374: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113378u;
        goto label_113378;
    }
    ctx->pc = 0x113370u;
    {
        const bool branch_taken_0x113370 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x113370) {
            ctx->pc = 0x113374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113370u;
            // 0x113374: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11339Cu;
            goto label_11339c;
        }
    }
    ctx->pc = 0x113378u;
label_113378:
    // 0x113378: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x113378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_11337c:
    // 0x11337c: 0x10a000dd  beqz        $a1, . + 4 + (0xDD << 2)
label_113380:
    if (ctx->pc == 0x113380u) {
        ctx->pc = 0x113380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11337Cu;
        // 0x113380: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113384u;
        goto label_113384;
    }
    ctx->pc = 0x11337Cu;
    {
        const bool branch_taken_0x11337c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x113380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11337Cu;
        // 0x113380: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11337c) {
            ctx->pc = 0x1136F4u;
            goto label_1136f4;
        }
    }
    ctx->pc = 0x113384u;
label_113384:
    // 0x113384: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x113384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_113388:
    // 0x113388: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x113388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_11338c:
    // 0x11338c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x11338cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_113390:
    // 0x113390: 0x60f809  jalr        $v1
label_113394:
    if (ctx->pc == 0x113394u) {
        ctx->pc = 0x113394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113390u;
        // 0x113394: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113398u;
        goto label_113398;
    }
    ctx->pc = 0x113390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113398u);
        ctx->pc = 0x113394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113390u;
        // 0x113394: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113390u, 0x113398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113398u;
label_113398:
    // 0x113398: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x113398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_11339c:
    // 0x11339c: 0x504000d6  beql        $v0, $zero, . + 4 + (0xD6 << 2)
label_1133a0:
    if (ctx->pc == 0x1133A0u) {
        ctx->pc = 0x1133A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11339Cu;
        // 0x1133a0: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1133A4u;
        goto label_1133a4;
    }
    ctx->pc = 0x11339Cu;
    {
        const bool branch_taken_0x11339c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11339c) {
            ctx->pc = 0x1133A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11339Cu;
            // 0x1133a0: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1136F8u;
            goto label_1136f8;
        }
    }
    ctx->pc = 0x1133A4u;
label_1133a4:
    // 0x1133a4: 0x8e0301a8  lw          $v1, 0x1A8($s0)
    ctx->pc = 0x1133a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_1133a8:
    // 0x1133a8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1133ac:
    if (ctx->pc == 0x1133ACu) {
        ctx->pc = 0x1133ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133A8u;
        // 0x1133ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1133B0u;
        goto label_1133b0;
    }
    ctx->pc = 0x1133A8u;
    {
        const bool branch_taken_0x1133a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1133ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133A8u;
        // 0x1133ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1133a8) {
            ctx->pc = 0x1133B4u;
            goto label_1133b4;
        }
    }
    ctx->pc = 0x1133B0u;
label_1133b0:
    // 0x1133b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1133b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1133b4:
    // 0x1133b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1133b8:
    if (ctx->pc == 0x1133B8u) {
        ctx->pc = 0x1133B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133B4u;
        // 0x1133b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1133BCu;
        goto label_1133bc;
    }
    ctx->pc = 0x1133B4u;
    {
        const bool branch_taken_0x1133b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1133B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133B4u;
        // 0x1133b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1133b4) {
            ctx->pc = 0x1133C8u;
            goto label_1133c8;
        }
    }
    ctx->pc = 0x1133BCu;
label_1133bc:
    // 0x1133bc: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1133bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1133c0:
    // 0x1133c0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1133c4:
    if (ctx->pc == 0x1133C4u) {
        ctx->pc = 0x1133C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133C0u;
        // 0x1133c4: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1133C8u;
        goto label_1133c8;
    }
    ctx->pc = 0x1133C0u;
    {
        const bool branch_taken_0x1133c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1133C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133C0u;
        // 0x1133c4: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1133c0) {
            ctx->pc = 0x1133D4u;
            goto label_1133d4;
        }
    }
    ctx->pc = 0x1133C8u;
label_1133c8:
    // 0x1133c8: 0xc044bee  jal         func_112FB8
label_1133cc:
    if (ctx->pc == 0x1133CCu) {
        ctx->pc = 0x1133CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133C8u;
        // 0x1133cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1133D0u;
        goto label_1133d0;
    }
    ctx->pc = 0x1133C8u;
    SET_GPR_U32(ctx, 31, 0x1133D0u);
    ctx->pc = 0x1133CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1133C8u;
    // 0x1133cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112FB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x112FB8u, 0x1133C8u, 0x1133D0u)) {
        return;
    }
    ctx->pc = 0x1133D0u;
label_1133d0:
    // 0x1133d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1133d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1133d4:
    // 0x1133d4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1133d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1133d8:
    // 0x1133d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1133d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1133dc:
    // 0x1133dc: 0xc0899e8  jal         func_2267A0
label_1133e0:
    if (ctx->pc == 0x1133E0u) {
        ctx->pc = 0x1133E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133DCu;
        // 0x1133e0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1133E4u;
        goto label_1133e4;
    }
    ctx->pc = 0x1133DCu;
    SET_GPR_U32(ctx, 31, 0x1133E4u);
    ctx->pc = 0x1133E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1133DCu;
    // 0x1133e0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2267A0u, 0x1133DCu, 0x1133E4u)) {
        return;
    }
    ctx->pc = 0x1133E4u;
label_1133e4:
    // 0x1133e4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1133e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1133e8:
    // 0x1133e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1133e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1133ec:
    // 0x1133ec: 0x8e0501a8  lw          $a1, 0x1A8($s0)
    ctx->pc = 0x1133ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_1133f0:
    // 0x1133f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1133f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1133f4:
    // 0x1133f4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1133f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1133f8:
    // 0x1133f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1133f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1133fc:
    // 0x1133fc: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_113400:
    if (ctx->pc == 0x113400u) {
        ctx->pc = 0x113400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133FCu;
        // 0x113400: 0xc46d005c  lwc1        $f13, 0x5C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x113404u;
        goto label_113404;
    }
    ctx->pc = 0x1133FCu;
    {
        const bool branch_taken_0x1133fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x113400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133FCu;
        // 0x113400: 0xc46d005c  lwc1        $f13, 0x5C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1133fc) {
            ctx->pc = 0x113408u;
            goto label_113408;
        }
    }
    ctx->pc = 0x113404u;
label_113404:
    // 0x113404: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x113404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_113408:
    // 0x113408: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_11340c:
    if (ctx->pc == 0x11340Cu) {
        ctx->pc = 0x11340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113408u;
        // 0x11340c: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113410u;
        goto label_113410;
    }
    ctx->pc = 0x113408u;
    {
        const bool branch_taken_0x113408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x113408) {
            ctx->pc = 0x11340Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113408u;
            // 0x11340c: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113418u;
            goto label_113418;
        }
    }
    ctx->pc = 0x113410u;
label_113410:
    // 0x113410: 0x10000009  b           . + 4 + (0x9 << 2)
label_113414:
    if (ctx->pc == 0x113414u) {
        ctx->pc = 0x113414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113410u;
        // 0x113414: 0xc48c0054  lwc1        $f12, 0x54($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x113418u;
        goto label_113418;
    }
    ctx->pc = 0x113410u;
    {
        const bool branch_taken_0x113410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113410u;
        // 0x113414: 0xc48c0054  lwc1        $f12, 0x54($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x113410) {
            ctx->pc = 0x113438u;
            goto label_113438;
        }
    }
    ctx->pc = 0x113418u;
label_113418:
    // 0x113418: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_11341c:
    if (ctx->pc == 0x11341Cu) {
        ctx->pc = 0x11341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113418u;
        // 0x11341c: 0xc46c0054  lwc1        $f12, 0x54($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x113420u;
        goto label_113420;
    }
    ctx->pc = 0x113418u;
    {
        const bool branch_taken_0x113418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113418) {
            ctx->pc = 0x11341Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113418u;
            // 0x11341c: 0xc46c0054  lwc1        $f12, 0x54($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x113438u;
            goto label_113438;
        }
    }
    ctx->pc = 0x113420u;
label_113420:
    // 0x113420: 0xc6020080  lwc1        $f2, 0x80($s0)
    ctx->pc = 0x113420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_113424:
    // 0x113424: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x113424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_113428:
    // 0x113428: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x113428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11342c:
    // 0x11342c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11342cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_113430:
    // 0x113430: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x113430u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_113434:
    // 0x113434: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x113434u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_113438:
    // 0x113438: 0x8e040198  lw          $a0, 0x198($s0)
    ctx->pc = 0x113438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
label_11343c:
    // 0x11343c: 0xc076a66  jal         func_1DA998
label_113440:
    if (ctx->pc == 0x113440u) {
        ctx->pc = 0x113440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11343Cu;
        // 0x113440: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113444u;
        goto label_113444;
    }
    ctx->pc = 0x11343Cu;
    SET_GPR_U32(ctx, 31, 0x113444u);
    ctx->pc = 0x113440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11343Cu;
    // 0x113440: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA998u, 0x11343Cu, 0x113444u)) {
        return;
    }
    ctx->pc = 0x113444u;
label_113444:
    // 0x113444: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x113444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_113448:
    // 0x113448: 0x8a030013  lwl         $v1, 0x13($s0)
    ctx->pc = 0x113448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_11344c:
    // 0x11344c: 0x9a030010  lwr         $v1, 0x10($s0)
    ctx->pc = 0x11344cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_113450:
    // 0x113450: 0xaba30043  swl         $v1, 0x43($sp)
    ctx->pc = 0x113450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_113454:
    // 0x113454: 0xbba30040  swr         $v1, 0x40($sp)
    ctx->pc = 0x113454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_113458:
    // 0x113458: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_11345c:
    if (ctx->pc == 0x11345Cu) {
        ctx->pc = 0x11345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113458u;
        // 0x11345c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113460u;
        goto label_113460;
    }
    ctx->pc = 0x113458u;
    {
        const bool branch_taken_0x113458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113458u;
        // 0x11345c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113458) {
            ctx->pc = 0x11346Cu;
            goto label_11346c;
        }
    }
    ctx->pc = 0x113460u;
label_113460:
    // 0x113460: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x113460u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
label_113464:
    // 0x113464: 0xa3a00041  sb          $zero, 0x41($sp)
    ctx->pc = 0x113464u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 0));
label_113468:
    // 0x113468: 0xa3a00042  sb          $zero, 0x42($sp)
    ctx->pc = 0x113468u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 0));
label_11346c:
    // 0x11346c: 0xa3a00043  sb          $zero, 0x43($sp)
    ctx->pc = 0x11346cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 67), (uint8_t)GPR_U32(ctx, 0));
label_113470:
    // 0x113470: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x113470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_113474:
    // 0x113474: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x113474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_113478:
    // 0x113478: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x113478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_11347c:
    // 0x11347c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x11347cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_113480:
    // 0x113480: 0xc08941c  jal         func_225070
label_113484:
    if (ctx->pc == 0x113484u) {
        ctx->pc = 0x113484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113480u;
        // 0x113484: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113488u;
        goto label_113488;
    }
    ctx->pc = 0x113480u;
    SET_GPR_U32(ctx, 31, 0x113488u);
    ctx->pc = 0x113484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113480u;
    // 0x113484: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225070u, 0x113480u, 0x113488u)) {
        return;
    }
    ctx->pc = 0x113488u;
label_113488:
    // 0x113488: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x113488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_11348c:
    // 0x11348c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x11348cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_113490:
    // 0x113490: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x113490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_113494:
    // 0x113494: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x113494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
label_113498:
    // 0x113498: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x113498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_11349c:
    // 0x11349c: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x11349cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1134a0:
    // 0x1134a0: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1134a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1134a4:
    // 0x1134a4: 0xc0ad1d0  jal         func_2B4740
label_1134a8:
    if (ctx->pc == 0x1134A8u) {
        ctx->pc = 0x1134A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134A4u;
        // 0x1134a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1134ACu;
        goto label_1134ac;
    }
    ctx->pc = 0x1134A4u;
    SET_GPR_U32(ctx, 31, 0x1134ACu);
    ctx->pc = 0x1134A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1134A4u;
    // 0x1134a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4740u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4740u, 0x1134A4u, 0x1134ACu)) {
        return;
    }
    ctx->pc = 0x1134ACu;
label_1134ac:
    // 0x1134ac: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_1134b0:
    if (ctx->pc == 0x1134B0u) {
        ctx->pc = 0x1134B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134ACu;
        // 0x1134b0: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1134B4u;
        goto label_1134b4;
    }
    ctx->pc = 0x1134ACu;
    {
        const bool branch_taken_0x1134ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1134ac) {
            ctx->pc = 0x1134B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1134ACu;
            // 0x1134b0: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113544u;
            goto label_113544;
        }
    }
    ctx->pc = 0x1134B4u;
label_1134b4:
    // 0x1134b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1134b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1134b8:
    // 0x1134b8: 0x6a220017  ldl         $v0, 0x17($s1)
    ctx->pc = 0x1134b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1134bc:
    // 0x1134bc: 0x6e220010  ldr         $v0, 0x10($s1)
    ctx->pc = 0x1134bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1134c0:
    // 0x1134c0: 0x6a23001f  ldl         $v1, 0x1F($s1)
    ctx->pc = 0x1134c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1134c4:
    // 0x1134c4: 0x6e230018  ldr         $v1, 0x18($s1)
    ctx->pc = 0x1134c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1134c8:
    // 0x1134c8: 0x6a260027  ldl         $a2, 0x27($s1)
    ctx->pc = 0x1134c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1134cc:
    // 0x1134cc: 0x6e260020  ldr         $a2, 0x20($s1)
    ctx->pc = 0x1134ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1134d0:
    // 0x1134d0: 0x6a27002f  ldl         $a3, 0x2F($s1)
    ctx->pc = 0x1134d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1134d4:
    // 0x1134d4: 0x6e270028  ldr         $a3, 0x28($s1)
    ctx->pc = 0x1134d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1134d8:
    // 0x1134d8: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x1134d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1134dc:
    // 0x1134dc: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x1134dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1134e0:
    // 0x1134e0: 0xb3a3005f  sdl         $v1, 0x5F($sp)
    ctx->pc = 0x1134e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1134e4:
    // 0x1134e4: 0xb7a30058  sdr         $v1, 0x58($sp)
    ctx->pc = 0x1134e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1134e8:
    // 0x1134e8: 0xb3a60067  sdl         $a2, 0x67($sp)
    ctx->pc = 0x1134e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1134ec:
    // 0x1134ec: 0xb7a60060  sdr         $a2, 0x60($sp)
    ctx->pc = 0x1134ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1134f0:
    // 0x1134f0: 0xb3a7006f  sdl         $a3, 0x6F($sp)
    ctx->pc = 0x1134f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1134f4:
    // 0x1134f4: 0xb7a70068  sdr         $a3, 0x68($sp)
    ctx->pc = 0x1134f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1134f8:
    // 0x1134f8: 0x6a220037  ldl         $v0, 0x37($s1)
    ctx->pc = 0x1134f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1134fc:
    // 0x1134fc: 0x6e220030  ldr         $v0, 0x30($s1)
    ctx->pc = 0x1134fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_113500:
    // 0x113500: 0x6a23003f  ldl         $v1, 0x3F($s1)
    ctx->pc = 0x113500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_113504:
    // 0x113504: 0x6e230038  ldr         $v1, 0x38($s1)
    ctx->pc = 0x113504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_113508:
    // 0x113508: 0x6a260047  ldl         $a2, 0x47($s1)
    ctx->pc = 0x113508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_11350c:
    // 0x11350c: 0x6e260040  ldr         $a2, 0x40($s1)
    ctx->pc = 0x11350cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_113510:
    // 0x113510: 0x6a27004f  ldl         $a3, 0x4F($s1)
    ctx->pc = 0x113510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_113514:
    // 0x113514: 0x6e270048  ldr         $a3, 0x48($s1)
    ctx->pc = 0x113514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_113518:
    // 0x113518: 0xb3a20077  sdl         $v0, 0x77($sp)
    ctx->pc = 0x113518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11351c:
    // 0x11351c: 0xb7a20070  sdr         $v0, 0x70($sp)
    ctx->pc = 0x11351cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_113520:
    // 0x113520: 0xb3a3007f  sdl         $v1, 0x7F($sp)
    ctx->pc = 0x113520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_113524:
    // 0x113524: 0xb7a30078  sdr         $v1, 0x78($sp)
    ctx->pc = 0x113524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_113528:
    // 0x113528: 0xb3a60087  sdl         $a2, 0x87($sp)
    ctx->pc = 0x113528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11352c:
    // 0x11352c: 0xb7a60080  sdr         $a2, 0x80($sp)
    ctx->pc = 0x11352cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_113530:
    // 0x113530: 0xb3a7008f  sdl         $a3, 0x8F($sp)
    ctx->pc = 0x113530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_113534:
    // 0x113534: 0xb7a70088  sdr         $a3, 0x88($sp)
    ctx->pc = 0x113534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_113538:
    // 0x113538: 0xc092dbc  jal         func_24B6F0
label_11353c:
    if (ctx->pc == 0x11353Cu) {
        ctx->pc = 0x11353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113538u;
        // 0x11353c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113540u;
        goto label_113540;
    }
    ctx->pc = 0x113538u;
    SET_GPR_U32(ctx, 31, 0x113540u);
    ctx->pc = 0x11353Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113538u;
    // 0x11353c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B6F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B6F0u, 0x113538u, 0x113540u)) {
        return;
    }
    ctx->pc = 0x113540u;
label_113540:
    // 0x113540: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x113540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_113544:
    // 0x113544: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113548:
    // 0x113548: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x113548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11354c:
    // 0x11354c: 0xc092d4a  jal         func_24B528
label_113550:
    if (ctx->pc == 0x113550u) {
        ctx->pc = 0x113550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11354Cu;
        // 0x113550: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113554u;
        goto label_113554;
    }
    ctx->pc = 0x11354Cu;
    SET_GPR_U32(ctx, 31, 0x113554u);
    ctx->pc = 0x113550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11354Cu;
    // 0x113550: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B528u, 0x11354Cu, 0x113554u)) {
        return;
    }
    ctx->pc = 0x113554u;
label_113554:
    // 0x113554: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x113554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_113558:
    // 0x113558: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x113558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_11355c:
    // 0x11355c: 0x8c458910  lw          $a1, -0x76F0($v0)
    ctx->pc = 0x11355cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936848)));
label_113560:
    // 0x113560: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x113560u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_113564:
    // 0x113564: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x113564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_113568:
    // 0x113568: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
label_11356c:
    if (ctx->pc == 0x11356Cu) {
        ctx->pc = 0x11356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113568u;
        // 0x11356c: 0x8e660004  lw          $a2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113570u;
        goto label_113570;
    }
    ctx->pc = 0x113568u;
    {
        const bool branch_taken_0x113568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x11356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113568u;
        // 0x11356c: 0x8e660004  lw          $a2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113568) {
            ctx->pc = 0x113588u;
            goto label_113588;
        }
    }
    ctx->pc = 0x113570u;
label_113570:
    // 0x113570: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x113570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_113574:
    // 0x113574: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_113578:
    if (ctx->pc == 0x113578u) {
        ctx->pc = 0x113578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113574u;
        // 0x113578: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11357Cu;
        goto label_11357c;
    }
    ctx->pc = 0x113574u;
    {
        const bool branch_taken_0x113574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113574u;
        // 0x113578: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113574) {
            ctx->pc = 0x113588u;
            goto label_113588;
        }
    }
    ctx->pc = 0x11357Cu;
label_11357c:
    // 0x11357c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x11357cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_113580:
    // 0x113580: 0xc07fd18  jal         func_1FF460
label_113584:
    if (ctx->pc == 0x113584u) {
        ctx->pc = 0x113584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113580u;
        // 0x113584: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113588u;
        goto label_113588;
    }
    ctx->pc = 0x113580u;
    SET_GPR_U32(ctx, 31, 0x113588u);
    ctx->pc = 0x113584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113580u;
    // 0x113584: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x113580u, 0x113588u)) {
        return;
    }
    ctx->pc = 0x113588u;
label_113588:
    // 0x113588: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x113588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_11358c:
    // 0x11358c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x11358cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_113590:
    // 0x113590: 0x6a020017  ldl         $v0, 0x17($s0)
    ctx->pc = 0x113590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_113594:
    // 0x113594: 0x6e020010  ldr         $v0, 0x10($s0)
    ctx->pc = 0x113594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_113598:
    // 0x113598: 0x6a03001f  ldl         $v1, 0x1F($s0)
    ctx->pc = 0x113598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_11359c:
    // 0x11359c: 0x6e030018  ldr         $v1, 0x18($s0)
    ctx->pc = 0x11359cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1135a0:
    // 0x1135a0: 0x6a050027  ldl         $a1, 0x27($s0)
    ctx->pc = 0x1135a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1135a4:
    // 0x1135a4: 0x6e050020  ldr         $a1, 0x20($s0)
    ctx->pc = 0x1135a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1135a8:
    // 0x1135a8: 0x6a06002f  ldl         $a2, 0x2F($s0)
    ctx->pc = 0x1135a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1135ac:
    // 0x1135ac: 0x6e060028  ldr         $a2, 0x28($s0)
    ctx->pc = 0x1135acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1135b0:
    // 0x1135b0: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x1135b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1135b4:
    // 0x1135b4: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x1135b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1135b8:
    // 0x1135b8: 0xb3a3005f  sdl         $v1, 0x5F($sp)
    ctx->pc = 0x1135b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1135bc:
    // 0x1135bc: 0xb7a30058  sdr         $v1, 0x58($sp)
    ctx->pc = 0x1135bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1135c0:
    // 0x1135c0: 0xb3a50067  sdl         $a1, 0x67($sp)
    ctx->pc = 0x1135c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1135c4:
    // 0x1135c4: 0xb7a50060  sdr         $a1, 0x60($sp)
    ctx->pc = 0x1135c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1135c8:
    // 0x1135c8: 0xb3a6006f  sdl         $a2, 0x6F($sp)
    ctx->pc = 0x1135c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1135cc:
    // 0x1135cc: 0xb7a60068  sdr         $a2, 0x68($sp)
    ctx->pc = 0x1135ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1135d0:
    // 0x1135d0: 0x6a020037  ldl         $v0, 0x37($s0)
    ctx->pc = 0x1135d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1135d4:
    // 0x1135d4: 0x6e020030  ldr         $v0, 0x30($s0)
    ctx->pc = 0x1135d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1135d8:
    // 0x1135d8: 0x6a03003f  ldl         $v1, 0x3F($s0)
    ctx->pc = 0x1135d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1135dc:
    // 0x1135dc: 0x6e030038  ldr         $v1, 0x38($s0)
    ctx->pc = 0x1135dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1135e0:
    // 0x1135e0: 0x6a050047  ldl         $a1, 0x47($s0)
    ctx->pc = 0x1135e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1135e4:
    // 0x1135e4: 0x6e050040  ldr         $a1, 0x40($s0)
    ctx->pc = 0x1135e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1135e8:
    // 0x1135e8: 0x6a06004f  ldl         $a2, 0x4F($s0)
    ctx->pc = 0x1135e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1135ec:
    // 0x1135ec: 0x6e060048  ldr         $a2, 0x48($s0)
    ctx->pc = 0x1135ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1135f0:
    // 0x1135f0: 0xb3a20077  sdl         $v0, 0x77($sp)
    ctx->pc = 0x1135f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1135f4:
    // 0x1135f4: 0xb7a20070  sdr         $v0, 0x70($sp)
    ctx->pc = 0x1135f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1135f8:
    // 0x1135f8: 0xb3a3007f  sdl         $v1, 0x7F($sp)
    ctx->pc = 0x1135f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1135fc:
    // 0x1135fc: 0xb7a30078  sdr         $v1, 0x78($sp)
    ctx->pc = 0x1135fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_113600:
    // 0x113600: 0xb3a50087  sdl         $a1, 0x87($sp)
    ctx->pc = 0x113600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_113604:
    // 0x113604: 0xb7a50080  sdr         $a1, 0x80($sp)
    ctx->pc = 0x113604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_113608:
    // 0x113608: 0xb3a6008f  sdl         $a2, 0x8F($sp)
    ctx->pc = 0x113608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11360c:
    // 0x11360c: 0xb7a60088  sdr         $a2, 0x88($sp)
    ctx->pc = 0x11360cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_113610:
    // 0x113610: 0xc089a04  jal         func_226810
label_113614:
    if (ctx->pc == 0x113614u) {
        ctx->pc = 0x113614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113610u;
        // 0x113614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113618u;
        goto label_113618;
    }
    ctx->pc = 0x113610u;
    SET_GPR_U32(ctx, 31, 0x113618u);
    ctx->pc = 0x113614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113610u;
    // 0x113614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x113610u, 0x113618u)) {
        return;
    }
    ctx->pc = 0x113618u;
label_113618:
    // 0x113618: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x113618u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_11361c:
    // 0x11361c: 0xc08992e  jal         func_2264B8
label_113620:
    if (ctx->pc == 0x113620u) {
        ctx->pc = 0x113620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11361Cu;
        // 0x113620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113624u;
        goto label_113624;
    }
    ctx->pc = 0x11361Cu;
    SET_GPR_U32(ctx, 31, 0x113624u);
    ctx->pc = 0x113620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11361Cu;
    // 0x113620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x11361Cu, 0x113624u)) {
        return;
    }
    ctx->pc = 0x113624u;
label_113624:
    // 0x113624: 0xc0893a2  jal         func_224E88
label_113628:
    if (ctx->pc == 0x113628u) {
        ctx->pc = 0x113628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113624u;
        // 0x113628: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11362Cu;
        goto label_11362c;
    }
    ctx->pc = 0x113624u;
    SET_GPR_U32(ctx, 31, 0x11362Cu);
    ctx->pc = 0x113628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113624u;
    // 0x113628: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E88u, 0x113624u, 0x11362Cu)) {
        return;
    }
    ctx->pc = 0x11362Cu;
label_11362c:
    // 0x11362c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_113630:
    if (ctx->pc == 0x113630u) {
        ctx->pc = 0x113630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11362Cu;
        // 0x113630: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113634u;
        goto label_113634;
    }
    ctx->pc = 0x11362Cu;
    {
        const bool branch_taken_0x11362c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11362Cu;
        // 0x113630: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11362c) {
            ctx->pc = 0x11366Cu;
            goto label_11366c;
        }
    }
    ctx->pc = 0x113634u;
label_113634:
    // 0x113634: 0x8e831a70  lw          $v1, 0x1A70($s4)
    ctx->pc = 0x113634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6768)));
label_113638:
    // 0x113638: 0x8c468918  lw          $a2, -0x76E8($v0)
    ctx->pc = 0x113638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936856)));
label_11363c:
    // 0x11363c: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
label_113640:
    if (ctx->pc == 0x113640u) {
        ctx->pc = 0x113640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11363Cu;
        // 0x113640: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113644u;
        goto label_113644;
    }
    ctx->pc = 0x11363Cu;
    {
        const bool branch_taken_0x11363c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x113640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11363Cu;
        // 0x113640: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11363c) {
            ctx->pc = 0x11365Cu;
            goto label_11365c;
        }
    }
    ctx->pc = 0x113644u;
label_113644:
    // 0x113644: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x113644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_113648:
    // 0x113648: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_11364c:
    if (ctx->pc == 0x11364Cu) {
        ctx->pc = 0x11364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113648u;
        // 0x11364c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113650u;
        goto label_113650;
    }
    ctx->pc = 0x113648u;
    {
        const bool branch_taken_0x113648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113648u;
        // 0x11364c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113648) {
            ctx->pc = 0x11365Cu;
            goto label_11365c;
        }
    }
    ctx->pc = 0x113650u;
label_113650:
    // 0x113650: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x113650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
label_113654:
    // 0x113654: 0xc07fd18  jal         func_1FF460
label_113658:
    if (ctx->pc == 0x113658u) {
        ctx->pc = 0x113658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113654u;
        // 0x113658: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11365Cu;
        goto label_11365c;
    }
    ctx->pc = 0x113654u;
    SET_GPR_U32(ctx, 31, 0x11365Cu);
    ctx->pc = 0x113658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113654u;
    // 0x113658: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x113654u, 0x11365Cu)) {
        return;
    }
    ctx->pc = 0x11365Cu;
label_11365c:
    // 0x11365c: 0xc06b908  jal         func_1AE420
label_113660:
    if (ctx->pc == 0x113660u) {
        ctx->pc = 0x113660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11365Cu;
        // 0x113660: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113664u;
        goto label_113664;
    }
    ctx->pc = 0x11365Cu;
    SET_GPR_U32(ctx, 31, 0x113664u);
    ctx->pc = 0x113660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11365Cu;
    // 0x113660: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE420u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE420u, 0x11365Cu, 0x113664u)) {
        return;
    }
    ctx->pc = 0x113664u;
label_113664:
    // 0x113664: 0xc08939a  jal         func_224E68
label_113668:
    if (ctx->pc == 0x113668u) {
        ctx->pc = 0x113668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113664u;
        // 0x113668: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11366Cu;
        goto label_11366c;
    }
    ctx->pc = 0x113664u;
    SET_GPR_U32(ctx, 31, 0x11366Cu);
    ctx->pc = 0x113668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113664u;
    // 0x113668: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E68u, 0x113664u, 0x11366Cu)) {
        return;
    }
    ctx->pc = 0x11366Cu;
label_11366c:
    // 0x11366c: 0x6ba70057  ldl         $a3, 0x57($sp)
    ctx->pc = 0x11366cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_113670:
    // 0x113670: 0x6fa70050  ldr         $a3, 0x50($sp)
    ctx->pc = 0x113670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_113674:
    // 0x113674: 0x6ba2005f  ldl         $v0, 0x5F($sp)
    ctx->pc = 0x113674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_113678:
    // 0x113678: 0x6fa20058  ldr         $v0, 0x58($sp)
    ctx->pc = 0x113678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_11367c:
    // 0x11367c: 0x6ba30067  ldl         $v1, 0x67($sp)
    ctx->pc = 0x11367cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_113680:
    // 0x113680: 0x6fa30060  ldr         $v1, 0x60($sp)
    ctx->pc = 0x113680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_113684:
    // 0x113684: 0x6ba5006f  ldl         $a1, 0x6F($sp)
    ctx->pc = 0x113684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_113688:
    // 0x113688: 0x6fa50068  ldr         $a1, 0x68($sp)
    ctx->pc = 0x113688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_11368c:
    // 0x11368c: 0xb2270007  sdl         $a3, 0x7($s1)
    ctx->pc = 0x11368cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_113690:
    // 0x113690: 0xb6270000  sdr         $a3, 0x0($s1)
    ctx->pc = 0x113690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_113694:
    // 0x113694: 0xb222000f  sdl         $v0, 0xF($s1)
    ctx->pc = 0x113694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_113698:
    // 0x113698: 0xb6220008  sdr         $v0, 0x8($s1)
    ctx->pc = 0x113698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11369c:
    // 0x11369c: 0xb2230017  sdl         $v1, 0x17($s1)
    ctx->pc = 0x11369cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1136a0:
    // 0x1136a0: 0xb6230010  sdr         $v1, 0x10($s1)
    ctx->pc = 0x1136a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1136a4:
    // 0x1136a4: 0xb225001f  sdl         $a1, 0x1F($s1)
    ctx->pc = 0x1136a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1136a8:
    // 0x1136a8: 0xb6250018  sdr         $a1, 0x18($s1)
    ctx->pc = 0x1136a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1136ac:
    // 0x1136ac: 0x6ba70077  ldl         $a3, 0x77($sp)
    ctx->pc = 0x1136acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1136b0:
    // 0x1136b0: 0x6fa70070  ldr         $a3, 0x70($sp)
    ctx->pc = 0x1136b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1136b4:
    // 0x1136b4: 0x6ba2007f  ldl         $v0, 0x7F($sp)
    ctx->pc = 0x1136b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1136b8:
    // 0x1136b8: 0x6fa20078  ldr         $v0, 0x78($sp)
    ctx->pc = 0x1136b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1136bc:
    // 0x1136bc: 0x6ba30087  ldl         $v1, 0x87($sp)
    ctx->pc = 0x1136bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1136c0:
    // 0x1136c0: 0x6fa30080  ldr         $v1, 0x80($sp)
    ctx->pc = 0x1136c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1136c4:
    // 0x1136c4: 0x6ba5008f  ldl         $a1, 0x8F($sp)
    ctx->pc = 0x1136c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1136c8:
    // 0x1136c8: 0x6fa50088  ldr         $a1, 0x88($sp)
    ctx->pc = 0x1136c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1136cc:
    // 0x1136cc: 0xb2270027  sdl         $a3, 0x27($s1)
    ctx->pc = 0x1136ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1136d0:
    // 0x1136d0: 0xb6270020  sdr         $a3, 0x20($s1)
    ctx->pc = 0x1136d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1136d4:
    // 0x1136d4: 0xb222002f  sdl         $v0, 0x2F($s1)
    ctx->pc = 0x1136d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1136d8:
    // 0x1136d8: 0xb6220028  sdr         $v0, 0x28($s1)
    ctx->pc = 0x1136d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1136dc:
    // 0x1136dc: 0xb2230037  sdl         $v1, 0x37($s1)
    ctx->pc = 0x1136dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1136e0:
    // 0x1136e0: 0xb6230030  sdr         $v1, 0x30($s1)
    ctx->pc = 0x1136e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1136e4:
    // 0x1136e4: 0xb225003f  sdl         $a1, 0x3F($s1)
    ctx->pc = 0x1136e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1136e8:
    // 0x1136e8: 0xb6250038  sdr         $a1, 0x38($s1)
    ctx->pc = 0x1136e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1136ec:
    // 0x1136ec: 0xc08992e  jal         func_2264B8
label_1136f0:
    if (ctx->pc == 0x1136F0u) {
        ctx->pc = 0x1136F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136ECu;
        // 0x1136f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1136F4u;
        goto label_1136f4;
    }
    ctx->pc = 0x1136ECu;
    SET_GPR_U32(ctx, 31, 0x1136F4u);
    ctx->pc = 0x1136F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1136ECu;
    // 0x1136f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x1136ECu, 0x1136F4u)) {
        return;
    }
    ctx->pc = 0x1136F4u;
label_1136f4:
    // 0x1136f4: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1136f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1136f8:
    // 0x1136f8: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1136f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1136fc:
    // 0x1136fc: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1136fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_113700:
    // 0x113700: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x113700u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_113704:
    // 0x113704: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x113704u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_113708:
    // 0x113708: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x113708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_11370c:
    // 0x11370c: 0x3e00008  jr          $ra
label_113710:
    if (ctx->pc == 0x113710u) {
        ctx->pc = 0x113710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11370Cu;
        // 0x113710: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113714u;
        goto label_113714;
    }
    ctx->pc = 0x11370Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11370Cu;
        // 0x113710: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11370Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113714u;
label_113714:
    // 0x113714: 0x0  nop
    ctx->pc = 0x113714u;
    // NOP
    ctx->pc = 0x113718u;
}
