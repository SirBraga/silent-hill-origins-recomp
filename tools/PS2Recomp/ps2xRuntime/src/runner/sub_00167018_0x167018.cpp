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

// Function: sub_00167018
// Address: 0x167018 - 0x167138
void sub_00167018_0x167018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167018_0x167018");
#endif

    switch (ctx->pc) {
        case 0x167038u: goto label_167038;
        case 0x167044u: goto label_167044;
        case 0x16704cu: goto label_16704c;
        case 0x167054u: goto label_167054;
        case 0x167068u: goto label_167068;
        case 0x167094u: goto label_167094;
        case 0x16709cu: goto label_16709c;
        case 0x1670a4u: goto label_1670a4;
        case 0x1670b8u: goto label_1670b8;
        case 0x1670ccu: goto label_1670cc;
        case 0x1670d4u: goto label_1670d4;
        case 0x1670dcu: goto label_1670dc;
        case 0x1670f8u: goto label_1670f8;
        case 0x167124u: goto label_167124;
        default: break;
    }

    ctx->pc = 0x167018u;

    // 0x167018: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x167018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16701c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16701cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x167020: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167024: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x167024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167028: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x167028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16702c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16702cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167030: 0xc059c98  jal         func_167260
    ctx->pc = 0x167030u;
    SET_GPR_U32(ctx, 31, 0x167038u);
    ctx->pc = 0x167034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167030u;
    // 0x167034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x167260u, 0x167030u, 0x167038u)) {
        return;
    }
    ctx->pc = 0x167038u;
label_167038:
    // 0x167038: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x167038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x16703c: 0xc0957f0  jal         func_255FC0
    ctx->pc = 0x16703Cu;
    SET_GPR_U32(ctx, 31, 0x167044u);
    ctx->pc = 0x167040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16703Cu;
    // 0x167040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x16703Cu, 0x167044u)) {
        return;
    }
    ctx->pc = 0x167044u;
label_167044:
    // 0x167044: 0xc095534  jal         func_2554D0
    ctx->pc = 0x167044u;
    SET_GPR_U32(ctx, 31, 0x16704Cu);
    ctx->pc = 0x167048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167044u;
    // 0x167048: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2554D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2554D0u, 0x167044u, 0x16704Cu)) {
        return;
    }
    ctx->pc = 0x16704Cu;
label_16704c:
    // 0x16704c: 0xc0898d2  jal         func_226348
    ctx->pc = 0x16704Cu;
    SET_GPR_U32(ctx, 31, 0x167054u);
    ctx->pc = 0x167050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16704Cu;
    // 0x167050: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226348u, 0x16704Cu, 0x167054u)) {
        return;
    }
    ctx->pc = 0x167054u;
label_167054:
    // 0x167054: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x167054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x167058: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x167058u;
    {
        const bool branch_taken_0x167058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x167058) {
            ctx->pc = 0x16705Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167058u;
            // 0x16705c: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16706Cu;
            goto label_16706c;
        }
    }
    ctx->pc = 0x167060u;
    // 0x167060: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x167060u;
    SET_GPR_U32(ctx, 31, 0x167068u);
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x167060u, 0x167068u)) {
        return;
    }
    ctx->pc = 0x167068u;
label_167068:
    // 0x167068: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x167068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_16706c:
    // 0x16706c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x16706cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x167070: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x167070u;
    {
        const bool branch_taken_0x167070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x167074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167070u;
        // 0x167074: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167070) {
            ctx->pc = 0x167088u;
            goto label_167088;
        }
    }
    ctx->pc = 0x167078u;
    // 0x167078: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x167078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16707c: 0x24428678  addiu       $v0, $v0, -0x7988
    ctx->pc = 0x16707cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936184));
    // 0x167080: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167084: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x167084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_167088:
    // 0x167088: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x167088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x16708c: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x16708Cu;
    SET_GPR_U32(ctx, 31, 0x167094u);
    ctx->pc = 0x167090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16708Cu;
    // 0x167090: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x16708Cu, 0x167094u)) {
        return;
    }
    ctx->pc = 0x167094u;
label_167094:
    // 0x167094: 0xc089484  jal         func_225210
    ctx->pc = 0x167094u;
    SET_GPR_U32(ctx, 31, 0x16709Cu);
    ctx->pc = 0x167098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167094u;
    // 0x167098: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225210u, 0x167094u, 0x16709Cu)) {
        return;
    }
    ctx->pc = 0x16709Cu;
label_16709c:
    // 0x16709c: 0xc0898d2  jal         func_226348
    ctx->pc = 0x16709Cu;
    SET_GPR_U32(ctx, 31, 0x1670A4u);
    ctx->pc = 0x1670A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16709Cu;
    // 0x1670a0: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226348u, 0x16709Cu, 0x1670A4u)) {
        return;
    }
    ctx->pc = 0x1670A4u;
