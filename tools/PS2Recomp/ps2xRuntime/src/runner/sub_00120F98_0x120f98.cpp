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

// Function: sub_00120F98
// Address: 0x120f98 - 0x121458
void sub_00120F98_0x120f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120F98_0x120f98");
#endif

    switch (ctx->pc) {
        case 0x120f98u: goto label_120f98;
        case 0x120f9cu: goto label_120f9c;
        case 0x120fa0u: goto label_120fa0;
        case 0x120fa4u: goto label_120fa4;
        case 0x120fa8u: goto label_120fa8;
        case 0x120facu: goto label_120fac;
        case 0x120fb0u: goto label_120fb0;
        case 0x120fb4u: goto label_120fb4;
        case 0x120fb8u: goto label_120fb8;
        case 0x120fbcu: goto label_120fbc;
        case 0x120fc0u: goto label_120fc0;
        case 0x120fc4u: goto label_120fc4;
        case 0x120fc8u: goto label_120fc8;
        case 0x120fccu: goto label_120fcc;
        case 0x120fd0u: goto label_120fd0;
        case 0x120fd4u: goto label_120fd4;
        case 0x120fd8u: goto label_120fd8;
        case 0x120fdcu: goto label_120fdc;
        case 0x120fe0u: goto label_120fe0;
        case 0x120fe4u: goto label_120fe4;
        case 0x120fe8u: goto label_120fe8;
        case 0x120fecu: goto label_120fec;
        case 0x120ff0u: goto label_120ff0;
        case 0x120ff4u: goto label_120ff4;
        case 0x120ff8u: goto label_120ff8;
        case 0x120ffcu: goto label_120ffc;
        case 0x121000u: goto label_121000;
        case 0x121004u: goto label_121004;
        case 0x121008u: goto label_121008;
        case 0x12100cu: goto label_12100c;
        case 0x121010u: goto label_121010;
        case 0x121014u: goto label_121014;
        case 0x121018u: goto label_121018;
        case 0x12101cu: goto label_12101c;
        case 0x121020u: goto label_121020;
        case 0x121024u: goto label_121024;
        case 0x121028u: goto label_121028;
        case 0x12102cu: goto label_12102c;
        case 0x121030u: goto label_121030;
        case 0x121034u: goto label_121034;
        case 0x121038u: goto label_121038;
        case 0x12103cu: goto label_12103c;
        case 0x121040u: goto label_121040;
        case 0x121044u: goto label_121044;
        case 0x121048u: goto label_121048;
        case 0x12104cu: goto label_12104c;
        case 0x121050u: goto label_121050;
        case 0x121054u: goto label_121054;
        case 0x121058u: goto label_121058;
        case 0x12105cu: goto label_12105c;
        case 0x121060u: goto label_121060;
        case 0x121064u: goto label_121064;
        case 0x121068u: goto label_121068;
        case 0x12106cu: goto label_12106c;
        case 0x121070u: goto label_121070;
        case 0x121074u: goto label_121074;
        case 0x121078u: goto label_121078;
        case 0x12107cu: goto label_12107c;
        case 0x121080u: goto label_121080;
        case 0x121084u: goto label_121084;
        case 0x121088u: goto label_121088;
        case 0x12108cu: goto label_12108c;
        case 0x121090u: goto label_121090;
        case 0x121094u: goto label_121094;
        case 0x121098u: goto label_121098;
        case 0x12109cu: goto label_12109c;
        case 0x1210a0u: goto label_1210a0;
        case 0x1210a4u: goto label_1210a4;
        case 0x1210a8u: goto label_1210a8;
        case 0x1210acu: goto label_1210ac;
        case 0x1210b0u: goto label_1210b0;
        case 0x1210b4u: goto label_1210b4;
        case 0x1210b8u: goto label_1210b8;
        case 0x1210bcu: goto label_1210bc;
        case 0x1210c0u: goto label_1210c0;
        case 0x1210c4u: goto label_1210c4;
        case 0x1210c8u: goto label_1210c8;
        case 0x1210ccu: goto label_1210cc;
        case 0x1210d0u: goto label_1210d0;
        case 0x1210d4u: goto label_1210d4;
        case 0x1210d8u: goto label_1210d8;
        case 0x1210dcu: goto label_1210dc;
        case 0x1210e0u: goto label_1210e0;
        case 0x1210e4u: goto label_1210e4;
        case 0x1210e8u: goto label_1210e8;
        case 0x1210ecu: goto label_1210ec;
        case 0x1210f0u: goto label_1210f0;
        case 0x1210f4u: goto label_1210f4;
        case 0x1210f8u: goto label_1210f8;
        case 0x1210fcu: goto label_1210fc;
        case 0x121100u: goto label_121100;
        case 0x121104u: goto label_121104;
        case 0x121108u: goto label_121108;
        case 0x12110cu: goto label_12110c;
        case 0x121110u: goto label_121110;
        case 0x121114u: goto label_121114;
        case 0x121118u: goto label_121118;
        case 0x12111cu: goto label_12111c;
        case 0x121120u: goto label_121120;
        case 0x121124u: goto label_121124;
        case 0x121128u: goto label_121128;
        case 0x12112cu: goto label_12112c;
        case 0x121130u: goto label_121130;
        case 0x121134u: goto label_121134;
        case 0x121138u: goto label_121138;
        case 0x12113cu: goto label_12113c;
        case 0x121140u: goto label_121140;
        case 0x121144u: goto label_121144;
        case 0x121148u: goto label_121148;
        case 0x12114cu: goto label_12114c;
        case 0x121150u: goto label_121150;
        case 0x121154u: goto label_121154;
        case 0x121158u: goto label_121158;
        case 0x12115cu: goto label_12115c;
        case 0x121160u: goto label_121160;
        case 0x121164u: goto label_121164;
        case 0x121168u: goto label_121168;
        case 0x12116cu: goto label_12116c;
        case 0x121170u: goto label_121170;
        case 0x121174u: goto label_121174;
        case 0x121178u: goto label_121178;
        case 0x12117cu: goto label_12117c;
        case 0x121180u: goto label_121180;
        case 0x121184u: goto label_121184;
        case 0x121188u: goto label_121188;
        case 0x12118cu: goto label_12118c;
        case 0x121190u: goto label_121190;
        case 0x121194u: goto label_121194;
        case 0x121198u: goto label_121198;
        case 0x12119cu: goto label_12119c;
        case 0x1211a0u: goto label_1211a0;
        case 0x1211a4u: goto label_1211a4;
        case 0x1211a8u: goto label_1211a8;
        case 0x1211acu: goto label_1211ac;
        case 0x1211b0u: goto label_1211b0;
        case 0x1211b4u: goto label_1211b4;
        case 0x1211b8u: goto label_1211b8;
        case 0x1211bcu: goto label_1211bc;
        case 0x1211c0u: goto label_1211c0;
        case 0x1211c4u: goto label_1211c4;
        case 0x1211c8u: goto label_1211c8;
        case 0x1211ccu: goto label_1211cc;
        case 0x1211d0u: goto label_1211d0;
        case 0x1211d4u: goto label_1211d4;
        case 0x1211d8u: goto label_1211d8;
        case 0x1211dcu: goto label_1211dc;
        case 0x1211e0u: goto label_1211e0;
        case 0x1211e4u: goto label_1211e4;
        case 0x1211e8u: goto label_1211e8;
        case 0x1211ecu: goto label_1211ec;
        case 0x1211f0u: goto label_1211f0;
        case 0x1211f4u: goto label_1211f4;
        case 0x1211f8u: goto label_1211f8;
        case 0x1211fcu: goto label_1211fc;
        case 0x121200u: goto label_121200;
        case 0x121204u: goto label_121204;
        case 0x121208u: goto label_121208;
        case 0x12120cu: goto label_12120c;
        case 0x121210u: goto label_121210;
        case 0x121214u: goto label_121214;
        case 0x121218u: goto label_121218;
        case 0x12121cu: goto label_12121c;
        case 0x121220u: goto label_121220;
        case 0x121224u: goto label_121224;
        case 0x121228u: goto label_121228;
        case 0x12122cu: goto label_12122c;
        case 0x121230u: goto label_121230;
        case 0x121234u: goto label_121234;
        case 0x121238u: goto label_121238;
        case 0x12123cu: goto label_12123c;
        case 0x121240u: goto label_121240;
        case 0x121244u: goto label_121244;
        case 0x121248u: goto label_121248;
        case 0x12124cu: goto label_12124c;
        case 0x121250u: goto label_121250;
        case 0x121254u: goto label_121254;
        case 0x121258u: goto label_121258;
        case 0x12125cu: goto label_12125c;
        case 0x121260u: goto label_121260;
        case 0x121264u: goto label_121264;
        case 0x121268u: goto label_121268;
        case 0x12126cu: goto label_12126c;
        case 0x121270u: goto label_121270;
        case 0x121274u: goto label_121274;
        case 0x121278u: goto label_121278;
        case 0x12127cu: goto label_12127c;
        case 0x121280u: goto label_121280;
        case 0x121284u: goto label_121284;
        case 0x121288u: goto label_121288;
        case 0x12128cu: goto label_12128c;
        case 0x121290u: goto label_121290;
        case 0x121294u: goto label_121294;
        case 0x121298u: goto label_121298;
        case 0x12129cu: goto label_12129c;
        case 0x1212a0u: goto label_1212a0;
        case 0x1212a4u: goto label_1212a4;
        case 0x1212a8u: goto label_1212a8;
        case 0x1212acu: goto label_1212ac;
        case 0x1212b0u: goto label_1212b0;
        case 0x1212b4u: goto label_1212b4;
        case 0x1212b8u: goto label_1212b8;
        case 0x1212bcu: goto label_1212bc;
        case 0x1212c0u: goto label_1212c0;
        case 0x1212c4u: goto label_1212c4;
        case 0x1212c8u: goto label_1212c8;
        case 0x1212ccu: goto label_1212cc;
        case 0x1212d0u: goto label_1212d0;
        case 0x1212d4u: goto label_1212d4;
        case 0x1212d8u: goto label_1212d8;
        case 0x1212dcu: goto label_1212dc;
        case 0x1212e0u: goto label_1212e0;
        case 0x1212e4u: goto label_1212e4;
        case 0x1212e8u: goto label_1212e8;
        case 0x1212ecu: goto label_1212ec;
        case 0x1212f0u: goto label_1212f0;
        case 0x1212f4u: goto label_1212f4;
        case 0x1212f8u: goto label_1212f8;
        case 0x1212fcu: goto label_1212fc;
        case 0x121300u: goto label_121300;
        case 0x121304u: goto label_121304;
        case 0x121308u: goto label_121308;
        case 0x12130cu: goto label_12130c;
        case 0x121310u: goto label_121310;
        case 0x121314u: goto label_121314;
        case 0x121318u: goto label_121318;
        case 0x12131cu: goto label_12131c;
        case 0x121320u: goto label_121320;
        case 0x121324u: goto label_121324;
        case 0x121328u: goto label_121328;
        case 0x12132cu: goto label_12132c;
        case 0x121330u: goto label_121330;
        case 0x121334u: goto label_121334;
        case 0x121338u: goto label_121338;
        case 0x12133cu: goto label_12133c;
        case 0x121340u: goto label_121340;
        case 0x121344u: goto label_121344;
        case 0x121348u: goto label_121348;
        case 0x12134cu: goto label_12134c;
        case 0x121350u: goto label_121350;
        case 0x121354u: goto label_121354;
        case 0x121358u: goto label_121358;
        case 0x12135cu: goto label_12135c;
        case 0x121360u: goto label_121360;
        case 0x121364u: goto label_121364;
        case 0x121368u: goto label_121368;
        case 0x12136cu: goto label_12136c;
        case 0x121370u: goto label_121370;
        case 0x121374u: goto label_121374;
        case 0x121378u: goto label_121378;
        case 0x12137cu: goto label_12137c;
        case 0x121380u: goto label_121380;
        case 0x121384u: goto label_121384;
        case 0x121388u: goto label_121388;
        case 0x12138cu: goto label_12138c;
        case 0x121390u: goto label_121390;
        case 0x121394u: goto label_121394;
        case 0x121398u: goto label_121398;
        case 0x12139cu: goto label_12139c;
        case 0x1213a0u: goto label_1213a0;
        case 0x1213a4u: goto label_1213a4;
        case 0x1213a8u: goto label_1213a8;
        case 0x1213acu: goto label_1213ac;
        case 0x1213b0u: goto label_1213b0;
        case 0x1213b4u: goto label_1213b4;
        case 0x1213b8u: goto label_1213b8;
        case 0x1213bcu: goto label_1213bc;
        case 0x1213c0u: goto label_1213c0;
        case 0x1213c4u: goto label_1213c4;
        case 0x1213c8u: goto label_1213c8;
        case 0x1213ccu: goto label_1213cc;
        case 0x1213d0u: goto label_1213d0;
        case 0x1213d4u: goto label_1213d4;
        case 0x1213d8u: goto label_1213d8;
        case 0x1213dcu: goto label_1213dc;
        case 0x1213e0u: goto label_1213e0;
        case 0x1213e4u: goto label_1213e4;
        case 0x1213e8u: goto label_1213e8;
        case 0x1213ecu: goto label_1213ec;
        case 0x1213f0u: goto label_1213f0;
        case 0x1213f4u: goto label_1213f4;
        case 0x1213f8u: goto label_1213f8;
        case 0x1213fcu: goto label_1213fc;
        case 0x121400u: goto label_121400;
        case 0x121404u: goto label_121404;
        case 0x121408u: goto label_121408;
        case 0x12140cu: goto label_12140c;
        case 0x121410u: goto label_121410;
        case 0x121414u: goto label_121414;
        case 0x121418u: goto label_121418;
        case 0x12141cu: goto label_12141c;
        case 0x121420u: goto label_121420;
        case 0x121424u: goto label_121424;
        case 0x121428u: goto label_121428;
        case 0x12142cu: goto label_12142c;
        case 0x121430u: goto label_121430;
        case 0x121434u: goto label_121434;
        case 0x121438u: goto label_121438;
        case 0x12143cu: goto label_12143c;
        case 0x121440u: goto label_121440;
        case 0x121444u: goto label_121444;
        case 0x121448u: goto label_121448;
        case 0x12144cu: goto label_12144c;
        case 0x121450u: goto label_121450;
        case 0x121454u: goto label_121454;
        default: break;
    }

    ctx->pc = 0x120f98u;

