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

// Function: sub_00201010
// Address: 0x201010 - 0x2012a0
void sub_00201010_0x201010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201010_0x201010");
#endif

    switch (ctx->pc) {
        case 0x201010u: goto label_201010;
        case 0x201014u: goto label_201014;
        case 0x201018u: goto label_201018;
        case 0x20101cu: goto label_20101c;
        case 0x201020u: goto label_201020;
        case 0x201024u: goto label_201024;
        case 0x201028u: goto label_201028;
        case 0x20102cu: goto label_20102c;
        case 0x201030u: goto label_201030;
        case 0x201034u: goto label_201034;
        case 0x201038u: goto label_201038;
        case 0x20103cu: goto label_20103c;
        case 0x201040u: goto label_201040;
        case 0x201044u: goto label_201044;
        case 0x201048u: goto label_201048;
        case 0x20104cu: goto label_20104c;
        case 0x201050u: goto label_201050;
        case 0x201054u: goto label_201054;
        case 0x201058u: goto label_201058;
        case 0x20105cu: goto label_20105c;
        case 0x201060u: goto label_201060;
        case 0x201064u: goto label_201064;
        case 0x201068u: goto label_201068;
        case 0x20106cu: goto label_20106c;
        case 0x201070u: goto label_201070;
        case 0x201074u: goto label_201074;
        case 0x201078u: goto label_201078;
        case 0x20107cu: goto label_20107c;
        case 0x201080u: goto label_201080;
        case 0x201084u: goto label_201084;
        case 0x201088u: goto label_201088;
        case 0x20108cu: goto label_20108c;
        case 0x201090u: goto label_201090;
        case 0x201094u: goto label_201094;
        case 0x201098u: goto label_201098;
        case 0x20109cu: goto label_20109c;
        case 0x2010a0u: goto label_2010a0;
        case 0x2010a4u: goto label_2010a4;
        case 0x2010a8u: goto label_2010a8;
        case 0x2010acu: goto label_2010ac;
        case 0x2010b0u: goto label_2010b0;
        case 0x2010b4u: goto label_2010b4;
        case 0x2010b8u: goto label_2010b8;
        case 0x2010bcu: goto label_2010bc;
        case 0x2010c0u: goto label_2010c0;
        case 0x2010c4u: goto label_2010c4;
        case 0x2010c8u: goto label_2010c8;
        case 0x2010ccu: goto label_2010cc;
        case 0x2010d0u: goto label_2010d0;
        case 0x2010d4u: goto label_2010d4;
        case 0x2010d8u: goto label_2010d8;
        case 0x2010dcu: goto label_2010dc;
        case 0x2010e0u: goto label_2010e0;
        case 0x2010e4u: goto label_2010e4;
        case 0x2010e8u: goto label_2010e8;
        case 0x2010ecu: goto label_2010ec;
        case 0x2010f0u: goto label_2010f0;
        case 0x2010f4u: goto label_2010f4;
        case 0x2010f8u: goto label_2010f8;
        case 0x2010fcu: goto label_2010fc;
        case 0x201100u: goto label_201100;
        case 0x201104u: goto label_201104;
        case 0x201108u: goto label_201108;
        case 0x20110cu: goto label_20110c;
        case 0x201110u: goto label_201110;
        case 0x201114u: goto label_201114;
        case 0x201118u: goto label_201118;
        case 0x20111cu: goto label_20111c;
        case 0x201120u: goto label_201120;
        case 0x201124u: goto label_201124;
        case 0x201128u: goto label_201128;
        case 0x20112cu: goto label_20112c;
        case 0x201130u: goto label_201130;
        case 0x201134u: goto label_201134;
        case 0x201138u: goto label_201138;
        case 0x20113cu: goto label_20113c;
        case 0x201140u: goto label_201140;
        case 0x201144u: goto label_201144;
        case 0x201148u: goto label_201148;
        case 0x20114cu: goto label_20114c;
        case 0x201150u: goto label_201150;
        case 0x201154u: goto label_201154;
        case 0x201158u: goto label_201158;
        case 0x20115cu: goto label_20115c;
        case 0x201160u: goto label_201160;
        case 0x201164u: goto label_201164;
        case 0x201168u: goto label_201168;
        case 0x20116cu: goto label_20116c;
        case 0x201170u: goto label_201170;
        case 0x201174u: goto label_201174;
        case 0x201178u: goto label_201178;
        case 0x20117cu: goto label_20117c;
        case 0x201180u: goto label_201180;
        case 0x201184u: goto label_201184;
        case 0x201188u: goto label_201188;
        case 0x20118cu: goto label_20118c;
        case 0x201190u: goto label_201190;
        case 0x201194u: goto label_201194;
        case 0x201198u: goto label_201198;
        case 0x20119cu: goto label_20119c;
        case 0x2011a0u: goto label_2011a0;
        case 0x2011a4u: goto label_2011a4;
        case 0x2011a8u: goto label_2011a8;
        case 0x2011acu: goto label_2011ac;
        case 0x2011b0u: goto label_2011b0;
        case 0x2011b4u: goto label_2011b4;
        case 0x2011b8u: goto label_2011b8;
        case 0x2011bcu: goto label_2011bc;
        case 0x2011c0u: goto label_2011c0;
        case 0x2011c4u: goto label_2011c4;
        case 0x2011c8u: goto label_2011c8;
        case 0x2011ccu: goto label_2011cc;
        case 0x2011d0u: goto label_2011d0;
        case 0x2011d4u: goto label_2011d4;
        case 0x2011d8u: goto label_2011d8;
        case 0x2011dcu: goto label_2011dc;
        case 0x2011e0u: goto label_2011e0;
        case 0x2011e4u: goto label_2011e4;
        case 0x2011e8u: goto label_2011e8;
        case 0x2011ecu: goto label_2011ec;
        case 0x2011f0u: goto label_2011f0;
        case 0x2011f4u: goto label_2011f4;
        case 0x2011f8u: goto label_2011f8;
        case 0x2011fcu: goto label_2011fc;
        case 0x201200u: goto label_201200;
        case 0x201204u: goto label_201204;
        case 0x201208u: goto label_201208;
        case 0x20120cu: goto label_20120c;
        case 0x201210u: goto label_201210;
        case 0x201214u: goto label_201214;
        case 0x201218u: goto label_201218;
        case 0x20121cu: goto label_20121c;
        case 0x201220u: goto label_201220;
        case 0x201224u: goto label_201224;
        case 0x201228u: goto label_201228;
        case 0x20122cu: goto label_20122c;
        case 0x201230u: goto label_201230;
        case 0x201234u: goto label_201234;
        case 0x201238u: goto label_201238;
        case 0x20123cu: goto label_20123c;
        case 0x201240u: goto label_201240;
        case 0x201244u: goto label_201244;
        case 0x201248u: goto label_201248;
        case 0x20124cu: goto label_20124c;
        case 0x201250u: goto label_201250;
        case 0x201254u: goto label_201254;
        case 0x201258u: goto label_201258;
        case 0x20125cu: goto label_20125c;
        case 0x201260u: goto label_201260;
        case 0x201264u: goto label_201264;
        case 0x201268u: goto label_201268;
        case 0x20126cu: goto label_20126c;
        case 0x201270u: goto label_201270;
        case 0x201274u: goto label_201274;
        case 0x201278u: goto label_201278;
        case 0x20127cu: goto label_20127c;
        case 0x201280u: goto label_201280;
        case 0x201284u: goto label_201284;
        case 0x201288u: goto label_201288;
        case 0x20128cu: goto label_20128c;
        case 0x201290u: goto label_201290;
        case 0x201294u: goto label_201294;
        case 0x201298u: goto label_201298;
        case 0x20129cu: goto label_20129c;
        default: break;
    }

    ctx->pc = 0x201010u;

