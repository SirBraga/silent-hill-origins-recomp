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

// Function: sub_00200430
// Address: 0x200430 - 0x200680
void sub_00200430_0x200430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200430_0x200430");
#endif

    switch (ctx->pc) {
        case 0x200430u: goto label_200430;
        case 0x200434u: goto label_200434;
        case 0x200438u: goto label_200438;
        case 0x20043cu: goto label_20043c;
        case 0x200440u: goto label_200440;
        case 0x200444u: goto label_200444;
        case 0x200448u: goto label_200448;
        case 0x20044cu: goto label_20044c;
        case 0x200450u: goto label_200450;
        case 0x200454u: goto label_200454;
        case 0x200458u: goto label_200458;
        case 0x20045cu: goto label_20045c;
        case 0x200460u: goto label_200460;
        case 0x200464u: goto label_200464;
        case 0x200468u: goto label_200468;
        case 0x20046cu: goto label_20046c;
        case 0x200470u: goto label_200470;
        case 0x200474u: goto label_200474;
        case 0x200478u: goto label_200478;
        case 0x20047cu: goto label_20047c;
        case 0x200480u: goto label_200480;
        case 0x200484u: goto label_200484;
        case 0x200488u: goto label_200488;
        case 0x20048cu: goto label_20048c;
        case 0x200490u: goto label_200490;
        case 0x200494u: goto label_200494;
        case 0x200498u: goto label_200498;
        case 0x20049cu: goto label_20049c;
        case 0x2004a0u: goto label_2004a0;
        case 0x2004a4u: goto label_2004a4;
        case 0x2004a8u: goto label_2004a8;
        case 0x2004acu: goto label_2004ac;
        case 0x2004b0u: goto label_2004b0;
        case 0x2004b4u: goto label_2004b4;
        case 0x2004b8u: goto label_2004b8;
        case 0x2004bcu: goto label_2004bc;
        case 0x2004c0u: goto label_2004c0;
        case 0x2004c4u: goto label_2004c4;
        case 0x2004c8u: goto label_2004c8;
        case 0x2004ccu: goto label_2004cc;
        case 0x2004d0u: goto label_2004d0;
        case 0x2004d4u: goto label_2004d4;
        case 0x2004d8u: goto label_2004d8;
        case 0x2004dcu: goto label_2004dc;
        case 0x2004e0u: goto label_2004e0;
        case 0x2004e4u: goto label_2004e4;
        case 0x2004e8u: goto label_2004e8;
        case 0x2004ecu: goto label_2004ec;
        case 0x2004f0u: goto label_2004f0;
        case 0x2004f4u: goto label_2004f4;
        case 0x2004f8u: goto label_2004f8;
        case 0x2004fcu: goto label_2004fc;
        case 0x200500u: goto label_200500;
        case 0x200504u: goto label_200504;
        case 0x200508u: goto label_200508;
        case 0x20050cu: goto label_20050c;
        case 0x200510u: goto label_200510;
        case 0x200514u: goto label_200514;
        case 0x200518u: goto label_200518;
        case 0x20051cu: goto label_20051c;
        case 0x200520u: goto label_200520;
        case 0x200524u: goto label_200524;
        case 0x200528u: goto label_200528;
        case 0x20052cu: goto label_20052c;
        case 0x200530u: goto label_200530;
        case 0x200534u: goto label_200534;
        case 0x200538u: goto label_200538;
        case 0x20053cu: goto label_20053c;
        case 0x200540u: goto label_200540;
        case 0x200544u: goto label_200544;
        case 0x200548u: goto label_200548;
        case 0x20054cu: goto label_20054c;
        case 0x200550u: goto label_200550;
        case 0x200554u: goto label_200554;
        case 0x200558u: goto label_200558;
        case 0x20055cu: goto label_20055c;
        case 0x200560u: goto label_200560;
        case 0x200564u: goto label_200564;
        case 0x200568u: goto label_200568;
        case 0x20056cu: goto label_20056c;
        case 0x200570u: goto label_200570;
        case 0x200574u: goto label_200574;
        case 0x200578u: goto label_200578;
        case 0x20057cu: goto label_20057c;
        case 0x200580u: goto label_200580;
        case 0x200584u: goto label_200584;
        case 0x200588u: goto label_200588;
        case 0x20058cu: goto label_20058c;
        case 0x200590u: goto label_200590;
        case 0x200594u: goto label_200594;
        case 0x200598u: goto label_200598;
        case 0x20059cu: goto label_20059c;
        case 0x2005a0u: goto label_2005a0;
        case 0x2005a4u: goto label_2005a4;
        case 0x2005a8u: goto label_2005a8;
        case 0x2005acu: goto label_2005ac;
        case 0x2005b0u: goto label_2005b0;
        case 0x2005b4u: goto label_2005b4;
        case 0x2005b8u: goto label_2005b8;
        case 0x2005bcu: goto label_2005bc;
        case 0x2005c0u: goto label_2005c0;
        case 0x2005c4u: goto label_2005c4;
        case 0x2005c8u: goto label_2005c8;
        case 0x2005ccu: goto label_2005cc;
        case 0x2005d0u: goto label_2005d0;
        case 0x2005d4u: goto label_2005d4;
        case 0x2005d8u: goto label_2005d8;
        case 0x2005dcu: goto label_2005dc;
        case 0x2005e0u: goto label_2005e0;
        case 0x2005e4u: goto label_2005e4;
        case 0x2005e8u: goto label_2005e8;
        case 0x2005ecu: goto label_2005ec;
        case 0x2005f0u: goto label_2005f0;
        case 0x2005f4u: goto label_2005f4;
        case 0x2005f8u: goto label_2005f8;
        case 0x2005fcu: goto label_2005fc;
        case 0x200600u: goto label_200600;
        case 0x200604u: goto label_200604;
        case 0x200608u: goto label_200608;
        case 0x20060cu: goto label_20060c;
        case 0x200610u: goto label_200610;
        case 0x200614u: goto label_200614;
        case 0x200618u: goto label_200618;
        case 0x20061cu: goto label_20061c;
        case 0x200620u: goto label_200620;
        case 0x200624u: goto label_200624;
        case 0x200628u: goto label_200628;
        case 0x20062cu: goto label_20062c;
        case 0x200630u: goto label_200630;
        case 0x200634u: goto label_200634;
        case 0x200638u: goto label_200638;
        case 0x20063cu: goto label_20063c;
        case 0x200640u: goto label_200640;
        case 0x200644u: goto label_200644;
        case 0x200648u: goto label_200648;
        case 0x20064cu: goto label_20064c;
        case 0x200650u: goto label_200650;
        case 0x200654u: goto label_200654;
        case 0x200658u: goto label_200658;
        case 0x20065cu: goto label_20065c;
        case 0x200660u: goto label_200660;
        case 0x200664u: goto label_200664;
        case 0x200668u: goto label_200668;
        case 0x20066cu: goto label_20066c;
        case 0x200670u: goto label_200670;
        case 0x200674u: goto label_200674;
        case 0x200678u: goto label_200678;
        case 0x20067cu: goto label_20067c;
        default: break;
    }

    ctx->pc = 0x200430u;