label_120f98:
    // 0x120f98: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x120f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_120f9c:
    // 0x120f9c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x120f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_120fa0:
    // 0x120fa0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x120fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_120fa4:
    // 0x120fa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x120fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_120fa8:
    // 0x120fa8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x120fa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_120fac:
    // 0x120fac: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x120facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_120fb0:
    // 0x120fb0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x120fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_120fb4:
    // 0x120fb4: 0xc040642  jal         func_101908
label_120fb8:
    if (ctx->pc == 0x120FB8u) {
        ctx->pc = 0x120FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FB4u;
        // 0x120fb8: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x120FBCu;
        goto label_120fbc;
    }
    ctx->pc = 0x120FB4u;
    SET_GPR_U32(ctx, 31, 0x120FBCu);
    ctx->pc = 0x120FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120FB4u;
    // 0x120fb8: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x101908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101908u, 0x120FB4u, 0x120FBCu)) {
        return;
    }
    ctx->pc = 0x120FBCu;
label_120fbc:
    // 0x120fbc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x120fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_120fc0:
    // 0x120fc0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x120fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_120fc4:
    // 0x120fc4: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x120fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
label_120fc8:
    // 0x120fc8: 0x5483000a  bnel        $a0, $v1, . + 4 + (0xA << 2)
label_120fcc:
    if (ctx->pc == 0x120FCCu) {
        ctx->pc = 0x120FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FC8u;
        // 0x120fcc: 0x8e220c70  lw          $v0, 0xC70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120FD0u;
        goto label_120fd0;
    }
    ctx->pc = 0x120FC8u;
    {
        const bool branch_taken_0x120fc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x120fc8) {
            ctx->pc = 0x120FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120FC8u;
            // 0x120fcc: 0x8e220c70  lw          $v0, 0xC70($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120FF4u;
            goto label_120ff4;
        }
    }
    ctx->pc = 0x120FD0u;
