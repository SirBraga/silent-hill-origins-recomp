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

// Function: sub_0014F540
// Address: 0x14f540 - 0x14f790
void sub_0014F540_0x14f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F540_0x14f540");
#endif

    switch (ctx->pc) {
        case 0x14f580u: goto label_14f580;
        case 0x14f590u: goto label_14f590;
        case 0x14f5a0u: goto label_14f5a0;
        case 0x14f5b4u: goto label_14f5b4;
        case 0x14f5bcu: goto label_14f5bc;
        case 0x14f5c8u: goto label_14f5c8;
        case 0x14f5d4u: goto label_14f5d4;
        case 0x14f5e4u: goto label_14f5e4;
        case 0x14f5f4u: goto label_14f5f4;
        case 0x14f5fcu: goto label_14f5fc;
        case 0x14f610u: goto label_14f610;
        case 0x14f664u: goto label_14f664;
        case 0x14f66cu: goto label_14f66c;
        case 0x14f688u: goto label_14f688;
        case 0x14f6dcu: goto label_14f6dc;
        case 0x14f6e4u: goto label_14f6e4;
        case 0x14f708u: goto label_14f708;
        case 0x14f71cu: goto label_14f71c;
        case 0x14f724u: goto label_14f724;
        case 0x14f740u: goto label_14f740;
        case 0x14f754u: goto label_14f754;
        case 0x14f75cu: goto label_14f75c;
        case 0x14f770u: goto label_14f770;
        default: break;
    }

    ctx->pc = 0x14f540u;

    // 0x14f540: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14f540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14f544: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x14f544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x14f548: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x14f548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x14f54c: 0x24422268  addiu       $v0, $v0, 0x2268
    ctx->pc = 0x14f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8808));
    // 0x14f550: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x14f550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x14f554: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x14f554u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f558: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x14f558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x14f55c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14f55cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f560: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14f560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14f564: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x14f564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x14f568: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x14f568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14f56c: 0x24a5f890  addiu       $a1, $a1, -0x770
    ctx->pc = 0x14f56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965392));
    // 0x14f570: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14f570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14f574: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x14f574u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x14f578: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x14F578u;
    SET_GPR_U32(ctx, 31, 0x14F580u);
    ctx->pc = 0x14F57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F578u;
    // 0x14f57c: 0x26720008  addiu       $s2, $s3, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x14F578u, 0x14F580u)) {
        return;
    }
    ctx->pc = 0x14F580u;
label_14f580:
    // 0x14f580: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x14f580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x14f584: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14f584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f588: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x14F588u;
    SET_GPR_U32(ctx, 31, 0x14F590u);
    ctx->pc = 0x14F58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F588u;
    // 0x14f58c: 0x24a5f888  addiu       $a1, $a1, -0x778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x14F588u, 0x14F590u)) {
        return;
    }
    ctx->pc = 0x14F590u;
label_14f590:
    // 0x14f590: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x14f590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x14f594: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14f594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f598: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x14F598u;
    SET_GPR_U32(ctx, 31, 0x14F5A0u);
    ctx->pc = 0x14F59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F598u;
    // 0x14f59c: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x14F598u, 0x14F5A0u)) {
        return;
    }
    ctx->pc = 0x14F5A0u;
label_14f5a0:
    // 0x14f5a0: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x14f5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x14f5a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14f5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f5a8: 0x2610efb8  addiu       $s0, $s0, -0x1048
    ctx->pc = 0x14f5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963128));
    // 0x14f5ac: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x14F5ACu;
    SET_GPR_U32(ctx, 31, 0x14F5B4u);
    ctx->pc = 0x14F5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F5ACu;
    // 0x14f5b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x14F5ACu, 0x14F5B4u)) {
        return;
    }
    ctx->pc = 0x14F5B4u;
label_14f5b4:
    // 0x14f5b4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x14F5B4u;
    SET_GPR_U32(ctx, 31, 0x14F5BCu);
    ctx->pc = 0x14F5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F5B4u;
    // 0x14f5b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x14F5B4u, 0x14F5BCu)) {
        return;
    }
    ctx->pc = 0x14F5BCu;
label_14f5bc:
    // 0x14f5bc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14f5c0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x14F5C0u;
    SET_GPR_U32(ctx, 31, 0x14F5C8u);
    ctx->pc = 0x14F5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F5C0u;
    // 0x14f5c4: 0x2484efc0  addiu       $a0, $a0, -0x1040 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x14F5C0u, 0x14F5C8u)) {
        return;
    }
    ctx->pc = 0x14F5C8u;
