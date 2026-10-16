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

// Function: sub_002751E0
// Address: 0x2751e0 - 0x275570
void sub_002751E0_0x2751e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002751E0_0x2751e0");
#endif

    switch (ctx->pc) {
        case 0x2751e0u: goto label_2751e0;
        case 0x2751e4u: goto label_2751e4;
        case 0x2751e8u: goto label_2751e8;
        case 0x2751ecu: goto label_2751ec;
        case 0x2751f0u: goto label_2751f0;
        case 0x2751f4u: goto label_2751f4;
        case 0x2751f8u: goto label_2751f8;
        case 0x2751fcu: goto label_2751fc;
        case 0x275200u: goto label_275200;
        case 0x275204u: goto label_275204;
        case 0x275208u: goto label_275208;
        case 0x27520cu: goto label_27520c;
        case 0x275210u: goto label_275210;
        case 0x275214u: goto label_275214;
        case 0x275218u: goto label_275218;
        case 0x27521cu: goto label_27521c;
        case 0x275220u: goto label_275220;
        case 0x275224u: goto label_275224;
        case 0x275228u: goto label_275228;
        case 0x27522cu: goto label_27522c;
        case 0x275230u: goto label_275230;
        case 0x275234u: goto label_275234;
        case 0x275238u: goto label_275238;
        case 0x27523cu: goto label_27523c;
        case 0x275240u: goto label_275240;
        case 0x275244u: goto label_275244;
        case 0x275248u: goto label_275248;
        case 0x27524cu: goto label_27524c;
        case 0x275250u: goto label_275250;
        case 0x275254u: goto label_275254;
        case 0x275258u: goto label_275258;
        case 0x27525cu: goto label_27525c;
        case 0x275260u: goto label_275260;
        case 0x275264u: goto label_275264;
        case 0x275268u: goto label_275268;
        case 0x27526cu: goto label_27526c;
        case 0x275270u: goto label_275270;
        case 0x275274u: goto label_275274;
        case 0x275278u: goto label_275278;
        case 0x27527cu: goto label_27527c;
        case 0x275280u: goto label_275280;
        case 0x275284u: goto label_275284;
        case 0x275288u: goto label_275288;
        case 0x27528cu: goto label_27528c;
        case 0x275290u: goto label_275290;
        case 0x275294u: goto label_275294;
        case 0x275298u: goto label_275298;
        case 0x27529cu: goto label_27529c;
        case 0x2752a0u: goto label_2752a0;
        case 0x2752a4u: goto label_2752a4;
        case 0x2752a8u: goto label_2752a8;
        case 0x2752acu: goto label_2752ac;
        case 0x2752b0u: goto label_2752b0;
        case 0x2752b4u: goto label_2752b4;
        case 0x2752b8u: goto label_2752b8;
        case 0x2752bcu: goto label_2752bc;
        case 0x2752c0u: goto label_2752c0;
        case 0x2752c4u: goto label_2752c4;
        case 0x2752c8u: goto label_2752c8;
        case 0x2752ccu: goto label_2752cc;
        case 0x2752d0u: goto label_2752d0;
        case 0x2752d4u: goto label_2752d4;
        case 0x2752d8u: goto label_2752d8;
        case 0x2752dcu: goto label_2752dc;
        case 0x2752e0u: goto label_2752e0;
        case 0x2752e4u: goto label_2752e4;
        case 0x2752e8u: goto label_2752e8;
        case 0x2752ecu: goto label_2752ec;
        case 0x2752f0u: goto label_2752f0;
        case 0x2752f4u: goto label_2752f4;
        case 0x2752f8u: goto label_2752f8;
        case 0x2752fcu: goto label_2752fc;
        case 0x275300u: goto label_275300;
        case 0x275304u: goto label_275304;
        case 0x275308u: goto label_275308;
        case 0x27530cu: goto label_27530c;
        case 0x275310u: goto label_275310;
        case 0x275314u: goto label_275314;
        case 0x275318u: goto label_275318;
        case 0x27531cu: goto label_27531c;
        case 0x275320u: goto label_275320;
        case 0x275324u: goto label_275324;
        case 0x275328u: goto label_275328;
        case 0x27532cu: goto label_27532c;
        case 0x275330u: goto label_275330;
        case 0x275334u: goto label_275334;
        case 0x275338u: goto label_275338;
        case 0x27533cu: goto label_27533c;
        case 0x275340u: goto label_275340;
        case 0x275344u: goto label_275344;
        case 0x275348u: goto label_275348;
        case 0x27534cu: goto label_27534c;
        case 0x275350u: goto label_275350;
        case 0x275354u: goto label_275354;
        case 0x275358u: goto label_275358;
        case 0x27535cu: goto label_27535c;
        case 0x275360u: goto label_275360;
        case 0x275364u: goto label_275364;
        case 0x275368u: goto label_275368;
        case 0x27536cu: goto label_27536c;
        case 0x275370u: goto label_275370;
        case 0x275374u: goto label_275374;
        case 0x275378u: goto label_275378;
        case 0x27537cu: goto label_27537c;
        case 0x275380u: goto label_275380;
        case 0x275384u: goto label_275384;
        case 0x275388u: goto label_275388;
        case 0x27538cu: goto label_27538c;
        case 0x275390u: goto label_275390;
        case 0x275394u: goto label_275394;
        case 0x275398u: goto label_275398;
        case 0x27539cu: goto label_27539c;
        case 0x2753a0u: goto label_2753a0;
        case 0x2753a4u: goto label_2753a4;
        case 0x2753a8u: goto label_2753a8;
        case 0x2753acu: goto label_2753ac;
        case 0x2753b0u: goto label_2753b0;
        case 0x2753b4u: goto label_2753b4;
        case 0x2753b8u: goto label_2753b8;
        case 0x2753bcu: goto label_2753bc;
        case 0x2753c0u: goto label_2753c0;
        case 0x2753c4u: goto label_2753c4;
        case 0x2753c8u: goto label_2753c8;
        case 0x2753ccu: goto label_2753cc;
        case 0x2753d0u: goto label_2753d0;
        case 0x2753d4u: goto label_2753d4;
        case 0x2753d8u: goto label_2753d8;
        case 0x2753dcu: goto label_2753dc;
        case 0x2753e0u: goto label_2753e0;
        case 0x2753e4u: goto label_2753e4;
        case 0x2753e8u: goto label_2753e8;
        case 0x2753ecu: goto label_2753ec;
        case 0x2753f0u: goto label_2753f0;
        case 0x2753f4u: goto label_2753f4;
        case 0x2753f8u: goto label_2753f8;
        case 0x2753fcu: goto label_2753fc;
        case 0x275400u: goto label_275400;
        case 0x275404u: goto label_275404;
        case 0x275408u: goto label_275408;
        case 0x27540cu: goto label_27540c;
        case 0x275410u: goto label_275410;
        case 0x275414u: goto label_275414;
        case 0x275418u: goto label_275418;
        case 0x27541cu: goto label_27541c;
        case 0x275420u: goto label_275420;
        case 0x275424u: goto label_275424;
        case 0x275428u: goto label_275428;
        case 0x27542cu: goto label_27542c;
        case 0x275430u: goto label_275430;
        case 0x275434u: goto label_275434;
        case 0x275438u: goto label_275438;
        case 0x27543cu: goto label_27543c;
        case 0x275440u: goto label_275440;
        case 0x275444u: goto label_275444;
        case 0x275448u: goto label_275448;
        case 0x27544cu: goto label_27544c;
        case 0x275450u: goto label_275450;
        case 0x275454u: goto label_275454;
        case 0x275458u: goto label_275458;
        case 0x27545cu: goto label_27545c;
        case 0x275460u: goto label_275460;
        case 0x275464u: goto label_275464;
        case 0x275468u: goto label_275468;
        case 0x27546cu: goto label_27546c;
        case 0x275470u: goto label_275470;
        case 0x275474u: goto label_275474;
        case 0x275478u: goto label_275478;
        case 0x27547cu: goto label_27547c;
        case 0x275480u: goto label_275480;
        case 0x275484u: goto label_275484;
        case 0x275488u: goto label_275488;
        case 0x27548cu: goto label_27548c;
        case 0x275490u: goto label_275490;
        case 0x275494u: goto label_275494;
        case 0x275498u: goto label_275498;
        case 0x27549cu: goto label_27549c;
        case 0x2754a0u: goto label_2754a0;
        case 0x2754a4u: goto label_2754a4;
        case 0x2754a8u: goto label_2754a8;
        case 0x2754acu: goto label_2754ac;
        case 0x2754b0u: goto label_2754b0;
        case 0x2754b4u: goto label_2754b4;
        case 0x2754b8u: goto label_2754b8;
        case 0x2754bcu: goto label_2754bc;
        case 0x2754c0u: goto label_2754c0;
        case 0x2754c4u: goto label_2754c4;
        case 0x2754c8u: goto label_2754c8;
        case 0x2754ccu: goto label_2754cc;
        case 0x2754d0u: goto label_2754d0;
        case 0x2754d4u: goto label_2754d4;
        case 0x2754d8u: goto label_2754d8;
        case 0x2754dcu: goto label_2754dc;
        case 0x2754e0u: goto label_2754e0;
        case 0x2754e4u: goto label_2754e4;
        case 0x2754e8u: goto label_2754e8;
        case 0x2754ecu: goto label_2754ec;
        case 0x2754f0u: goto label_2754f0;
        case 0x2754f4u: goto label_2754f4;
        case 0x2754f8u: goto label_2754f8;
        case 0x2754fcu: goto label_2754fc;
        case 0x275500u: goto label_275500;
        case 0x275504u: goto label_275504;
        case 0x275508u: goto label_275508;
        case 0x27550cu: goto label_27550c;
        case 0x275510u: goto label_275510;
        case 0x275514u: goto label_275514;
        case 0x275518u: goto label_275518;
        case 0x27551cu: goto label_27551c;
        case 0x275520u: goto label_275520;
        case 0x275524u: goto label_275524;
        case 0x275528u: goto label_275528;
        case 0x27552cu: goto label_27552c;
        case 0x275530u: goto label_275530;
        case 0x275534u: goto label_275534;
        case 0x275538u: goto label_275538;
        case 0x27553cu: goto label_27553c;
        case 0x275540u: goto label_275540;
        case 0x275544u: goto label_275544;
        case 0x275548u: goto label_275548;
        case 0x27554cu: goto label_27554c;
        case 0x275550u: goto label_275550;
        case 0x275554u: goto label_275554;
        case 0x275558u: goto label_275558;
        case 0x27555cu: goto label_27555c;
        case 0x275560u: goto label_275560;
        case 0x275564u: goto label_275564;
        case 0x275568u: goto label_275568;
        case 0x27556cu: goto label_27556c;
        default: break;
    }

    ctx->pc = 0x2751e0u;