label_201010:
    // 0x201010: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x201010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_201014:
    // 0x201014: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x201014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_201018:
    // 0x201018: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x201018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_20101c:
    // 0x20101c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x20101cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_201020:
    // 0x201020: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x201020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_201024:
    // 0x201024: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x201024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_201028:
    // 0x201028: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x201028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_20102c:
    // 0x20102c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20102cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_201030:
    // 0x201030: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x201030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_201034:
    // 0x201034: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x201034u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_201038:
    // 0x201038: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x201038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_20103c:
    // 0x20103c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x20103cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_201040:
    // 0x201040: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x201040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_201044:
    // 0x201044: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x201044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_201048:
    // 0x201048: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x201048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_20104c:
    // 0x20104c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20104cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_201050:
    // 0x201050: 0xc067c2e  jal         func_19F0B8
label_201054:
    if (ctx->pc == 0x201054u) {
        ctx->pc = 0x201054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201050u;
        // 0x201054: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201058u;
        goto label_201058;
    }
    ctx->pc = 0x201050u;
    SET_GPR_U32(ctx, 31, 0x201058u);
    ctx->pc = 0x201054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201050u;
    // 0x201054: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F0B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19F0B8u, 0x201050u, 0x201058u)) {
        return;
    }
    ctx->pc = 0x201058u;
