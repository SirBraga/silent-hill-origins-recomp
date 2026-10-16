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

// Function: sub_001AE5A0
// Address: 0x1ae5a0 - 0x1ae9b0
void sub_001AE5A0_0x1ae5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE5A0_0x1ae5a0");
#endif

    switch (ctx->pc) {
        case 0x1ae65cu: goto label_1ae65c;
        case 0x1ae66cu: goto label_1ae66c;
        case 0x1ae67cu: goto label_1ae67c;
        case 0x1ae68cu: goto label_1ae68c;
        case 0x1ae6a8u: goto label_1ae6a8;
        case 0x1ae6c0u: goto label_1ae6c0;
        case 0x1ae6d8u: goto label_1ae6d8;
        case 0x1ae6ecu: goto label_1ae6ec;
        case 0x1ae704u: goto label_1ae704;
        case 0x1ae724u: goto label_1ae724;
        case 0x1ae73cu: goto label_1ae73c;
        case 0x1ae754u: goto label_1ae754;
        case 0x1ae76cu: goto label_1ae76c;
        case 0x1ae780u: goto label_1ae780;
        case 0x1ae7a0u: goto label_1ae7a0;
        case 0x1ae7dcu: goto label_1ae7dc;
        case 0x1ae7e8u: goto label_1ae7e8;
        case 0x1ae7f8u: goto label_1ae7f8;
        case 0x1ae80cu: goto label_1ae80c;
        case 0x1ae820u: goto label_1ae820;
        case 0x1ae830u: goto label_1ae830;
        case 0x1ae85cu: goto label_1ae85c;
        case 0x1ae86cu: goto label_1ae86c;
        case 0x1ae890u: goto label_1ae890;
        case 0x1ae89cu: goto label_1ae89c;
        case 0x1ae8acu: goto label_1ae8ac;
        case 0x1ae8c8u: goto label_1ae8c8;
        case 0x1ae8d8u: goto label_1ae8d8;
        case 0x1ae8fcu: goto label_1ae8fc;
        case 0x1ae908u: goto label_1ae908;
        case 0x1ae918u: goto label_1ae918;
        case 0x1ae930u: goto label_1ae930;
        case 0x1ae93cu: goto label_1ae93c;
        case 0x1ae950u: goto label_1ae950;
        case 0x1ae968u: goto label_1ae968;
        case 0x1ae97cu: goto label_1ae97c;
        default: break;
    }

    ctx->pc = 0x1ae5a0u;

    // 0x1ae5a0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x1ae5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x1ae5a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ae5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ae5a8: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x1ae5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x1ae5ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ae5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae5b0: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x1ae5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x1ae5b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ae5b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5b8: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x1ae5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x1ae5bc: 0x2442bad8  addiu       $v0, $v0, -0x4528
    ctx->pc = 0x1ae5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949592));
    // 0x1ae5c0: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x1ae5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x1ae5c4: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x1ae5c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
    // 0x1ae5c8: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x1ae5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x1ae5cc: 0x2508bbe8  addiu       $t0, $t0, -0x4418
    ctx->pc = 0x1ae5ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949864));
    // 0x1ae5d0: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x1ae5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
    // 0x1ae5d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ae5d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5d8: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x1ae5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
    // 0x1ae5dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ae5dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5e0: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x1ae5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
    // 0x1ae5e4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1ae5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1ae5e8: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x1ae5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
    // 0x1ae5ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5f0: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1ae5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1ae5f4: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x1ae5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1ae5f8: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1ae5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1ae5fc: 0xae020258  sw          $v0, 0x258($s0)
    ctx->pc = 0x1ae5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
    // 0x1ae600: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ae600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1ae604: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x1ae604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1ae608: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1ae608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1ae60c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1ae60cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1ae610: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1ae610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1ae614: 0xafa70108  sw          $a3, 0x108($sp)
    ctx->pc = 0x1ae614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 7));
    // 0x1ae618: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1ae618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1ae61c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1ae61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1ae620: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1ae620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1ae624: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1ae624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1ae628: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ae628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ae62c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1ae62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1ae630: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1ae630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1ae634: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x1ae634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x1ae638: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1ae638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1ae63c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1ae63cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1ae640: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1ae640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1ae644: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1ae644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1ae648: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1ae648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1ae64c: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1ae64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1ae650: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1ae650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1ae654: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1AE654u;
    SET_GPR_U32(ctx, 31, 0x1AE65Cu);
    ctx->pc = 0x1AE658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE654u;
    // 0x1ae658: 0xae000254  sw          $zero, 0x254($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1AE654u, 0x1AE65Cu)) {
        return;
    }
    ctx->pc = 0x1AE65Cu;
