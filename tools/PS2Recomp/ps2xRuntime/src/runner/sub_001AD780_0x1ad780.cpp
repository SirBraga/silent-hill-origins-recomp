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

// Function: sub_001AD780
// Address: 0x1ad780 - 0x1adb30
void sub_001AD780_0x1ad780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD780_0x1ad780");
#endif

    switch (ctx->pc) {
        case 0x1ad7dcu: goto label_1ad7dc;
        case 0x1ad7ecu: goto label_1ad7ec;
        case 0x1ad800u: goto label_1ad800;
        case 0x1ad818u: goto label_1ad818;
        case 0x1ad88cu: goto label_1ad88c;
        case 0x1ad89cu: goto label_1ad89c;
        case 0x1ad8c4u: goto label_1ad8c4;
        case 0x1ad8e0u: goto label_1ad8e0;
        case 0x1ad8ecu: goto label_1ad8ec;
        case 0x1ad90cu: goto label_1ad90c;
        case 0x1ad920u: goto label_1ad920;
        case 0x1ad930u: goto label_1ad930;
        case 0x1ad970u: goto label_1ad970;
        case 0x1ad990u: goto label_1ad990;
        case 0x1ad9a4u: goto label_1ad9a4;
        case 0x1ad9b4u: goto label_1ad9b4;
        case 0x1ad9f4u: goto label_1ad9f4;
        case 0x1ada14u: goto label_1ada14;
        case 0x1ada28u: goto label_1ada28;
        case 0x1ada38u: goto label_1ada38;
        case 0x1ada78u: goto label_1ada78;
        case 0x1ada98u: goto label_1ada98;
        case 0x1adaacu: goto label_1adaac;
        case 0x1adabcu: goto label_1adabc;
        case 0x1adafcu: goto label_1adafc;
        default: break;
    }

    ctx->pc = 0x1ad780u;

    // 0x1ad780: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ad780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1ad784: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1ad784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1ad788: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ad788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad78c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1ad78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1ad790: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1ad790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1ad794: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1ad794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1ad798: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ad798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ad79c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1ad79cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad7a0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1ad7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1ad7a4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1ad7a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad7a8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1ad7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1ad7ac: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1ad7acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad7b0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1ad7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1ad7b4: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x1ad7b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad7b8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1ad7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1ad7bc: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x1ad7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x1ad7c0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1ad7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1ad7c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ad7c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad7c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ad7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ad7cc: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1ad7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1ad7d0: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x1ad7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x1ad7d4: 0xc08114c  jal         func_204530
    ctx->pc = 0x1AD7D4u;
    SET_GPR_U32(ctx, 31, 0x1AD7DCu);
    ctx->pc = 0x1AD7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD7D4u;
    // 0x1ad7d8: 0xafaa0008  sw          $t2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204530u, 0x1AD7D4u, 0x1AD7DCu)) {
        return;
    }
    ctx->pc = 0x1AD7DCu;
label_1ad7dc:
    // 0x1ad7dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD7DCu;
    {
        const bool branch_taken_0x1ad7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7DCu;
        // 0x1ad7e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7dc) {
            ctx->pc = 0x1AD7F0u;
            goto label_1ad7f0;
        }
    }
    ctx->pc = 0x1AD7E4u;
    // 0x1ad7e4: 0xc07cd8e  jal         func_1F3638
    ctx->pc = 0x1AD7E4u;
    SET_GPR_U32(ctx, 31, 0x1AD7ECu);
    ctx->pc = 0x1F3638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3638u, 0x1AD7E4u, 0x1AD7ECu)) {
        return;
    }
    ctx->pc = 0x1AD7ECu;
