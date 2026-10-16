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

// Function: sub_001AFFE0
// Address: 0x1affe0 - 0x1b0540
void sub_001AFFE0_0x1affe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFFE0_0x1affe0");
#endif

    switch (ctx->pc) {
        case 0x1b0018u: goto label_1b0018;
        case 0x1b0028u: goto label_1b0028;
        case 0x1b0038u: goto label_1b0038;
        case 0x1b0048u: goto label_1b0048;
        case 0x1b005cu: goto label_1b005c;
        case 0x1b0068u: goto label_1b0068;
        case 0x1b0078u: goto label_1b0078;
        case 0x1b008cu: goto label_1b008c;
        case 0x1b0098u: goto label_1b0098;
        case 0x1b00a8u: goto label_1b00a8;
        case 0x1b00bcu: goto label_1b00bc;
        case 0x1b00c8u: goto label_1b00c8;
        case 0x1b00d8u: goto label_1b00d8;
        case 0x1b00ecu: goto label_1b00ec;
        case 0x1b00f8u: goto label_1b00f8;
        case 0x1b0108u: goto label_1b0108;
        case 0x1b011cu: goto label_1b011c;
        case 0x1b0128u: goto label_1b0128;
        case 0x1b0138u: goto label_1b0138;
        case 0x1b014cu: goto label_1b014c;
        case 0x1b0158u: goto label_1b0158;
        case 0x1b0168u: goto label_1b0168;
        case 0x1b017cu: goto label_1b017c;
        case 0x1b0188u: goto label_1b0188;
        case 0x1b0198u: goto label_1b0198;
        case 0x1b01acu: goto label_1b01ac;
        case 0x1b01b8u: goto label_1b01b8;
        case 0x1b01c8u: goto label_1b01c8;
        case 0x1b01dcu: goto label_1b01dc;
        case 0x1b01e8u: goto label_1b01e8;
        case 0x1b01f8u: goto label_1b01f8;
        case 0x1b020cu: goto label_1b020c;
        case 0x1b0218u: goto label_1b0218;
        case 0x1b0228u: goto label_1b0228;
        case 0x1b023cu: goto label_1b023c;
        case 0x1b0248u: goto label_1b0248;
        case 0x1b0258u: goto label_1b0258;
        case 0x1b026cu: goto label_1b026c;
        case 0x1b0278u: goto label_1b0278;
        case 0x1b0288u: goto label_1b0288;
        case 0x1b029cu: goto label_1b029c;
        case 0x1b02a8u: goto label_1b02a8;
        case 0x1b02b8u: goto label_1b02b8;
        case 0x1b02ccu: goto label_1b02cc;
        case 0x1b02d8u: goto label_1b02d8;
        case 0x1b02e8u: goto label_1b02e8;
        case 0x1b02fcu: goto label_1b02fc;
        case 0x1b0308u: goto label_1b0308;
        case 0x1b0318u: goto label_1b0318;
        case 0x1b032cu: goto label_1b032c;
        case 0x1b0338u: goto label_1b0338;
        case 0x1b0348u: goto label_1b0348;
        case 0x1b035cu: goto label_1b035c;
        case 0x1b0368u: goto label_1b0368;
        case 0x1b0378u: goto label_1b0378;
        case 0x1b038cu: goto label_1b038c;
        case 0x1b0398u: goto label_1b0398;
        case 0x1b03a8u: goto label_1b03a8;
        case 0x1b03bcu: goto label_1b03bc;
        case 0x1b03c8u: goto label_1b03c8;
        case 0x1b03d8u: goto label_1b03d8;
        case 0x1b03ecu: goto label_1b03ec;
        case 0x1b03f8u: goto label_1b03f8;
        case 0x1b0408u: goto label_1b0408;
        case 0x1b041cu: goto label_1b041c;
        case 0x1b0428u: goto label_1b0428;
        case 0x1b0438u: goto label_1b0438;
        case 0x1b044cu: goto label_1b044c;
        case 0x1b0458u: goto label_1b0458;
        case 0x1b0468u: goto label_1b0468;
        case 0x1b047cu: goto label_1b047c;
        case 0x1b0488u: goto label_1b0488;
        case 0x1b0498u: goto label_1b0498;
        case 0x1b04acu: goto label_1b04ac;
        case 0x1b04b8u: goto label_1b04b8;
        case 0x1b04c8u: goto label_1b04c8;
        case 0x1b04dcu: goto label_1b04dc;
        case 0x1b04e8u: goto label_1b04e8;
        case 0x1b04f8u: goto label_1b04f8;
        case 0x1b050cu: goto label_1b050c;
        case 0x1b0514u: goto label_1b0514;
        default: break;
    }

    ctx->pc = 0x1affe0u;

    // 0x1affe0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1affe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1affe4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1affe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1affe8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1affe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1affec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1affecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afff0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1afff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1afff4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1afff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afff8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1afff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1afffc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1afffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0000: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1b0000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1b0004: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1b0004u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0008: 0x12000144  beqz        $s0, . + 4 + (0x144 << 2)
    ctx->pc = 0x1B0008u;
    {
        const bool branch_taken_0x1b0008 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0008u;
        // 0x1b000c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0008) {
            ctx->pc = 0x1B051Cu;
            goto label_1b051c;
        }
    }
    ctx->pc = 0x1B0010u;
    // 0x1b0010: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x1B0010u;
    {
        const bool branch_taken_0x1b0010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0010) {
            ctx->pc = 0x1B050Cu;
            goto label_1b050c;
        }
    }
    ctx->pc = 0x1B0018u;
label_1b0018:
    // 0x1b0018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b001c: 0x8c45c068  lw          $a1, -0x3F98($v0)
    ctx->pc = 0x1b001cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951016)));
    // 0x1b0020: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B0020u;
    SET_GPR_U32(ctx, 31, 0x1B0028u);
    ctx->pc = 0x1B0024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0020u;
    // 0x1b0024: 0x2453c068  addiu       $s3, $v0, -0x3F98 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B0020u, 0x1B0028u)) {
        return;
    }
    ctx->pc = 0x1B0028u;
