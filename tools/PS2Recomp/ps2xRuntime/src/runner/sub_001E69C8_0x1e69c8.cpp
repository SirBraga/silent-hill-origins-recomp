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

// Function: sub_001E69C8
// Address: 0x1e69c8 - 0x1e6c70
void sub_001E69C8_0x1e69c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E69C8_0x1e69c8");
#endif

    switch (ctx->pc) {
        case 0x1e69f0u: goto label_1e69f0;
        case 0x1e69fcu: goto label_1e69fc;
        case 0x1e6a08u: goto label_1e6a08;
        case 0x1e6a10u: goto label_1e6a10;
        case 0x1e6a3cu: goto label_1e6a3c;
        case 0x1e6a4cu: goto label_1e6a4c;
        case 0x1e6a58u: goto label_1e6a58;
        case 0x1e6a70u: goto label_1e6a70;
        case 0x1e6a7cu: goto label_1e6a7c;
        case 0x1e6a88u: goto label_1e6a88;
        case 0x1e6ac8u: goto label_1e6ac8;
        case 0x1e6ae0u: goto label_1e6ae0;
        case 0x1e6aecu: goto label_1e6aec;
        case 0x1e6b0cu: goto label_1e6b0c;
        case 0x1e6b1cu: goto label_1e6b1c;
        case 0x1e6b40u: goto label_1e6b40;
        case 0x1e6b64u: goto label_1e6b64;
        case 0x1e6b74u: goto label_1e6b74;
        case 0x1e6b80u: goto label_1e6b80;
        case 0x1e6b8cu: goto label_1e6b8c;
        case 0x1e6ba0u: goto label_1e6ba0;
        case 0x1e6bb8u: goto label_1e6bb8;
        case 0x1e6bc4u: goto label_1e6bc4;
        case 0x1e6be4u: goto label_1e6be4;
        case 0x1e6bf4u: goto label_1e6bf4;
        case 0x1e6c08u: goto label_1e6c08;
        case 0x1e6c18u: goto label_1e6c18;
        case 0x1e6c24u: goto label_1e6c24;
        case 0x1e6c3cu: goto label_1e6c3c;
        case 0x1e6c4cu: goto label_1e6c4c;
        default: break;
    }

    ctx->pc = 0x1e69c8u;

    // 0x1e69c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e69c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e69cc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e69ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1e69d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e69d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e69d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e69d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e69d8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1e69d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1e69dc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1e69dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1e69e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1e69e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1e69e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e69e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e69e8: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x1E69E8u;
    SET_GPR_U32(ctx, 31, 0x1E69F0u);
    ctx->pc = 0x1E69ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E69E8u;
    // 0x1e69ec: 0x24120064  addiu       $s2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1E69E8u, 0x1E69F0u)) {
        return;
    }
    ctx->pc = 0x1E69F0u;
label_1e69f0:
    // 0x1e69f0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x1e69f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x1e69f4: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x1E69F4u;
    SET_GPR_U32(ctx, 31, 0x1E69FCu);
    ctx->pc = 0x1E69F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E69F4u;
    // 0x1e69f8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1E69F4u, 0x1E69FCu)) {
        return;
    }
    ctx->pc = 0x1E69FCu;
label_1e69fc:
    // 0x1e69fc: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x1e69fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x1e6a00: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x1E6A00u;
    SET_GPR_U32(ctx, 31, 0x1E6A08u);
    ctx->pc = 0x1E6A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6A00u;
    // 0x1e6a04: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1E6A00u, 0x1E6A08u)) {
        return;
    }
    ctx->pc = 0x1E6A08u;
label_1e6a08:
    // 0x1e6a08: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x1E6A08u;
    SET_GPR_U32(ctx, 31, 0x1E6A10u);
    ctx->pc = 0x1E6A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6A08u;
    // 0x1e6a0c: 0x305407ff  andi        $s4, $v0, 0x7FF (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1E6A08u, 0x1E6A10u)) {
        return;
    }
    ctx->pc = 0x1E6A10u;