label_1ad7ec:
    // 0x1ad7ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ad7ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ad7f0:
    // 0x1ad7f0: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x1AD7F0u;
    {
        const bool branch_taken_0x1ad7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7F0u;
        // 0x1ad7f4: 0x240400cc  addiu       $a0, $zero, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7f0) {
            ctx->pc = 0x1ADAFCu;
            goto label_1adafc;
        }
    }
    ctx->pc = 0x1AD7F8u;
    // 0x1ad7f8: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1AD7F8u;
    SET_GPR_U32(ctx, 31, 0x1AD800u);
    ctx->pc = 0x1AD7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD7F8u;
    // 0x1ad7fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1AD7F8u, 0x1AD800u)) {
        return;
    }
    ctx->pc = 0x1AD800u;
label_1ad800:
    // 0x1ad800: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ad800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad804: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1ad804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1ad808: 0x2484b870  addiu       $a0, $a0, -0x4790
    ctx->pc = 0x1ad808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948976));
    // 0x1ad80c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ad80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1ad810: 0xc085ba8  jal         func_216EA0
    ctx->pc = 0x1AD810u;
    SET_GPR_U32(ctx, 31, 0x1AD818u);
    ctx->pc = 0x1AD814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD810u;
    // 0x1ad814: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x1AD810u, 0x1AD818u)) {
        return;
    }
    ctx->pc = 0x1AD818u;
label_1ad818:
    // 0x1ad818: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1ad818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1ad81c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1ad81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1ad820: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1ad820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1ad824: 0x24a38610  addiu       $v1, $a1, -0x79F0
    ctx->pc = 0x1ad824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936080));
    // 0x1ad828: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ad828u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8614u));
    // 0x1ad82c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD82Cu;
    {
        const bool branch_taken_0x1ad82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD82Cu;
        // 0x1ad830: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad82c) {
            ctx->pc = 0x1AD838u;
            goto label_1ad838;
        }
    }
    ctx->pc = 0x1AD834u;
    // 0x1ad834: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1ad834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_1ad838:
    // 0x1ad838: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1ad838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ad83c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD83Cu;
    {
        const bool branch_taken_0x1ad83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD83Cu;
        // 0x1ad840: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad83c) {
            ctx->pc = 0x1AD848u;
            goto label_1ad848;
        }
    }
    ctx->pc = 0x1AD844u;
    // 0x1ad844: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x1ad844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_1ad848:
    // 0x1ad848: 0x8ca28610  lw          $v0, -0x79F0($a1)
    ctx->pc = 0x1ad848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936080)));
    // 0x1ad84c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1ad84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1ad850: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ad850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ad854: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1ad854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1ad858: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ad858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ad85c: 0xac8390dc  sw          $v1, -0x6F24($a0)
    ctx->pc = 0x1ad85cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3390DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3390DCu, _value); } while (0);
    // 0x1ad860: 0xaca28610  sw          $v0, -0x79F0($a1)
    ctx->pc = 0x1ad860u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294936080), GPR_U32(ctx, 2));
    // 0x1ad864: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1ad864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad868: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x1ad868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1ad86c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad870: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x1ad870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ad874: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1ad874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1ad878: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1ad878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1ad87c: 0x2657004c  addiu       $s7, $s2, 0x4C
    ctx->pc = 0x1ad87cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x1ad880: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1ad880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1ad884: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1AD884u;
    SET_GPR_U32(ctx, 31, 0x1AD88Cu);
    ctx->pc = 0x1AD888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD884u;
    // 0x1ad888: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1AD884u, 0x1AD88Cu)) {
        return;
    }
    ctx->pc = 0x1AD88Cu;
label_1ad88c:
    // 0x1ad88c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1ad88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad890: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad894: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1AD894u;
    SET_GPR_U32(ctx, 31, 0x1AD89Cu);
    ctx->pc = 0x1AD898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD894u;
    // 0x1ad898: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1AD894u, 0x1AD89Cu)) {
        return;
    }
    ctx->pc = 0x1AD89Cu;