label_2751e0:
    // 0x2751e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2751e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2751e4:
    // 0x2751e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2751e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2751e8:
    // 0x2751e8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2751e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2751ec:
    // 0x2751ec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2751ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2751f0:
    // 0x2751f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2751f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2751f4:
    // 0x2751f4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2751f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2751f8:
    // 0x2751f8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2751f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2751fc:
    // 0x2751fc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2751fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_275200:
    // 0x275200: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x275200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_275204:
    // 0x275204: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x275204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_275208:
    // 0x275208: 0xc0927be  jal         func_249EF8
label_27520c:
    if (ctx->pc == 0x27520Cu) {
        ctx->pc = 0x27520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275208u;
        // 0x27520c: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x275210u;
        goto label_275210;
    }
    ctx->pc = 0x275208u;
    SET_GPR_U32(ctx, 31, 0x275210u);
    ctx->pc = 0x27520Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275208u;
    // 0x27520c: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x275208u, 0x275210u)) {
        return;
    }
    ctx->pc = 0x275210u;
label_275210:
    // 0x275210: 0x104000cd  beqz        $v0, . + 4 + (0xCD << 2)
label_275214:
    if (ctx->pc == 0x275214u) {
        ctx->pc = 0x275214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275210u;
        // 0x275214: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275218u;
        goto label_275218;
    }
    ctx->pc = 0x275210u;
    {
        const bool branch_taken_0x275210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275210u;
        // 0x275214: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275210) {
            ctx->pc = 0x275548u;
            goto label_275548;
        }
    }
    ctx->pc = 0x275218u;
