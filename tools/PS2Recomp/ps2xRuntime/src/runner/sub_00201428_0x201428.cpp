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

// Function: sub_00201428
// Address: 0x201428 - 0x2015c8
void sub_00201428_0x201428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201428_0x201428");
#endif

    switch (ctx->pc) {
        case 0x201428u: goto label_201428;
        case 0x20142cu: goto label_20142c;
        case 0x201430u: goto label_201430;
        case 0x201434u: goto label_201434;
        case 0x201438u: goto label_201438;
        case 0x20143cu: goto label_20143c;
        case 0x201440u: goto label_201440;
        case 0x201444u: goto label_201444;
        case 0x201448u: goto label_201448;
        case 0x20144cu: goto label_20144c;
        case 0x201450u: goto label_201450;
        case 0x201454u: goto label_201454;
        case 0x201458u: goto label_201458;
        case 0x20145cu: goto label_20145c;
        case 0x201460u: goto label_201460;
        case 0x201464u: goto label_201464;
        case 0x201468u: goto label_201468;
        case 0x20146cu: goto label_20146c;
        case 0x201470u: goto label_201470;
        case 0x201474u: goto label_201474;
        case 0x201478u: goto label_201478;
        case 0x20147cu: goto label_20147c;
        case 0x201480u: goto label_201480;
        case 0x201484u: goto label_201484;
        case 0x201488u: goto label_201488;
        case 0x20148cu: goto label_20148c;
        case 0x201490u: goto label_201490;
        case 0x201494u: goto label_201494;
        case 0x201498u: goto label_201498;
        case 0x20149cu: goto label_20149c;
        case 0x2014a0u: goto label_2014a0;
        case 0x2014a4u: goto label_2014a4;
        case 0x2014a8u: goto label_2014a8;
        case 0x2014acu: goto label_2014ac;
        case 0x2014b0u: goto label_2014b0;
        case 0x2014b4u: goto label_2014b4;
        case 0x2014b8u: goto label_2014b8;
        case 0x2014bcu: goto label_2014bc;
        case 0x2014c0u: goto label_2014c0;
        case 0x2014c4u: goto label_2014c4;
        case 0x2014c8u: goto label_2014c8;
        case 0x2014ccu: goto label_2014cc;
        case 0x2014d0u: goto label_2014d0;
        case 0x2014d4u: goto label_2014d4;
        case 0x2014d8u: goto label_2014d8;
        case 0x2014dcu: goto label_2014dc;
        case 0x2014e0u: goto label_2014e0;
        case 0x2014e4u: goto label_2014e4;
        case 0x2014e8u: goto label_2014e8;
        case 0x2014ecu: goto label_2014ec;
        case 0x2014f0u: goto label_2014f0;
        case 0x2014f4u: goto label_2014f4;
        case 0x2014f8u: goto label_2014f8;
        case 0x2014fcu: goto label_2014fc;
        case 0x201500u: goto label_201500;
        case 0x201504u: goto label_201504;
        case 0x201508u: goto label_201508;
        case 0x20150cu: goto label_20150c;
        case 0x201510u: goto label_201510;
        case 0x201514u: goto label_201514;
        case 0x201518u: goto label_201518;
        case 0x20151cu: goto label_20151c;
        case 0x201520u: goto label_201520;
        case 0x201524u: goto label_201524;
        case 0x201528u: goto label_201528;
        case 0x20152cu: goto label_20152c;
        case 0x201530u: goto label_201530;
        case 0x201534u: goto label_201534;
        case 0x201538u: goto label_201538;
        case 0x20153cu: goto label_20153c;
        case 0x201540u: goto label_201540;
        case 0x201544u: goto label_201544;
        case 0x201548u: goto label_201548;
        case 0x20154cu: goto label_20154c;
        case 0x201550u: goto label_201550;
        case 0x201554u: goto label_201554;
        case 0x201558u: goto label_201558;
        case 0x20155cu: goto label_20155c;
        case 0x201560u: goto label_201560;
        case 0x201564u: goto label_201564;
        case 0x201568u: goto label_201568;
        case 0x20156cu: goto label_20156c;
        case 0x201570u: goto label_201570;
        case 0x201574u: goto label_201574;
        case 0x201578u: goto label_201578;
        case 0x20157cu: goto label_20157c;
        case 0x201580u: goto label_201580;
        case 0x201584u: goto label_201584;
        case 0x201588u: goto label_201588;
        case 0x20158cu: goto label_20158c;
        case 0x201590u: goto label_201590;
        case 0x201594u: goto label_201594;
        case 0x201598u: goto label_201598;
        case 0x20159cu: goto label_20159c;
        case 0x2015a0u: goto label_2015a0;
        case 0x2015a4u: goto label_2015a4;
        case 0x2015a8u: goto label_2015a8;
        case 0x2015acu: goto label_2015ac;
        case 0x2015b0u: goto label_2015b0;
        case 0x2015b4u: goto label_2015b4;
        case 0x2015b8u: goto label_2015b8;
        case 0x2015bcu: goto label_2015bc;
        case 0x2015c0u: goto label_2015c0;
        case 0x2015c4u: goto label_2015c4;
        default: break;
    }

    ctx->pc = 0x201428u;

