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

// Function: sub_0025C808
// Address: 0x25c808 - 0x25cab8
void sub_0025C808_0x25c808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C808_0x25c808");
#endif

    switch (ctx->pc) {
        case 0x25c808u: goto label_25c808;
        case 0x25c80cu: goto label_25c80c;
        case 0x25c810u: goto label_25c810;
        case 0x25c814u: goto label_25c814;
        case 0x25c818u: goto label_25c818;
        case 0x25c81cu: goto label_25c81c;
        case 0x25c820u: goto label_25c820;
        case 0x25c824u: goto label_25c824;
        case 0x25c828u: goto label_25c828;
        case 0x25c82cu: goto label_25c82c;
        case 0x25c830u: goto label_25c830;
        case 0x25c834u: goto label_25c834;
        case 0x25c838u: goto label_25c838;
        case 0x25c83cu: goto label_25c83c;
        case 0x25c840u: goto label_25c840;
        case 0x25c844u: goto label_25c844;
        case 0x25c848u: goto label_25c848;
        case 0x25c84cu: goto label_25c84c;
        case 0x25c850u: goto label_25c850;
        case 0x25c854u: goto label_25c854;
        case 0x25c858u: goto label_25c858;
        case 0x25c85cu: goto label_25c85c;
        case 0x25c860u: goto label_25c860;
        case 0x25c864u: goto label_25c864;
        case 0x25c868u: goto label_25c868;
        case 0x25c86cu: goto label_25c86c;
        case 0x25c870u: goto label_25c870;
        case 0x25c874u: goto label_25c874;
        case 0x25c878u: goto label_25c878;
        case 0x25c87cu: goto label_25c87c;
        case 0x25c880u: goto label_25c880;
        case 0x25c884u: goto label_25c884;
        case 0x25c888u: goto label_25c888;
        case 0x25c88cu: goto label_25c88c;
        case 0x25c890u: goto label_25c890;
        case 0x25c894u: goto label_25c894;
        case 0x25c898u: goto label_25c898;
        case 0x25c89cu: goto label_25c89c;
        case 0x25c8a0u: goto label_25c8a0;
        case 0x25c8a4u: goto label_25c8a4;
        case 0x25c8a8u: goto label_25c8a8;
        case 0x25c8acu: goto label_25c8ac;
        case 0x25c8b0u: goto label_25c8b0;
        case 0x25c8b4u: goto label_25c8b4;
        case 0x25c8b8u: goto label_25c8b8;
        case 0x25c8bcu: goto label_25c8bc;
        case 0x25c8c0u: goto label_25c8c0;
        case 0x25c8c4u: goto label_25c8c4;
        case 0x25c8c8u: goto label_25c8c8;
        case 0x25c8ccu: goto label_25c8cc;
        case 0x25c8d0u: goto label_25c8d0;
        case 0x25c8d4u: goto label_25c8d4;
        case 0x25c8d8u: goto label_25c8d8;
        case 0x25c8dcu: goto label_25c8dc;
        case 0x25c8e0u: goto label_25c8e0;
        case 0x25c8e4u: goto label_25c8e4;
        case 0x25c8e8u: goto label_25c8e8;
        case 0x25c8ecu: goto label_25c8ec;
        case 0x25c8f0u: goto label_25c8f0;
        case 0x25c8f4u: goto label_25c8f4;
        case 0x25c8f8u: goto label_25c8f8;
        case 0x25c8fcu: goto label_25c8fc;
        case 0x25c900u: goto label_25c900;
        case 0x25c904u: goto label_25c904;
        case 0x25c908u: goto label_25c908;
        case 0x25c90cu: goto label_25c90c;
        case 0x25c910u: goto label_25c910;
        case 0x25c914u: goto label_25c914;
        case 0x25c918u: goto label_25c918;
        case 0x25c91cu: goto label_25c91c;
        case 0x25c920u: goto label_25c920;
        case 0x25c924u: goto label_25c924;
        case 0x25c928u: goto label_25c928;
        case 0x25c92cu: goto label_25c92c;
        case 0x25c930u: goto label_25c930;
        case 0x25c934u: goto label_25c934;
        case 0x25c938u: goto label_25c938;
        case 0x25c93cu: goto label_25c93c;
        case 0x25c940u: goto label_25c940;
        case 0x25c944u: goto label_25c944;
        case 0x25c948u: goto label_25c948;
        case 0x25c94cu: goto label_25c94c;
        case 0x25c950u: goto label_25c950;
        case 0x25c954u: goto label_25c954;
        case 0x25c958u: goto label_25c958;
        case 0x25c95cu: goto label_25c95c;
        case 0x25c960u: goto label_25c960;
        case 0x25c964u: goto label_25c964;
        case 0x25c968u: goto label_25c968;
        case 0x25c96cu: goto label_25c96c;
        case 0x25c970u: goto label_25c970;
        case 0x25c974u: goto label_25c974;
        case 0x25c978u: goto label_25c978;
        case 0x25c97cu: goto label_25c97c;
        case 0x25c980u: goto label_25c980;
        case 0x25c984u: goto label_25c984;
        case 0x25c988u: goto label_25c988;
        case 0x25c98cu: goto label_25c98c;
        case 0x25c990u: goto label_25c990;
        case 0x25c994u: goto label_25c994;
        case 0x25c998u: goto label_25c998;
        case 0x25c99cu: goto label_25c99c;
        case 0x25c9a0u: goto label_25c9a0;
        case 0x25c9a4u: goto label_25c9a4;
        case 0x25c9a8u: goto label_25c9a8;
        case 0x25c9acu: goto label_25c9ac;
        case 0x25c9b0u: goto label_25c9b0;
        case 0x25c9b4u: goto label_25c9b4;
        case 0x25c9b8u: goto label_25c9b8;
        case 0x25c9bcu: goto label_25c9bc;
        case 0x25c9c0u: goto label_25c9c0;
        case 0x25c9c4u: goto label_25c9c4;
        case 0x25c9c8u: goto label_25c9c8;
        case 0x25c9ccu: goto label_25c9cc;
        case 0x25c9d0u: goto label_25c9d0;
        case 0x25c9d4u: goto label_25c9d4;
        case 0x25c9d8u: goto label_25c9d8;
        case 0x25c9dcu: goto label_25c9dc;
        case 0x25c9e0u: goto label_25c9e0;
        case 0x25c9e4u: goto label_25c9e4;
        case 0x25c9e8u: goto label_25c9e8;
        case 0x25c9ecu: goto label_25c9ec;
        case 0x25c9f0u: goto label_25c9f0;
        case 0x25c9f4u: goto label_25c9f4;
        case 0x25c9f8u: goto label_25c9f8;
        case 0x25c9fcu: goto label_25c9fc;
        case 0x25ca00u: goto label_25ca00;
        case 0x25ca04u: goto label_25ca04;
        case 0x25ca08u: goto label_25ca08;
        case 0x25ca0cu: goto label_25ca0c;
        case 0x25ca10u: goto label_25ca10;
        case 0x25ca14u: goto label_25ca14;
        case 0x25ca18u: goto label_25ca18;
        case 0x25ca1cu: goto label_25ca1c;
        case 0x25ca20u: goto label_25ca20;
        case 0x25ca24u: goto label_25ca24;
        case 0x25ca28u: goto label_25ca28;
        case 0x25ca2cu: goto label_25ca2c;
        case 0x25ca30u: goto label_25ca30;
        case 0x25ca34u: goto label_25ca34;
        case 0x25ca38u: goto label_25ca38;
        case 0x25ca3cu: goto label_25ca3c;
        case 0x25ca40u: goto label_25ca40;
        case 0x25ca44u: goto label_25ca44;
        case 0x25ca48u: goto label_25ca48;
        case 0x25ca4cu: goto label_25ca4c;
        case 0x25ca50u: goto label_25ca50;
        case 0x25ca54u: goto label_25ca54;
        case 0x25ca58u: goto label_25ca58;
        case 0x25ca5cu: goto label_25ca5c;
        case 0x25ca60u: goto label_25ca60;
        case 0x25ca64u: goto label_25ca64;
        case 0x25ca68u: goto label_25ca68;
        case 0x25ca6cu: goto label_25ca6c;
        case 0x25ca70u: goto label_25ca70;
        case 0x25ca74u: goto label_25ca74;
        case 0x25ca78u: goto label_25ca78;
        case 0x25ca7cu: goto label_25ca7c;
        case 0x25ca80u: goto label_25ca80;
        case 0x25ca84u: goto label_25ca84;
        case 0x25ca88u: goto label_25ca88;
        case 0x25ca8cu: goto label_25ca8c;
        case 0x25ca90u: goto label_25ca90;
        case 0x25ca94u: goto label_25ca94;
        case 0x25ca98u: goto label_25ca98;
        case 0x25ca9cu: goto label_25ca9c;
        case 0x25caa0u: goto label_25caa0;
        case 0x25caa4u: goto label_25caa4;
        case 0x25caa8u: goto label_25caa8;
        case 0x25caacu: goto label_25caac;
        case 0x25cab0u: goto label_25cab0;
        case 0x25cab4u: goto label_25cab4;
        default: break;
    }

    ctx->pc = 0x25c808u;

