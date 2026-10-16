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

// Function: sub_00191418
// Address: 0x191418 - 0x1915f0
void sub_00191418_0x191418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191418_0x191418");
#endif

    switch (ctx->pc) {
        case 0x191418u: goto label_191418;
        case 0x19141cu: goto label_19141c;
        case 0x191420u: goto label_191420;
        case 0x191424u: goto label_191424;
        case 0x191428u: goto label_191428;
        case 0x19142cu: goto label_19142c;
        case 0x191430u: goto label_191430;
        case 0x191434u: goto label_191434;
        case 0x191438u: goto label_191438;
        case 0x19143cu: goto label_19143c;
        case 0x191440u: goto label_191440;
        case 0x191444u: goto label_191444;
        case 0x191448u: goto label_191448;
        case 0x19144cu: goto label_19144c;
        case 0x191450u: goto label_191450;
        case 0x191454u: goto label_191454;
        case 0x191458u: goto label_191458;
        case 0x19145cu: goto label_19145c;
        case 0x191460u: goto label_191460;
        case 0x191464u: goto label_191464;
        case 0x191468u: goto label_191468;
        case 0x19146cu: goto label_19146c;
        case 0x191470u: goto label_191470;
        case 0x191474u: goto label_191474;
        case 0x191478u: goto label_191478;
        case 0x19147cu: goto label_19147c;
        case 0x191480u: goto label_191480;
        case 0x191484u: goto label_191484;
        case 0x191488u: goto label_191488;
        case 0x19148cu: goto label_19148c;
        case 0x191490u: goto label_191490;
        case 0x191494u: goto label_191494;
        case 0x191498u: goto label_191498;
        case 0x19149cu: goto label_19149c;
        case 0x1914a0u: goto label_1914a0;
        case 0x1914a4u: goto label_1914a4;
        case 0x1914a8u: goto label_1914a8;
        case 0x1914acu: goto label_1914ac;
        case 0x1914b0u: goto label_1914b0;
        case 0x1914b4u: goto label_1914b4;
        case 0x1914b8u: goto label_1914b8;
        case 0x1914bcu: goto label_1914bc;
        case 0x1914c0u: goto label_1914c0;
        case 0x1914c4u: goto label_1914c4;
        case 0x1914c8u: goto label_1914c8;
        case 0x1914ccu: goto label_1914cc;
        case 0x1914d0u: goto label_1914d0;
        case 0x1914d4u: goto label_1914d4;
        case 0x1914d8u: goto label_1914d8;
        case 0x1914dcu: goto label_1914dc;
        case 0x1914e0u: goto label_1914e0;
        case 0x1914e4u: goto label_1914e4;
        case 0x1914e8u: goto label_1914e8;
        case 0x1914ecu: goto label_1914ec;
        case 0x1914f0u: goto label_1914f0;
        case 0x1914f4u: goto label_1914f4;
        case 0x1914f8u: goto label_1914f8;
        case 0x1914fcu: goto label_1914fc;
        case 0x191500u: goto label_191500;
        case 0x191504u: goto label_191504;
        case 0x191508u: goto label_191508;
        case 0x19150cu: goto label_19150c;
        case 0x191510u: goto label_191510;
        case 0x191514u: goto label_191514;
        case 0x191518u: goto label_191518;
        case 0x19151cu: goto label_19151c;
        case 0x191520u: goto label_191520;
        case 0x191524u: goto label_191524;
        case 0x191528u: goto label_191528;
        case 0x19152cu: goto label_19152c;
        case 0x191530u: goto label_191530;
        case 0x191534u: goto label_191534;
        case 0x191538u: goto label_191538;
        case 0x19153cu: goto label_19153c;
        case 0x191540u: goto label_191540;
        case 0x191544u: goto label_191544;
        case 0x191548u: goto label_191548;
        case 0x19154cu: goto label_19154c;
        case 0x191550u: goto label_191550;
        case 0x191554u: goto label_191554;
        case 0x191558u: goto label_191558;
        case 0x19155cu: goto label_19155c;
        case 0x191560u: goto label_191560;
        case 0x191564u: goto label_191564;
        case 0x191568u: goto label_191568;
        case 0x19156cu: goto label_19156c;
        case 0x191570u: goto label_191570;
        case 0x191574u: goto label_191574;
        case 0x191578u: goto label_191578;
        case 0x19157cu: goto label_19157c;
        case 0x191580u: goto label_191580;
        case 0x191584u: goto label_191584;
        case 0x191588u: goto label_191588;
        case 0x19158cu: goto label_19158c;
        case 0x191590u: goto label_191590;
        case 0x191594u: goto label_191594;
        case 0x191598u: goto label_191598;
        case 0x19159cu: goto label_19159c;
        case 0x1915a0u: goto label_1915a0;
        case 0x1915a4u: goto label_1915a4;
        case 0x1915a8u: goto label_1915a8;
        case 0x1915acu: goto label_1915ac;
        case 0x1915b0u: goto label_1915b0;
        case 0x1915b4u: goto label_1915b4;
        case 0x1915b8u: goto label_1915b8;
        case 0x1915bcu: goto label_1915bc;
        case 0x1915c0u: goto label_1915c0;
        case 0x1915c4u: goto label_1915c4;
        case 0x1915c8u: goto label_1915c8;
        case 0x1915ccu: goto label_1915cc;
        case 0x1915d0u: goto label_1915d0;
        case 0x1915d4u: goto label_1915d4;
        case 0x1915d8u: goto label_1915d8;
        case 0x1915dcu: goto label_1915dc;
        case 0x1915e0u: goto label_1915e0;
        case 0x1915e4u: goto label_1915e4;
        case 0x1915e8u: goto label_1915e8;
        case 0x1915ecu: goto label_1915ec;
        default: break;
    }

    ctx->pc = 0x191418u;

