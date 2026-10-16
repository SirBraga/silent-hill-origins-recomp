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

// Function: sub_00186000
// Address: 0x186000 - 0x1864a8
void sub_00186000_0x186000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186000_0x186000");
#endif

    switch (ctx->pc) {
        case 0x186000u: goto label_186000;
        case 0x186004u: goto label_186004;
        case 0x186008u: goto label_186008;
        case 0x18600cu: goto label_18600c;
        case 0x186010u: goto label_186010;
        case 0x186014u: goto label_186014;
        case 0x186018u: goto label_186018;
        case 0x18601cu: goto label_18601c;
        case 0x186020u: goto label_186020;
        case 0x186024u: goto label_186024;
        case 0x186028u: goto label_186028;
        case 0x18602cu: goto label_18602c;
        case 0x186030u: goto label_186030;
        case 0x186034u: goto label_186034;
        case 0x186038u: goto label_186038;
        case 0x18603cu: goto label_18603c;
        case 0x186040u: goto label_186040;
        case 0x186044u: goto label_186044;
        case 0x186048u: goto label_186048;
        case 0x18604cu: goto label_18604c;
        case 0x186050u: goto label_186050;
        case 0x186054u: goto label_186054;
        case 0x186058u: goto label_186058;
        case 0x18605cu: goto label_18605c;
        case 0x186060u: goto label_186060;
        case 0x186064u: goto label_186064;
        case 0x186068u: goto label_186068;
        case 0x18606cu: goto label_18606c;
        case 0x186070u: goto label_186070;
        case 0x186074u: goto label_186074;
        case 0x186078u: goto label_186078;
        case 0x18607cu: goto label_18607c;
        case 0x186080u: goto label_186080;
        case 0x186084u: goto label_186084;
        case 0x186088u: goto label_186088;
        case 0x18608cu: goto label_18608c;
        case 0x186090u: goto label_186090;
        case 0x186094u: goto label_186094;
        case 0x186098u: goto label_186098;
        case 0x18609cu: goto label_18609c;
        case 0x1860a0u: goto label_1860a0;
        case 0x1860a4u: goto label_1860a4;
        case 0x1860a8u: goto label_1860a8;
        case 0x1860acu: goto label_1860ac;
        case 0x1860b0u: goto label_1860b0;
        case 0x1860b4u: goto label_1860b4;
        case 0x1860b8u: goto label_1860b8;
        case 0x1860bcu: goto label_1860bc;
        case 0x1860c0u: goto label_1860c0;
        case 0x1860c4u: goto label_1860c4;
        case 0x1860c8u: goto label_1860c8;
        case 0x1860ccu: goto label_1860cc;
        case 0x1860d0u: goto label_1860d0;
        case 0x1860d4u: goto label_1860d4;
        case 0x1860d8u: goto label_1860d8;
        case 0x1860dcu: goto label_1860dc;
        case 0x1860e0u: goto label_1860e0;
        case 0x1860e4u: goto label_1860e4;
        case 0x1860e8u: goto label_1860e8;
        case 0x1860ecu: goto label_1860ec;
        case 0x1860f0u: goto label_1860f0;
        case 0x1860f4u: goto label_1860f4;
        case 0x1860f8u: goto label_1860f8;
        case 0x1860fcu: goto label_1860fc;
        case 0x186100u: goto label_186100;
        case 0x186104u: goto label_186104;
        case 0x186108u: goto label_186108;
        case 0x18610cu: goto label_18610c;
        case 0x186110u: goto label_186110;
        case 0x186114u: goto label_186114;
        case 0x186118u: goto label_186118;
        case 0x18611cu: goto label_18611c;
        case 0x186120u: goto label_186120;
        case 0x186124u: goto label_186124;
        case 0x186128u: goto label_186128;
        case 0x18612cu: goto label_18612c;
        case 0x186130u: goto label_186130;
        case 0x186134u: goto label_186134;
        case 0x186138u: goto label_186138;
        case 0x18613cu: goto label_18613c;
        case 0x186140u: goto label_186140;
        case 0x186144u: goto label_186144;
        case 0x186148u: goto label_186148;
        case 0x18614cu: goto label_18614c;
        case 0x186150u: goto label_186150;
        case 0x186154u: goto label_186154;
        case 0x186158u: goto label_186158;
        case 0x18615cu: goto label_18615c;
        case 0x186160u: goto label_186160;
        case 0x186164u: goto label_186164;
        case 0x186168u: goto label_186168;
        case 0x18616cu: goto label_18616c;
        case 0x186170u: goto label_186170;
        case 0x186174u: goto label_186174;
        case 0x186178u: goto label_186178;
        case 0x18617cu: goto label_18617c;
        case 0x186180u: goto label_186180;
        case 0x186184u: goto label_186184;
        case 0x186188u: goto label_186188;
        case 0x18618cu: goto label_18618c;
        case 0x186190u: goto label_186190;
        case 0x186194u: goto label_186194;
        case 0x186198u: goto label_186198;
        case 0x18619cu: goto label_18619c;
        case 0x1861a0u: goto label_1861a0;
        case 0x1861a4u: goto label_1861a4;
        case 0x1861a8u: goto label_1861a8;
        case 0x1861acu: goto label_1861ac;
        case 0x1861b0u: goto label_1861b0;
        case 0x1861b4u: goto label_1861b4;
        case 0x1861b8u: goto label_1861b8;
        case 0x1861bcu: goto label_1861bc;
        case 0x1861c0u: goto label_1861c0;
        case 0x1861c4u: goto label_1861c4;
        case 0x1861c8u: goto label_1861c8;
        case 0x1861ccu: goto label_1861cc;
        case 0x1861d0u: goto label_1861d0;
        case 0x1861d4u: goto label_1861d4;
        case 0x1861d8u: goto label_1861d8;
        case 0x1861dcu: goto label_1861dc;
        case 0x1861e0u: goto label_1861e0;
        case 0x1861e4u: goto label_1861e4;
        case 0x1861e8u: goto label_1861e8;
        case 0x1861ecu: goto label_1861ec;
        case 0x1861f0u: goto label_1861f0;
        case 0x1861f4u: goto label_1861f4;
        case 0x1861f8u: goto label_1861f8;
        case 0x1861fcu: goto label_1861fc;
        case 0x186200u: goto label_186200;
        case 0x186204u: goto label_186204;
        case 0x186208u: goto label_186208;
        case 0x18620cu: goto label_18620c;
        case 0x186210u: goto label_186210;
        case 0x186214u: goto label_186214;
        case 0x186218u: goto label_186218;
        case 0x18621cu: goto label_18621c;
        case 0x186220u: goto label_186220;
        case 0x186224u: goto label_186224;
        case 0x186228u: goto label_186228;
        case 0x18622cu: goto label_18622c;
        case 0x186230u: goto label_186230;
        case 0x186234u: goto label_186234;
        case 0x186238u: goto label_186238;
        case 0x18623cu: goto label_18623c;
        case 0x186240u: goto label_186240;
        case 0x186244u: goto label_186244;
        case 0x186248u: goto label_186248;
        case 0x18624cu: goto label_18624c;
        case 0x186250u: goto label_186250;
        case 0x186254u: goto label_186254;
        case 0x186258u: goto label_186258;
        case 0x18625cu: goto label_18625c;
        case 0x186260u: goto label_186260;
        case 0x186264u: goto label_186264;
        case 0x186268u: goto label_186268;
        case 0x18626cu: goto label_18626c;
        case 0x186270u: goto label_186270;
        case 0x186274u: goto label_186274;
        case 0x186278u: goto label_186278;
        case 0x18627cu: goto label_18627c;
        case 0x186280u: goto label_186280;
        case 0x186284u: goto label_186284;
        case 0x186288u: goto label_186288;
        case 0x18628cu: goto label_18628c;
        case 0x186290u: goto label_186290;
        case 0x186294u: goto label_186294;
        case 0x186298u: goto label_186298;
        case 0x18629cu: goto label_18629c;
        case 0x1862a0u: goto label_1862a0;
        case 0x1862a4u: goto label_1862a4;
        case 0x1862a8u: goto label_1862a8;
        case 0x1862acu: goto label_1862ac;
        case 0x1862b0u: goto label_1862b0;
        case 0x1862b4u: goto label_1862b4;
        case 0x1862b8u: goto label_1862b8;
        case 0x1862bcu: goto label_1862bc;
        case 0x1862c0u: goto label_1862c0;
        case 0x1862c4u: goto label_1862c4;
        case 0x1862c8u: goto label_1862c8;
        case 0x1862ccu: goto label_1862cc;
        case 0x1862d0u: goto label_1862d0;
        case 0x1862d4u: goto label_1862d4;
        case 0x1862d8u: goto label_1862d8;
        case 0x1862dcu: goto label_1862dc;
        case 0x1862e0u: goto label_1862e0;
        case 0x1862e4u: goto label_1862e4;
        case 0x1862e8u: goto label_1862e8;
        case 0x1862ecu: goto label_1862ec;
        case 0x1862f0u: goto label_1862f0;
        case 0x1862f4u: goto label_1862f4;
        case 0x1862f8u: goto label_1862f8;
        case 0x1862fcu: goto label_1862fc;
        case 0x186300u: goto label_186300;
        case 0x186304u: goto label_186304;
        case 0x186308u: goto label_186308;
        case 0x18630cu: goto label_18630c;
        case 0x186310u: goto label_186310;
        case 0x186314u: goto label_186314;
        case 0x186318u: goto label_186318;
        case 0x18631cu: goto label_18631c;
        case 0x186320u: goto label_186320;
        case 0x186324u: goto label_186324;
        case 0x186328u: goto label_186328;
        case 0x18632cu: goto label_18632c;
        case 0x186330u: goto label_186330;
        case 0x186334u: goto label_186334;
        case 0x186338u: goto label_186338;
        case 0x18633cu: goto label_18633c;
        case 0x186340u: goto label_186340;
        case 0x186344u: goto label_186344;
        case 0x186348u: goto label_186348;
        case 0x18634cu: goto label_18634c;
        case 0x186350u: goto label_186350;
        case 0x186354u: goto label_186354;
        case 0x186358u: goto label_186358;
        case 0x18635cu: goto label_18635c;
        case 0x186360u: goto label_186360;
        case 0x186364u: goto label_186364;
        case 0x186368u: goto label_186368;
        case 0x18636cu: goto label_18636c;
        case 0x186370u: goto label_186370;
        case 0x186374u: goto label_186374;
        case 0x186378u: goto label_186378;
        case 0x18637cu: goto label_18637c;
        case 0x186380u: goto label_186380;
        case 0x186384u: goto label_186384;
        case 0x186388u: goto label_186388;
        case 0x18638cu: goto label_18638c;
        case 0x186390u: goto label_186390;
        case 0x186394u: goto label_186394;
        case 0x186398u: goto label_186398;
        case 0x18639cu: goto label_18639c;
        case 0x1863a0u: goto label_1863a0;
        case 0x1863a4u: goto label_1863a4;
        case 0x1863a8u: goto label_1863a8;
        case 0x1863acu: goto label_1863ac;
        case 0x1863b0u: goto label_1863b0;
        case 0x1863b4u: goto label_1863b4;
        case 0x1863b8u: goto label_1863b8;
        case 0x1863bcu: goto label_1863bc;
        case 0x1863c0u: goto label_1863c0;
        case 0x1863c4u: goto label_1863c4;
        case 0x1863c8u: goto label_1863c8;
        case 0x1863ccu: goto label_1863cc;
        case 0x1863d0u: goto label_1863d0;
        case 0x1863d4u: goto label_1863d4;
        case 0x1863d8u: goto label_1863d8;
        case 0x1863dcu: goto label_1863dc;
        case 0x1863e0u: goto label_1863e0;
        case 0x1863e4u: goto label_1863e4;
        case 0x1863e8u: goto label_1863e8;
        case 0x1863ecu: goto label_1863ec;
        case 0x1863f0u: goto label_1863f0;
        case 0x1863f4u: goto label_1863f4;
        case 0x1863f8u: goto label_1863f8;
        case 0x1863fcu: goto label_1863fc;
        case 0x186400u: goto label_186400;
        case 0x186404u: goto label_186404;
        case 0x186408u: goto label_186408;
        case 0x18640cu: goto label_18640c;
        case 0x186410u: goto label_186410;
        case 0x186414u: goto label_186414;
        case 0x186418u: goto label_186418;
        case 0x18641cu: goto label_18641c;
        case 0x186420u: goto label_186420;
        case 0x186424u: goto label_186424;
        case 0x186428u: goto label_186428;
        case 0x18642cu: goto label_18642c;
        case 0x186430u: goto label_186430;
        case 0x186434u: goto label_186434;
        case 0x186438u: goto label_186438;
        case 0x18643cu: goto label_18643c;
        case 0x186440u: goto label_186440;
        case 0x186444u: goto label_186444;
        case 0x186448u: goto label_186448;
        case 0x18644cu: goto label_18644c;
        case 0x186450u: goto label_186450;
        case 0x186454u: goto label_186454;
        case 0x186458u: goto label_186458;
        case 0x18645cu: goto label_18645c;
        case 0x186460u: goto label_186460;
        case 0x186464u: goto label_186464;
        case 0x186468u: goto label_186468;
        case 0x18646cu: goto label_18646c;
        case 0x186470u: goto label_186470;
        case 0x186474u: goto label_186474;
        case 0x186478u: goto label_186478;
        case 0x18647cu: goto label_18647c;
        case 0x186480u: goto label_186480;
        case 0x186484u: goto label_186484;
        case 0x186488u: goto label_186488;
        case 0x18648cu: goto label_18648c;
        case 0x186490u: goto label_186490;
        case 0x186494u: goto label_186494;
        case 0x186498u: goto label_186498;
        case 0x18649cu: goto label_18649c;
        case 0x1864a0u: goto label_1864a0;
        case 0x1864a4u: goto label_1864a4;
        default: break;
    }

    ctx->pc = 0x186000u;