label_275218:
    // 0x275218: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x275218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_27521c:
    // 0x27521c: 0x146200cb  bne         $v1, $v0, . + 4 + (0xCB << 2)
label_275220:
    if (ctx->pc == 0x275220u) {
        ctx->pc = 0x275220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27521Cu;
        // 0x275220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275224u;
        goto label_275224;
    }
    ctx->pc = 0x27521Cu;
    {
        const bool branch_taken_0x27521c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x275220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27521Cu;
        // 0x275220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27521c) {
            ctx->pc = 0x27554Cu;
            goto label_27554c;
        }
    }
    ctx->pc = 0x275224u;
label_275224:
    // 0x275224: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x275224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_275228:
    // 0x275228: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x275228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_27522c:
    // 0x27522c: 0xc0927be  jal         func_249EF8
label_275230:
    if (ctx->pc == 0x275230u) {
        ctx->pc = 0x275230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27522Cu;
        // 0x275230: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275234u;
        goto label_275234;
    }
    ctx->pc = 0x27522Cu;
    SET_GPR_U32(ctx, 31, 0x275234u);
    ctx->pc = 0x275230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27522Cu;
    // 0x275230: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27522Cu, 0x275234u)) {
        return;
    }
    ctx->pc = 0x275234u;
label_275234:
    // 0x275234: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_275238:
    if (ctx->pc == 0x275238u) {
        ctx->pc = 0x275238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275234u;
        // 0x275238: 0x8f8287b4  lw          $v0, -0x784C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936500)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27523Cu;
        goto label_27523c;
    }
    ctx->pc = 0x275234u;
    {
        const bool branch_taken_0x275234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275234u;
        // 0x275238: 0x8f8287b4  lw          $v0, -0x784C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275234) {
            ctx->pc = 0x27524Cu;
            goto label_27524c;
        }
    }
    ctx->pc = 0x27523Cu;
label_27523c:
    // 0x27523c: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_275240:
    if (ctx->pc == 0x275240u) {
        ctx->pc = 0x275240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27523Cu;
        // 0x275240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275244u;
        goto label_275244;
    }
    ctx->pc = 0x27523Cu;
    {
        const bool branch_taken_0x27523c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27523Cu;
        // 0x275240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27523c) {
            ctx->pc = 0x27554Cu;
            goto label_27554c;
        }
    }
    ctx->pc = 0x275244u;
label_275244:
    // 0x275244: 0x10000042  b           . + 4 + (0x42 << 2)
label_275248:
    if (ctx->pc == 0x275248u) {
        ctx->pc = 0x275248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275244u;
        // 0x275248: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27524Cu;
        goto label_27524c;
    }
    ctx->pc = 0x275244u;
    {
        const bool branch_taken_0x275244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275244u;
        // 0x275248: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275244) {
            ctx->pc = 0x275350u;
            goto label_275350;
        }
    }
    ctx->pc = 0x27524Cu;
label_27524c:
    // 0x27524c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27524cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275250:
    // 0x275250: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x275250u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_275254:
    // 0x275254: 0x18400035  blez        $v0, . + 4 + (0x35 << 2)
label_275258:
    if (ctx->pc == 0x275258u) {
        ctx->pc = 0x275258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275254u;
        // 0x275258: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27525Cu;
        goto label_27525c;
    }
    ctx->pc = 0x275254u;
    {
        const bool branch_taken_0x275254 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x275258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275254u;
        // 0x275258: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275254) {
            ctx->pc = 0x27532Cu;
            goto label_27532c;
        }
    }
    ctx->pc = 0x27525Cu;
label_27525c:
    // 0x27525c: 0x3c0a0070  lui         $t2, 0x70
    ctx->pc = 0x27525cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)112 << 16));
label_275260:
    // 0x275260: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x275260u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_275264:
    // 0x275264: 0x25455668  addiu       $a1, $t2, 0x5668
    ctx->pc = 0x275264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 22120));
label_275268:
    // 0x275268: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x275268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_27526c:
    // 0x27526c: 0x18800015  blez        $a0, . + 4 + (0x15 << 2)
label_275270:
    if (ctx->pc == 0x275270u) {
        ctx->pc = 0x275270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27526Cu;
        // 0x275270: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275274u;
        goto label_275274;
    }
    ctx->pc = 0x27526Cu;
    {
        const bool branch_taken_0x27526c = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x275270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27526Cu;
        // 0x275270: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27526c) {
            ctx->pc = 0x2752C4u;
            goto label_2752c4;
        }
    }
    ctx->pc = 0x275274u;
label_275274:
    // 0x275274: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_275278:
    if (ctx->pc == 0x275278u) {
        ctx->pc = 0x275278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275274u;
        // 0x275278: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27527Cu;
        goto label_27527c;
    }
    ctx->pc = 0x275274u;
    {
        const bool branch_taken_0x275274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x275278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275274u;
        // 0x275278: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275274) {
            ctx->pc = 0x2752E4u;
            goto label_2752e4;
        }
    }
    ctx->pc = 0x27527Cu;
label_27527c:
    // 0x27527c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_275280:
    if (ctx->pc == 0x275280u) {
        ctx->pc = 0x275280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27527Cu;
        // 0x275280: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275284u;
        goto label_275284;
    }
    ctx->pc = 0x27527Cu;
    {
        const bool branch_taken_0x27527c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27527c) {
            ctx->pc = 0x275280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27527Cu;
            // 0x275280: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2752C8u;
            goto label_2752c8;
        }
    }
    ctx->pc = 0x275284u;
label_275284:
    // 0x275284: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x275284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_275288:
    // 0x275288: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_27528c:
    if (ctx->pc == 0x27528Cu) {
        ctx->pc = 0x27528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275288u;
        // 0x27528c: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275290u;
        goto label_275290;
    }
    ctx->pc = 0x275288u;
    {
        const bool branch_taken_0x275288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275288) {
            ctx->pc = 0x27528Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275288u;
            // 0x27528c: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2752B0u;
            goto label_2752b0;
        }
    }
    ctx->pc = 0x275290u;
label_275290:
    // 0x275290: 0x8d425668  lw          $v0, 0x5668($t2)
    ctx->pc = 0x275290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 22120)));