label_25c808:
    // 0x25c808: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x25c808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_25c80c:
    // 0x25c80c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x25c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_25c810:
    // 0x25c810: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x25c810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_25c814:
    // 0x25c814: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x25c814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_25c818:
    // 0x25c818: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x25c818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_25c81c:
    // 0x25c81c: 0x34a5000b  ori         $a1, $a1, 0xB
    ctx->pc = 0x25c81cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11);
label_25c820:
    // 0x25c820: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25c820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_25c824:
    // 0x25c824: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25c824u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25c828:
    // 0x25c828: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x25c828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_25c82c:
    // 0x25c82c: 0x24540fc8  addiu       $s4, $v0, 0xFC8
    ctx->pc = 0x25c82cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_25c830:
    // 0x25c830: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x25c830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_25c834:
    // 0x25c834: 0x3c15005c  lui         $s5, 0x5C
    ctx->pc = 0x25c834u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)92 << 16));
label_25c838:
    // 0x25c838: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x25c838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_25c83c:
    // 0x25c83c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x25c83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_25c840:
    // 0x25c840: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25c840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_25c844:
    // 0x25c844: 0x8e820108  lw          $v0, 0x108($s4)
    ctx->pc = 0x25c844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 264)));
label_25c848:
    // 0x25c848: 0x40f809  jalr        $v0