label_186000:
    // 0x186000: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x186000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_186004:
    // 0x186004: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x186004u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_186008:
    // 0x186008: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x186008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_18600c:
    // 0x18600c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x18600cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_186010:
    // 0x186010: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x186010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_186014:
    // 0x186014: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x186014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_186018:
    // 0x186018: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x186018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_18601c:
    // 0x18601c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18601cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_186020:
    // 0x186020: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x186020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936704)));
label_186024:
    // 0x186024: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x186024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_186028:
    // 0x186028: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
label_18602c:
    if (ctx->pc == 0x18602Cu) {
        ctx->pc = 0x18602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186028u;
        // 0x18602c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186030u;
        goto label_186030;
    }
    ctx->pc = 0x186028u;
    {
        const bool branch_taken_0x186028 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x18602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186028u;
        // 0x18602c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186028) {
            ctx->pc = 0x186040u;
            goto label_186040;
        }
    }
    ctx->pc = 0x186030u;
label_186030:
    // 0x186030: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x186030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_186034:
    // 0x186034: 0x8c438898  lw          $v1, -0x7768($v0)
    ctx->pc = 0x186034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936728)));
label_186038:
    // 0x186038: 0x14a3008a  bne         $a1, $v1, . + 4 + (0x8A << 2)
label_18603c:
    if (ctx->pc == 0x18603Cu) {
        ctx->pc = 0x18603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186038u;
        // 0x18603c: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186040u;
        goto label_186040;
    }
    ctx->pc = 0x186038u;
    {
        const bool branch_taken_0x186038 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x18603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186038u;
        // 0x18603c: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186038) {
            ctx->pc = 0x186264u;
            goto label_186264;
        }
    }
    ctx->pc = 0x186040u;
label_186040:
    // 0x186040: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x186040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_186044:
    // 0x186044: 0x10a00112  beqz        $a1, . + 4 + (0x112 << 2)
