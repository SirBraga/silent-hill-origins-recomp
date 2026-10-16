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

// Function: sub_00124420
// Address: 0x124420 - 0x124650
void sub_00124420_0x124420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124420_0x124420");
#endif

    switch (ctx->pc) {
        case 0x124420u: goto label_124420;
        case 0x124424u: goto label_124424;
        case 0x124428u: goto label_124428;
        case 0x12442cu: goto label_12442c;
        case 0x124430u: goto label_124430;
        case 0x124434u: goto label_124434;
        case 0x124438u: goto label_124438;
        case 0x12443cu: goto label_12443c;
        case 0x124440u: goto label_124440;
        case 0x124444u: goto label_124444;
        case 0x124448u: goto label_124448;
        case 0x12444cu: goto label_12444c;
        case 0x124450u: goto label_124450;
        case 0x124454u: goto label_124454;
        case 0x124458u: goto label_124458;
        case 0x12445cu: goto label_12445c;
        case 0x124460u: goto label_124460;
        case 0x124464u: goto label_124464;
        case 0x124468u: goto label_124468;
        case 0x12446cu: goto label_12446c;
        case 0x124470u: goto label_124470;
        case 0x124474u: goto label_124474;
        case 0x124478u: goto label_124478;
        case 0x12447cu: goto label_12447c;
        case 0x124480u: goto label_124480;
        case 0x124484u: goto label_124484;
        case 0x124488u: goto label_124488;
        case 0x12448cu: goto label_12448c;
        case 0x124490u: goto label_124490;
        case 0x124494u: goto label_124494;
        case 0x124498u: goto label_124498;
        case 0x12449cu: goto label_12449c;
        case 0x1244a0u: goto label_1244a0;
        case 0x1244a4u: goto label_1244a4;
        case 0x1244a8u: goto label_1244a8;
        case 0x1244acu: goto label_1244ac;
        case 0x1244b0u: goto label_1244b0;
        case 0x1244b4u: goto label_1244b4;
        case 0x1244b8u: goto label_1244b8;
        case 0x1244bcu: goto label_1244bc;
        case 0x1244c0u: goto label_1244c0;
        case 0x1244c4u: goto label_1244c4;
        case 0x1244c8u: goto label_1244c8;
        case 0x1244ccu: goto label_1244cc;
        case 0x1244d0u: goto label_1244d0;
        case 0x1244d4u: goto label_1244d4;
        case 0x1244d8u: goto label_1244d8;
        case 0x1244dcu: goto label_1244dc;
        case 0x1244e0u: goto label_1244e0;
        case 0x1244e4u: goto label_1244e4;
        case 0x1244e8u: goto label_1244e8;
        case 0x1244ecu: goto label_1244ec;
        case 0x1244f0u: goto label_1244f0;
        case 0x1244f4u: goto label_1244f4;
        case 0x1244f8u: goto label_1244f8;
        case 0x1244fcu: goto label_1244fc;
        case 0x124500u: goto label_124500;
        case 0x124504u: goto label_124504;
        case 0x124508u: goto label_124508;
        case 0x12450cu: goto label_12450c;
        case 0x124510u: goto label_124510;
        case 0x124514u: goto label_124514;
        case 0x124518u: goto label_124518;
        case 0x12451cu: goto label_12451c;
        case 0x124520u: goto label_124520;
        case 0x124524u: goto label_124524;
        case 0x124528u: goto label_124528;
        case 0x12452cu: goto label_12452c;
        case 0x124530u: goto label_124530;
        case 0x124534u: goto label_124534;
        case 0x124538u: goto label_124538;
        case 0x12453cu: goto label_12453c;
        case 0x124540u: goto label_124540;
        case 0x124544u: goto label_124544;
        case 0x124548u: goto label_124548;
        case 0x12454cu: goto label_12454c;
        case 0x124550u: goto label_124550;
        case 0x124554u: goto label_124554;
        case 0x124558u: goto label_124558;
        case 0x12455cu: goto label_12455c;
        case 0x124560u: goto label_124560;
        case 0x124564u: goto label_124564;
        case 0x124568u: goto label_124568;
        case 0x12456cu: goto label_12456c;
        case 0x124570u: goto label_124570;
        case 0x124574u: goto label_124574;
        case 0x124578u: goto label_124578;
        case 0x12457cu: goto label_12457c;
        case 0x124580u: goto label_124580;
        case 0x124584u: goto label_124584;
        case 0x124588u: goto label_124588;
        case 0x12458cu: goto label_12458c;
        case 0x124590u: goto label_124590;
        case 0x124594u: goto label_124594;
        case 0x124598u: goto label_124598;
        case 0x12459cu: goto label_12459c;
        case 0x1245a0u: goto label_1245a0;
        case 0x1245a4u: goto label_1245a4;
        case 0x1245a8u: goto label_1245a8;
        case 0x1245acu: goto label_1245ac;
        case 0x1245b0u: goto label_1245b0;
        case 0x1245b4u: goto label_1245b4;
        case 0x1245b8u: goto label_1245b8;
        case 0x1245bcu: goto label_1245bc;
        case 0x1245c0u: goto label_1245c0;
        case 0x1245c4u: goto label_1245c4;
        case 0x1245c8u: goto label_1245c8;
        case 0x1245ccu: goto label_1245cc;
        case 0x1245d0u: goto label_1245d0;
        case 0x1245d4u: goto label_1245d4;
        case 0x1245d8u: goto label_1245d8;
        case 0x1245dcu: goto label_1245dc;
        case 0x1245e0u: goto label_1245e0;
        case 0x1245e4u: goto label_1245e4;
        case 0x1245e8u: goto label_1245e8;
        case 0x1245ecu: goto label_1245ec;
        case 0x1245f0u: goto label_1245f0;
        case 0x1245f4u: goto label_1245f4;
        case 0x1245f8u: goto label_1245f8;
        case 0x1245fcu: goto label_1245fc;
        case 0x124600u: goto label_124600;
        case 0x124604u: goto label_124604;
        case 0x124608u: goto label_124608;
        case 0x12460cu: goto label_12460c;
        case 0x124610u: goto label_124610;
        case 0x124614u: goto label_124614;
        case 0x124618u: goto label_124618;
        case 0x12461cu: goto label_12461c;
        case 0x124620u: goto label_124620;
        case 0x124624u: goto label_124624;
        case 0x124628u: goto label_124628;
        case 0x12462cu: goto label_12462c;
        case 0x124630u: goto label_124630;
        case 0x124634u: goto label_124634;
        case 0x124638u: goto label_124638;
        case 0x12463cu: goto label_12463c;
        case 0x124640u: goto label_124640;
        case 0x124644u: goto label_124644;
        case 0x124648u: goto label_124648;
        case 0x12464cu: goto label_12464c;
        default: break;
    }

    ctx->pc = 0x124420u;