label_201058:
    // 0x201058: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x201058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20105c:
    // 0x20105c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_201060:
    if (ctx->pc == 0x201060u) {
        ctx->pc = 0x201060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20105Cu;
        // 0x201060: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201064u;
        goto label_201064;
    }
    ctx->pc = 0x20105Cu;
    {
        const bool branch_taken_0x20105c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x201060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20105Cu;
        // 0x201060: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20105c) {
            ctx->pc = 0x201074u;
            goto label_201074;
        }
    }
    ctx->pc = 0x201064u;
label_201064:
    // 0x201064: 0xc067c24  jal         func_19F090
label_201068:
    if (ctx->pc == 0x201068u) {
        ctx->pc = 0x201068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201064u;
        // 0x201068: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20106Cu;
        goto label_20106c;
    }
    ctx->pc = 0x201064u;
    SET_GPR_U32(ctx, 31, 0x20106Cu);
    ctx->pc = 0x201068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201064u;
    // 0x201068: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F090u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19F090u, 0x201064u, 0x20106Cu)) {
        return;
    }
    ctx->pc = 0x20106Cu;
label_20106c:
    // 0x20106c: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x20106cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_201070:
    // 0x201070: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x201070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_201074:
    // 0x201074: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201078:
    // 0x201078: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x201078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20107c:
    // 0x20107c: 0xc08063c  jal         func_2018F0
label_201080:
    if (ctx->pc == 0x201080u) {
        ctx->pc = 0x201080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20107Cu;
        // 0x201080: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201084u;
        goto label_201084;
    }
    ctx->pc = 0x20107Cu;
    SET_GPR_U32(ctx, 31, 0x201084u);
    ctx->pc = 0x201080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20107Cu;
    // 0x201080: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x20107Cu, 0x201084u)) {
        return;
    }
    ctx->pc = 0x201084u;
label_201084:
    // 0x201084: 0x16000066  bnez        $s0, . + 4 + (0x66 << 2)
label_201088:
    if (ctx->pc == 0x201088u) {
        ctx->pc = 0x201088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201084u;
        // 0x201088: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20108Cu;
        goto label_20108c;
    }
    ctx->pc = 0x201084u;
    {
        const bool branch_taken_0x201084 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x201088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201084u;
        // 0x201088: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201084) {
            ctx->pc = 0x201220u;
            goto label_201220;
        }
    }
    ctx->pc = 0x20108Cu;
label_20108c:
    // 0x20108c: 0x16200064  bnez        $s1, . + 4 + (0x64 << 2)
label_201090:
    if (ctx->pc == 0x201090u) {
        ctx->pc = 0x201090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20108Cu;
        // 0x201090: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201094u;
        goto label_201094;
    }
    ctx->pc = 0x20108Cu;
    {
        const bool branch_taken_0x20108c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x201090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20108Cu;
        // 0x201090: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20108c) {
            ctx->pc = 0x201220u;
            goto label_201220;
        }
    }
    ctx->pc = 0x201094u;
label_201094:
    // 0x201094: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x201094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_201098:
    // 0x201098: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x201098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20109c:
    // 0x20109c: 0xc0800da  jal         func_200368