label_14f5c8:
    // 0x14f5c8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14f5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14f5cc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x14F5CCu;
    SET_GPR_U32(ctx, 31, 0x14F5D4u);
    ctx->pc = 0x14F5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F5CCu;
    // 0x14f5d0: 0x2484efc8  addiu       $a0, $a0, -0x1038 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x14F5CCu, 0x14F5D4u)) {
        return;
    }
    ctx->pc = 0x14F5D4u;
label_14f5d4:
    // 0x14f5d4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x14f5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x14f5d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14f5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f5dc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x14F5DCu;
    SET_GPR_U32(ctx, 31, 0x14F5E4u);
    ctx->pc = 0x14F5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F5DCu;
    // 0x14f5e0: 0x24a544c8  addiu       $a1, $a1, 0x44C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x14F5DCu, 0x14F5E4u)) {
        return;
    }
    ctx->pc = 0x14F5E4u;
label_14f5e4:
    // 0x14f5e4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x14f5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x14f5e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14f5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f5ec: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x14F5ECu;
    SET_GPR_U32(ctx, 31, 0x14F5F4u);
    ctx->pc = 0x14F5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F5ECu;
    // 0x14f5f0: 0x24a5f8d0  addiu       $a1, $a1, -0x730 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x14F5ECu, 0x14F5F4u)) {
        return;
    }
    ctx->pc = 0x14F5F4u;
label_14f5f4:
    // 0x14f5f4: 0xc053d06  jal         func_14F418
    ctx->pc = 0x14F5F4u;
    SET_GPR_U32(ctx, 31, 0x14F5FCu);
    ctx->pc = 0x14F5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F5F4u;
    // 0x14f5f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14F418u, 0x14F5F4u, 0x14F5FCu)) {
        return;
    }
    ctx->pc = 0x14F5FCu;
label_14f5fc:
    // 0x14f5fc: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x14f5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14f600: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x14F600u;
    {
        const bool branch_taken_0x14f600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f600) {
            ctx->pc = 0x14F604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F600u;
            // 0x14f604: 0x8e500008  lw          $s0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F67Cu;
            goto label_14f67c;
        }
    }
    ctx->pc = 0x14F608u;
    // 0x14f608: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x14f608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x14f60c: 0x0  nop
    ctx->pc = 0x14f60cu;
    // NOP
label_14f610:
    // 0x14f610: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F610u;
    {
        const bool branch_taken_0x14f610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f610) {
            ctx->pc = 0x14F614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F610u;
            // 0x14f614: 0x8e030180  lw          $v1, 0x180($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F624u;
            goto label_14f624;
        }
    }
    ctx->pc = 0x14F618u;
    // 0x14f618: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x14f618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14f61c: 0xac620180  sw          $v0, 0x180($v1)
    ctx->pc = 0x14f61cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 384), GPR_U32(ctx, 2));
    // 0x14f620: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x14f620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_14f624:
    // 0x14f624: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F624u;
    {
        const bool branch_taken_0x14f624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f624) {
            ctx->pc = 0x14F628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F624u;
            // 0x14f628: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F638u;
            goto label_14f638;
        }
    }
    ctx->pc = 0x14F62Cu;
    // 0x14f62c: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x14f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x14f630: 0xac620184  sw          $v0, 0x184($v1)
    ctx->pc = 0x14f630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 388), GPR_U32(ctx, 2));
    // 0x14f634: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14f634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14f638:
    // 0x14f638: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F638u;
    {
        const bool branch_taken_0x14f638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x14f638) {
            ctx->pc = 0x14F63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F638u;
            // 0x14f63c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F64Cu;
            goto label_14f64c;
        }
    }
    ctx->pc = 0x14F640u;
    // 0x14f640: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x14f640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14f644: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x14f644u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x14f648: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x14f648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_14f64c:
    // 0x14f64c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14f650: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F650u;
    {
        const bool branch_taken_0x14f650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F650u;
        // 0x14f654: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f650) {
            ctx->pc = 0x14F66Cu;
            goto label_14f66c;
        }
    }
    ctx->pc = 0x14F658u;
    // 0x14f658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f65c: 0xc053bc6  jal         func_14EF18
    ctx->pc = 0x14F65Cu;
    SET_GPR_U32(ctx, 31, 0x14F664u);
    ctx->pc = 0x14F660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F65Cu;
    // 0x14f660: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14EF18u, 0x14F65Cu, 0x14F664u)) {
        return;
    }
    ctx->pc = 0x14F664u;
