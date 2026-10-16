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

// Function: sub_00169320
// Address: 0x169320 - 0x169458
void sub_00169320_0x169320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169320_0x169320");
#endif

    switch (ctx->pc) {
        case 0x169378u: goto label_169378;
        case 0x169394u: goto label_169394;
        case 0x1693a4u: goto label_1693a4;
        case 0x1693b0u: goto label_1693b0;
        case 0x1693b8u: goto label_1693b8;
        case 0x1693c8u: goto label_1693c8;
        case 0x1693d4u: goto label_1693d4;
        case 0x1693dcu: goto label_1693dc;
        case 0x1693e8u: goto label_1693e8;
        case 0x1693f0u: goto label_1693f0;
        case 0x1693fcu: goto label_1693fc;
        case 0x169408u: goto label_169408;
        case 0x169414u: goto label_169414;
        case 0x169420u: goto label_169420;
        case 0x16942cu: goto label_16942c;
        default: break;
    }

    ctx->pc = 0x169320u;

    // 0x169320: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x169320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x169324: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x169324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x169328: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x169328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x16932c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16932cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x169330: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x169330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x169334: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x169334u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169338: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x169338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x16933c: 0x244241f0  addiu       $v0, $v0, 0x41F0
    ctx->pc = 0x16933cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16880));
    // 0x169340: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x169340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x169344: 0x24634210  addiu       $v1, $v1, 0x4210
    ctx->pc = 0x169344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16912));
    // 0x169348: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x169348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x16934c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x16934cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169350: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x169350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x169354: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x169354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x169358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16935c: 0xaea2003c  sw          $v0, 0x3C($s5)
    ctx->pc = 0x16935cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
    // 0x169360: 0x8ea40044  lw          $a0, 0x44($s5)
    ctx->pc = 0x169360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x169364: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169364u;
    {
        const bool branch_taken_0x169364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x169368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169364u;
        // 0x169368: 0xaea30034  sw          $v1, 0x34($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169364) {
            ctx->pc = 0x169378u;
            goto label_169378;
        }
    }
    ctx->pc = 0x16936Cu;
    // 0x16936c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16936cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169370: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x169370u;
    SET_GPR_U32(ctx, 31, 0x169378u);
    ctx->pc = 0x169374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169370u;
    // 0x169374: 0x26a40038  addiu       $a0, $s5, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x169370u, 0x169378u)) {
        return;
    }
    ctx->pc = 0x169378u;
label_169378:
    // 0x169378: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x169378u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x16937c: 0x26b10038  addiu       $s1, $s5, 0x38
    ctx->pc = 0x16937cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 56));
    // 0x169380: 0x261046c8  addiu       $s0, $s0, 0x46C8
    ctx->pc = 0x169380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18120));
    // 0x169384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169388: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x169388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16938c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16938Cu;
    SET_GPR_U32(ctx, 31, 0x169394u);
    ctx->pc = 0x169390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16938Cu;
    // 0x169390: 0x26b40048  addiu       $s4, $s5, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16938Cu, 0x169394u)) {
        return;
    }
    ctx->pc = 0x169394u;
label_169394:
    // 0x169394: 0x26b30050  addiu       $s3, $s5, 0x50
    ctx->pc = 0x169394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x169398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16939c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16939Cu;
    SET_GPR_U32(ctx, 31, 0x1693A4u);
    ctx->pc = 0x1693A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16939Cu;
    // 0x1693a0: 0x26b200f8  addiu       $s2, $s5, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16939Cu, 0x1693A4u)) {
        return;
    }
    ctx->pc = 0x1693A4u;
label_1693a4:
    // 0x1693a4: 0x26b00100  addiu       $s0, $s5, 0x100
    ctx->pc = 0x1693a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x1693a8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1693A8u;
    SET_GPR_U32(ctx, 31, 0x1693B0u);
    ctx->pc = 0x1693ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1693A8u;
    // 0x1693ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1693A8u, 0x1693B0u)) {
        return;
    }
    ctx->pc = 0x1693B0u;
