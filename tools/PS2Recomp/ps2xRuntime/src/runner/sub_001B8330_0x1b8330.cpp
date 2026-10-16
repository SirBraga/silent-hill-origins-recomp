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

// Function: sub_001B8330
// Address: 0x1b8330 - 0x1b8658
void sub_001B8330_0x1b8330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8330_0x1b8330");
#endif

    switch (ctx->pc) {
        case 0x1b8350u: goto label_1b8350;
        case 0x1b8400u: goto label_1b8400;
        case 0x1b8410u: goto label_1b8410;
        case 0x1b8420u: goto label_1b8420;
        case 0x1b8438u: goto label_1b8438;
        case 0x1b844cu: goto label_1b844c;
        case 0x1b8460u: goto label_1b8460;
        case 0x1b8478u: goto label_1b8478;
        case 0x1b848cu: goto label_1b848c;
        case 0x1b84a0u: goto label_1b84a0;
        case 0x1b84b8u: goto label_1b84b8;
        case 0x1b84ccu: goto label_1b84cc;
        case 0x1b84e0u: goto label_1b84e0;
        case 0x1b84f8u: goto label_1b84f8;
        case 0x1b850cu: goto label_1b850c;
        case 0x1b8520u: goto label_1b8520;
        case 0x1b8538u: goto label_1b8538;
        case 0x1b854cu: goto label_1b854c;
        case 0x1b8560u: goto label_1b8560;
        case 0x1b8578u: goto label_1b8578;
        case 0x1b858cu: goto label_1b858c;
        case 0x1b85a4u: goto label_1b85a4;
        case 0x1b85b8u: goto label_1b85b8;
        case 0x1b85ccu: goto label_1b85cc;
        case 0x1b85e4u: goto label_1b85e4;
        case 0x1b85f8u: goto label_1b85f8;
        case 0x1b860cu: goto label_1b860c;
        case 0x1b8624u: goto label_1b8624;
        case 0x1b8638u: goto label_1b8638;
        default: break;
    }

    ctx->pc = 0x1b8330u;

    // 0x1b8330: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1b8330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1b8334: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1b8334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1b8338: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1b8338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x1b833c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b833cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8340: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1b8340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x1b8344: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1b8344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x1b8348: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1B8348u;
    SET_GPR_U32(ctx, 31, 0x1B8350u);
    ctx->pc = 0x1B834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8348u;
    // 0x1b834c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1B8348u, 0x1B8350u)) {
        return;
    }
    ctx->pc = 0x1B8350u;
label_1b8350:
    // 0x1b8350: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1b8350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1b8354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8358: 0x2463ce68  addiu       $v1, $v1, -0x3198
    ctx->pc = 0x1b8358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954600));
    // 0x1b835c: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x1b835cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x1b8360: 0xae030258  sw          $v1, 0x258($s0)
    ctx->pc = 0x1b8360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 3));
    // 0x1b8364: 0x24e7cd58  addiu       $a3, $a3, -0x32A8
    ctx->pc = 0x1b8364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954328));
    // 0x1b8368: 0x26030318  addiu       $v1, $s0, 0x318
    ctx->pc = 0x1b8368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 792));
    // 0x1b836c: 0xae0002c0  sw          $zero, 0x2C0($s0)
    ctx->pc = 0x1b836cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 0));
    // 0x1b8370: 0xae0202a0  sw          $v0, 0x2A0($s0)
    ctx->pc = 0x1b8370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 2));
    // 0x1b8374: 0x260402c4  addiu       $a0, $s0, 0x2C4
    ctx->pc = 0x1b8374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 708));
    // 0x1b8378: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1b8378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x1b837c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b837cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8380: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x1b8380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x1b8384: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1b8384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1b8388: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1b8388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1b838c: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1b838cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x1b8390: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1b8390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x1b8394: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x1b8394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
    // 0x1b8398: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x1b8398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
    // 0x1b839c: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x1b839cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
    // 0x1b83a0: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x1b83a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x1b83a4: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x1b83a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x1b83a8: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x1b83a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x1b83ac: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x1b83acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    // 0x1b83b0: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x1b83b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
    // 0x1b83b4: 0xae000294  sw          $zero, 0x294($s0)
    ctx->pc = 0x1b83b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
    // 0x1b83b8: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x1b83b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
    // 0x1b83bc: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x1b83bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
    // 0x1b83c0: 0xae0002a4  sw          $zero, 0x2A4($s0)
    ctx->pc = 0x1b83c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
    // 0x1b83c4: 0xae0002a8  sw          $zero, 0x2A8($s0)
    ctx->pc = 0x1b83c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 0));
    // 0x1b83c8: 0xae0002ac  sw          $zero, 0x2AC($s0)
    ctx->pc = 0x1b83c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 0));
    // 0x1b83cc: 0xae000314  sw          $zero, 0x314($s0)
    ctx->pc = 0x1b83ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 0));
    // 0x1b83d0: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x1b83d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x1b83d4: 0xae000318  sw          $zero, 0x318($s0)
    ctx->pc = 0x1b83d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 792), GPR_U32(ctx, 0));
    // 0x1b83d8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1b83d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1b83dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1b83dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1b83e0: 0x3c014041  lui         $at, 0x4041
    ctx->pc = 0x1b83e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16449 << 16));
    // 0x1b83e4: 0x3421f07c  ori         $at, $at, 0xF07C
    ctx->pc = 0x1b83e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61564);
    // 0x1b83e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b83e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b83ec: 0xae000328  sw          $zero, 0x328($s0)
    ctx->pc = 0x1b83ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 0));
    // 0x1b83f0: 0xae00032c  sw          $zero, 0x32C($s0)
    ctx->pc = 0x1b83f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 0));
    // 0x1b83f4: 0xae000330  sw          $zero, 0x330($s0)
    ctx->pc = 0x1b83f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
    // 0x1b83f8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B83F8u;
    SET_GPR_U32(ctx, 31, 0x1B8400u);
    ctx->pc = 0x1B83FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B83F8u;
    // 0x1b83fc: 0xe60002c0  swc1        $f0, 0x2C0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 704), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B83F8u, 0x1B8400u)) {
        return;
    }
    ctx->pc = 0x1B8400u;