label_120fd0:
    // 0x120fd0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x120fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_120fd4:
    // 0x120fd4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x120fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_120fd8:
    // 0x120fd8: 0x84440228  lh          $a0, 0x228($v0)
    ctx->pc = 0x120fd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 552)));
label_120fdc:
    // 0x120fdc: 0x8c45022c  lw          $a1, 0x22C($v0)
    ctx->pc = 0x120fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 556)));
label_120fe0:
    // 0x120fe0: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x120fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_120fe4:
    // 0x120fe4: 0xa0f809  jalr        $a1
label_120fe8:
    if (ctx->pc == 0x120FE8u) {
        ctx->pc = 0x120FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FE4u;
        // 0x120fe8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120FECu;
        goto label_120fec;
    }
    ctx->pc = 0x120FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x120FECu);
        ctx->pc = 0x120FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FE4u;
        // 0x120fe8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120FE4u, 0x120FECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120FECu;
label_120fec:
    // 0x120fec: 0x10000113  b           . + 4 + (0x113 << 2)
label_120ff0:
    if (ctx->pc == 0x120FF0u) {
        ctx->pc = 0x120FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FECu;
        // 0x120ff0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120FF4u;
        goto label_120ff4;
    }
    ctx->pc = 0x120FECu;
    {
        const bool branch_taken_0x120fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FECu;
        // 0x120ff0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120fec) {
            ctx->pc = 0x12143Cu;
            goto label_12143c;
        }
    }
    ctx->pc = 0x120FF4u;
label_120ff4:
    // 0x120ff4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_120ff8:
    if (ctx->pc == 0x120FF8u) {
        ctx->pc = 0x120FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FF4u;
        // 0x120ff8: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120FFCu;
        goto label_120ffc;
    }
    ctx->pc = 0x120FF4u;
    {
        const bool branch_taken_0x120ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FF4u;
        // 0x120ff8: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ff4) {
            ctx->pc = 0x121018u;
            goto label_121018;
        }
    }
    ctx->pc = 0x120FFCu;
label_120ffc:
    // 0x120ffc: 0x8c438888  lw          $v1, -0x7778($v0)
    ctx->pc = 0x120ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936712)));
label_121000:
    // 0x121000: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_121004:
    if (ctx->pc == 0x121004u) {
        ctx->pc = 0x121004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121000u;
        // 0x121004: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121008u;
        goto label_121008;
    }
    ctx->pc = 0x121000u;
    {
        const bool branch_taken_0x121000 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x121004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121000u;
        // 0x121004: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121000) {
            ctx->pc = 0x12101Cu;
            goto label_12101c;
        }
    }
    ctx->pc = 0x121008u;
label_121008:
    // 0x121008: 0xc0497ae  jal         func_125EB8
label_12100c:
    if (ctx->pc == 0x12100Cu) {
        ctx->pc = 0x12100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121008u;
        // 0x12100c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121010u;
        goto label_121010;
    }
    ctx->pc = 0x121008u;
    SET_GPR_U32(ctx, 31, 0x121010u);
    ctx->pc = 0x12100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121008u;
    // 0x12100c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x125EB8u, 0x121008u, 0x121010u)) {
        return;
    }
    ctx->pc = 0x121010u;
label_121010:
    // 0x121010: 0x1000010a  b           . + 4 + (0x10A << 2)
label_121014:
    if (ctx->pc == 0x121014u) {
        ctx->pc = 0x121014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121010u;
        // 0x121014: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121018u;
        goto label_121018;
    }
    ctx->pc = 0x121010u;
    {
        const bool branch_taken_0x121010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121010u;
        // 0x121014: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121010) {
            ctx->pc = 0x12143Cu;
            goto label_12143c;
        }
    }
    ctx->pc = 0x121018u;
label_121018:
    // 0x121018: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x121018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_12101c:
    // 0x12101c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x12101cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_121020:
    // 0x121020: 0x8c6286c8  lw          $v0, -0x7938($v1)
    ctx->pc = 0x121020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936264)));
label_121024:
    // 0x121024: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_121028:
    if (ctx->pc == 0x121028u) {
        ctx->pc = 0x121028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121024u;
        // 0x121028: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12102Cu;
        goto label_12102c;
    }
    ctx->pc = 0x121024u;
    {
        const bool branch_taken_0x121024 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x121028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121024u;
        // 0x121028: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121024) {
            ctx->pc = 0x12103Cu;
            goto label_12103c;
        }
    }
    ctx->pc = 0x12102Cu;
label_12102c:
    // 0x12102c: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x12102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_121030:
    // 0x121030: 0x844401d8  lh          $a0, 0x1D8($v0)
    ctx->pc = 0x121030u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 472)));
label_121034:
    // 0x121034: 0x10000007  b           . + 4 + (0x7 << 2)
label_121038:
    if (ctx->pc == 0x121038u) {
        ctx->pc = 0x121038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121034u;
        // 0x121038: 0x8c4301dc  lw          $v1, 0x1DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 476)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12103Cu;
        goto label_12103c;
    }
    ctx->pc = 0x121034u;
    {
        const bool branch_taken_0x121034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121034u;
        // 0x121038: 0x8c4301dc  lw          $v1, 0x1DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121034) {
            ctx->pc = 0x121054u;
            goto label_121054;
        }
    }
    ctx->pc = 0x12103Cu;
label_12103c:
    // 0x12103c: 0x8c4386d0  lw          $v1, -0x7930($v0)
    ctx->pc = 0x12103cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936272)));
label_121040:
    // 0x121040: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_121044:
    if (ctx->pc == 0x121044u) {
        ctx->pc = 0x121044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121040u;
        // 0x121044: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121048u;
        goto label_121048;
    }
    ctx->pc = 0x121040u;
    {
        const bool branch_taken_0x121040 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x121044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121040u;
        // 0x121044: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121040) {
            ctx->pc = 0x121064u;
            goto label_121064;
        }
    }
    ctx->pc = 0x121048u;
label_121048:
    // 0x121048: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x121048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_12104c:
    // 0x12104c: 0x844401d0  lh          $a0, 0x1D0($v0)
    ctx->pc = 0x12104cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 464)));
label_121050:
    // 0x121050: 0x8c4301d4  lw          $v1, 0x1D4($v0)
    ctx->pc = 0x121050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 468)));
label_121054:
    // 0x121054: 0x60f809  jalr        $v1
label_121058:
    if (ctx->pc == 0x121058u) {
        ctx->pc = 0x121058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121054u;
        // 0x121058: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12105Cu;
        goto label_12105c;
    }
    ctx->pc = 0x121054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12105Cu);
        ctx->pc = 0x121058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121054u;
        // 0x121058: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121054u, 0x12105Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12105Cu;
label_12105c:
    // 0x12105c: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_121060:
    if (ctx->pc == 0x121060u) {
        ctx->pc = 0x121060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12105Cu;
        // 0x121060: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121064u;
        goto label_121064;
    }
    ctx->pc = 0x12105Cu;
    {
        const bool branch_taken_0x12105c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12105Cu;
        // 0x121060: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12105c) {
            ctx->pc = 0x12143Cu;
            goto label_12143c;
        }
    }
    ctx->pc = 0x121064u;
label_121064:
    // 0x121064: 0x8c43f880  lw          $v1, -0x780($v0)
    ctx->pc = 0x121064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965376)));
label_121068:
    // 0x121068: 0x1483002a  bne         $a0, $v1, . + 4 + (0x2A << 2)
label_12106c:
    if (ctx->pc == 0x12106Cu) {
        ctx->pc = 0x12106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121068u;
        // 0x12106c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121070u;
        goto label_121070;
    }
    ctx->pc = 0x121068u;
    {
        const bool branch_taken_0x121068 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121068u;
        // 0x12106c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121068) {
            ctx->pc = 0x121114u;
            goto label_121114;
        }
    }
    ctx->pc = 0x121070u;
label_121070:
    // 0x121070: 0x8e220f54  lw          $v0, 0xF54($s1)
    ctx->pc = 0x121070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3924)));