label_124420:
    // 0x124420: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x124420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_124424:
    // 0x124424: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x124424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_124428:
    // 0x124428: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x124428u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_12442c:
    // 0x12442c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12442cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_124430:
    // 0x124430: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x124430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_124434:
    // 0x124434: 0x8e020f54  lw          $v0, 0xF54($s0)
    ctx->pc = 0x124434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3924)));
label_124438:
    // 0x124438: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_12443c:
    if (ctx->pc == 0x12443Cu) {
        ctx->pc = 0x12443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124438u;
        // 0x12443c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x124440u;
        goto label_124440;
    }
    ctx->pc = 0x124438u;
    {
        const bool branch_taken_0x124438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124438u;
        // 0x12443c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124438) {
            ctx->pc = 0x124448u;
            goto label_124448;
        }
    }
    ctx->pc = 0x124440u;
label_124440:
    // 0x124440: 0xc049a70  jal         func_1269C0
label_124444:
    if (ctx->pc == 0x124444u) {
        ctx->pc = 0x124448u;
        goto label_124448;
    }
    ctx->pc = 0x124440u;
    SET_GPR_U32(ctx, 31, 0x124448u);
    ctx->pc = 0x1269C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1269C0u, 0x124440u, 0x124448u)) {
        return;
    }
    ctx->pc = 0x124448u;
label_124448:
    // 0x124448: 0x8e020f58  lw          $v0, 0xF58($s0)
    ctx->pc = 0x124448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3928)));
label_12444c:
    // 0x12444c: 0x8e030f54  lw          $v1, 0xF54($s0)
    ctx->pc = 0x12444cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3924)));
label_124450:
    // 0x124450: 0x1043003f  beq         $v0, $v1, . + 4 + (0x3F << 2)