label_1e6a10:
    // 0x1e6a10: 0x305307ff  andi        $s3, $v0, 0x7FF
    ctx->pc = 0x1e6a10u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x1e6a14: 0x92250024  lbu         $a1, 0x24($s1)
    ctx->pc = 0x1e6a14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e6a18: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1e6a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e6a1c: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e6a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e6a20: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x1e6a20u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x1e6a24: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E6A24u;
    {
        const bool branch_taken_0x1e6a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6a24) {
            ctx->pc = 0x1E6A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6A24u;
            // 0x1e6a28: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6A2Cu;
            goto label_1e6a2c;
        }
    }
    ctx->pc = 0x1E6A2Cu;
label_1e6a2c:
    // 0x1e6a2c: 0x2812  mflo        $a1
    ctx->pc = 0x1e6a2cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1e6a30: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1e6a30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1e6a34: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6A34u;
    SET_GPR_U32(ctx, 31, 0x1E6A3Cu);
    ctx->pc = 0x1E6A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6A34u;
    // 0x1e6a38: 0xb22825  or          $a1, $a1, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6A34u, 0x1E6A3Cu)) {
        return;
    }
    ctx->pc = 0x1E6A3Cu;
label_1e6a3c:
    // 0x1e6a3c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1e6a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1e6a40: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x1e6a40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x1e6a44: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6A44u;
    SET_GPR_U32(ctx, 31, 0x1E6A4Cu);
    ctx->pc = 0x1E6A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6A44u;
    // 0x1e6a48: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6A44u, 0x1E6A4Cu)) {
        return;
    }
    ctx->pc = 0x1E6A4Cu;
label_1e6a4c:
    // 0x1e6a4c: 0x24050241  addiu       $a1, $zero, 0x241
    ctx->pc = 0x1e6a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    // 0x1e6a50: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6A50u;
    SET_GPR_U32(ctx, 31, 0x1E6A58u);
    ctx->pc = 0x1E6A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6A50u;
    // 0x1e6a54: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6A50u, 0x1E6A58u)) {
        return;
    }
    ctx->pc = 0x1E6A58u;
label_1e6a58:
    // 0x1e6a58: 0x9e250018  lwu         $a1, 0x18($s1)
    ctx->pc = 0x1e6a58u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1e6a5c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1e6a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e6a60: 0x9e22001c  lwu         $v0, 0x1C($s1)
    ctx->pc = 0x1e6a60u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1e6a64: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1e6a64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1e6a68: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6A68u;
    SET_GPR_U32(ctx, 31, 0x1E6A70u);
    ctx->pc = 0x1E6A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6A68u;
    // 0x1e6a6c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6A68u, 0x1E6A70u)) {
        return;
    }
    ctx->pc = 0x1E6A70u;
label_1e6a70:
    // 0x1e6a70: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1e6a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e6a74: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6A74u;
    SET_GPR_U32(ctx, 31, 0x1E6A7Cu);
    ctx->pc = 0x1E6A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6A74u;
    // 0x1e6a78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6A74u, 0x1E6A7Cu)) {
        return;
    }
    ctx->pc = 0x1E6A7Cu;
label_1e6a7c:
    // 0x1e6a7c: 0x24050156  addiu       $a1, $zero, 0x156
    ctx->pc = 0x1e6a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x1e6a80: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6A80u;
    SET_GPR_U32(ctx, 31, 0x1E6A88u);
    ctx->pc = 0x1E6A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6A80u;
    // 0x1e6a84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6A80u, 0x1E6A88u)) {
        return;
    }
    ctx->pc = 0x1E6A88u;