label_121074:
    // 0x121074: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_121078:
    if (ctx->pc == 0x121078u) {
        ctx->pc = 0x121078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121074u;
        // 0x121078: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12107Cu;
        goto label_12107c;
    }
    ctx->pc = 0x121074u;
    {
        const bool branch_taken_0x121074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121074) {
            ctx->pc = 0x121078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121074u;
            // 0x121078: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121088u;
            goto label_121088;
        }
    }
    ctx->pc = 0x12107Cu;
label_12107c:
    // 0x12107c: 0xc049a70  jal         func_1269C0
label_121080:
    if (ctx->pc == 0x121080u) {
        ctx->pc = 0x121080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12107Cu;
        // 0x121080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121084u;
        goto label_121084;
    }
    ctx->pc = 0x12107Cu;
    SET_GPR_U32(ctx, 31, 0x121084u);
    ctx->pc = 0x121080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12107Cu;
    // 0x121080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1269C0u, 0x12107Cu, 0x121084u)) {
        return;
    }
    ctx->pc = 0x121084u;
label_121084:
    // 0x121084: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x121084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_121088:
    // 0x121088: 0x104000ec  beqz        $v0, . + 4 + (0xEC << 2)
label_12108c:
    if (ctx->pc == 0x12108Cu) {
        ctx->pc = 0x12108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121088u;
        // 0x12108c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121090u;
        goto label_121090;
    }
    ctx->pc = 0x121088u;
    {
        const bool branch_taken_0x121088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121088u;
        // 0x12108c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121088) {
            ctx->pc = 0x12143Cu;
            goto label_12143c;
        }
    }
    ctx->pc = 0x121090u;
label_121090:
    // 0x121090: 0x8e220c70  lw          $v0, 0xC70($s1)
    ctx->pc = 0x121090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3184)));
label_121094:
    // 0x121094: 0x544000ea  bnel        $v0, $zero, . + 4 + (0xEA << 2)
label_121098:
    if (ctx->pc == 0x121098u) {
        ctx->pc = 0x121098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121094u;
        // 0x121098: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12109Cu;
        goto label_12109c;
    }
    ctx->pc = 0x121094u;
    {
        const bool branch_taken_0x121094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121094) {
            ctx->pc = 0x121098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121094u;
            // 0x121098: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121440u;
            goto label_121440;
        }
    }
    ctx->pc = 0x12109Cu;
label_12109c:
    // 0x12109c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x12109cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1210a0:
    // 0x1210a0: 0x8e250218  lw          $a1, 0x218($s1)
    ctx->pc = 0x1210a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_1210a4:
    // 0x1210a4: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x1210a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
label_1210a8:
    // 0x1210a8: 0xc07f1c0  jal         func_1FC700
label_1210ac:
    if (ctx->pc == 0x1210ACu) {
        ctx->pc = 0x1210ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1210A8u;
        // 0x1210ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1210B0u;
        goto label_1210b0;
    }
    ctx->pc = 0x1210A8u;
    SET_GPR_U32(ctx, 31, 0x1210B0u);
    ctx->pc = 0x1210ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1210A8u;
    // 0x1210ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1210A8u, 0x1210B0u)) {
        return;
    }
    ctx->pc = 0x1210B0u;
label_1210b0:
    // 0x1210b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1210b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1210b4:
    // 0x1210b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1210b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1210b8:
    // 0x1210b8: 0x504000e0  beql        $v0, $zero, . + 4 + (0xE0 << 2)
label_1210bc:
    if (ctx->pc == 0x1210BCu) {
        ctx->pc = 0x1210BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1210B8u;
        // 0x1210bc: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1210C0u;
        goto label_1210c0;
    }
    ctx->pc = 0x1210B8u;
    {
        const bool branch_taken_0x1210b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1210b8) {
            ctx->pc = 0x1210BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1210B8u;
            // 0x1210bc: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12143Cu;
            goto label_12143c;
        }
    }
    ctx->pc = 0x1210C0u;
label_1210c0:
    // 0x1210c0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1210c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1210c4:
    // 0x1210c4: 0x0  nop
    ctx->pc = 0x1210c4u;
    // NOP
label_1210c8:
    // 0x1210c8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1210c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1210cc:
    // 0x1210cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1210d0:
    if (ctx->pc == 0x1210D0u) {
        ctx->pc = 0x1210D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1210CCu;
        // 0x1210d0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1210D4u;
        goto label_1210d4;
    }
    ctx->pc = 0x1210CCu;
    {
        const bool branch_taken_0x1210cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1210D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1210CCu;
        // 0x1210d0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1210cc) {
            ctx->pc = 0x1210E4u;
            goto label_1210e4;
        }
    }
    ctx->pc = 0x1210D4u;
label_1210d4:
    // 0x1210d4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1210d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1210d8:
    // 0x1210d8: 0xc0482e6  jal         func_120B98
label_1210dc:
    if (ctx->pc == 0x1210DCu) {
        ctx->pc = 0x1210DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1210D8u;
        // 0x1210dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1210E0u;
        goto label_1210e0;
    }
    ctx->pc = 0x1210D8u;
    SET_GPR_U32(ctx, 31, 0x1210E0u);
    ctx->pc = 0x1210DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1210D8u;
    // 0x1210dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x120B98u, 0x1210D8u, 0x1210E0u)) {
        return;
    }
    ctx->pc = 0x1210E0u;
label_1210e0:
    // 0x1210e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1210e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1210e4:
    // 0x1210e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1210e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1210e8:
    // 0x1210e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1210e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1210ec:
    // 0x1210ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1210ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1210f0:
    // 0x1210f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1210f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1210f4:
    // 0x1210f4: 0xc07f0c8  jal         func_1FC320
label_1210f8:
    if (ctx->pc == 0x1210F8u) {
        ctx->pc = 0x1210F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1210F4u;
        // 0x1210f8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1210FCu;
        goto label_1210fc;
    }
    ctx->pc = 0x1210F4u;
    SET_GPR_U32(ctx, 31, 0x1210FCu);
    ctx->pc = 0x1210F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1210F4u;
    // 0x1210f8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1210F4u, 0x1210FCu)) {
        return;
    }
    ctx->pc = 0x1210FCu;
label_1210fc:
    // 0x1210fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1210fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_121100:
    // 0x121100: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x121100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_121104:
    // 0x121104: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_121108:
    if (ctx->pc == 0x121108u) {
        ctx->pc = 0x121108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121104u;
        // 0x121108: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12110Cu;
        goto label_12110c;
    }
    ctx->pc = 0x121104u;
    {
        const bool branch_taken_0x121104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x121108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121104u;
        // 0x121108: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121104) {
            ctx->pc = 0x1210C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1210c8;
        }
    }
    ctx->pc = 0x12110Cu;
label_12110c:
    // 0x12110c: 0x100000cb  b           . + 4 + (0xCB << 2)
label_121110:
    if (ctx->pc == 0x121110u) {
        ctx->pc = 0x121110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12110Cu;
        // 0x121110: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121114u;
        goto label_121114;
    }
    ctx->pc = 0x12110Cu;
    {
        const bool branch_taken_0x12110c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12110Cu;
        // 0x121110: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12110c) {
            ctx->pc = 0x12143Cu;
            goto label_12143c;
        }
    }
    ctx->pc = 0x121114u;
label_121114:
    // 0x121114: 0x8c43f948  lw          $v1, -0x6B8($v0)
    ctx->pc = 0x121114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965576)));
label_121118:
    // 0x121118: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
label_12111c:
    if (ctx->pc == 0x12111Cu) {
        ctx->pc = 0x12111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121118u;
        // 0x12111c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121120u;
        goto label_121120;
    }
    ctx->pc = 0x121118u;
    {
        const bool branch_taken_0x121118 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121118u;
        // 0x12111c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121118) {
            ctx->pc = 0x12115Cu;
            goto label_12115c;
        }
    }
    ctx->pc = 0x121120u;
label_121120:
    // 0x121120: 0xc6210bdc  lwc1        $f1, 0xBDC($s1)
    ctx->pc = 0x121120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_121124:
    // 0x121124: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x121124u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121128:
    // 0x121128: 0x0  nop
    ctx->pc = 0x121128u;
    // NOP
label_12112c:
    // 0x12112c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12112cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_121130:
    // 0x121130: 0x0  nop
    ctx->pc = 0x121130u;
    // NOP