label_1ae65c:
    // 0x1ae65c: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x1ae65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1ae660: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae664: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1AE664u;
    SET_GPR_U32(ctx, 31, 0x1AE66Cu);
    ctx->pc = 0x1AE668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE664u;
    // 0x1ae668: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1AE664u, 0x1AE66Cu)) {
        return;
    }
    ctx->pc = 0x1AE66Cu;
label_1ae66c:
    // 0x1ae66c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x1ae66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1ae670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae674: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1AE674u;
    SET_GPR_U32(ctx, 31, 0x1AE67Cu);
    ctx->pc = 0x1AE678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE674u;
    // 0x1ae678: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1AE674u, 0x1AE67Cu)) {
        return;
    }
    ctx->pc = 0x1AE67Cu;
label_1ae67c:
    // 0x1ae67c: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1ae67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x1ae680: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ae680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ae684: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1AE684u;
    SET_GPR_U32(ctx, 31, 0x1AE68Cu);
    ctx->pc = 0x1AE688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE684u;
    // 0x1ae688: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1AE684u, 0x1AE68Cu)) {
        return;
    }
    ctx->pc = 0x1AE68Cu;
label_1ae68c:
    // 0x1ae68c: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AE68Cu;
    {
        const bool branch_taken_0x1ae68c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae68c) {
            ctx->pc = 0x1AE690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE68Cu;
            // 0x1ae690: 0xae110044  sw          $s1, 0x44($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE694u;
            goto label_1ae694;
        }
    }
    ctx->pc = 0x1AE694u;
label_1ae694:
    // 0x1ae694: 0x124000b9  beqz        $s2, . + 4 + (0xB9 << 2)
    ctx->pc = 0x1AE694u;
    {
        const bool branch_taken_0x1ae694 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE694u;
        // 0x1ae698: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae694) {
            ctx->pc = 0x1AE97Cu;
            goto label_1ae97c;
        }
    }
    ctx->pc = 0x1AE69Cu;
    // 0x1ae69c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae6a0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1AE6A0u;
    SET_GPR_U32(ctx, 31, 0x1AE6A8u);
    ctx->pc = 0x1AE6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE6A0u;
    // 0x1ae6a4: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1AE6A0u, 0x1AE6A8u)) {
        return;
    }
    ctx->pc = 0x1AE6A8u;
label_1ae6a8:
    // 0x1ae6a8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ae6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ae6ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae6b0: 0x24a5b9e8  addiu       $a1, $a1, -0x4618
    ctx->pc = 0x1ae6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949352));
    // 0x1ae6b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ae6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae6b8: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1AE6B8u;
    SET_GPR_U32(ctx, 31, 0x1AE6C0u);
    ctx->pc = 0x1AE6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE6B8u;
    // 0x1ae6bc: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1AE6B8u, 0x1AE6C0u)) {
        return;
    }
    ctx->pc = 0x1AE6C0u;