label_1b0028:
    // 0x1b0028: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1b0028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b002c: 0x2a00b  movn        $s4, $zero, $v0
    ctx->pc = 0x1b002cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0));
    // 0x1b0030: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B0030u;
    SET_GPR_U32(ctx, 31, 0x1B0038u);
    ctx->pc = 0x1B0034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0030u;
    // 0x1b0034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B0030u, 0x1B0038u)) {
        return;
    }
    ctx->pc = 0x1B0038u;
label_1b0038:
    // 0x1b0038: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0038u;
    {
        const bool branch_taken_0x1b0038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0038u;
        // 0x1b003c: 0x240402d0  addiu       $a0, $zero, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0038) {
            ctx->pc = 0x1B005Cu;
            goto label_1b005c;
        }
    }
    ctx->pc = 0x1B0040u;
    // 0x1b0040: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B0040u;
    SET_GPR_U32(ctx, 31, 0x1B0048u);
    ctx->pc = 0x1B0044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0040u;
    // 0x1b0044: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B0040u, 0x1B0048u)) {
        return;
    }
    ctx->pc = 0x1B0048u;
label_1b0048:
    // 0x1b0048: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b004c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b004cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0050: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b0050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0054: 0xc06d512  jal         func_1B5448
    ctx->pc = 0x1B0054u;
    SET_GPR_U32(ctx, 31, 0x1B005Cu);
    ctx->pc = 0x1B0058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0054u;
    // 0x1b0058: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B5448u, 0x1B0054u, 0x1B005Cu)) {
        return;
    }
    ctx->pc = 0x1B005Cu;
label_1b005c:
    // 0x1b005c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1b005cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1b0060: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B0060u;
    SET_GPR_U32(ctx, 31, 0x1B0068u);
    ctx->pc = 0x1B0064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0060u;
    // 0x1b0064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B0060u, 0x1B0068u)) {
        return;
    }
    ctx->pc = 0x1B0068u;
label_1b0068:
    // 0x1b0068: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0068u;
    {
        const bool branch_taken_0x1b0068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0068u;
        // 0x1b006c: 0x24040270  addiu       $a0, $zero, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0068) {
            ctx->pc = 0x1B008Cu;
            goto label_1b008c;
        }
    }
    ctx->pc = 0x1B0070u;
    // 0x1b0070: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B0070u;
    SET_GPR_U32(ctx, 31, 0x1B0078u);
    ctx->pc = 0x1B0074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0070u;
    // 0x1b0074: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B0070u, 0x1B0078u)) {
        return;
    }
    ctx->pc = 0x1B0078u;
label_1b0078:
    // 0x1b0078: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b007c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b007cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0080: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b0080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0084: 0xc071132  jal         func_1C44C8
    ctx->pc = 0x1B0084u;
    SET_GPR_U32(ctx, 31, 0x1B008Cu);
    ctx->pc = 0x1B0088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0084u;
    // 0x1b0088: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C44C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C44C8u, 0x1B0084u, 0x1B008Cu)) {
        return;
    }
    ctx->pc = 0x1B008Cu;
label_1b008c:
    // 0x1b008c: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x1b008cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1b0090: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B0090u;
    SET_GPR_U32(ctx, 31, 0x1B0098u);
    ctx->pc = 0x1B0094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0090u;
    // 0x1b0094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B0090u, 0x1B0098u)) {
        return;
    }
    ctx->pc = 0x1B0098u;
label_1b0098:
    // 0x1b0098: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0098u;
    {
        const bool branch_taken_0x1b0098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0098u;
        // 0x1b009c: 0x24040290  addiu       $a0, $zero, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0098) {
            ctx->pc = 0x1B00BCu;
            goto label_1b00bc;
        }
    }
    ctx->pc = 0x1B00A0u;
    // 0x1b00a0: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B00A0u;
    SET_GPR_U32(ctx, 31, 0x1B00A8u);
    ctx->pc = 0x1B00A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B00A0u;
    // 0x1b00a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B00A0u, 0x1B00A8u)) {
        return;
    }
    ctx->pc = 0x1B00A8u;
label_1b00a8:
    // 0x1b00a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b00a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b00ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b00acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b00b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b00b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b00b4: 0xc06e4f4  jal         func_1B93D0
    ctx->pc = 0x1B00B4u;
    SET_GPR_U32(ctx, 31, 0x1B00BCu);
    ctx->pc = 0x1B00B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B00B4u;
    // 0x1b00b8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B93D0u, 0x1B00B4u, 0x1B00BCu)) {
        return;
    }
    ctx->pc = 0x1B00BCu;
label_1b00bc:
    // 0x1b00bc: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x1b00bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1b00c0: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B00C0u;
    SET_GPR_U32(ctx, 31, 0x1B00C8u);
    ctx->pc = 0x1B00C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B00C0u;
    // 0x1b00c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B00C0u, 0x1B00C8u)) {
        return;
    }
    ctx->pc = 0x1B00C8u;
label_1b00c8:
    // 0x1b00c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B00C8u;
    {
        const bool branch_taken_0x1b00c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B00CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00C8u;
        // 0x1b00cc: 0x24040460  addiu       $a0, $zero, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b00c8) {
            ctx->pc = 0x1B00ECu;
            goto label_1b00ec;
        }
    }
    ctx->pc = 0x1B00D0u;
    // 0x1b00d0: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B00D0u;
    SET_GPR_U32(ctx, 31, 0x1B00D8u);
    ctx->pc = 0x1B00D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B00D0u;
    // 0x1b00d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B00D0u, 0x1B00D8u)) {
        return;
    }
    ctx->pc = 0x1B00D8u;