label_201428:
    // 0x201428: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x201428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
label_20142c:
    // 0x20142c: 0x7fb00260  sq          $s0, 0x260($sp)
    ctx->pc = 0x20142cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 16));
label_201430:
    // 0x201430: 0x7fb10250  sq          $s1, 0x250($sp)
    ctx->pc = 0x201430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 17));
label_201434:
    // 0x201434: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x201434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201438:
    // 0x201438: 0x7fb20240  sq          $s2, 0x240($sp)
    ctx->pc = 0x201438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 18));
label_20143c:
    // 0x20143c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20143cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201440:
    // 0x201440: 0x7fb30230  sq          $s3, 0x230($sp)
    ctx->pc = 0x201440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 19));
label_201444:
    // 0x201444: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x201444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_201448:
    // 0x201448: 0x7fb40220  sq          $s4, 0x220($sp)
    ctx->pc = 0x201448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 20));
label_20144c:
    // 0x20144c: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x20144cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
label_201450:
    // 0x201450: 0x7fb50210  sq          $s5, 0x210($sp)
    ctx->pc = 0x201450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 21));
label_201454:
    // 0x201454: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x201454u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_201458:
    // 0x201458: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x201458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
label_20145c:
    // 0x20145c: 0x24a50170  addiu       $a1, $a1, 0x170
    ctx->pc = 0x20145cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 368));
label_201460:
    // 0x201460: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x201460u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_201464:
    // 0x201464: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x201464u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_201468:
    // 0x201468: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x201468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_20146c:
    // 0x20146c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x20146cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_201470:
    // 0x201470: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x201470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_201474:
    // 0x201474: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x201474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_201478:
    // 0x201478: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x201478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20147c:
    // 0x20147c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20147cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201480:
    // 0x201480: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x201480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_201484:
    // 0x201484: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x201484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_201488:
    // 0x201488: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x201488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20148c:
    // 0x20148c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20148cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_201490:
    // 0x201490: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
label_201494:
    if (ctx->pc == 0x201494u) {
        ctx->pc = 0x201494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201490u;
        // 0x201494: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201498u;
        goto label_201498;
    }
    ctx->pc = 0x201490u;
    {
        const bool branch_taken_0x201490 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x201494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201490u;
        // 0x201494: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201490) {
            ctx->pc = 0x2014FCu;
            goto label_2014fc;
        }
    }
    ctx->pc = 0x201498u;
label_201498:
    // 0x201498: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x201498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_20149c:
    // 0x20149c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20149cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2014a0:
    // 0x2014a0: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x2014a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_2014a4:
    // 0x2014a4: 0x0  nop
    ctx->pc = 0x2014a4u;
    // NOP
label_2014a8:
    // 0x2014a8: 0x24a40028  addiu       $a0, $a1, 0x28
    ctx->pc = 0x2014a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
label_2014ac:
    // 0x2014ac: 0x1447000e  bne         $v0, $a3, . + 4 + (0xE << 2)
label_2014b0:
    if (ctx->pc == 0x2014B0u) {
        ctx->pc = 0x2014B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014ACu;
        // 0x2014b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2014B4u;
        goto label_2014b4;
    }
    ctx->pc = 0x2014ACu;
    {
        const bool branch_taken_0x2014ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x2014B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014ACu;
        // 0x2014b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2014ac) {
            ctx->pc = 0x2014E8u;
            goto label_2014e8;
        }
    }
    ctx->pc = 0x2014B4u;
label_2014b4:
    // 0x2014b4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2014b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2014b8:
    // 0x2014b8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2014b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2014bc:
    // 0x2014bc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_2014c0:
    if (ctx->pc == 0x2014C0u) {
        ctx->pc = 0x2014C4u;
        goto label_2014c4;
    }
    ctx->pc = 0x2014BCu;
    {
        const bool branch_taken_0x2014bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2014bc) {
            ctx->pc = 0x2014E8u;
            goto label_2014e8;
        }
    }
    ctx->pc = 0x2014C4u;
label_2014c4:
    // 0x2014c4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2014c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2014c8:
    // 0x2014c8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2014c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2014cc:
    // 0x2014cc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_2014d0:
    if (ctx->pc == 0x2014D0u) {
        ctx->pc = 0x2014D4u;
        goto label_2014d4;
    }
    ctx->pc = 0x2014CCu;
    {
        const bool branch_taken_0x2014cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2014cc) {
            ctx->pc = 0x2014E8u;
            goto label_2014e8;
        }
    }
    ctx->pc = 0x2014D4u;
