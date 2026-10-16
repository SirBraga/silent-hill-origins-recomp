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

// Function: sub_001B9528
// Address: 0x1b9528 - 0x1b9658
void sub_001B9528_0x1b9528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9528_0x1b9528");
#endif

    switch (ctx->pc) {
        case 0x1b9540u: goto label_1b9540;
        case 0x1b9554u: goto label_1b9554;
        case 0x1b9564u: goto label_1b9564;
        case 0x1b9578u: goto label_1b9578;
        case 0x1b95a8u: goto label_1b95a8;
        case 0x1b95c0u: goto label_1b95c0;
        case 0x1b95dcu: goto label_1b95dc;
        case 0x1b9600u: goto label_1b9600;
        case 0x1b960cu: goto label_1b960c;
        case 0x1b9628u: goto label_1b9628;
        case 0x1b9638u: goto label_1b9638;
        default: break;
    }

    ctx->pc = 0x1b9528u;

    // 0x1b9528: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b952c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b952cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b9530: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b9530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b9534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9538: 0xc06bbe0  jal         func_1AEF80
    ctx->pc = 0x1B9538u;
    SET_GPR_U32(ctx, 31, 0x1B9540u);
    ctx->pc = 0x1B953Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9538u;
    // 0x1b953c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1B9538u, 0x1B9540u)) {
        return;
    }
    ctx->pc = 0x1B9540u;
label_1b9540:
    // 0x1b9540: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1b9540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1b9544: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B9544u;
    {
        const bool branch_taken_0x1b9544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9544) {
            ctx->pc = 0x1B9548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9544u;
            // 0x1b9548: 0x8e050264  lw          $a1, 0x264($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B958Cu;
            goto label_1b958c;
        }
    }
    ctx->pc = 0x1B954Cu;
    // 0x1b954c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1B954Cu;
    SET_GPR_U32(ctx, 31, 0x1B9554u);
    ctx->pc = 0x1B9550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B954Cu;
    // 0x1b9550: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1B954Cu, 0x1B9554u)) {
        return;
    }
    ctx->pc = 0x1B9554u;
label_1b9554:
    // 0x1b9554: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x1b9554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1b9558: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b9558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b955c: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x1B955Cu;
    SET_GPR_U32(ctx, 31, 0x1B9564u);
    ctx->pc = 0x1B9560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B955Cu;
    // 0x1b9560: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x1B955Cu, 0x1B9564u)) {
        return;
    }
    ctx->pc = 0x1B9564u;
label_1b9564:
    // 0x1b9564: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9564u;
    {
        const bool branch_taken_0x1b9564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9564u;
        // 0x1b9568: 0x2403006e  addiu       $v1, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9564) {
            ctx->pc = 0x1B9588u;
            goto label_1b9588;
        }
    }
    ctx->pc = 0x1B956Cu;
    // 0x1b956c: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x1b956cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b9570: 0xc06c8ba  jal         func_1B22E8
    ctx->pc = 0x1B9570u;
    SET_GPR_U32(ctx, 31, 0x1B9578u);
    ctx->pc = 0x1B9574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9570u;
    // 0x1b9574: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1B9570u, 0x1B9578u)) {
        return;
    }
    ctx->pc = 0x1B9578u;
label_1b9578:
    // 0x1b9578: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9578u;
    {
        const bool branch_taken_0x1b9578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9578u;
        // 0x1b957c: 0x24030034  addiu       $v1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9578) {
            ctx->pc = 0x1B9584u;
            goto label_1b9584;
        }
    }
    ctx->pc = 0x1B9580u;
    // 0x1b9580: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x1b9580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_1b9584:
    // 0x1b9584: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x1b9584u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_1b9588:
    // 0x1b9588: 0x8e050264  lw          $a1, 0x264($s0)
    ctx->pc = 0x1b9588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1b958c:
    // 0x1b958c: 0x50a0002d  beql        $a1, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x1B958Cu;
    {
        const bool branch_taken_0x1b958c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b958c) {
            ctx->pc = 0x1B9590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B958Cu;
            // 0x1b9590: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9644u;
            goto label_1b9644;
        }
    }
    ctx->pc = 0x1B9594u;
    // 0x1b9594: 0x8e020280  lw          $v0, 0x280($s0)
    ctx->pc = 0x1b9594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
    // 0x1b9598: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1B9598u;
    {
        const bool branch_taken_0x1b9598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9598u;
        // 0x1b959c: 0x3c04006a  lui         $a0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9598) {
            ctx->pc = 0x1B9630u;
            goto label_1b9630;
        }
    }
    ctx->pc = 0x1B95A0u;
    // 0x1b95a0: 0xc06d0b0  jal         func_1B42C0
    ctx->pc = 0x1B95A0u;
    SET_GPR_U32(ctx, 31, 0x1B95A8u);
    ctx->pc = 0x1B95A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B95A0u;
    // 0x1b95a4: 0x2484d040  addiu       $a0, $a0, -0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B42C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B42C0u, 0x1B95A0u, 0x1B95A8u)) {
        return;
    }
    ctx->pc = 0x1B95A8u;
label_1b95a8:
    // 0x1b95a8: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1B95A8u;
    {
        const bool branch_taken_0x1b95a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B95ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95A8u;
        // 0x1b95ac: 0xae020268  sw          $v0, 0x268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95a8) {
            ctx->pc = 0x1B9640u;
            goto label_1b9640;
        }
    }
    ctx->pc = 0x1B95B0u;
    // 0x1b95b0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1b95b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1b95b4: 0x8e050264  lw          $a1, 0x264($s0)
    ctx->pc = 0x1b95b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1b95b8: 0xc06d0b0  jal         func_1B42C0
    ctx->pc = 0x1B95B8u;
    SET_GPR_U32(ctx, 31, 0x1B95C0u);
    ctx->pc = 0x1B95BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B95B8u;
    // 0x1b95bc: 0x2484d050  addiu       $a0, $a0, -0x2FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B42C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B42C0u, 0x1B95B8u, 0x1B95C0u)) {
        return;
    }
    ctx->pc = 0x1B95C0u;