label_200430:
    // 0x200430: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x200430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_200434:
    // 0x200434: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x200434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_200438:
    // 0x200438: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x200438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_20043c:
    // 0x20043c: 0x24423818  addiu       $v0, $v0, 0x3818
    ctx->pc = 0x20043cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14360));
label_200440:
    // 0x200440: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x200440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_200444:
    // 0x200444: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x200444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_200448:
    // 0x200448: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x200448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_20044c:
    // 0x20044c: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x20044cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
label_200450:
    // 0x200450: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x200450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_200454:
    // 0x200454: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x200454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_200458:
    // 0x200458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x200458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20045c:
    // 0x20045c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x20045cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_200460:
    // 0x200460: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x200460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_200464:
    // 0x200464: 0x8cc22cd0  lw          $v0, 0x2CD0($a2)
    ctx->pc = 0x200464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11472)));
label_200468:
    // 0x200468: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_20046c:
    if (ctx->pc == 0x20046Cu) {
        ctx->pc = 0x20046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200468u;
        // 0x20046c: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200470u;
        goto label_200470;
    }
    ctx->pc = 0x200468u;
    {
        const bool branch_taken_0x200468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200468u;
        // 0x20046c: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200468) {
            ctx->pc = 0x2004A0u;
            goto label_2004a0;
        }
    }
    ctx->pc = 0x200470u;
