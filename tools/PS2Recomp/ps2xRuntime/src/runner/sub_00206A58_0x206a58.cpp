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

// Function: sub_00206A58
// Address: 0x206a58 - 0x206bd8
void sub_00206A58_0x206a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206A58_0x206a58");
#endif

    switch (ctx->pc) {
        case 0x206a74u: goto label_206a74;
        case 0x206a88u: goto label_206a88;
        case 0x206aa4u: goto label_206aa4;
        case 0x206ab0u: goto label_206ab0;
        case 0x206ab8u: goto label_206ab8;
        case 0x206ac8u: goto label_206ac8;
        case 0x206adcu: goto label_206adc;
        case 0x206ae8u: goto label_206ae8;
        case 0x206b00u: goto label_206b00;
        case 0x206b20u: goto label_206b20;
        case 0x206b30u: goto label_206b30;
        case 0x206b58u: goto label_206b58;
        case 0x206b78u: goto label_206b78;
        case 0x206bacu: goto label_206bac;
        case 0x206bb4u: goto label_206bb4;
        case 0x206bbcu: goto label_206bbc;
        default: break;
    }

    ctx->pc = 0x206a58u;

    // 0x206a58: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x206a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x206a5c: 0x7fb00280  sq          $s0, 0x280($sp)
    ctx->pc = 0x206a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 16));
    // 0x206a60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a64: 0x7fb10270  sq          $s1, 0x270($sp)
    ctx->pc = 0x206a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 17));
    // 0x206a68: 0xffbf0260  sd          $ra, 0x260($sp)
    ctx->pc = 0x206a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 31));
    // 0x206a6c: 0xc08367e  jal         func_20D9F8
    ctx->pc = 0x206A6Cu;
    SET_GPR_U32(ctx, 31, 0x206A74u);
    ctx->pc = 0x206A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A6Cu;
    // 0x206a70: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D9F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20D9F8u, 0x206A6Cu, 0x206A74u)) {
        return;
    }
    ctx->pc = 0x206A74u;
label_206a74:
    // 0x206a74: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x206a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x206a78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x206a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a7c: 0x240601d0  addiu       $a2, $zero, 0x1D0
    ctx->pc = 0x206a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x206a80: 0xc081ca8  jal         func_2072A0
    ctx->pc = 0x206A80u;
    SET_GPR_U32(ctx, 31, 0x206A88u);
    ctx->pc = 0x206A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A80u;
    // 0x206a84: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2072A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2072A0u, 0x206A80u, 0x206A88u)) {
        return;
    }
    ctx->pc = 0x206A88u;
label_206a88:
    // 0x206a88: 0x240303ef  addiu       $v1, $zero, 0x3EF
    ctx->pc = 0x206a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1007));
    // 0x206a8c: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x206a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x206a90: 0xafa30258  sw          $v1, 0x258($sp)
    ctx->pc = 0x206a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 3));
    // 0x206a94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x206a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a98: 0xafa20254  sw          $v0, 0x254($sp)
    ctx->pc = 0x206a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 2));
    // 0x206a9c: 0xc0848a4  jal         func_212290
    ctx->pc = 0x206A9Cu;
    SET_GPR_U32(ctx, 31, 0x206AA4u);
    ctx->pc = 0x206AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A9Cu;
    // 0x206aa0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212290u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212290u, 0x206A9Cu, 0x206AA4u)) {
        return;
    }
    ctx->pc = 0x206AA4u;
label_206aa4:
    // 0x206aa4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x206aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206aa8: 0xc081d02  jal         func_207408
    ctx->pc = 0x206AA8u;
    SET_GPR_U32(ctx, 31, 0x206AB0u);
    ctx->pc = 0x206AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206AA8u;
    // 0x206aac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207408u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x207408u, 0x206AA8u, 0x206AB0u)) {
        return;
    }
    ctx->pc = 0x206AB0u;
label_206ab0:
    // 0x206ab0: 0xc081dbe  jal         func_2076F8
    ctx->pc = 0x206AB0u;
    SET_GPR_U32(ctx, 31, 0x206AB8u);
    ctx->pc = 0x206AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206AB0u;
    // 0x206ab4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2076F8u, 0x206AB0u, 0x206AB8u)) {
        return;
    }
    ctx->pc = 0x206AB8u;
label_206ab8:
    // 0x206ab8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x206ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206abc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x206abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x206ac0: 0xc080924  jal         func_202490
    ctx->pc = 0x206AC0u;
    SET_GPR_U32(ctx, 31, 0x206AC8u);
    ctx->pc = 0x206AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206AC0u;
    // 0x206ac4: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x206AC0u, 0x206AC8u)) {
        return;
    }
    ctx->pc = 0x206AC8u;
label_206ac8:
    // 0x206ac8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x206ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x206acc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x206accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x206ad0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x206ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206ad4: 0xc089b6c  jal         func_226DB0
    ctx->pc = 0x206AD4u;
    SET_GPR_U32(ctx, 31, 0x206ADCu);
    ctx->pc = 0x206AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206AD4u;
    // 0x206ad8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226DB0u, 0x206AD4u, 0x206ADCu)) {
        return;
    }
    ctx->pc = 0x206ADCu;
label_206adc:
    // 0x206adc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x206adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ae0: 0xc089bb2  jal         func_226EC8
    ctx->pc = 0x206AE0u;
    SET_GPR_U32(ctx, 31, 0x206AE8u);
    ctx->pc = 0x206AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206AE0u;
    // 0x206ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226EC8u, 0x206AE0u, 0x206AE8u)) {
        return;
    }
    ctx->pc = 0x206AE8u;