label_1b00d8:
    // 0x1b00d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b00d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b00dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b00dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b00e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b00e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b00e4: 0xc06fb3a  jal         func_1BECE8
    ctx->pc = 0x1B00E4u;
    SET_GPR_U32(ctx, 31, 0x1B00ECu);
    ctx->pc = 0x1B00E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B00E4u;
    // 0x1b00e8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BECE8u, 0x1B00E4u, 0x1B00ECu)) {
        return;
    }
    ctx->pc = 0x1B00ECu;
label_1b00ec:
    // 0x1b00ec: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x1b00ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1b00f0: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B00F0u;
    SET_GPR_U32(ctx, 31, 0x1B00F8u);
    ctx->pc = 0x1B00F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B00F0u;
    // 0x1b00f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B00F0u, 0x1B00F8u)) {
        return;
    }
    ctx->pc = 0x1B00F8u;
label_1b00f8:
    // 0x1b00f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B00F8u;
    {
        const bool branch_taken_0x1b00f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B00FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00F8u;
        // 0x1b00fc: 0x240403a0  addiu       $a0, $zero, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b00f8) {
            ctx->pc = 0x1B011Cu;
            goto label_1b011c;
        }
    }
    ctx->pc = 0x1B0100u;
    // 0x1b0100: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B0100u;
    SET_GPR_U32(ctx, 31, 0x1B0108u);
    ctx->pc = 0x1B0104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0100u;
    // 0x1b0104: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B0100u, 0x1B0108u)) {
        return;
    }
    ctx->pc = 0x1B0108u;
label_1b0108:
    // 0x1b0108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b010c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b010cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0110: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b0110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0114: 0xc06e810  jal         func_1BA040
    ctx->pc = 0x1B0114u;
    SET_GPR_U32(ctx, 31, 0x1B011Cu);
    ctx->pc = 0x1B0118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0114u;
    // 0x1b0118: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BA040u, 0x1B0114u, 0x1B011Cu)) {
        return;
    }
    ctx->pc = 0x1B011Cu;
label_1b011c:
    // 0x1b011c: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x1b011cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1b0120: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B0120u;
    SET_GPR_U32(ctx, 31, 0x1B0128u);
    ctx->pc = 0x1B0124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0120u;
    // 0x1b0124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B0120u, 0x1B0128u)) {
        return;
    }
    ctx->pc = 0x1B0128u;
label_1b0128:
    // 0x1b0128: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0128u;
    {
        const bool branch_taken_0x1b0128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0128u;
        // 0x1b012c: 0x24040300  addiu       $a0, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0128) {
            ctx->pc = 0x1B014Cu;
            goto label_1b014c;
        }
    }
    ctx->pc = 0x1B0130u;
    // 0x1b0130: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B0130u;
    SET_GPR_U32(ctx, 31, 0x1B0138u);
    ctx->pc = 0x1B0134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0130u;
    // 0x1b0134: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B0130u, 0x1B0138u)) {
        return;
    }
    ctx->pc = 0x1B0138u;
label_1b0138:
    // 0x1b0138: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b013c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b013cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0140: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b0140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0144: 0xc06dc58  jal         func_1B7160
    ctx->pc = 0x1B0144u;
    SET_GPR_U32(ctx, 31, 0x1B014Cu);
    ctx->pc = 0x1B0148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0144u;
    // 0x1b0148: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B7160u, 0x1B0144u, 0x1B014Cu)) {
        return;
    }
    ctx->pc = 0x1B014Cu;
label_1b014c:
    // 0x1b014c: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x1b014cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1b0150: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B0150u;
    SET_GPR_U32(ctx, 31, 0x1B0158u);
    ctx->pc = 0x1B0154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0150u;
    // 0x1b0154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B0150u, 0x1B0158u)) {
        return;
    }
    ctx->pc = 0x1B0158u;
label_1b0158:
    // 0x1b0158: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0158u;
    {
        const bool branch_taken_0x1b0158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0158u;
        // 0x1b015c: 0x24040290  addiu       $a0, $zero, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0158) {
            ctx->pc = 0x1B017Cu;
            goto label_1b017c;
        }
    }
    ctx->pc = 0x1B0160u;
    // 0x1b0160: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B0160u;
    SET_GPR_U32(ctx, 31, 0x1B0168u);
    ctx->pc = 0x1B0164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0160u;
    // 0x1b0164: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B0160u, 0x1B0168u)) {
        return;
    }
    ctx->pc = 0x1B0168u;
label_1b0168:
    // 0x1b0168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b016c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b016cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0170: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b0170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0174: 0xc06e6de  jal         func_1B9B78
    ctx->pc = 0x1B0174u;
    SET_GPR_U32(ctx, 31, 0x1B017Cu);
    ctx->pc = 0x1B0178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0174u;
    // 0x1b0178: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B9B78u, 0x1B0174u, 0x1B017Cu)) {
        return;
    }
    ctx->pc = 0x1B017Cu;
label_1b017c:
    // 0x1b017c: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x1b017cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1b0180: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B0180u;
    SET_GPR_U32(ctx, 31, 0x1B0188u);
    ctx->pc = 0x1B0184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0180u;
    // 0x1b0184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B0180u, 0x1B0188u)) {
        return;
    }
    ctx->pc = 0x1B0188u;
label_1b0188:
    // 0x1b0188: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0188u;
    {
        const bool branch_taken_0x1b0188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0188u;
        // 0x1b018c: 0x240402e0  addiu       $a0, $zero, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0188) {
            ctx->pc = 0x1B01ACu;
            goto label_1b01ac;
        }
    }
    ctx->pc = 0x1B0190u;
    // 0x1b0190: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B0190u;
    SET_GPR_U32(ctx, 31, 0x1B0198u);
    ctx->pc = 0x1B0194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0190u;
    // 0x1b0194: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B0190u, 0x1B0198u)) {
        return;
    }
    ctx->pc = 0x1B0198u;