label_275294:
    // 0x275294: 0x1047ffeb  beq         $v0, $a3, . + 4 + (-0x15 << 2)
label_275298:
    if (ctx->pc == 0x275298u) {
        ctx->pc = 0x275298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275294u;
        // 0x275298: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27529Cu;
        goto label_27529c;
    }
    ctx->pc = 0x275294u;
    {
        const bool branch_taken_0x275294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x275298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275294u;
        // 0x275298: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275294) {
            ctx->pc = 0x275244u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275244;
        }
    }
    ctx->pc = 0x27529Cu;
label_27529c:
    // 0x27529c: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x27529cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_2752a0:
    // 0x2752a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2752a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2752a4:
    // 0x2752a4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2752a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2752a8:
    // 0x2752a8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2752a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2752ac:
    // 0x2752ac: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2752acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2752b0:
    // 0x2752b0: 0x1047ffe4  beq         $v0, $a3, . + 4 + (-0x1C << 2)
label_2752b4:
    if (ctx->pc == 0x2752B4u) {
        ctx->pc = 0x2752B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2752B0u;
        // 0x2752b4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2752B8u;
        goto label_2752b8;
    }
    ctx->pc = 0x2752B0u;
    {
        const bool branch_taken_0x2752b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x2752B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2752B0u;
        // 0x2752b4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2752b0) {
            ctx->pc = 0x275244u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275244;
        }
    }
    ctx->pc = 0x2752B8u;
label_2752b8:
    // 0x2752b8: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x2752b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_2752bc:
    // 0x2752bc: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x2752bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_2752c0:
    // 0x2752c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2752c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2752c4:
    // 0x2752c4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2752c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2752c8:
    // 0x2752c8: 0x1047ffde  beq         $v0, $a3, . + 4 + (-0x22 << 2)
label_2752cc:
    if (ctx->pc == 0x2752CCu) {
        ctx->pc = 0x2752CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2752C8u;
        // 0x2752cc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2752D0u;
        goto label_2752d0;
    }
    ctx->pc = 0x2752C8u;
    {
        const bool branch_taken_0x2752c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x2752CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2752C8u;
        // 0x2752cc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2752c8) {
            ctx->pc = 0x275244u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275244;
        }
    }
    ctx->pc = 0x2752D0u;
label_2752d0:
    // 0x2752d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2752d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2752d4:
    // 0x2752d4: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x2752d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_2752d8:
    // 0x2752d8: 0xc9102a  slt         $v0, $a2, $t1
    ctx->pc = 0x2752d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_2752dc:
    // 0x2752dc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2752e0:
    if (ctx->pc == 0x2752E0u) {
        ctx->pc = 0x2752E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2752DCu;
        // 0x2752e0: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2752E4u;
        goto label_2752e4;
    }
    ctx->pc = 0x2752DCu;
    {
        const bool branch_taken_0x2752dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2752E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2752DCu;
        // 0x2752e0: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2752dc) {
            ctx->pc = 0x27532Cu;
            goto label_27532c;
        }
    }
    ctx->pc = 0x2752E4u;
label_2752e4:
    // 0x2752e4: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2752e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2752e8:
    // 0x2752e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2752e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2752ec:
    // 0x2752ec: 0x1047ffd5  beq         $v0, $a3, . + 4 + (-0x2B << 2)
label_2752f0:
    if (ctx->pc == 0x2752F0u) {
        ctx->pc = 0x2752F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2752ECu;
        // 0x2752f0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2752F4u;
        goto label_2752f4;
    }
    ctx->pc = 0x2752ECu;
    {
        const bool branch_taken_0x2752ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x2752F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2752ECu;
        // 0x2752f0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2752ec) {
            ctx->pc = 0x275244u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275244;
        }
    }
    ctx->pc = 0x2752F4u;
label_2752f4:
    // 0x2752f4: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2752f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2752f8:
    // 0x2752f8: 0x1047ffd2  beq         $v0, $a3, . + 4 + (-0x2E << 2)
label_2752fc:
    if (ctx->pc == 0x2752FCu) {
        ctx->pc = 0x2752FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2752F8u;
        // 0x2752fc: 0x24a40030  addiu       $a0, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275300u;
        goto label_275300;
    }
    ctx->pc = 0x2752F8u;
    {
        const bool branch_taken_0x2752f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x2752FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2752F8u;
        // 0x2752fc: 0x24a40030  addiu       $a0, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2752f8) {
            ctx->pc = 0x275244u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275244;
        }
    }
    ctx->pc = 0x275300u;
label_275300:
    // 0x275300: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x275300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_275304:
    // 0x275304: 0x1047ffcf  beq         $v0, $a3, . + 4 + (-0x31 << 2)
label_275308:
    if (ctx->pc == 0x275308u) {
        ctx->pc = 0x275308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275304u;
        // 0x275308: 0x24a40060  addiu       $a0, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27530Cu;
        goto label_27530c;
    }
    ctx->pc = 0x275304u;
    {
        const bool branch_taken_0x275304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x275308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275304u;
        // 0x275308: 0x24a40060  addiu       $a0, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275304) {
            ctx->pc = 0x275244u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275244;
        }
    }
    ctx->pc = 0x27530Cu;
label_27530c:
    // 0x27530c: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x27530cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_275310:
    // 0x275310: 0x1047ffcc  beq         $v0, $a3, . + 4 + (-0x34 << 2)
label_275314:
    if (ctx->pc == 0x275314u) {
        ctx->pc = 0x275314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275310u;
        // 0x275314: 0x24a40090  addiu       $a0, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275318u;
        goto label_275318;
    }
    ctx->pc = 0x275310u;
    {
        const bool branch_taken_0x275310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x275314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275310u;
        // 0x275314: 0x24a40090  addiu       $a0, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275310) {
            ctx->pc = 0x275244u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275244;
        }
    }
    ctx->pc = 0x275318u;
label_275318:
    // 0x275318: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x275318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_27531c:
    // 0x27531c: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x27531cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_275320:
    // 0x275320: 0xc9102a  slt         $v0, $a2, $t1
    ctx->pc = 0x275320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_275324:
    // 0x275324: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_275328:
    if (ctx->pc == 0x275328u) {
        ctx->pc = 0x275328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275324u;
        // 0x275328: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27532Cu;
        goto label_27532c;
    }
    ctx->pc = 0x275324u;
    {
        const bool branch_taken_0x275324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275324u;
        // 0x275328: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275324) {
            ctx->pc = 0x2752E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2752e8;
        }
    }
    ctx->pc = 0x27532Cu;