label_191418:
    // 0x191418: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x191418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19141c:
    // 0x19141c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19141cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_191420:
    // 0x191420: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x191420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_191424:
    // 0x191424: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x191424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_191428:
    // 0x191428: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x191428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_19142c:
    // 0x19142c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19142cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191430:
    // 0x191430: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x191430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_191434:
    // 0x191434: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x191434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_191438:
    // 0x191438: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x191438u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_19143c:
    // 0x19143c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19143cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_191440:
    // 0x191440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_191444:
    // 0x191444: 0x244295e8  addiu       $v0, $v0, -0x6A18
    ctx->pc = 0x191444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940136));
label_191448:
    // 0x191448: 0x24639608  addiu       $v1, $v1, -0x69F8
    ctx->pc = 0x191448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940168));
label_19144c:
    // 0x19144c: 0x24c69650  addiu       $a2, $a2, -0x69B0
    ctx->pc = 0x19144cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940240));
label_191450:
    // 0x191450: 0x26300078  addiu       $s0, $s1, 0x78
    ctx->pc = 0x191450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_191454:
    // 0x191454: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x191454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_191458:
    // 0x191458: 0x24a5f898  addiu       $a1, $a1, -0x768
    ctx->pc = 0x191458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965400));
label_19145c:
    // 0x19145c: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x19145cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
label_191460:
    // 0x191460: 0xae230074  sw          $v1, 0x74($s1)
    ctx->pc = 0x191460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
label_191464:
    // 0x191464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_191468:
    // 0x191468: 0xc07fb0c  jal         func_1FEC30
label_19146c:
    if (ctx->pc == 0x19146Cu) {
        ctx->pc = 0x19146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191468u;
        // 0x19146c: 0xae260030  sw          $a2, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191470u;
        goto label_191470;
    }
    ctx->pc = 0x191468u;
    SET_GPR_U32(ctx, 31, 0x191470u);
    ctx->pc = 0x19146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191468u;
    // 0x19146c: 0xae260030  sw          $a2, 0x30($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x191468u, 0x191470u)) {
        return;
    }
    ctx->pc = 0x191470u;
label_191470:
    // 0x191470: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x191470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_191474:
    // 0x191474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_191478:
    // 0x191478: 0xc07fb0c  jal         func_1FEC30
label_19147c:
    if (ctx->pc == 0x19147Cu) {
        ctx->pc = 0x19147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191478u;
        // 0x19147c: 0x24a5f880  addiu       $a1, $a1, -0x780 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191480u;
        goto label_191480;
    }
    ctx->pc = 0x191478u;
    SET_GPR_U32(ctx, 31, 0x191480u);
    ctx->pc = 0x19147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191478u;
    // 0x19147c: 0x24a5f880  addiu       $a1, $a1, -0x780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x191478u, 0x191480u)) {
        return;
    }
    ctx->pc = 0x191480u;
label_191480:
    // 0x191480: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x191480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_191484:
    // 0x191484: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