label_25c84c:
    if (ctx->pc == 0x25C84Cu) {
        ctx->pc = 0x25C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C848u;
        // 0x25c84c: 0x8ea41298  lw          $a0, 0x1298($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C850u;
        goto label_25c850;
    }
    ctx->pc = 0x25C848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25C850u);
        ctx->pc = 0x25C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C848u;
        // 0x25c84c: 0x8ea41298  lw          $a0, 0x1298($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4760)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C848u, 0x25C850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25C850u;
label_25c850:
    // 0x25c850: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25c850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25c854:
    // 0x25c854: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
label_25c858:
    if (ctx->pc == 0x25C858u) {
        ctx->pc = 0x25C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C854u;
        // 0x25c858: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C85Cu;
        goto label_25c85c;
    }
    ctx->pc = 0x25C854u;
    {
        const bool branch_taken_0x25c854 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C854u;
        // 0x25c858: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c854) {
            ctx->pc = 0x25C888u;
            goto label_25c888;
        }
    }
    ctx->pc = 0x25C85Cu;
label_25c85c:
    // 0x25c85c: 0x8c451298  lw          $a1, 0x1298($v0)
    ctx->pc = 0x25c85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
label_25c860:
    // 0x25c860: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x25c860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_25c864:
    // 0x25c864: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25c864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25c868:
    // 0x25c868: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x25c868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_25c86c:
    // 0x25c86c: 0xc092848  jal         func_24A120
label_25c870:
    if (ctx->pc == 0x25C870u) {
        ctx->pc = 0x25C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C86Cu;
        // 0x25c870: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C874u;
        goto label_25c874;
    }
    ctx->pc = 0x25C86Cu;
    SET_GPR_U32(ctx, 31, 0x25C874u);
    ctx->pc = 0x25C870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C86Cu;
    // 0x25c870: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x25C86Cu, 0x25C874u)) {
        return;
    }
    ctx->pc = 0x25C874u;
label_25c874:
    // 0x25c874: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25c874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25c878:
    // 0x25c878: 0xc09281a  jal         func_24A068