label_206ae8:
    // 0x206ae8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x206ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206aec: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x206aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x206af0: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x206AF0u;
    {
        const bool branch_taken_0x206af0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x206AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206AF0u;
        // 0x206af4: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206af0) {
            ctx->pc = 0x206B30u;
            goto label_206b30;
        }
    }
    ctx->pc = 0x206AF8u;
    // 0x206af8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206afc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x206afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_206b00:
    // 0x206b00: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x206b00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x206b04: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x206b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x206b08: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x206b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x206b0c: 0x0  nop
    ctx->pc = 0x206b0cu;
    // NOP
    // 0x206b10: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x206B10u;
    {
        const bool branch_taken_0x206b10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x206B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B10u;
        // 0x206b14: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b10) {
            ctx->pc = 0x206B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206b00;
        }
    }
    ctx->pc = 0x206B18u;
    // 0x206b18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x206B18u;
    {
        const bool branch_taken_0x206b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B18u;
        // 0x206b1c: 0x8fa5008c  lw          $a1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b18) {
            ctx->pc = 0x206B34u;
            goto label_206b34;
        }
    }
    ctx->pc = 0x206B20u;
label_206b20:
    // 0x206b20: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x206b20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206b24: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x206b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x206b28: 0xc081e16  jal         func_207858
    ctx->pc = 0x206B28u;
    SET_GPR_U32(ctx, 31, 0x206B30u);
    ctx->pc = 0x206B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B28u;
    // 0x206b2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x207858u, 0x206B28u, 0x206B30u)) {
        return;
    }
    ctx->pc = 0x206B30u;
label_206b30:
    // 0x206b30: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x206b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_206b34:
    // 0x206b34: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x206b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x206b38: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x206b38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x206b3c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x206B3Cu;
    {
        const bool branch_taken_0x206b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B3Cu;
        // 0x206b40: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b3c) {
            ctx->pc = 0x206B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206b20;
        }
    }
    ctx->pc = 0x206B44u;
    // 0x206b44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x206b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206b48: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x206B48u;
    {
        const bool branch_taken_0x206b48 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x206B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B48u;
        // 0x206b4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b48) {
            ctx->pc = 0x206BA4u;
            goto label_206ba4;
        }
    }
    ctx->pc = 0x206B50u;
    // 0x206b50: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x206b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x206b54: 0x0  nop
    ctx->pc = 0x206b54u;
    // NOP
label_206b58:
    // 0x206b58: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x206b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x206b5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x206b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x206b60: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x206b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x206b64: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x206b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206b68: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x206B68u;
    {
        const bool branch_taken_0x206b68 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x206B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B68u;
        // 0x206b6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b68) {
            ctx->pc = 0x206B90u;
            goto label_206b90;
        }
    }
    ctx->pc = 0x206B70u;
    // 0x206b70: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x206b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x206b74: 0x0  nop
    ctx->pc = 0x206b74u;
    // NOP
label_206b78:
    // 0x206b78: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x206b78u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x206b7c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x206b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x206b80: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x206b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x206b84: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x206b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x206b88: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x206B88u;
    {
        const bool branch_taken_0x206b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B88u;
        // 0x206b8c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b88) {
            ctx->pc = 0x206B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206b78;
        }
    }
    ctx->pc = 0x206B90u;
label_206b90:
    // 0x206b90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x206b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206b94: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x206b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b98: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x206b98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x206b9c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x206B9Cu;
    {
        const bool branch_taken_0x206b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B9Cu;
        // 0x206ba0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b9c) {
            ctx->pc = 0x206B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206b58;
        }
    }
    ctx->pc = 0x206BA4u;
label_206ba4:
    // 0x206ba4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x206BA4u;
    SET_GPR_U32(ctx, 31, 0x206BACu);
    ctx->pc = 0x206BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206BA4u;
    // 0x206ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x206BA4u, 0x206BACu)) {
        return;
    }
    ctx->pc = 0x206BACu;
label_206bac:
    // 0x206bac: 0xc081d34  jal         func_2074D0
    ctx->pc = 0x206BACu;
    SET_GPR_U32(ctx, 31, 0x206BB4u);
    ctx->pc = 0x206BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206BACu;
    // 0x206bb0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2074D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2074D0u, 0x206BACu, 0x206BB4u)) {
        return;
    }
    ctx->pc = 0x206BB4u;
label_206bb4:
    // 0x206bb4: 0xc081cfa  jal         func_2073E8
    ctx->pc = 0x206BB4u;
    SET_GPR_U32(ctx, 31, 0x206BBCu);
    ctx->pc = 0x206BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206BB4u;
    // 0x206bb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2073E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2073E8u, 0x206BB4u, 0x206BBCu)) {
        return;
    }
    ctx->pc = 0x206BBCu;
label_206bbc:
    // 0x206bbc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x206bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206bc0: 0x7bb00280  lq          $s0, 0x280($sp)
    ctx->pc = 0x206bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x206bc4: 0x7bb10270  lq          $s1, 0x270($sp)
    ctx->pc = 0x206bc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x206bc8: 0xdfbf0260  ld          $ra, 0x260($sp)
    ctx->pc = 0x206bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x206bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x206BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BCCu;
        // 0x206bd0: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206BD4u;
    // 0x206bd4: 0x0  nop
    ctx->pc = 0x206bd4u;
    // NOP
    ctx->pc = 0x206bd8u;
}