label_1693b0:
    // 0x1693b0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1693B0u;
    SET_GPR_U32(ctx, 31, 0x1693B8u);
    ctx->pc = 0x1693B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1693B0u;
    // 0x1693b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1693B0u, 0x1693B8u)) {
        return;
    }
    ctx->pc = 0x1693B8u;
label_1693b8:
    // 0x1693b8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1693b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1693bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1693bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1693c0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1693C0u;
    SET_GPR_U32(ctx, 31, 0x1693C8u);
    ctx->pc = 0x1693C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1693C0u;
    // 0x1693c4: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1693C0u, 0x1693C8u)) {
        return;
    }
    ctx->pc = 0x1693C8u;
label_1693c8:
    // 0x1693c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1693c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1693cc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1693CCu;
    SET_GPR_U32(ctx, 31, 0x1693D4u);
    ctx->pc = 0x1693D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1693CCu;
    // 0x1693d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1693CCu, 0x1693D4u)) {
        return;
    }
    ctx->pc = 0x1693D4u;
label_1693d4:
    // 0x1693d4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1693D4u;
    SET_GPR_U32(ctx, 31, 0x1693DCu);
    ctx->pc = 0x1693D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1693D4u;
    // 0x1693d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1693D4u, 0x1693DCu)) {
        return;
    }
    ctx->pc = 0x1693DCu;
label_1693dc:
    // 0x1693dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1693dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1693e0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1693E0u;
    SET_GPR_U32(ctx, 31, 0x1693E8u);
    ctx->pc = 0x1693E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1693E0u;
    // 0x1693e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1693E0u, 0x1693E8u)) {
        return;
    }
    ctx->pc = 0x1693E8u;
label_1693e8:
    // 0x1693e8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1693E8u;
    SET_GPR_U32(ctx, 31, 0x1693F0u);
    ctx->pc = 0x1693ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1693E8u;
    // 0x1693ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1693E8u, 0x1693F0u)) {
        return;
    }
    ctx->pc = 0x1693F0u;
label_1693f0:
    // 0x1693f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1693f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1693f4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1693F4u;
    SET_GPR_U32(ctx, 31, 0x1693FCu);
    ctx->pc = 0x1693F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1693F4u;
    // 0x1693f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1693F4u, 0x1693FCu)) {
        return;
    }
    ctx->pc = 0x1693FCu;
label_1693fc:
    // 0x1693fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1693fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169400: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x169400u;
    SET_GPR_U32(ctx, 31, 0x169408u);
    ctx->pc = 0x169404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169400u;
    // 0x169404: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x169400u, 0x169408u)) {
        return;
    }
    ctx->pc = 0x169408u;
label_169408:
    // 0x169408: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x169408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16940c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16940Cu;
    SET_GPR_U32(ctx, 31, 0x169414u);
    ctx->pc = 0x169410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16940Cu;
    // 0x169410: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16940Cu, 0x169414u)) {
        return;
    }
    ctx->pc = 0x169414u;
label_169414:
    // 0x169414: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x169414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169418: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x169418u;
    SET_GPR_U32(ctx, 31, 0x169420u);
    ctx->pc = 0x16941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169418u;
    // 0x16941c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x169418u, 0x169420u)) {
        return;
    }
    ctx->pc = 0x169420u;
label_169420:
    // 0x169420: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x169420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169424: 0xc04f084  jal         func_13C210
    ctx->pc = 0x169424u;
    SET_GPR_U32(ctx, 31, 0x16942Cu);
    ctx->pc = 0x169428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169424u;
    // 0x169428: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x169424u, 0x16942Cu)) {
        return;
    }
    ctx->pc = 0x16942Cu;
label_16942c:
    // 0x16942c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x16942cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x169430: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x169430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169434: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x169434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x169438: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x169438u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16943c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x16943cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169440: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x169440u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169444: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x169444u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16944c: 0x3e00008  jr          $ra
    ctx->pc = 0x16944Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16944Cu;
        // 0x169450: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16944Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169454u;
    // 0x169454: 0x0  nop
    ctx->pc = 0x169454u;
    // NOP
    ctx->pc = 0x169458u;
}