label_1e6a88:
    // 0x1e6a88: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x1e6a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1e6a8c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1e6a8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e6a90: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1e6a90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1e6a94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e6a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6a98: 0x51242  srl         $v0, $a1, 9
    ctx->pc = 0x1e6a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 9));
    // 0x1e6a9c: 0x51c42  srl         $v1, $a1, 17
    ctx->pc = 0x1e6a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 17));
    // 0x1e6aa0: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1e6aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1e6aa4: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x1e6aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1e6aa8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x1e6aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x1e6aac: 0x30a5007f  andi        $a1, $a1, 0x7F
    ctx->pc = 0x1e6aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x1e6ab0: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x1e6ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1e6ab4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1e6ab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1e6ab8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e6ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1e6abc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1e6abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1e6ac0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6AC0u;
    SET_GPR_U32(ctx, 31, 0x1E6AC8u);
    ctx->pc = 0x1E6AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6AC0u;
    // 0x1e6ac4: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6AC0u, 0x1E6AC8u)) {
        return;
    }
    ctx->pc = 0x1E6AC8u;
label_1e6ac8:
    // 0x1e6ac8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1e6ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e6acc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e6accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e6ad0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e6ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e6ad4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e6ad4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e6ad8: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6AD8u;
    SET_GPR_U32(ctx, 31, 0x1E6AE0u);
    ctx->pc = 0x1E6ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6AD8u;
    // 0x1e6adc: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6AD8u, 0x1E6AE0u)) {
        return;
    }
    ctx->pc = 0x1E6AE0u;
label_1e6ae0:
    // 0x1e6ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6ae4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6AE4u;
    SET_GPR_U32(ctx, 31, 0x1E6AECu);
    ctx->pc = 0x1E6AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6AE4u;
    // 0x1e6ae8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6AE4u, 0x1E6AECu)) {
        return;
    }
    ctx->pc = 0x1E6AECu;
label_1e6aec:
    // 0x1e6aec: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1e6aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e6af0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e6af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e6af4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e6af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e6af8: 0x24a51c00  addiu       $a1, $a1, 0x1C00
    ctx->pc = 0x1e6af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7168));
    // 0x1e6afc: 0x24422000  addiu       $v0, $v0, 0x2000
    ctx->pc = 0x1e6afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x1e6b00: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e6b00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e6b04: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6B04u;
    SET_GPR_U32(ctx, 31, 0x1E6B0Cu);
    ctx->pc = 0x1E6B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B04u;
    // 0x1e6b08: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6B04u, 0x1E6B0Cu)) {
        return;
    }
    ctx->pc = 0x1E6B0Cu;
label_1e6b0c:
    // 0x1e6b0c: 0x3c051c00  lui         $a1, 0x1C00
    ctx->pc = 0x1e6b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7168 << 16));
    // 0x1e6b10: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x1e6b10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x1e6b14: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6B14u;
    SET_GPR_U32(ctx, 31, 0x1E6B1Cu);
    ctx->pc = 0x1E6B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B14u;
    // 0x1e6b18: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6B14u, 0x1E6B1Cu)) {
        return;
    }
    ctx->pc = 0x1E6B1Cu;
label_1e6b1c:
    // 0x1e6b1c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e6b20: 0x1840004b  blez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1E6B20u;
    {
        const bool branch_taken_0x1e6b20 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B20u;
        // 0x1e6b24: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6b20) {
            ctx->pc = 0x1E6C50u;
            goto label_1e6c50;
        }
    }
    ctx->pc = 0x1E6B28u;
    // 0x1e6b28: 0x9e250018  lwu         $a1, 0x18($s1)
    ctx->pc = 0x1e6b28u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1e6b2c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1e6b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e6b30: 0x9e22001c  lwu         $v0, 0x1C($s1)
    ctx->pc = 0x1e6b30u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1e6b34: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1e6b34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1e6b38: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6B38u;
    SET_GPR_U32(ctx, 31, 0x1E6B40u);
    ctx->pc = 0x1E6B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B38u;
    // 0x1e6b3c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6B38u, 0x1E6B40u)) {
        return;
    }
    ctx->pc = 0x1E6B40u;