label_186048:
    if (ctx->pc == 0x186048u) {
        ctx->pc = 0x186048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186044u;
        // 0x186048: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18604Cu;
        goto label_18604c;
    }
    ctx->pc = 0x186044u;
    {
        const bool branch_taken_0x186044 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x186048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186044u;
        // 0x186048: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186044) {
            ctx->pc = 0x186490u;
            goto label_186490;
        }
    }
    ctx->pc = 0x18604Cu;
label_18604c:
    // 0x18604c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x18604cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_186050:
    // 0x186050: 0x10400110  beqz        $v0, . + 4 + (0x110 << 2)
label_186054:
    if (ctx->pc == 0x186054u) {
        ctx->pc = 0x186054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186050u;
        // 0x186054: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186058u;
        goto label_186058;
    }
    ctx->pc = 0x186050u;
    {
        const bool branch_taken_0x186050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186050u;
        // 0x186054: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186050) {
            ctx->pc = 0x186494u;
            goto label_186494;
        }
    }
    ctx->pc = 0x186058u;
label_186058:
    // 0x186058: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x186058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_18605c:
    // 0x18605c: 0x1440010e  bnez        $v0, . + 4 + (0x10E << 2)
label_186060:
    if (ctx->pc == 0x186060u) {
        ctx->pc = 0x186060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18605Cu;
        // 0x186060: 0x7bb20050  lq          $s2, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186064u;
        goto label_186064;
    }
    ctx->pc = 0x18605Cu;
    {
        const bool branch_taken_0x18605c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18605Cu;
        // 0x186060: 0x7bb20050  lq          $s2, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18605c) {
            ctx->pc = 0x186498u;
            goto label_186498;
        }
    }
    ctx->pc = 0x186064u;
label_186064:
    // 0x186064: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x186064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186068:
    // 0x186068: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x186068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18606c:
    // 0x18606c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18606cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_186070:
    // 0x186070: 0xc0603e4  jal         func_180F90
label_186074:
    if (ctx->pc == 0x186074u) {
        ctx->pc = 0x186074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186070u;
        // 0x186074: 0xe6600014  swc1        $f0, 0x14($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x186078u;
        goto label_186078;
    }
    ctx->pc = 0x186070u;
    SET_GPR_U32(ctx, 31, 0x186078u);
    ctx->pc = 0x186074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186070u;
    // 0x186074: 0xe6600014  swc1        $f0, 0x14($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F90u, 0x186070u, 0x186078u)) {
        return;
    }
    ctx->pc = 0x186078u;
label_186078:
    // 0x186078: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_18607c:
    if (ctx->pc == 0x18607Cu) {
        ctx->pc = 0x18607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186078u;
        // 0x18607c: 0x8e620024  lw          $v0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186080u;
        goto label_186080;
    }
    ctx->pc = 0x186078u;
    {
        const bool branch_taken_0x186078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186078) {
            ctx->pc = 0x18607Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186078u;
            // 0x18607c: 0x8e620024  lw          $v0, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186094u;
            goto label_186094;
        }
    }
    ctx->pc = 0x186080u;
label_186080:
    // 0x186080: 0xc0603fc  jal         func_180FF0
label_186084:
    if (ctx->pc == 0x186084u) {
        ctx->pc = 0x186088u;
        goto label_186088;
    }
    ctx->pc = 0x186080u;
    SET_GPR_U32(ctx, 31, 0x186088u);
    ctx->pc = 0x180FF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180FF0u, 0x186080u, 0x186088u)) {
        return;
    }
    ctx->pc = 0x186088u;
label_186088:
    // 0x186088: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_18608c:
    if (ctx->pc == 0x18608Cu) {
        ctx->pc = 0x18608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186088u;
        // 0x18608c: 0xae600014  sw          $zero, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186090u;
        goto label_186090;
    }
    ctx->pc = 0x186088u;
    {
        const bool branch_taken_0x186088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186088) {
            ctx->pc = 0x18608Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186088u;
            // 0x18608c: 0xae600014  sw          $zero, 0x14($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186090u;
            goto label_186090;
        }
    }
    ctx->pc = 0x186090u;
label_186090:
    // 0x186090: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x186090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_186094:
    // 0x186094: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_186098:
    if (ctx->pc == 0x186098u) {
        ctx->pc = 0x186098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186094u;
        // 0x186098: 0x8e620028  lw          $v0, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18609Cu;
        goto label_18609c;
    }
    ctx->pc = 0x186094u;
    {
        const bool branch_taken_0x186094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186094) {
            ctx->pc = 0x186098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186094u;
            // 0x186098: 0x8e620028  lw          $v0, 0x28($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1860D0u;
            goto label_1860d0;
        }
    }
    ctx->pc = 0x18609Cu;
label_18609c:
    // 0x18609c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x18609cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1860a0:
    // 0x1860a0: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x1860a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1860a4:
    // 0x1860a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1860a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1860a8:
    // 0x1860a8: 0x0  nop
    ctx->pc = 0x1860a8u;
    // NOP
label_1860ac:
    // 0x1860ac: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_1860b0:
    if (ctx->pc == 0x1860B0u) {
        ctx->pc = 0x1860B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860ACu;
        // 0x1860b0: 0x8e620028  lw          $v0, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1860B4u;
        goto label_1860b4;
    }
    ctx->pc = 0x1860ACu;
    {
        const bool branch_taken_0x1860ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1860ac) {
            ctx->pc = 0x1860B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1860ACu;
            // 0x1860b0: 0x8e620028  lw          $v0, 0x28($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1860D0u;
            goto label_1860d0;
        }
    }
    ctx->pc = 0x1860B4u;
label_1860b4:
    // 0x1860b4: 0xc061d04  jal         func_187410
label_1860b8:
    if (ctx->pc == 0x1860B8u) {
        ctx->pc = 0x1860B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860B4u;
        // 0x1860b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1860BCu;
        goto label_1860bc;
    }
    ctx->pc = 0x1860B4u;
    SET_GPR_U32(ctx, 31, 0x1860BCu);
    ctx->pc = 0x1860B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1860B4u;
    // 0x1860b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187410u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x187410u, 0x1860B4u, 0x1860BCu)) {
        return;
    }
    ctx->pc = 0x1860BCu;
label_1860bc:
    // 0x1860bc: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x1860bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_1860c0:
    // 0x1860c0: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1860c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1860c4:
    // 0x1860c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1860c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1860c8:
    // 0x1860c8: 0xae630024  sw          $v1, 0x24($s3)
    ctx->pc = 0x1860c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
label_1860cc:
    // 0x1860cc: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x1860ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_1860d0:
    // 0x1860d0: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_1860d4:
    if (ctx->pc == 0x1860D4u) {
        ctx->pc = 0x1860D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860D0u;
        // 0x1860d4: 0x8e64002c  lw          $a0, 0x2C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1860D8u;
        goto label_1860d8;
    }
    ctx->pc = 0x1860D0u;
    {
        const bool branch_taken_0x1860d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1860d0) {
            ctx->pc = 0x1860D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1860D0u;
            // 0x1860d4: 0x8e64002c  lw          $a0, 0x2C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18612Cu;
            goto label_18612c;
        }
    }
    ctx->pc = 0x1860D8u;
label_1860d8:
    // 0x1860d8: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1860d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1860dc:
    // 0x1860dc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1860dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1860e0:
    // 0x1860e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1860e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1860e4:
    // 0x1860e4: 0x0  nop
    ctx->pc = 0x1860e4u;
    // NOP
label_1860e8:
    // 0x1860e8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1860ec:
    if (ctx->pc == 0x1860ECu) {
        ctx->pc = 0x1860ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860E8u;
        // 0x1860ec: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1860F0u;
        goto label_1860f0;
    }
    ctx->pc = 0x1860E8u;
    {
        const bool branch_taken_0x1860e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1860ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860E8u;
        // 0x1860ec: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860e8) {
            ctx->pc = 0x186128u;
            goto label_186128;
        }
    }
    ctx->pc = 0x1860F0u;