label_191488:
    if (ctx->pc == 0x191488u) {
        ctx->pc = 0x191488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191484u;
        // 0x191488: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19148Cu;
        goto label_19148c;
    }
    ctx->pc = 0x191484u;
    {
        const bool branch_taken_0x191484 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x191484) {
            ctx->pc = 0x191488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191484u;
            // 0x191488: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1914C0u;
            goto label_1914c0;
        }
    }
    ctx->pc = 0x19148Cu;
label_19148c:
    // 0x19148c: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x19148cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_191490:
    // 0x191490: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_191494:
    if (ctx->pc == 0x191494u) {
        ctx->pc = 0x191494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191490u;
        // 0x191494: 0x8e2200d8  lw          $v0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191498u;
        goto label_191498;
    }
    ctx->pc = 0x191490u;
    {
        const bool branch_taken_0x191490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x191490) {
            ctx->pc = 0x191494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191490u;
            // 0x191494: 0x8e2200d8  lw          $v0, 0xD8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1914A8u;
            goto label_1914a8;
        }
    }
    ctx->pc = 0x191498u;
label_191498:
    // 0x191498: 0xc09799a  jal         func_25E668
label_19149c:
    if (ctx->pc == 0x19149Cu) {
        ctx->pc = 0x1914A0u;
        goto label_1914a0;
    }
    ctx->pc = 0x191498u;
    SET_GPR_U32(ctx, 31, 0x1914A0u);
    ctx->pc = 0x25E668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E668u, 0x191498u, 0x1914A0u)) {
        return;
    }
    ctx->pc = 0x1914A0u;
label_1914a0:
    // 0x1914a0: 0xae2000dc  sw          $zero, 0xDC($s1)
    ctx->pc = 0x1914a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
label_1914a4:
    // 0x1914a4: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x1914a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_1914a8:
    // 0x1914a8: 0xc08999a  jal         func_226668
label_1914ac:
    if (ctx->pc == 0x1914ACu) {
        ctx->pc = 0x1914ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914A8u;
        // 0x1914ac: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1914B0u;
        goto label_1914b0;
    }
    ctx->pc = 0x1914A8u;
    SET_GPR_U32(ctx, 31, 0x1914B0u);
    ctx->pc = 0x1914ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1914A8u;
    // 0x1914ac: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226668u, 0x1914A8u, 0x1914B0u)) {
        return;
    }
    ctx->pc = 0x1914B0u;
label_1914b0:
    // 0x1914b0: 0xc0955f8  jal         func_2557E0
label_1914b4:
    if (ctx->pc == 0x1914B4u) {
        ctx->pc = 0x1914B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914B0u;
        // 0x1914b4: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1914B8u;
        goto label_1914b8;
    }
    ctx->pc = 0x1914B0u;
    SET_GPR_U32(ctx, 31, 0x1914B8u);
    ctx->pc = 0x1914B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1914B0u;
    // 0x1914b4: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x1914B0u, 0x1914B8u)) {
        return;
    }
    ctx->pc = 0x1914B8u;
label_1914b8:
    // 0x1914b8: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x1914b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
label_1914bc:
    // 0x1914bc: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x1914bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_1914c0:
    // 0x1914c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1914c4:
    if (ctx->pc == 0x1914C4u) {
        ctx->pc = 0x1914C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914C0u;
        // 0x1914c4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1914C8u;
        goto label_1914c8;
    }
    ctx->pc = 0x1914C0u;
    {
        const bool branch_taken_0x1914c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1914C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914C0u;
        // 0x1914c4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1914c0) {
            ctx->pc = 0x1914E4u;
            goto label_1914e4;
        }
    }
    ctx->pc = 0x1914C8u;
label_1914c8:
    // 0x1914c8: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x1914c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
label_1914cc:
    // 0x1914cc: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x1914ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_1914d0:
    // 0x1914d0: 0xc05ee9a  jal         func_17BA68
label_1914d4:
    if (ctx->pc == 0x1914D4u) {
        ctx->pc = 0x1914D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914D0u;
        // 0x1914d4: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1914D8u;
        goto label_1914d8;
    }
    ctx->pc = 0x1914D0u;
    SET_GPR_U32(ctx, 31, 0x1914D8u);
    ctx->pc = 0x1914D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1914D0u;
    // 0x1914d4: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA68u, 0x1914D0u, 0x1914D8u)) {
        return;
    }
    ctx->pc = 0x1914D8u;
