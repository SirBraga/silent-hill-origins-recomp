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

// Function: sub_001ECFE8
// Address: 0x1ecfe8 - 0x1ed0f8
void sub_001ECFE8_0x1ecfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECFE8_0x1ecfe8");
#endif

    switch (ctx->pc) {
        case 0x1ed010u: goto label_1ed010;
        case 0x1ed024u: goto label_1ed024;
        case 0x1ed088u: goto label_1ed088;
        case 0x1ed090u: goto label_1ed090;
        case 0x1ed0acu: goto label_1ed0ac;
        case 0x1ed0c8u: goto label_1ed0c8;
        case 0x1ed0e0u: goto label_1ed0e0;
        default: break;
    }

    ctx->pc = 0x1ecfe8u;

label_1ecfe8:
    // 0x1ecfe8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ecfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ecfec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ecfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ecff0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ecff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ecff4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ecff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ecff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ecffc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1ecffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ed000: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED000u;
    {
        const bool branch_taken_0x1ed000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED000u;
        // 0x1ed004: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed000) {
            ctx->pc = 0x1ED010u;
            goto label_1ed010;
        }
    }
    ctx->pc = 0x1ED008u;
    // 0x1ed008: 0xc07b3fa  jal         func_1ECFE8
    ctx->pc = 0x1ED008u;
    SET_GPR_U32(ctx, 31, 0x1ED010u);
    ctx->pc = 0x1ECFE8u;
    goto label_1ecfe8;
    ctx->pc = 0x1ED010u;
label_1ed010:
    // 0x1ed010: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1ed010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ed014: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED014u;
    {
        const bool branch_taken_0x1ed014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed014) {
            ctx->pc = 0x1ED018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED014u;
            // 0x1ed018: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED028u;
            goto label_1ed028;
        }
    }
    ctx->pc = 0x1ED01Cu;
    // 0x1ed01c: 0xc07b3fa  jal         func_1ECFE8
    ctx->pc = 0x1ED01Cu;
    SET_GPR_U32(ctx, 31, 0x1ED024u);
    ctx->pc = 0x1ED020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED01Cu;
    // 0x1ed020: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECFE8u;
    goto label_1ecfe8;
    ctx->pc = 0x1ED024u;
label_1ed024:
    // 0x1ed024: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ed024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ed028:
    // 0x1ed028: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x1ED028u;
    {
        const bool branch_taken_0x1ed028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed028) {
            ctx->pc = 0x1ED02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED028u;
            // 0x1ed02c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED0E4u;
            goto label_1ed0e4;
        }
    }
    ctx->pc = 0x1ED030u;
    // 0x1ed030: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1ed030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ed034: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x1ED034u;
    {
        const bool branch_taken_0x1ed034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed034) {
            ctx->pc = 0x1ED038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED034u;
            // 0x1ed038: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED0E4u;
            goto label_1ed0e4;
        }
    }
    ctx->pc = 0x1ED03Cu;
    // 0x1ed03c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ed03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ed040: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x1ED040u;
    {
        const bool branch_taken_0x1ed040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed040) {
            ctx->pc = 0x1ED044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED040u;
            // 0x1ed044: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED0E4u;
            goto label_1ed0e4;
        }
    }
    ctx->pc = 0x1ED048u;
    // 0x1ed048: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ed048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed04c: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1ED04Cu;
    {
        const bool branch_taken_0x1ed04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed04c) {
            ctx->pc = 0x1ED050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED04Cu;
            // 0x1ed050: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED0E4u;
            goto label_1ed0e4;
        }
    }
    ctx->pc = 0x1ED054u;
    // 0x1ed054: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ed054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ed058: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ed058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed05c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1ed05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ed060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed064: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ed064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ed068: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ed068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ed06c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ed06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ed070: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1ed070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed074: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1ed074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1ed078: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x1ed078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
    // 0x1ed07c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ed07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed080: 0xc07a764  jal         func_1E9D90
    ctx->pc = 0x1ED080u;
    SET_GPR_U32(ctx, 31, 0x1ED088u);
    ctx->pc = 0x1ED084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED080u;
    // 0x1ed084: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E9D90u, 0x1ED080u, 0x1ED088u)) {
        return;
    }
    ctx->pc = 0x1ED088u;