label_1b8400:
    // 0x1b8400: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x1b8400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x1b8404: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8408: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B8408u;
    SET_GPR_U32(ctx, 31, 0x1B8410u);
    ctx->pc = 0x1B840Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8408u;
    // 0x1b840c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B8408u, 0x1B8410u)) {
        return;
    }
    ctx->pc = 0x1B8410u;
label_1b8410:
    // 0x1b8410: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b8410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8418: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B8418u;
    SET_GPR_U32(ctx, 31, 0x1B8420u);
    ctx->pc = 0x1B841Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8418u;
    // 0x1b841c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B8418u, 0x1B8420u)) {
        return;
    }
    ctx->pc = 0x1B8420u;
label_1b8420:
    // 0x1b8420: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b8420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b8424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b8424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8428: 0x24a5cd98  addiu       $a1, $a1, -0x3268
    ctx->pc = 0x1b8428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954392));
    // 0x1b842c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b842cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8430: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B8430u;
    SET_GPR_U32(ctx, 31, 0x1B8438u);
    ctx->pc = 0x1B8434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8430u;
    // 0x1b8434: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B8430u, 0x1B8438u)) {
        return;
    }
    ctx->pc = 0x1B8438u;
label_1b8438:
    // 0x1b8438: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1b8438u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b843c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B843Cu;
    {
        const bool branch_taken_0x1b843c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B843Cu;
        // 0x1b8440: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b843c) {
            ctx->pc = 0x1B8450u;
            goto label_1b8450;
        }
    }
    ctx->pc = 0x1B8444u;
    // 0x1b8444: 0xc065c40  jal         func_197100
    ctx->pc = 0x1B8444u;
    SET_GPR_U32(ctx, 31, 0x1B844Cu);
    ctx->pc = 0x1B8448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8444u;
    // 0x1b8448: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1B8444u, 0x1B844Cu)) {
        return;
    }
    ctx->pc = 0x1B844Cu;
label_1b844c:
    // 0x1b844c: 0xae020274  sw          $v0, 0x274($s0)
    ctx->pc = 0x1b844cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
label_1b8450:
    // 0x1b8450: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b8450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8458: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B8458u;
    SET_GPR_U32(ctx, 31, 0x1B8460u);
    ctx->pc = 0x1B845Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8458u;
    // 0x1b845c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B8458u, 0x1B8460u)) {
        return;
    }
    ctx->pc = 0x1B8460u;