label_1b0198:
    // 0x1b0198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b019c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b019cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b01a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01a4: 0xc07067c  jal         func_1C19F0
    ctx->pc = 0x1B01A4u;
    SET_GPR_U32(ctx, 31, 0x1B01ACu);
    ctx->pc = 0x1B01A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01A4u;
    // 0x1b01a8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C19F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C19F0u, 0x1B01A4u, 0x1B01ACu)) {
        return;
    }
    ctx->pc = 0x1B01ACu;
label_1b01ac:
    // 0x1b01ac: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x1b01acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1b01b0: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B01B0u;
    SET_GPR_U32(ctx, 31, 0x1B01B8u);
    ctx->pc = 0x1B01B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01B0u;
    // 0x1b01b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B01B0u, 0x1B01B8u)) {
        return;
    }
    ctx->pc = 0x1B01B8u;
label_1b01b8:
    // 0x1b01b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B01B8u;
    {
        const bool branch_taken_0x1b01b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B01BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01B8u;
        // 0x1b01bc: 0x24040410  addiu       $a0, $zero, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b01b8) {
            ctx->pc = 0x1B01DCu;
            goto label_1b01dc;
        }
    }
    ctx->pc = 0x1B01C0u;
    // 0x1b01c0: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B01C0u;
    SET_GPR_U32(ctx, 31, 0x1B01C8u);
    ctx->pc = 0x1B01C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01C0u;
    // 0x1b01c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B01C0u, 0x1B01C8u)) {
        return;
    }
    ctx->pc = 0x1B01C8u;
label_1b01c8:
    // 0x1b01c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b01c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b01ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b01d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01d4: 0xc07122c  jal         func_1C48B0
    ctx->pc = 0x1B01D4u;
    SET_GPR_U32(ctx, 31, 0x1B01DCu);
    ctx->pc = 0x1B01D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01D4u;
    // 0x1b01d8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C48B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C48B0u, 0x1B01D4u, 0x1B01DCu)) {
        return;
    }
    ctx->pc = 0x1B01DCu;
label_1b01dc:
    // 0x1b01dc: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x1b01dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x1b01e0: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B01E0u;
    SET_GPR_U32(ctx, 31, 0x1B01E8u);
    ctx->pc = 0x1B01E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01E0u;
    // 0x1b01e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B01E0u, 0x1B01E8u)) {
        return;
    }
    ctx->pc = 0x1B01E8u;
label_1b01e8:
    // 0x1b01e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B01E8u;
    {
        const bool branch_taken_0x1b01e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B01ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01E8u;
        // 0x1b01ec: 0x240402e0  addiu       $a0, $zero, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b01e8) {
            ctx->pc = 0x1B020Cu;
            goto label_1b020c;
        }
    }
    ctx->pc = 0x1B01F0u;
    // 0x1b01f0: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B01F0u;
    SET_GPR_U32(ctx, 31, 0x1B01F8u);
    ctx->pc = 0x1B01F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01F0u;
    // 0x1b01f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B01F0u, 0x1B01F8u)) {
        return;
    }
    ctx->pc = 0x1B01F8u;
label_1b01f8:
    // 0x1b01f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b01f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b01fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0200: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b0200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0204: 0xc071402  jal         func_1C5008
    ctx->pc = 0x1B0204u;
    SET_GPR_U32(ctx, 31, 0x1B020Cu);
    ctx->pc = 0x1B0208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0204u;
    // 0x1b0208: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5008u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C5008u, 0x1B0204u, 0x1B020Cu)) {
        return;
    }
    ctx->pc = 0x1B020Cu;
label_1b020c:
    // 0x1b020c: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x1b020cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x1b0210: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B0210u;
    SET_GPR_U32(ctx, 31, 0x1B0218u);
    ctx->pc = 0x1B0214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0210u;
    // 0x1b0214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B0210u, 0x1B0218u)) {
        return;
    }
    ctx->pc = 0x1B0218u;
label_1b0218:
    // 0x1b0218: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0218u;
    {
        const bool branch_taken_0x1b0218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0218u;
        // 0x1b021c: 0x24040300  addiu       $a0, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0218) {
            ctx->pc = 0x1B023Cu;
            goto label_1b023c;
        }
    }
    ctx->pc = 0x1B0220u;
    // 0x1b0220: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B0220u;
    SET_GPR_U32(ctx, 31, 0x1B0228u);
    ctx->pc = 0x1B0224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0220u;
    // 0x1b0224: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B0220u, 0x1B0228u)) {
        return;
    }
    ctx->pc = 0x1B0228u;
label_1b0228:
    // 0x1b0228: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b022c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b022cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0230: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b0230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0234: 0xc070faa  jal         func_1C3EA8
    ctx->pc = 0x1B0234u;
    SET_GPR_U32(ctx, 31, 0x1B023Cu);
    ctx->pc = 0x1B0238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0234u;
    // 0x1b0238: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C3EA8u, 0x1B0234u, 0x1B023Cu)) {
        return;
    }
    ctx->pc = 0x1B023Cu;
label_1b023c:
    // 0x1b023c: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x1b023cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1b0240: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B0240u;
    SET_GPR_U32(ctx, 31, 0x1B0248u);
    ctx->pc = 0x1B0244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0240u;
    // 0x1b0244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B0240u, 0x1B0248u)) {
        return;
    }
    ctx->pc = 0x1B0248u;
label_1b0248:
    // 0x1b0248: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0248u;
    {
        const bool branch_taken_0x1b0248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0248u;
        // 0x1b024c: 0x24040340  addiu       $a0, $zero, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0248) {
            ctx->pc = 0x1B026Cu;
            goto label_1b026c;
        }
    }
    ctx->pc = 0x1B0250u;
    // 0x1b0250: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B0250u;
    SET_GPR_U32(ctx, 31, 0x1B0258u);
    ctx->pc = 0x1B0254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0250u;
    // 0x1b0254: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B0250u, 0x1B0258u)) {
        return;
    }
    ctx->pc = 0x1B0258u;