label_2010a0:
    if (ctx->pc == 0x2010A0u) {
        ctx->pc = 0x2010A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20109Cu;
        // 0x2010a0: 0x3c1e0073  lui         $fp, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2010A4u;
        goto label_2010a4;
    }
    ctx->pc = 0x20109Cu;
    SET_GPR_U32(ctx, 31, 0x2010A4u);
    ctx->pc = 0x2010A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20109Cu;
    // 0x2010a0: 0x3c1e0073  lui         $fp, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)115 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200368u, 0x20109Cu, 0x2010A4u)) {
        return;
    }
    ctx->pc = 0x2010A4u;
label_2010a4:
    // 0x2010a4: 0x8c4b0014  lw          $t3, 0x14($v0)
    ctx->pc = 0x2010a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2010a8:
    // 0x2010a8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2010a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2010ac:
    // 0x2010ac: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2010acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2010b0:
    // 0x2010b0: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x2010b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2010b4:
    // 0x2010b4: 0x85640020  lh          $a0, 0x20($t3)
    ctx->pc = 0x2010b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 32)));
label_2010b8:
    // 0x2010b8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2010b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2010bc:
    // 0x2010bc: 0x8d630024  lw          $v1, 0x24($t3)
    ctx->pc = 0x2010bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 36)));
label_2010c0:
    // 0x2010c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2010c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2010c4:
    // 0x2010c4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2010c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2010c8:
    // 0x2010c8: 0x60f809  jalr        $v1
label_2010cc:
    if (ctx->pc == 0x2010CCu) {
        ctx->pc = 0x2010CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010C8u;
        // 0x2010cc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2010D0u;
        goto label_2010d0;
    }
    ctx->pc = 0x2010C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2010D0u);
        ctx->pc = 0x2010CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010C8u;
        // 0x2010cc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2010C8u, 0x2010D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2010D0u;
label_2010d0:
    // 0x2010d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2010d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2010d4:
    // 0x2010d4: 0xc0808b8  jal         func_2022E0
label_2010d8:
    if (ctx->pc == 0x2010D8u) {
        ctx->pc = 0x2010D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010D4u;
        // 0x2010d8: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2010DCu;
        goto label_2010dc;
    }
    ctx->pc = 0x2010D4u;
    SET_GPR_U32(ctx, 31, 0x2010DCu);
    ctx->pc = 0x2010D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2010D4u;
    // 0x2010d8: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2010D4u, 0x2010DCu)) {
        return;
    }
    ctx->pc = 0x2010DCu;
label_2010dc:
    // 0x2010dc: 0x12800013  beqz        $s4, . + 4 + (0x13 << 2)
label_2010e0:
    if (ctx->pc == 0x2010E0u) {
        ctx->pc = 0x2010E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010DCu;
        // 0x2010e0: 0x27d0108c  addiu       $s0, $fp, 0x108C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4236));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2010E4u;
        goto label_2010e4;
    }
    ctx->pc = 0x2010DCu;
    {
        const bool branch_taken_0x2010dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2010E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010DCu;
        // 0x2010e0: 0x27d0108c  addiu       $s0, $fp, 0x108C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2010dc) {
            ctx->pc = 0x20112Cu;
            goto label_20112c;
        }
    }
    ctx->pc = 0x2010E4u;
label_2010e4:
    // 0x2010e4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2010e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2010e8:
    // 0x2010e8: 0x40f809  jalr        $v0
label_2010ec:
    if (ctx->pc == 0x2010ECu) {
        ctx->pc = 0x2010ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010E8u;
        // 0x2010ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2010F0u;
        goto label_2010f0;
    }
    ctx->pc = 0x2010E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2010F0u);
        ctx->pc = 0x2010ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010E8u;
        // 0x2010ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2010E8u, 0x2010F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2010F0u;
label_2010f0:
    // 0x2010f0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_2010f4:
    if (ctx->pc == 0x2010F4u) {
        ctx->pc = 0x2010F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010F0u;
        // 0x2010f4: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2010F8u;
        goto label_2010f8;
    }
    ctx->pc = 0x2010F0u;
    {
        const bool branch_taken_0x2010f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2010f0) {
            ctx->pc = 0x2010F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2010F0u;
            // 0x2010f4: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201130u;
            goto label_201130;
        }
    }
    ctx->pc = 0x2010F8u;