label_1b8460:
    // 0x1b8460: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b8460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b8464: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b8464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8468: 0x24a5cda8  addiu       $a1, $a1, -0x3258
    ctx->pc = 0x1b8468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954408));
    // 0x1b846c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b846cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8470: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B8470u;
    SET_GPR_U32(ctx, 31, 0x1B8478u);
    ctx->pc = 0x1B8474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8470u;
    // 0x1b8474: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B8470u, 0x1B8478u)) {
        return;
    }
    ctx->pc = 0x1B8478u;
label_1b8478:
    // 0x1b8478: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1b8478u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b847c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B847Cu;
    {
        const bool branch_taken_0x1b847c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B847Cu;
        // 0x1b8480: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b847c) {
            ctx->pc = 0x1B8490u;
            goto label_1b8490;
        }
    }
    ctx->pc = 0x1B8484u;
    // 0x1b8484: 0xc065c40  jal         func_197100
    ctx->pc = 0x1B8484u;
    SET_GPR_U32(ctx, 31, 0x1B848Cu);
    ctx->pc = 0x1B8488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8484u;
    // 0x1b8488: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1B8484u, 0x1B848Cu)) {
        return;
    }
    ctx->pc = 0x1B848Cu;
label_1b848c:
    // 0x1b848c: 0xae020278  sw          $v0, 0x278($s0)
    ctx->pc = 0x1b848cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
label_1b8490:
    // 0x1b8490: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b8490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8494: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8498: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B8498u;
    SET_GPR_U32(ctx, 31, 0x1B84A0u);
    ctx->pc = 0x1B849Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8498u;
    // 0x1b849c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B8498u, 0x1B84A0u)) {
        return;
    }
    ctx->pc = 0x1B84A0u;
label_1b84a0:
    // 0x1b84a0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b84a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b84a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b84a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84a8: 0x24a5cdb8  addiu       $a1, $a1, -0x3248
    ctx->pc = 0x1b84a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954424));
    // 0x1b84ac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b84acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84b0: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B84B0u;
    SET_GPR_U32(ctx, 31, 0x1B84B8u);
    ctx->pc = 0x1B84B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84B0u;
    // 0x1b84b4: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B84B0u, 0x1B84B8u)) {
        return;
    }
    ctx->pc = 0x1B84B8u;
label_1b84b8:
    // 0x1b84b8: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1b84b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b84bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B84BCu;
    {
        const bool branch_taken_0x1b84bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B84C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B84BCu;
        // 0x1b84c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b84bc) {
            ctx->pc = 0x1B84D0u;
            goto label_1b84d0;
        }
    }
    ctx->pc = 0x1B84C4u;
    // 0x1b84c4: 0xc065c40  jal         func_197100
    ctx->pc = 0x1B84C4u;
    SET_GPR_U32(ctx, 31, 0x1B84CCu);
    ctx->pc = 0x1B84C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84C4u;
    // 0x1b84c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1B84C4u, 0x1B84CCu)) {
        return;
    }
    ctx->pc = 0x1B84CCu;
label_1b84cc:
    // 0x1b84cc: 0xae02027c  sw          $v0, 0x27C($s0)
    ctx->pc = 0x1b84ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 2));
label_1b84d0:
    // 0x1b84d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b84d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b84d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84d8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B84D8u;
    SET_GPR_U32(ctx, 31, 0x1B84E0u);
    ctx->pc = 0x1B84DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84D8u;
    // 0x1b84dc: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B84D8u, 0x1B84E0u)) {
        return;
    }
    ctx->pc = 0x1B84E0u;
label_1b84e0:
    // 0x1b84e0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b84e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b84e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b84e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84e8: 0x24a5cdc8  addiu       $a1, $a1, -0x3238
    ctx->pc = 0x1b84e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954440));
    // 0x1b84ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b84ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84f0: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B84F0u;
    SET_GPR_U32(ctx, 31, 0x1B84F8u);
    ctx->pc = 0x1B84F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84F0u;
    // 0x1b84f4: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B84F0u, 0x1B84F8u)) {
        return;
    }
    ctx->pc = 0x1B84F8u;
label_1b84f8:
    // 0x1b84f8: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1b84f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b84fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B84FCu;
    {
        const bool branch_taken_0x1b84fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B84FCu;
        // 0x1b8500: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b84fc) {
            ctx->pc = 0x1B8510u;
            goto label_1b8510;
        }
    }
    ctx->pc = 0x1B8504u;
    // 0x1b8504: 0xc065c40  jal         func_197100
    ctx->pc = 0x1B8504u;
    SET_GPR_U32(ctx, 31, 0x1B850Cu);
    ctx->pc = 0x1B8508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8504u;
    // 0x1b8508: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1B8504u, 0x1B850Cu)) {
        return;
    }
    ctx->pc = 0x1B850Cu;