label_1b0258:
    // 0x1b0258: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b025c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b025cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0260: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b0260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0264: 0xc06e0cc  jal         func_1B8330
    ctx->pc = 0x1B0264u;
    SET_GPR_U32(ctx, 31, 0x1B026Cu);
    ctx->pc = 0x1B0268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0264u;
    // 0x1b0268: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B8330u, 0x1B0264u, 0x1B026Cu)) {
        return;
    }
    ctx->pc = 0x1B026Cu;
label_1b026c:
    // 0x1b026c: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x1b026cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1b0270: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B0270u;
    SET_GPR_U32(ctx, 31, 0x1B0278u);
    ctx->pc = 0x1B0274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0270u;
    // 0x1b0274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B0270u, 0x1B0278u)) {
        return;
    }
    ctx->pc = 0x1B0278u;
label_1b0278:
    // 0x1b0278: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0278u;
    {
        const bool branch_taken_0x1b0278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0278u;
        // 0x1b027c: 0x24040380  addiu       $a0, $zero, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0278) {
            ctx->pc = 0x1B029Cu;
            goto label_1b029c;
        }
    }
    ctx->pc = 0x1B0280u;
    // 0x1b0280: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B0280u;
    SET_GPR_U32(ctx, 31, 0x1B0288u);
    ctx->pc = 0x1B0284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0280u;
    // 0x1b0284: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B0280u, 0x1B0288u)) {
        return;
    }
    ctx->pc = 0x1B0288u;
label_1b0288:
    // 0x1b0288: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b028c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b028cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0290: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b0290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0294: 0xc06d420  jal         func_1B5080
    ctx->pc = 0x1B0294u;
    SET_GPR_U32(ctx, 31, 0x1B029Cu);
    ctx->pc = 0x1B0298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0294u;
    // 0x1b0298: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B5080u, 0x1B0294u, 0x1B029Cu)) {
        return;
    }
    ctx->pc = 0x1B029Cu;
label_1b029c:
    // 0x1b029c: 0x8e650038  lw          $a1, 0x38($s3)
    ctx->pc = 0x1b029cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1b02a0: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B02A0u;
    SET_GPR_U32(ctx, 31, 0x1B02A8u);
    ctx->pc = 0x1B02A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02A0u;
    // 0x1b02a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B02A0u, 0x1B02A8u)) {
        return;
    }
    ctx->pc = 0x1B02A8u;
label_1b02a8:
    // 0x1b02a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B02A8u;
    {
        const bool branch_taken_0x1b02a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B02ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02A8u;
        // 0x1b02ac: 0x24040880  addiu       $a0, $zero, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b02a8) {
            ctx->pc = 0x1B02CCu;
            goto label_1b02cc;
        }
    }
    ctx->pc = 0x1B02B0u;
    // 0x1b02b0: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B02B0u;
    SET_GPR_U32(ctx, 31, 0x1B02B8u);
    ctx->pc = 0x1B02B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02B0u;
    // 0x1b02b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B02B0u, 0x1B02B8u)) {
        return;
    }
    ctx->pc = 0x1B02B8u;
label_1b02b8:
    // 0x1b02b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b02b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b02bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b02c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02c4: 0xc070a0c  jal         func_1C2830
    ctx->pc = 0x1B02C4u;
    SET_GPR_U32(ctx, 31, 0x1B02CCu);
    ctx->pc = 0x1B02C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02C4u;
    // 0x1b02c8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C2830u, 0x1B02C4u, 0x1B02CCu)) {
        return;
    }
    ctx->pc = 0x1B02CCu;
label_1b02cc:
    // 0x1b02cc: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x1b02ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x1b02d0: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B02D0u;
    SET_GPR_U32(ctx, 31, 0x1B02D8u);
    ctx->pc = 0x1B02D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02D0u;
    // 0x1b02d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B02D0u, 0x1B02D8u)) {
        return;
    }
    ctx->pc = 0x1B02D8u;
label_1b02d8:
    // 0x1b02d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B02D8u;
    {
        const bool branch_taken_0x1b02d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B02DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02D8u;
        // 0x1b02dc: 0x240402b0  addiu       $a0, $zero, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b02d8) {
            ctx->pc = 0x1B02FCu;
            goto label_1b02fc;
        }
    }
    ctx->pc = 0x1B02E0u;
    // 0x1b02e0: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B02E0u;
    SET_GPR_U32(ctx, 31, 0x1B02E8u);
    ctx->pc = 0x1B02E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02E0u;
    // 0x1b02e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B02E0u, 0x1B02E8u)) {
        return;
    }
    ctx->pc = 0x1B02E8u;
label_1b02e8:
    // 0x1b02e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b02e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b02ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b02f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02f4: 0xc06d81a  jal         func_1B6068
    ctx->pc = 0x1B02F4u;
    SET_GPR_U32(ctx, 31, 0x1B02FCu);
    ctx->pc = 0x1B02F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02F4u;
    // 0x1b02f8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6068u, 0x1B02F4u, 0x1B02FCu)) {
        return;
    }
    ctx->pc = 0x1B02FCu;
label_1b02fc:
    // 0x1b02fc: 0x8e650040  lw          $a1, 0x40($s3)
    ctx->pc = 0x1b02fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1b0300: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B0300u;
    SET_GPR_U32(ctx, 31, 0x1B0308u);
    ctx->pc = 0x1B0304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0300u;
    // 0x1b0304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B0300u, 0x1B0308u)) {
        return;
    }
    ctx->pc = 0x1B0308u;
