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

// Function: sub_0016C810
// Address: 0x16c810 - 0x16c938
void sub_0016C810_0x16c810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C810_0x16c810");
#endif

    switch (ctx->pc) {
        case 0x16c868u: goto label_16c868;
        case 0x16c87cu: goto label_16c87c;
        case 0x16c88cu: goto label_16c88c;
        case 0x16c898u: goto label_16c898;
        case 0x16c8a8u: goto label_16c8a8;
        case 0x16c8b4u: goto label_16c8b4;
        case 0x16c8bcu: goto label_16c8bc;
        case 0x16c8c8u: goto label_16c8c8;
        case 0x16c8d0u: goto label_16c8d0;
        case 0x16c8dcu: goto label_16c8dc;
        case 0x16c8e8u: goto label_16c8e8;
        case 0x16c8f4u: goto label_16c8f4;
        case 0x16c900u: goto label_16c900;
        case 0x16c90cu: goto label_16c90c;
        default: break;
    }

    ctx->pc = 0x16c810u;

    // 0x16c810: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16c810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16c814: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16c814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16c818: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x16c818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x16c81c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16c820: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x16c820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x16c824: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x16c824u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c828: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x16c828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x16c82c: 0x24424a08  addiu       $v0, $v0, 0x4A08
    ctx->pc = 0x16c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18952));
    // 0x16c830: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x16c830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x16c834: 0x24634a28  addiu       $v1, $v1, 0x4A28
    ctx->pc = 0x16c834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18984));
    // 0x16c838: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x16c838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x16c83c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x16c83cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c840: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x16c840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x16c844: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x16c844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x16c848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c84c: 0xaea2003c  sw          $v0, 0x3C($s5)
    ctx->pc = 0x16c84cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
    // 0x16c850: 0x8ea40044  lw          $a0, 0x44($s5)
    ctx->pc = 0x16c850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x16c854: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16C854u;
    {
        const bool branch_taken_0x16c854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C854u;
        // 0x16c858: 0xaea30034  sw          $v1, 0x34($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c854) {
            ctx->pc = 0x16C868u;
            goto label_16c868;
        }
    }
    ctx->pc = 0x16C85Cu;
    // 0x16c85c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16c85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c860: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16C860u;
    SET_GPR_U32(ctx, 31, 0x16C868u);
    ctx->pc = 0x16C864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C860u;
    // 0x16c864: 0x26a40038  addiu       $a0, $s5, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16C860u, 0x16C868u)) {
        return;
    }
    ctx->pc = 0x16C868u;
label_16c868:
    // 0x16c868: 0x26b40048  addiu       $s4, $s5, 0x48
    ctx->pc = 0x16c868u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
    // 0x16c86c: 0x26b00038  addiu       $s0, $s5, 0x38
    ctx->pc = 0x16c86cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 56));
    // 0x16c870: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16c870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c874: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16C874u;
    SET_GPR_U32(ctx, 31, 0x16C87Cu);
    ctx->pc = 0x16C878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C874u;
    // 0x16c878: 0x26b30050  addiu       $s3, $s5, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16C874u, 0x16C87Cu)) {
        return;
    }
    ctx->pc = 0x16C87Cu;
label_16c87c:
    // 0x16c87c: 0x26b200fc  addiu       $s2, $s5, 0xFC
    ctx->pc = 0x16c87cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 252));
    // 0x16c880: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16c880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c884: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16C884u;
    SET_GPR_U32(ctx, 31, 0x16C88Cu);
    ctx->pc = 0x16C888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C884u;
    // 0x16c888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16C884u, 0x16C88Cu)) {
        return;
    }
    ctx->pc = 0x16C88Cu;
label_16c88c:
    // 0x16c88c: 0x26b10104  addiu       $s1, $s5, 0x104
    ctx->pc = 0x16c88cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 260));
    // 0x16c890: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16C890u;
    SET_GPR_U32(ctx, 31, 0x16C898u);
    ctx->pc = 0x16C894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C890u;
    // 0x16c894: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16C890u, 0x16C898u)) {
        return;
    }
    ctx->pc = 0x16C898u;