label_1ae6c0:
    // 0x1ae6c0: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1ae6c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae6c4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AE6C4u;
    {
        const bool branch_taken_0x1ae6c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6C4u;
        // 0x1ae6c8: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6c4) {
            ctx->pc = 0x1AE6F4u;
            goto label_1ae6f4;
        }
    }
    ctx->pc = 0x1AE6CCu;
    // 0x1ae6cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ae6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae6d0: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1AE6D0u;
    SET_GPR_U32(ctx, 31, 0x1AE6D8u);
    ctx->pc = 0x1AE6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE6D0u;
    // 0x1ae6d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1AE6D0u, 0x1AE6D8u)) {
        return;
    }
    ctx->pc = 0x1AE6D8u;
label_1ae6d8:
    // 0x1ae6d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AE6D8u;
    {
        const bool branch_taken_0x1ae6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6D8u;
        // 0x1ae6dc: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6d8) {
            ctx->pc = 0x1AE6F0u;
            goto label_1ae6f0;
        }
    }
    ctx->pc = 0x1AE6E0u;
    // 0x1ae6e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae6e4: 0xc065c40  jal         func_197100
    ctx->pc = 0x1AE6E4u;
    SET_GPR_U32(ctx, 31, 0x1AE6ECu);
    ctx->pc = 0x1AE6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE6E4u;
    // 0x1ae6e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1AE6E4u, 0x1AE6ECu)) {
        return;
    }
    ctx->pc = 0x1AE6ECu;
label_1ae6ec:
    // 0x1ae6ec: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1ae6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_1ae6f0:
    // 0x1ae6f0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ae6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1ae6f4:
    // 0x1ae6f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae6f8: 0x24a5b9f0  addiu       $a1, $a1, -0x4610
    ctx->pc = 0x1ae6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949360));
    // 0x1ae6fc: 0xc065ea4  jal         func_197A90
    ctx->pc = 0x1AE6FCu;
    SET_GPR_U32(ctx, 31, 0x1AE704u);
    ctx->pc = 0x1AE700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE6FCu;
    // 0x1ae700: 0x26060018  addiu       $a2, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197A90u, 0x1AE6FCu, 0x1AE704u)) {
        return;
    }
    ctx->pc = 0x1AE704u;
label_1ae704:
    // 0x1ae704: 0x26170024  addiu       $s7, $s0, 0x24
    ctx->pc = 0x1ae704u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1ae708: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1ae708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1ae70c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ae70cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ae710: 0x24a5ba00  addiu       $a1, $a1, -0x4600
    ctx->pc = 0x1ae710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949376));
    // 0x1ae714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae718: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1ae718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1ae71c: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1AE71Cu;
    SET_GPR_U32(ctx, 31, 0x1AE724u);
    ctx->pc = 0x1AE720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE71Cu;
    // 0x1ae720: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1AE71Cu, 0x1AE724u)) {
        return;
    }
    ctx->pc = 0x1AE724u;
label_1ae724:
    // 0x1ae724: 0x261e0254  addiu       $fp, $s0, 0x254
    ctx->pc = 0x1ae724u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 596));
    // 0x1ae728: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ae728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ae72c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae730: 0x24a5ba08  addiu       $a1, $a1, -0x45F8
    ctx->pc = 0x1ae730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949384));
    // 0x1ae734: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1AE734u;
    SET_GPR_U32(ctx, 31, 0x1AE73Cu);
    ctx->pc = 0x1AE738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE734u;
    // 0x1ae738: 0x26060004  addiu       $a2, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1AE734u, 0x1AE73Cu)) {
        return;
    }
    ctx->pc = 0x1AE73Cu;
label_1ae73c:
    // 0x1ae73c: 0x26110058  addiu       $s1, $s0, 0x58
    ctx->pc = 0x1ae73cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1ae740: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ae740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ae744: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae748: 0x24a5ba10  addiu       $a1, $a1, -0x45F0
    ctx->pc = 0x1ae748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949392));
    // 0x1ae74c: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1AE74Cu;
    SET_GPR_U32(ctx, 31, 0x1AE754u);
    ctx->pc = 0x1AE750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE74Cu;
    // 0x1ae750: 0x26060008  addiu       $a2, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1AE74Cu, 0x1AE754u)) {
        return;
    }
    ctx->pc = 0x1AE754u;