label_1b0308:
    // 0x1b0308: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0308u;
    {
        const bool branch_taken_0x1b0308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0308u;
        // 0x1b030c: 0x240403f0  addiu       $a0, $zero, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0308) {
            ctx->pc = 0x1B032Cu;
            goto label_1b032c;
        }
    }
    ctx->pc = 0x1B0310u;
    // 0x1b0310: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B0310u;
    SET_GPR_U32(ctx, 31, 0x1B0318u);
    ctx->pc = 0x1B0314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0310u;
    // 0x1b0314: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B0310u, 0x1B0318u)) {
        return;
    }
    ctx->pc = 0x1B0318u;
label_1b0318:
    // 0x1b0318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b031c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b031cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0320: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b0320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0324: 0xc071494  jal         func_1C5250
    ctx->pc = 0x1B0324u;
    SET_GPR_U32(ctx, 31, 0x1B032Cu);
    ctx->pc = 0x1B0328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0324u;
    // 0x1b0328: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C5250u, 0x1B0324u, 0x1B032Cu)) {
        return;
    }
    ctx->pc = 0x1B032Cu;
label_1b032c:
    // 0x1b032c: 0x8e650044  lw          $a1, 0x44($s3)
    ctx->pc = 0x1b032cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1b0330: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B0330u;
    SET_GPR_U32(ctx, 31, 0x1B0338u);
    ctx->pc = 0x1B0334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0330u;
    // 0x1b0334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B0330u, 0x1B0338u)) {
        return;
    }
    ctx->pc = 0x1B0338u;
label_1b0338:
    // 0x1b0338: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0338u;
    {
        const bool branch_taken_0x1b0338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0338u;
        // 0x1b033c: 0x24040290  addiu       $a0, $zero, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0338) {
            ctx->pc = 0x1B035Cu;
            goto label_1b035c;
        }
    }
    ctx->pc = 0x1B0340u;
    // 0x1b0340: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B0340u;
    SET_GPR_U32(ctx, 31, 0x1B0348u);
    ctx->pc = 0x1B0344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0340u;
    // 0x1b0344: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B0340u, 0x1B0348u)) {
        return;
    }
    ctx->pc = 0x1B0348u;
label_1b0348:
    // 0x1b0348: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b034c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b034cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0350: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b0350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0354: 0xc072b3a  jal         func_1CACE8
    ctx->pc = 0x1B0354u;
    SET_GPR_U32(ctx, 31, 0x1B035Cu);
    ctx->pc = 0x1B0358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0354u;
    // 0x1b0358: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CACE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CACE8u, 0x1B0354u, 0x1B035Cu)) {
        return;
    }
    ctx->pc = 0x1B035Cu;
label_1b035c:
    // 0x1b035c: 0x8e650048  lw          $a1, 0x48($s3)
    ctx->pc = 0x1b035cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x1b0360: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B0360u;
    SET_GPR_U32(ctx, 31, 0x1B0368u);
    ctx->pc = 0x1B0364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0360u;
    // 0x1b0364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B0360u, 0x1B0368u)) {
        return;
    }
    ctx->pc = 0x1B0368u;
label_1b0368:
    // 0x1b0368: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0368u;
    {
        const bool branch_taken_0x1b0368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0368u;
        // 0x1b036c: 0x240402a0  addiu       $a0, $zero, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0368) {
            ctx->pc = 0x1B038Cu;
            goto label_1b038c;
        }
    }
    ctx->pc = 0x1B0370u;
    // 0x1b0370: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B0370u;
    SET_GPR_U32(ctx, 31, 0x1B0378u);
    ctx->pc = 0x1B0374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0370u;
    // 0x1b0374: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B0370u, 0x1B0378u)) {
        return;
    }
    ctx->pc = 0x1B0378u;
label_1b0378:
    // 0x1b0378: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b037c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b037cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0380: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b0380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0384: 0xc07361c  jal         func_1CD870
    ctx->pc = 0x1B0384u;
    SET_GPR_U32(ctx, 31, 0x1B038Cu);
    ctx->pc = 0x1B0388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0384u;
    // 0x1b0388: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD870u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CD870u, 0x1B0384u, 0x1B038Cu)) {
        return;
    }
    ctx->pc = 0x1B038Cu;
label_1b038c:
    // 0x1b038c: 0x8e65004c  lw          $a1, 0x4C($s3)
    ctx->pc = 0x1b038cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x1b0390: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B0390u;
    SET_GPR_U32(ctx, 31, 0x1B0398u);
    ctx->pc = 0x1B0394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0390u;
    // 0x1b0394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B0390u, 0x1B0398u)) {
        return;
    }
    ctx->pc = 0x1B0398u;
label_1b0398:
    // 0x1b0398: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0398u;
    {
        const bool branch_taken_0x1b0398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0398u;
        // 0x1b039c: 0x24040300  addiu       $a0, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0398) {
            ctx->pc = 0x1B03BCu;
            goto label_1b03bc;
        }
    }
    ctx->pc = 0x1B03A0u;
    // 0x1b03a0: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B03A0u;
    SET_GPR_U32(ctx, 31, 0x1B03A8u);
    ctx->pc = 0x1B03A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B03A0u;
    // 0x1b03a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B03A0u, 0x1B03A8u)) {
        return;
    }
    ctx->pc = 0x1B03A8u;
label_1b03a8:
    // 0x1b03a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b03a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b03acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b03b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03b4: 0xc073740  jal         func_1CDD00
    ctx->pc = 0x1B03B4u;
    SET_GPR_U32(ctx, 31, 0x1B03BCu);
    ctx->pc = 0x1B03B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B03B4u;
    // 0x1b03b8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CDD00u, 0x1B03B4u, 0x1B03BCu)) {
        return;
    }
    ctx->pc = 0x1B03BCu;
label_1b03bc:
    // 0x1b03bc: 0x8e650050  lw          $a1, 0x50($s3)
    ctx->pc = 0x1b03bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x1b03c0: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B03C0u;
    SET_GPR_U32(ctx, 31, 0x1B03C8u);
    ctx->pc = 0x1B03C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B03C0u;
    // 0x1b03c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B03C0u, 0x1B03C8u)) {
        return;
    }
    ctx->pc = 0x1B03C8u;
