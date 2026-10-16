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

// Function: sub_00123028
// Address: 0x123028 - 0x123480
void sub_00123028_0x123028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123028_0x123028");
#endif

    switch (ctx->pc) {
        case 0x123028u: goto label_123028;
        case 0x12302cu: goto label_12302c;
        case 0x123030u: goto label_123030;
        case 0x123034u: goto label_123034;
        case 0x123038u: goto label_123038;
        case 0x12303cu: goto label_12303c;
        case 0x123040u: goto label_123040;
        case 0x123044u: goto label_123044;
        case 0x123048u: goto label_123048;
        case 0x12304cu: goto label_12304c;
        case 0x123050u: goto label_123050;
        case 0x123054u: goto label_123054;
        case 0x123058u: goto label_123058;
        case 0x12305cu: goto label_12305c;
        case 0x123060u: goto label_123060;
        case 0x123064u: goto label_123064;
        case 0x123068u: goto label_123068;
        case 0x12306cu: goto label_12306c;
        case 0x123070u: goto label_123070;
        case 0x123074u: goto label_123074;
        case 0x123078u: goto label_123078;
        case 0x12307cu: goto label_12307c;
        case 0x123080u: goto label_123080;
        case 0x123084u: goto label_123084;
        case 0x123088u: goto label_123088;
        case 0x12308cu: goto label_12308c;
        case 0x123090u: goto label_123090;
        case 0x123094u: goto label_123094;
        case 0x123098u: goto label_123098;
        case 0x12309cu: goto label_12309c;
        case 0x1230a0u: goto label_1230a0;
        case 0x1230a4u: goto label_1230a4;
        case 0x1230a8u: goto label_1230a8;
        case 0x1230acu: goto label_1230ac;
        case 0x1230b0u: goto label_1230b0;
        case 0x1230b4u: goto label_1230b4;
        case 0x1230b8u: goto label_1230b8;
        case 0x1230bcu: goto label_1230bc;
        case 0x1230c0u: goto label_1230c0;
        case 0x1230c4u: goto label_1230c4;
        case 0x1230c8u: goto label_1230c8;
        case 0x1230ccu: goto label_1230cc;
        case 0x1230d0u: goto label_1230d0;
        case 0x1230d4u: goto label_1230d4;
        case 0x1230d8u: goto label_1230d8;
        case 0x1230dcu: goto label_1230dc;
        case 0x1230e0u: goto label_1230e0;
        case 0x1230e4u: goto label_1230e4;
        case 0x1230e8u: goto label_1230e8;
        case 0x1230ecu: goto label_1230ec;
        case 0x1230f0u: goto label_1230f0;
        case 0x1230f4u: goto label_1230f4;
        case 0x1230f8u: goto label_1230f8;
        case 0x1230fcu: goto label_1230fc;
        case 0x123100u: goto label_123100;
        case 0x123104u: goto label_123104;
        case 0x123108u: goto label_123108;
        case 0x12310cu: goto label_12310c;
        case 0x123110u: goto label_123110;
        case 0x123114u: goto label_123114;
        case 0x123118u: goto label_123118;
        case 0x12311cu: goto label_12311c;
        case 0x123120u: goto label_123120;
        case 0x123124u: goto label_123124;
        case 0x123128u: goto label_123128;
        case 0x12312cu: goto label_12312c;
        case 0x123130u: goto label_123130;
        case 0x123134u: goto label_123134;
        case 0x123138u: goto label_123138;
        case 0x12313cu: goto label_12313c;
        case 0x123140u: goto label_123140;
        case 0x123144u: goto label_123144;
        case 0x123148u: goto label_123148;
        case 0x12314cu: goto label_12314c;
        case 0x123150u: goto label_123150;
        case 0x123154u: goto label_123154;
        case 0x123158u: goto label_123158;
        case 0x12315cu: goto label_12315c;
        case 0x123160u: goto label_123160;
        case 0x123164u: goto label_123164;
        case 0x123168u: goto label_123168;
        case 0x12316cu: goto label_12316c;
        case 0x123170u: goto label_123170;
        case 0x123174u: goto label_123174;
        case 0x123178u: goto label_123178;
        case 0x12317cu: goto label_12317c;
        case 0x123180u: goto label_123180;
        case 0x123184u: goto label_123184;
        case 0x123188u: goto label_123188;
        case 0x12318cu: goto label_12318c;
        case 0x123190u: goto label_123190;
        case 0x123194u: goto label_123194;
        case 0x123198u: goto label_123198;
        case 0x12319cu: goto label_12319c;
        case 0x1231a0u: goto label_1231a0;
        case 0x1231a4u: goto label_1231a4;
        case 0x1231a8u: goto label_1231a8;
        case 0x1231acu: goto label_1231ac;
        case 0x1231b0u: goto label_1231b0;
        case 0x1231b4u: goto label_1231b4;
        case 0x1231b8u: goto label_1231b8;
        case 0x1231bcu: goto label_1231bc;
        case 0x1231c0u: goto label_1231c0;
        case 0x1231c4u: goto label_1231c4;
        case 0x1231c8u: goto label_1231c8;
        case 0x1231ccu: goto label_1231cc;
        case 0x1231d0u: goto label_1231d0;
        case 0x1231d4u: goto label_1231d4;
        case 0x1231d8u: goto label_1231d8;
        case 0x1231dcu: goto label_1231dc;
        case 0x1231e0u: goto label_1231e0;
        case 0x1231e4u: goto label_1231e4;
        case 0x1231e8u: goto label_1231e8;
        case 0x1231ecu: goto label_1231ec;
        case 0x1231f0u: goto label_1231f0;
        case 0x1231f4u: goto label_1231f4;
        case 0x1231f8u: goto label_1231f8;
        case 0x1231fcu: goto label_1231fc;
        case 0x123200u: goto label_123200;
        case 0x123204u: goto label_123204;
        case 0x123208u: goto label_123208;
        case 0x12320cu: goto label_12320c;
        case 0x123210u: goto label_123210;
        case 0x123214u: goto label_123214;
        case 0x123218u: goto label_123218;
        case 0x12321cu: goto label_12321c;
        case 0x123220u: goto label_123220;
        case 0x123224u: goto label_123224;
        case 0x123228u: goto label_123228;
        case 0x12322cu: goto label_12322c;
        case 0x123230u: goto label_123230;
        case 0x123234u: goto label_123234;
        case 0x123238u: goto label_123238;
        case 0x12323cu: goto label_12323c;
        case 0x123240u: goto label_123240;
        case 0x123244u: goto label_123244;
        case 0x123248u: goto label_123248;
        case 0x12324cu: goto label_12324c;
        case 0x123250u: goto label_123250;
        case 0x123254u: goto label_123254;
        case 0x123258u: goto label_123258;
        case 0x12325cu: goto label_12325c;
        case 0x123260u: goto label_123260;
        case 0x123264u: goto label_123264;
        case 0x123268u: goto label_123268;
        case 0x12326cu: goto label_12326c;
        case 0x123270u: goto label_123270;
        case 0x123274u: goto label_123274;
        case 0x123278u: goto label_123278;
        case 0x12327cu: goto label_12327c;
        case 0x123280u: goto label_123280;
        case 0x123284u: goto label_123284;
        case 0x123288u: goto label_123288;
        case 0x12328cu: goto label_12328c;
        case 0x123290u: goto label_123290;
        case 0x123294u: goto label_123294;
        case 0x123298u: goto label_123298;
        case 0x12329cu: goto label_12329c;
        case 0x1232a0u: goto label_1232a0;
        case 0x1232a4u: goto label_1232a4;
        case 0x1232a8u: goto label_1232a8;
        case 0x1232acu: goto label_1232ac;
        case 0x1232b0u: goto label_1232b0;
        case 0x1232b4u: goto label_1232b4;
        case 0x1232b8u: goto label_1232b8;
        case 0x1232bcu: goto label_1232bc;
        case 0x1232c0u: goto label_1232c0;
        case 0x1232c4u: goto label_1232c4;
        case 0x1232c8u: goto label_1232c8;
        case 0x1232ccu: goto label_1232cc;
        case 0x1232d0u: goto label_1232d0;
        case 0x1232d4u: goto label_1232d4;
        case 0x1232d8u: goto label_1232d8;
        case 0x1232dcu: goto label_1232dc;
        case 0x1232e0u: goto label_1232e0;
        case 0x1232e4u: goto label_1232e4;
        case 0x1232e8u: goto label_1232e8;
        case 0x1232ecu: goto label_1232ec;
        case 0x1232f0u: goto label_1232f0;
        case 0x1232f4u: goto label_1232f4;
        case 0x1232f8u: goto label_1232f8;
        case 0x1232fcu: goto label_1232fc;
        case 0x123300u: goto label_123300;
        case 0x123304u: goto label_123304;
        case 0x123308u: goto label_123308;
        case 0x12330cu: goto label_12330c;
        case 0x123310u: goto label_123310;
        case 0x123314u: goto label_123314;
        case 0x123318u: goto label_123318;
        case 0x12331cu: goto label_12331c;
        case 0x123320u: goto label_123320;
        case 0x123324u: goto label_123324;
        case 0x123328u: goto label_123328;
        case 0x12332cu: goto label_12332c;
        case 0x123330u: goto label_123330;
        case 0x123334u: goto label_123334;
        case 0x123338u: goto label_123338;
        case 0x12333cu: goto label_12333c;
        case 0x123340u: goto label_123340;
        case 0x123344u: goto label_123344;
        case 0x123348u: goto label_123348;
        case 0x12334cu: goto label_12334c;
        case 0x123350u: goto label_123350;
        case 0x123354u: goto label_123354;
        case 0x123358u: goto label_123358;
        case 0x12335cu: goto label_12335c;
        case 0x123360u: goto label_123360;
        case 0x123364u: goto label_123364;
        case 0x123368u: goto label_123368;
        case 0x12336cu: goto label_12336c;
        case 0x123370u: goto label_123370;
        case 0x123374u: goto label_123374;
        case 0x123378u: goto label_123378;
        case 0x12337cu: goto label_12337c;
        case 0x123380u: goto label_123380;
        case 0x123384u: goto label_123384;
        case 0x123388u: goto label_123388;
        case 0x12338cu: goto label_12338c;
        case 0x123390u: goto label_123390;
        case 0x123394u: goto label_123394;
        case 0x123398u: goto label_123398;
        case 0x12339cu: goto label_12339c;
        case 0x1233a0u: goto label_1233a0;
        case 0x1233a4u: goto label_1233a4;
        case 0x1233a8u: goto label_1233a8;
        case 0x1233acu: goto label_1233ac;
        case 0x1233b0u: goto label_1233b0;
        case 0x1233b4u: goto label_1233b4;
        case 0x1233b8u: goto label_1233b8;
        case 0x1233bcu: goto label_1233bc;
        case 0x1233c0u: goto label_1233c0;
        case 0x1233c4u: goto label_1233c4;
        case 0x1233c8u: goto label_1233c8;
        case 0x1233ccu: goto label_1233cc;
        case 0x1233d0u: goto label_1233d0;
        case 0x1233d4u: goto label_1233d4;
        case 0x1233d8u: goto label_1233d8;
        case 0x1233dcu: goto label_1233dc;
        case 0x1233e0u: goto label_1233e0;
        case 0x1233e4u: goto label_1233e4;
        case 0x1233e8u: goto label_1233e8;
        case 0x1233ecu: goto label_1233ec;
        case 0x1233f0u: goto label_1233f0;
        case 0x1233f4u: goto label_1233f4;
        case 0x1233f8u: goto label_1233f8;
        case 0x1233fcu: goto label_1233fc;
        case 0x123400u: goto label_123400;
        case 0x123404u: goto label_123404;
        case 0x123408u: goto label_123408;
        case 0x12340cu: goto label_12340c;
        case 0x123410u: goto label_123410;
        case 0x123414u: goto label_123414;
        case 0x123418u: goto label_123418;
        case 0x12341cu: goto label_12341c;
        case 0x123420u: goto label_123420;
        case 0x123424u: goto label_123424;
        case 0x123428u: goto label_123428;
        case 0x12342cu: goto label_12342c;
        case 0x123430u: goto label_123430;
        case 0x123434u: goto label_123434;
        case 0x123438u: goto label_123438;
        case 0x12343cu: goto label_12343c;
        case 0x123440u: goto label_123440;
        case 0x123444u: goto label_123444;
        case 0x123448u: goto label_123448;
        case 0x12344cu: goto label_12344c;
        case 0x123450u: goto label_123450;
        case 0x123454u: goto label_123454;
        case 0x123458u: goto label_123458;
        case 0x12345cu: goto label_12345c;
        case 0x123460u: goto label_123460;
        case 0x123464u: goto label_123464;
        case 0x123468u: goto label_123468;
        case 0x12346cu: goto label_12346c;
        case 0x123470u: goto label_123470;
        case 0x123474u: goto label_123474;
        case 0x123478u: goto label_123478;
        case 0x12347cu: goto label_12347c;
        default: break;
    }

    ctx->pc = 0x123028u;