label_25c87c:
    if (ctx->pc == 0x25C87Cu) {
        ctx->pc = 0x25C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C878u;
        // 0x25c87c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C880u;
        goto label_25c880;
    }
    ctx->pc = 0x25C878u;
    SET_GPR_U32(ctx, 31, 0x25C880u);
    ctx->pc = 0x25C87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C878u;
    // 0x25c87c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x25C878u, 0x25C880u)) {
        return;
    }
    ctx->pc = 0x25C880u;
label_25c880:
    // 0x25c880: 0x10000081  b           . + 4 + (0x81 << 2)
label_25c884:
    if (ctx->pc == 0x25C884u) {
        ctx->pc = 0x25C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C880u;
        // 0x25c884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C888u;
        goto label_25c888;
    }
    ctx->pc = 0x25C880u;
    {
        const bool branch_taken_0x25c880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C880u;
        // 0x25c884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c880) {
            ctx->pc = 0x25CA88u;
            goto label_25ca88;
        }
    }
    ctx->pc = 0x25C888u;
label_25c888:
    // 0x25c888: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x25c888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_25c88c:
    // 0x25c88c: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x25c88cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
label_25c890:
    // 0x25c890: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x25c890u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_25c894:
    // 0x25c894: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x25c894u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
label_25c898:
    // 0x25c898: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x25c898u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_25c89c:
    // 0x25c89c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x25c89cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_25c8a0:
    // 0x25c8a0: 0xc096056  jal         func_258158
label_25c8a4:
    if (ctx->pc == 0x25C8A4u) {
        ctx->pc = 0x25C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C8A0u;
        // 0x25c8a4: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C8A8u;
        goto label_25c8a8;
    }
    ctx->pc = 0x25C8A0u;
    SET_GPR_U32(ctx, 31, 0x25C8A8u);
    ctx->pc = 0x25C8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C8A0u;
    // 0x25c8a4: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258158u, 0x25C8A0u, 0x25C8A8u)) {
        return;
    }
    ctx->pc = 0x25C8A8u;
label_25c8a8:
    // 0x25c8a8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x25c8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25c8ac:
    // 0x25c8ac: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x25c8acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_25c8b0:
    // 0x25c8b0: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x25c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_25c8b4:
    // 0x25c8b4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x25c8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_25c8b8:
    // 0x25c8b8: 0x24561280  addiu       $s6, $v0, 0x1280
    ctx->pc = 0x25c8b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4736));
label_25c8bc:
    // 0x25c8bc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x25c8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_25c8c0:
    // 0x25c8c0: 0x8c441280  lw          $a0, 0x1280($v0)
    ctx->pc = 0x25c8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4736)));
label_25c8c4:
    // 0x25c8c4: 0x8e820108  lw          $v0, 0x108($s4)
    ctx->pc = 0x25c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 264)));
label_25c8c8:
    // 0x25c8c8: 0x40f809  jalr        $v0
label_25c8cc:
    if (ctx->pc == 0x25C8CCu) {
        ctx->pc = 0x25C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C8C8u;
        // 0x25c8cc: 0x34a5000b  ori         $a1, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C8D0u;
        goto label_25c8d0;
    }
    ctx->pc = 0x25C8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25C8D0u);
        ctx->pc = 0x25C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C8C8u;
        // 0x25c8cc: 0x34a5000b  ori         $a1, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C8C8u, 0x25C8D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25C8D0u;
label_25c8d0:
    // 0x25c8d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25c8d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25c8d4:
    // 0x25c8d4: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
label_25c8d8:
    if (ctx->pc == 0x25C8D8u) {
        ctx->pc = 0x25C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C8D4u;
        // 0x25c8d8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C8DCu;
        goto label_25c8dc;
    }
    ctx->pc = 0x25C8D4u;
    {
        const bool branch_taken_0x25c8d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C8D4u;
        // 0x25c8d8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c8d4) {
            ctx->pc = 0x25C910u;
            goto label_25c910;
        }
    }
    ctx->pc = 0x25C8DCu;
label_25c8dc:
    // 0x25c8dc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x25c8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_25c8e0:
    // 0x25c8e0: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x25c8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_25c8e4:
    // 0x25c8e4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x25c8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25c8e8:
    // 0x25c8e8: 0xc092848  jal         func_24A120