label_1914d8:
    // 0x1914d8: 0xc0955f8  jal         func_2557E0
label_1914dc:
    if (ctx->pc == 0x1914DCu) {
        ctx->pc = 0x1914DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914D8u;
        // 0x1914dc: 0x8e2400d4  lw          $a0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1914E0u;
        goto label_1914e0;
    }
    ctx->pc = 0x1914D8u;
    SET_GPR_U32(ctx, 31, 0x1914E0u);
    ctx->pc = 0x1914DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1914D8u;
    // 0x1914dc: 0x8e2400d4  lw          $a0, 0xD4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x1914D8u, 0x1914E0u)) {
        return;
    }
    ctx->pc = 0x1914E0u;
label_1914e0:
    // 0x1914e0: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x1914e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
label_1914e4:
    // 0x1914e4: 0x8e2400cc  lw          $a0, 0xCC($s1)
    ctx->pc = 0x1914e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_1914e8:
    // 0x1914e8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1914ec:
    if (ctx->pc == 0x1914ECu) {
        ctx->pc = 0x1914ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914E8u;
        // 0x1914ec: 0x8e2400d0  lw          $a0, 0xD0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1914F0u;
        goto label_1914f0;
    }
    ctx->pc = 0x1914E8u;
    {
        const bool branch_taken_0x1914e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1914e8) {
            ctx->pc = 0x1914ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1914E8u;
            // 0x1914ec: 0x8e2400d0  lw          $a0, 0xD0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191500u;
            goto label_191500;
        }
    }
    ctx->pc = 0x1914F0u;
label_1914f0:
    // 0x1914f0: 0xc0808b8  jal         func_2022E0
label_1914f4:
    if (ctx->pc == 0x1914F4u) {
        ctx->pc = 0x1914F8u;
        goto label_1914f8;
    }
    ctx->pc = 0x1914F0u;
    SET_GPR_U32(ctx, 31, 0x1914F8u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1914F0u, 0x1914F8u)) {
        return;
    }
    ctx->pc = 0x1914F8u;
label_1914f8:
    // 0x1914f8: 0xae2000cc  sw          $zero, 0xCC($s1)
    ctx->pc = 0x1914f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
label_1914fc:
    // 0x1914fc: 0x8e2400d0  lw          $a0, 0xD0($s1)
    ctx->pc = 0x1914fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_191500:
    // 0x191500: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_191504:
    if (ctx->pc == 0x191504u) {
        ctx->pc = 0x191504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191500u;
        // 0x191504: 0x8e220100  lw          $v0, 0x100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191508u;
        goto label_191508;
    }
    ctx->pc = 0x191500u;
    {
        const bool branch_taken_0x191500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x191500) {
            ctx->pc = 0x191504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191500u;
            // 0x191504: 0x8e220100  lw          $v0, 0x100($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191518u;
            goto label_191518;
        }
    }
    ctx->pc = 0x191508u;
label_191508:
    // 0x191508: 0xc0808b8  jal         func_2022E0
label_19150c:
    if (ctx->pc == 0x19150Cu) {
        ctx->pc = 0x191510u;
        goto label_191510;
    }
    ctx->pc = 0x191508u;
    SET_GPR_U32(ctx, 31, 0x191510u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x191508u, 0x191510u)) {
        return;
    }
    ctx->pc = 0x191510u;
label_191510:
    // 0x191510: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x191510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
label_191514:
    // 0x191514: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x191514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_191518:
    // 0x191518: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_19151c:
    if (ctx->pc == 0x19151Cu) {
        ctx->pc = 0x19151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191518u;
        // 0x19151c: 0x26320078  addiu       $s2, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191520u;
        goto label_191520;
    }
    ctx->pc = 0x191518u;
    {
        const bool branch_taken_0x191518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191518u;
        // 0x19151c: 0x26320078  addiu       $s2, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191518) {
            ctx->pc = 0x191534u;
            goto label_191534;
        }
    }
    ctx->pc = 0x191520u;
label_191520:
    // 0x191520: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x191520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_191524:
    // 0x191524: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x191524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
label_191528:
    // 0x191528: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x191528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
label_19152c:
    // 0x19152c: 0xc07fb0c  jal         func_1FEC30