label_121134:
    // 0x121134: 0x450000c1  bc1f        . + 4 + (0xC1 << 2)
label_121138:
    if (ctx->pc == 0x121138u) {
        ctx->pc = 0x121138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121134u;
        // 0x121138: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12113Cu;
        goto label_12113c;
    }
    ctx->pc = 0x121134u;
    {
        const bool branch_taken_0x121134 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121134u;
        // 0x121138: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121134) {
            ctx->pc = 0x12143Cu;
            goto label_12143c;
        }
    }
    ctx->pc = 0x12113Cu;
label_12113c:
    // 0x12113c: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x12113cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_121140:
    // 0x121140: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x121140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_121144:
    // 0x121144: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x121144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_121148:
    // 0x121148: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x121148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_12114c:
    // 0x12114c: 0x40f809  jalr        $v0
label_121150:
    if (ctx->pc == 0x121150u) {
        ctx->pc = 0x121150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12114Cu;
        // 0x121150: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121154u;
        goto label_121154;
    }
    ctx->pc = 0x12114Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x121154u);
        ctx->pc = 0x121150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12114Cu;
        // 0x121150: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12114Cu, 0x121154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121154u;
label_121154:
    // 0x121154: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_121158:
    if (ctx->pc == 0x121158u) {
        ctx->pc = 0x121158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121154u;
        // 0x121158: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12115Cu;
        goto label_12115c;
    }
    ctx->pc = 0x121154u;
    {
        const bool branch_taken_0x121154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121154u;
        // 0x121158: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121154) {
            ctx->pc = 0x12143Cu;
            goto label_12143c;
        }
    }
    ctx->pc = 0x12115Cu;
label_12115c:
    // 0x12115c: 0x8c434610  lw          $v1, 0x4610($v0)
    ctx->pc = 0x12115cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17936)));
label_121160:
    // 0x121160: 0x5483000a  bnel        $a0, $v1, . + 4 + (0xA << 2)
label_121164:
    if (ctx->pc == 0x121164u) {
        ctx->pc = 0x121164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121160u;
        // 0x121164: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121168u;
        goto label_121168;
    }
    ctx->pc = 0x121160u;
    {
        const bool branch_taken_0x121160 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x121160) {
            ctx->pc = 0x121164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121160u;
            // 0x121164: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12118Cu;
            goto label_12118c;
        }
    }
    ctx->pc = 0x121168u;
label_121168:
    // 0x121168: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x121168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_12116c:
    // 0x12116c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_121170:
    if (ctx->pc == 0x121170u) {
        ctx->pc = 0x121170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12116Cu;
        // 0x121170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121174u;
        goto label_121174;
    }
    ctx->pc = 0x12116Cu;
    {
        const bool branch_taken_0x12116c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x121170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12116Cu;
        // 0x121170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12116c) {
            ctx->pc = 0x121180u;
            goto label_121180;
        }
    }
    ctx->pc = 0x121174u;
label_121174:
    // 0x121174: 0x14b100b1  bne         $a1, $s1, . + 4 + (0xB1 << 2)
label_121178:
    if (ctx->pc == 0x121178u) {
        ctx->pc = 0x121178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121174u;
        // 0x121178: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12117Cu;
        goto label_12117c;
    }
    ctx->pc = 0x121174u;
    {
        const bool branch_taken_0x121174 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x121178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121174u;
        // 0x121178: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121174) {
            ctx->pc = 0x12143Cu;
            goto label_12143c;
        }
    }
    ctx->pc = 0x12117Cu;
label_12117c:
    // 0x12117c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121180:
    // 0x121180: 0xae200c94  sw          $zero, 0xC94($s1)
    ctx->pc = 0x121180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3220), GPR_U32(ctx, 0));
label_121184:
    // 0x121184: 0x100000ac  b           . + 4 + (0xAC << 2)
label_121188:
    if (ctx->pc == 0x121188u) {
        ctx->pc = 0x121188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121184u;
        // 0x121188: 0xae220de0  sw          $v0, 0xDE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12118Cu;
        goto label_12118c;
    }
    ctx->pc = 0x121184u;
    {
        const bool branch_taken_0x121184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121184u;
        // 0x121188: 0xae220de0  sw          $v0, 0xDE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121184) {
            ctx->pc = 0x121438u;
            goto label_121438;
        }
    }
    ctx->pc = 0x12118Cu;
label_12118c:
    // 0x12118c: 0x8c434618  lw          $v1, 0x4618($v0)
    ctx->pc = 0x12118cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17944)));
label_121190:
    // 0x121190: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_121194:
    if (ctx->pc == 0x121194u) {
        ctx->pc = 0x121194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121190u;
        // 0x121194: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121198u;
        goto label_121198;
    }
    ctx->pc = 0x121190u;
    {
        const bool branch_taken_0x121190 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x121194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121190u;
        // 0x121194: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121190) {
            ctx->pc = 0x1211A4u;
            goto label_1211a4;
        }
    }
    ctx->pc = 0x121198u;
label_121198:
    // 0x121198: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x121198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_12119c:
    // 0x12119c: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_1211a0:
    if (ctx->pc == 0x1211A0u) {
        ctx->pc = 0x1211A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12119Cu;
        // 0x1211a0: 0xae220dd4  sw          $v0, 0xDD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1211A4u;
        goto label_1211a4;
    }
    ctx->pc = 0x12119Cu;
    {
        const bool branch_taken_0x12119c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1211A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12119Cu;
        // 0x1211a0: 0xae220dd4  sw          $v0, 0xDD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12119c) {
            ctx->pc = 0x121438u;
            goto label_121438;
        }
    }
    ctx->pc = 0x1211A4u;
label_1211a4:
    // 0x1211a4: 0x8c43bcf0  lw          $v1, -0x4310($v0)
    ctx->pc = 0x1211a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950128)));
label_1211a8:
    // 0x1211a8: 0x5483003f  bnel        $a0, $v1, . + 4 + (0x3F << 2)
label_1211ac:
    if (ctx->pc == 0x1211ACu) {
        ctx->pc = 0x1211ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211A8u;
        // 0x1211ac: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1211B0u;
        goto label_1211b0;
    }
    ctx->pc = 0x1211A8u;
    {
        const bool branch_taken_0x1211a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1211a8) {
            ctx->pc = 0x1211ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1211A8u;
            // 0x1211ac: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1212A8u;
            goto label_1212a8;
        }
    }
    ctx->pc = 0x1211B0u;
label_1211b0:
    // 0x1211b0: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x1211b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1211b4:
    // 0x1211b4: 0x520000a1  beql        $s0, $zero, . + 4 + (0xA1 << 2)
label_1211b8:
    if (ctx->pc == 0x1211B8u) {
        ctx->pc = 0x1211B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211B4u;
        // 0x1211b8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1211BCu;
        goto label_1211bc;
    }
    ctx->pc = 0x1211B4u;
    {
        const bool branch_taken_0x1211b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1211b4) {
            ctx->pc = 0x1211B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1211B4u;
            // 0x1211b8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12143Cu;
            goto label_12143c;
        }
    }
    ctx->pc = 0x1211BCu;
label_1211bc:
    // 0x1211bc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1211bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1211c0:
    // 0x1211c0: 0x50a0009e  beql        $a1, $zero, . + 4 + (0x9E << 2)
label_1211c4:
    if (ctx->pc == 0x1211C4u) {
        ctx->pc = 0x1211C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211C0u;
        // 0x1211c4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1211C8u;
        goto label_1211c8;
    }
    ctx->pc = 0x1211C0u;
    {
        const bool branch_taken_0x1211c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1211c0) {
            ctx->pc = 0x1211C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1211C0u;
            // 0x1211c4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12143Cu;
            goto label_12143c;
        }
    }
    ctx->pc = 0x1211C8u;
label_1211c8:
    // 0x1211c8: 0xc041a08  jal         func_106820
label_1211cc:
    if (ctx->pc == 0x1211CCu) {
        ctx->pc = 0x1211CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211C8u;
        // 0x1211cc: 0x26240f84  addiu       $a0, $s1, 0xF84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3972));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1211D0u;
        goto label_1211d0;
    }
    ctx->pc = 0x1211C8u;
    SET_GPR_U32(ctx, 31, 0x1211D0u);
    ctx->pc = 0x1211CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1211C8u;
    // 0x1211cc: 0x26240f84  addiu       $a0, $s1, 0xF84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3972));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x106820u, 0x1211C8u, 0x1211D0u)) {
        return;
    }
    ctx->pc = 0x1211D0u;