label_25c8ec:
    if (ctx->pc == 0x25C8ECu) {
        ctx->pc = 0x25C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C8E8u;
        // 0x25c8ec: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C8F0u;
        goto label_25c8f0;
    }
    ctx->pc = 0x25C8E8u;
    SET_GPR_U32(ctx, 31, 0x25C8F0u);
    ctx->pc = 0x25C8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C8E8u;
    // 0x25c8ec: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x25C8E8u, 0x25C8F0u)) {
        return;
    }
    ctx->pc = 0x25C8F0u;
label_25c8f0:
    // 0x25c8f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25c8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25c8f4:
    // 0x25c8f4: 0xc09281a  jal         func_24A068
label_25c8f8:
    if (ctx->pc == 0x25C8F8u) {
        ctx->pc = 0x25C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C8F4u;
        // 0x25c8f8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C8FCu;
        goto label_25c8fc;
    }
    ctx->pc = 0x25C8F4u;
    SET_GPR_U32(ctx, 31, 0x25C8FCu);
    ctx->pc = 0x25C8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C8F4u;
    // 0x25c8f8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x25C8F4u, 0x25C8FCu)) {
        return;
    }
    ctx->pc = 0x25C8FCu;
label_25c8fc:
    // 0x25c8fc: 0x8e83010c  lw          $v1, 0x10C($s4)
    ctx->pc = 0x25c8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_25c900:
    // 0x25c900: 0x60f809  jalr        $v1
label_25c904:
    if (ctx->pc == 0x25C904u) {
        ctx->pc = 0x25C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C900u;
        // 0x25c904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C908u;
        goto label_25c908;
    }
    ctx->pc = 0x25C900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25C908u);
        ctx->pc = 0x25C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C900u;
        // 0x25c904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C900u, 0x25C908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25C908u;
label_25c908:
    // 0x25c908: 0x1000005f  b           . + 4 + (0x5F << 2)
label_25c90c:
    if (ctx->pc == 0x25C90Cu) {
        ctx->pc = 0x25C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C908u;
        // 0x25c90c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C910u;
        goto label_25c910;
    }
    ctx->pc = 0x25C908u;
    {
        const bool branch_taken_0x25c908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C908u;
        // 0x25c90c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c908) {
            ctx->pc = 0x25CA88u;
            goto label_25ca88;
        }
    }
    ctx->pc = 0x25C910u;
label_25c910:
    // 0x25c910: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x25c910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_25c914:
    // 0x25c914: 0x26420038  addiu       $v0, $s2, 0x38
    ctx->pc = 0x25c914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
label_25c918:
    // 0x25c918: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x25c918u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_25c91c:
    // 0x25c91c: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x25c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
label_25c920:
    // 0x25c920: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x25c920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_25c924:
    // 0x25c924: 0xa6400082  sh          $zero, 0x82($s2)
    ctx->pc = 0x25c924u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 130), (uint16_t)GPR_U32(ctx, 0));
label_25c928:
    // 0x25c928: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x25c928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_25c92c:
    // 0x25c92c: 0xa6400084  sh          $zero, 0x84($s2)
    ctx->pc = 0x25c92cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 132), (uint16_t)GPR_U32(ctx, 0));
label_25c930:
    // 0x25c930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25c930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c934:
    // 0x25c934: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x25c934u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_25c938:
    // 0x25c938: 0x26b01298  addiu       $s0, $s5, 0x1298
    ctx->pc = 0x25c938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4760));
label_25c93c:
    // 0x25c93c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x25c93cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_25c940:
    // 0x25c940: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x25c940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_25c944:
    // 0x25c944: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x25c944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
label_25c948:
    // 0x25c948: 0xae430044  sw          $v1, 0x44($s2)
    ctx->pc = 0x25c948u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 3));
label_25c94c:
    // 0x25c94c: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x25c94cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
label_25c950:
    // 0x25c950: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x25c950u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
label_25c954:
    // 0x25c954: 0xc0c493d  jal         func_3124F4
label_25c958:
    if (ctx->pc == 0x25C958u) {
        ctx->pc = 0x25C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C954u;
        // 0x25c958: 0xae420038  sw          $v0, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C95Cu;
        goto label_25c95c;
    }
    ctx->pc = 0x25C954u;
    SET_GPR_U32(ctx, 31, 0x25C95Cu);
    ctx->pc = 0x25C958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C954u;
    // 0x25c958: 0xae420038  sw          $v0, 0x38($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x25C954u, 0x25C95Cu)) {
        return;
    }
    ctx->pc = 0x25C95Cu;