label_191530:
    if (ctx->pc == 0x191530u) {
        ctx->pc = 0x191530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19152Cu;
        // 0x191530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191534u;
        goto label_191534;
    }
    ctx->pc = 0x19152Cu;
    SET_GPR_U32(ctx, 31, 0x191534u);
    ctx->pc = 0x191530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19152Cu;
    // 0x191530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19152Cu, 0x191534u)) {
        return;
    }
    ctx->pc = 0x191534u;
label_191534:
    // 0x191534: 0x8e2400f4  lw          $a0, 0xF4($s1)
    ctx->pc = 0x191534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_191538:
    // 0x191538: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
label_19153c:
    if (ctx->pc == 0x19153Cu) {
        ctx->pc = 0x19153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191538u;
        // 0x19153c: 0x8e2400f8  lw          $a0, 0xF8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191540u;
        goto label_191540;
    }
    ctx->pc = 0x191538u;
    {
        const bool branch_taken_0x191538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x191538) {
            ctx->pc = 0x19153Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191538u;
            // 0x19153c: 0x8e2400f8  lw          $a0, 0xF8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191574u;
            goto label_191574;
        }
    }
    ctx->pc = 0x191540u;
label_191540:
    // 0x191540: 0xc054c8e  jal         func_153238
label_191544:
    if (ctx->pc == 0x191544u) {
        ctx->pc = 0x191548u;
        goto label_191548;
    }
    ctx->pc = 0x191540u;
    SET_GPR_U32(ctx, 31, 0x191548u);
    ctx->pc = 0x153238u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153238u, 0x191540u, 0x191548u)) {
        return;
    }
    ctx->pc = 0x191548u;
label_191548:
    // 0x191548: 0x8e2600f4  lw          $a2, 0xF4($s1)
    ctx->pc = 0x191548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_19154c:
    // 0x19154c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_191550:
    if (ctx->pc == 0x191550u) {
        ctx->pc = 0x191550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19154Cu;
        // 0x191550: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191554u;
        goto label_191554;
    }
    ctx->pc = 0x19154Cu;
    {
        const bool branch_taken_0x19154c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x191550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19154Cu;
        // 0x191550: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19154c) {
            ctx->pc = 0x19156Cu;
            goto label_19156c;
        }
    }
    ctx->pc = 0x191554u;
label_191554:
    // 0x191554: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x191554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_191558:
    // 0x191558: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x191558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_19155c:
    // 0x19155c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x19155cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_191560:
    // 0x191560: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x191560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_191564:
    // 0x191564: 0x40f809  jalr        $v0
label_191568:
    if (ctx->pc == 0x191568u) {
        ctx->pc = 0x191568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191564u;
        // 0x191568: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19156Cu;
        goto label_19156c;
    }
    ctx->pc = 0x191564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19156Cu);
        ctx->pc = 0x191568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191564u;
        // 0x191568: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191564u, 0x19156Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19156Cu;
label_19156c:
    // 0x19156c: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x19156cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_191570:
    // 0x191570: 0x8e2400f8  lw          $a0, 0xF8($s1)
    ctx->pc = 0x191570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_191574:
    // 0x191574: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_191578:
    if (ctx->pc == 0x191578u) {
        ctx->pc = 0x191578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191574u;
        // 0x191578: 0x8e2200c8  lw          $v0, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19157Cu;
        goto label_19157c;
    }
    ctx->pc = 0x191574u;
    {
        const bool branch_taken_0x191574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x191574) {
            ctx->pc = 0x191578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191574u;
            // 0x191578: 0x8e2200c8  lw          $v0, 0xC8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19158Cu;
            goto label_19158c;
        }
    }
    ctx->pc = 0x19157Cu;
label_19157c:
    // 0x19157c: 0xc0808b8  jal         func_2022E0
label_191580:
    if (ctx->pc == 0x191580u) {
        ctx->pc = 0x191584u;
        goto label_191584;
    }
    ctx->pc = 0x19157Cu;
    SET_GPR_U32(ctx, 31, 0x191584u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x19157Cu, 0x191584u)) {
        return;
    }
    ctx->pc = 0x191584u;
label_191584:
    // 0x191584: 0xae2000f8  sw          $zero, 0xF8($s1)
    ctx->pc = 0x191584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
label_191588:
    // 0x191588: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x191588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_19158c:
    // 0x19158c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_191590:
    if (ctx->pc == 0x191590u) {
        ctx->pc = 0x191590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19158Cu;
        // 0x191590: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191594u;
        goto label_191594;
    }
    ctx->pc = 0x19158Cu;
    {
        const bool branch_taken_0x19158c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19158Cu;
        // 0x191590: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19158c) {
            ctx->pc = 0x1915A4u;
            goto label_1915a4;
        }
    }
    ctx->pc = 0x191594u;