label_1b95c0:
    // 0x1b95c0: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B95C0u;
    {
        const bool branch_taken_0x1b95c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B95C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95C0u;
        // 0x1b95c4: 0xae020268  sw          $v0, 0x268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95c0) {
            ctx->pc = 0x1B9640u;
            goto label_1b9640;
        }
    }
    ctx->pc = 0x1B95C8u;
    // 0x1b95c8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1b95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1b95cc: 0x8e050264  lw          $a1, 0x264($s0)
    ctx->pc = 0x1b95ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1b95d0: 0x8c439168  lw          $v1, -0x6E98($v0)
    ctx->pc = 0x1b95d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x339168u));
    // 0x1b95d4: 0xc06d0b0  jal         func_1B42C0
    ctx->pc = 0x1B95D4u;
    SET_GPR_U32(ctx, 31, 0x1B95DCu);
    ctx->pc = 0x1B95D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B95D4u;
    // 0x1b95d8: 0x8c640148  lw          $a0, 0x148($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B42C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B42C0u, 0x1B95D4u, 0x1B95DCu)) {
        return;
    }
    ctx->pc = 0x1B95DCu;
label_1b95dc:
    // 0x1b95dc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B95DCu;
    {
        const bool branch_taken_0x1b95dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B95E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95DCu;
        // 0x1b95e0: 0xae020268  sw          $v0, 0x268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95dc) {
            ctx->pc = 0x1B9640u;
            goto label_1b9640;
        }
    }
    ctx->pc = 0x1B95E4u;
    // 0x1b95e4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1b95e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1b95e8: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x1b95e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33870Cu));
    // 0x1b95ec: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1b95ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1b95f0: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B95F0u;
    {
        const bool branch_taken_0x1b95f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b95f0) {
            ctx->pc = 0x1B95F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B95F0u;
            // 0x1b95f4: 0x8e020268  lw          $v0, 0x268($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9614u;
            goto label_1b9614;
        }
    }
    ctx->pc = 0x1B95F8u;
    // 0x1b95f8: 0xc05e258  jal         func_178960
    ctx->pc = 0x1B95F8u;
    SET_GPR_U32(ctx, 31, 0x1B9600u);
    ctx->pc = 0x178960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178960u, 0x1B95F8u, 0x1B9600u)) {
        return;
    }
    ctx->pc = 0x1B9600u;
label_1b9600:
    // 0x1b9600: 0x8e050264  lw          $a1, 0x264($s0)
    ctx->pc = 0x1b9600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1b9604: 0xc06d0b0  jal         func_1B42C0
    ctx->pc = 0x1B9604u;
    SET_GPR_U32(ctx, 31, 0x1B960Cu);
    ctx->pc = 0x1B9608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9604u;
    // 0x1b9608: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B42C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B42C0u, 0x1B9604u, 0x1B960Cu)) {
        return;
    }
    ctx->pc = 0x1B960Cu;
label_1b960c:
    // 0x1b960c: 0xae020268  sw          $v0, 0x268($s0)
    ctx->pc = 0x1b960cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
    // 0x1b9610: 0x8e020268  lw          $v0, 0x268($s0)
    ctx->pc = 0x1b9610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
label_1b9614:
    // 0x1b9614: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1B9614u;
    {
        const bool branch_taken_0x1b9614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9614) {
            ctx->pc = 0x1B9618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9614u;
            // 0x1b9618: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9644u;
            goto label_1b9644;
        }
    }
    ctx->pc = 0x1B961Cu;
    // 0x1b961c: 0x8e040264  lw          $a0, 0x264($s0)
    ctx->pc = 0x1b961cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1b9620: 0xc06d0e4  jal         func_1B4390
    ctx->pc = 0x1B9620u;
    SET_GPR_U32(ctx, 31, 0x1B9628u);
    ctx->pc = 0x1B9624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9620u;
    // 0x1b9624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4390u, 0x1B9620u, 0x1B9628u)) {
        return;
    }
    ctx->pc = 0x1B9628u;
label_1b9628:
    // 0x1b9628: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9628u;
    {
        const bool branch_taken_0x1b9628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9628u;
        // 0x1b962c: 0xae020268  sw          $v0, 0x268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9628) {
            ctx->pc = 0x1B9640u;
            goto label_1b9640;
        }
    }
    ctx->pc = 0x1B9630u;
label_1b9630:
    // 0x1b9630: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1B9630u;
    SET_GPR_U32(ctx, 31, 0x1B9638u);
    ctx->pc = 0x1B9634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9630u;
    // 0x1b9634: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1B9630u, 0x1B9638u)) {
        return;
    }
    ctx->pc = 0x1B9638u;
label_1b9638:
    // 0x1b9638: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b9638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b963c: 0xae030268  sw          $v1, 0x268($s0)
    ctx->pc = 0x1b963cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 3));
label_1b9640:
    // 0x1b9640: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b9640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b9644:
    // 0x1b9644: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b9644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b964c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B964Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B964Cu;
        // 0x1b9650: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B964Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9654u;
    // 0x1b9654: 0x0  nop
    ctx->pc = 0x1b9654u;
    // NOP
    ctx->pc = 0x1b9658u;
}