label_124454:
    if (ctx->pc == 0x124454u) {
        ctx->pc = 0x124454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124450u;
        // 0x124454: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124458u;
        goto label_124458;
    }
    ctx->pc = 0x124450u;
    {
        const bool branch_taken_0x124450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x124454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124450u;
        // 0x124454: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124450) {
            ctx->pc = 0x124550u;
            goto label_124550;
        }
    }
    ctx->pc = 0x124458u;
label_124458:
    // 0x124458: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_12445c:
    if (ctx->pc == 0x12445Cu) {
        ctx->pc = 0x12445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124458u;
        // 0x12445c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x124460u;
        goto label_124460;
    }
    ctx->pc = 0x124458u;
    {
        const bool branch_taken_0x124458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124458u;
        // 0x12445c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124458) {
            ctx->pc = 0x124498u;
            goto label_124498;
        }
    }
    ctx->pc = 0x124460u;
label_124460:
    // 0x124460: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_124464:
    if (ctx->pc == 0x124464u) {
        ctx->pc = 0x124464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124460u;
        // 0x124464: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124468u;
        goto label_124468;
    }
    ctx->pc = 0x124460u;
    {
        const bool branch_taken_0x124460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124460u;
        // 0x124464: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124460) {
            ctx->pc = 0x124478u;
            goto label_124478;
        }
    }
    ctx->pc = 0x124468u;
label_124468:
    // 0x124468: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_12446c:
    if (ctx->pc == 0x12446Cu) {
        ctx->pc = 0x12446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124468u;
        // 0x12446c: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124470u;
        goto label_124470;
    }
    ctx->pc = 0x124468u;
    {
        const bool branch_taken_0x124468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x124468) {
            ctx->pc = 0x12446Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124468u;
            // 0x12446c: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12448Cu;
            goto label_12448c;
        }
    }
    ctx->pc = 0x124470u;
label_124470:
    // 0x124470: 0x10000015  b           . + 4 + (0x15 << 2)
label_124474:
    if (ctx->pc == 0x124474u) {
        ctx->pc = 0x124474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124470u;
        // 0x124474: 0x8e030f58  lw          $v1, 0xF58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3928)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124478u;
        goto label_124478;
    }
    ctx->pc = 0x124470u;
    {
        const bool branch_taken_0x124470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124470u;
        // 0x124474: 0x8e030f58  lw          $v1, 0xF58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124470) {
            ctx->pc = 0x1244C8u;
            goto label_1244c8;
        }
    }
    ctx->pc = 0x124478u;
label_124478:
    // 0x124478: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x124478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12447c:
    // 0x12447c: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_124480:
    if (ctx->pc == 0x124480u) {
        ctx->pc = 0x124480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12447Cu;
        // 0x124480: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124484u;
        goto label_124484;
    }
    ctx->pc = 0x12447Cu;
    {
        const bool branch_taken_0x12447c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12447c) {
            ctx->pc = 0x124480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12447Cu;
            // 0x124480: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1244B4u;
            goto label_1244b4;
        }
    }
    ctx->pc = 0x124484u;
label_124484:
    // 0x124484: 0x10000010  b           . + 4 + (0x10 << 2)
label_124488:
    if (ctx->pc == 0x124488u) {
        ctx->pc = 0x124488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124484u;
        // 0x124488: 0x8e030f58  lw          $v1, 0xF58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3928)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12448Cu;
        goto label_12448c;
    }
    ctx->pc = 0x124484u;
    {
        const bool branch_taken_0x124484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124484u;
        // 0x124488: 0x8e030f58  lw          $v1, 0xF58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124484) {
            ctx->pc = 0x1244C8u;
            goto label_1244c8;
        }
    }
    ctx->pc = 0x12448Cu;
label_12448c:
    // 0x12448c: 0x84440240  lh          $a0, 0x240($v0)
    ctx->pc = 0x12448cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 576)));
label_124490:
    // 0x124490: 0x10000004  b           . + 4 + (0x4 << 2)
