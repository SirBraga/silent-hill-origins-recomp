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

// Function: sub_00169498
// Address: 0x169498 - 0x169628
void sub_00169498_0x169498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169498_0x169498");
#endif

    switch (ctx->pc) {
        case 0x169498u: goto label_169498;
        case 0x16949cu: goto label_16949c;
        case 0x1694a0u: goto label_1694a0;
        case 0x1694a4u: goto label_1694a4;
        case 0x1694a8u: goto label_1694a8;
        case 0x1694acu: goto label_1694ac;
        case 0x1694b0u: goto label_1694b0;
        case 0x1694b4u: goto label_1694b4;
        case 0x1694b8u: goto label_1694b8;
        case 0x1694bcu: goto label_1694bc;
        case 0x1694c0u: goto label_1694c0;
        case 0x1694c4u: goto label_1694c4;
        case 0x1694c8u: goto label_1694c8;
        case 0x1694ccu: goto label_1694cc;
        case 0x1694d0u: goto label_1694d0;
        case 0x1694d4u: goto label_1694d4;
        case 0x1694d8u: goto label_1694d8;
        case 0x1694dcu: goto label_1694dc;
        case 0x1694e0u: goto label_1694e0;
        case 0x1694e4u: goto label_1694e4;
        case 0x1694e8u: goto label_1694e8;
        case 0x1694ecu: goto label_1694ec;
        case 0x1694f0u: goto label_1694f0;
        case 0x1694f4u: goto label_1694f4;
        case 0x1694f8u: goto label_1694f8;
        case 0x1694fcu: goto label_1694fc;
        case 0x169500u: goto label_169500;
        case 0x169504u: goto label_169504;
        case 0x169508u: goto label_169508;
        case 0x16950cu: goto label_16950c;
        case 0x169510u: goto label_169510;
        case 0x169514u: goto label_169514;
        case 0x169518u: goto label_169518;
        case 0x16951cu: goto label_16951c;
        case 0x169520u: goto label_169520;
        case 0x169524u: goto label_169524;
        case 0x169528u: goto label_169528;
        case 0x16952cu: goto label_16952c;
        case 0x169530u: goto label_169530;
        case 0x169534u: goto label_169534;
        case 0x169538u: goto label_169538;
        case 0x16953cu: goto label_16953c;
        case 0x169540u: goto label_169540;
        case 0x169544u: goto label_169544;
        case 0x169548u: goto label_169548;
        case 0x16954cu: goto label_16954c;
        case 0x169550u: goto label_169550;
        case 0x169554u: goto label_169554;
        case 0x169558u: goto label_169558;
        case 0x16955cu: goto label_16955c;
        case 0x169560u: goto label_169560;
        case 0x169564u: goto label_169564;
        case 0x169568u: goto label_169568;
        case 0x16956cu: goto label_16956c;
        case 0x169570u: goto label_169570;
        case 0x169574u: goto label_169574;
        case 0x169578u: goto label_169578;
        case 0x16957cu: goto label_16957c;
        case 0x169580u: goto label_169580;
        case 0x169584u: goto label_169584;
        case 0x169588u: goto label_169588;
        case 0x16958cu: goto label_16958c;
        case 0x169590u: goto label_169590;
        case 0x169594u: goto label_169594;
        case 0x169598u: goto label_169598;
        case 0x16959cu: goto label_16959c;
        case 0x1695a0u: goto label_1695a0;
        case 0x1695a4u: goto label_1695a4;
        case 0x1695a8u: goto label_1695a8;
        case 0x1695acu: goto label_1695ac;
        case 0x1695b0u: goto label_1695b0;
        case 0x1695b4u: goto label_1695b4;
        case 0x1695b8u: goto label_1695b8;
        case 0x1695bcu: goto label_1695bc;
        case 0x1695c0u: goto label_1695c0;
        case 0x1695c4u: goto label_1695c4;
        case 0x1695c8u: goto label_1695c8;
        case 0x1695ccu: goto label_1695cc;
        case 0x1695d0u: goto label_1695d0;
        case 0x1695d4u: goto label_1695d4;
        case 0x1695d8u: goto label_1695d8;
        case 0x1695dcu: goto label_1695dc;
        case 0x1695e0u: goto label_1695e0;
        case 0x1695e4u: goto label_1695e4;
        case 0x1695e8u: goto label_1695e8;
        case 0x1695ecu: goto label_1695ec;
        case 0x1695f0u: goto label_1695f0;
        case 0x1695f4u: goto label_1695f4;
        case 0x1695f8u: goto label_1695f8;
        case 0x1695fcu: goto label_1695fc;
        case 0x169600u: goto label_169600;
        case 0x169604u: goto label_169604;
        case 0x169608u: goto label_169608;
        case 0x16960cu: goto label_16960c;
        case 0x169610u: goto label_169610;
        case 0x169614u: goto label_169614;
        case 0x169618u: goto label_169618;
        case 0x16961cu: goto label_16961c;
        case 0x169620u: goto label_169620;
        case 0x169624u: goto label_169624;
        default: break;
    }

    ctx->pc = 0x169498u;