label_1211d0:
    // 0x1211d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1211d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1211d4:
    // 0x1211d4: 0xc040714  jal         func_101C50
label_1211d8:
    if (ctx->pc == 0x1211D8u) {
        ctx->pc = 0x1211D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211D4u;
        // 0x1211d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1211DCu;
        goto label_1211dc;
    }
    ctx->pc = 0x1211D4u;
    SET_GPR_U32(ctx, 31, 0x1211DCu);
    ctx->pc = 0x1211D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1211D4u;
    // 0x1211d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101C50u, 0x1211D4u, 0x1211DCu)) {
        return;
    }
    ctx->pc = 0x1211DCu;
label_1211dc:
    // 0x1211dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1211dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1211e0:
    // 0x1211e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1211e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1211e4:
    // 0x1211e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1211e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1211e8:
    // 0x1211e8: 0x12020093  beq         $s0, $v0, . + 4 + (0x93 << 2)
label_1211ec:
    if (ctx->pc == 0x1211ECu) {
        ctx->pc = 0x1211ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211E8u;
        // 0x1211ec: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1211F0u;
        goto label_1211f0;
    }
    ctx->pc = 0x1211E8u;
    {
        const bool branch_taken_0x1211e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1211ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211E8u;
        // 0x1211ec: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211e8) {
            ctx->pc = 0x121438u;
            goto label_121438;
        }
    }
    ctx->pc = 0x1211F0u;
label_1211f0:
    // 0x1211f0: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1211f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1211f4:
    // 0x1211f4: 0x8c458330  lw          $a1, -0x7CD0($v0)
    ctx->pc = 0x1211f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935344)));
label_1211f8:
    // 0x1211f8: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1211f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1211fc:
    // 0x1211fc: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1211fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_121200:
    // 0x121200: 0x40f809  jalr        $v0
label_121204:
    if (ctx->pc == 0x121204u) {
        ctx->pc = 0x121204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121200u;
        // 0x121204: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121208u;
        goto label_121208;
    }
    ctx->pc = 0x121200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x121208u);
        ctx->pc = 0x121204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121200u;
        // 0x121204: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121200u, 0x121208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121208u;
label_121208:
    // 0x121208: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12120c:
    // 0x12120c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12120cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_121210:
    // 0x121210: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x121210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_121214:
    // 0x121214: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x121214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121218:
    // 0x121218: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x121218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_12121c:
    // 0x12121c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x12121cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_121220:
    // 0x121220: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x121220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_121224:
    // 0x121224: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x121224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_121228:
    // 0x121228: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x121228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_12122c:
    // 0x12122c: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x12122cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
label_121230:
    // 0x121230: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x121230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_121234:
    // 0x121234: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x121234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_121238:
    // 0x121238: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x121238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_12123c:
    // 0x12123c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x12123cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_121240:
    // 0x121240: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x121240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_121244:
    // 0x121244: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x121244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_121248:
    // 0x121248: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x121248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_12124c:
    // 0x12124c: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x12124cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_121250:
    // 0x121250: 0xe7b40024  swc1        $f20, 0x24($sp)
    ctx->pc = 0x121250u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_121254:
    // 0x121254: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x121254u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_121258:
    // 0x121258: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x121258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_12125c:
    // 0x12125c: 0x844401c0  lh          $a0, 0x1C0($v0)
    ctx->pc = 0x12125cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 448)));
label_121260:
    // 0x121260: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x121260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_121264:
    // 0x121264: 0x8c4301c4  lw          $v1, 0x1C4($v0)
    ctx->pc = 0x121264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
label_121268:
    // 0x121268: 0x60f809  jalr        $v1
label_12126c:
    if (ctx->pc == 0x12126Cu) {
        ctx->pc = 0x12126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121268u;
        // 0x12126c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121270u;
        goto label_121270;
    }
    ctx->pc = 0x121268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x121270u);
        ctx->pc = 0x12126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121268u;
        // 0x12126c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121268u, 0x121270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121270u;
label_121270:
    // 0x121270: 0xe63401c0  swc1        $f20, 0x1C0($s1)
    ctx->pc = 0x121270u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 448), bits); }
label_121274:
    // 0x121274: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x121274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121278:
    // 0x121278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12127c:
    // 0x12127c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12127cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121280:
    // 0x121280: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x121280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121284:
    // 0x121284: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x121284u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121288:
    // 0x121288: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x121288u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12128c:
    // 0x12128c: 0xc04074e  jal         func_101D38
label_121290:
    if (ctx->pc == 0x121290u) {
        ctx->pc = 0x121290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12128Cu;
        // 0x121290: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121294u;
        goto label_121294;
    }
    ctx->pc = 0x12128Cu;
    SET_GPR_U32(ctx, 31, 0x121294u);
    ctx->pc = 0x121290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12128Cu;
    // 0x121290: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101D38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101D38u, 0x12128Cu, 0x121294u)) {
        return;
    }
    ctx->pc = 0x121294u;
label_121294:
    // 0x121294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_121298:
    // 0x121298: 0xc049bae  jal         func_126EB8
label_12129c:
    if (ctx->pc == 0x12129Cu) {
        ctx->pc = 0x12129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121298u;
        // 0x12129c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1212A0u;
        goto label_1212a0;
    }
    ctx->pc = 0x121298u;
    SET_GPR_U32(ctx, 31, 0x1212A0u);
    ctx->pc = 0x12129Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121298u;
    // 0x12129c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126EB8u, 0x121298u, 0x1212A0u)) {
        return;
    }
    ctx->pc = 0x1212A0u;
label_1212a0:
    // 0x1212a0: 0x10000066  b           . + 4 + (0x66 << 2)
label_1212a4:
    if (ctx->pc == 0x1212A4u) {
        ctx->pc = 0x1212A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212A0u;
        // 0x1212a4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1212A8u;
        goto label_1212a8;
    }
    ctx->pc = 0x1212A0u;
    {
        const bool branch_taken_0x1212a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1212A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212A0u;
        // 0x1212a4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212a0) {
            ctx->pc = 0x12143Cu;
            goto label_12143c;
        }
    }
    ctx->pc = 0x1212A8u;
label_1212a8:
    // 0x1212a8: 0x8c43bd00  lw          $v1, -0x4300($v0)
    ctx->pc = 0x1212a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950144)));
label_1212ac:
    // 0x1212ac: 0x14830043  bne         $a0, $v1, . + 4 + (0x43 << 2)
label_1212b0:
    if (ctx->pc == 0x1212B0u) {
        ctx->pc = 0x1212B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212ACu;
        // 0x1212b0: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1212B4u;
        goto label_1212b4;
    }
    ctx->pc = 0x1212ACu;
    {
        const bool branch_taken_0x1212ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1212B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212ACu;
        // 0x1212b0: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212ac) {
            ctx->pc = 0x1213BCu;
            goto label_1213bc;
        }
    }
    ctx->pc = 0x1212B4u;
label_1212b4:
    // 0x1212b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1212b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1212b8:
    // 0x1212b8: 0x26240320  addiu       $a0, $s1, 0x320
    ctx->pc = 0x1212b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_1212bc:
    // 0x1212bc: 0xae22144c  sw          $v0, 0x144C($s1)
    ctx->pc = 0x1212bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5196), GPR_U32(ctx, 2));
label_1212c0:
    // 0x1212c0: 0xc068218  jal         func_1A0860
label_1212c4:
    if (ctx->pc == 0x1212C4u) {
        ctx->pc = 0x1212C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212C0u;
        // 0x1212c4: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1212C8u;
        goto label_1212c8;
    }
    ctx->pc = 0x1212C0u;
    SET_GPR_U32(ctx, 31, 0x1212C8u);
    ctx->pc = 0x1212C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1212C0u;
    // 0x1212c4: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0860u, 0x1212C0u, 0x1212C8u)) {
        return;
    }
    ctx->pc = 0x1212C8u;