label_124494:
    if (ctx->pc == 0x124494u) {
        ctx->pc = 0x124494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124490u;
        // 0x124494: 0x8c430244  lw          $v1, 0x244($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124498u;
        goto label_124498;
    }
    ctx->pc = 0x124490u;
    {
        const bool branch_taken_0x124490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124490u;
        // 0x124494: 0x8c430244  lw          $v1, 0x244($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124490) {
            ctx->pc = 0x1244A4u;
            goto label_1244a4;
        }
    }
    ctx->pc = 0x124498u;
label_124498:
    // 0x124498: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x124498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_12449c:
    // 0x12449c: 0x84440258  lh          $a0, 0x258($v0)
    ctx->pc = 0x12449cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 600)));
label_1244a0:
    // 0x1244a0: 0x8c43025c  lw          $v1, 0x25C($v0)
    ctx->pc = 0x1244a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_1244a4:
    // 0x1244a4: 0x60f809  jalr        $v1
label_1244a8:
    if (ctx->pc == 0x1244A8u) {
        ctx->pc = 0x1244A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244A4u;
        // 0x1244a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1244ACu;
        goto label_1244ac;
    }
    ctx->pc = 0x1244A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1244ACu);
        ctx->pc = 0x1244A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244A4u;
        // 0x1244a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1244A4u, 0x1244ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1244ACu;
label_1244ac:
    // 0x1244ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_1244b0:
    if (ctx->pc == 0x1244B0u) {
        ctx->pc = 0x1244B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244ACu;
        // 0x1244b0: 0x8e030f58  lw          $v1, 0xF58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3928)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1244B4u;
        goto label_1244b4;
    }
    ctx->pc = 0x1244ACu;
    {
        const bool branch_taken_0x1244ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1244B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244ACu;
        // 0x1244b0: 0x8e030f58  lw          $v1, 0xF58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244ac) {
            ctx->pc = 0x1244C8u;
            goto label_1244c8;
        }
    }
    ctx->pc = 0x1244B4u;
label_1244b4:
    // 0x1244b4: 0x84440270  lh          $a0, 0x270($v0)
    ctx->pc = 0x1244b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 624)));
label_1244b8:
    // 0x1244b8: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x1244b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_1244bc:
    // 0x1244bc: 0x60f809  jalr        $v1
label_1244c0:
    if (ctx->pc == 0x1244C0u) {
        ctx->pc = 0x1244C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244BCu;
        // 0x1244c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1244C4u;
        goto label_1244c4;
    }
    ctx->pc = 0x1244BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1244C4u);
        ctx->pc = 0x1244C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244BCu;
        // 0x1244c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1244BCu, 0x1244C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1244C4u;
label_1244c4:
    // 0x1244c4: 0x8e030f58  lw          $v1, 0xF58($s0)
    ctx->pc = 0x1244c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3928)));
label_1244c8:
    // 0x1244c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1244c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1244cc:
    // 0x1244cc: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_1244d0:
    if (ctx->pc == 0x1244D0u) {
        ctx->pc = 0x1244D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244CCu;
        // 0x1244d0: 0xae030f54  sw          $v1, 0xF54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3924), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1244D4u;
        goto label_1244d4;
    }
    ctx->pc = 0x1244CCu;
    {
        const bool branch_taken_0x1244cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1244D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244CCu;
        // 0x1244d0: 0xae030f54  sw          $v1, 0xF54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3924), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244cc) {
            ctx->pc = 0x124520u;
            goto label_124520;
        }
    }
    ctx->pc = 0x1244D4u;
label_1244d4:
    // 0x1244d4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1244d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1244d8:
    // 0x1244d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1244dc:
    if (ctx->pc == 0x1244DCu) {
        ctx->pc = 0x1244DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244D8u;
        // 0x1244dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1244E0u;
        goto label_1244e0;
    }
    ctx->pc = 0x1244D8u;
    {
        const bool branch_taken_0x1244d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1244DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244D8u;
        // 0x1244dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244d8) {
            ctx->pc = 0x1244F0u;
            goto label_1244f0;
        }
    }
    ctx->pc = 0x1244E0u;
label_1244e0:
    // 0x1244e0: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_1244e4:
    if (ctx->pc == 0x1244E4u) {
        ctx->pc = 0x1244E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244E0u;
        // 0x1244e4: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1244E8u;
        goto label_1244e8;
    }
    ctx->pc = 0x1244E0u;
    {
        const bool branch_taken_0x1244e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1244e0) {
            ctx->pc = 0x1244E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1244E0u;
            // 0x1244e4: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124504u;
            goto label_124504;
        }
    }
    ctx->pc = 0x1244E8u;