label_2010f8:
    // 0x2010f8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2010f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2010fc:
    // 0x2010fc: 0x40f809  jalr        $v0
label_201100:
    if (ctx->pc == 0x201100u) {
        ctx->pc = 0x201100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010FCu;
        // 0x201100: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201104u;
        goto label_201104;
    }
    ctx->pc = 0x2010FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201104u);
        ctx->pc = 0x201100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010FCu;
        // 0x201100: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2010FCu, 0x201104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201104u;
label_201104:
    // 0x201104: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x201104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_201108:
    // 0x201108: 0xc0808f0  jal         func_2023C0
label_20110c:
    if (ctx->pc == 0x20110Cu) {
        ctx->pc = 0x20110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201108u;
        // 0x20110c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201110u;
        goto label_201110;
    }
    ctx->pc = 0x201108u;
    SET_GPR_U32(ctx, 31, 0x201110u);
    ctx->pc = 0x20110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201108u;
    // 0x20110c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x201108u, 0x201110u)) {
        return;
    }
    ctx->pc = 0x201110u;
label_201110:
    // 0x201110: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x201110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_201114:
    // 0x201114: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x201114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201118:
    // 0x201118: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x201118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20111c:
    // 0x20111c: 0x40f809  jalr        $v0
label_201120:
    if (ctx->pc == 0x201120u) {
        ctx->pc = 0x201120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20111Cu;
        // 0x201120: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201124u;
        goto label_201124;
    }
    ctx->pc = 0x20111Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201124u);
        ctx->pc = 0x201120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20111Cu;
        // 0x201120: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20111Cu, 0x201124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201124u;
label_201124:
    // 0x201124: 0x10000002  b           . + 4 + (0x2 << 2)
label_201128:
    if (ctx->pc == 0x201128u) {
        ctx->pc = 0x20112Cu;
        goto label_20112c;
    }
    ctx->pc = 0x201124u;
    {
        const bool branch_taken_0x201124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201124) {
            ctx->pc = 0x201130u;
            goto label_201130;
        }
    }
    ctx->pc = 0x20112Cu;
label_20112c:
    // 0x20112c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x20112cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_201130:
    // 0x201130: 0xc0805e6  jal         func_201798
label_201134:
    if (ctx->pc == 0x201134u) {
        ctx->pc = 0x201134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201130u;
        // 0x201134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201138u;
        goto label_201138;
    }
    ctx->pc = 0x201130u;
    SET_GPR_U32(ctx, 31, 0x201138u);
    ctx->pc = 0x201134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201130u;
    // 0x201134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201798u, 0x201130u, 0x201138u)) {
        return;
    }
    ctx->pc = 0x201138u;
label_201138:
    // 0x201138: 0x6ae20007  ldl         $v0, 0x7($s7)
    ctx->pc = 0x201138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_20113c:
    // 0x20113c: 0x6ee20000  ldr         $v0, 0x0($s7)
    ctx->pc = 0x20113cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_201140:
    // 0x201140: 0x6ae3000f  ldl         $v1, 0xF($s7)
    ctx->pc = 0x201140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_201144:
    // 0x201144: 0x6ee30008  ldr         $v1, 0x8($s7)
    ctx->pc = 0x201144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_201148:
    // 0x201148: 0xb222002f  sdl         $v0, 0x2F($s1)
    ctx->pc = 0x201148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_20114c:
    // 0x20114c: 0xb6220028  sdr         $v0, 0x28($s1)
    ctx->pc = 0x20114cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_201150:
    // 0x201150: 0xb2230037  sdl         $v1, 0x37($s1)
    ctx->pc = 0x201150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_201154:
    // 0x201154: 0xb6230030  sdr         $v1, 0x30($s1)
    ctx->pc = 0x201154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_201158:
    // 0x201158: 0x26230028  addiu       $v1, $s1, 0x28
    ctx->pc = 0x201158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_20115c:
    // 0x20115c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20115cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_201160:
    // 0x201160: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x201160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_201164:
    // 0x201164: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x201164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_201168:
    // 0x201168: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x201168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20116c:
    // 0x20116c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x20116cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_201170:
    // 0x201170: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x201170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_201174:
    // 0x201174: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x201174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_201178:
    // 0x201178: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x201178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20117c:
    // 0x20117c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x20117cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_201180:
    // 0x201180: 0xc0805dc  jal         func_201770