label_1212c8:
    // 0x1212c8: 0x8e048330  lw          $a0, -0x7CD0($s0)
    ctx->pc = 0x1212c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935344)));
label_1212cc:
    // 0x1212cc: 0xc065c68  jal         func_1971A0
label_1212d0:
    if (ctx->pc == 0x1212D0u) {
        ctx->pc = 0x1212D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212CCu;
        // 0x1212d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1212D4u;
        goto label_1212d4;
    }
    ctx->pc = 0x1212CCu;
    SET_GPR_U32(ctx, 31, 0x1212D4u);
    ctx->pc = 0x1212D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1212CCu;
    // 0x1212d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x1212CCu, 0x1212D4u)) {
        return;
    }
    ctx->pc = 0x1212D4u;
label_1212d4:
    // 0x1212d4: 0x50400059  beql        $v0, $zero, . + 4 + (0x59 << 2)
label_1212d8:
    if (ctx->pc == 0x1212D8u) {
        ctx->pc = 0x1212D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212D4u;
        // 0x1212d8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1212DCu;
        goto label_1212dc;
    }
    ctx->pc = 0x1212D4u;
    {
        const bool branch_taken_0x1212d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1212d4) {
            ctx->pc = 0x1212D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1212D4u;
            // 0x1212d8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12143Cu;
            goto label_12143c;
        }
    }
    ctx->pc = 0x1212DCu;
label_1212dc:
    // 0x1212dc: 0x8e2201c8  lw          $v0, 0x1C8($s1)
    ctx->pc = 0x1212dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
label_1212e0:
    // 0x1212e0: 0x50400056  beql        $v0, $zero, . + 4 + (0x56 << 2)
label_1212e4:
    if (ctx->pc == 0x1212E4u) {
        ctx->pc = 0x1212E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212E0u;
        // 0x1212e4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1212E8u;
        goto label_1212e8;
    }
    ctx->pc = 0x1212E0u;
    {
        const bool branch_taken_0x1212e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1212e0) {
            ctx->pc = 0x1212E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1212E0u;
            // 0x1212e4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12143Cu;
            goto label_12143c;
        }
    }
    ctx->pc = 0x1212E8u;
label_1212e8:
    // 0x1212e8: 0xc041ab6  jal         func_106AD8
label_1212ec:
    if (ctx->pc == 0x1212ECu) {
        ctx->pc = 0x1212ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212E8u;
        // 0x1212ec: 0x26240f84  addiu       $a0, $s1, 0xF84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3972));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1212F0u;
        goto label_1212f0;
    }
    ctx->pc = 0x1212E8u;
    SET_GPR_U32(ctx, 31, 0x1212F0u);
    ctx->pc = 0x1212ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1212E8u;
    // 0x1212ec: 0x26240f84  addiu       $a0, $s1, 0xF84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3972));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106AD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x106AD8u, 0x1212E8u, 0x1212F0u)) {
        return;
    }
    ctx->pc = 0x1212F0u;
label_1212f0:
    // 0x1212f0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1212f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1212f4:
    // 0x1212f4: 0x10a0002d  beqz        $a1, . + 4 + (0x2D << 2)
label_1212f8:
    if (ctx->pc == 0x1212F8u) {
        ctx->pc = 0x1212FCu;
        goto label_1212fc;
    }
    ctx->pc = 0x1212F4u;
    {
        const bool branch_taken_0x1212f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1212f4) {
            ctx->pc = 0x1213ACu;
            goto label_1213ac;
        }
    }
    ctx->pc = 0x1212FCu;
label_1212fc:
    // 0x1212fc: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1212fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_121300:
    // 0x121300: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_121304:
    if (ctx->pc == 0x121304u) {
        ctx->pc = 0x121308u;
        goto label_121308;
    }
    ctx->pc = 0x121300u;
    {
        const bool branch_taken_0x121300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121300) {
            ctx->pc = 0x1213ACu;
            goto label_1213ac;
        }
    }
    ctx->pc = 0x121308u;
label_121308:
    // 0x121308: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x121308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_12130c:
    // 0x12130c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x12130cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_121310:
    // 0x121310: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x121310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_121314:
    // 0x121314: 0xc04095e  jal         func_102578
label_121318:
    if (ctx->pc == 0x121318u) {
        ctx->pc = 0x121318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121314u;
        // 0x121318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12131Cu;
        goto label_12131c;
    }
    ctx->pc = 0x121314u;
    SET_GPR_U32(ctx, 31, 0x12131Cu);
    ctx->pc = 0x121318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121314u;
    // 0x121318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102578u, 0x121314u, 0x12131Cu)) {
        return;
    }
    ctx->pc = 0x12131Cu;
label_12131c:
    // 0x12131c: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x12131cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_121320:
    // 0x121320: 0xc040808  jal         func_102020
label_121324:
    if (ctx->pc == 0x121324u) {
        ctx->pc = 0x121324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121320u;
        // 0x121324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121328u;
        goto label_121328;
    }
    ctx->pc = 0x121320u;
    SET_GPR_U32(ctx, 31, 0x121328u);
    ctx->pc = 0x121324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121320u;
    // 0x121324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102020u, 0x121320u, 0x121328u)) {
        return;
    }
    ctx->pc = 0x121328u;
label_121328:
    // 0x121328: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x121328u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_12132c:
    // 0x12132c: 0xc040402  jal         func_101008
label_121330:
    if (ctx->pc == 0x121330u) {
        ctx->pc = 0x121330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12132Cu;
        // 0x121330: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121334u;
        goto label_121334;
    }
    ctx->pc = 0x12132Cu;
    SET_GPR_U32(ctx, 31, 0x121334u);
    ctx->pc = 0x121330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12132Cu;
    // 0x121330: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101008u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101008u, 0x12132Cu, 0x121334u)) {
        return;
    }
    ctx->pc = 0x121334u;
label_121334:
    // 0x121334: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x121334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_121338:
    // 0x121338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12133c:
    // 0x12133c: 0x6a220207  ldl         $v0, 0x207($s1)
    ctx->pc = 0x12133cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 519); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_121340:
    // 0x121340: 0x6e220200  ldr         $v0, 0x200($s1)
    ctx->pc = 0x121340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 512); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_121344:
    // 0x121344: 0x8e230208  lw          $v1, 0x208($s1)
    ctx->pc = 0x121344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
label_121348:
    // 0x121348: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x121348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12134c:
    // 0x12134c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x12134cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_121350:
    // 0x121350: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x121350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_121354:
    // 0x121354: 0xc04f0fe  jal         func_13C3F8
label_121358:
    if (ctx->pc == 0x121358u) {
        ctx->pc = 0x121358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121354u;
        // 0x121358: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12135Cu;
        goto label_12135c;
    }
    ctx->pc = 0x121354u;
    SET_GPR_U32(ctx, 31, 0x12135Cu);
    ctx->pc = 0x121358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121354u;
    // 0x121358: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3F8u, 0x121354u, 0x12135Cu)) {
        return;
    }
    ctx->pc = 0x12135Cu;
label_12135c:
    // 0x12135c: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x12135cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_121360:
    // 0x121360: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x121360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121364:
    // 0x121364: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x121364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_121368:
    // 0x121368: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x121368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12136c:
    // 0x12136c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x12136cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_121370:
    // 0x121370: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x121370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_121374:
    // 0x121374: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x121374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_121378:
    // 0x121378: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x121378u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_12137c:
    // 0x12137c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x12137cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_121380:
    // 0x121380: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x121380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_121384:
    // 0x121384: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x121384u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_121388:
    // 0x121388: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x121388u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_12138c:
    // 0x12138c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x12138cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_121390:
    // 0x121390: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x121390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_121394:
    // 0x121394: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x121394u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_121398:
    // 0x121398: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x121398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_12139c:
    // 0x12139c: 0x40f809  jalr        $v0
label_1213a0:
    if (ctx->pc == 0x1213A0u) {
        ctx->pc = 0x1213A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12139Cu;
        // 0x1213a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1213A4u;
        goto label_1213a4;
    }
    ctx->pc = 0x12139Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1213A4u);
        ctx->pc = 0x1213A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12139Cu;
        // 0x1213a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12139Cu, 0x1213A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1213A4u;