label_1244e8:
    // 0x1244e8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1244ec:
    if (ctx->pc == 0x1244ECu) {
        ctx->pc = 0x1244ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244E8u;
        // 0x1244ec: 0x8e030f54  lw          $v1, 0xF54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3924)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1244F0u;
        goto label_1244f0;
    }
    ctx->pc = 0x1244E8u;
    {
        const bool branch_taken_0x1244e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1244ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244E8u;
        // 0x1244ec: 0x8e030f54  lw          $v1, 0xF54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3924)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244e8) {
            ctx->pc = 0x124550u;
            goto label_124550;
        }
    }
    ctx->pc = 0x1244F0u;
label_1244f0:
    // 0x1244f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1244f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1244f4:
    // 0x1244f4: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
label_1244f8:
    if (ctx->pc == 0x1244F8u) {
        ctx->pc = 0x1244F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244F4u;
        // 0x1244f8: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1244FCu;
        goto label_1244fc;
    }
    ctx->pc = 0x1244F4u;
    {
        const bool branch_taken_0x1244f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1244f4) {
            ctx->pc = 0x1244F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1244F4u;
            // 0x1244f8: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12453Cu;
            goto label_12453c;
        }
    }
    ctx->pc = 0x1244FCu;
label_1244fc:
    // 0x1244fc: 0x10000014  b           . + 4 + (0x14 << 2)
label_124500:
    if (ctx->pc == 0x124500u) {
        ctx->pc = 0x124500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244FCu;
        // 0x124500: 0x8e030f54  lw          $v1, 0xF54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3924)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124504u;
        goto label_124504;
    }
    ctx->pc = 0x1244FCu;
    {
        const bool branch_taken_0x1244fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244FCu;
        // 0x124500: 0x8e030f54  lw          $v1, 0xF54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3924)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244fc) {
            ctx->pc = 0x124550u;
            goto label_124550;
        }
    }
    ctx->pc = 0x124504u;
label_124504:
    // 0x124504: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x124504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124508:
    // 0x124508: 0x84440230  lh          $a0, 0x230($v0)
    ctx->pc = 0x124508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 560)));
label_12450c:
    // 0x12450c: 0x8c430234  lw          $v1, 0x234($v0)
    ctx->pc = 0x12450cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
label_124510:
    // 0x124510: 0x60f809  jalr        $v1
label_124514:
    if (ctx->pc == 0x124514u) {
        ctx->pc = 0x124514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124510u;
        // 0x124514: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124518u;
        goto label_124518;
    }
    ctx->pc = 0x124510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x124518u);
        ctx->pc = 0x124514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124510u;
        // 0x124514: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124510u, 0x124518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124518u;
label_124518:
    // 0x124518: 0x1000000d  b           . + 4 + (0xD << 2)
label_12451c:
    if (ctx->pc == 0x12451Cu) {
        ctx->pc = 0x12451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124518u;
        // 0x12451c: 0x8e030f54  lw          $v1, 0xF54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3924)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124520u;
        goto label_124520;
    }
    ctx->pc = 0x124518u;
    {
        const bool branch_taken_0x124518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124518u;
        // 0x12451c: 0x8e030f54  lw          $v1, 0xF54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3924)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124518) {
            ctx->pc = 0x124550u;
            goto label_124550;
        }
    }
    ctx->pc = 0x124520u;
label_124520:
    // 0x124520: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x124520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_124524:
    // 0x124524: 0x84440248  lh          $a0, 0x248($v0)
    ctx->pc = 0x124524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 584)));
label_124528:
    // 0x124528: 0x8c43024c  lw          $v1, 0x24C($v0)
    ctx->pc = 0x124528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
label_12452c:
    // 0x12452c: 0x60f809  jalr        $v1
label_124530:
    if (ctx->pc == 0x124530u) {
        ctx->pc = 0x124530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12452Cu;
        // 0x124530: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124534u;
        goto label_124534;
    }
    ctx->pc = 0x12452Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x124534u);
        ctx->pc = 0x124530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12452Cu;
        // 0x124530: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12452Cu, 0x124534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124534u;
label_124534:
    // 0x124534: 0x10000006  b           . + 4 + (0x6 << 2)