label_200470:
    // 0x200470: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x200470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_200474:
    // 0x200474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x200474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200478:
    // 0x200478: 0x26052cc0  addiu       $a1, $s0, 0x2CC0
    ctx->pc = 0x200478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11456));
label_20047c:
    // 0x20047c: 0xacc32cd0  sw          $v1, 0x2CD0($a2)
    ctx->pc = 0x20047cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 11472), GPR_U32(ctx, 3));
label_200480:
    // 0x200480: 0x24423800  addiu       $v0, $v0, 0x3800
    ctx->pc = 0x200480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14336));
label_200484:
    // 0x200484: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x200484u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_200488:
    // 0x200488: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x200488u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_20048c:
    // 0x20048c: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x20048cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_200490:
    // 0x200490: 0xae002cc0  sw          $zero, 0x2CC0($s0)
    ctx->pc = 0x200490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11456), GPR_U32(ctx, 0));
label_200494:
    // 0x200494: 0x24840948  addiu       $a0, $a0, 0x948
    ctx->pc = 0x200494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2376));
label_200498:
    // 0x200498: 0xc0c53ae  jal         func_314EB8
label_20049c:
    if (ctx->pc == 0x20049Cu) {
        ctx->pc = 0x20049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200498u;
        // 0x20049c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2004A0u;
        goto label_2004a0;
    }
    ctx->pc = 0x200498u;
    SET_GPR_U32(ctx, 31, 0x2004A0u);
    ctx->pc = 0x20049Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200498u;
    // 0x20049c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x200498u, 0x2004A0u)) {
        return;
    }
    ctx->pc = 0x2004A0u;
label_2004a0:
    // 0x2004a0: 0x26102cc0  addiu       $s0, $s0, 0x2CC0
    ctx->pc = 0x2004a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11456));
label_2004a4:
    // 0x2004a4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2004a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2004a8:
    // 0x2004a8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_2004ac:
    if (ctx->pc == 0x2004ACu) {
        ctx->pc = 0x2004ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004A8u;
        // 0x2004ac: 0x32530001  andi        $s3, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2004B0u;
        goto label_2004b0;
    }
    ctx->pc = 0x2004A8u;
    {
        const bool branch_taken_0x2004a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2004ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004A8u;
        // 0x2004ac: 0x32530001  andi        $s3, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004a8) {
            ctx->pc = 0x2004D0u;
            goto label_2004d0;
        }
    }
    ctx->pc = 0x2004B0u;
label_2004b0:
    // 0x2004b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2004b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2004b4:
    // 0x2004b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2004b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2004b8:
    // 0x2004b8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_2004bc:
    if (ctx->pc == 0x2004BCu) {
        ctx->pc = 0x2004C0u;
        goto label_2004c0;
    }
    ctx->pc = 0x2004B8u;
    {
        const bool branch_taken_0x2004b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2004b8) {
            ctx->pc = 0x2004D4u;
            goto label_2004d4;
        }
    }
    ctx->pc = 0x2004C0u;
label_2004c0:
    // 0x2004c0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2004c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2004c4:
    // 0x2004c4: 0x0  nop
    ctx->pc = 0x2004c4u;
    // NOP
label_2004c8:
    // 0x2004c8: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
label_2004cc:
    if (ctx->pc == 0x2004CCu) {
        ctx->pc = 0x2004CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004C8u;
        // 0x2004cc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2004D0u;
        goto label_2004d0;
    }
    ctx->pc = 0x2004C8u;
    {
        const bool branch_taken_0x2004c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2004c8) {
            ctx->pc = 0x2004CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2004C8u;
            // 0x2004cc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2004B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2004b8;
        }
    }
    ctx->pc = 0x2004D0u;
label_2004d0:
    // 0x2004d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2004d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2004d4:
    // 0x2004d4: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
label_2004d8:
    if (ctx->pc == 0x2004D8u) {
        ctx->pc = 0x2004D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004D4u;
        // 0x2004d8: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2004DCu;
        goto label_2004dc;
    }
    ctx->pc = 0x2004D4u;
    {
        const bool branch_taken_0x2004d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2004d4) {
            ctx->pc = 0x2004D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2004D4u;
            // 0x2004d8: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200524u;
            goto label_200524;
        }
    }
    ctx->pc = 0x2004DCu;