label_1860f0:
    // 0x1860f0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1860f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1860f4:
    // 0x1860f4: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1860f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_1860f8:
    // 0x1860f8: 0x50820009  beql        $a0, $v0, . + 4 + (0x9 << 2)
label_1860fc:
    if (ctx->pc == 0x1860FCu) {
        ctx->pc = 0x1860FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860F8u;
        // 0x1860fc: 0x8e620028  lw          $v0, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186100u;
        goto label_186100;
    }
    ctx->pc = 0x1860F8u;
    {
        const bool branch_taken_0x1860f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1860f8) {
            ctx->pc = 0x1860FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1860F8u;
            // 0x1860fc: 0x8e620028  lw          $v0, 0x28($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186120u;
            goto label_186120;
        }
    }
    ctx->pc = 0x186100u;
label_186100:
    // 0x186100: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x186100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_186104:
    // 0x186104: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_186108:
    if (ctx->pc == 0x186108u) {
        ctx->pc = 0x186108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186104u;
        // 0x186108: 0x8e620028  lw          $v0, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18610Cu;
        goto label_18610c;
    }
    ctx->pc = 0x186104u;
    {
        const bool branch_taken_0x186104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186104) {
            ctx->pc = 0x186108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186104u;
            // 0x186108: 0x8e620028  lw          $v0, 0x28($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186120u;
            goto label_186120;
        }
    }
    ctx->pc = 0x18610Cu;
label_18610c:
    // 0x18610c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x18610cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_186110:
    // 0x186110: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x186110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_186114:
    // 0x186114: 0xc07fd18  jal         func_1FF460
label_186118:
    if (ctx->pc == 0x186118u) {
        ctx->pc = 0x186118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186114u;
        // 0x186118: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18611Cu;
        goto label_18611c;
    }
    ctx->pc = 0x186114u;
    SET_GPR_U32(ctx, 31, 0x18611Cu);
    ctx->pc = 0x186118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186114u;
    // 0x186118: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x186114u, 0x18611Cu)) {
        return;
    }
    ctx->pc = 0x18611Cu;
label_18611c:
    // 0x18611c: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x18611cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_186120:
    // 0x186120: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x186120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_186124:
    // 0x186124: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x186124u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
label_186128:
    // 0x186128: 0x8e64002c  lw          $a0, 0x2C($s3)
    ctx->pc = 0x186128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_18612c:
    // 0x18612c: 0x50800020  beql        $a0, $zero, . + 4 + (0x20 << 2)
label_186130:
    if (ctx->pc == 0x186130u) {
        ctx->pc = 0x186130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18612Cu;
        // 0x186130: 0x8e620030  lw          $v0, 0x30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186134u;
        goto label_186134;
    }
    ctx->pc = 0x18612Cu;
    {
        const bool branch_taken_0x18612c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18612c) {
            ctx->pc = 0x186130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18612Cu;
            // 0x186130: 0x8e620030  lw          $v0, 0x30($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1861B0u;
            goto label_1861b0;
        }
    }
    ctx->pc = 0x186134u;
label_186134:
    // 0x186134: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x186134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186138:
    // 0x186138: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x186138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18613c:
    // 0x18613c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18613cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186140:
    // 0x186140: 0x0  nop
    ctx->pc = 0x186140u;
    // NOP
label_186144:
    // 0x186144: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
label_186148:
    if (ctx->pc == 0x186148u) {
        ctx->pc = 0x186148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186144u;
        // 0x186148: 0x8e620030  lw          $v0, 0x30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18614Cu;
        goto label_18614c;
    }
    ctx->pc = 0x186144u;
    {
        const bool branch_taken_0x186144 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x186144) {
            ctx->pc = 0x186148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186144u;
            // 0x186148: 0x8e620030  lw          $v0, 0x30($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1861B0u;
            goto label_1861b0;
        }
    }
    ctx->pc = 0x18614Cu;
label_18614c:
    // 0x18614c: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_186150:
    if (ctx->pc == 0x186150u) {
        ctx->pc = 0x186150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18614Cu;
        // 0x186150: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186154u;
        goto label_186154;
    }
    ctx->pc = 0x18614Cu;
    {
        const bool branch_taken_0x18614c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x186150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18614Cu;
        // 0x186150: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18614c) {
            ctx->pc = 0x1861A0u;
            goto label_1861a0;
        }
    }
    ctx->pc = 0x186154u;
label_186154:
    // 0x186154: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x186154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_186158:
    // 0x186158: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x186158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18615c:
    // 0x18615c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x18615cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_186160:
    // 0x186160: 0x8c45bdb8  lw          $a1, -0x4248($v0)
    ctx->pc = 0x186160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950328)));
label_186164:
    // 0x186164: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x186164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_186168:
    // 0x186168: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x186168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18616c:
    // 0x18616c: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x18616cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_186170:
    // 0x186170: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x186170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_186174:
    // 0x186174: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x186174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_186178:
    // 0x186178: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x186178u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_18617c:
    // 0x18617c: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_186180:
    if (ctx->pc == 0x186180u) {
        ctx->pc = 0x186180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18617Cu;
        // 0x186180: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186184u;
        goto label_186184;
    }
    ctx->pc = 0x18617Cu;
    {
        const bool branch_taken_0x18617c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x186180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18617Cu;
        // 0x186180: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18617c) {
            ctx->pc = 0x1861A0u;
            goto label_1861a0;
        }
    }
    ctx->pc = 0x186184u;
label_186184:
    // 0x186184: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x186184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_186188:
    // 0x186188: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18618c:
    if (ctx->pc == 0x18618Cu) {
        ctx->pc = 0x18618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186188u;
        // 0x18618c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186190u;
        goto label_186190;
    }
    ctx->pc = 0x186188u;
    {
        const bool branch_taken_0x186188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186188u;
        // 0x18618c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186188) {
            ctx->pc = 0x1861A0u;
            goto label_1861a0;
        }
    }
    ctx->pc = 0x186190u;
label_186190:
    // 0x186190: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x186190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_186194:
    // 0x186194: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x186194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_186198:
    // 0x186198: 0xc07fd18  jal         func_1FF460
label_18619c:
    if (ctx->pc == 0x18619Cu) {
        ctx->pc = 0x18619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186198u;
        // 0x18619c: 0xac5d0004  sw          $sp, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1861A0u;
        goto label_1861a0;
    }
    ctx->pc = 0x186198u;
    SET_GPR_U32(ctx, 31, 0x1861A0u);
    ctx->pc = 0x18619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186198u;
    // 0x18619c: 0xac5d0004  sw          $sp, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x186198u, 0x1861A0u)) {
        return;
    }
    ctx->pc = 0x1861A0u;
label_1861a0:
    // 0x1861a0: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x1861a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_1861a4:
    // 0x1861a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1861a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1861a8:
    // 0x1861a8: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x1861a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
label_1861ac:
    // 0x1861ac: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x1861acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_1861b0:
    // 0x1861b0: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
label_1861b4:
    if (ctx->pc == 0x1861B4u) {
        ctx->pc = 0x1861B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861B0u;
        // 0x1861b4: 0x8e620024  lw          $v0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1861B8u;
        goto label_1861b8;
    }
    ctx->pc = 0x1861B0u;
    {
        const bool branch_taken_0x1861b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1861b0) {
            ctx->pc = 0x1861B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1861B0u;
            // 0x1861b4: 0x8e620024  lw          $v0, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186230u;
            goto label_186230;
        }
    }
    ctx->pc = 0x1861B8u;
label_1861b8:
    // 0x1861b8: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1861b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1861bc:
    // 0x1861bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1861bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1861c0:
    // 0x1861c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1861c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1861c4:
    // 0x1861c4: 0x0  nop
    ctx->pc = 0x1861c4u;
    // NOP
label_1861c8:
    // 0x1861c8: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
label_1861cc:
    if (ctx->pc == 0x1861CCu) {
        ctx->pc = 0x1861CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861C8u;
        // 0x1861cc: 0x8e620024  lw          $v0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1861D0u;
        goto label_1861d0;
    }
    ctx->pc = 0x1861C8u;
    {
        const bool branch_taken_0x1861c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1861c8) {
            ctx->pc = 0x1861CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1861C8u;
            // 0x1861cc: 0x8e620024  lw          $v0, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186230u;
            goto label_186230;
        }
    }
    ctx->pc = 0x1861D0u;