label_27532c:
    // 0x27532c: 0x240201b7  addiu       $v0, $zero, 0x1B7
    ctx->pc = 0x27532cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
label_275330:
    // 0x275330: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x275330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_275334:
    // 0x275334: 0xc092848  jal         func_24A120
label_275338:
    if (ctx->pc == 0x275338u) {
        ctx->pc = 0x275338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275334u;
        // 0x275338: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27533Cu;
        goto label_27533c;
    }
    ctx->pc = 0x275334u;
    SET_GPR_U32(ctx, 31, 0x27533Cu);
    ctx->pc = 0x275338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275334u;
    // 0x275338: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x275334u, 0x27533Cu)) {
        return;
    }
    ctx->pc = 0x27533Cu;
label_27533c:
    // 0x27533c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27533cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_275340:
    // 0x275340: 0xc09281a  jal         func_24A068
label_275344:
    if (ctx->pc == 0x275344u) {
        ctx->pc = 0x275344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275340u;
        // 0x275344: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275348u;
        goto label_275348;
    }
    ctx->pc = 0x275340u;
    SET_GPR_U32(ctx, 31, 0x275348u);
    ctx->pc = 0x275344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275340u;
    // 0x275344: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x275340u, 0x275348u)) {
        return;
    }
    ctx->pc = 0x275348u;
label_275348:
    // 0x275348: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x275348u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27534c:
    // 0x27534c: 0x0  nop
    ctx->pc = 0x27534cu;
    // NOP
label_275350:
    // 0x275350: 0x1260007d  beqz        $s3, . + 4 + (0x7D << 2)
label_275354:
    if (ctx->pc == 0x275354u) {
        ctx->pc = 0x275354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275350u;
        // 0x275354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275358u;
        goto label_275358;
    }
    ctx->pc = 0x275350u;
    {
        const bool branch_taken_0x275350 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x275354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275350u;
        // 0x275354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275350) {
            ctx->pc = 0x275548u;
            goto label_275548;
        }
    }
    ctx->pc = 0x275358u;
label_275358:
    // 0x275358: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x275358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_27535c:
    // 0x27535c: 0xc0927be  jal         func_249EF8
label_275360:
    if (ctx->pc == 0x275360u) {
        ctx->pc = 0x275360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27535Cu;
        // 0x275360: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275364u;
        goto label_275364;
    }
    ctx->pc = 0x27535Cu;
    SET_GPR_U32(ctx, 31, 0x275364u);
    ctx->pc = 0x275360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27535Cu;
    // 0x275360: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x27535Cu, 0x275364u)) {
        return;
    }
    ctx->pc = 0x275364u;
label_275364:
    // 0x275364: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
label_275368:
    if (ctx->pc == 0x275368u) {
        ctx->pc = 0x275368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275364u;
        // 0x275368: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27536Cu;
        goto label_27536c;
    }
    ctx->pc = 0x275364u;
    {
        const bool branch_taken_0x275364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275364u;
        // 0x275368: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275364) {
            ctx->pc = 0x275548u;
            goto label_275548;
        }
    }
    ctx->pc = 0x27536Cu;
label_27536c:
    // 0x27536c: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x27536cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_275370:
    // 0x275370: 0xc0927be  jal         func_249EF8
label_275374:
    if (ctx->pc == 0x275374u) {
        ctx->pc = 0x275374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275370u;
        // 0x275374: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275378u;
        goto label_275378;
    }
    ctx->pc = 0x275370u;
    SET_GPR_U32(ctx, 31, 0x275378u);
    ctx->pc = 0x275374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275370u;
    // 0x275374: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x275370u, 0x275378u)) {
        return;
    }
    ctx->pc = 0x275378u;
label_275378:
    // 0x275378: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_27537c:
    if (ctx->pc == 0x27537Cu) {
        ctx->pc = 0x27537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275378u;
        // 0x27537c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275380u;
        goto label_275380;
    }
    ctx->pc = 0x275378u;
    {
        const bool branch_taken_0x275378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275378u;
        // 0x27537c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275378) {
            ctx->pc = 0x275548u;
            goto label_275548;
        }
    }
    ctx->pc = 0x275380u;
label_275380:
    // 0x275380: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x275380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_275384:
    // 0x275384: 0xc0927aa  jal         func_249EA8
label_275388:
    if (ctx->pc == 0x275388u) {
        ctx->pc = 0x275388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275384u;
        // 0x275388: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27538Cu;
        goto label_27538c;
    }
    ctx->pc = 0x275384u;
    SET_GPR_U32(ctx, 31, 0x27538Cu);
    ctx->pc = 0x275388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275384u;
    // 0x275388: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x275384u, 0x27538Cu)) {
        return;
    }
    ctx->pc = 0x27538Cu;
label_27538c:
    // 0x27538c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_275390:
    if (ctx->pc == 0x275390u) {
        ctx->pc = 0x275390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27538Cu;
        // 0x275390: 0x8f8287b4  lw          $v0, -0x784C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936500)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275394u;
        goto label_275394;
    }
    ctx->pc = 0x27538Cu;
    {
        const bool branch_taken_0x27538c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27538Cu;
        // 0x275390: 0x8f8287b4  lw          $v0, -0x784C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27538c) {
            ctx->pc = 0x2753A4u;
            goto label_2753a4;
        }
    }
    ctx->pc = 0x275394u;
label_275394:
    // 0x275394: 0x1000006d  b           . + 4 + (0x6D << 2)
label_275398:
    if (ctx->pc == 0x275398u) {
        ctx->pc = 0x275398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275394u;
        // 0x275398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27539Cu;
        goto label_27539c;
    }
    ctx->pc = 0x275394u;
    {
        const bool branch_taken_0x275394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275394u;
        // 0x275398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275394) {
            ctx->pc = 0x27554Cu;
            goto label_27554c;
        }
    }
    ctx->pc = 0x27539Cu;
label_27539c:
    // 0x27539c: 0x10000046  b           . + 4 + (0x46 << 2)