label_1b850c:
    // 0x1b850c: 0xae020280  sw          $v0, 0x280($s0)
    ctx->pc = 0x1b850cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
label_1b8510:
    // 0x1b8510: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b8510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8514: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8518: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B8518u;
    SET_GPR_U32(ctx, 31, 0x1B8520u);
    ctx->pc = 0x1B851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8518u;
    // 0x1b851c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B8518u, 0x1B8520u)) {
        return;
    }
    ctx->pc = 0x1B8520u;
label_1b8520:
    // 0x1b8520: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b8520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b8524: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b8524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8528: 0x24a5cdd8  addiu       $a1, $a1, -0x3228
    ctx->pc = 0x1b8528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954456));
    // 0x1b852c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b852cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8530: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B8530u;
    SET_GPR_U32(ctx, 31, 0x1B8538u);
    ctx->pc = 0x1B8534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8530u;
    // 0x1b8534: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B8530u, 0x1B8538u)) {
        return;
    }
    ctx->pc = 0x1B8538u;
label_1b8538:
    // 0x1b8538: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1b8538u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b853c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B853Cu;
    {
        const bool branch_taken_0x1b853c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B853Cu;
        // 0x1b8540: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b853c) {
            ctx->pc = 0x1B8550u;
            goto label_1b8550;
        }
    }
    ctx->pc = 0x1B8544u;
    // 0x1b8544: 0xc065c40  jal         func_197100
    ctx->pc = 0x1B8544u;
    SET_GPR_U32(ctx, 31, 0x1B854Cu);
    ctx->pc = 0x1B8548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8544u;
    // 0x1b8548: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1B8544u, 0x1B854Cu)) {
        return;
    }
    ctx->pc = 0x1B854Cu;
label_1b854c:
    // 0x1b854c: 0xae020284  sw          $v0, 0x284($s0)
    ctx->pc = 0x1b854cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 2));
label_1b8550:
    // 0x1b8550: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b8550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8558: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B8558u;
    SET_GPR_U32(ctx, 31, 0x1B8560u);
    ctx->pc = 0x1B855Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8558u;
    // 0x1b855c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B8558u, 0x1B8560u)) {
        return;
    }
    ctx->pc = 0x1B8560u;
label_1b8560:
    // 0x1b8560: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b8560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b8564: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b8564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8568: 0x24a5cde8  addiu       $a1, $a1, -0x3218
    ctx->pc = 0x1b8568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954472));
    // 0x1b856c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b856cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8570: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B8570u;
    SET_GPR_U32(ctx, 31, 0x1B8578u);
    ctx->pc = 0x1B8574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8570u;
    // 0x1b8574: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B8570u, 0x1B8578u)) {
        return;
    }
    ctx->pc = 0x1B8578u;
label_1b8578:
    // 0x1b8578: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1b8578u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b857c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B857Cu;
    {
        const bool branch_taken_0x1b857c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B857Cu;
        // 0x1b8580: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b857c) {
            ctx->pc = 0x1B8590u;
            goto label_1b8590;
        }
    }
    ctx->pc = 0x1B8584u;
    // 0x1b8584: 0xc065c40  jal         func_197100
    ctx->pc = 0x1B8584u;
    SET_GPR_U32(ctx, 31, 0x1B858Cu);
    ctx->pc = 0x1B8588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8584u;
    // 0x1b8588: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1B8584u, 0x1B858Cu)) {
        return;
    }
    ctx->pc = 0x1B858Cu;
label_1b858c:
    // 0x1b858c: 0xae020288  sw          $v0, 0x288($s0)
    ctx->pc = 0x1b858cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 2));
label_1b8590:
    // 0x1b8590: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b8590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b8594: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b8594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8598: 0x24a5cdf8  addiu       $a1, $a1, -0x3208
    ctx->pc = 0x1b8598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954488));
    // 0x1b859c: 0xc065ea4  jal         func_197A90
    ctx->pc = 0x1B859Cu;
    SET_GPR_U32(ctx, 31, 0x1B85A4u);
    ctx->pc = 0x1B85A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B859Cu;
    // 0x1b85a0: 0x260602a0  addiu       $a2, $s0, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197A90u, 0x1B859Cu, 0x1B85A4u)) {
        return;
    }
    ctx->pc = 0x1B85A4u;