label_1861d0:
    // 0x1861d0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1861d4:
    if (ctx->pc == 0x1861D4u) {
        ctx->pc = 0x1861D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861D0u;
        // 0x1861d4: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1861D8u;
        goto label_1861d8;
    }
    ctx->pc = 0x1861D0u;
    {
        const bool branch_taken_0x1861d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861D0u;
        // 0x1861d4: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861d0) {
            ctx->pc = 0x186220u;
            goto label_186220;
        }
    }
    ctx->pc = 0x1861D8u;
label_1861d8:
    // 0x1861d8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1861d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1861dc:
    // 0x1861dc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1861dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1861e0:
    // 0x1861e0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1861e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1861e4:
    // 0x1861e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1861e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1861e8:
    // 0x1861e8: 0x8c44bdc0  lw          $a0, -0x4240($v0)
    ctx->pc = 0x1861e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950336)));
label_1861ec:
    // 0x1861ec: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1861ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_1861f0:
    // 0x1861f0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1861f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1861f4:
    // 0x1861f4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1861f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1861f8:
    // 0x1861f8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1861f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1861fc:
    // 0x1861fc: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_186200:
    if (ctx->pc == 0x186200u) {
        ctx->pc = 0x186200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861FCu;
        // 0x186200: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186204u;
        goto label_186204;
    }
    ctx->pc = 0x1861FCu;
    {
        const bool branch_taken_0x1861fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x186200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861FCu;
        // 0x186200: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861fc) {
            ctx->pc = 0x186220u;
            goto label_186220;
        }
    }
    ctx->pc = 0x186204u;
label_186204:
    // 0x186204: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x186204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_186208:
    // 0x186208: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18620c:
    if (ctx->pc == 0x18620Cu) {
        ctx->pc = 0x18620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186208u;
        // 0x18620c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186210u;
        goto label_186210;
    }
    ctx->pc = 0x186208u;
    {
        const bool branch_taken_0x186208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186208u;
        // 0x18620c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186208) {
            ctx->pc = 0x186220u;
            goto label_186220;
        }
    }
    ctx->pc = 0x186210u;
label_186210:
    // 0x186210: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x186210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_186214:
    // 0x186214: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x186214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_186218:
    // 0x186218: 0xc07fd18  jal         func_1FF460
label_18621c:
    if (ctx->pc == 0x18621Cu) {
        ctx->pc = 0x18621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186218u;
        // 0x18621c: 0xac5d0004  sw          $sp, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186220u;
        goto label_186220;
    }
    ctx->pc = 0x186218u;
    SET_GPR_U32(ctx, 31, 0x186220u);
    ctx->pc = 0x18621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186218u;
    // 0x18621c: 0xac5d0004  sw          $sp, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x186218u, 0x186220u)) {
        return;
    }
    ctx->pc = 0x186220u;
label_186220:
    // 0x186220: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x186220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_186224:
    // 0x186224: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x186224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_186228:
    // 0x186228: 0xae630030  sw          $v1, 0x30($s3)
    ctx->pc = 0x186228u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
label_18622c:
    // 0x18622c: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x18622cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_186230:
    // 0x186230: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
label_186234:
    if (ctx->pc == 0x186234u) {
        ctx->pc = 0x186234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186230u;
        // 0x186234: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186238u;
        goto label_186238;
    }
    ctx->pc = 0x186230u;
    {
        const bool branch_taken_0x186230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186230u;
        // 0x186234: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186230) {
            ctx->pc = 0x186490u;
            goto label_186490;
        }
    }
    ctx->pc = 0x186238u;
label_186238:
    // 0x186238: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x186238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_18623c:
    // 0x18623c: 0x14400094  bnez        $v0, . + 4 + (0x94 << 2)
label_186240:
    if (ctx->pc == 0x186240u) {
        ctx->pc = 0x186244u;
        goto label_186244;
    }
    ctx->pc = 0x18623Cu;
    {
        const bool branch_taken_0x18623c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18623c) {
            ctx->pc = 0x186490u;
            goto label_186490;
        }
    }
    ctx->pc = 0x186244u;
label_186244:
    // 0x186244: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x186244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_186248:
    // 0x186248: 0x14400092  bnez        $v0, . + 4 + (0x92 << 2)
label_18624c:
    if (ctx->pc == 0x18624Cu) {
        ctx->pc = 0x18624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186248u;
        // 0x18624c: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186250u;
        goto label_186250;
    }
    ctx->pc = 0x186248u;
    {
        const bool branch_taken_0x186248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186248u;
        // 0x18624c: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186248) {
            ctx->pc = 0x186494u;
            goto label_186494;
        }
    }
    ctx->pc = 0x186250u;
label_186250:
    // 0x186250: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x186250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_186254:
    // 0x186254: 0x1440008f  bnez        $v0, . + 4 + (0x8F << 2)
label_186258:
    if (ctx->pc == 0x186258u) {
        ctx->pc = 0x18625Cu;
        goto label_18625c;
    }
    ctx->pc = 0x186254u;
    {
        const bool branch_taken_0x186254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186254) {
            ctx->pc = 0x186494u;
            goto label_186494;
        }
    }
    ctx->pc = 0x18625Cu;
label_18625c:
    // 0x18625c: 0x10000079  b           . + 4 + (0x79 << 2)
label_186260:
    if (ctx->pc == 0x186260u) {
        ctx->pc = 0x186264u;
        goto label_186264;
    }
    ctx->pc = 0x18625Cu;
    {
        const bool branch_taken_0x18625c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18625c) {
            ctx->pc = 0x186444u;
            goto label_186444;
        }
    }
    ctx->pc = 0x186264u;
label_186264:
    // 0x186264: 0x8c438918  lw          $v1, -0x76E8($v0)
    ctx->pc = 0x186264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936856)));
label_186268:
    // 0x186268: 0x14a30040  bne         $a1, $v1, . + 4 + (0x40 << 2)
label_18626c:
    if (ctx->pc == 0x18626Cu) {
        ctx->pc = 0x18626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186268u;
        // 0x18626c: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186270u;
        goto label_186270;
    }
    ctx->pc = 0x186268u;
    {
        const bool branch_taken_0x186268 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x18626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186268u;
        // 0x18626c: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186268) {
            ctx->pc = 0x18636Cu;
            goto label_18636c;
        }
    }
    ctx->pc = 0x186270u;
label_186270:
    // 0x186270: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x186270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_186274:
    // 0x186274: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x186274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_186278:
    // 0x186278: 0x8c839168  lw          $v1, -0x6E98($a0)
    ctx->pc = 0x186278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294938984)));
label_18627c:
    // 0x18627c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x18627cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_186280:
    // 0x186280: 0x2442ffe6  addiu       $v0, $v0, -0x1A
    ctx->pc = 0x186280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967270));
label_186284:
    // 0x186284: 0x14a00081  bnez        $a1, . + 4 + (0x81 << 2)
label_186288:
    if (ctx->pc == 0x186288u) {
        ctx->pc = 0x186288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186284u;
        // 0x186288: 0x2c500002  sltiu       $s0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18628Cu;
        goto label_18628c;
    }
    ctx->pc = 0x186284u;
    {
        const bool branch_taken_0x186284 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x186288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186284u;
        // 0x186288: 0x2c500002  sltiu       $s0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186284) {
            ctx->pc = 0x18648Cu;
            goto label_18648c;
        }
    }
    ctx->pc = 0x18628Cu;
label_18628c:
    // 0x18628c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x18628cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_186290:
    // 0x186290: 0x5040007f  beql        $v0, $zero, . + 4 + (0x7F << 2)
label_186294:
    if (ctx->pc == 0x186294u) {
        ctx->pc = 0x186294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186290u;
        // 0x186294: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186298u;
        goto label_186298;
    }
    ctx->pc = 0x186290u;
    {
        const bool branch_taken_0x186290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186290) {
            ctx->pc = 0x186294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186290u;
            // 0x186294: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186490u;
            goto label_186490;
        }
    }
    ctx->pc = 0x186298u;