label_123028:
    // 0x123028: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x123028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_12302c:
    // 0x12302c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x12302cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_123030:
    // 0x123030: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x123030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_123034:
    // 0x123034: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x123034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_123038:
    // 0x123038: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x123038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_12303c:
    // 0x12303c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x12303cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_123040:
    // 0x123040: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x123040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_123044:
    // 0x123044: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x123044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_123048:
    // 0x123048: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x123048u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_12304c:
    // 0x12304c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x12304cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_123050:
    // 0x123050: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x123050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_123054:
    // 0x123054: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x123054u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123058:
    // 0x123058: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x123058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_12305c:
    // 0x12305c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x12305cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123060:
    // 0x123060: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x123060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_123064:
    // 0x123064: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x123064u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123068:
    // 0x123068: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x123068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_12306c:
    // 0x12306c: 0xc04f0f4  jal         func_13C3D0
label_123070:
    if (ctx->pc == 0x123070u) {
        ctx->pc = 0x123070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12306Cu;
        // 0x123070: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123074u;
        goto label_123074;
    }
    ctx->pc = 0x12306Cu;
    SET_GPR_U32(ctx, 31, 0x123074u);
    ctx->pc = 0x123070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12306Cu;
    // 0x123070: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3D0u, 0x12306Cu, 0x123074u)) {
        return;
    }
    ctx->pc = 0x123074u;