label_2753a0:
    if (ctx->pc == 0x2753A0u) {
        ctx->pc = 0x2753A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27539Cu;
        // 0x2753a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2753A4u;
        goto label_2753a4;
    }
    ctx->pc = 0x27539Cu;
    {
        const bool branch_taken_0x27539c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2753A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27539Cu;
        // 0x2753a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27539c) {
            ctx->pc = 0x2754B8u;
            goto label_2754b8;
        }
    }
    ctx->pc = 0x2753A4u;
label_2753a4:
    // 0x2753a4: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x2753a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2753a8:
    // 0x2753a8: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x2753a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2753ac:
    // 0x2753ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2753acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2753b0:
    // 0x2753b0: 0x8fb10028  lw          $s1, 0x28($sp)
    ctx->pc = 0x2753b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2753b4:
    // 0x2753b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2753b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2753b8:
    // 0x2753b8: 0x8fb4002c  lw          $s4, 0x2C($sp)
    ctx->pc = 0x2753b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2753bc:
    // 0x2753bc: 0x18400035  blez        $v0, . + 4 + (0x35 << 2)
label_2753c0:
    if (ctx->pc == 0x2753C0u) {
        ctx->pc = 0x2753C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753BCu;
        // 0x2753c0: 0xc7b40030  lwc1        $f20, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2753C4u;
        goto label_2753c4;
    }
    ctx->pc = 0x2753BCu;
    {
        const bool branch_taken_0x2753bc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2753C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753BCu;
        // 0x2753c0: 0xc7b40030  lwc1        $f20, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2753bc) {
            ctx->pc = 0x275494u;
            goto label_275494;
        }
    }
    ctx->pc = 0x2753C4u;
label_2753c4:
    // 0x2753c4: 0x3c0a0070  lui         $t2, 0x70
    ctx->pc = 0x2753c4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)112 << 16));
label_2753c8:
    // 0x2753c8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2753c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2753cc:
    // 0x2753cc: 0x25455668  addiu       $a1, $t2, 0x5668
    ctx->pc = 0x2753ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 22120));
label_2753d0:
    // 0x2753d0: 0x31230003  andi        $v1, $t1, 0x3
    ctx->pc = 0x2753d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_2753d4:
    // 0x2753d4: 0x19200015  blez        $t1, . + 4 + (0x15 << 2)
label_2753d8:
    if (ctx->pc == 0x2753D8u) {
        ctx->pc = 0x2753D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753D4u;
        // 0x2753d8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2753DCu;
        goto label_2753dc;
    }
    ctx->pc = 0x2753D4u;
    {
        const bool branch_taken_0x2753d4 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x2753D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753D4u;
        // 0x2753d8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2753d4) {
            ctx->pc = 0x27542Cu;
            goto label_27542c;
        }
    }
    ctx->pc = 0x2753DCu;
label_2753dc:
    // 0x2753dc: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_2753e0:
    if (ctx->pc == 0x2753E0u) {
        ctx->pc = 0x2753E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753DCu;
        // 0x2753e0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2753E4u;
        goto label_2753e4;
    }
    ctx->pc = 0x2753DCu;
    {
        const bool branch_taken_0x2753dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2753E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753DCu;
        // 0x2753e0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2753dc) {
            ctx->pc = 0x27544Cu;
            goto label_27544c;
        }
    }
    ctx->pc = 0x2753E4u;
label_2753e4:
    // 0x2753e4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_2753e8:
    if (ctx->pc == 0x2753E8u) {
        ctx->pc = 0x2753E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753E4u;
        // 0x2753e8: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2753ECu;
        goto label_2753ec;
    }
    ctx->pc = 0x2753E4u;
    {
        const bool branch_taken_0x2753e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2753e4) {
            ctx->pc = 0x2753E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2753E4u;
            // 0x2753e8: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275430u;
            goto label_275430;
        }
    }
    ctx->pc = 0x2753ECu;
label_2753ec:
    // 0x2753ec: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2753ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2753f0:
    // 0x2753f0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2753f4:
    if (ctx->pc == 0x2753F4u) {
        ctx->pc = 0x2753F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753F0u;
        // 0x2753f4: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2753F8u;
        goto label_2753f8;
    }
    ctx->pc = 0x2753F0u;
    {
        const bool branch_taken_0x2753f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2753f0) {
            ctx->pc = 0x2753F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2753F0u;
            // 0x2753f4: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275418u;
            goto label_275418;
        }
    }
    ctx->pc = 0x2753F8u;
label_2753f8:
    // 0x2753f8: 0x8d425668  lw          $v0, 0x5668($t2)
    ctx->pc = 0x2753f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 22120)));
label_2753fc:
    // 0x2753fc: 0x1047ffe7  beq         $v0, $a3, . + 4 + (-0x19 << 2)
label_275400:
    if (ctx->pc == 0x275400u) {
        ctx->pc = 0x275400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753FCu;
        // 0x275400: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275404u;
        goto label_275404;
    }
    ctx->pc = 0x2753FCu;
    {
        const bool branch_taken_0x2753fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x275400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753FCu;
        // 0x275400: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2753fc) {
            ctx->pc = 0x27539Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27539c;
        }
    }
    ctx->pc = 0x275404u;
label_275404:
    // 0x275404: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x275404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_275408:
    // 0x275408: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x275408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27540c:
    // 0x27540c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x27540cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_275410:
    // 0x275410: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x275410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_275414:
    // 0x275414: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x275414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_275418:
    // 0x275418: 0x1047ffe0  beq         $v0, $a3, . + 4 + (-0x20 << 2)
label_27541c:
    if (ctx->pc == 0x27541Cu) {
        ctx->pc = 0x27541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275418u;
        // 0x27541c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275420u;
        goto label_275420;
    }
    ctx->pc = 0x275418u;
    {
        const bool branch_taken_0x275418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x27541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275418u;
        // 0x27541c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275418) {
            ctx->pc = 0x27539Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27539c;
        }
    }
    ctx->pc = 0x275420u;
label_275420:
    // 0x275420: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x275420u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_275424:
    // 0x275424: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x275424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_275428:
    // 0x275428: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x275428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_27542c:
    // 0x27542c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x27542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_275430:
    // 0x275430: 0x1047ffda  beq         $v0, $a3, . + 4 + (-0x26 << 2)