label_186298:
    // 0x186298: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x186298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_18629c:
    // 0x18629c: 0x5040007c  beql        $v0, $zero, . + 4 + (0x7C << 2)
label_1862a0:
    if (ctx->pc == 0x1862A0u) {
        ctx->pc = 0x1862A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18629Cu;
        // 0x1862a0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1862A4u;
        goto label_1862a4;
    }
    ctx->pc = 0x18629Cu;
    {
        const bool branch_taken_0x18629c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18629c) {
            ctx->pc = 0x1862A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18629Cu;
            // 0x1862a0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186490u;
            goto label_186490;
        }
    }
    ctx->pc = 0x1862A4u;
label_1862a4:
    // 0x1862a4: 0xc05fd8a  jal         func_17F628
label_1862a8:
    if (ctx->pc == 0x1862A8u) {
        ctx->pc = 0x1862ACu;
        goto label_1862ac;
    }
    ctx->pc = 0x1862A4u;
    SET_GPR_U32(ctx, 31, 0x1862ACu);
    ctx->pc = 0x17F628u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F628u, 0x1862A4u, 0x1862ACu)) {
        return;
    }
    ctx->pc = 0x1862ACu;
label_1862ac:
    // 0x1862ac: 0x50400078  beql        $v0, $zero, . + 4 + (0x78 << 2)
label_1862b0:
    if (ctx->pc == 0x1862B0u) {
        ctx->pc = 0x1862B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862ACu;
        // 0x1862b0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1862B4u;
        goto label_1862b4;
    }
    ctx->pc = 0x1862ACu;
    {
        const bool branch_taken_0x1862ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1862ac) {
            ctx->pc = 0x1862B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1862ACu;
            // 0x1862b0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186490u;
            goto label_186490;
        }
    }
    ctx->pc = 0x1862B4u;
label_1862b4:
    // 0x1862b4: 0x12000075  beqz        $s0, . + 4 + (0x75 << 2)
label_1862b8:
    if (ctx->pc == 0x1862B8u) {
        ctx->pc = 0x1862B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862B4u;
        // 0x1862b8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1862BCu;
        goto label_1862bc;
    }
    ctx->pc = 0x1862B4u;
    {
        const bool branch_taken_0x1862b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1862B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862B4u;
        // 0x1862b8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862b4) {
            ctx->pc = 0x18648Cu;
            goto label_18648c;
        }
    }
    ctx->pc = 0x1862BCu;
label_1862bc:
    // 0x1862bc: 0x8c4385f4  lw          $v1, -0x7A0C($v0)
    ctx->pc = 0x1862bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936052)));
label_1862c0:
    // 0x1862c0: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
label_1862c4:
    if (ctx->pc == 0x1862C4u) {
        ctx->pc = 0x1862C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862C0u;
        // 0x1862c4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1862C8u;
        goto label_1862c8;
    }
    ctx->pc = 0x1862C0u;
    {
        const bool branch_taken_0x1862c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1862C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862C0u;
        // 0x1862c4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862c0) {
            ctx->pc = 0x186490u;
            goto label_186490;
        }
    }
    ctx->pc = 0x1862C8u;
label_1862c8:
    // 0x1862c8: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1862c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1862cc:
    // 0x1862cc: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1862ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1862d0:
    // 0x1862d0: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1862d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1862d4:
    // 0x1862d4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1862d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1862d8:
    // 0x1862d8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1862d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1862dc:
    // 0x1862dc: 0x40f809  jalr        $v0
label_1862e0:
    if (ctx->pc == 0x1862E0u) {
        ctx->pc = 0x1862E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862DCu;
        // 0x1862e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1862E4u;
        goto label_1862e4;
    }
    ctx->pc = 0x1862DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1862E4u);
        ctx->pc = 0x1862E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862DCu;
        // 0x1862e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1862DCu, 0x1862E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1862E4u;
label_1862e4:
    // 0x1862e4: 0x27b10024  addiu       $s1, $sp, 0x24
    ctx->pc = 0x1862e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_1862e8:
    // 0x1862e8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1862e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1862ec:
    // 0x1862ec: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1862ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1862f0:
    // 0x1862f0: 0x40f809  jalr        $v0
label_1862f4:
    if (ctx->pc == 0x1862F4u) {
        ctx->pc = 0x1862F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862F0u;
        // 0x1862f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1862F8u;
        goto label_1862f8;
    }
    ctx->pc = 0x1862F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1862F8u);
        ctx->pc = 0x1862F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862F0u;
        // 0x1862f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1862F0u, 0x1862F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1862F8u;
label_1862f8:
    // 0x1862f8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1862f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1862fc:
    // 0x1862fc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1862fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_186300:
    // 0x186300: 0x40f809  jalr        $v0
label_186304:
    if (ctx->pc == 0x186304u) {
        ctx->pc = 0x186304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186300u;
        // 0x186304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186308u;
        goto label_186308;
    }
    ctx->pc = 0x186300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186308u);
        ctx->pc = 0x186304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186300u;
        // 0x186304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186300u, 0x186308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186308u;
label_186308:
    // 0x186308: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x186308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_18630c:
    // 0x18630c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x18630cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_186310:
    // 0x186310: 0x40f809  jalr        $v0
label_186314:
    if (ctx->pc == 0x186314u) {
        ctx->pc = 0x186314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186310u;
        // 0x186314: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186318u;
        goto label_186318;
    }
    ctx->pc = 0x186310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186318u);
        ctx->pc = 0x186314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186310u;
        // 0x186314: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186310u, 0x186318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186318u;
label_186318:
    // 0x186318: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x186318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_18631c:
    // 0x18631c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18631cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_186320:
    // 0x186320: 0xc46c8aa8  lwc1        $f12, -0x7558($v1)
    ctx->pc = 0x186320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294937256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_186324:
    // 0x186324: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x186324u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
label_186328:
    // 0x186328: 0x8c488ab4  lw          $t0, -0x754C($v0)
    ctx->pc = 0x186328u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937268)));
label_18632c:
    // 0x18632c: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x18632cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
label_186330:
    // 0x186330: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x186330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_186334:
    // 0x186334: 0x24c68a98  addiu       $a2, $a2, -0x7568
    ctx->pc = 0x186334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937240));
label_186338:
    // 0x186338: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x186338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_18633c:
    // 0x18633c: 0xc085cec  jal         func_2173B0
label_186340:
    if (ctx->pc == 0x186340u) {
        ctx->pc = 0x186340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18633Cu;
        // 0x186340: 0x24e78ab0  addiu       $a3, $a3, -0x7550 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186344u;
        goto label_186344;
    }
    ctx->pc = 0x18633Cu;
    SET_GPR_U32(ctx, 31, 0x186344u);
    ctx->pc = 0x186340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18633Cu;
    // 0x186340: 0x24e78ab0  addiu       $a3, $a3, -0x7550 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x18633Cu, 0x186344u)) {
        return;
    }
    ctx->pc = 0x186344u;
label_186344:
    // 0x186344: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x186344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_186348:
    // 0x186348: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x186348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18634c:
    // 0x18634c: 0x40f809  jalr        $v0
label_186350:
    if (ctx->pc == 0x186350u) {
        ctx->pc = 0x186350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18634Cu;
        // 0x186350: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186354u;
        goto label_186354;
    }
    ctx->pc = 0x18634Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186354u);
        ctx->pc = 0x186350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18634Cu;
        // 0x186350: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18634Cu, 0x186354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186354u;
label_186354:
    // 0x186354: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x186354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_186358:
    // 0x186358: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x186358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18635c:
    // 0x18635c: 0x40f809  jalr        $v0
label_186360:
    if (ctx->pc == 0x186360u) {
        ctx->pc = 0x186360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18635Cu;
        // 0x186360: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186364u;
        goto label_186364;
    }
    ctx->pc = 0x18635Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186364u);
        ctx->pc = 0x186360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18635Cu;
        // 0x186360: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18635Cu, 0x186364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186364u;