label_1ae754:
    // 0x1ae754: 0x2415000f  addiu       $s5, $zero, 0xF
    ctx->pc = 0x1ae754u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ae758: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ae758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ae75c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae760: 0x24a5ba18  addiu       $a1, $a1, -0x45E8
    ctx->pc = 0x1ae760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949400));
    // 0x1ae764: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1AE764u;
    SET_GPR_U32(ctx, 31, 0x1AE76Cu);
    ctx->pc = 0x1AE768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE764u;
    // 0x1ae768: 0x2606000c  addiu       $a2, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1AE764u, 0x1AE76Cu)) {
        return;
    }
    ctx->pc = 0x1AE76Cu;
label_1ae76c:
    // 0x1ae76c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ae76cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ae770: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae774: 0x24a5ba20  addiu       $a1, $a1, -0x45E0
    ctx->pc = 0x1ae774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949408));
    // 0x1ae778: 0xc065ea4  jal         func_197A90
    ctx->pc = 0x1AE778u;
    SET_GPR_U32(ctx, 31, 0x1AE780u);
    ctx->pc = 0x1AE77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE778u;
    // 0x1ae77c: 0x2606002c  addiu       $a2, $s0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197A90u, 0x1AE778u, 0x1AE780u)) {
        return;
    }
    ctx->pc = 0x1AE780u;
label_1ae780:
    // 0x1ae780: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ae780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ae784: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ae784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ae788: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ae788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ae78c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1ae78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1ae790: 0x24a5ba28  addiu       $a1, $a1, -0x45D8
    ctx->pc = 0x1ae790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949416));
    // 0x1ae794: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1ae794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x1ae798: 0xc065f72  jal         func_197DC8
    ctx->pc = 0x1AE798u;
    SET_GPR_U32(ctx, 31, 0x1AE7A0u);
    ctx->pc = 0x1AE79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE798u;
    // 0x1ae79c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197DC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197DC8u, 0x1AE798u, 0x1AE7A0u)) {
        return;
    }
    ctx->pc = 0x1AE7A0u;
label_1ae7a0:
    // 0x1ae7a0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1ae7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ae7a4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1ae7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ae7a8: 0x93a70100  lbu         $a3, 0x100($sp)
    ctx->pc = 0x1ae7a8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ae7ac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ae7acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7b0: 0x23202  srl         $a2, $v0, 8
    ctx->pc = 0x1ae7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1ae7b4: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x1ae7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1ae7b8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1ae7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1ae7bc: 0xa2060252  sb          $a2, 0x252($s0)
    ctx->pc = 0x1ae7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 594), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ae7c0: 0xa2030250  sb          $v1, 0x250($s0)
    ctx->pc = 0x1ae7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 592), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ae7c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7c8: 0xa2020251  sb          $v0, 0x251($s0)
    ctx->pc = 0x1ae7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 593), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ae7cc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1ae7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ae7d0: 0xa2070253  sb          $a3, 0x253($s0)
    ctx->pc = 0x1ae7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 595), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ae7d4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1AE7D4u;
    SET_GPR_U32(ctx, 31, 0x1AE7DCu);
    ctx->pc = 0x1AE7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE7D4u;
    // 0x1ae7d8: 0x280b02d  daddu       $s6, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1AE7D4u, 0x1AE7DCu)) {
        return;
    }
    ctx->pc = 0x1AE7DCu;
label_1ae7dc:
    // 0x1ae7dc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1ae7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1ae7e0: 0x247390f8  addiu       $s3, $v1, -0x6F08
    ctx->pc = 0x1ae7e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938872));
    // 0x1ae7e4: 0x0  nop
    ctx->pc = 0x1ae7e4u;
    // NOP