label_14f664:
    // 0x14f664: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x14F664u;
    SET_GPR_U32(ctx, 31, 0x14F66Cu);
    ctx->pc = 0x14F668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F664u;
    // 0x14f668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x14F664u, 0x14F66Cu)) {
        return;
    }
    ctx->pc = 0x14F66Cu;
label_14f66c:
    // 0x14f66c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x14f66cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14f670: 0x5600ffe7  bnel        $s0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x14F670u;
    {
        const bool branch_taken_0x14f670 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f670) {
            ctx->pc = 0x14F674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F670u;
            // 0x14f674: 0x8e030184  lw          $v1, 0x184($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f610;
        }
    }
    ctx->pc = 0x14F678u;
    // 0x14f678: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x14f678u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_14f67c:
    // 0x14f67c: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14F67Cu;
    {
        const bool branch_taken_0x14f67c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F67Cu;
        // 0x14f680: 0x26510008  addiu       $s1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f67c) {
            ctx->pc = 0x14F6F0u;
            goto label_14f6f0;
        }
    }
    ctx->pc = 0x14F684u;
    // 0x14f684: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x14f684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_14f688:
    // 0x14f688: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F688u;
    {
        const bool branch_taken_0x14f688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f688) {
            ctx->pc = 0x14F68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F688u;
            // 0x14f68c: 0x8e030180  lw          $v1, 0x180($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F69Cu;
            goto label_14f69c;
        }
    }
    ctx->pc = 0x14F690u;
    // 0x14f690: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x14f690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14f694: 0xac620180  sw          $v0, 0x180($v1)
    ctx->pc = 0x14f694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 384), GPR_U32(ctx, 2));
    // 0x14f698: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x14f698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_14f69c:
    // 0x14f69c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F69Cu;
    {
        const bool branch_taken_0x14f69c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f69c) {
            ctx->pc = 0x14F6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F69Cu;
            // 0x14f6a0: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F6B0u;
            goto label_14f6b0;
        }
    }
    ctx->pc = 0x14F6A4u;
    // 0x14f6a4: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x14f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x14f6a8: 0xac620184  sw          $v0, 0x184($v1)
    ctx->pc = 0x14f6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 388), GPR_U32(ctx, 2));
    // 0x14f6ac: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x14f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_14f6b0:
    // 0x14f6b0: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F6B0u;
    {
        const bool branch_taken_0x14f6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x14f6b0) {
            ctx->pc = 0x14F6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F6B0u;
            // 0x14f6b4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F6C4u;
            goto label_14f6c4;
        }
    }
    ctx->pc = 0x14F6B8u;
    // 0x14f6b8: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x14f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14f6bc: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x14f6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x14f6c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x14f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_14f6c4:
    // 0x14f6c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14f6c8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F6C8u;
    {
        const bool branch_taken_0x14f6c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6C8u;
        // 0x14f6cc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f6c8) {
            ctx->pc = 0x14F6E4u;
            goto label_14f6e4;
        }
    }
    ctx->pc = 0x14F6D0u;
    // 0x14f6d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f6d4: 0xc053bc6  jal         func_14EF18
    ctx->pc = 0x14F6D4u;
    SET_GPR_U32(ctx, 31, 0x14F6DCu);
    ctx->pc = 0x14F6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F6D4u;
    // 0x14f6d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14EF18u, 0x14F6D4u, 0x14F6DCu)) {
        return;
    }
    ctx->pc = 0x14F6DCu;
label_14f6dc:
    // 0x14f6dc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x14F6DCu;
    SET_GPR_U32(ctx, 31, 0x14F6E4u);
    ctx->pc = 0x14F6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F6DCu;
    // 0x14f6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x14F6DCu, 0x14F6E4u)) {
        return;
    }
    ctx->pc = 0x14F6E4u;
label_14f6e4:
    // 0x14f6e4: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x14f6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14f6e8: 0x5600ffe7  bnel        $s0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x14F6E8u;
    {
        const bool branch_taken_0x14f6e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f6e8) {
            ctx->pc = 0x14F6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F6E8u;
            // 0x14f6ec: 0x8e030184  lw          $v1, 0x184($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f688;
        }
    }
    ctx->pc = 0x14F6F0u;