label_1213a4:
    // 0x1213a4: 0x10000025  b           . + 4 + (0x25 << 2)
label_1213a8:
    if (ctx->pc == 0x1213A8u) {
        ctx->pc = 0x1213A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213A4u;
        // 0x1213a8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1213ACu;
        goto label_1213ac;
    }
    ctx->pc = 0x1213A4u;
    {
        const bool branch_taken_0x1213a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1213A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213A4u;
        // 0x1213a8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1213a4) {
            ctx->pc = 0x12143Cu;
            goto label_12143c;
        }
    }
    ctx->pc = 0x1213ACu;
label_1213ac:
    // 0x1213ac: 0xc04067c  jal         func_1019F0
label_1213b0:
    if (ctx->pc == 0x1213B0u) {
        ctx->pc = 0x1213B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213ACu;
        // 0x1213b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1213B4u;
        goto label_1213b4;
    }
    ctx->pc = 0x1213ACu;
    SET_GPR_U32(ctx, 31, 0x1213B4u);
    ctx->pc = 0x1213B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1213ACu;
    // 0x1213b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1019F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1019F0u, 0x1213ACu, 0x1213B4u)) {
        return;
    }
    ctx->pc = 0x1213B4u;
label_1213b4:
    // 0x1213b4: 0x10000021  b           . + 4 + (0x21 << 2)
label_1213b8:
    if (ctx->pc == 0x1213B8u) {
        ctx->pc = 0x1213B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213B4u;
        // 0x1213b8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1213BCu;
        goto label_1213bc;
    }
    ctx->pc = 0x1213B4u;
    {
        const bool branch_taken_0x1213b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1213B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213B4u;
        // 0x1213b8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1213b4) {
            ctx->pc = 0x12143Cu;
            goto label_12143c;
        }
    }
    ctx->pc = 0x1213BCu;
label_1213bc:
    // 0x1213bc: 0x8c43bcf8  lw          $v1, -0x4308($v0)
    ctx->pc = 0x1213bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
label_1213c0:
    // 0x1213c0: 0x1483001e  bne         $a0, $v1, . + 4 + (0x1E << 2)
label_1213c4:
    if (ctx->pc == 0x1213C4u) {
        ctx->pc = 0x1213C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213C0u;
        // 0x1213c4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1213C8u;
        goto label_1213c8;
    }
    ctx->pc = 0x1213C0u;
    {
        const bool branch_taken_0x1213c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1213C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213C0u;
        // 0x1213c4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1213c0) {
            ctx->pc = 0x12143Cu;
            goto label_12143c;
        }
    }
    ctx->pc = 0x1213C8u;
label_1213c8:
    // 0x1213c8: 0x8e22144c  lw          $v0, 0x144C($s1)
    ctx->pc = 0x1213c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5196)));
label_1213cc:
    // 0x1213cc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1213d0:
    if (ctx->pc == 0x1213D0u) {
        ctx->pc = 0x1213D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213CCu;
        // 0x1213d0: 0xae20144c  sw          $zero, 0x144C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1213D4u;
        goto label_1213d4;
    }
    ctx->pc = 0x1213CCu;
    {
        const bool branch_taken_0x1213cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1213cc) {
            ctx->pc = 0x1213D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1213CCu;
            // 0x1213d0: 0xae20144c  sw          $zero, 0x144C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 5196), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1213D4u;
            goto label_1213d4;
        }
    }
    ctx->pc = 0x1213D4u;
label_1213d4:
    // 0x1213d4: 0x26240320  addiu       $a0, $s1, 0x320
    ctx->pc = 0x1213d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_1213d8:
    // 0x1213d8: 0xc068218  jal         func_1A0860
label_1213dc:
    if (ctx->pc == 0x1213DCu) {
        ctx->pc = 0x1213DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213D8u;
        // 0x1213dc: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1213E0u;
        goto label_1213e0;
    }
    ctx->pc = 0x1213D8u;
    SET_GPR_U32(ctx, 31, 0x1213E0u);
    ctx->pc = 0x1213DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1213D8u;
    // 0x1213dc: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0860u, 0x1213D8u, 0x1213E0u)) {
        return;
    }
    ctx->pc = 0x1213E0u;
label_1213e0:
    // 0x1213e0: 0x8e048330  lw          $a0, -0x7CD0($s0)
    ctx->pc = 0x1213e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935344)));
label_1213e4:
    // 0x1213e4: 0xc065c68  jal         func_1971A0
label_1213e8:
    if (ctx->pc == 0x1213E8u) {
        ctx->pc = 0x1213E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213E4u;
        // 0x1213e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1213ECu;
        goto label_1213ec;
    }
    ctx->pc = 0x1213E4u;
    SET_GPR_U32(ctx, 31, 0x1213ECu);
    ctx->pc = 0x1213E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1213E4u;
    // 0x1213e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x1213E4u, 0x1213ECu)) {
        return;
    }
    ctx->pc = 0x1213ECu;
label_1213ec:
    // 0x1213ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1213f0:
    if (ctx->pc == 0x1213F0u) {
        ctx->pc = 0x1213F4u;
        goto label_1213f4;
    }
    ctx->pc = 0x1213ECu;
    {
        const bool branch_taken_0x1213ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1213ec) {
            ctx->pc = 0x121400u;
            goto label_121400;
        }
    }
    ctx->pc = 0x1213F4u;
label_1213f4:
    // 0x1213f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1213f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1213f8:
    // 0x1213f8: 0xc049baa  jal         func_126EA8
label_1213fc:
    if (ctx->pc == 0x1213FCu) {
        ctx->pc = 0x1213FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213F8u;
        // 0x1213fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121400u;
        goto label_121400;
    }
    ctx->pc = 0x1213F8u;
    SET_GPR_U32(ctx, 31, 0x121400u);
    ctx->pc = 0x1213FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1213F8u;
    // 0x1213fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126EA8u, 0x1213F8u, 0x121400u)) {
        return;
    }
    ctx->pc = 0x121400u;
label_121400:
    // 0x121400: 0xc04f0cc  jal         func_13C330
label_121404:
    if (ctx->pc == 0x121404u) {
        ctx->pc = 0x121404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121400u;
        // 0x121404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121408u;
        goto label_121408;
    }
    ctx->pc = 0x121400u;
    SET_GPR_U32(ctx, 31, 0x121408u);
    ctx->pc = 0x121404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121400u;
    // 0x121404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x121400u, 0x121408u)) {
        return;
    }
    ctx->pc = 0x121408u;
label_121408:
    // 0x121408: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x121408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_12140c:
    // 0x12140c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12140cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_121410:
    // 0x121410: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x121410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_121414:
    // 0x121414: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x121414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_121418:
    // 0x121418: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x121418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_12141c:
    // 0x12141c: 0xb3a80007  sdl         $t0, 0x7($sp)
    ctx->pc = 0x12141cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_121420:
    // 0x121420: 0xb7a80000  sdr         $t0, 0x0($sp)
    ctx->pc = 0x121420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_121424:
    // 0x121424: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x121424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_121428:
    // 0x121428: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x121428u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_12142c:
    // 0x12142c: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x12142cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_121430:
    // 0x121430: 0x40f809  jalr        $v0
label_121434:
    if (ctx->pc == 0x121434u) {
        ctx->pc = 0x121434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121430u;
        // 0x121434: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121438u;
        goto label_121438;
    }
    ctx->pc = 0x121430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x121438u);
        ctx->pc = 0x121434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121430u;
        // 0x121434: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121430u, 0x121438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121438u;
label_121438:
    // 0x121438: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x121438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_12143c:
    // 0x12143c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x12143cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_121440:
    // 0x121440: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x121440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_121444:
    // 0x121444: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x121444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_121448:
    // 0x121448: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x121448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12144c:
    // 0x12144c: 0x3e00008  jr          $ra
label_121450:
    if (ctx->pc == 0x121450u) {
        ctx->pc = 0x121450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12144Cu;
        // 0x121450: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121454u;
        goto label_121454;
    }
    ctx->pc = 0x12144Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12144Cu;
        // 0x121450: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12144Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121454u;
label_121454:
    // 0x121454: 0x0  nop
    ctx->pc = 0x121454u;
    // NOP
    ctx->pc = 0x121458u;
}