label_2004dc:
    // 0x2004dc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2004dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2004e0:
    // 0x2004e0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2004e4:
    if (ctx->pc == 0x2004E4u) {
        ctx->pc = 0x2004E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004E0u;
        // 0x2004e4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2004E8u;
        goto label_2004e8;
    }
    ctx->pc = 0x2004E0u;
    {
        const bool branch_taken_0x2004e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2004E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004E0u;
        // 0x2004e4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004e0) {
            ctx->pc = 0x2004F0u;
            goto label_2004f0;
        }
    }
    ctx->pc = 0x2004E8u;
label_2004e8:
    // 0x2004e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2004ec:
    if (ctx->pc == 0x2004ECu) {
        ctx->pc = 0x2004ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004E8u;
        // 0x2004ec: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2004F0u;
        goto label_2004f0;
    }
    ctx->pc = 0x2004E8u;
    {
        const bool branch_taken_0x2004e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2004ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004E8u;
        // 0x2004ec: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004e8) {
            ctx->pc = 0x2004F4u;
            goto label_2004f4;
        }
    }
    ctx->pc = 0x2004F0u;
label_2004f0:
    // 0x2004f0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2004f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2004f4:
    // 0x2004f4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2004f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2004f8:
    // 0x2004f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2004fc:
    if (ctx->pc == 0x2004FCu) {
        ctx->pc = 0x2004FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004F8u;
        // 0x2004fc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200500u;
        goto label_200500;
    }
    ctx->pc = 0x2004F8u;
    {
        const bool branch_taken_0x2004f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2004FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004F8u;
        // 0x2004fc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004f8) {
            ctx->pc = 0x200508u;
            goto label_200508;
        }
    }
    ctx->pc = 0x200500u;
label_200500:
    // 0x200500: 0x10000002  b           . + 4 + (0x2 << 2)
label_200504:
    if (ctx->pc == 0x200504u) {
        ctx->pc = 0x200504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200500u;
        // 0x200504: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200508u;
        goto label_200508;
    }
    ctx->pc = 0x200500u;
    {
        const bool branch_taken_0x200500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200500u;
        // 0x200504: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200500) {
            ctx->pc = 0x20050Cu;
            goto label_20050c;
        }
    }
    ctx->pc = 0x200508u;
label_200508:
    // 0x200508: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x200508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_20050c:
    // 0x20050c: 0xc0808b8  jal         func_2022E0
label_200510:
    if (ctx->pc == 0x200510u) {
        ctx->pc = 0x200514u;
        goto label_200514;
    }
    ctx->pc = 0x20050Cu;
    SET_GPR_U32(ctx, 31, 0x200514u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x20050Cu, 0x200514u)) {
        return;
    }
    ctx->pc = 0x200514u;
label_200514:
    // 0x200514: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x200514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_200518:
    // 0x200518: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x200518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_20051c:
    // 0x20051c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20051cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_200520:
    // 0x200520: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x200520u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_200524:
    // 0x200524: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
label_200528:
    if (ctx->pc == 0x200528u) {
        ctx->pc = 0x200528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200524u;
        // 0x200528: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20052Cu;
        goto label_20052c;
    }
    ctx->pc = 0x200524u;
    {
        const bool branch_taken_0x200524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x200528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200524u;
        // 0x200528: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200524) {
            ctx->pc = 0x2005E4u;
            goto label_2005e4;
        }
    }
    ctx->pc = 0x20052Cu;
label_20052c:
    // 0x20052c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x20052cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_200530:
    // 0x200530: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x200530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_200534:
    // 0x200534: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_200538:
    if (ctx->pc == 0x200538u) {
        ctx->pc = 0x200538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200534u;
        // 0x200538: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20053Cu;
        goto label_20053c;
    }
    ctx->pc = 0x200534u;
    {
        const bool branch_taken_0x200534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200534) {
            ctx->pc = 0x200538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200534u;
            // 0x200538: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20055Cu;
            goto label_20055c;
        }
    }
    ctx->pc = 0x20053Cu;
label_20053c:
    // 0x20053c: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_200540:
    if (ctx->pc == 0x200540u) {
        ctx->pc = 0x200540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20053Cu;
        // 0x200540: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200544u;
        goto label_200544;
    }
    ctx->pc = 0x20053Cu;
    {
        const bool branch_taken_0x20053c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x200540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20053Cu;
        // 0x200540: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20053c) {
            ctx->pc = 0x200558u;
            goto label_200558;
        }
    }
    ctx->pc = 0x200544u;