label_123074:
    // 0x123074: 0xae000e50  sw          $zero, 0xE50($s0)
    ctx->pc = 0x123074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3664), GPR_U32(ctx, 0));
label_123078:
    // 0x123078: 0x12200078  beqz        $s1, . + 4 + (0x78 << 2)
label_12307c:
    if (ctx->pc == 0x12307Cu) {
        ctx->pc = 0x12307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123078u;
        // 0x12307c: 0xae00145c  sw          $zero, 0x145C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123080u;
        goto label_123080;
    }
    ctx->pc = 0x123078u;
    {
        const bool branch_taken_0x123078 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123078u;
        // 0x12307c: 0xae00145c  sw          $zero, 0x145C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123078) {
            ctx->pc = 0x12325Cu;
            goto label_12325c;
        }
    }
    ctx->pc = 0x123080u;
label_123080:
    // 0x123080: 0x261214a0  addiu       $s2, $s0, 0x14A0
    ctx->pc = 0x123080u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 5280));
label_123084:
    // 0x123084: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x123084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123088:
    // 0x123088: 0x3c01bf19  lui         $at, 0xBF19
    ctx->pc = 0x123088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48921 << 16));
label_12308c:
    // 0x12308c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12308cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_123090:
    // 0x123090: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x123090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123094:
    // 0x123094: 0x0  nop
    ctx->pc = 0x123094u;
    // NOP
label_123098:
    // 0x123098: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x123098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12309c:
    // 0x12309c: 0x0  nop
    ctx->pc = 0x12309cu;
    // NOP
label_1230a0:
    // 0x1230a0: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_1230a4:
    if (ctx->pc == 0x1230A4u) {
        ctx->pc = 0x1230A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230A0u;
        // 0x1230a4: 0x26040320  addiu       $a0, $s0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1230A8u;
        goto label_1230a8;
    }
    ctx->pc = 0x1230A0u;
    {
        const bool branch_taken_0x1230a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1230A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230A0u;
        // 0x1230a4: 0x26040320  addiu       $a0, $s0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230a0) {
            ctx->pc = 0x123134u;
            goto label_123134;
        }
    }
    ctx->pc = 0x1230A8u;
label_1230a8:
    // 0x1230a8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1230a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1230ac:
    // 0x1230ac: 0xae000e20  sw          $zero, 0xE20($s0)
    ctx->pc = 0x1230acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3616), GPR_U32(ctx, 0));
label_1230b0:
    // 0x1230b0: 0xae000e5c  sw          $zero, 0xE5C($s0)
    ctx->pc = 0x1230b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3676), GPR_U32(ctx, 0));
label_1230b4:
    // 0x1230b4: 0xae140e50  sw          $s4, 0xE50($s0)
    ctx->pc = 0x1230b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3664), GPR_U32(ctx, 20));
label_1230b8:
    // 0x1230b8: 0x26050d74  addiu       $a1, $s0, 0xD74
    ctx->pc = 0x1230b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3444));
label_1230bc:
    // 0x1230bc: 0xae000e58  sw          $zero, 0xE58($s0)
    ctx->pc = 0x1230bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3672), GPR_U32(ctx, 0));
label_1230c0:
    // 0x1230c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1230c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1230c4:
    // 0x1230c4: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1230c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1230c8:
    // 0x1230c8: 0xc067fca  jal         func_19FF28
label_1230cc:
    if (ctx->pc == 0x1230CCu) {
        ctx->pc = 0x1230CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230C8u;
        // 0x1230cc: 0xe6000eb4  swc1        $f0, 0xEB4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3764), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1230D0u;
        goto label_1230d0;
    }
    ctx->pc = 0x1230C8u;
    SET_GPR_U32(ctx, 31, 0x1230D0u);
    ctx->pc = 0x1230CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1230C8u;
    // 0x1230cc: 0xe6000eb4  swc1        $f0, 0xEB4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3764), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x1230C8u, 0x1230D0u)) {
        return;
    }
    ctx->pc = 0x1230D0u;
label_1230d0:
    // 0x1230d0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1230d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1230d4:
    // 0x1230d4: 0x3c01bf73  lui         $at, 0xBF73
    ctx->pc = 0x1230d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49011 << 16));
label_1230d8:
    // 0x1230d8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1230d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1230dc:
    // 0x1230dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1230dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1230e0:
    // 0x1230e0: 0x0  nop
    ctx->pc = 0x1230e0u;
    // NOP
label_1230e4:
    // 0x1230e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1230e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1230e8:
    // 0x1230e8: 0x0  nop
    ctx->pc = 0x1230e8u;
    // NOP
label_1230ec:
    // 0x1230ec: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_1230f0:
    if (ctx->pc == 0x1230F0u) {
        ctx->pc = 0x1230F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230ECu;
        // 0x1230f0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1230F4u;
        goto label_1230f4;
    }
    ctx->pc = 0x1230ECu;
    {
        const bool branch_taken_0x1230ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1230ec) {
            ctx->pc = 0x1230F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1230ECu;
            // 0x1230f0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1230F8u;
            goto label_1230f8;
        }
    }
    ctx->pc = 0x1230F4u;