label_1ae7e8:
    // 0x1ae7e8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ae7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7f0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1AE7F0u;
    SET_GPR_U32(ctx, 31, 0x1AE7F8u);
    ctx->pc = 0x1AE7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE7F0u;
    // 0x1ae7f4: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1AE7F0u, 0x1AE7F8u)) {
        return;
    }
    ctx->pc = 0x1AE7F8u;
label_1ae7f8:
    // 0x1ae7f8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1ae7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ae7fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae800: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1ae800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae804: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1AE804u;
    SET_GPR_U32(ctx, 31, 0x1AE80Cu);
    ctx->pc = 0x1AE808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE804u;
    // 0x1ae808: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1AE804u, 0x1AE80Cu)) {
        return;
    }
    ctx->pc = 0x1AE80Cu;
label_1ae80c:
    // 0x1ae80c: 0x83a30080  lb          $v1, 0x80($sp)
    ctx->pc = 0x1ae80cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ae810: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE810u;
    {
        const bool branch_taken_0x1ae810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE810u;
        // 0x1ae814: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae810) {
            ctx->pc = 0x1AE834u;
            goto label_1ae834;
        }
    }
    ctx->pc = 0x1AE818u;
    // 0x1ae818: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1AE818u;
    SET_GPR_U32(ctx, 31, 0x1AE820u);
    ctx->pc = 0x1AE81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE818u;
    // 0x1ae81c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1AE818u, 0x1AE820u)) {
        return;
    }
    ctx->pc = 0x1AE820u;
label_1ae820:
    // 0x1ae820: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ae820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae824: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae828: 0xc065c40  jal         func_197100
    ctx->pc = 0x1AE828u;
    SET_GPR_U32(ctx, 31, 0x1AE830u);
    ctx->pc = 0x1AE82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE828u;
    // 0x1ae82c: 0xae22fffc  sw          $v0, -0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967292), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1AE828u, 0x1AE830u)) {
        return;
    }
    ctx->pc = 0x1AE830u;
label_1ae830:
    // 0x1ae830: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ae830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1ae834:
    // 0x1ae834: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1ae834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1ae838: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1ae838u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1ae83c: 0x6a1ffea  bgez        $s5, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1AE83Cu;
    {
        const bool branch_taken_0x1ae83c = (GPR_S64(ctx, 21) >= 0);
        ctx->pc = 0x1AE840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE83Cu;
        // 0x1ae840: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae83c) {
            ctx->pc = 0x1AE7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae7e8;
        }
    }
    ctx->pc = 0x1AE844u;
    // 0x1ae844: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ae844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ae848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae84c: 0x24a5ba30  addiu       $a1, $a1, -0x45D0
    ctx->pc = 0x1ae84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949424));
    // 0x1ae850: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ae850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae854: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1AE854u;
    SET_GPR_U32(ctx, 31, 0x1AE85Cu);
    ctx->pc = 0x1AE858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE854u;
    // 0x1ae858: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1AE854u, 0x1AE85Cu)) {
        return;
    }
    ctx->pc = 0x1AE85Cu;
label_1ae85c:
    // 0x1ae85c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AE85Cu;
    {
        const bool branch_taken_0x1ae85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE85Cu;
        // 0x1ae860: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae85c) {
            ctx->pc = 0x1AE8B4u;
            goto label_1ae8b4;
        }
    }
    ctx->pc = 0x1AE864u;
    // 0x1ae864: 0xc06ce22  jal         func_1B3888
    ctx->pc = 0x1AE864u;
    SET_GPR_U32(ctx, 31, 0x1AE86Cu);
    ctx->pc = 0x1B3888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3888u, 0x1AE864u, 0x1AE86Cu)) {
        return;
    }
    ctx->pc = 0x1AE86Cu;