label_25c95c:
    // 0x25c95c: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x25c95cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_25c960:
    // 0x25c960: 0x2622002c  addiu       $v0, $s1, 0x2C
    ctx->pc = 0x25c960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_25c964:
    // 0x25c964: 0x6a630013  ldl         $v1, 0x13($s3)
    ctx->pc = 0x25c964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_25c968:
    // 0x25c968: 0x6e63000c  ldr         $v1, 0xC($s3)
    ctx->pc = 0x25c968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_25c96c:
    // 0x25c96c: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x25c96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_25c970:
    // 0x25c970: 0xb243005b  sdl         $v1, 0x5B($s2)
    ctx->pc = 0x25c970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_25c974:
    // 0x25c974: 0xb6430054  sdr         $v1, 0x54($s2)
    ctx->pc = 0x25c974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_25c978:
    // 0x25c978: 0xae44005c  sw          $a0, 0x5C($s2)
    ctx->pc = 0x25c978u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 4));
label_25c97c:
    // 0x25c97c: 0x6a670007  ldl         $a3, 0x7($s3)
    ctx->pc = 0x25c97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_25c980:
    // 0x25c980: 0x6e670000  ldr         $a3, 0x0($s3)
    ctx->pc = 0x25c980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_25c984:
    // 0x25c984: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x25c984u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_25c988:
    // 0x25c988: 0xb247004f  sdl         $a3, 0x4F($s2)
    ctx->pc = 0x25c988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_25c98c:
    // 0x25c98c: 0xb6470048  sdr         $a3, 0x48($s2)
    ctx->pc = 0x25c98cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_25c990:
    // 0x25c990: 0xae480050  sw          $t0, 0x50($s2)
    ctx->pc = 0x25c990u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 8));
label_25c994:
    // 0x25c994: 0x26260034  addiu       $a2, $s1, 0x34
    ctx->pc = 0x25c994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_25c998:
    // 0x25c998: 0x6a640013  ldl         $a0, 0x13($s3)
    ctx->pc = 0x25c998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_25c99c:
    // 0x25c99c: 0x6e64000c  ldr         $a0, 0xC($s3)
    ctx->pc = 0x25c99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_25c9a0:
    // 0x25c9a0: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x25c9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_25c9a4:
    // 0x25c9a4: 0xb2440073  sdl         $a0, 0x73($s2)
    ctx->pc = 0x25c9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_25c9a8:
    // 0x25c9a8: 0xb644006c  sdr         $a0, 0x6C($s2)
    ctx->pc = 0x25c9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_25c9ac:
    // 0x25c9ac: 0xae450074  sw          $a1, 0x74($s2)
    ctx->pc = 0x25c9acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 5));
label_25c9b0:
    // 0x25c9b0: 0x2623003c  addiu       $v1, $s1, 0x3C
    ctx->pc = 0x25c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_25c9b4:
    // 0x25c9b4: 0x6a690007  ldl         $t1, 0x7($s3)
    ctx->pc = 0x25c9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_25c9b8:
    // 0x25c9b8: 0x6e690000  ldr         $t1, 0x0($s3)
    ctx->pc = 0x25c9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_25c9bc:
    // 0x25c9bc: 0x8e6a0008  lw          $t2, 0x8($s3)
    ctx->pc = 0x25c9bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_25c9c0:
    // 0x25c9c0: 0xb2490067  sdl         $t1, 0x67($s2)
    ctx->pc = 0x25c9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_25c9c4:
    // 0x25c9c4: 0xb6490060  sdr         $t1, 0x60($s2)
    ctx->pc = 0x25c9c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_25c9c8:
    // 0x25c9c8: 0xae4a0068  sw          $t2, 0x68($s2)
    ctx->pc = 0x25c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 10));
label_25c9cc:
    // 0x25c9cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25c9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25c9d0:
    // 0x25c9d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25c9d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25c9d4:
    // 0x25c9d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25c9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c9d8:
    // 0x25c9d8: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x25c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