label_169498:
    // 0x169498: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x169498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_16949c:
    // 0x16949c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x16949cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1694a0:
    // 0x1694a0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1694a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1694a4:
    // 0x1694a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1694a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1694a8:
    // 0x1694a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1694a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1694ac:
    // 0x1694ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1694acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1694b0:
    // 0x1694b0: 0xc04f0bc  jal         func_13C2F0
label_1694b4:
    if (ctx->pc == 0x1694B4u) {
        ctx->pc = 0x1694B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694B0u;
        // 0x1694b4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1694B8u;
        goto label_1694b8;
    }
    ctx->pc = 0x1694B0u;
    SET_GPR_U32(ctx, 31, 0x1694B8u);
    ctx->pc = 0x1694B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1694B0u;
    // 0x1694b4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x1694B0u, 0x1694B8u)) {
        return;
    }
    ctx->pc = 0x1694B8u;
label_1694b8:
    // 0x1694b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1694b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1694bc:
    // 0x1694bc: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x1694bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_1694c0:
    // 0x1694c0: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
label_1694c4:
    if (ctx->pc == 0x1694C4u) {
        ctx->pc = 0x1694C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694C0u;
        // 0x1694c4: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1694C8u;
        goto label_1694c8;
    }
    ctx->pc = 0x1694C0u;
    {
        const bool branch_taken_0x1694c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1694c0) {
            ctx->pc = 0x1694C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1694C0u;
            // 0x1694c4: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1694D4u;
            goto label_1694d4;
        }
    }
    ctx->pc = 0x1694C8u;
label_1694c8:
    // 0x1694c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1694c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1694cc:
    // 0x1694cc: 0x10000050  b           . + 4 + (0x50 << 2)
label_1694d0:
    if (ctx->pc == 0x1694D0u) {
        ctx->pc = 0x1694D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694CCu;
        // 0x1694d0: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1694D4u;
        goto label_1694d4;
    }
    ctx->pc = 0x1694CCu;
    {
        const bool branch_taken_0x1694cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1694D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694CCu;
        // 0x1694d0: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694cc) {
            ctx->pc = 0x169610u;
            goto label_169610;
        }
    }
    ctx->pc = 0x1694D4u;
label_1694d4:
    // 0x1694d4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_1694d8:
    if (ctx->pc == 0x1694D8u) {
        ctx->pc = 0x1694D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694D4u;
        // 0x1694d8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1694DCu;
        goto label_1694dc;
    }
    ctx->pc = 0x1694D4u;
    {
        const bool branch_taken_0x1694d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1694D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694D4u;
        // 0x1694d8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694d4) {
            ctx->pc = 0x1694E4u;
            goto label_1694e4;
        }
    }
    ctx->pc = 0x1694DCu;
label_1694dc:
    // 0x1694dc: 0x1000004c  b           . + 4 + (0x4C << 2)
label_1694e0:
    if (ctx->pc == 0x1694E0u) {
        ctx->pc = 0x1694E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694DCu;
        // 0x1694e0: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1694E4u;
        goto label_1694e4;
    }
    ctx->pc = 0x1694DCu;
    {
        const bool branch_taken_0x1694dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1694E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694DCu;
        // 0x1694e0: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694dc) {
            ctx->pc = 0x169610u;
            goto label_169610;
        }
    }
    ctx->pc = 0x1694E4u;