label_200544:
    // 0x200544: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x200544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_200548:
    // 0x200548: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x200548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_20054c:
    // 0x20054c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x20054cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_200550:
    // 0x200550: 0x60f809  jalr        $v1
label_200554:
    if (ctx->pc == 0x200554u) {
        ctx->pc = 0x200554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200550u;
        // 0x200554: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200558u;
        goto label_200558;
    }
    ctx->pc = 0x200550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x200558u);
        ctx->pc = 0x200554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200550u;
        // 0x200554: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200550u, 0x200558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200558u;
label_200558:
    // 0x200558: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x200558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20055c:
    // 0x20055c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_200560:
    if (ctx->pc == 0x200560u) {
        ctx->pc = 0x200560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20055Cu;
        // 0x200560: 0x8e120004  lw          $s2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200564u;
        goto label_200564;
    }
    ctx->pc = 0x20055Cu;
    {
        const bool branch_taken_0x20055c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x200560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20055Cu;
        // 0x200560: 0x8e120004  lw          $s2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20055c) {
            ctx->pc = 0x200588u;
            goto label_200588;
        }
    }
    ctx->pc = 0x200564u;
label_200564:
    // 0x200564: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x200564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_200568:
    // 0x200568: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x200568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20056c:
    // 0x20056c: 0x0  nop
    ctx->pc = 0x20056cu;
    // NOP
label_200570:
    // 0x200570: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_200574:
    if (ctx->pc == 0x200574u) {
        ctx->pc = 0x200578u;
        goto label_200578;
    }
    ctx->pc = 0x200570u;
    {
        const bool branch_taken_0x200570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x200570) {
            ctx->pc = 0x20058Cu;
            goto label_20058c;
        }
    }
    ctx->pc = 0x200578u;
label_200578:
    // 0x200578: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x200578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_20057c:
    // 0x20057c: 0x0  nop
    ctx->pc = 0x20057cu;
    // NOP
label_200580:
    // 0x200580: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
label_200584:
    if (ctx->pc == 0x200584u) {
        ctx->pc = 0x200584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200580u;
        // 0x200584: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200588u;
        goto label_200588;
    }
    ctx->pc = 0x200580u;
    {
        const bool branch_taken_0x200580 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x200580) {
            ctx->pc = 0x200584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200580u;
            // 0x200584: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200570;
        }
    }
    ctx->pc = 0x200588u;
label_200588:
    // 0x200588: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x200588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20058c:
    // 0x20058c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_200590:
    if (ctx->pc == 0x200590u) {
        ctx->pc = 0x200590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20058Cu;
        // 0x200590: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200594u;
        goto label_200594;
    }
    ctx->pc = 0x20058Cu;
    {
        const bool branch_taken_0x20058c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x200590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20058Cu;
        // 0x200590: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20058c) {
            ctx->pc = 0x2005D8u;
            goto label_2005d8;
        }
    }
    ctx->pc = 0x200594u;
label_200594:
    // 0x200594: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x200594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_200598:
    // 0x200598: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_20059c:
    if (ctx->pc == 0x20059Cu) {
        ctx->pc = 0x20059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200598u;
        // 0x20059c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2005A0u;
        goto label_2005a0;
    }
    ctx->pc = 0x200598u;
    {
        const bool branch_taken_0x200598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200598u;
        // 0x20059c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200598) {
            ctx->pc = 0x2005A8u;
            goto label_2005a8;
        }
    }
    ctx->pc = 0x2005A0u;
label_2005a0:
    // 0x2005a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2005a4:
    if (ctx->pc == 0x2005A4u) {
        ctx->pc = 0x2005A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005A0u;
        // 0x2005a4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2005A8u;
        goto label_2005a8;
    }
    ctx->pc = 0x2005A0u;
    {
        const bool branch_taken_0x2005a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2005A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005A0u;
        // 0x2005a4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2005a0) {
            ctx->pc = 0x2005ACu;
            goto label_2005ac;
        }
    }
    ctx->pc = 0x2005A8u;
label_2005a8:
    // 0x2005a8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2005a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2005ac:
    // 0x2005ac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2005acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2005b0:
    // 0x2005b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2005b4:
    if (ctx->pc == 0x2005B4u) {
        ctx->pc = 0x2005B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005B0u;
        // 0x2005b4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2005B8u;
        goto label_2005b8;
    }
    ctx->pc = 0x2005B0u;
    {
        const bool branch_taken_0x2005b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2005B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005B0u;
        // 0x2005b4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2005b0) {
            ctx->pc = 0x2005C0u;
            goto label_2005c0;
        }
    }
    ctx->pc = 0x2005B8u;