label_1230f4:
    // 0x1230f4: 0x0  nop
    ctx->pc = 0x1230f4u;
    // NOP
label_1230f8:
    // 0x1230f8: 0x10000055  b           . + 4 + (0x55 << 2)
label_1230fc:
    if (ctx->pc == 0x1230FCu) {
        ctx->pc = 0x1230FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230F8u;
        // 0x1230fc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123100u;
        goto label_123100;
    }
    ctx->pc = 0x1230F8u;
    {
        const bool branch_taken_0x1230f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1230FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230F8u;
        // 0x1230fc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230f8) {
            ctx->pc = 0x123250u;
            goto label_123250;
        }
    }
    ctx->pc = 0x123100u;
label_123100:
    // 0x123100: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x123100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_123104:
    // 0x123104: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x123104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_123108:
    // 0x123108: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x123108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_12310c:
    // 0x12310c: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x12310cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_123110:
    // 0x123110: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x123110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_123114:
    // 0x123114: 0xb0641467  sdl         $a0, 0x1467($v1)
    ctx->pc = 0x123114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 5223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_123118:
    // 0x123118: 0xb4641460  sdr         $a0, 0x1460($v1)
    ctx->pc = 0x123118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 5216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12311c:
    // 0x12311c: 0xac651468  sw          $a1, 0x1468($v1)
    ctx->pc = 0x12311cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5224), GPR_U32(ctx, 5));
label_123120:
    // 0x123120: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x123120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_123124:
    // 0x123124: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x123124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123128:
    // 0x123128: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x123128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12312c:
    // 0x12312c: 0x10000034  b           . + 4 + (0x34 << 2)
label_123130:
    if (ctx->pc == 0x123130u) {
        ctx->pc = 0x123130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12312Cu;
        // 0x123130: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x123134u;
        goto label_123134;
    }
    ctx->pc = 0x12312Cu;
    {
        const bool branch_taken_0x12312c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12312Cu;
        // 0x123130: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12312c) {
            ctx->pc = 0x123200u;
            goto label_123200;
        }
    }
    ctx->pc = 0x123134u;
label_123134:
    // 0x123134: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x123134u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123138:
    // 0x123138: 0x8e021458  lw          $v0, 0x1458($s0)
    ctx->pc = 0x123138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5208)));
label_12313c:
    // 0x12313c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_123140:
    if (ctx->pc == 0x123140u) {
        ctx->pc = 0x123140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12313Cu;
        // 0x123140: 0xae13145c  sw          $s3, 0x145C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5212), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123144u;
        goto label_123144;
    }
    ctx->pc = 0x12313Cu;
    {
        const bool branch_taken_0x12313c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12313Cu;
        // 0x123140: 0xae13145c  sw          $s3, 0x145C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5212), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12313c) {
            ctx->pc = 0x123250u;
            goto label_123250;
        }
    }
    ctx->pc = 0x123144u;
label_123144:
    // 0x123144: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x123144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_123148:
    // 0x123148: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x123148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_12314c:
    // 0x12314c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12314cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_123150:
    // 0x123150: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x123150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_123154:
    // 0x123154: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x123154u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_123158:
    // 0x123158: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x123158u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12315c:
    // 0x12315c: 0x0  nop
    ctx->pc = 0x12315cu;
    // NOP
label_123160:
    // 0x123160: 0x4502003c  bc1fl       . + 4 + (0x3C << 2)
label_123164:
    if (ctx->pc == 0x123164u) {
        ctx->pc = 0x123164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123160u;
        // 0x123164: 0x8e310028  lw          $s1, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123168u;
        goto label_123168;
    }
    ctx->pc = 0x123160u;
    {
        const bool branch_taken_0x123160 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x123160) {
            ctx->pc = 0x123164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123160u;
            // 0x123164: 0x8e310028  lw          $s1, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123254u;
            goto label_123254;
        }
    }
    ctx->pc = 0x123168u;
label_123168:
    // 0x123168: 0x8e0314b0  lw          $v1, 0x14B0($s0)
    ctx->pc = 0x123168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5296)));
label_12316c:
    // 0x12316c: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x12316cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_123170:
    // 0x123170: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
label_123174:
    if (ctx->pc == 0x123174u) {
        ctx->pc = 0x123174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123170u;
        // 0x123174: 0x8e310028  lw          $s1, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123178u;
        goto label_123178;
    }
    ctx->pc = 0x123170u;
    {
        const bool branch_taken_0x123170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123170) {
            ctx->pc = 0x123174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123170u;
            // 0x123174: 0x8e310028  lw          $s1, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123254u;
            goto label_123254;
        }
    }
    ctx->pc = 0x123178u;
label_123178:
    // 0x123178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12317c:
    // 0x12317c: 0x6a280007  ldl         $t0, 0x7($s1)
    ctx->pc = 0x12317cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_123180:
    // 0x123180: 0x6e280000  ldr         $t0, 0x0($s1)
    ctx->pc = 0x123180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_123184:
    // 0x123184: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x123184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_123188:
    // 0x123188: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x123188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12318c:
    // 0x12318c: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x12318cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_123190:
    // 0x123190: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x123190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_123194:
    // 0x123194: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
label_123198:
    if (ctx->pc == 0x123198u) {
        ctx->pc = 0x123198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123194u;
        // 0x123198: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12319Cu;
        goto label_12319c;
    }
    ctx->pc = 0x123194u;
    {
        const bool branch_taken_0x123194 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x123198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123194u;
        // 0x123198: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123194) {
            ctx->pc = 0x123200u;
            goto label_123200;
        }
    }
    ctx->pc = 0x12319Cu;
label_12319c:
    // 0x12319c: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x12319cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1231a0:
    // 0x1231a0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1231a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1231a4:
    // 0x1231a4: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1231a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1231a8:
    // 0x1231a8: 0x26041460  addiu       $a0, $s0, 0x1460
    ctx->pc = 0x1231a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5216));
label_1231ac:
    // 0x1231ac: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x1231acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1231b0:
    // 0x1231b0: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x1231b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
label_1231b4:
    // 0x1231b4: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1231b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_1231b8:
    // 0x1231b8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1231b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1231bc:
    // 0x1231bc: 0x0  nop
    ctx->pc = 0x1231bcu;
    // NOP