label_186364:
    // 0x186364: 0x1000004a  b           . + 4 + (0x4A << 2)
label_186368:
    if (ctx->pc == 0x186368u) {
        ctx->pc = 0x186368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186364u;
        // 0x186368: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18636Cu;
        goto label_18636c;
    }
    ctx->pc = 0x186364u;
    {
        const bool branch_taken_0x186364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186364u;
        // 0x186368: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186364) {
            ctx->pc = 0x186490u;
            goto label_186490;
        }
    }
    ctx->pc = 0x18636Cu;
label_18636c:
    // 0x18636c: 0x8c4386b8  lw          $v1, -0x7948($v0)
    ctx->pc = 0x18636cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936248)));
label_186370:
    // 0x186370: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_186374:
    if (ctx->pc == 0x186374u) {
        ctx->pc = 0x186374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186370u;
        // 0x186374: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186378u;
        goto label_186378;
    }
    ctx->pc = 0x186370u;
    {
        const bool branch_taken_0x186370 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x186374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186370u;
        // 0x186374: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186370) {
            ctx->pc = 0x186384u;
            goto label_186384;
        }
    }
    ctx->pc = 0x186378u;
label_186378:
    // 0x186378: 0x8c43bcc8  lw          $v1, -0x4338($v0)
    ctx->pc = 0x186378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950088)));
label_18637c:
    // 0x18637c: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_186380:
    if (ctx->pc == 0x186380u) {
        ctx->pc = 0x186380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18637Cu;
        // 0x186380: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186384u;
        goto label_186384;
    }
    ctx->pc = 0x18637Cu;
    {
        const bool branch_taken_0x18637c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x186380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18637Cu;
        // 0x186380: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18637c) {
            ctx->pc = 0x186390u;
            goto label_186390;
        }
    }
    ctx->pc = 0x186384u;
label_186384:
    // 0x186384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186388:
    // 0x186388: 0x10000040  b           . + 4 + (0x40 << 2)
label_18638c:
    if (ctx->pc == 0x18638Cu) {
        ctx->pc = 0x18638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186388u;
        // 0x18638c: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186390u;
        goto label_186390;
    }
    ctx->pc = 0x186388u;
    {
        const bool branch_taken_0x186388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186388u;
        // 0x18638c: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186388) {
            ctx->pc = 0x18648Cu;
            goto label_18648c;
        }
    }
    ctx->pc = 0x186390u;
label_186390:
    // 0x186390: 0x8c4386c0  lw          $v1, -0x7940($v0)
    ctx->pc = 0x186390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936256)));
label_186394:
    // 0x186394: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_186398:
    if (ctx->pc == 0x186398u) {
        ctx->pc = 0x186398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186394u;
        // 0x186398: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18639Cu;
        goto label_18639c;
    }
    ctx->pc = 0x186394u;
    {
        const bool branch_taken_0x186394 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x186398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186394u;
        // 0x186398: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186394) {
            ctx->pc = 0x1863A8u;
            goto label_1863a8;
        }
    }
    ctx->pc = 0x18639Cu;
label_18639c:
    // 0x18639c: 0x8c43bcd0  lw          $v1, -0x4330($v0)
    ctx->pc = 0x18639cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950096)));
label_1863a0:
    // 0x1863a0: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_1863a4:
    if (ctx->pc == 0x1863A4u) {
        ctx->pc = 0x1863A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863A0u;
        // 0x1863a4: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1863A8u;
        goto label_1863a8;
    }
    ctx->pc = 0x1863A0u;
    {
        const bool branch_taken_0x1863a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1863A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863A0u;
        // 0x1863a4: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863a0) {
            ctx->pc = 0x1863B0u;
            goto label_1863b0;
        }
    }
    ctx->pc = 0x1863A8u;
label_1863a8:
    // 0x1863a8: 0x10000038  b           . + 4 + (0x38 << 2)
label_1863ac:
    if (ctx->pc == 0x1863ACu) {
        ctx->pc = 0x1863ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863A8u;
        // 0x1863ac: 0xae600018  sw          $zero, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1863B0u;
        goto label_1863b0;
    }
    ctx->pc = 0x1863A8u;
    {
        const bool branch_taken_0x1863a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863A8u;
        // 0x1863ac: 0xae600018  sw          $zero, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863a8) {
            ctx->pc = 0x18648Cu;
            goto label_18648c;
        }
    }
    ctx->pc = 0x1863B0u;
label_1863b0:
    // 0x1863b0: 0x8c43bcf0  lw          $v1, -0x4310($v0)
    ctx->pc = 0x1863b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950128)));
label_1863b4:
    // 0x1863b4: 0x14a3001d  bne         $a1, $v1, . + 4 + (0x1D << 2)
label_1863b8:
    if (ctx->pc == 0x1863B8u) {
        ctx->pc = 0x1863B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863B4u;
        // 0x1863b8: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1863BCu;
        goto label_1863bc;
    }
    ctx->pc = 0x1863B4u;
    {
        const bool branch_taken_0x1863b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1863B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863B4u;
        // 0x1863b8: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863b4) {
            ctx->pc = 0x18642Cu;
            goto label_18642c;
        }
    }
    ctx->pc = 0x1863BCu;
label_1863bc:
    // 0x1863bc: 0x8d110004  lw          $s1, 0x4($t0)
    ctx->pc = 0x1863bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1863c0:
    // 0x1863c0: 0x12200033  beqz        $s1, . + 4 + (0x33 << 2)
label_1863c4:
    if (ctx->pc == 0x1863C4u) {
        ctx->pc = 0x1863C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863C0u;
        // 0x1863c4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1863C8u;
        goto label_1863c8;
    }
    ctx->pc = 0x1863C0u;
    {
        const bool branch_taken_0x1863c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863C0u;
        // 0x1863c4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863c0) {
            ctx->pc = 0x186490u;
            goto label_186490;
        }
    }
    ctx->pc = 0x1863C8u;
label_1863c8:
    // 0x1863c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1863c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1863cc:
    // 0x1863cc: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_1863d0:
    if (ctx->pc == 0x1863D0u) {
        ctx->pc = 0x1863D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863CCu;
        // 0x1863d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1863D4u;
        goto label_1863d4;
    }
    ctx->pc = 0x1863CCu;
    {
        const bool branch_taken_0x1863cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863CCu;
        // 0x1863d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863cc) {
            ctx->pc = 0x18648Cu;
            goto label_18648c;
        }
    }
    ctx->pc = 0x1863D4u;
label_1863d4:
    // 0x1863d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1863d8:
    if (ctx->pc == 0x1863D8u) {
        ctx->pc = 0x1863D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863D4u;
        // 0x1863d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1863DCu;
        goto label_1863dc;
    }
    ctx->pc = 0x1863D4u;
    {
        const bool branch_taken_0x1863d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863D4u;
        // 0x1863d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863d4) {
            ctx->pc = 0x1863E8u;
            goto label_1863e8;
        }
    }
    ctx->pc = 0x1863DCu;
label_1863dc:
    // 0x1863dc: 0x0  nop
    ctx->pc = 0x1863dcu;
    // NOP
label_1863e0:
    // 0x1863e0: 0x2652004c  addiu       $s2, $s2, 0x4C
    ctx->pc = 0x1863e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
label_1863e4:
    // 0x1863e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1863e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1863e8:
    // 0x1863e8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1863e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1863ec:
    // 0x1863ec: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1863ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1863f0:
    // 0x1863f0: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_1863f4:
    if (ctx->pc == 0x1863F4u) {
        ctx->pc = 0x1863F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863F0u;
        // 0x1863f4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1863F8u;
        goto label_1863f8;
    }
    ctx->pc = 0x1863F0u;
    {
        const bool branch_taken_0x1863f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1863f0) {
            ctx->pc = 0x1863F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1863F0u;
            // 0x1863f4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186490u;
            goto label_186490;
        }
    }
    ctx->pc = 0x1863F8u;