label_201184:
    if (ctx->pc == 0x201184u) {
        ctx->pc = 0x201184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201180u;
        // 0x201184: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201188u;
        goto label_201188;
    }
    ctx->pc = 0x201180u;
    SET_GPR_U32(ctx, 31, 0x201188u);
    ctx->pc = 0x201184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201180u;
    // 0x201184: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201770u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201770u, 0x201180u, 0x201188u)) {
        return;
    }
    ctx->pc = 0x201188u;
label_201188:
    // 0x201188: 0xc0808b8  jal         func_2022E0
label_20118c:
    if (ctx->pc == 0x20118Cu) {
        ctx->pc = 0x20118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201188u;
        // 0x20118c: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201190u;
        goto label_201190;
    }
    ctx->pc = 0x201188u;
    SET_GPR_U32(ctx, 31, 0x201190u);
    ctx->pc = 0x20118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201188u;
    // 0x20118c: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x201188u, 0x201190u)) {
        return;
    }
    ctx->pc = 0x201190u;
label_201190:
    // 0x201190: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
label_201194:
    if (ctx->pc == 0x201194u) {
        ctx->pc = 0x201194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201190u;
        // 0x201194: 0x27d0108c  addiu       $s0, $fp, 0x108C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4236));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201198u;
        goto label_201198;
    }
    ctx->pc = 0x201190u;
    {
        const bool branch_taken_0x201190 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x201194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201190u;
        // 0x201194: 0x27d0108c  addiu       $s0, $fp, 0x108C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201190) {
            ctx->pc = 0x2011E0u;
            goto label_2011e0;
        }
    }
    ctx->pc = 0x201198u;
label_201198:
    // 0x201198: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x201198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_20119c:
    // 0x20119c: 0x40f809  jalr        $v0
label_2011a0:
    if (ctx->pc == 0x2011A0u) {
        ctx->pc = 0x2011A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20119Cu;
        // 0x2011a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011A4u;
        goto label_2011a4;
    }
    ctx->pc = 0x20119Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2011A4u);
        ctx->pc = 0x2011A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20119Cu;
        // 0x2011a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20119Cu, 0x2011A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2011A4u;
label_2011a4:
    // 0x2011a4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_2011a8:
    if (ctx->pc == 0x2011A8u) {
        ctx->pc = 0x2011A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011A4u;
        // 0x2011a8: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011ACu;
        goto label_2011ac;
    }
    ctx->pc = 0x2011A4u;
    {
        const bool branch_taken_0x2011a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2011a4) {
            ctx->pc = 0x2011A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2011A4u;
            // 0x2011a8: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2011E4u;
            goto label_2011e4;
        }
    }
    ctx->pc = 0x2011ACu;
label_2011ac:
    // 0x2011ac: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2011acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2011b0:
    // 0x2011b0: 0x40f809  jalr        $v0
label_2011b4:
    if (ctx->pc == 0x2011B4u) {
        ctx->pc = 0x2011B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011B0u;
        // 0x2011b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011B8u;
        goto label_2011b8;
    }
    ctx->pc = 0x2011B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2011B8u);
        ctx->pc = 0x2011B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011B0u;
        // 0x2011b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2011B0u, 0x2011B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2011B8u;
label_2011b8:
    // 0x2011b8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x2011b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2011bc:
    // 0x2011bc: 0xc0808f0  jal         func_2023C0
label_2011c0:
    if (ctx->pc == 0x2011C0u) {
        ctx->pc = 0x2011C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011BCu;
        // 0x2011c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011C4u;
        goto label_2011c4;
    }
    ctx->pc = 0x2011BCu;
    SET_GPR_U32(ctx, 31, 0x2011C4u);
    ctx->pc = 0x2011C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2011BCu;
    // 0x2011c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x2011BCu, 0x2011C4u)) {
        return;
    }
    ctx->pc = 0x2011C4u;