label_16c898:
    // 0x16c898: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16c898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16c89c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c8a0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16C8A0u;
    SET_GPR_U32(ctx, 31, 0x16C8A8u);
    ctx->pc = 0x16C8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8A0u;
    // 0x16c8a4: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16C8A0u, 0x16C8A8u)) {
        return;
    }
    ctx->pc = 0x16C8A8u;
label_16c8a8:
    // 0x16c8a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16c8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c8ac: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16C8ACu;
    SET_GPR_U32(ctx, 31, 0x16C8B4u);
    ctx->pc = 0x16C8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8ACu;
    // 0x16c8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16C8ACu, 0x16C8B4u)) {
        return;
    }
    ctx->pc = 0x16C8B4u;
label_16c8b4:
    // 0x16c8b4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16C8B4u;
    SET_GPR_U32(ctx, 31, 0x16C8BCu);
    ctx->pc = 0x16C8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8B4u;
    // 0x16c8b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16C8B4u, 0x16C8BCu)) {
        return;
    }
    ctx->pc = 0x16C8BCu;
label_16c8bc:
    // 0x16c8bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16c8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c8c0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16C8C0u;
    SET_GPR_U32(ctx, 31, 0x16C8C8u);
    ctx->pc = 0x16C8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8C0u;
    // 0x16c8c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16C8C0u, 0x16C8C8u)) {
        return;
    }
    ctx->pc = 0x16C8C8u;
label_16c8c8:
    // 0x16c8c8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16C8C8u;
    SET_GPR_U32(ctx, 31, 0x16C8D0u);
    ctx->pc = 0x16C8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8C8u;
    // 0x16c8cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16C8C8u, 0x16C8D0u)) {
        return;
    }
    ctx->pc = 0x16C8D0u;
label_16c8d0:
    // 0x16c8d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c8d4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16C8D4u;
    SET_GPR_U32(ctx, 31, 0x16C8DCu);
    ctx->pc = 0x16C8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8D4u;
    // 0x16c8d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16C8D4u, 0x16C8DCu)) {
        return;
    }
    ctx->pc = 0x16C8DCu;
label_16c8dc:
    // 0x16c8dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16c8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c8e0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16C8E0u;
    SET_GPR_U32(ctx, 31, 0x16C8E8u);
    ctx->pc = 0x16C8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8E0u;
    // 0x16c8e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16C8E0u, 0x16C8E8u)) {
        return;
    }
    ctx->pc = 0x16C8E8u;
label_16c8e8:
    // 0x16c8e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16c8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c8ec: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16C8ECu;
    SET_GPR_U32(ctx, 31, 0x16C8F4u);
    ctx->pc = 0x16C8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8ECu;
    // 0x16c8f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16C8ECu, 0x16C8F4u)) {
        return;
    }
    ctx->pc = 0x16C8F4u;
label_16c8f4:
    // 0x16c8f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16c8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c8f8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16C8F8u;
    SET_GPR_U32(ctx, 31, 0x16C900u);
    ctx->pc = 0x16C8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8F8u;
    // 0x16c8fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16C8F8u, 0x16C900u)) {
        return;
    }
    ctx->pc = 0x16C900u;
label_16c900:
    // 0x16c900: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16c900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c904: 0xc04f084  jal         func_13C210
    ctx->pc = 0x16C904u;
    SET_GPR_U32(ctx, 31, 0x16C90Cu);
    ctx->pc = 0x16C908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C904u;
    // 0x16c908: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x16C904u, 0x16C90Cu)) {
        return;
    }
    ctx->pc = 0x16C90Cu;
label_16c90c:
    // 0x16c90c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x16c90cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16c910: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x16c910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16c914: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x16c914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16c918: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16c918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16c91c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x16c91cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c920: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x16c920u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c924: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x16c924u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c92c: 0x3e00008  jr          $ra
    ctx->pc = 0x16C92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C92Cu;
        // 0x16c930: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C934u;
    // 0x16c934: 0x0  nop
    ctx->pc = 0x16c934u;
    // NOP
    ctx->pc = 0x16c938u;
}