label_124538:
    if (ctx->pc == 0x124538u) {
        ctx->pc = 0x124538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124534u;
        // 0x124538: 0x8e030f54  lw          $v1, 0xF54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3924)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12453Cu;
        goto label_12453c;
    }
    ctx->pc = 0x124534u;
    {
        const bool branch_taken_0x124534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124534u;
        // 0x124538: 0x8e030f54  lw          $v1, 0xF54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3924)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124534) {
            ctx->pc = 0x124550u;
            goto label_124550;
        }
    }
    ctx->pc = 0x12453Cu;
label_12453c:
    // 0x12453c: 0x84440260  lh          $a0, 0x260($v0)
    ctx->pc = 0x12453cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 608)));
label_124540:
    // 0x124540: 0x8c430264  lw          $v1, 0x264($v0)
    ctx->pc = 0x124540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 612)));
label_124544:
    // 0x124544: 0x60f809  jalr        $v1
label_124548:
    if (ctx->pc == 0x124548u) {
        ctx->pc = 0x124548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124544u;
        // 0x124548: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12454Cu;
        goto label_12454c;
    }
    ctx->pc = 0x124544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12454Cu);
        ctx->pc = 0x124548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124544u;
        // 0x124548: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124544u, 0x12454Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12454Cu;
label_12454c:
    // 0x12454c: 0x8e030f54  lw          $v1, 0xF54($s0)
    ctx->pc = 0x12454cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3924)));
label_124550:
    // 0x124550: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x124550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_124554:
    // 0x124554: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_124558:
    if (ctx->pc == 0x124558u) {
        ctx->pc = 0x124558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124554u;
        // 0x124558: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12455Cu;
        goto label_12455c;
    }
    ctx->pc = 0x124554u;
    {
        const bool branch_taken_0x124554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124554u;
        // 0x124558: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124554) {
            ctx->pc = 0x1245D0u;
            goto label_1245d0;
        }
    }
    ctx->pc = 0x12455Cu;
label_12455c:
    // 0x12455c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12455cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_124560:
    // 0x124560: 0x2442bec0  addiu       $v0, $v0, -0x4140
    ctx->pc = 0x124560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950592));
label_124564:
    // 0x124564: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x124564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_124568:
    // 0x124568: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x124568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12456c:
    // 0x12456c: 0x800008  jr          $a0
label_124570:
    if (ctx->pc == 0x124570u) {
        ctx->pc = 0x124574u;
        goto label_124574;
    }
    ctx->pc = 0x12456Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124574u: goto label_124574;
            case 0x124588u: goto label_124588;
            case 0x12459Cu: goto label_12459c;
            case 0x1245BCu: goto label_1245bc;
            case 0x1245D0u: goto label_1245d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12456Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x124574u;
label_124574:
    // 0x124574: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x124574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_124578:
    // 0x124578: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x124578u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_12457c:
    // 0x12457c: 0x84440238  lh          $a0, 0x238($v0)
    ctx->pc = 0x12457cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 568)));
label_124580:
    // 0x124580: 0x1000000a  b           . + 4 + (0xA << 2)
label_124584:
    if (ctx->pc == 0x124584u) {
        ctx->pc = 0x124584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124580u;
        // 0x124584: 0x8c43023c  lw          $v1, 0x23C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124588u;
        goto label_124588;
    }
    ctx->pc = 0x124580u;
    {
        const bool branch_taken_0x124580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124580u;
        // 0x124584: 0x8c43023c  lw          $v1, 0x23C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124580) {
            ctx->pc = 0x1245ACu;
            goto label_1245ac;
        }
    }
    ctx->pc = 0x124588u;
label_124588:
    // 0x124588: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x124588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_12458c:
    // 0x12458c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12458cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_124590:
    // 0x124590: 0x84440250  lh          $a0, 0x250($v0)
    ctx->pc = 0x124590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 592)));
label_124594:
    // 0x124594: 0x10000005  b           . + 4 + (0x5 << 2)
label_124598:
    if (ctx->pc == 0x124598u) {
        ctx->pc = 0x124598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124594u;
        // 0x124598: 0x8c430254  lw          $v1, 0x254($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12459Cu;
        goto label_12459c;
    }
    ctx->pc = 0x124594u;
    {
        const bool branch_taken_0x124594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124594u;
        // 0x124598: 0x8c430254  lw          $v1, 0x254($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124594) {
            ctx->pc = 0x1245ACu;
            goto label_1245ac;
        }
    }
    ctx->pc = 0x12459Cu;