label_1ad89c:
    // 0x1ad89c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1ad89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1ad8a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ad8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad8a4: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x1ad8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
    // 0x1ad8a8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD8A8u;
    {
        const bool branch_taken_0x1ad8a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8A8u;
        // 0x1ad8ac: 0xae4000c4  sw          $zero, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad8a8) {
            ctx->pc = 0x1AD8BCu;
            goto label_1ad8bc;
        }
    }
    ctx->pc = 0x1AD8B0u;
    // 0x1ad8b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad8b4: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x1ad8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x1ad8b8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1ad8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_1ad8bc:
    // 0x1ad8bc: 0xc06b8a8  jal         func_1AE2A0
    ctx->pc = 0x1AD8BCu;
    SET_GPR_U32(ctx, 31, 0x1AD8C4u);
    ctx->pc = 0x1AD8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD8BCu;
    // 0x1ad8c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE2A0u, 0x1AD8BCu, 0x1AD8C4u)) {
        return;
    }
    ctx->pc = 0x1AD8C4u;
label_1ad8c4:
    // 0x1ad8c4: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x1ad8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
    // 0x1ad8c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ad8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad8cc: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1ad8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x1ad8d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ad8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad8d4: 0xae4000c8  sw          $zero, 0xC8($s2)
    ctx->pc = 0x1ad8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
    // 0x1ad8d8: 0xc06b880  jal         func_1AE200
    ctx->pc = 0x1AD8D8u;
    SET_GPR_U32(ctx, 31, 0x1AD8E0u);
    ctx->pc = 0x1AD8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD8D8u;
    // 0x1ad8dc: 0x26460034  addiu       $a2, $s2, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE200u, 0x1AD8D8u, 0x1AD8E0u)) {
        return;
    }
    ctx->pc = 0x1AD8E0u;
label_1ad8e0:
    // 0x1ad8e0: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x1ad8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
    // 0x1ad8e4: 0xc06b568  jal         func_1AD5A0
    ctx->pc = 0x1AD8E4u;
    SET_GPR_U32(ctx, 31, 0x1AD8ECu);
    ctx->pc = 0x1AD8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD8E4u;
    // 0x1ad8e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AD5A0u, 0x1AD8E4u, 0x1AD8ECu)) {
        return;
    }
    ctx->pc = 0x1AD8ECu;
label_1ad8ec:
    // 0x1ad8ec: 0x12800020  beqz        $s4, . + 4 + (0x20 << 2)
    ctx->pc = 0x1AD8ECu;
    {
        const bool branch_taken_0x1ad8ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8ECu;
        // 0x1ad8f0: 0x2413001c  addiu       $s3, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad8ec) {
            ctx->pc = 0x1AD970u;
            goto label_1ad970;
        }
    }
    ctx->pc = 0x1AD8F4u;
    // 0x1ad8f4: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x1ad8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x1ad8f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ad8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad8fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ad8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad900: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x1ad900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ad904: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1AD904u;
    SET_GPR_U32(ctx, 31, 0x1AD90Cu);
    ctx->pc = 0x1AD908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD904u;
    // 0x1ad908: 0x728821  addu        $s1, $v1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1AD904u, 0x1AD90Cu)) {
        return;
    }
    ctx->pc = 0x1AD90Cu;
label_1ad90c:
    // 0x1ad90c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ad90cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad910: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AD910u;
    {
        const bool branch_taken_0x1ad910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD910u;
        // 0x1ad914: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad910) {
            ctx->pc = 0x1AD938u;
            goto label_1ad938;
        }
    }
    ctx->pc = 0x1AD918u;
    // 0x1ad918: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1AD918u;
    SET_GPR_U32(ctx, 31, 0x1AD920u);
    ctx->pc = 0x1AD91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD918u;
    // 0x1ad91c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1AD918u, 0x1AD920u)) {
        return;
    }
    ctx->pc = 0x1AD920u;