label_2014d4:
    // 0x2014d4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2014d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2014d8:
    // 0x2014d8: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x2014d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2014dc:
    // 0x2014dc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2014dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2014e0:
    // 0x2014e0: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x2014e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_2014e4:
    // 0x2014e4: 0x3300b  movn        $a2, $zero, $v1
    ctx->pc = 0x2014e4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0));
label_2014e8:
    // 0x2014e8: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
label_2014ec:
    if (ctx->pc == 0x2014ECu) {
        ctx->pc = 0x2014ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014E8u;
        // 0x2014ec: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2014F0u;
        goto label_2014f0;
    }
    ctx->pc = 0x2014E8u;
    {
        const bool branch_taken_0x2014e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2014ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014E8u;
        // 0x2014ec: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2014e8) {
            ctx->pc = 0x201500u;
            goto label_201500;
        }
    }
    ctx->pc = 0x2014F0u;
label_2014f0:
    // 0x2014f0: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2014f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2014f4:
    // 0x2014f4: 0x54a0ffec  bnel        $a1, $zero, . + 4 + (-0x14 << 2)
label_2014f8:
    if (ctx->pc == 0x2014F8u) {
        ctx->pc = 0x2014F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014F4u;
        // 0x2014f8: 0x8ca20028  lw          $v0, 0x28($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2014FCu;
        goto label_2014fc;
    }
    ctx->pc = 0x2014F4u;
    {
        const bool branch_taken_0x2014f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2014f4) {
            ctx->pc = 0x2014F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2014F4u;
            // 0x2014f8: 0x8ca20028  lw          $v0, 0x28($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2014A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2014a8;
        }
    }
    ctx->pc = 0x2014FCu;
label_2014fc:
    // 0x2014fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2014fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201500:
    // 0x201500: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_201504:
    if (ctx->pc == 0x201504u) {
        ctx->pc = 0x201504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201500u;
        // 0x201504: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201508u;
        goto label_201508;
    }
    ctx->pc = 0x201500u;
    {
        const bool branch_taken_0x201500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201500u;
        // 0x201504: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201500) {
            ctx->pc = 0x201568u;
            goto label_201568;
        }
    }
    ctx->pc = 0x201508u;
label_201508:
    // 0x201508: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x201508u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_20150c:
    // 0x20150c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x20150cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_201510:
    // 0x201510: 0x2610108c  addiu       $s0, $s0, 0x108C
    ctx->pc = 0x201510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4236));
label_201514:
    // 0x201514: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x201514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_201518:
    // 0x201518: 0x40f809  jalr        $v0
label_20151c:
    if (ctx->pc == 0x20151Cu) {
        ctx->pc = 0x20151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201518u;
        // 0x20151c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201520u;
        goto label_201520;
    }
    ctx->pc = 0x201518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201520u);
        ctx->pc = 0x20151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201518u;
        // 0x20151c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201518u, 0x201520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201520u;
label_201520:
    // 0x201520: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x201520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_201524:
    // 0x201524: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x201524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_201528:
    // 0x201528: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x201528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20152c:
    // 0x20152c: 0x40f809  jalr        $v0
label_201530:
    if (ctx->pc == 0x201530u) {
        ctx->pc = 0x201530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20152Cu;
        // 0x201530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201534u;
        goto label_201534;
    }
    ctx->pc = 0x20152Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201534u);
        ctx->pc = 0x201530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20152Cu;
        // 0x201530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20152Cu, 0x201534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201534u;
label_201534:
    // 0x201534: 0xc081772  jal         func_205DC8
label_201538:
    if (ctx->pc == 0x201538u) {
        ctx->pc = 0x201538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201534u;
        // 0x201538: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20153Cu;
        goto label_20153c;
    }
    ctx->pc = 0x201534u;
    SET_GPR_U32(ctx, 31, 0x20153Cu);
    ctx->pc = 0x201538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201534u;
    // 0x201538: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205DC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205DC8u, 0x201534u, 0x20153Cu)) {
        return;
    }
    ctx->pc = 0x20153Cu;
label_20153c:
    // 0x20153c: 0xc081772  jal         func_205DC8
label_201540:
    if (ctx->pc == 0x201540u) {
        ctx->pc = 0x201540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20153Cu;
        // 0x201540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201544u;
        goto label_201544;
    }
    ctx->pc = 0x20153Cu;
    SET_GPR_U32(ctx, 31, 0x201544u);
    ctx->pc = 0x201540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20153Cu;
    // 0x201540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205DC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205DC8u, 0x20153Cu, 0x201544u)) {
        return;
    }
    ctx->pc = 0x201544u;