label_2011c4:
    // 0x2011c4: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2011c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2011c8:
    // 0x2011c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2011c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2011cc:
    // 0x2011cc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2011ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2011d0:
    // 0x2011d0: 0x40f809  jalr        $v0
label_2011d4:
    if (ctx->pc == 0x2011D4u) {
        ctx->pc = 0x2011D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011D0u;
        // 0x2011d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011D8u;
        goto label_2011d8;
    }
    ctx->pc = 0x2011D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2011D8u);
        ctx->pc = 0x2011D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011D0u;
        // 0x2011d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2011D0u, 0x2011D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2011D8u;
label_2011d8:
    // 0x2011d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2011dc:
    if (ctx->pc == 0x2011DCu) {
        ctx->pc = 0x2011DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011D8u;
        // 0x2011dc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011E0u;
        goto label_2011e0;
    }
    ctx->pc = 0x2011D8u;
    {
        const bool branch_taken_0x2011d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2011DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011D8u;
        // 0x2011dc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011d8) {
            ctx->pc = 0x2011E8u;
            goto label_2011e8;
        }
    }
    ctx->pc = 0x2011E0u;
label_2011e0:
    // 0x2011e0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2011e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_2011e4:
    // 0x2011e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2011e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2011e8:
    // 0x2011e8: 0x27c3108c  addiu       $v1, $fp, 0x108C
    ctx->pc = 0x2011e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4236));
label_2011ec:
    // 0x2011ec: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x2011ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_2011f0:
    // 0x2011f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2011f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2011f4:
    // 0x2011f4: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2011f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_2011f8:
    // 0x2011f8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2011f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2011fc:
    // 0x2011fc: 0x40f809  jalr        $v0
label_201200:
    if (ctx->pc == 0x201200u) {
        ctx->pc = 0x201200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011FCu;
        // 0x201200: 0x24a539b0  addiu       $a1, $a1, 0x39B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201204u;
        goto label_201204;
    }
    ctx->pc = 0x2011FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201204u);
        ctx->pc = 0x201200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011FCu;
        // 0x201200: 0x24a539b0  addiu       $a1, $a1, 0x39B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2011FCu, 0x201204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201204u;
label_201204:
    // 0x201204: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_201208:
    if (ctx->pc == 0x201208u) {
        ctx->pc = 0x201208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201204u;
        // 0x201208: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20120Cu;
        goto label_20120c;
    }
    ctx->pc = 0x201204u;
    {
        const bool branch_taken_0x201204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201204u;
        // 0x201208: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201204) {
            ctx->pc = 0x201250u;
            goto label_201250;
        }
    }
    ctx->pc = 0x20120Cu;
label_20120c:
    // 0x20120c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20120cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_201210:
    // 0x201210: 0xc059562  jal         func_165588
label_201214:
    if (ctx->pc == 0x201214u) {
        ctx->pc = 0x201214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201210u;
        // 0x201214: 0x8c448668  lw          $a0, -0x7998($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201218u;
        goto label_201218;
    }
    ctx->pc = 0x201210u;
    SET_GPR_U32(ctx, 31, 0x201218u);
    ctx->pc = 0x201214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201210u;
    // 0x201214: 0x8c448668  lw          $a0, -0x7998($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165588u, 0x201210u, 0x201218u)) {
        return;
    }
    ctx->pc = 0x201218u;
label_201218:
    // 0x201218: 0x1000000d  b           . + 4 + (0xD << 2)
label_20121c:
    if (ctx->pc == 0x20121Cu) {
        ctx->pc = 0x201220u;
        goto label_201220;
    }
    ctx->pc = 0x201218u;
    {
        const bool branch_taken_0x201218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201218) {
            ctx->pc = 0x201250u;
            goto label_201250;
        }
    }
    ctx->pc = 0x201220u;