label_1ad920:
    // 0x1ad920: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ad920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad928: 0xc081baa  jal         func_206EA8
    ctx->pc = 0x1AD928u;
    SET_GPR_U32(ctx, 31, 0x1AD930u);
    ctx->pc = 0x1AD92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD928u;
    // 0x1ad92c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206EA8u, 0x1AD928u, 0x1AD930u)) {
        return;
    }
    ctx->pc = 0x1AD930u;
label_1ad930:
    // 0x1ad930: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ad930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ad934: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ad934u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ad938:
    // 0x1ad938: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x1ad938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x1ad93c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ad93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad940: 0x532818  mult        $a1, $v0, $s3
    ctx->pc = 0x1ad940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1ad944: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x1ad944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x1ad948: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ad948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ad94c: 0x8e4300bc  lw          $v1, 0xBC($s2)
    ctx->pc = 0x1ad94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x1ad950: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1ad950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad954: 0x731018  mult        $v0, $v1, $s3
    ctx->pc = 0x1ad954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ad958: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1ad958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ad95c: 0xac650054  sw          $a1, 0x54($v1)
    ctx->pc = 0x1ad95cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 5));
    // 0x1ad960: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x1ad960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x1ad964: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ad964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ad968: 0xc06b568  jal         func_1AD5A0
    ctx->pc = 0x1AD968u;
    SET_GPR_U32(ctx, 31, 0x1AD970u);
    ctx->pc = 0x1AD96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD968u;
    // 0x1ad96c: 0xae4200bc  sw          $v0, 0xBC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AD5A0u, 0x1AD968u, 0x1AD970u)) {
        return;
    }
    ctx->pc = 0x1AD970u;
label_1ad970:
    // 0x1ad970: 0x12a00020  beqz        $s5, . + 4 + (0x20 << 2)
    ctx->pc = 0x1AD970u;
    {
        const bool branch_taken_0x1ad970 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD970u;
        // 0x1ad974: 0x2413001c  addiu       $s3, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad970) {
            ctx->pc = 0x1AD9F4u;
            goto label_1ad9f4;
        }
    }
    ctx->pc = 0x1AD978u;
    // 0x1ad978: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ad978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ad97c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ad97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad980: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ad980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad984: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x1ad984u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ad988: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1AD988u;
    SET_GPR_U32(ctx, 31, 0x1AD990u);
    ctx->pc = 0x1AD98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD988u;
    // 0x1ad98c: 0x708821  addu        $s1, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1AD988u, 0x1AD990u)) {
        return;
    }
    ctx->pc = 0x1AD990u;
label_1ad990:
    // 0x1ad990: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ad990u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad994: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AD994u;
    {
        const bool branch_taken_0x1ad994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD994u;
        // 0x1ad998: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad994) {
            ctx->pc = 0x1AD9BCu;
            goto label_1ad9bc;
        }
    }
    ctx->pc = 0x1AD99Cu;
    // 0x1ad99c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1AD99Cu;
    SET_GPR_U32(ctx, 31, 0x1AD9A4u);
    ctx->pc = 0x1AD9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD99Cu;
    // 0x1ad9a0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1AD99Cu, 0x1AD9A4u)) {
        return;
    }
    ctx->pc = 0x1AD9A4u;
label_1ad9a4:
    // 0x1ad9a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ad9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad9a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad9ac: 0xc081baa  jal         func_206EA8
    ctx->pc = 0x1AD9ACu;
    SET_GPR_U32(ctx, 31, 0x1AD9B4u);
    ctx->pc = 0x1AD9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD9ACu;
    // 0x1ad9b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206EA8u, 0x1AD9ACu, 0x1AD9B4u)) {
        return;
    }
    ctx->pc = 0x1AD9B4u;