label_1b03c8:
    // 0x1b03c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B03C8u;
    {
        const bool branch_taken_0x1b03c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B03CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03C8u;
        // 0x1b03cc: 0x240403e0  addiu       $a0, $zero, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b03c8) {
            ctx->pc = 0x1B03ECu;
            goto label_1b03ec;
        }
    }
    ctx->pc = 0x1B03D0u;
    // 0x1b03d0: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B03D0u;
    SET_GPR_U32(ctx, 31, 0x1B03D8u);
    ctx->pc = 0x1B03D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B03D0u;
    // 0x1b03d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B03D0u, 0x1B03D8u)) {
        return;
    }
    ctx->pc = 0x1B03D8u;
label_1b03d8:
    // 0x1b03d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b03d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b03dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b03e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03e4: 0xc072c5a  jal         func_1CB168
    ctx->pc = 0x1B03E4u;
    SET_GPR_U32(ctx, 31, 0x1B03ECu);
    ctx->pc = 0x1B03E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B03E4u;
    // 0x1b03e8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CB168u, 0x1B03E4u, 0x1B03ECu)) {
        return;
    }
    ctx->pc = 0x1B03ECu;
label_1b03ec:
    // 0x1b03ec: 0x8e650054  lw          $a1, 0x54($s3)
    ctx->pc = 0x1b03ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1b03f0: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B03F0u;
    SET_GPR_U32(ctx, 31, 0x1B03F8u);
    ctx->pc = 0x1B03F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B03F0u;
    // 0x1b03f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B03F0u, 0x1B03F8u)) {
        return;
    }
    ctx->pc = 0x1B03F8u;
label_1b03f8:
    // 0x1b03f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B03F8u;
    {
        const bool branch_taken_0x1b03f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B03FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03F8u;
        // 0x1b03fc: 0x240402a0  addiu       $a0, $zero, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b03f8) {
            ctx->pc = 0x1B041Cu;
            goto label_1b041c;
        }
    }
    ctx->pc = 0x1B0400u;
    // 0x1b0400: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B0400u;
    SET_GPR_U32(ctx, 31, 0x1B0408u);
    ctx->pc = 0x1B0404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0400u;
    // 0x1b0404: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B0400u, 0x1B0408u)) {
        return;
    }
    ctx->pc = 0x1B0408u;
label_1b0408:
    // 0x1b0408: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b040c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b040cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0410: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b0410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0414: 0xc072016  jal         func_1C8058
    ctx->pc = 0x1B0414u;
    SET_GPR_U32(ctx, 31, 0x1B041Cu);
    ctx->pc = 0x1B0418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0414u;
    // 0x1b0418: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C8058u, 0x1B0414u, 0x1B041Cu)) {
        return;
    }
    ctx->pc = 0x1B041Cu;
label_1b041c:
    // 0x1b041c: 0x8e650058  lw          $a1, 0x58($s3)
    ctx->pc = 0x1b041cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x1b0420: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B0420u;
    SET_GPR_U32(ctx, 31, 0x1B0428u);
    ctx->pc = 0x1B0424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0420u;
    // 0x1b0424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B0420u, 0x1B0428u)) {
        return;
    }
    ctx->pc = 0x1B0428u;
label_1b0428:
    // 0x1b0428: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0428u;
    {
        const bool branch_taken_0x1b0428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0428u;
        // 0x1b042c: 0x24040300  addiu       $a0, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0428) {
            ctx->pc = 0x1B044Cu;
            goto label_1b044c;
        }
    }
    ctx->pc = 0x1B0430u;
    // 0x1b0430: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B0430u;
    SET_GPR_U32(ctx, 31, 0x1B0438u);
    ctx->pc = 0x1B0434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0430u;
    // 0x1b0434: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B0430u, 0x1B0438u)) {
        return;
    }
    ctx->pc = 0x1B0438u;
label_1b0438:
    // 0x1b0438: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b043c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b043cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0440: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b0440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0444: 0xc071b2c  jal         func_1C6CB0
    ctx->pc = 0x1B0444u;
    SET_GPR_U32(ctx, 31, 0x1B044Cu);
    ctx->pc = 0x1B0448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0444u;
    // 0x1b0448: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C6CB0u, 0x1B0444u, 0x1B044Cu)) {
        return;
    }
    ctx->pc = 0x1B044Cu;
label_1b044c:
    // 0x1b044c: 0x8e65005c  lw          $a1, 0x5C($s3)
    ctx->pc = 0x1b044cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x1b0450: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B0450u;
    SET_GPR_U32(ctx, 31, 0x1B0458u);
    ctx->pc = 0x1B0454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0450u;
    // 0x1b0454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B0450u, 0x1B0458u)) {
        return;
    }
    ctx->pc = 0x1B0458u;
label_1b0458:
    // 0x1b0458: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0458u;
    {
        const bool branch_taken_0x1b0458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0458u;
        // 0x1b045c: 0x240402c0  addiu       $a0, $zero, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0458) {
            ctx->pc = 0x1B047Cu;
            goto label_1b047c;
        }
    }
    ctx->pc = 0x1B0460u;
    // 0x1b0460: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B0460u;
    SET_GPR_U32(ctx, 31, 0x1B0468u);
    ctx->pc = 0x1B0464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0460u;
    // 0x1b0464: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B0460u, 0x1B0468u)) {
        return;
    }
    ctx->pc = 0x1B0468u;
label_1b0468:
    // 0x1b0468: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b046c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b046cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0470: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b0470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0474: 0xc073214  jal         func_1CC850
    ctx->pc = 0x1B0474u;
    SET_GPR_U32(ctx, 31, 0x1B047Cu);
    ctx->pc = 0x1B0478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0474u;
    // 0x1b0478: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC850u, 0x1B0474u, 0x1B047Cu)) {
        return;
    }
    ctx->pc = 0x1B047Cu;