label_1231c0:
    // 0x1231c0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1231c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1231c4:
    // 0x1231c4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1231c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1231c8:
    // 0x1231c8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1231c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_1231cc:
    // 0x1231cc: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1231ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1231d0:
    // 0x1231d0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1231d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_1231d4:
    // 0x1231d4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1231d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1231d8:
    // 0x1231d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1231d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1231dc:
    // 0x1231dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1231dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1231e0:
    // 0x1231e0: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x1231e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1231e4:
    // 0x1231e4: 0x0  nop
    ctx->pc = 0x1231e4u;
    // NOP
label_1231e8:
    // 0x1231e8: 0x4501ffc5  bc1t        . + 4 + (-0x3B << 2)
label_1231ec:
    if (ctx->pc == 0x1231ECu) {
        ctx->pc = 0x1231ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231E8u;
        // 0x1231ec: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1231F0u;
        goto label_1231f0;
    }
    ctx->pc = 0x1231E8u;
    {
        const bool branch_taken_0x1231e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1231ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231E8u;
        // 0x1231ec: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231e8) {
            ctx->pc = 0x123100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123100;
        }
    }
    ctx->pc = 0x1231F0u;
label_1231f0:
    // 0x1231f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1231f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1231f4:
    // 0x1231f4: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1231f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1231f8:
    // 0x1231f8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_1231fc:
    if (ctx->pc == 0x1231FCu) {
        ctx->pc = 0x1231FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231F8u;
        // 0x1231fc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123200u;
        goto label_123200;
    }
    ctx->pc = 0x1231F8u;
    {
        const bool branch_taken_0x1231f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1231FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231F8u;
        // 0x1231fc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231f8) {
            ctx->pc = 0x1231C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1231c0;
        }
    }
    ctx->pc = 0x123200u;
label_123200:
    // 0x123200: 0x54e00014  bnel        $a3, $zero, . + 4 + (0x14 << 2)
label_123204:
    if (ctx->pc == 0x123204u) {
        ctx->pc = 0x123204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123200u;
        // 0x123204: 0x8e310028  lw          $s1, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123208u;
        goto label_123208;
    }
    ctx->pc = 0x123200u;
    {
        const bool branch_taken_0x123200 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x123200) {
            ctx->pc = 0x123204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123200u;
            // 0x123204: 0x8e310028  lw          $s1, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123254u;
            goto label_123254;
        }
    }
    ctx->pc = 0x123208u;
label_123208:
    // 0x123208: 0x8e0214b0  lw          $v0, 0x14B0($s0)
    ctx->pc = 0x123208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5296)));
label_12320c:
    // 0x12320c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12320cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_123210:
    // 0x123210: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x123210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_123214:
    // 0x123214: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x123214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_123218:
    // 0x123218: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x123218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_12321c:
    // 0x12321c: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x12321cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_123220:
    // 0x123220: 0xb0471467  sdl         $a3, 0x1467($v0)
    ctx->pc = 0x123220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_123224:
    // 0x123224: 0xb4471460  sdr         $a3, 0x1460($v0)
    ctx->pc = 0x123224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_123228:
    // 0x123228: 0xac481468  sw          $t0, 0x1468($v0)
    ctx->pc = 0x123228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5224), GPR_U32(ctx, 8));
label_12322c:
    // 0x12322c: 0x8e0314b0  lw          $v1, 0x14B0($s0)
    ctx->pc = 0x12322cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5296)));
label_123230:
    // 0x123230: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x123230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_123234:
    // 0x123234: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x123234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_123238:
    // 0x123238: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x123238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_12323c:
    // 0x12323c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x12323cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_123240:
    // 0x123240: 0x8e0214b0  lw          $v0, 0x14B0($s0)
    ctx->pc = 0x123240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5296)));
label_123244:
    // 0x123244: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x123244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_123248:
    // 0x123248: 0xae0214b0  sw          $v0, 0x14B0($s0)
    ctx->pc = 0x123248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5296), GPR_U32(ctx, 2));
label_12324c:
    // 0x12324c: 0x0  nop
    ctx->pc = 0x12324cu;
    // NOP
label_123250:
    // 0x123250: 0x8e310028  lw          $s1, 0x28($s1)
    ctx->pc = 0x123250u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_123254:
    // 0x123254: 0x5620ff8c  bnel        $s1, $zero, . + 4 + (-0x74 << 2)
label_123258:
    if (ctx->pc == 0x123258u) {
        ctx->pc = 0x123258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123254u;
        // 0x123258: 0xc6210004  lwc1        $f1, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12325Cu;
        goto label_12325c;
    }
    ctx->pc = 0x123254u;
    {
        const bool branch_taken_0x123254 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x123254) {
            ctx->pc = 0x123258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123254u;
            // 0x123258: 0xc6210004  lwc1        $f1, 0x4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x123088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123088;
        }
    }
    ctx->pc = 0x12325Cu;
label_12325c:
    // 0x12325c: 0xae150e54  sw          $s5, 0xE54($s0)
    ctx->pc = 0x12325cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3668), GPR_U32(ctx, 21));
label_123260:
    // 0x123260: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x123260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_123264:
    // 0x123264: 0x84640120  lh          $a0, 0x120($v1)
    ctx->pc = 0x123264u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 288)));
label_123268:
    // 0x123268: 0x8c620124  lw          $v0, 0x124($v1)
    ctx->pc = 0x123268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
label_12326c:
    // 0x12326c: 0x40f809  jalr        $v0
label_123270:
    if (ctx->pc == 0x123270u) {
        ctx->pc = 0x123270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12326Cu;
        // 0x123270: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123274u;
        goto label_123274;
    }
    ctx->pc = 0x12326Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123274u);
        ctx->pc = 0x123270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12326Cu;
        // 0x123270: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12326Cu, 0x123274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123274u;
label_123274:
    // 0x123274: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_123278:
    if (ctx->pc == 0x123278u) {
        ctx->pc = 0x12327Cu;
        goto label_12327c;
    }
    ctx->pc = 0x123274u;
    {
        const bool branch_taken_0x123274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123274) {
            ctx->pc = 0x123288u;
            goto label_123288;
        }
    }
    ctx->pc = 0x12327Cu;
label_12327c:
    // 0x12327c: 0xae000cd4  sw          $zero, 0xCD4($s0)
    ctx->pc = 0x12327cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3284), GPR_U32(ctx, 0));
label_123280:
    // 0x123280: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x123280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123284:
    // 0x123284: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x123284u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123288:
    // 0x123288: 0x5260000b  beql        $s3, $zero, . + 4 + (0xB << 2)
