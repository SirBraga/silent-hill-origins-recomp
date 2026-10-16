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

// Function: sub_00262748
// Address: 0x262748 - 0x262880
void sub_00262748_0x262748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262748_0x262748");
#endif

    switch (ctx->pc) {
        case 0x262774u: goto label_262774;
        case 0x26277cu: goto label_26277c;
        case 0x262784u: goto label_262784;
        case 0x26278cu: goto label_26278c;
        case 0x262798u: goto label_262798;
        case 0x26285cu: goto label_26285c;
        case 0x262864u: goto label_262864;
        default: break;
    }

    ctx->pc = 0x262748u;

    // 0x262748: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x262748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26274c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x26274cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x262750: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x262750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x262754: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x262754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x262758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26275c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26275cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262760: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x262760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x262764: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x262764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262768: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x262768u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26276c: 0xc09892a  jal         func_2624A8
    ctx->pc = 0x26276Cu;
    SET_GPR_U32(ctx, 31, 0x262774u);
    ctx->pc = 0x262770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26276Cu;
    // 0x262770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2624A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2624A8u, 0x26276Cu, 0x262774u)) {
        return;
    }
    ctx->pc = 0x262774u;
label_262774:
    // 0x262774: 0xc09894a  jal         func_262528
    ctx->pc = 0x262774u;
    SET_GPR_U32(ctx, 31, 0x26277Cu);
    ctx->pc = 0x262778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262774u;
    // 0x262778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x262528u, 0x262774u, 0x26277Cu)) {
        return;
    }
    ctx->pc = 0x26277Cu;
label_26277c:
    // 0x26277c: 0xc09894c  jal         func_262530
    ctx->pc = 0x26277Cu;
    SET_GPR_U32(ctx, 31, 0x262784u);
    ctx->pc = 0x262780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26277Cu;
    // 0x262780: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x262530u, 0x26277Cu, 0x262784u)) {
        return;
    }
    ctx->pc = 0x262784u;
label_262784:
    // 0x262784: 0xc098972  jal         func_2625C8
    ctx->pc = 0x262784u;
    SET_GPR_U32(ctx, 31, 0x26278Cu);
    ctx->pc = 0x262788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262784u;
    // 0x262788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2625C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2625C8u, 0x262784u, 0x26278Cu)) {
        return;
    }
    ctx->pc = 0x26278Cu;
label_26278c:
    // 0x26278c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26278cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262790: 0xc098978  jal         func_2625E0
    ctx->pc = 0x262790u;
    SET_GPR_U32(ctx, 31, 0x262798u);
    ctx->pc = 0x262794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262790u;
    // 0x262794: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2625E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2625E0u, 0x262790u, 0x262798u)) {
        return;
    }
    ctx->pc = 0x262798u;
label_262798:
    // 0x262798: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x262798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26279c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26279cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2627a0: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x2627a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2627a4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2627A4u;
    {
        const bool branch_taken_0x2627a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2627A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627A4u;
        // 0x2627a8: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627a4) {
            ctx->pc = 0x2627E4u;
            goto label_2627e4;
        }
    }
    ctx->pc = 0x2627ACu;
    // 0x2627ac: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2627acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2627b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2627B0u;
    {
        const bool branch_taken_0x2627b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2627B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627B0u;
        // 0x2627b4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627b0) {
            ctx->pc = 0x2627C8u;
            goto label_2627c8;
        }
    }
    ctx->pc = 0x2627B8u;
    // 0x2627b8: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x2627b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x2627bc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2627BCu;
    {
        const bool branch_taken_0x2627bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2627bc) {
            ctx->pc = 0x2627C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2627BCu;
            // 0x2627c0: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2627DCu;
            goto label_2627dc;
        }
    }
    ctx->pc = 0x2627C4u;
    // 0x2627c4: 0x0  nop
    ctx->pc = 0x2627c4u;
    // NOP