label_2005b8:
    // 0x2005b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2005bc:
    if (ctx->pc == 0x2005BCu) {
        ctx->pc = 0x2005BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005B8u;
        // 0x2005bc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2005C0u;
        goto label_2005c0;
    }
    ctx->pc = 0x2005B8u;
    {
        const bool branch_taken_0x2005b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2005BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005B8u;
        // 0x2005bc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2005b8) {
            ctx->pc = 0x2005C4u;
            goto label_2005c4;
        }
    }
    ctx->pc = 0x2005C0u;
label_2005c0:
    // 0x2005c0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2005c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_2005c4:
    // 0x2005c4: 0xc0808b8  jal         func_2022E0
label_2005c8:
    if (ctx->pc == 0x2005C8u) {
        ctx->pc = 0x2005C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005C4u;
        // 0x2005c8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2005CCu;
        goto label_2005cc;
    }
    ctx->pc = 0x2005C4u;
    SET_GPR_U32(ctx, 31, 0x2005CCu);
    ctx->pc = 0x2005C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2005C4u;
    // 0x2005c8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2005C4u, 0x2005CCu)) {
        return;
    }
    ctx->pc = 0x2005CCu;
label_2005cc:
    // 0x2005cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2005ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2005d0:
    // 0x2005d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2005d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2005d4:
    // 0x2005d4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2005d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2005d8:
    // 0x2005d8: 0x5600ffd5  bnel        $s0, $zero, . + 4 + (-0x2B << 2)
label_2005dc:
    if (ctx->pc == 0x2005DCu) {
        ctx->pc = 0x2005DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005D8u;
        // 0x2005dc: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2005E0u;
        goto label_2005e0;
    }
    ctx->pc = 0x2005D8u;
    {
        const bool branch_taken_0x2005d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2005d8) {
            ctx->pc = 0x2005DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2005D8u;
            // 0x2005dc: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200530;
        }
    }
    ctx->pc = 0x2005E0u;
label_2005e0:
    // 0x2005e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2005e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2005e4:
    // 0x2005e4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2005e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2005e8:
    // 0x2005e8: 0x24423848  addiu       $v0, $v0, 0x3848
    ctx->pc = 0x2005e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14408));
label_2005ec:
    // 0x2005ec: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_2005f0:
    if (ctx->pc == 0x2005F0u) {
        ctx->pc = 0x2005F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005ECu;
        // 0x2005f0: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2005F4u;
        goto label_2005f4;
    }
    ctx->pc = 0x2005ECu;
    {
        const bool branch_taken_0x2005ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2005F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005ECu;
        // 0x2005f0: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2005ec) {
            ctx->pc = 0x200650u;
            goto label_200650;
        }
    }
    ctx->pc = 0x2005F4u;
label_2005f4:
    // 0x2005f4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2005f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2005f8:
    // 0x2005f8: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
label_2005fc:
    if (ctx->pc == 0x2005FCu) {
        ctx->pc = 0x2005FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005F8u;
        // 0x2005fc: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200600u;
        goto label_200600;
    }
    ctx->pc = 0x2005F8u;
    {
        const bool branch_taken_0x2005f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2005f8) {
            ctx->pc = 0x2005FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2005F8u;
            // 0x2005fc: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200648u;
            goto label_200648;
        }
    }
    ctx->pc = 0x200600u;
label_200600:
    // 0x200600: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x200600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_200604:
    // 0x200604: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_200608:
    if (ctx->pc == 0x200608u) {
        ctx->pc = 0x200608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200604u;
        // 0x200608: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20060Cu;
        goto label_20060c;
    }
    ctx->pc = 0x200604u;
    {
        const bool branch_taken_0x200604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200604u;
        // 0x200608: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200604) {
            ctx->pc = 0x200614u;
            goto label_200614;
        }
    }
    ctx->pc = 0x20060Cu;
label_20060c:
    // 0x20060c: 0x10000002  b           . + 4 + (0x2 << 2)