label_12328c:
    if (ctx->pc == 0x12328Cu) {
        ctx->pc = 0x12328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123288u;
        // 0x12328c: 0x8e020cd4  lw          $v0, 0xCD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123290u;
        goto label_123290;
    }
    ctx->pc = 0x123288u;
    {
        const bool branch_taken_0x123288 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x123288) {
            ctx->pc = 0x12328Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123288u;
            // 0x12328c: 0x8e020cd4  lw          $v0, 0xCD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1232B8u;
            goto label_1232b8;
        }
    }
    ctx->pc = 0x123290u;
label_123290:
    // 0x123290: 0xc04f0cc  jal         func_13C330
label_123294:
    if (ctx->pc == 0x123294u) {
        ctx->pc = 0x123294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123290u;
        // 0x123294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123298u;
        goto label_123298;
    }
    ctx->pc = 0x123290u;
    SET_GPR_U32(ctx, 31, 0x123298u);
    ctx->pc = 0x123294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123290u;
    // 0x123294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x123290u, 0x123298u)) {
        return;
    }
    ctx->pc = 0x123298u;
label_123298:
    // 0x123298: 0x6a050c47  ldl         $a1, 0xC47($s0)
    ctx->pc = 0x123298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_12329c:
    // 0x12329c: 0x6e050c40  ldr         $a1, 0xC40($s0)
    ctx->pc = 0x12329cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1232a0:
    // 0x1232a0: 0x8e060c48  lw          $a2, 0xC48($s0)
    ctx->pc = 0x1232a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3144)));
label_1232a4:
    // 0x1232a4: 0xb0450007  sdl         $a1, 0x7($v0)
    ctx->pc = 0x1232a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1232a8:
    // 0x1232a8: 0xb4450000  sdr         $a1, 0x0($v0)
    ctx->pc = 0x1232a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1232ac:
    // 0x1232ac: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1232acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
label_1232b0:
    // 0x1232b0: 0x10000016  b           . + 4 + (0x16 << 2)
label_1232b4:
    if (ctx->pc == 0x1232B4u) {
        ctx->pc = 0x1232B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232B0u;
        // 0x1232b4: 0x8e021458  lw          $v0, 0x1458($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1232B8u;
        goto label_1232b8;
    }
    ctx->pc = 0x1232B0u;
    {
        const bool branch_taken_0x1232b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1232B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232B0u;
        // 0x1232b4: 0x8e021458  lw          $v0, 0x1458($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232b0) {
            ctx->pc = 0x12330Cu;
            goto label_12330c;
        }
    }
    ctx->pc = 0x1232B8u;
label_1232b8:
    // 0x1232b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1232bc:
    if (ctx->pc == 0x1232BCu) {
        ctx->pc = 0x1232C0u;
        goto label_1232c0;
    }
    ctx->pc = 0x1232B8u;
    {
        const bool branch_taken_0x1232b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1232b8) {
            ctx->pc = 0x1232E8u;
            goto label_1232e8;
        }
    }
    ctx->pc = 0x1232C0u;
label_1232c0:
    // 0x1232c0: 0xc04f0cc  jal         func_13C330
label_1232c4:
    if (ctx->pc == 0x1232C4u) {
        ctx->pc = 0x1232C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232C0u;
        // 0x1232c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1232C8u;
        goto label_1232c8;
    }
    ctx->pc = 0x1232C0u;
    SET_GPR_U32(ctx, 31, 0x1232C8u);
    ctx->pc = 0x1232C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1232C0u;
    // 0x1232c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1232C0u, 0x1232C8u)) {
        return;
    }
    ctx->pc = 0x1232C8u;
label_1232c8:
    // 0x1232c8: 0x6a030c47  ldl         $v1, 0xC47($s0)
    ctx->pc = 0x1232c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1232cc:
    // 0x1232cc: 0x6e030c40  ldr         $v1, 0xC40($s0)
    ctx->pc = 0x1232ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1232d0:
    // 0x1232d0: 0x8e040c48  lw          $a0, 0xC48($s0)
    ctx->pc = 0x1232d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3144)));
label_1232d4:
    // 0x1232d4: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x1232d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1232d8:
    // 0x1232d8: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x1232d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1232dc:
    // 0x1232dc: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1232dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_1232e0:
    // 0x1232e0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1232e4:
    if (ctx->pc == 0x1232E4u) {
        ctx->pc = 0x1232E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232E0u;
        // 0x1232e4: 0x8e021458  lw          $v0, 0x1458($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1232E8u;
        goto label_1232e8;
    }
    ctx->pc = 0x1232E0u;
    {
        const bool branch_taken_0x1232e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1232E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232E0u;
        // 0x1232e4: 0x8e021458  lw          $v0, 0x1458($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232e0) {
            ctx->pc = 0x12330Cu;
            goto label_12330c;
        }
    }
    ctx->pc = 0x1232E8u;
label_1232e8:
    // 0x1232e8: 0xc04f0cc  jal         func_13C330
label_1232ec:
    if (ctx->pc == 0x1232ECu) {
        ctx->pc = 0x1232ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232E8u;
        // 0x1232ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1232F0u;
        goto label_1232f0;
    }
    ctx->pc = 0x1232E8u;
    SET_GPR_U32(ctx, 31, 0x1232F0u);
    ctx->pc = 0x1232ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1232E8u;
    // 0x1232ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1232E8u, 0x1232F0u)) {
        return;
    }
    ctx->pc = 0x1232F0u;
label_1232f0:
    // 0x1232f0: 0x6a070c57  ldl         $a3, 0xC57($s0)
    ctx->pc = 0x1232f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1232f4:
    // 0x1232f4: 0x6e070c50  ldr         $a3, 0xC50($s0)
    ctx->pc = 0x1232f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1232f8:
    // 0x1232f8: 0x8e080c58  lw          $t0, 0xC58($s0)
    ctx->pc = 0x1232f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3160)));
label_1232fc:
    // 0x1232fc: 0xb0470007  sdl         $a3, 0x7($v0)
    ctx->pc = 0x1232fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_123300:
    // 0x123300: 0xb4470000  sdr         $a3, 0x0($v0)
    ctx->pc = 0x123300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_123304:
    // 0x123304: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x123304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
label_123308:
    // 0x123308: 0x8e021458  lw          $v0, 0x1458($s0)
    ctx->pc = 0x123308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5208)));