label_275434:
    if (ctx->pc == 0x275434u) {
        ctx->pc = 0x275434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275430u;
        // 0x275434: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275438u;
        goto label_275438;
    }
    ctx->pc = 0x275430u;
    {
        const bool branch_taken_0x275430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x275434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275430u;
        // 0x275434: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275430) {
            ctx->pc = 0x27539Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27539c;
        }
    }
    ctx->pc = 0x275438u;
label_275438:
    // 0x275438: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x275438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_27543c:
    // 0x27543c: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x27543cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_275440:
    // 0x275440: 0xc9102a  slt         $v0, $a2, $t1
    ctx->pc = 0x275440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_275444:
    // 0x275444: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_275448:
    if (ctx->pc == 0x275448u) {
        ctx->pc = 0x275448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275444u;
        // 0x275448: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27544Cu;
        goto label_27544c;
    }
    ctx->pc = 0x275444u;
    {
        const bool branch_taken_0x275444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275444u;
        // 0x275448: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275444) {
            ctx->pc = 0x275494u;
            goto label_275494;
        }
    }
    ctx->pc = 0x27544Cu;
label_27544c:
    // 0x27544c: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x27544cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_275450:
    // 0x275450: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x275450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_275454:
    // 0x275454: 0x1047ffd1  beq         $v0, $a3, . + 4 + (-0x2F << 2)
label_275458:
    if (ctx->pc == 0x275458u) {
        ctx->pc = 0x275458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275454u;
        // 0x275458: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27545Cu;
        goto label_27545c;
    }
    ctx->pc = 0x275454u;
    {
        const bool branch_taken_0x275454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x275458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275454u;
        // 0x275458: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275454) {
            ctx->pc = 0x27539Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27539c;
        }
    }
    ctx->pc = 0x27545Cu;
label_27545c:
    // 0x27545c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x27545cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_275460:
    // 0x275460: 0x1047ffce  beq         $v0, $a3, . + 4 + (-0x32 << 2)
label_275464:
    if (ctx->pc == 0x275464u) {
        ctx->pc = 0x275464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275460u;
        // 0x275464: 0x24a40030  addiu       $a0, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275468u;
        goto label_275468;
    }
    ctx->pc = 0x275460u;
    {
        const bool branch_taken_0x275460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x275464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275460u;
        // 0x275464: 0x24a40030  addiu       $a0, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275460) {
            ctx->pc = 0x27539Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27539c;
        }
    }
    ctx->pc = 0x275468u;
label_275468:
    // 0x275468: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x275468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_27546c:
    // 0x27546c: 0x1047ffcb  beq         $v0, $a3, . + 4 + (-0x35 << 2)
label_275470:
    if (ctx->pc == 0x275470u) {
        ctx->pc = 0x275470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27546Cu;
        // 0x275470: 0x24a40060  addiu       $a0, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275474u;
        goto label_275474;
    }
    ctx->pc = 0x27546Cu;
    {
        const bool branch_taken_0x27546c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x275470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27546Cu;
        // 0x275470: 0x24a40060  addiu       $a0, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27546c) {
            ctx->pc = 0x27539Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27539c;
        }
    }
    ctx->pc = 0x275474u;
label_275474:
    // 0x275474: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x275474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_275478:
    // 0x275478: 0x1047ffc8  beq         $v0, $a3, . + 4 + (-0x38 << 2)
label_27547c:
    if (ctx->pc == 0x27547Cu) {
        ctx->pc = 0x27547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275478u;
        // 0x27547c: 0x24a40090  addiu       $a0, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275480u;
        goto label_275480;
    }
    ctx->pc = 0x275478u;
    {
        const bool branch_taken_0x275478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x27547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275478u;
        // 0x27547c: 0x24a40090  addiu       $a0, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275478) {
            ctx->pc = 0x27539Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27539c;
        }
    }
    ctx->pc = 0x275480u;
label_275480:
    // 0x275480: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x275480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_275484:
    // 0x275484: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x275484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_275488:
    // 0x275488: 0xc9102a  slt         $v0, $a2, $t1
    ctx->pc = 0x275488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_27548c:
    // 0x27548c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_275490:
    if (ctx->pc == 0x275490u) {
        ctx->pc = 0x275490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27548Cu;
        // 0x275490: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275494u;
        goto label_275494;
    }
    ctx->pc = 0x27548Cu;
    {
        const bool branch_taken_0x27548c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27548Cu;
        // 0x275490: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27548c) {
            ctx->pc = 0x275450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275450;
        }
    }
    ctx->pc = 0x275494u;
label_275494:
    // 0x275494: 0x240201b7  addiu       $v0, $zero, 0x1B7
    ctx->pc = 0x275494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
label_275498:
    // 0x275498: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x275498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27549c:
    // 0x27549c: 0xc092848  jal         func_24A120
label_2754a0:
    if (ctx->pc == 0x2754A0u) {
        ctx->pc = 0x2754A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27549Cu;
        // 0x2754a0: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2754A4u;
        goto label_2754a4;
    }
    ctx->pc = 0x27549Cu;
    SET_GPR_U32(ctx, 31, 0x2754A4u);
    ctx->pc = 0x2754A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27549Cu;
    // 0x2754a0: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x27549Cu, 0x2754A4u)) {
        return;
    }
    ctx->pc = 0x2754A4u;
label_2754a4:
    // 0x2754a4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2754a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_2754a8:
    // 0x2754a8: 0xc09281a  jal         func_24A068
label_2754ac:
    if (ctx->pc == 0x2754ACu) {
        ctx->pc = 0x2754ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754A8u;
        // 0x2754ac: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2754B0u;
        goto label_2754b0;
    }
    ctx->pc = 0x2754A8u;
    SET_GPR_U32(ctx, 31, 0x2754B0u);
    ctx->pc = 0x2754ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2754A8u;
    // 0x2754ac: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2754A8u, 0x2754B0u)) {
        return;
    }
    ctx->pc = 0x2754B0u;
label_2754b0:
    // 0x2754b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2754b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2754b4:
    // 0x2754b4: 0x0  nop
    ctx->pc = 0x2754b4u;
    // NOP