label_12459c:
    // 0x12459c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x12459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1245a0:
    // 0x1245a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1245a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1245a4:
    // 0x1245a4: 0x84440268  lh          $a0, 0x268($v0)
    ctx->pc = 0x1245a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 616)));
label_1245a8:
    // 0x1245a8: 0x8c43026c  lw          $v1, 0x26C($v0)
    ctx->pc = 0x1245a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
label_1245ac:
    // 0x1245ac: 0x60f809  jalr        $v1
label_1245b0:
    if (ctx->pc == 0x1245B0u) {
        ctx->pc = 0x1245B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245ACu;
        // 0x1245b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1245B4u;
        goto label_1245b4;
    }
    ctx->pc = 0x1245ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1245B4u);
        ctx->pc = 0x1245B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245ACu;
        // 0x1245b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1245ACu, 0x1245B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1245B4u;
label_1245b4:
    // 0x1245b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1245b8:
    if (ctx->pc == 0x1245B8u) {
        ctx->pc = 0x1245B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245B4u;
        // 0x1245b8: 0x8e040f6c  lw          $a0, 0xF6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3948)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1245BCu;
        goto label_1245bc;
    }
    ctx->pc = 0x1245B4u;
    {
        const bool branch_taken_0x1245b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1245B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245B4u;
        // 0x1245b8: 0x8e040f6c  lw          $a0, 0xF6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245b4) {
            ctx->pc = 0x1245D4u;
            goto label_1245d4;
        }
    }
    ctx->pc = 0x1245BCu;
label_1245bc:
    // 0x1245bc: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1245bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1245c0:
    // 0x1245c0: 0x84440278  lh          $a0, 0x278($v0)
    ctx->pc = 0x1245c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 632)));
label_1245c4:
    // 0x1245c4: 0x8c43027c  lw          $v1, 0x27C($v0)
    ctx->pc = 0x1245c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
label_1245c8:
    // 0x1245c8: 0x60f809  jalr        $v1
label_1245cc:
    if (ctx->pc == 0x1245CCu) {
        ctx->pc = 0x1245CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245C8u;
        // 0x1245cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1245D0u;
        goto label_1245d0;
    }
    ctx->pc = 0x1245C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1245D0u);
        ctx->pc = 0x1245CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245C8u;
        // 0x1245cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1245C8u, 0x1245D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1245D0u;
label_1245d0:
    // 0x1245d0: 0x8e040f6c  lw          $a0, 0xF6C($s0)
    ctx->pc = 0x1245d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3948)));
label_1245d4:
    // 0x1245d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1245d8:
    if (ctx->pc == 0x1245D8u) {
        ctx->pc = 0x1245D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245D4u;
        // 0x1245d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1245DCu;
        goto label_1245dc;
    }
    ctx->pc = 0x1245D4u;
    {
        const bool branch_taken_0x1245d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1245D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245D4u;
        // 0x1245d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245d4) {
            ctx->pc = 0x1245E8u;
            goto label_1245e8;
        }
    }
    ctx->pc = 0x1245DCu;
label_1245dc:
    // 0x1245dc: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x1245dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1245e0:
    // 0x1245e0: 0xc05028a  jal         func_140A28
label_1245e4:
    if (ctx->pc == 0x1245E4u) {
        ctx->pc = 0x1245E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245E0u;
        // 0x1245e4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1245E8u;
        goto label_1245e8;
    }
    ctx->pc = 0x1245E0u;
    SET_GPR_U32(ctx, 31, 0x1245E8u);
    ctx->pc = 0x1245E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1245E0u;
    // 0x1245e4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140A28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x140A28u, 0x1245E0u, 0x1245E8u)) {
        return;
    }
    ctx->pc = 0x1245E8u;
label_1245e8:
    // 0x1245e8: 0x8e020eb0  lw          $v0, 0xEB0($s0)
    ctx->pc = 0x1245e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3760)));