label_201544:
    // 0x201544: 0xc0817b4  jal         func_205ED0
label_201548:
    if (ctx->pc == 0x201548u) {
        ctx->pc = 0x201548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201544u;
        // 0x201548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20154Cu;
        goto label_20154c;
    }
    ctx->pc = 0x201544u;
    SET_GPR_U32(ctx, 31, 0x20154Cu);
    ctx->pc = 0x201548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201544u;
    // 0x201548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205ED0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205ED0u, 0x201544u, 0x20154Cu)) {
        return;
    }
    ctx->pc = 0x20154Cu;
label_20154c:
    // 0x20154c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20154cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_201550:
    // 0x201550: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x201550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201554:
    // 0x201554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201558:
    // 0x201558: 0xc081444  jal         func_205110
label_20155c:
    if (ctx->pc == 0x20155Cu) {
        ctx->pc = 0x20155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201558u;
        // 0x20155c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201560u;
        goto label_201560;
    }
    ctx->pc = 0x201558u;
    SET_GPR_U32(ctx, 31, 0x201560u);
    ctx->pc = 0x20155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201558u;
    // 0x20155c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205110u, 0x201558u, 0x201560u)) {
        return;
    }
    ctx->pc = 0x201560u;
label_201560:
    // 0x201560: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x201560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201564:
    // 0x201564: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x201564u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201568:
    // 0x201568: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x201568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20156c:
    // 0x20156c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20156cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_201570:
    // 0x201570: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x201570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_201574:
    // 0x201574: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x201574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_201578:
    // 0x201578: 0xc080404  jal         func_201010
label_20157c:
    if (ctx->pc == 0x20157Cu) {
        ctx->pc = 0x20157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201578u;
        // 0x20157c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201580u;
        goto label_201580;
    }
    ctx->pc = 0x201578u;
    SET_GPR_U32(ctx, 31, 0x201580u);
    ctx->pc = 0x20157Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201578u;
    // 0x20157c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201010u, 0x201578u, 0x201580u)) {
        return;
    }
    ctx->pc = 0x201580u;
label_201580:
    // 0x201580: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_201584:
    if (ctx->pc == 0x201584u) {
        ctx->pc = 0x201584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201580u;
        // 0x201584: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201588u;
        goto label_201588;
    }
    ctx->pc = 0x201580u;
    {
        const bool branch_taken_0x201580 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x201584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201580u;
        // 0x201584: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201580) {
            ctx->pc = 0x201590u;
            goto label_201590;
        }
    }
    ctx->pc = 0x201588u;
label_201588:
    // 0x201588: 0xc0817e6  jal         func_205F98
label_20158c:
    if (ctx->pc == 0x20158Cu) {
        ctx->pc = 0x20158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201588u;
        // 0x20158c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201590u;
        goto label_201590;
    }
    ctx->pc = 0x201588u;
    SET_GPR_U32(ctx, 31, 0x201590u);
    ctx->pc = 0x20158Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201588u;
    // 0x20158c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205F98u, 0x201588u, 0x201590u)) {
        return;
    }
    ctx->pc = 0x201590u;
label_201590:
    // 0x201590: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x201590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201594:
    // 0x201594: 0x7bb10250  lq          $s1, 0x250($sp)
    ctx->pc = 0x201594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_201598:
    // 0x201598: 0x7bb00260  lq          $s0, 0x260($sp)
    ctx->pc = 0x201598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_20159c:
    // 0x20159c: 0x7bb20240  lq          $s2, 0x240($sp)
    ctx->pc = 0x20159cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_2015a0:
    // 0x2015a0: 0x7bb30230  lq          $s3, 0x230($sp)
    ctx->pc = 0x2015a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_2015a4:
    // 0x2015a4: 0x7bb40220  lq          $s4, 0x220($sp)
    ctx->pc = 0x2015a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_2015a8:
    // 0x2015a8: 0x7bb50210  lq          $s5, 0x210($sp)
    ctx->pc = 0x2015a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_2015ac:
    // 0x2015ac: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x2015acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_2015b0:
    // 0x2015b0: 0x3e00008  jr          $ra
label_2015b4:
    if (ctx->pc == 0x2015B4u) {
        ctx->pc = 0x2015B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2015B0u;
        // 0x2015b4: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2015B8u;
        goto label_2015b8;
    }
    ctx->pc = 0x2015B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2015B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2015B0u;
        // 0x2015b4: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2015B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2015B8u;
label_2015b8:
    // 0x2015b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2015b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2015bc:
    // 0x2015bc: 0x0  nop
    ctx->pc = 0x2015bcu;
    // NOP
label_2015c0:
    // 0x2015c0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2015c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2015c4:
    // 0x2015c4: 0x0  nop
    ctx->pc = 0x2015c4u;
    // NOP
    ctx->pc = 0x2015c8u;
}