label_2754b8:
    // 0x2754b8: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_2754bc:
    if (ctx->pc == 0x2754BCu) {
        ctx->pc = 0x2754BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754B8u;
        // 0x2754bc: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2754C0u;
        goto label_2754c0;
    }
    ctx->pc = 0x2754B8u;
    {
        const bool branch_taken_0x2754b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2754b8) {
            ctx->pc = 0x2754BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2754B8u;
            // 0x2754bc: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2754C8u;
            goto label_2754c8;
        }
    }
    ctx->pc = 0x2754C0u;
label_2754c0:
    // 0x2754c0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2754c4:
    if (ctx->pc == 0x2754C4u) {
        ctx->pc = 0x2754C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754C0u;
        // 0x2754c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2754C8u;
        goto label_2754c8;
    }
    ctx->pc = 0x2754C0u;
    {
        const bool branch_taken_0x2754c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2754C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754C0u;
        // 0x2754c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754c0) {
            ctx->pc = 0x27552Cu;
            goto label_27552c;
        }
    }
    ctx->pc = 0x2754C8u;
label_2754c8:
    // 0x2754c8: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x2754c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
label_2754cc:
    // 0x2754cc: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2754ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2754d0:
    // 0x2754d0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2754d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2754d4:
    // 0x2754d4: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x2754d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2754d8:
    // 0x2754d8: 0x8cc210d0  lw          $v0, 0x10D0($a2)
    ctx->pc = 0x2754d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4304)));
label_2754dc:
    // 0x2754dc: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x2754dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_2754e0:
    // 0x2754e0: 0x34a5001b  ori         $a1, $a1, 0x1B
    ctx->pc = 0x2754e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27);
label_2754e4:
    // 0x2754e4: 0x40f809  jalr        $v0
label_2754e8:
    if (ctx->pc == 0x2754E8u) {
        ctx->pc = 0x2754E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754E4u;
        // 0x2754e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2754ECu;
        goto label_2754ec;
    }
    ctx->pc = 0x2754E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2754ECu);
        ctx->pc = 0x2754E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754E4u;
        // 0x2754e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2754E4u, 0x2754ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2754ECu;
label_2754ec:
    // 0x2754ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2754ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2754f0:
    // 0x2754f0: 0xacb40008  sw          $s4, 0x8($a1)
    ctx->pc = 0x2754f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 20));
label_2754f4:
    // 0x2754f4: 0x24a30018  addiu       $v1, $a1, 0x18
    ctx->pc = 0x2754f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_2754f8:
    // 0x2754f8: 0xacb10004  sw          $s1, 0x4($a1)
    ctx->pc = 0x2754f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
label_2754fc:
    // 0x2754fc: 0xe4b4000c  swc1        $f20, 0xC($a1)
    ctx->pc = 0x2754fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_275500:
    // 0x275500: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x275500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_275504:
    // 0x275504: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x275504u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
label_275508:
    // 0x275508: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_27550c:
    if (ctx->pc == 0x27550Cu) {
        ctx->pc = 0x27550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275508u;
        // 0x27550c: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275510u;
        goto label_275510;
    }
    ctx->pc = 0x275508u;
    {
        const bool branch_taken_0x275508 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x27550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275508u;
        // 0x27550c: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275508) {
            ctx->pc = 0x275524u;
            goto label_275524;
        }
    }
    ctx->pc = 0x275510u;
label_275510:
    // 0x275510: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x275510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_275514:
    // 0x275514: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x275514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_275518:
    // 0x275518: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x275518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_27551c:
    // 0x27551c: 0x10000002  b           . + 4 + (0x2 << 2)
label_275520:
    if (ctx->pc == 0x275520u) {
        ctx->pc = 0x275520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27551Cu;
        // 0x275520: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275524u;
        goto label_275524;
    }
    ctx->pc = 0x27551Cu;
    {
        const bool branch_taken_0x27551c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27551Cu;
        // 0x275520: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27551c) {
            ctx->pc = 0x275528u;
            goto label_275528;
        }
    }
    ctx->pc = 0x275524u;
label_275524:
    // 0x275524: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x275524u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_275528:
    // 0x275528: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x275528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27552c:
    // 0x27552c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_275530:
    if (ctx->pc == 0x275530u) {
        ctx->pc = 0x275530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27552Cu;
        // 0x275530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275534u;
        goto label_275534;
    }
    ctx->pc = 0x27552Cu;
    {
        const bool branch_taken_0x27552c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x275530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27552Cu;
        // 0x275530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27552c) {
            ctx->pc = 0x275548u;
            goto label_275548;
        }
    }
    ctx->pc = 0x275534u;
label_275534:
    // 0x275534: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x275534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_275538:
    // 0x275538: 0x40f809  jalr        $v0
label_27553c:
    if (ctx->pc == 0x27553Cu) {
        ctx->pc = 0x27553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275538u;
        // 0x27553c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275540u;
        goto label_275540;
    }
    ctx->pc = 0x275538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x275540u);
        ctx->pc = 0x27553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275538u;
        // 0x27553c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275538u, 0x275540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275540u;
label_275540:
    // 0x275540: 0x10000002  b           . + 4 + (0x2 << 2)
label_275544:
    if (ctx->pc == 0x275544u) {
        ctx->pc = 0x275544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275540u;
        // 0x275544: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275548u;
        goto label_275548;
    }
    ctx->pc = 0x275540u;
    {
        const bool branch_taken_0x275540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275540u;
        // 0x275544: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275540) {
            ctx->pc = 0x27554Cu;
            goto label_27554c;
        }
    }
    ctx->pc = 0x275548u;
label_275548:
    // 0x275548: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27554c:
    // 0x27554c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x27554cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_275550:
    // 0x275550: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x275550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_275554:
    // 0x275554: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x275554u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_275558:
    // 0x275558: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x275558u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27555c:
    // 0x27555c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27555cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_275560:
    // 0x275560: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x275560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_275564:
    // 0x275564: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x275564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_275568:
    // 0x275568: 0x3e00008  jr          $ra
label_27556c:
    if (ctx->pc == 0x27556Cu) {
        ctx->pc = 0x27556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275568u;
        // 0x27556c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275570u;
        goto label_fallthrough_0x275568;
    }
    ctx->pc = 0x275568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275568u;
        // 0x27556c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x275568:
    ctx->pc = 0x275570u;
}