label_1e6b40:
    // 0x1e6b40: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x1e6b40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e6b44: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e6b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e6b48: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e6b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e6b4c: 0x108203  sra         $s0, $s0, 8
    ctx->pc = 0x1e6b4cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 8));
    // 0x1e6b50: 0x2a020081  slti        $v0, $s0, 0x81
    ctx->pc = 0x1e6b50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1e6b54: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1e6b54u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
    // 0x1e6b58: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x1e6b58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1e6b5c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6B5Cu;
    SET_GPR_U32(ctx, 31, 0x1E6B64u);
    ctx->pc = 0x1E6B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B5Cu;
    // 0x1e6b60: 0xb22825  or          $a1, $a1, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6B5Cu, 0x1E6B64u)) {
        return;
    }
    ctx->pc = 0x1E6B64u;
label_1e6b64:
    // 0x1e6b64: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1e6b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1e6b68: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x1e6b68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x1e6b6c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6B6Cu;
    SET_GPR_U32(ctx, 31, 0x1E6B74u);
    ctx->pc = 0x1E6B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B6Cu;
    // 0x1e6b70: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6B6Cu, 0x1E6B74u)) {
        return;
    }
    ctx->pc = 0x1E6B74u;
label_1e6b74:
    // 0x1e6b74: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e6b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e6b78: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6B78u;
    SET_GPR_U32(ctx, 31, 0x1E6B80u);
    ctx->pc = 0x1E6B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B78u;
    // 0x1e6b7c: 0x24050241  addiu       $a1, $zero, 0x241 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6B78u, 0x1E6B80u)) {
        return;
    }
    ctx->pc = 0x1E6B80u;
label_1e6b80:
    // 0x1e6b80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e6b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6b84: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6B84u;
    SET_GPR_U32(ctx, 31, 0x1E6B8Cu);
    ctx->pc = 0x1E6B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B84u;
    // 0x1e6b88: 0x24050156  addiu       $a1, $zero, 0x156 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6B84u, 0x1E6B8Cu)) {
        return;
    }
    ctx->pc = 0x1E6B8Cu;
label_1e6b8c:
    // 0x1e6b8c: 0x3405805a  ori         $a1, $zero, 0x805A
    ctx->pc = 0x1e6b8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32858);
    // 0x1e6b90: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e6b90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e6b94: 0x34a55a5a  ori         $a1, $a1, 0x5A5A
    ctx->pc = 0x1e6b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)23130);
    // 0x1e6b98: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6B98u;
    SET_GPR_U32(ctx, 31, 0x1E6BA0u);
    ctx->pc = 0x1E6B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B98u;
    // 0x1e6b9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6B98u, 0x1E6BA0u)) {
        return;
    }
    ctx->pc = 0x1E6BA0u;
label_1e6ba0:
    // 0x1e6ba0: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1e6ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e6ba4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e6ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e6ba8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e6ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e6bac: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e6bacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e6bb0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6BB0u;
    SET_GPR_U32(ctx, 31, 0x1E6BB8u);
    ctx->pc = 0x1E6BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6BB0u;
    // 0x1e6bb4: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6BB0u, 0x1E6BB8u)) {
        return;
    }
    ctx->pc = 0x1E6BB8u;
label_1e6bb8:
    // 0x1e6bb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6bbc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6BBCu;
    SET_GPR_U32(ctx, 31, 0x1E6BC4u);
    ctx->pc = 0x1E6BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6BBCu;
    // 0x1e6bc0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6BBCu, 0x1E6BC4u)) {
        return;
    }
    ctx->pc = 0x1E6BC4u;
label_1e6bc4:
    // 0x1e6bc4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1e6bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e6bc8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e6bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e6bcc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e6bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e6bd0: 0x24a51c00  addiu       $a1, $a1, 0x1C00
    ctx->pc = 0x1e6bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7168));
    // 0x1e6bd4: 0x24422000  addiu       $v0, $v0, 0x2000
    ctx->pc = 0x1e6bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x1e6bd8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e6bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e6bdc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6BDCu;
    SET_GPR_U32(ctx, 31, 0x1E6BE4u);
    ctx->pc = 0x1E6BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6BDCu;
    // 0x1e6be0: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6BDCu, 0x1E6BE4u)) {
        return;
    }
    ctx->pc = 0x1E6BE4u;