label_2627c8:
    // 0x2627c8: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x2627c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x2627cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2627ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2627d0: 0x90423550  lbu         $v0, 0x3550($v0)
    ctx->pc = 0x2627d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x2627d4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2627D4u;
    {
        const bool branch_taken_0x2627d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2627D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627D4u;
        // 0x2627d8: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627d4) {
            ctx->pc = 0x262838u;
            goto label_262838;
        }
    }
    ctx->pc = 0x2627DCu;
label_2627dc:
    // 0x2627dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2627DCu;
    {
        const bool branch_taken_0x2627dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2627E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627DCu;
        // 0x2627e0: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627dc) {
            ctx->pc = 0x2627FCu;
            goto label_2627fc;
        }
    }
    ctx->pc = 0x2627E4u;
label_2627e4:
    // 0x2627e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2627e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2627e8: 0xa2420029  sb          $v0, 0x29($s2)
    ctx->pc = 0x2627e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x2627ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2627ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2627f0: 0x90633550  lbu         $v1, 0x3550($v1)
    ctx->pc = 0x2627f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x2627f4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2627F4u;
    {
        const bool branch_taken_0x2627f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2627F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627F4u;
        // 0x2627f8: 0xa2430028  sb          $v1, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627f4) {
            ctx->pc = 0x26283Cu;
            goto label_26283c;
        }
    }
    ctx->pc = 0x2627FCu;
label_2627fc:
    // 0x2627fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2627FCu;
    {
        const bool branch_taken_0x2627fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627FCu;
        // 0x262800: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627fc) {
            ctx->pc = 0x262818u;
            goto label_262818;
        }
    }
    ctx->pc = 0x262804u;
    // 0x262804: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x262804u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x262808: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x262808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26280c: 0x90423550  lbu         $v0, 0x3550($v0)
    ctx->pc = 0x26280cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x262810: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x262810u;
    {
        const bool branch_taken_0x262810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262810u;
        // 0x262814: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262810) {
            ctx->pc = 0x262838u;
            goto label_262838;
        }
    }
    ctx->pc = 0x262818u;
label_262818:
    // 0x262818: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x262818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x26281c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26281Cu;
    {
        const bool branch_taken_0x26281c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26281Cu;
        // 0x262820: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26281c) {
            ctx->pc = 0x262828u;
            goto label_262828;
        }
    }
    ctx->pc = 0x262824u;
    // 0x262824: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x262824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_262828:
    // 0x262828: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x262828u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x26282c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26282cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x262830: 0x90423550  lbu         $v0, 0x3550($v0)
    ctx->pc = 0x262830u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x262834: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x262834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_262838:
    // 0x262838: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x262838u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
label_26283c:
    // 0x26283c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26283cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x262840: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x262840u;
    {
        const bool branch_taken_0x262840 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x262840) {
            ctx->pc = 0x262854u;
            goto label_262854;
        }
    }
    ctx->pc = 0x262848u;
    // 0x262848: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x262848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x26284c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x26284cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x262850: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x262850u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
label_262854:
    // 0x262854: 0xc0989ae  jal         func_2626B8
    ctx->pc = 0x262854u;
    SET_GPR_U32(ctx, 31, 0x26285Cu);
    ctx->pc = 0x262858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262854u;
    // 0x262858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2626B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2626B8u, 0x262854u, 0x26285Cu)) {
        return;
    }
    ctx->pc = 0x26285Cu;
label_26285c:
    // 0x26285c: 0xc0989b6  jal         func_2626D8
    ctx->pc = 0x26285Cu;
    SET_GPR_U32(ctx, 31, 0x262864u);
    ctx->pc = 0x262860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26285Cu;
    // 0x262860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2626D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2626D8u, 0x26285Cu, 0x262864u)) {
        return;
    }
    ctx->pc = 0x262864u;
label_262864:
    // 0x262864: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x262864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x262868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26286c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x26286cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262870: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x262870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262874: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x262874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262878: 0x3e00008  jr          $ra
    ctx->pc = 0x262878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262878u;
        // 0x26287c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262880u;
}