label_1ae86c:
    // 0x1ae86c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1ae86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ae870: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1ae870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ae874: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1ae874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1ae878: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x1ae878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ae87c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ae87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ae880: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE880u;
    {
        const bool branch_taken_0x1ae880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae880) {
            ctx->pc = 0x1AE884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE880u;
            // 0x1ae884: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE894u;
            goto label_1ae894;
        }
    }
    ctx->pc = 0x1AE888u;
    // 0x1ae888: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1AE888u;
    SET_GPR_U32(ctx, 31, 0x1AE890u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1AE888u, 0x1AE890u)) {
        return;
    }
    ctx->pc = 0x1AE890u;
label_1ae890:
    // 0x1ae890: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ae890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ae894:
    // 0x1ae894: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1AE894u;
    SET_GPR_U32(ctx, 31, 0x1AE89Cu);
    ctx->pc = 0x1AE898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE894u;
    // 0x1ae898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1AE894u, 0x1AE89Cu)) {
        return;
    }
    ctx->pc = 0x1AE89Cu;
label_1ae89c:
    // 0x1ae89c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ae89cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1ae8a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ae8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8a4: 0xc065c40  jal         func_197100
    ctx->pc = 0x1AE8A4u;
    SET_GPR_U32(ctx, 31, 0x1AE8ACu);
    ctx->pc = 0x1AE8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8A4u;
    // 0x1ae8a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1AE8A4u, 0x1AE8ACu)) {
        return;
    }
    ctx->pc = 0x1AE8ACu;
label_1ae8ac:
    // 0x1ae8ac: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1ae8acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1ae8b0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ae8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1ae8b4:
    // 0x1ae8b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8b8: 0x24a5ba40  addiu       $a1, $a1, -0x45C0
    ctx->pc = 0x1ae8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949440));
    // 0x1ae8bc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ae8bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8c0: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1AE8C0u;
    SET_GPR_U32(ctx, 31, 0x1AE8C8u);
    ctx->pc = 0x1AE8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8C0u;
    // 0x1ae8c4: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1AE8C0u, 0x1AE8C8u)) {
        return;
    }
    ctx->pc = 0x1AE8C8u;
label_1ae8c8:
    // 0x1ae8c8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AE8C8u;
    {
        const bool branch_taken_0x1ae8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8C8u;
        // 0x1ae8cc: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae8c8) {
            ctx->pc = 0x1AE920u;
            goto label_1ae920;
        }
    }
    ctx->pc = 0x1AE8D0u;
    // 0x1ae8d0: 0xc06ce26  jal         func_1B3898
    ctx->pc = 0x1AE8D0u;
    SET_GPR_U32(ctx, 31, 0x1AE8D8u);
    ctx->pc = 0x1B3898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3898u, 0x1AE8D0u, 0x1AE8D8u)) {
        return;
    }
    ctx->pc = 0x1AE8D8u;
label_1ae8d8:
    // 0x1ae8d8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1ae8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ae8dc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1ae8dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ae8e0: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1ae8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1ae8e4: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x1ae8e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ae8e8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ae8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ae8ec: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE8ECu;
    {
        const bool branch_taken_0x1ae8ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae8ec) {
            ctx->pc = 0x1AE8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE8ECu;
            // 0x1ae8f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE900u;
            goto label_1ae900;
        }
    }
    ctx->pc = 0x1AE8F4u;
    // 0x1ae8f4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1AE8F4u;
    SET_GPR_U32(ctx, 31, 0x1AE8FCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1AE8F4u, 0x1AE8FCu)) {
        return;
    }
    ctx->pc = 0x1AE8FCu;
label_1ae8fc:
    // 0x1ae8fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ae8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ae900:
    // 0x1ae900: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1AE900u;
    SET_GPR_U32(ctx, 31, 0x1AE908u);
    ctx->pc = 0x1AE904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE900u;
    // 0x1ae904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1AE900u, 0x1AE908u)) {
        return;
    }
    ctx->pc = 0x1AE908u;