label_1694e4:
    // 0x1694e4: 0x8c4346c8  lw          $v1, 0x46C8($v0)
    ctx->pc = 0x1694e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18120)));
label_1694e8:
    // 0x1694e8: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_1694ec:
    if (ctx->pc == 0x1694ECu) {
        ctx->pc = 0x1694ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694E8u;
        // 0x1694ec: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1694F0u;
        goto label_1694f0;
    }
    ctx->pc = 0x1694E8u;
    {
        const bool branch_taken_0x1694e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1694ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694E8u;
        // 0x1694ec: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694e8) {
            ctx->pc = 0x169508u;
            goto label_169508;
        }
    }
    ctx->pc = 0x1694F0u;
label_1694f0:
    // 0x1694f0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1694f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1694f4:
    // 0x1694f4: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1694f8:
    if (ctx->pc == 0x1694F8u) {
        ctx->pc = 0x1694F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694F4u;
        // 0x1694f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1694FCu;
        goto label_1694fc;
    }
    ctx->pc = 0x1694F4u;
    {
        const bool branch_taken_0x1694f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1694F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694F4u;
        // 0x1694f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694f4) {
            ctx->pc = 0x169500u;
            goto label_169500;
        }
    }
    ctx->pc = 0x1694FCu;
label_1694fc:
    // 0x1694fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1694fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_169500:
    // 0x169500: 0x10000043  b           . + 4 + (0x43 << 2)
label_169504:
    if (ctx->pc == 0x169504u) {
        ctx->pc = 0x169504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169500u;
        // 0x169504: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169508u;
        goto label_169508;
    }
    ctx->pc = 0x169500u;
    {
        const bool branch_taken_0x169500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169500u;
        // 0x169504: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169500) {
            ctx->pc = 0x169610u;
            goto label_169610;
        }
    }
    ctx->pc = 0x169508u;
label_169508:
    // 0x169508: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x169508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
label_16950c:
    // 0x16950c: 0x54830041  bnel        $a0, $v1, . + 4 + (0x41 << 2)
label_169510:
    if (ctx->pc == 0x169510u) {
        ctx->pc = 0x169510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16950Cu;
        // 0x169510: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169514u;
        goto label_169514;
    }
    ctx->pc = 0x16950Cu;
    {
        const bool branch_taken_0x16950c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16950c) {
            ctx->pc = 0x169510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16950Cu;
            // 0x169510: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169614u;
            goto label_169614;
        }
    }
    ctx->pc = 0x169514u;
label_169514:
    // 0x169514: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x169514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_169518:
    // 0x169518: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_16951c:
    if (ctx->pc == 0x16951Cu) {
        ctx->pc = 0x16951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169518u;
        // 0x16951c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169520u;
        goto label_169520;
    }
    ctx->pc = 0x169518u;
    {
        const bool branch_taken_0x169518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169518u;
        // 0x16951c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169518) {
            ctx->pc = 0x16960Cu;
            goto label_16960c;
        }
    }
    ctx->pc = 0x169520u;
label_169520:
    // 0x169520: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x169520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_169524:
    // 0x169524: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_169528:
    if (ctx->pc == 0x169528u) {
        ctx->pc = 0x169528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169524u;
        // 0x169528: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16952Cu;
        goto label_16952c;
    }
    ctx->pc = 0x169524u;
    {
        const bool branch_taken_0x169524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169524u;
        // 0x169528: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169524) {
            ctx->pc = 0x169608u;
            goto label_169608;
        }
    }
    ctx->pc = 0x16952Cu;
label_16952c:
    // 0x16952c: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x16952cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_169530:
    // 0x169530: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x169530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
label_169534:
    // 0x169534: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x169534u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_169538:
    // 0x169538: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x169538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_16953c:
    // 0x16953c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_169540:
    if (ctx->pc == 0x169540u) {
        ctx->pc = 0x169540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16953Cu;
        // 0x169540: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169544u;
        goto label_169544;
    }
    ctx->pc = 0x16953Cu;
    {
        const bool branch_taken_0x16953c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x169540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16953Cu;
        // 0x169540: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16953c) {
            ctx->pc = 0x169558u;
            goto label_169558;
        }
    }
    ctx->pc = 0x169544u;