label_1b85a4:
    // 0x1b85a4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b85a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b85a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b85a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85ac: 0x24a5ce08  addiu       $a1, $a1, -0x31F8
    ctx->pc = 0x1b85acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954504));
    // 0x1b85b0: 0xc065fc0  jal         func_197F00
    ctx->pc = 0x1B85B0u;
    SET_GPR_U32(ctx, 31, 0x1B85B8u);
    ctx->pc = 0x1B85B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B85B0u;
    // 0x1b85b4: 0x26060260  addiu       $a2, $s0, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197F00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197F00u, 0x1B85B0u, 0x1B85B8u)) {
        return;
    }
    ctx->pc = 0x1B85B8u;
label_1b85b8:
    // 0x1b85b8: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x1b85b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b85bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b85bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b85c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85c4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B85C4u;
    SET_GPR_U32(ctx, 31, 0x1B85CCu);
    ctx->pc = 0x1B85C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B85C4u;
    // 0x1b85c8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B85C4u, 0x1B85CCu)) {
        return;
    }
    ctx->pc = 0x1B85CCu;
label_1b85cc:
    // 0x1b85cc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b85ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b85d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b85d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85d4: 0x24a5ce10  addiu       $a1, $a1, -0x31F0
    ctx->pc = 0x1b85d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954512));
    // 0x1b85d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b85d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85dc: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B85DCu;
    SET_GPR_U32(ctx, 31, 0x1B85E4u);
    ctx->pc = 0x1B85E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B85DCu;
    // 0x1b85e0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B85DCu, 0x1B85E4u)) {
        return;
    }
    ctx->pc = 0x1B85E4u;
label_1b85e4:
    // 0x1b85e4: 0x83a30080  lb          $v1, 0x80($sp)
    ctx->pc = 0x1b85e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b85e8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B85E8u;
    {
        const bool branch_taken_0x1b85e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B85E8u;
        // 0x1b85ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b85e8) {
            ctx->pc = 0x1B85FCu;
            goto label_1b85fc;
        }
    }
    ctx->pc = 0x1B85F0u;
    // 0x1b85f0: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1B85F0u;
    SET_GPR_U32(ctx, 31, 0x1B85F8u);
    ctx->pc = 0x1B85F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B85F0u;
    // 0x1b85f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1B85F0u, 0x1B85F8u)) {
        return;
    }
    ctx->pc = 0x1B85F8u;
label_1b85f8:
    // 0x1b85f8: 0xae0202a8  sw          $v0, 0x2A8($s0)
    ctx->pc = 0x1b85f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
label_1b85fc:
    // 0x1b85fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b85fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8604: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B8604u;
    SET_GPR_U32(ctx, 31, 0x1B860Cu);
    ctx->pc = 0x1B8608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8604u;
    // 0x1b8608: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B8604u, 0x1B860Cu)) {
        return;
    }
    ctx->pc = 0x1B860Cu;
label_1b860c:
    // 0x1b860c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b860cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b8610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b8610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8614: 0x24a5ce20  addiu       $a1, $a1, -0x31E0
    ctx->pc = 0x1b8614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954528));
    // 0x1b8618: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b8618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b861c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B861Cu;
    SET_GPR_U32(ctx, 31, 0x1B8624u);
    ctx->pc = 0x1B8620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B861Cu;
    // 0x1b8620: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B861Cu, 0x1B8624u)) {
        return;
    }
    ctx->pc = 0x1B8624u;
label_1b8624:
    // 0x1b8624: 0x83a30080  lb          $v1, 0x80($sp)
    ctx->pc = 0x1b8624u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b8628: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8628u;
    {
        const bool branch_taken_0x1b8628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8628u;
        // 0x1b862c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8628) {
            ctx->pc = 0x1B863Cu;
            goto label_1b863c;
        }
    }
    ctx->pc = 0x1B8630u;
    // 0x1b8630: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1B8630u;
    SET_GPR_U32(ctx, 31, 0x1B8638u);
    ctx->pc = 0x1B8634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8630u;
    // 0x1b8634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1B8630u, 0x1B8638u)) {
        return;
    }
    ctx->pc = 0x1B8638u;
label_1b8638:
    // 0x1b8638: 0xae0202ac  sw          $v0, 0x2AC($s0)
    ctx->pc = 0x1b8638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
label_1b863c:
    // 0x1b863c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b863cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8640: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1b8640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b8644: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1b8644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b8648: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1b8648u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b864c: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1b864cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b8650: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8650u;
        // 0x1b8654: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8658u;
}