label_201220:
    // 0x201220: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_201224:
    if (ctx->pc == 0x201224u) {
        ctx->pc = 0x201228u;
        goto label_201228;
    }
    ctx->pc = 0x201220u;
    {
        const bool branch_taken_0x201220 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x201220) {
            ctx->pc = 0x201250u;
            goto label_201250;
        }
    }
    ctx->pc = 0x201228u;
label_201228:
    // 0x201228: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x201228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20122c:
    // 0x20122c: 0xc080924  jal         func_202490
label_201230:
    if (ctx->pc == 0x201230u) {
        ctx->pc = 0x201230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20122Cu;
        // 0x201230: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201234u;
        goto label_201234;
    }
    ctx->pc = 0x20122Cu;
    SET_GPR_U32(ctx, 31, 0x201234u);
    ctx->pc = 0x201230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20122Cu;
    // 0x201230: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x20122Cu, 0x201234u)) {
        return;
    }
    ctx->pc = 0x201234u;
label_201234:
    // 0x201234: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x201234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201238:
    // 0x201238: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x201238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20123c:
    // 0x20123c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20123cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_201240:
    // 0x201240: 0xc093546  jal         func_24D518
label_201244:
    if (ctx->pc == 0x201244u) {
        ctx->pc = 0x201244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201240u;
        // 0x201244: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201248u;
        goto label_201248;
    }
    ctx->pc = 0x201240u;
    SET_GPR_U32(ctx, 31, 0x201248u);
    ctx->pc = 0x201244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201240u;
    // 0x201244: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x201240u, 0x201248u)) {
        return;
    }
    ctx->pc = 0x201248u;
label_201248:
    // 0x201248: 0xc0808b8  jal         func_2022E0
label_20124c:
    if (ctx->pc == 0x20124Cu) {
        ctx->pc = 0x20124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201248u;
        // 0x20124c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201250u;
        goto label_201250;
    }
    ctx->pc = 0x201248u;
    SET_GPR_U32(ctx, 31, 0x201250u);
    ctx->pc = 0x20124Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201248u;
    // 0x20124c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x201248u, 0x201250u)) {
        return;
    }
    ctx->pc = 0x201250u;
label_201250:
    // 0x201250: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_201254:
    if (ctx->pc == 0x201254u) {
        ctx->pc = 0x201254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201250u;
        // 0x201254: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201258u;
        goto label_201258;
    }
    ctx->pc = 0x201250u;
    {
        const bool branch_taken_0x201250 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x201254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201250u;
        // 0x201254: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201250) {
            ctx->pc = 0x20126Cu;
            goto label_20126c;
        }
    }
    ctx->pc = 0x201258u;
label_201258:
    // 0x201258: 0xc0812fa  jal         func_204BE8
label_20125c:
    if (ctx->pc == 0x20125Cu) {
        ctx->pc = 0x20125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201258u;
        // 0x20125c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201260u;
        goto label_201260;
    }
    ctx->pc = 0x201258u;
    SET_GPR_U32(ctx, 31, 0x201260u);
    ctx->pc = 0x20125Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201258u;
    // 0x20125c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204BE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204BE8u, 0x201258u, 0x201260u)) {
        return;
    }
    ctx->pc = 0x201260u;
label_201260:
    // 0x201260: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x201260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_201264:
    // 0x201264: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x201264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_201268:
    // 0x201268: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x201268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_20126c:
    // 0x20126c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20126cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_201270:
    // 0x201270: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x201270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_201274:
    // 0x201274: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x201274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_201278:
    // 0x201278: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x201278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20127c:
    // 0x20127c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x20127cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_201280:
    // 0x201280: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x201280u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_201284:
    // 0x201284: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x201284u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_201288:
    // 0x201288: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x201288u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20128c:
    // 0x20128c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x20128cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_201290:
    // 0x201290: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x201290u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_201294:
    // 0x201294: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_201298:
    // 0x201298: 0x3e00008  jr          $ra
label_20129c:
    if (ctx->pc == 0x20129Cu) {
        ctx->pc = 0x20129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201298u;
        // 0x20129c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2012A0u;
        goto label_fallthrough_0x201298;
    }
    ctx->pc = 0x201298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201298u;
        // 0x20129c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x201298:
    ctx->pc = 0x2012A0u;
}