label_1ae908:
    // 0x1ae908: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ae908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1ae90c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ae90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae910: 0xc065c40  jal         func_197100
    ctx->pc = 0x1AE910u;
    SET_GPR_U32(ctx, 31, 0x1AE918u);
    ctx->pc = 0x1AE914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE910u;
    // 0x1ae914: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1AE910u, 0x1AE918u)) {
        return;
    }
    ctx->pc = 0x1AE918u;
label_1ae918:
    // 0x1ae918: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1ae918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1ae91c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ae91cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1ae920:
    // 0x1ae920: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae924: 0x24a5ba50  addiu       $a1, $a1, -0x45B0
    ctx->pc = 0x1ae924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949456));
    // 0x1ae928: 0xc065ea4  jal         func_197A90
    ctx->pc = 0x1AE928u;
    SET_GPR_U32(ctx, 31, 0x1AE930u);
    ctx->pc = 0x1AE92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE928u;
    // 0x1ae92c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197A90u, 0x1AE928u, 0x1AE930u)) {
        return;
    }
    ctx->pc = 0x1AE930u;
label_1ae930:
    // 0x1ae930: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1ae930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1ae934: 0xc06c952  jal         func_1B2548
    ctx->pc = 0x1AE934u;
    SET_GPR_U32(ctx, 31, 0x1AE93Cu);
    ctx->pc = 0x1AE938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE934u;
    // 0x1ae938: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2548u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2548u, 0x1AE934u, 0x1AE93Cu)) {
        return;
    }
    ctx->pc = 0x1AE93Cu;
label_1ae93c:
    // 0x1ae93c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1ae93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1ae940: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AE940u;
    {
        const bool branch_taken_0x1ae940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE940u;
        // 0x1ae944: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae940) {
            ctx->pc = 0x1AE968u;
            goto label_1ae968;
        }
    }
    ctx->pc = 0x1AE948u;
    // 0x1ae948: 0xc06bc68  jal         func_1AF1A0
    ctx->pc = 0x1AE948u;
    SET_GPR_U32(ctx, 31, 0x1AE950u);
    ctx->pc = 0x1AE94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE948u;
    // 0x1ae94c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF1A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF1A0u, 0x1AE948u, 0x1AE950u)) {
        return;
    }
    ctx->pc = 0x1AE950u;
label_1ae950:
    // 0x1ae950: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ae950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ae954: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x1ae954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x1ae958: 0x24a5ba70  addiu       $a1, $a1, -0x4590
    ctx->pc = 0x1ae958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949488));
    // 0x1ae95c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae960: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1AE960u;
    SET_GPR_U32(ctx, 31, 0x1AE968u);
    ctx->pc = 0x1AE964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE960u;
    // 0x1ae964: 0x27a60104  addiu       $a2, $sp, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1AE960u, 0x1AE968u)) {
        return;
    }
    ctx->pc = 0x1AE968u;
label_1ae968:
    // 0x1ae968: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ae968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ae96c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae970: 0x24a5ba80  addiu       $a1, $a1, -0x4580
    ctx->pc = 0x1ae970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949504));
    // 0x1ae974: 0xc065ea4  jal         func_197A90
    ctx->pc = 0x1AE974u;
    SET_GPR_U32(ctx, 31, 0x1AE97Cu);
    ctx->pc = 0x1AE978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE974u;
    // 0x1ae978: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197A90u, 0x1AE974u, 0x1AE97Cu)) {
        return;
    }
    ctx->pc = 0x1AE97Cu;
label_1ae97c:
    // 0x1ae97c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ae97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae980: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x1ae980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1ae984: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x1ae984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1ae988: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x1ae988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1ae98c: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x1ae98cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1ae990: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x1ae990u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1ae994: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x1ae994u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1ae998: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x1ae998u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1ae99c: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x1ae99cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1ae9a0: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x1ae9a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1ae9a4: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1ae9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ae9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE9A8u;
        // 0x1ae9ac: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE9B0u;
}