label_169544:
    // 0x169544: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x169544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169548:
    // 0x169548: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_16954c:
    if (ctx->pc == 0x16954Cu) {
        ctx->pc = 0x16954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169548u;
        // 0x16954c: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x169550u;
        goto label_169550;
    }
    ctx->pc = 0x169548u;
    {
        const bool branch_taken_0x169548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169548u;
        // 0x16954c: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x169548) {
            ctx->pc = 0x16955Cu;
            goto label_16955c;
        }
    }
    ctx->pc = 0x169550u;
label_169550:
    // 0x169550: 0xc07fd18  jal         func_1FF460
label_169554:
    if (ctx->pc == 0x169554u) {
        ctx->pc = 0x169554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169550u;
        // 0x169554: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169558u;
        goto label_169558;
    }
    ctx->pc = 0x169550u;
    SET_GPR_U32(ctx, 31, 0x169558u);
    ctx->pc = 0x169554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169550u;
    // 0x169554: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x169550u, 0x169558u)) {
        return;
    }
    ctx->pc = 0x169558u;
label_169558:
    // 0x169558: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x169558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16955c:
    // 0x16955c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x16955cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_169560:
    // 0x169560: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x169560u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_169564:
    // 0x169564: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x169564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_169568:
    // 0x169568: 0x0  nop
    ctx->pc = 0x169568u;
    // NOP
label_16956c:
    // 0x16956c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16956cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_169570:
    // 0x169570: 0x0  nop
    ctx->pc = 0x169570u;
    // NOP
label_169574:
    // 0x169574: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
label_169578:
    if (ctx->pc == 0x169578u) {
        ctx->pc = 0x169578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169574u;
        // 0x169578: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16957Cu;
        goto label_16957c;
    }
    ctx->pc = 0x169574u;
    {
        const bool branch_taken_0x169574 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x169574) {
            ctx->pc = 0x169578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169574u;
            // 0x169578: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169610u;
            goto label_169610;
        }
    }
    ctx->pc = 0x16957Cu;
label_16957c:
    // 0x16957c: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x16957cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_169580:
    // 0x169580: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
label_169584:
    if (ctx->pc == 0x169584u) {
        ctx->pc = 0x169584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169580u;
        // 0x169584: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169588u;
        goto label_169588;
    }
    ctx->pc = 0x169580u;
    {
        const bool branch_taken_0x169580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169580) {
            ctx->pc = 0x169584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169580u;
            // 0x169584: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169614u;
            goto label_169614;
        }
    }
    ctx->pc = 0x169588u;
label_169588:
    // 0x169588: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x169588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_16958c:
    // 0x16958c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16958cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169590:
    // 0x169590: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x169590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
label_169594:
    // 0x169594: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x169594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_169598:
    // 0x169598: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x169598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_16959c:
    // 0x16959c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16959cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1695a0:
    // 0x1695a0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1695a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1695a4:
    // 0x1695a4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1695a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1695a8:
    // 0x1695a8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1695a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1695ac:
    // 0x1695ac: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1695acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1695b0:
    // 0x1695b0: 0x60f809  jalr        $v1
label_1695b4:
    if (ctx->pc == 0x1695B4u) {
        ctx->pc = 0x1695B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695B0u;
        // 0x1695b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1695B8u;
        goto label_1695b8;
    }
    ctx->pc = 0x1695B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1695B8u);
        ctx->pc = 0x1695B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695B0u;
        // 0x1695b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1695B0u, 0x1695B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1695B8u;
label_1695b8:
    // 0x1695b8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1695b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1695bc:
    // 0x1695bc: 0x8e421a70  lw          $v0, 0x1A70($s2)
    ctx->pc = 0x1695bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6768)));