label_1ed088:
    // 0x1ed088: 0xc07b310  jal         func_1ECC40
    ctx->pc = 0x1ED088u;
    SET_GPR_U32(ctx, 31, 0x1ED090u);
    ctx->pc = 0x1ED08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED088u;
    // 0x1ed08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECC40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ECC40u, 0x1ED088u, 0x1ED090u)) {
        return;
    }
    ctx->pc = 0x1ED090u;
label_1ed090:
    // 0x1ed090: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1ED090u;
    {
        const bool branch_taken_0x1ed090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED090u;
        // 0x1ed094: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed090) {
            ctx->pc = 0x1ED0E0u;
            goto label_1ed0e0;
        }
    }
    ctx->pc = 0x1ED098u;
    // 0x1ed098: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ed098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ed09c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1ED09Cu;
    {
        const bool branch_taken_0x1ed09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED09Cu;
        // 0x1ed0a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed09c) {
            ctx->pc = 0x1ED0E0u;
            goto label_1ed0e0;
        }
    }
    ctx->pc = 0x1ED0A4u;
    // 0x1ed0a4: 0xc07b02e  jal         func_1EC0B8
    ctx->pc = 0x1ED0A4u;
    SET_GPR_U32(ctx, 31, 0x1ED0ACu);
    ctx->pc = 0x1ED0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED0A4u;
    // 0x1ed0a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC0B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC0B8u, 0x1ED0A4u, 0x1ED0ACu)) {
        return;
    }
    ctx->pc = 0x1ED0ACu;
label_1ed0ac:
    // 0x1ed0ac: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1ED0ACu;
    {
        const bool branch_taken_0x1ed0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed0ac) {
            ctx->pc = 0x1ED0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED0ACu;
            // 0x1ed0b0: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED0B4u;
            goto label_1ed0b4;
        }
    }
    ctx->pc = 0x1ED0B4u;
label_1ed0b4:
    // 0x1ed0b4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED0B4u;
    {
        const bool branch_taken_0x1ed0b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED0B4u;
        // 0x1ed0b8: 0x2604002c  addiu       $a0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed0b4) {
            ctx->pc = 0x1ED0D0u;
            goto label_1ed0d0;
        }
    }
    ctx->pc = 0x1ED0BCu;
    // 0x1ed0bc: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1ed0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1ed0c0: 0xc0c4bea  jal         func_312FA8
    ctx->pc = 0x1ED0C0u;
    SET_GPR_U32(ctx, 31, 0x1ED0C8u);
    ctx->pc = 0x1ED0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED0C0u;
    // 0x1ed0c4: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312FA8u, 0x1ED0C0u, 0x1ED0C8u)) {
        return;
    }
    ctx->pc = 0x1ED0C8u;
label_1ed0c8:
    // 0x1ed0c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED0C8u;
    {
        const bool branch_taken_0x1ed0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED0C8u;
        // 0x1ed0cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed0c8) {
            ctx->pc = 0x1ED0E4u;
            goto label_1ed0e4;
        }
    }
    ctx->pc = 0x1ED0D0u;
label_1ed0d0:
    // 0x1ed0d0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ed0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ed0d4: 0x24a51e90  addiu       $a1, $a1, 0x1E90
    ctx->pc = 0x1ed0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7824));
    // 0x1ed0d8: 0xc0c4bea  jal         func_312FA8
    ctx->pc = 0x1ED0D8u;
    SET_GPR_U32(ctx, 31, 0x1ED0E0u);
    ctx->pc = 0x1ED0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED0D8u;
    // 0x1ed0dc: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312FA8u, 0x1ED0D8u, 0x1ED0E0u)) {
        return;
    }
    ctx->pc = 0x1ED0E0u;
label_1ed0e0:
    // 0x1ed0e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ed0e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ed0e4:
    // 0x1ed0e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ed0e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed0e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED0ECu;
        // 0x1ed0f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED0F4u;
    // 0x1ed0f4: 0x0  nop
    ctx->pc = 0x1ed0f4u;
    // NOP
    ctx->pc = 0x1ed0f8u;
}