label_191594:
    // 0x191594: 0x8e2500c4  lw          $a1, 0xC4($s1)
    ctx->pc = 0x191594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_191598:
    // 0x191598: 0xc0640ce  jal         func_190338
label_19159c:
    if (ctx->pc == 0x19159Cu) {
        ctx->pc = 0x19159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191598u;
        // 0x19159c: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1915A0u;
        goto label_1915a0;
    }
    ctx->pc = 0x191598u;
    SET_GPR_U32(ctx, 31, 0x1915A0u);
    ctx->pc = 0x19159Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191598u;
    // 0x19159c: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190338u, 0x191598u, 0x1915A0u)) {
        return;
    }
    ctx->pc = 0x1915A0u;
label_1915a0:
    // 0x1915a0: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x1915a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
label_1915a4:
    // 0x1915a4: 0x263000e4  addiu       $s0, $s1, 0xE4
    ctx->pc = 0x1915a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
label_1915a8:
    // 0x1915a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1915a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1915ac:
    // 0x1915ac: 0xc07fb0c  jal         func_1FEC30
label_1915b0:
    if (ctx->pc == 0x1915B0u) {
        ctx->pc = 0x1915B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915ACu;
        // 0x1915b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1915B4u;
        goto label_1915b4;
    }
    ctx->pc = 0x1915ACu;
    SET_GPR_U32(ctx, 31, 0x1915B4u);
    ctx->pc = 0x1915B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1915ACu;
    // 0x1915b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1915ACu, 0x1915B4u)) {
        return;
    }
    ctx->pc = 0x1915B4u;
label_1915b4:
    // 0x1915b4: 0xc07fac2  jal         func_1FEB08
label_1915b8:
    if (ctx->pc == 0x1915B8u) {
        ctx->pc = 0x1915B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915B4u;
        // 0x1915b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1915BCu;
        goto label_1915bc;
    }
    ctx->pc = 0x1915B4u;
    SET_GPR_U32(ctx, 31, 0x1915BCu);
    ctx->pc = 0x1915B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1915B4u;
    // 0x1915b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1915B4u, 0x1915BCu)) {
        return;
    }
    ctx->pc = 0x1915BCu;
label_1915bc:
    // 0x1915bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1915bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1915c0:
    // 0x1915c0: 0xc07fbec  jal         func_1FEFB0
label_1915c4:
    if (ctx->pc == 0x1915C4u) {
        ctx->pc = 0x1915C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915C0u;
        // 0x1915c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1915C8u;
        goto label_1915c8;
    }
    ctx->pc = 0x1915C0u;
    SET_GPR_U32(ctx, 31, 0x1915C8u);
    ctx->pc = 0x1915C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1915C0u;
    // 0x1915c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1915C0u, 0x1915C8u)) {
        return;
    }
    ctx->pc = 0x1915C8u;
label_1915c8:
    // 0x1915c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1915c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1915cc:
    // 0x1915cc: 0xc062482  jal         func_189208
label_1915d0:
    if (ctx->pc == 0x1915D0u) {
        ctx->pc = 0x1915D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915CCu;
        // 0x1915d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1915D4u;
        goto label_1915d4;
    }
    ctx->pc = 0x1915CCu;
    SET_GPR_U32(ctx, 31, 0x1915D4u);
    ctx->pc = 0x1915D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1915CCu;
    // 0x1915d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189208u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x189208u, 0x1915CCu, 0x1915D4u)) {
        return;
    }
    ctx->pc = 0x1915D4u;
label_1915d4:
    // 0x1915d4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1915d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1915d8:
    // 0x1915d8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1915d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1915dc:
    // 0x1915dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1915dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1915e0:
    // 0x1915e0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1915e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1915e4:
    // 0x1915e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1915e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1915e8:
    // 0x1915e8: 0x3e00008  jr          $ra
label_1915ec:
    if (ctx->pc == 0x1915ECu) {
        ctx->pc = 0x1915ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915E8u;
        // 0x1915ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1915F0u;
        goto label_fallthrough_0x1915e8;
    }
    ctx->pc = 0x1915E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1915ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915E8u;
        // 0x1915ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1915E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1915e8:
    ctx->pc = 0x1915F0u;
}