label_25c9dc:
    // 0x25c9dc: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x25c9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_25c9e0:
    // 0x25c9e0: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x25c9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_25c9e4:
    // 0x25c9e4: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x25c9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
label_25c9e8:
    // 0x25c9e8: 0xae32001c  sw          $s2, 0x1C($s1)
    ctx->pc = 0x25c9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 18));
label_25c9ec:
    // 0x25c9ec: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x25c9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_25c9f0:
    // 0x25c9f0: 0x6a690013  ldl         $t1, 0x13($s3)
    ctx->pc = 0x25c9f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_25c9f4:
    // 0x25c9f4: 0x6e69000c  ldr         $t1, 0xC($s3)
    ctx->pc = 0x25c9f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_25c9f8:
    // 0x25c9f8: 0x8e6a0014  lw          $t2, 0x14($s3)
    ctx->pc = 0x25c9f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_25c9fc:
    // 0x25c9fc: 0xb2290063  sdl         $t1, 0x63($s1)
    ctx->pc = 0x25c9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_25ca00:
    // 0x25ca00: 0xb629005c  sdr         $t1, 0x5C($s1)
    ctx->pc = 0x25ca00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_25ca04:
    // 0x25ca04: 0xae2a0064  sw          $t2, 0x64($s1)
    ctx->pc = 0x25ca04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 10));
label_25ca08:
    // 0x25ca08: 0x6a690007  ldl         $t1, 0x7($s3)
    ctx->pc = 0x25ca08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_25ca0c:
    // 0x25ca0c: 0x6e690000  ldr         $t1, 0x0($s3)
    ctx->pc = 0x25ca0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_25ca10:
    // 0x25ca10: 0x8e6a0008  lw          $t2, 0x8($s3)
    ctx->pc = 0x25ca10u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_25ca14:
    // 0x25ca14: 0xb2290057  sdl         $t1, 0x57($s1)
    ctx->pc = 0x25ca14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_25ca18:
    // 0x25ca18: 0xb6290050  sdr         $t1, 0x50($s1)
    ctx->pc = 0x25ca18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_25ca1c:
    // 0x25ca1c: 0xae2a0058  sw          $t2, 0x58($s1)
    ctx->pc = 0x25ca1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 10));
label_25ca20:
    // 0x25ca20: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x25ca20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_25ca24:
    // 0x25ca24: 0xae260038  sw          $a2, 0x38($s1)
    ctx->pc = 0x25ca24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 6));
label_25ca28:
    // 0x25ca28: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x25ca28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
label_25ca2c:
    // 0x25ca2c: 0xae260034  sw          $a2, 0x34($s1)
    ctx->pc = 0x25ca2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 6));
label_25ca30:
    // 0x25ca30: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x25ca30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
label_25ca34:
    // 0x25ca34: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x25ca34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_25ca38:
    // 0x25ca38: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x25ca38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_25ca3c:
    // 0x25ca3c: 0xc0971f8  jal         func_25C7E0
label_25ca40:
    if (ctx->pc == 0x25CA40u) {
        ctx->pc = 0x25CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA3Cu;
        // 0x25ca40: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CA44u;
        goto label_25ca44;
    }
    ctx->pc = 0x25CA3Cu;
    SET_GPR_U32(ctx, 31, 0x25CA44u);
    ctx->pc = 0x25CA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CA3Cu;
    // 0x25ca40: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C7E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C7E0u, 0x25CA3Cu, 0x25CA44u)) {
        return;
    }
    ctx->pc = 0x25CA44u;
label_25ca44:
    // 0x25ca44: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x25ca44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
label_25ca48:
    // 0x25ca48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25ca48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ca4c:
    // 0x25ca4c: 0xc0970d2  jal         func_25C348
label_25ca50:
    if (ctx->pc == 0x25CA50u) {
        ctx->pc = 0x25CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA4Cu;
        // 0x25ca50: 0x8ea51298  lw          $a1, 0x1298($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CA54u;
        goto label_25ca54;
    }
    ctx->pc = 0x25CA4Cu;
    SET_GPR_U32(ctx, 31, 0x25CA54u);
    ctx->pc = 0x25CA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CA4Cu;
    // 0x25ca50: 0x8ea51298  lw          $a1, 0x1298($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C348u, 0x25CA4Cu, 0x25CA54u)) {
        return;
    }
    ctx->pc = 0x25CA54u;