label_12330c:
    // 0x12330c: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_123310:
    if (ctx->pc == 0x123310u) {
        ctx->pc = 0x123314u;
        goto label_123314;
    }
    ctx->pc = 0x12330Cu;
    {
        const bool branch_taken_0x12330c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12330c) {
            ctx->pc = 0x12340Cu;
            goto label_12340c;
        }
    }
    ctx->pc = 0x123314u;
label_123314:
    // 0x123314: 0x8e020cdc  lw          $v0, 0xCDC($s0)
    ctx->pc = 0x123314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3292)));
label_123318:
    // 0x123318: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_12331c:
    if (ctx->pc == 0x12331Cu) {
        ctx->pc = 0x123320u;
        goto label_123320;
    }
    ctx->pc = 0x123318u;
    {
        const bool branch_taken_0x123318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123318) {
            ctx->pc = 0x12340Cu;
            goto label_12340c;
        }
    }
    ctx->pc = 0x123320u;
label_123320:
    // 0x123320: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_123324:
    if (ctx->pc == 0x123324u) {
        ctx->pc = 0x123324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123320u;
        // 0x123324: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123328u;
        goto label_123328;
    }
    ctx->pc = 0x123320u;
    {
        const bool branch_taken_0x123320 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x123324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123320u;
        // 0x123324: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123320) {
            ctx->pc = 0x123334u;
            goto label_123334;
        }
    }
    ctx->pc = 0x123328u;
label_123328:
    // 0x123328: 0x8e020e54  lw          $v0, 0xE54($s0)
    ctx->pc = 0x123328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3668)));
label_12332c:
    // 0x12332c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_123330:
    if (ctx->pc == 0x123330u) {
        ctx->pc = 0x123330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12332Cu;
        // 0x123330: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123334u;
        goto label_123334;
    }
    ctx->pc = 0x12332Cu;
    {
        const bool branch_taken_0x12332c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12332Cu;
        // 0x123330: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12332c) {
            ctx->pc = 0x12340Cu;
            goto label_12340c;
        }
    }
    ctx->pc = 0x123334u;
label_123334:
    // 0x123334: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x123334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
label_123338:
    // 0x123338: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x123338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_12333c:
    // 0x12333c: 0x5080003a  beql        $a0, $zero, . + 4 + (0x3A << 2)
label_123340:
    if (ctx->pc == 0x123340u) {
        ctx->pc = 0x123340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12333Cu;
        // 0x123340: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123344u;
        goto label_123344;
    }
    ctx->pc = 0x12333Cu;
    {
        const bool branch_taken_0x12333c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12333c) {
            ctx->pc = 0x123340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12333Cu;
            // 0x123340: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123428u;
            goto label_123428;
        }
    }
    ctx->pc = 0x123344u;
label_123344:
    // 0x123344: 0xc05e396  jal         func_178E58
label_123348:
    if (ctx->pc == 0x123348u) {
        ctx->pc = 0x12334Cu;
        goto label_12334c;
    }
    ctx->pc = 0x123344u;
    SET_GPR_U32(ctx, 31, 0x12334Cu);
    ctx->pc = 0x178E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178E58u, 0x123344u, 0x12334Cu)) {
        return;
    }
    ctx->pc = 0x12334Cu;
label_12334c:
    // 0x12334c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12334cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123350:
    // 0x123350: 0x52200035  beql        $s1, $zero, . + 4 + (0x35 << 2)
label_123354:
    if (ctx->pc == 0x123354u) {
        ctx->pc = 0x123354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123350u;
        // 0x123354: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123358u;
        goto label_123358;
    }
    ctx->pc = 0x123350u;
    {
        const bool branch_taken_0x123350 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x123350) {
            ctx->pc = 0x123354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123350u;
            // 0x123354: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123428u;
            goto label_123428;
        }
    }
    ctx->pc = 0x123358u;
label_123358:
    // 0x123358: 0xc04f0cc  jal         func_13C330
label_12335c:
    if (ctx->pc == 0x12335Cu) {
        ctx->pc = 0x12335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123358u;
        // 0x12335c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123360u;
        goto label_123360;
    }
    ctx->pc = 0x123358u;
    SET_GPR_U32(ctx, 31, 0x123360u);
    ctx->pc = 0x12335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123358u;
    // 0x12335c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x123358u, 0x123360u)) {
        return;
    }
    ctx->pc = 0x123360u;
label_123360:
    // 0x123360: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x123360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_123364:
    // 0x123364: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x123364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_123368:
    // 0x123368: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x123368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_12336c:
    // 0x12336c: 0xb3a50057  sdl         $a1, 0x57($sp)
    ctx->pc = 0x12336cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_123370:
    // 0x123370: 0xb7a50050  sdr         $a1, 0x50($sp)
    ctx->pc = 0x123370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_123374:
    // 0x123374: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x123374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
label_123378:
    // 0x123378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12337c:
    // 0x12337c: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x12337cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_123380:
    // 0x123380: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x123380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_123384:
    // 0x123384: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x123384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_123388:
    // 0x123388: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x123388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12338c:
    // 0x12338c: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x12338cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_123390:
    // 0x123390: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x123390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_123394:
    // 0x123394: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x123394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_123398:
    // 0x123398: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x123398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12339c:
    // 0x12339c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12339cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1233a0:
    // 0x1233a0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1233a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1233a4:
    // 0x1233a4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1233a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1233a8:
    // 0x1233a8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1233a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1233ac:
    // 0x1233ac: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1233acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1233b0:
    // 0x1233b0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1233b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1233b4:
    // 0x1233b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1233b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1233b8:
    // 0x1233b8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1233b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1233bc:
    // 0x1233bc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1233bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1233c0:
    // 0x1233c0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1233c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1233c4:
    // 0x1233c4: 0xc086156  jal         func_218558
label_1233c8:
    if (ctx->pc == 0x1233C8u) {
        ctx->pc = 0x1233C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233C4u;
        // 0x1233c8: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1233CCu;
        goto label_1233cc;
    }
    ctx->pc = 0x1233C4u;
    SET_GPR_U32(ctx, 31, 0x1233CCu);
    ctx->pc = 0x1233C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1233C4u;
    // 0x1233c8: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x218558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x218558u, 0x1233C4u, 0x1233CCu)) {
        return;
    }
    ctx->pc = 0x1233CCu;
label_1233cc:
    // 0x1233cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1233ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1233d0:
    // 0x1233d0: 0x54430015  bnel        $v0, $v1, . + 4 + (0x15 << 2)