label_1695c0:
    // 0x1695c0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1695c4:
    if (ctx->pc == 0x1695C4u) {
        ctx->pc = 0x1695C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695C0u;
        // 0x1695c4: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1695C8u;
        goto label_1695c8;
    }
    ctx->pc = 0x1695C0u;
    {
        const bool branch_taken_0x1695c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1695C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695C0u;
        // 0x1695c4: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1695c0) {
            ctx->pc = 0x1695E0u;
            goto label_1695e0;
        }
    }
    ctx->pc = 0x1695C8u;
label_1695c8:
    // 0x1695c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1695c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1695cc:
    // 0x1695cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1695d0:
    if (ctx->pc == 0x1695D0u) {
        ctx->pc = 0x1695D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695CCu;
        // 0x1695d0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1695D4u;
        goto label_1695d4;
    }
    ctx->pc = 0x1695CCu;
    {
        const bool branch_taken_0x1695cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1695D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695CCu;
        // 0x1695d0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1695cc) {
            ctx->pc = 0x1695E0u;
            goto label_1695e0;
        }
    }
    ctx->pc = 0x1695D4u;
label_1695d4:
    // 0x1695d4: 0xc07fd18  jal         func_1FF460
label_1695d8:
    if (ctx->pc == 0x1695D8u) {
        ctx->pc = 0x1695D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695D4u;
        // 0x1695d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1695DCu;
        goto label_1695dc;
    }
    ctx->pc = 0x1695D4u;
    SET_GPR_U32(ctx, 31, 0x1695DCu);
    ctx->pc = 0x1695D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695D4u;
    // 0x1695d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1695D4u, 0x1695DCu)) {
        return;
    }
    ctx->pc = 0x1695DCu;
label_1695dc:
    // 0x1695dc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1695dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_1695e0:
    // 0x1695e0: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1695e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1695e4:
    // 0x1695e4: 0x24454300  addiu       $a1, $v0, 0x4300
    ctx->pc = 0x1695e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17152));
label_1695e8:
    // 0x1695e8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_1695ec:
    if (ctx->pc == 0x1695ECu) {
        ctx->pc = 0x1695ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695E8u;
        // 0x1695ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1695F0u;
        goto label_1695f0;
    }
    ctx->pc = 0x1695E8u;
    {
        const bool branch_taken_0x1695e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1695ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695E8u;
        // 0x1695ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1695e8) {
            ctx->pc = 0x1695F4u;
            goto label_1695f4;
        }
    }
    ctx->pc = 0x1695F0u;
label_1695f0:
    // 0x1695f0: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x1695f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1695f4:
    // 0x1695f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1695f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1695f8:
    // 0x1695f8: 0xc05a47c  jal         func_1691F0
label_1695fc:
    if (ctx->pc == 0x1695FCu) {
        ctx->pc = 0x1695FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695F8u;
        // 0x1695fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169600u;
        goto label_169600;
    }
    ctx->pc = 0x1695F8u;
    SET_GPR_U32(ctx, 31, 0x169600u);
    ctx->pc = 0x1695FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695F8u;
    // 0x1695fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x1695F8u, 0x169600u)) {
        return;
    }
    ctx->pc = 0x169600u;
label_169600:
    // 0x169600: 0x10000004  b           . + 4 + (0x4 << 2)
label_169604:
    if (ctx->pc == 0x169604u) {
        ctx->pc = 0x169604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169600u;
        // 0x169604: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169608u;
        goto label_169608;
    }
    ctx->pc = 0x169600u;
    {
        const bool branch_taken_0x169600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169600u;
        // 0x169604: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169600) {
            ctx->pc = 0x169614u;
            goto label_169614;
        }
    }
    ctx->pc = 0x169608u;
label_169608:
    // 0x169608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x169608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16960c:
    // 0x16960c: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x16960cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
label_169610:
    // 0x169610: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x169610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_169614:
    // 0x169614: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x169614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_169618:
    // 0x169618: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x169618u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16961c:
    // 0x16961c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16961cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_169620:
    // 0x169620: 0x3e00008  jr          $ra
label_169624:
    if (ctx->pc == 0x169624u) {
        ctx->pc = 0x169624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169620u;
        // 0x169624: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169628u;
        goto label_fallthrough_0x169620;
    }
    ctx->pc = 0x169620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169620u;
        // 0x169624: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x169620:
    ctx->pc = 0x169628u;
}