label_25ca54:
    // 0x25ca54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ca54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25ca58:
    // 0x25ca58: 0xc093958  jal         func_24E560
label_25ca5c:
    if (ctx->pc == 0x25CA5Cu) {
        ctx->pc = 0x25CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA58u;
        // 0x25ca5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CA60u;
        goto label_25ca60;
    }
    ctx->pc = 0x25CA58u;
    SET_GPR_U32(ctx, 31, 0x25CA60u);
    ctx->pc = 0x25CA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CA58u;
    // 0x25ca5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E560u, 0x25CA58u, 0x25CA60u)) {
        return;
    }
    ctx->pc = 0x25CA60u;
label_25ca60:
    // 0x25ca60: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x25ca60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25ca64:
    // 0x25ca64: 0xc093958  jal         func_24E560
label_25ca68:
    if (ctx->pc == 0x25CA68u) {
        ctx->pc = 0x25CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA64u;
        // 0x25ca68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CA6Cu;
        goto label_25ca6c;
    }
    ctx->pc = 0x25CA64u;
    SET_GPR_U32(ctx, 31, 0x25CA6Cu);
    ctx->pc = 0x25CA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CA64u;
    // 0x25ca68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E560u, 0x25CA64u, 0x25CA6Cu)) {
        return;
    }
    ctx->pc = 0x25CA6Cu;
label_25ca6c:
    // 0x25ca6c: 0xc097150  jal         func_25C540
label_25ca70:
    if (ctx->pc == 0x25CA70u) {
        ctx->pc = 0x25CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA6Cu;
        // 0x25ca70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CA74u;
        goto label_25ca74;
    }
    ctx->pc = 0x25CA6Cu;
    SET_GPR_U32(ctx, 31, 0x25CA74u);
    ctx->pc = 0x25CA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CA6Cu;
    // 0x25ca70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C540u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C540u, 0x25CA6Cu, 0x25CA74u)) {
        return;
    }
    ctx->pc = 0x25CA74u;
label_25ca74:
    // 0x25ca74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_25ca78:
    if (ctx->pc == 0x25CA78u) {
        ctx->pc = 0x25CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA74u;
        // 0x25ca78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CA7Cu;
        goto label_25ca7c;
    }
    ctx->pc = 0x25CA74u;
    {
        const bool branch_taken_0x25ca74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA74u;
        // 0x25ca78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ca74) {
            ctx->pc = 0x25CA88u;
            goto label_25ca88;
        }
    }
    ctx->pc = 0x25CA7Cu;
label_25ca7c:
    // 0x25ca7c: 0xc0971cc  jal         func_25C730
label_25ca80:
    if (ctx->pc == 0x25CA80u) {
        ctx->pc = 0x25CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA7Cu;
        // 0x25ca80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CA84u;
        goto label_25ca84;
    }
    ctx->pc = 0x25CA7Cu;
    SET_GPR_U32(ctx, 31, 0x25CA84u);
    ctx->pc = 0x25CA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CA7Cu;
    // 0x25ca80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C730u, 0x25CA7Cu, 0x25CA84u)) {
        return;
    }
    ctx->pc = 0x25CA84u;
label_25ca84:
    // 0x25ca84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25ca84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ca88:
    // 0x25ca88: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x25ca88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25ca8c:
    // 0x25ca8c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x25ca8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25ca90:
    // 0x25ca90: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x25ca90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25ca94:
    // 0x25ca94: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x25ca94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25ca98:
    // 0x25ca98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25ca98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25ca9c:
    // 0x25ca9c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x25ca9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25caa0:
    // 0x25caa0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x25caa0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25caa4:
    // 0x25caa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25caa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25caa8:
    // 0x25caa8: 0x3e00008  jr          $ra
label_25caac:
    if (ctx->pc == 0x25CAACu) {
        ctx->pc = 0x25CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CAA8u;
        // 0x25caac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CAB0u;
        goto label_25cab0;
    }
    ctx->pc = 0x25CAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CAA8u;
        // 0x25caac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CAB0u;
label_25cab0:
    // 0x25cab0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25cab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_25cab4:
    // 0x25cab4: 0x0  nop
    ctx->pc = 0x25cab4u;
    // NOP
    ctx->pc = 0x25cab8u;
}