label_1b047c:
    // 0x1b047c: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x1b047cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1b0480: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B0480u;
    SET_GPR_U32(ctx, 31, 0x1B0488u);
    ctx->pc = 0x1B0484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0480u;
    // 0x1b0484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B0480u, 0x1B0488u)) {
        return;
    }
    ctx->pc = 0x1B0488u;
label_1b0488:
    // 0x1b0488: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0488u;
    {
        const bool branch_taken_0x1b0488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0488u;
        // 0x1b048c: 0x240402a0  addiu       $a0, $zero, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0488) {
            ctx->pc = 0x1B04ACu;
            goto label_1b04ac;
        }
    }
    ctx->pc = 0x1B0490u;
    // 0x1b0490: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B0490u;
    SET_GPR_U32(ctx, 31, 0x1B0498u);
    ctx->pc = 0x1B0494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0490u;
    // 0x1b0494: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B0490u, 0x1B0498u)) {
        return;
    }
    ctx->pc = 0x1B0498u;
label_1b0498:
    // 0x1b0498: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b049c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b049cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b04a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04a4: 0xc073c88  jal         func_1CF220
    ctx->pc = 0x1B04A4u;
    SET_GPR_U32(ctx, 31, 0x1B04ACu);
    ctx->pc = 0x1B04A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04A4u;
    // 0x1b04a8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CF220u, 0x1B04A4u, 0x1B04ACu)) {
        return;
    }
    ctx->pc = 0x1B04ACu;
label_1b04ac:
    // 0x1b04ac: 0x8e650064  lw          $a1, 0x64($s3)
    ctx->pc = 0x1b04acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x1b04b0: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B04B0u;
    SET_GPR_U32(ctx, 31, 0x1B04B8u);
    ctx->pc = 0x1B04B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04B0u;
    // 0x1b04b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B04B0u, 0x1B04B8u)) {
        return;
    }
    ctx->pc = 0x1B04B8u;
label_1b04b8:
    // 0x1b04b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B04B8u;
    {
        const bool branch_taken_0x1b04b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04B8u;
        // 0x1b04bc: 0x240402c0  addiu       $a0, $zero, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b04b8) {
            ctx->pc = 0x1B04DCu;
            goto label_1b04dc;
        }
    }
    ctx->pc = 0x1B04C0u;
    // 0x1b04c0: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B04C0u;
    SET_GPR_U32(ctx, 31, 0x1B04C8u);
    ctx->pc = 0x1B04C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04C0u;
    // 0x1b04c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B04C0u, 0x1B04C8u)) {
        return;
    }
    ctx->pc = 0x1B04C8u;
label_1b04c8:
    // 0x1b04c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b04c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b04ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b04d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04d4: 0xc071e34  jal         func_1C78D0
    ctx->pc = 0x1B04D4u;
    SET_GPR_U32(ctx, 31, 0x1B04DCu);
    ctx->pc = 0x1B04D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04D4u;
    // 0x1b04d8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C78D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C78D0u, 0x1B04D4u, 0x1B04DCu)) {
        return;
    }
    ctx->pc = 0x1B04DCu;
label_1b04dc:
    // 0x1b04dc: 0x8e650068  lw          $a1, 0x68($s3)
    ctx->pc = 0x1b04dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1b04e0: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x1B04E0u;
    SET_GPR_U32(ctx, 31, 0x1B04E8u);
    ctx->pc = 0x1B04E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04E0u;
    // 0x1b04e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1979A8u, 0x1B04E0u, 0x1B04E8u)) {
        return;
    }
    ctx->pc = 0x1B04E8u;
label_1b04e8:
    // 0x1b04e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B04E8u;
    {
        const bool branch_taken_0x1b04e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B04ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04E8u;
        // 0x1b04ec: 0x24040430  addiu       $a0, $zero, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b04e8) {
            ctx->pc = 0x1B050Cu;
            goto label_1b050c;
        }
    }
    ctx->pc = 0x1B04F0u;
    // 0x1b04f0: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B04F0u;
    SET_GPR_U32(ctx, 31, 0x1B04F8u);
    ctx->pc = 0x1B04F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04F0u;
    // 0x1b04f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B04F0u, 0x1B04F8u)) {
        return;
    }
    ctx->pc = 0x1B04F8u;
label_1b04f8:
    // 0x1b04f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b04f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b04fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0500: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b0500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0504: 0xc0721c8  jal         func_1C8720
    ctx->pc = 0x1B0504u;
    SET_GPR_U32(ctx, 31, 0x1B050Cu);
    ctx->pc = 0x1B0508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0504u;
    // 0x1b0508: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8720u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C8720u, 0x1B0504u, 0x1B050Cu)) {
        return;
    }
    ctx->pc = 0x1B050Cu;
label_1b050c:
    // 0x1b050c: 0xc065cba  jal         func_1972E8
    ctx->pc = 0x1B050Cu;
    SET_GPR_U32(ctx, 31, 0x1B0514u);
    ctx->pc = 0x1B0510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B050Cu;
    // 0x1b0510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1972E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1972E8u, 0x1B050Cu, 0x1B0514u)) {
        return;
    }
    ctx->pc = 0x1B0514u;
label_1b0514:
    // 0x1b0514: 0x1040fec0  beqz        $v0, . + 4 + (-0x140 << 2)
    ctx->pc = 0x1B0514u;
    {
        const bool branch_taken_0x1b0514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0514u;
        // 0x1b0518: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0514) {
            ctx->pc = 0x1B0018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0018;
        }
    }
    ctx->pc = 0x1B051Cu;
label_1b051c:
    // 0x1b051c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1b051cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0520: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b0520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b0524: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b0524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0528: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b0528u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b052c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1b052cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0530: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1b0530u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0538: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0538u;
        // 0x1b053c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0540u;
}