label_1e6be4:
    // 0x1e6be4: 0x3c051c00  lui         $a1, 0x1C00
    ctx->pc = 0x1e6be4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7168 << 16));
    // 0x1e6be8: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x1e6be8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x1e6bec: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6BECu;
    SET_GPR_U32(ctx, 31, 0x1E6BF4u);
    ctx->pc = 0x1E6BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6BECu;
    // 0x1e6bf0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6BECu, 0x1E6BF4u)) {
        return;
    }
    ctx->pc = 0x1E6BF4u;
label_1e6bf4:
    // 0x1e6bf4: 0x108083  sra         $s0, $s0, 2
    ctx->pc = 0x1e6bf4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 2));
    // 0x1e6bf8: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e6bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e6bfc: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1e6bfcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1e6c00: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6C00u;
    SET_GPR_U32(ctx, 31, 0x1E6C08u);
    ctx->pc = 0x1E6C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C00u;
    // 0x1e6c04: 0x2122825  or          $a1, $s0, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6C00u, 0x1E6C08u)) {
        return;
    }
    ctx->pc = 0x1E6C08u;
label_1e6c08:
    // 0x1e6c08: 0x132c38  dsll        $a1, $s3, 16
    ctx->pc = 0x1e6c08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) << 16);
    // 0x1e6c0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e6c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e6c10: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6C10u;
    SET_GPR_U32(ctx, 31, 0x1E6C18u);
    ctx->pc = 0x1E6C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C10u;
    // 0x1e6c14: 0x2852825  or          $a1, $s4, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6C10u, 0x1E6C18u)) {
        return;
    }
    ctx->pc = 0x1E6C18u;
label_1e6c18:
    // 0x1e6c18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c1c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6C1Cu;
    SET_GPR_U32(ctx, 31, 0x1E6C24u);
    ctx->pc = 0x1E6C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C1Cu;
    // 0x1e6c20: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6C1Cu, 0x1E6C24u)) {
        return;
    }
    ctx->pc = 0x1E6C24u;
label_1e6c24:
    // 0x1e6c24: 0x26650e00  addiu       $a1, $s3, 0xE00
    ctx->pc = 0x1e6c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3584));
    // 0x1e6c28: 0x26821000  addiu       $v0, $s4, 0x1000
    ctx->pc = 0x1e6c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4096));
    // 0x1e6c2c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e6c2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e6c30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e6c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e6c34: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6C34u;
    SET_GPR_U32(ctx, 31, 0x1E6C3Cu);
    ctx->pc = 0x1E6C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C34u;
    // 0x1e6c38: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6C34u, 0x1E6C3Cu)) {
        return;
    }
    ctx->pc = 0x1E6C3Cu;
label_1e6c3c:
    // 0x1e6c3c: 0x3c051c00  lui         $a1, 0x1C00
    ctx->pc = 0x1e6c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7168 << 16));
    // 0x1e6c40: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x1e6c40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x1e6c44: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6C44u;
    SET_GPR_U32(ctx, 31, 0x1E6C4Cu);
    ctx->pc = 0x1E6C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C44u;
    // 0x1e6c48: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6C44u, 0x1E6C4Cu)) {
        return;
    }
    ctx->pc = 0x1E6C4Cu;
label_1e6c4c:
    // 0x1e6c4c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1e6c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e6c50:
    // 0x1e6c50: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e6c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e6c54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e6c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6c58: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1e6c58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6c5c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1e6c5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6c64: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C64u;
        // 0x1e6c68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6C6Cu;
    // 0x1e6c6c: 0x0  nop
    ctx->pc = 0x1e6c6cu;
    // NOP
    ctx->pc = 0x1e6c70u;
}