label_1ad9b4:
    // 0x1ad9b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ad9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ad9b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ad9b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ad9bc:
    // 0x1ad9bc: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ad9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ad9c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad9c4: 0x532818  mult        $a1, $v0, $s3
    ctx->pc = 0x1ad9c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1ad9c8: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x1ad9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1ad9cc: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x1ad9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    // 0x1ad9d0: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x1ad9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ad9d4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1ad9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ad9d8: 0x731018  mult        $v0, $v1, $s3
    ctx->pc = 0x1ad9d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ad9dc: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1ad9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ad9e0: 0xac650054  sw          $a1, 0x54($v1)
    ctx->pc = 0x1ad9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 5));
    // 0x1ad9e4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ad9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ad9e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ad9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ad9ec: 0xc06b568  jal         func_1AD5A0
    ctx->pc = 0x1AD9ECu;
    SET_GPR_U32(ctx, 31, 0x1AD9F4u);
    ctx->pc = 0x1AD9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD9ECu;
    // 0x1ad9f0: 0xae0200bc  sw          $v0, 0xBC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AD5A0u, 0x1AD9ECu, 0x1AD9F4u)) {
        return;
    }
    ctx->pc = 0x1AD9F4u;
label_1ad9f4:
    // 0x1ad9f4: 0x12c00020  beqz        $s6, . + 4 + (0x20 << 2)
    ctx->pc = 0x1AD9F4u;
    {
        const bool branch_taken_0x1ad9f4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD9F4u;
        // 0x1ad9f8: 0x2413001c  addiu       $s3, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad9f4) {
            ctx->pc = 0x1ADA78u;
            goto label_1ada78;
        }
    }
    ctx->pc = 0x1AD9FCu;
    // 0x1ad9fc: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ad9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ada00: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ada00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ada04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ada08: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x1ada08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ada0c: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1ADA0Cu;
    SET_GPR_U32(ctx, 31, 0x1ADA14u);
    ctx->pc = 0x1ADA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA0Cu;
    // 0x1ada10: 0x708821  addu        $s1, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1ADA0Cu, 0x1ADA14u)) {
        return;
    }
    ctx->pc = 0x1ADA14u;
label_1ada14:
    // 0x1ada14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ada14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada18: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ADA18u;
    {
        const bool branch_taken_0x1ada18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA18u;
        // 0x1ada1c: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada18) {
            ctx->pc = 0x1ADA40u;
            goto label_1ada40;
        }
    }
    ctx->pc = 0x1ADA20u;
    // 0x1ada20: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1ADA20u;
    SET_GPR_U32(ctx, 31, 0x1ADA28u);
    ctx->pc = 0x1ADA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA20u;
    // 0x1ada24: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1ADA20u, 0x1ADA28u)) {
        return;
    }
    ctx->pc = 0x1ADA28u;
label_1ada28:
    // 0x1ada28: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ada28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ada2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada30: 0xc081baa  jal         func_206EA8
    ctx->pc = 0x1ADA30u;
    SET_GPR_U32(ctx, 31, 0x1ADA38u);
    ctx->pc = 0x1ADA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA30u;
    // 0x1ada34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206EA8u, 0x1ADA30u, 0x1ADA38u)) {
        return;
    }
    ctx->pc = 0x1ADA38u;
label_1ada38:
    // 0x1ada38: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ada38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ada3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ada3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ada40:
    // 0x1ada40: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ada40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ada44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ada44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada48: 0x532818  mult        $a1, $v0, $s3
    ctx->pc = 0x1ada48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1ada4c: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x1ada4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1ada50: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x1ada50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    // 0x1ada54: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x1ada54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ada58: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1ada58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ada5c: 0x731018  mult        $v0, $v1, $s3
    ctx->pc = 0x1ada5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ada60: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1ada60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ada64: 0xac650054  sw          $a1, 0x54($v1)
    ctx->pc = 0x1ada64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 5));
    // 0x1ada68: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ada68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ada6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ada6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ada70: 0xc06b568  jal         func_1AD5A0
    ctx->pc = 0x1ADA70u;
    SET_GPR_U32(ctx, 31, 0x1ADA78u);
    ctx->pc = 0x1ADA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA70u;
    // 0x1ada74: 0xae0200bc  sw          $v0, 0xBC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AD5A0u, 0x1ADA70u, 0x1ADA78u)) {
        return;
    }
    ctx->pc = 0x1ADA78u;