label_1245ec:
    // 0x1245ec: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_1245f0:
    if (ctx->pc == 0x1245F0u) {
        ctx->pc = 0x1245F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245ECu;
        // 0x1245f0: 0xae000eb0  sw          $zero, 0xEB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1245F4u;
        goto label_1245f4;
    }
    ctx->pc = 0x1245ECu;
    {
        const bool branch_taken_0x1245ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1245ec) {
            ctx->pc = 0x1245F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1245ECu;
            // 0x1245f0: 0xae000eb0  sw          $zero, 0xEB0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3760), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12463Cu;
            goto label_12463c;
        }
    }
    ctx->pc = 0x1245F4u;
label_1245f4:
    // 0x1245f4: 0x8e020eac  lw          $v0, 0xEAC($s0)
    ctx->pc = 0x1245f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3756)));
label_1245f8:
    // 0x1245f8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_1245fc:
    if (ctx->pc == 0x1245FCu) {
        ctx->pc = 0x1245FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245F8u;
        // 0x1245fc: 0xae000eb0  sw          $zero, 0xEB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124600u;
        goto label_124600;
    }
    ctx->pc = 0x1245F8u;
    {
        const bool branch_taken_0x1245f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1245f8) {
            ctx->pc = 0x1245FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1245F8u;
            // 0x1245fc: 0xae000eb0  sw          $zero, 0xEB0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3760), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12463Cu;
            goto label_12463c;
        }
    }
    ctx->pc = 0x124600u;
label_124600:
    // 0x124600: 0x8e050210  lw          $a1, 0x210($s0)
    ctx->pc = 0x124600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_124604:
    // 0x124604: 0xc040698  jal         func_101A60
label_124608:
    if (ctx->pc == 0x124608u) {
        ctx->pc = 0x124608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124604u;
        // 0x124608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12460Cu;
        goto label_12460c;
    }
    ctx->pc = 0x124604u;
    SET_GPR_U32(ctx, 31, 0x12460Cu);
    ctx->pc = 0x124608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124604u;
    // 0x124608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A60u, 0x124604u, 0x12460Cu)) {
        return;
    }
    ctx->pc = 0x12460Cu;
label_12460c:
    // 0x12460c: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x12460cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_124610:
    // 0x124610: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x124610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_124614:
    // 0x124614: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124618:
    // 0x124618: 0xc092d9c  jal         func_24B670
label_12461c:
    if (ctx->pc == 0x12461Cu) {
        ctx->pc = 0x12461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124618u;
        // 0x12461c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124620u;
        goto label_124620;
    }
    ctx->pc = 0x124618u;
    SET_GPR_U32(ctx, 31, 0x124620u);
    ctx->pc = 0x12461Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124618u;
    // 0x12461c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x124618u, 0x124620u)) {
        return;
    }
    ctx->pc = 0x124620u;
label_124620:
    // 0x124620: 0x8e040eac  lw          $a0, 0xEAC($s0)
    ctx->pc = 0x124620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3756)));
label_124624:
    // 0x124624: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x124624u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_124628:
    // 0x124628: 0xc059a0a  jal         func_166828
label_12462c:
    if (ctx->pc == 0x12462Cu) {
        ctx->pc = 0x12462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124628u;
        // 0x12462c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124630u;
        goto label_124630;
    }
    ctx->pc = 0x124628u;
    SET_GPR_U32(ctx, 31, 0x124630u);
    ctx->pc = 0x12462Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124628u;
    // 0x12462c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x166828u, 0x124628u, 0x124630u)) {
        return;
    }
    ctx->pc = 0x124630u;
label_124630:
    // 0x124630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124634:
    // 0x124634: 0xae020eb0  sw          $v0, 0xEB0($s0)
    ctx->pc = 0x124634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3760), GPR_U32(ctx, 2));
label_124638:
    // 0x124638: 0xae000eb0  sw          $zero, 0xEB0($s0)
    ctx->pc = 0x124638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3760), GPR_U32(ctx, 0));
label_12463c:
    // 0x12463c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x12463cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_124640:
    // 0x124640: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x124640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_124644:
    // 0x124644: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x124644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_124648:
    // 0x124648: 0x3e00008  jr          $ra
label_12464c:
    if (ctx->pc == 0x12464Cu) {
        ctx->pc = 0x12464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124648u;
        // 0x12464c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124650u;
        goto label_fallthrough_0x124648;
    }
    ctx->pc = 0x124648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124648u;
        // 0x12464c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x124648:
    ctx->pc = 0x124650u;
}