label_14f6f0:
    // 0x14f6f0: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x14f6f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14f6f4: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x14f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x14f6f8: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x14F6F8u;
    {
        const bool branch_taken_0x14f6f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6F8u;
        // 0x14f6fc: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f6f8) {
            ctx->pc = 0x14F72Cu;
            goto label_14f72c;
        }
    }
    ctx->pc = 0x14F700u;
    // 0x14f700: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x14f700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f704: 0x0  nop
    ctx->pc = 0x14f704u;
    // NOP
label_14f708:
    // 0x14f708: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F708u;
    {
        const bool branch_taken_0x14f708 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F708u;
        // 0x14f70c: 0x8e310180  lw          $s1, 0x180($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f708) {
            ctx->pc = 0x14F724u;
            goto label_14f724;
        }
    }
    ctx->pc = 0x14F710u;
    // 0x14f710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f714: 0xc053bc6  jal         func_14EF18
    ctx->pc = 0x14F714u;
    SET_GPR_U32(ctx, 31, 0x14F71Cu);
    ctx->pc = 0x14F718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F714u;
    // 0x14f718: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14EF18u, 0x14F714u, 0x14F71Cu)) {
        return;
    }
    ctx->pc = 0x14F71Cu;
label_14f71c:
    // 0x14f71c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x14F71Cu;
    SET_GPR_U32(ctx, 31, 0x14F724u);
    ctx->pc = 0x14F720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F71Cu;
    // 0x14f720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x14F71Cu, 0x14F724u)) {
        return;
    }
    ctx->pc = 0x14F724u;
label_14f724:
    // 0x14f724: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14F724u;
    {
        const bool branch_taken_0x14f724 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F724u;
        // 0x14f728: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f724) {
            ctx->pc = 0x14F708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f708;
        }
    }
    ctx->pc = 0x14F72Cu;
label_14f72c:
    // 0x14f72c: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x14f72cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14f730: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x14F730u;
    {
        const bool branch_taken_0x14f730 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f730) {
            ctx->pc = 0x14F734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F730u;
            // 0x14f734: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F768u;
            goto label_14f768;
        }
    }
    ctx->pc = 0x14F738u;
    // 0x14f738: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x14f738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f73c: 0x0  nop
    ctx->pc = 0x14f73cu;
    // NOP
label_14f740:
    // 0x14f740: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F740u;
    {
        const bool branch_taken_0x14f740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F740u;
        // 0x14f744: 0x8e310180  lw          $s1, 0x180($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f740) {
            ctx->pc = 0x14F75Cu;
            goto label_14f75c;
        }
    }
    ctx->pc = 0x14F748u;
    // 0x14f748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f74c: 0xc053bc6  jal         func_14EF18
    ctx->pc = 0x14F74Cu;
    SET_GPR_U32(ctx, 31, 0x14F754u);
    ctx->pc = 0x14F750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F74Cu;
    // 0x14f750: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14EF18u, 0x14F74Cu, 0x14F754u)) {
        return;
    }
    ctx->pc = 0x14F754u;
label_14f754:
    // 0x14f754: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x14F754u;
    SET_GPR_U32(ctx, 31, 0x14F75Cu);
    ctx->pc = 0x14F758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F754u;
    // 0x14f758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x14F754u, 0x14F75Cu)) {
        return;
    }
    ctx->pc = 0x14F75Cu;
label_14f75c:
    // 0x14f75c: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14F75Cu;
    {
        const bool branch_taken_0x14f75c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F75Cu;
        // 0x14f760: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f75c) {
            ctx->pc = 0x14F740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f740;
        }
    }
    ctx->pc = 0x14F764u;
    // 0x14f764: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14f764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14f768:
    // 0x14f768: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x14F768u;
    SET_GPR_U32(ctx, 31, 0x14F770u);
    ctx->pc = 0x14F76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F768u;
    // 0x14f76c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x14F768u, 0x14F770u)) {
        return;
    }
    ctx->pc = 0x14F770u;
label_14f770:
    // 0x14f770: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x14f770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14f774: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14f774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f778: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14f778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f77c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x14f77cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f780: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x14f780u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14f784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f788: 0x3e00008  jr          $ra
    ctx->pc = 0x14F788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F788u;
        // 0x14f78c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F790u;
}