label_1233d4:
    if (ctx->pc == 0x1233D4u) {
        ctx->pc = 0x1233D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233D0u;
        // 0x1233d4: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1233D8u;
        goto label_1233d8;
    }
    ctx->pc = 0x1233D0u;
    {
        const bool branch_taken_0x1233d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1233d0) {
            ctx->pc = 0x1233D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1233D0u;
            // 0x1233d4: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123428u;
            goto label_123428;
        }
    }
    ctx->pc = 0x1233D8u;
label_1233d8:
    // 0x1233d8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1233d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1233dc:
    // 0x1233dc: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1233dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_1233e0:
    // 0x1233e0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1233e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1233e4:
    // 0x1233e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1233e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1233e8:
    // 0x1233e8: 0x0  nop
    ctx->pc = 0x1233e8u;
    // NOP
label_1233ec:
    // 0x1233ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1233ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1233f0:
    // 0x1233f0: 0x0  nop
    ctx->pc = 0x1233f0u;
    // NOP
label_1233f4:
    // 0x1233f4: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_1233f8:
    if (ctx->pc == 0x1233F8u) {
        ctx->pc = 0x1233F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233F4u;
        // 0x1233f8: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1233FCu;
        goto label_1233fc;
    }
    ctx->pc = 0x1233F4u;
    {
        const bool branch_taken_0x1233f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1233f4) {
            ctx->pc = 0x1233F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1233F4u;
            // 0x1233f8: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123428u;
            goto label_123428;
        }
    }
    ctx->pc = 0x1233FCu;
label_1233fc:
    // 0x1233fc: 0xc04f0cc  jal         func_13C330
label_123400:
    if (ctx->pc == 0x123400u) {
        ctx->pc = 0x123400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233FCu;
        // 0x123400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123404u;
        goto label_123404;
    }
    ctx->pc = 0x1233FCu;
    SET_GPR_U32(ctx, 31, 0x123404u);
    ctx->pc = 0x123400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1233FCu;
    // 0x123400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1233FCu, 0x123404u)) {
        return;
    }
    ctx->pc = 0x123404u;
label_123404:
    // 0x123404: 0x10000006  b           . + 4 + (0x6 << 2)
label_123408:
    if (ctx->pc == 0x123408u) {
        ctx->pc = 0x123408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123404u;
        // 0x123408: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12340Cu;
        goto label_12340c;
    }
    ctx->pc = 0x123404u;
    {
        const bool branch_taken_0x123404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123404u;
        // 0x123408: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x123404) {
            ctx->pc = 0x123420u;
            goto label_123420;
        }
    }
    ctx->pc = 0x12340Cu;
label_12340c:
    // 0x12340c: 0x52800006  beql        $s4, $zero, . + 4 + (0x6 << 2)
label_123410:
    if (ctx->pc == 0x123410u) {
        ctx->pc = 0x123410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12340Cu;
        // 0x123410: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123414u;
        goto label_123414;
    }
    ctx->pc = 0x12340Cu;
    {
        const bool branch_taken_0x12340c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x12340c) {
            ctx->pc = 0x123410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12340Cu;
            // 0x123410: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123428u;
            goto label_123428;
        }
    }
    ctx->pc = 0x123414u;
label_123414:
    // 0x123414: 0xc04f0cc  jal         func_13C330
label_123418:
    if (ctx->pc == 0x123418u) {
        ctx->pc = 0x123418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123414u;
        // 0x123418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12341Cu;
        goto label_12341c;
    }
    ctx->pc = 0x123414u;
    SET_GPR_U32(ctx, 31, 0x12341Cu);
    ctx->pc = 0x123418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123414u;
    // 0x123418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x123414u, 0x12341Cu)) {
        return;
    }
    ctx->pc = 0x12341Cu;
label_12341c:
    // 0x12341c: 0xc6000c44  lwc1        $f0, 0xC44($s0)
    ctx->pc = 0x12341cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_123420:
    // 0x123420: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x123420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_123424:
    // 0x123424: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x123424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_123428:
    // 0x123428: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x123428u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_12342c:
    // 0x12342c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12342cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123430:
    // 0x123430: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x123430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_123434:
    // 0x123434: 0x8c620294  lw          $v0, 0x294($v1)
    ctx->pc = 0x123434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_123438:
    // 0x123438: 0x40f809  jalr        $v0
label_12343c:
    if (ctx->pc == 0x12343Cu) {
        ctx->pc = 0x12343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123438u;
        // 0x12343c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123440u;
        goto label_123440;
    }
    ctx->pc = 0x123438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123440u);
        ctx->pc = 0x12343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123438u;
        // 0x12343c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123438u, 0x123440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123440u;
label_123440:
    // 0x123440: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x123440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_123444:
    // 0x123444: 0xc092d94  jal         func_24B650
label_123448:
    if (ctx->pc == 0x123448u) {
        ctx->pc = 0x123448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123444u;
        // 0x123448: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12344Cu;
        goto label_12344c;
    }
    ctx->pc = 0x123444u;
    SET_GPR_U32(ctx, 31, 0x12344Cu);
    ctx->pc = 0x123448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123444u;
    // 0x123448: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x123444u, 0x12344Cu)) {
        return;
    }
    ctx->pc = 0x12344Cu;
label_12344c:
    // 0x12344c: 0xc08992e  jal         func_2264B8
label_123450:
    if (ctx->pc == 0x123450u) {
        ctx->pc = 0x123450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12344Cu;
        // 0x123450: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123454u;
        goto label_123454;
    }
    ctx->pc = 0x12344Cu;
    SET_GPR_U32(ctx, 31, 0x123454u);
    ctx->pc = 0x123450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12344Cu;
    // 0x123450: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x12344Cu, 0x123454u)) {
        return;
    }
    ctx->pc = 0x123454u;
label_123454:
    // 0x123454: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x123454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_123458:
    // 0x123458: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x123458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_12345c:
    // 0x12345c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x12345cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_123460:
    // 0x123460: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x123460u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_123464:
    // 0x123464: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x123464u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_123468:
    // 0x123468: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x123468u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_12346c:
    // 0x12346c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x12346cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_123470:
    // 0x123470: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x123470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_123474:
    // 0x123474: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x123474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_123478:
    // 0x123478: 0x3e00008  jr          $ra
label_12347c:
    if (ctx->pc == 0x12347Cu) {
        ctx->pc = 0x12347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123478u;
        // 0x12347c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123480u;
        goto label_fallthrough_0x123478;
    }
    ctx->pc = 0x123478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123478u;
        // 0x12347c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x123478:
    ctx->pc = 0x123480u;
}