label_1670a4:
    // 0x1670a4: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x1670a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1670a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1670A8u;
    {
        const bool branch_taken_0x1670a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1670ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670A8u;
        // 0x1670ac: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670a8) {
            ctx->pc = 0x1670B8u;
            goto label_1670b8;
        }
    }
    ctx->pc = 0x1670B0u;
    // 0x1670b0: 0xc08ab74  jal         func_22ADD0
    ctx->pc = 0x1670B0u;
    SET_GPR_U32(ctx, 31, 0x1670B8u);
    ctx->pc = 0x22ADD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ADD0u, 0x1670B0u, 0x1670B8u)) {
        return;
    }
    ctx->pc = 0x1670B8u;
label_1670b8:
    // 0x1670b8: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x1670b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1670bc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1670BCu;
    {
        const bool branch_taken_0x1670bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1670bc) {
            ctx->pc = 0x1670D4u;
            goto label_1670d4;
        }
    }
    ctx->pc = 0x1670C4u;
    // 0x1670c4: 0xc097a26  jal         func_25E898
    ctx->pc = 0x1670C4u;
    SET_GPR_U32(ctx, 31, 0x1670CCu);
    ctx->pc = 0x1670C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1670C4u;
    // 0x1670c8: 0x8e050064  lw          $a1, 0x64($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E898u, 0x1670C4u, 0x1670CCu)) {
        return;
    }
    ctx->pc = 0x1670CCu;
label_1670cc:
    // 0x1670cc: 0xc0971cc  jal         func_25C730
    ctx->pc = 0x1670CCu;
    SET_GPR_U32(ctx, 31, 0x1670D4u);
    ctx->pc = 0x1670D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1670CCu;
    // 0x1670d0: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C730u, 0x1670CCu, 0x1670D4u)) {
        return;
    }
    ctx->pc = 0x1670D4u;
label_1670d4:
    // 0x1670d4: 0xc095df4  jal         func_2577D0
    ctx->pc = 0x1670D4u;
    SET_GPR_U32(ctx, 31, 0x1670DCu);
    ctx->pc = 0x1670D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1670D4u;
    // 0x1670d8: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2577D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2577D0u, 0x1670D4u, 0x1670DCu)) {
        return;
    }
    ctx->pc = 0x1670DCu;
label_1670dc:
    // 0x1670dc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1670dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1670e0: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x1670e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1670e4: 0x8c448670  lw          $a0, -0x7990($v0)
    ctx->pc = 0x1670e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338670u));
    // 0x1670e8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1670E8u;
    {
        const bool branch_taken_0x1670e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1670ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670E8u;
        // 0x1670ec: 0xac408670  sw          $zero, -0x7990($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670e8) {
            ctx->pc = 0x167114u;
            goto label_167114;
        }
    }
    ctx->pc = 0x1670F0u;
    // 0x1670f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1670f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1670f4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1670f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1670f8:
    // 0x1670f8: 0x10700004  beq         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1670F8u;
    {
        const bool branch_taken_0x1670f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1670FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670F8u;
        // 0x1670fc: 0x8c84006c  lw          $a0, 0x6C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670f8) {
            ctx->pc = 0x16710Cu;
            goto label_16710c;
        }
    }
    ctx->pc = 0x167100u;
    // 0x167100: 0x8cc28670  lw          $v0, -0x7990($a2)
    ctx->pc = 0x167100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294936176)));
    // 0x167104: 0xac62006c  sw          $v0, 0x6C($v1)
    ctx->pc = 0x167104u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 2));
    // 0x167108: 0xacc38670  sw          $v1, -0x7990($a2)
    ctx->pc = 0x167108u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294936176), GPR_U32(ctx, 3));
label_16710c:
    // 0x16710c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16710Cu;
    {
        const bool branch_taken_0x16710c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x167110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16710Cu;
        // 0x167110: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16710c) {
            ctx->pc = 0x1670F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1670f8;
        }
    }
    ctx->pc = 0x167114u;
label_167114:
    // 0x167114: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x167114u;
    {
        const bool branch_taken_0x167114 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x167114) {
            ctx->pc = 0x167118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167114u;
            // 0x167118: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167128u;
            goto label_167128;
        }
    }
    ctx->pc = 0x16711Cu;
    // 0x16711c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x16711Cu;
    SET_GPR_U32(ctx, 31, 0x167124u);
    ctx->pc = 0x167120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16711Cu;
    // 0x167120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x16711Cu, 0x167124u)) {
        return;
    }
    ctx->pc = 0x167124u;
label_167124:
    // 0x167124: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x167124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_167128:
    // 0x167128: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16712c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16712cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167130: 0x3e00008  jr          $ra
    ctx->pc = 0x167130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167130u;
        // 0x167134: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167138u;
}