label_200610:
    if (ctx->pc == 0x200610u) {
        ctx->pc = 0x200610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20060Cu;
        // 0x200610: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200614u;
        goto label_200614;
    }
    ctx->pc = 0x20060Cu;
    {
        const bool branch_taken_0x20060c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20060Cu;
        // 0x200610: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20060c) {
            ctx->pc = 0x200618u;
            goto label_200618;
        }
    }
    ctx->pc = 0x200614u;
label_200614:
    // 0x200614: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x200614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_200618:
    // 0x200618: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x200618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_20061c:
    // 0x20061c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_200620:
    if (ctx->pc == 0x200620u) {
        ctx->pc = 0x200620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20061Cu;
        // 0x200620: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200624u;
        goto label_200624;
    }
    ctx->pc = 0x20061Cu;
    {
        const bool branch_taken_0x20061c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20061Cu;
        // 0x200620: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20061c) {
            ctx->pc = 0x20062Cu;
            goto label_20062c;
        }
    }
    ctx->pc = 0x200624u;
label_200624:
    // 0x200624: 0x10000002  b           . + 4 + (0x2 << 2)
label_200628:
    if (ctx->pc == 0x200628u) {
        ctx->pc = 0x200628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200624u;
        // 0x200628: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20062Cu;
        goto label_20062c;
    }
    ctx->pc = 0x200624u;
    {
        const bool branch_taken_0x200624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200624u;
        // 0x200628: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200624) {
            ctx->pc = 0x200630u;
            goto label_200630;
        }
    }
    ctx->pc = 0x20062Cu;
label_20062c:
    // 0x20062c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x20062cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_200630:
    // 0x200630: 0xc0808b8  jal         func_2022E0
label_200634:
    if (ctx->pc == 0x200634u) {
        ctx->pc = 0x200638u;
        goto label_200638;
    }
    ctx->pc = 0x200630u;
    SET_GPR_U32(ctx, 31, 0x200638u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x200630u, 0x200638u)) {
        return;
    }
    ctx->pc = 0x200638u;
label_200638:
    // 0x200638: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x200638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20063c:
    // 0x20063c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20063cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_200640:
    // 0x200640: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x200640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_200644:
    // 0x200644: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x200644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_200648:
    // 0x200648: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
label_20064c:
    if (ctx->pc == 0x20064Cu) {
        ctx->pc = 0x20064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200648u;
        // 0x20064c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200650u;
        goto label_200650;
    }
    ctx->pc = 0x200648u;
    {
        const bool branch_taken_0x200648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200648) {
            ctx->pc = 0x20064Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200648u;
            // 0x20064c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2005F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2005f8;
        }
    }
    ctx->pc = 0x200650u;
label_200650:
    // 0x200650: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_200654:
    if (ctx->pc == 0x200654u) {
        ctx->pc = 0x200654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200650u;
        // 0x200654: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200658u;
        goto label_200658;
    }
    ctx->pc = 0x200650u;
    {
        const bool branch_taken_0x200650 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x200654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200650u;
        // 0x200654: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200650) {
            ctx->pc = 0x200664u;
            goto label_200664;
        }
    }
    ctx->pc = 0x200658u;
label_200658:
    // 0x200658: 0xc0808b8  jal         func_2022E0
label_20065c:
    if (ctx->pc == 0x20065Cu) {
        ctx->pc = 0x20065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200658u;
        // 0x20065c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200660u;
        goto label_200660;
    }
    ctx->pc = 0x200658u;
    SET_GPR_U32(ctx, 31, 0x200660u);
    ctx->pc = 0x20065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200658u;
    // 0x20065c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x200658u, 0x200660u)) {
        return;
    }
    ctx->pc = 0x200660u;
label_200660:
    // 0x200660: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x200660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_200664:
    // 0x200664: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x200664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_200668:
    // 0x200668: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x200668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20066c:
    // 0x20066c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x20066cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_200670:
    // 0x200670: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x200670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_200674:
    // 0x200674: 0x3e00008  jr          $ra
label_200678:
    if (ctx->pc == 0x200678u) {
        ctx->pc = 0x200678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200674u;
        // 0x200678: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20067Cu;
        goto label_20067c;
    }
    ctx->pc = 0x200674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200674u;
        // 0x200678: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20067Cu;
label_20067c:
    // 0x20067c: 0x0  nop
    ctx->pc = 0x20067cu;
    // NOP
    ctx->pc = 0x200680u;
}