label_1ada78:
    // 0x1ada78: 0x13c00020  beqz        $fp, . + 4 + (0x20 << 2)
    ctx->pc = 0x1ADA78u;
    {
        const bool branch_taken_0x1ada78 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA78u;
        // 0x1ada7c: 0x2413001c  addiu       $s3, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada78) {
            ctx->pc = 0x1ADAFCu;
            goto label_1adafc;
        }
    }
    ctx->pc = 0x1ADA80u;
    // 0x1ada80: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ada80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ada84: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1ada84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ada88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ada8c: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x1ada8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ada90: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1ADA90u;
    SET_GPR_U32(ctx, 31, 0x1ADA98u);
    ctx->pc = 0x1ADA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA90u;
    // 0x1ada94: 0x708821  addu        $s1, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1ADA90u, 0x1ADA98u)) {
        return;
    }
    ctx->pc = 0x1ADA98u;
label_1ada98:
    // 0x1ada98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ada98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada9c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ADA9Cu;
    {
        const bool branch_taken_0x1ada9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA9Cu;
        // 0x1adaa0: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada9c) {
            ctx->pc = 0x1ADAC4u;
            goto label_1adac4;
        }
    }
    ctx->pc = 0x1ADAA4u;
    // 0x1adaa4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1ADAA4u;
    SET_GPR_U32(ctx, 31, 0x1ADAACu);
    ctx->pc = 0x1ADAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADAA4u;
    // 0x1adaa8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1ADAA4u, 0x1ADAACu)) {
        return;
    }
    ctx->pc = 0x1ADAACu;
label_1adaac:
    // 0x1adaac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1adaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1adab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adab4: 0xc081baa  jal         func_206EA8
    ctx->pc = 0x1ADAB4u;
    SET_GPR_U32(ctx, 31, 0x1ADABCu);
    ctx->pc = 0x1ADAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADAB4u;
    // 0x1adab8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206EA8u, 0x1ADAB4u, 0x1ADABCu)) {
        return;
    }
    ctx->pc = 0x1ADABCu;
label_1adabc:
    // 0x1adabc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1adabcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1adac0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1adac0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1adac4:
    // 0x1adac4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1adac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1adac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adacc: 0x532818  mult        $a1, $v0, $s3
    ctx->pc = 0x1adaccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1adad0: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x1adad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1adad4: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x1adad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    // 0x1adad8: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x1adad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1adadc: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1adadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1adae0: 0x731018  mult        $v0, $v1, $s3
    ctx->pc = 0x1adae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1adae4: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1adae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1adae8: 0xac650054  sw          $a1, 0x54($v1)
    ctx->pc = 0x1adae8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 5));
    // 0x1adaec: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1adaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1adaf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1adaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1adaf4: 0xc06b568  jal         func_1AD5A0
    ctx->pc = 0x1ADAF4u;
    SET_GPR_U32(ctx, 31, 0x1ADAFCu);
    ctx->pc = 0x1ADAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADAF4u;
    // 0x1adaf8: 0xae0200bc  sw          $v0, 0xBC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AD5A0u, 0x1ADAF4u, 0x1ADAFCu)) {
        return;
    }
    ctx->pc = 0x1ADAFCu;
label_1adafc:
    // 0x1adafc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1adafcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb00: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1adb00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1adb04: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1adb04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1adb08: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1adb08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1adb0c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1adb0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1adb10: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1adb10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1adb14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1adb14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1adb18: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1adb18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adb1c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1adb1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1adb20: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1adb20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adb24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1adb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adb28: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB28u;
        // 0x1adb2c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADB30u;
}