label_1863f8:
    // 0x1863f8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1863f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1863fc:
    // 0x1863fc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1863fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_186400:
    // 0x186400: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x186400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_186404:
    // 0x186404: 0x5080fff7  beql        $a0, $zero, . + 4 + (-0x9 << 2)
label_186408:
    if (ctx->pc == 0x186408u) {
        ctx->pc = 0x186408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186404u;
        // 0x186408: 0x2652004c  addiu       $s2, $s2, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18640Cu;
        goto label_18640c;
    }
    ctx->pc = 0x186404u;
    {
        const bool branch_taken_0x186404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186404) {
            ctx->pc = 0x186408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186404u;
            // 0x186408: 0x2652004c  addiu       $s2, $s2, 0x4C (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1863E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1863e4;
        }
    }
    ctx->pc = 0x18640Cu;
label_18640c:
    // 0x18640c: 0xc065c58  jal         func_197160
label_186410:
    if (ctx->pc == 0x186410u) {
        ctx->pc = 0x186410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18640Cu;
        // 0x186410: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186414u;
        goto label_186414;
    }
    ctx->pc = 0x18640Cu;
    SET_GPR_U32(ctx, 31, 0x186414u);
    ctx->pc = 0x186410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18640Cu;
    // 0x186410: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x18640Cu, 0x186414u)) {
        return;
    }
    ctx->pc = 0x186414u;
label_186414:
    // 0x186414: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
label_186418:
    if (ctx->pc == 0x186418u) {
        ctx->pc = 0x186418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186414u;
        // 0x186418: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18641Cu;
        goto label_18641c;
    }
    ctx->pc = 0x186414u;
    {
        const bool branch_taken_0x186414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186414u;
        // 0x186418: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186414) {
            ctx->pc = 0x1863E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1863e0;
        }
    }
    ctx->pc = 0x18641Cu;
label_18641c:
    // 0x18641c: 0xc061bd6  jal         func_186F58
label_186420:
    if (ctx->pc == 0x186420u) {
        ctx->pc = 0x186420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18641Cu;
        // 0x186420: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186424u;
        goto label_186424;
    }
    ctx->pc = 0x18641Cu;
    SET_GPR_U32(ctx, 31, 0x186424u);
    ctx->pc = 0x186420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18641Cu;
    // 0x186420: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x186F58u, 0x18641Cu, 0x186424u)) {
        return;
    }
    ctx->pc = 0x186424u;
label_186424:
    // 0x186424: 0x1000001a  b           . + 4 + (0x1A << 2)
label_186428:
    if (ctx->pc == 0x186428u) {
        ctx->pc = 0x186428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186424u;
        // 0x186428: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18642Cu;
        goto label_18642c;
    }
    ctx->pc = 0x186424u;
    {
        const bool branch_taken_0x186424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186424u;
        // 0x186428: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186424) {
            ctx->pc = 0x186490u;
            goto label_186490;
        }
    }
    ctx->pc = 0x18642Cu;
label_18642c:
    // 0x18642c: 0x8c43bcf8  lw          $v1, -0x4308($v0)
    ctx->pc = 0x18642cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
label_186430:
    // 0x186430: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_186434:
    if (ctx->pc == 0x186434u) {
        ctx->pc = 0x186434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186430u;
        // 0x186434: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186438u;
        goto label_186438;
    }
    ctx->pc = 0x186430u;
    {
        const bool branch_taken_0x186430 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x186434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186430u;
        // 0x186434: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186430) {
            ctx->pc = 0x186444u;
            goto label_186444;
        }
    }
    ctx->pc = 0x186438u;
label_186438:
    // 0x186438: 0x8c43bcd8  lw          $v1, -0x4328($v0)
    ctx->pc = 0x186438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950104)));
label_18643c:
    // 0x18643c: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_186440:
    if (ctx->pc == 0x186440u) {
        ctx->pc = 0x186440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18643Cu;
        // 0x186440: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186444u;
        goto label_186444;
    }
    ctx->pc = 0x18643Cu;
    {
        const bool branch_taken_0x18643c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x186440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18643Cu;
        // 0x186440: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18643c) {
            ctx->pc = 0x186454u;
            goto label_186454;
        }
    }
    ctx->pc = 0x186444u;
label_186444:
    // 0x186444: 0xc061c0e  jal         func_187038
label_186448:
    if (ctx->pc == 0x186448u) {
        ctx->pc = 0x186448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186444u;
        // 0x186448: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18644Cu;
        goto label_18644c;
    }
    ctx->pc = 0x186444u;
    SET_GPR_U32(ctx, 31, 0x18644Cu);
    ctx->pc = 0x186448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186444u;
    // 0x186448: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x187038u, 0x186444u, 0x18644Cu)) {
        return;
    }
    ctx->pc = 0x18644Cu;
label_18644c:
    // 0x18644c: 0x10000010  b           . + 4 + (0x10 << 2)
label_186450:
    if (ctx->pc == 0x186450u) {
        ctx->pc = 0x186450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18644Cu;
        // 0x186450: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186454u;
        goto label_186454;
    }
    ctx->pc = 0x18644Cu;
    {
        const bool branch_taken_0x18644c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18644Cu;
        // 0x186450: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18644c) {
            ctx->pc = 0x186490u;
            goto label_186490;
        }
    }
    ctx->pc = 0x186454u;
label_186454:
    // 0x186454: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x186454u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_186458:
    // 0x186458: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x186458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_18645c:
    // 0x18645c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_186460:
    if (ctx->pc == 0x186460u) {
        ctx->pc = 0x186460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18645Cu;
        // 0x186460: 0x2403004c  addiu       $v1, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186464u;
        goto label_186464;
    }
    ctx->pc = 0x18645Cu;
    {
        const bool branch_taken_0x18645c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18645Cu;
        // 0x186460: 0x2403004c  addiu       $v1, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18645c) {
            ctx->pc = 0x18648Cu;
            goto label_18648c;
        }
    }
    ctx->pc = 0x186464u;
label_186464:
    // 0x186464: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x186464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_186468:
    // 0x186468: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x186468u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_18646c:
    // 0x18646c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x18646cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_186470:
    // 0x186470: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x186470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_186474:
    // 0x186474: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x186474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_186478:
    // 0x186478: 0x5445fff7  bnel        $v0, $a1, . + 4 + (-0x9 << 2)
label_18647c:
    if (ctx->pc == 0x18647Cu) {
        ctx->pc = 0x18647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186478u;
        // 0x18647c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186480u;
        goto label_186480;
    }
    ctx->pc = 0x186478u;
    {
        const bool branch_taken_0x186478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x186478) {
            ctx->pc = 0x18647Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186478u;
            // 0x18647c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186458;
        }
    }
    ctx->pc = 0x186480u;
label_186480:
    // 0x186480: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x186480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_186484:
    // 0x186484: 0xc061bd6  jal         func_186F58
label_186488:
    if (ctx->pc == 0x186488u) {
        ctx->pc = 0x186488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186484u;
        // 0x186488: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18648Cu;
        goto label_18648c;
    }
    ctx->pc = 0x186484u;
    SET_GPR_U32(ctx, 31, 0x18648Cu);
    ctx->pc = 0x186488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186484u;
    // 0x186488: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x186F58u, 0x186484u, 0x18648Cu)) {
        return;
    }
    ctx->pc = 0x18648Cu;
label_18648c:
    // 0x18648c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x18648cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_186490:
    // 0x186490: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x186490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_186494:
    // 0x186494: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x186494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_186498:
    // 0x186498: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x186498u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18649c:
    // 0x18649c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18649cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1864a0:
    // 0x1864a0: 0x3e00008  jr          $ra
label_1864a4:
    if (ctx->pc == 0x1864A4u) {
        ctx->pc = 0x1864A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1864A0u;
        // 0x1864a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1864A8u;
        goto label_fallthrough_0x1864a0;
    }
    ctx->pc = 0x1864A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1864A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1864A0u;
        // 0x1864a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1864A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1864a0:
    ctx->pc = 0x1864A8u;
}
