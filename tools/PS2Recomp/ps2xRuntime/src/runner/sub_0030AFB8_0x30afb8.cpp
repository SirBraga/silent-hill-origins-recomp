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

// Function: sub_0030AFB8
// Address: 0x30afb8 - 0x30b1f0
void sub_0030AFB8_0x30afb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AFB8_0x30afb8");
#endif

    switch (ctx->pc) {
        case 0x30afecu: goto label_30afec;
        case 0x30b020u: goto label_30b020;
        case 0x30b04cu: goto label_30b04c;
        case 0x30b080u: goto label_30b080;
        case 0x30b090u: goto label_30b090;
        case 0x30b0a0u: goto label_30b0a0;
        case 0x30b0a8u: goto label_30b0a8;
        case 0x30b0b4u: goto label_30b0b4;
        case 0x30b0e4u: goto label_30b0e4;
        case 0x30b110u: goto label_30b110;
        case 0x30b148u: goto label_30b148;
        case 0x30b174u: goto label_30b174;
        case 0x30b1acu: goto label_30b1ac;
        case 0x30b1b4u: goto label_30b1b4;
        default: break;
    }

    ctx->pc = 0x30afb8u;

    // 0x30afb8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x30afb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x30afbc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x30afbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x30afc0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30afc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30afc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30afc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30afc8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x30afc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x30afcc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x30afccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30afd0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x30afd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x30afd4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x30afd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x30afd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30afd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30afdc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30afe0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30afe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30afe4: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30AFE4u;
    SET_GPR_U32(ctx, 31, 0x30AFECu);
    ctx->pc = 0x30AFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AFE4u;
    // 0x30afe8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30AFE4u, 0x30AFECu)) {
        return;
    }
    ctx->pc = 0x30AFECu;
label_30afec:
    // 0x30afec: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x30AFECu;
    {
        const bool branch_taken_0x30afec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AFECu;
        // 0x30aff0: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30afec) {
            ctx->pc = 0x30B080u;
            goto label_30b080;
        }
    }
    ctx->pc = 0x30AFF4u;
    // 0x30aff4: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x30aff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x30aff8: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30aff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30affc: 0x14430020  bne         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x30AFFCu;
    {
        const bool branch_taken_0x30affc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AFFCu;
        // 0x30b000: 0x49c02  srl         $s3, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30affc) {
            ctx->pc = 0x30B080u;
            goto label_30b080;
        }
    }
    ctx->pc = 0x30B004u;
    // 0x30b004: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x30b004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x30b008: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x30B008u;
    {
        const bool branch_taken_0x30b008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B008u;
        // 0x30b00c: 0x27b00014  addiu       $s0, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b008) {
            ctx->pc = 0x30B080u;
            goto label_30b080;
        }
    }
    ctx->pc = 0x30B010u;
    // 0x30b010: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30b010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30b014: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30b014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30b018: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30B018u;
    SET_GPR_U32(ctx, 31, 0x30B020u);
    ctx->pc = 0x30B01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B018u;
    // 0x30b01c: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30B018u, 0x30B020u)) {
        return;
    }
    ctx->pc = 0x30B020u;
label_30b020:
    // 0x30b020: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30B020u;
    {
        const bool branch_taken_0x30b020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B020u;
        // 0x30b024: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b020) {
            ctx->pc = 0x30B058u;
            goto label_30b058;
        }
    }
    ctx->pc = 0x30B028u;
    // 0x30b028: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30b028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30b02c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30b02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30b030: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30B030u;
    {
        const bool branch_taken_0x30b030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B030u;
        // 0x30b034: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b030) {
            ctx->pc = 0x30B058u;
            goto label_30b058;
        }
    }
    ctx->pc = 0x30B038u;
    // 0x30b038: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30B038u;
    {
        const bool branch_taken_0x30b038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B038u;
        // 0x30b03c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b038) {
            ctx->pc = 0x30B058u;
            goto label_30b058;
        }
    }
    ctx->pc = 0x30B040u;
    // 0x30b040: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30b040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30b044: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30B044u;
    SET_GPR_U32(ctx, 31, 0x30B04Cu);
    ctx->pc = 0x30B048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B044u;
    // 0x30b048: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30B044u, 0x30B04Cu)) {
        return;
    }
    ctx->pc = 0x30B04Cu;
label_30b04c:
    // 0x30b04c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30B04Cu;
    {
        const bool branch_taken_0x30b04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b04c) {
            ctx->pc = 0x30B060u;
            goto label_30b060;
        }
    }
    ctx->pc = 0x30B054u;
    // 0x30b054: 0x0  nop
    ctx->pc = 0x30b054u;
    // NOP
label_30b058:
    // 0x30b058: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30B058u;
    {
        const bool branch_taken_0x30b058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B058u;
        // 0x30b05c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b058) {
            ctx->pc = 0x30B078u;
            goto label_30b078;
        }
    }
    ctx->pc = 0x30B060u;
label_30b060:
    // 0x30b060: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30B060u;
    {
        const bool branch_taken_0x30b060 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B060u;
        // 0x30b064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b060) {
            ctx->pc = 0x30B078u;
            goto label_30b078;
        }
    }
    ctx->pc = 0x30B068u;
    // 0x30b068: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30b068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30b06c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30b070: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30b070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30b074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30b078:
    // 0x30b078: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B078u;
    {
        const bool branch_taken_0x30b078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B078u;
        // 0x30b07c: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b078) {
            ctx->pc = 0x30B088u;
            goto label_30b088;
        }
    }
    ctx->pc = 0x30B080u;
label_30b080:
    // 0x30b080: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x30B080u;
    {
        const bool branch_taken_0x30b080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B080u;
        // 0x30b084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b080) {
            ctx->pc = 0x30B1CCu;
            goto label_30b1cc;
        }
    }
    ctx->pc = 0x30B088u;
label_30b088:
    // 0x30b088: 0xc0b59d6  jal         func_2D6758
    ctx->pc = 0x30B088u;
    SET_GPR_U32(ctx, 31, 0x30B090u);
    ctx->pc = 0x30B08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B088u;
    // 0x30b08c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6758u, 0x30B088u, 0x30B090u)) {
        return;
    }
    ctx->pc = 0x30B090u;
label_30b090:
    // 0x30b090: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30b090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b094: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x30b094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x30b098: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30B098u;
    {
        const bool branch_taken_0x30b098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B098u;
        // 0x30b09c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b098) {
            ctx->pc = 0x30B0CCu;
            goto label_30b0cc;
        }
    }
    ctx->pc = 0x30B0A0u;
label_30b0a0:
    // 0x30b0a0: 0xc0b5a6a  jal         func_2D69A8
    ctx->pc = 0x30B0A0u;
    SET_GPR_U32(ctx, 31, 0x30B0A8u);
    ctx->pc = 0x30B0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B0A0u;
    // 0x30b0a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D69A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D69A8u, 0x30B0A0u, 0x30B0A8u)) {
        return;
    }
    ctx->pc = 0x30B0A8u;
label_30b0a8:
    // 0x30b0a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30b0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b0ac: 0xc0c2f30  jal         func_30BCC0
    ctx->pc = 0x30B0ACu;
    SET_GPR_U32(ctx, 31, 0x30B0B4u);
    ctx->pc = 0x30B0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B0ACu;
    // 0x30b0b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BCC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30BCC0u, 0x30B0ACu, 0x30B0B4u)) {
        return;
    }
    ctx->pc = 0x30B0B4u;
label_30b0b4:
    // 0x30b0b4: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x30B0B4u;
    {
        const bool branch_taken_0x30b0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B0B4u;
        // 0x30b0b8: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b0b4) {
            ctx->pc = 0x30B080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b080;
        }
    }
    ctx->pc = 0x30B0BCu;
    // 0x30b0bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30b0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30b0c0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x30b0c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30b0c4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x30B0C4u;
    {
        const bool branch_taken_0x30b0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B0C4u;
        // 0x30b0c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b0c4) {
            ctx->pc = 0x30B0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b0a0;
        }
    }
    ctx->pc = 0x30B0CCu;
label_30b0cc:
    // 0x30b0cc: 0x12600037  beqz        $s3, . + 4 + (0x37 << 2)
    ctx->pc = 0x30B0CCu;
    {
        const bool branch_taken_0x30b0cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B0CCu;
        // 0x30b0d0: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b0cc) {
            ctx->pc = 0x30B1ACu;
            goto label_30b1ac;
        }
    }
    ctx->pc = 0x30B0D4u;
    // 0x30b0d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30b0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30b0d8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30b0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30b0dc: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30B0DCu;
    SET_GPR_U32(ctx, 31, 0x30B0E4u);
    ctx->pc = 0x30B0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B0DCu;
    // 0x30b0e0: 0x27a5001c  addiu       $a1, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30B0DCu, 0x30B0E4u)) {
        return;
    }
    ctx->pc = 0x30B0E4u;
label_30b0e4:
    // 0x30b0e4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30B0E4u;
    {
        const bool branch_taken_0x30b0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B0E4u;
        // 0x30b0e8: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b0e4) {
            ctx->pc = 0x30B130u;
            goto label_30b130;
        }
    }
    ctx->pc = 0x30B0ECu;
    // 0x30b0ec: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30b0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30b0f0: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30b0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30b0f4: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x30B0F4u;
    {
        const bool branch_taken_0x30b0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B0F4u;
        // 0x30b0f8: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b0f4) {
            ctx->pc = 0x30B130u;
            goto label_30b130;
        }
    }
    ctx->pc = 0x30B0FCu;
    // 0x30b0fc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30B0FCu;
    {
        const bool branch_taken_0x30b0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B0FCu;
        // 0x30b100: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b0fc) {
            ctx->pc = 0x30B130u;
            goto label_30b130;
        }
    }
    ctx->pc = 0x30B104u;
    // 0x30b104: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30b104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30b108: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30B108u;
    SET_GPR_U32(ctx, 31, 0x30B110u);
    ctx->pc = 0x30B10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B108u;
    // 0x30b10c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30B108u, 0x30B110u)) {
        return;
    }
    ctx->pc = 0x30B110u;
label_30b110:
    // 0x30b110: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30B110u;
    {
        const bool branch_taken_0x30b110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B110u;
        // 0x30b114: 0x26500044  addiu       $s0, $s2, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b110) {
            ctx->pc = 0x30B138u;
            goto label_30b138;
        }
    }
    ctx->pc = 0x30B118u;
    // 0x30b118: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x30B118u;
    {
        const bool branch_taken_0x30b118 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b118) {
            ctx->pc = 0x30B11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B118u;
            // 0x30b11c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B13Cu;
            goto label_30b13c;
        }
    }
    ctx->pc = 0x30B120u;
    // 0x30b120: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30b120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30b124: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30b124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30b128: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30b128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30b12c: 0x0  nop
    ctx->pc = 0x30b12cu;
    // NOP
label_30b130:
    // 0x30b130: 0x26500044  addiu       $s0, $s2, 0x44
    ctx->pc = 0x30b130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x30b134: 0x0  nop
    ctx->pc = 0x30b134u;
    // NOP
label_30b138:
    // 0x30b138: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30b138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30b13c:
    // 0x30b13c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30b13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30b140: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30B140u;
    SET_GPR_U32(ctx, 31, 0x30B148u);
    ctx->pc = 0x30B144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B140u;
    // 0x30b144: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30B140u, 0x30B148u)) {
        return;
    }
    ctx->pc = 0x30B148u;
label_30b148:
    // 0x30b148: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x30B148u;
    {
        const bool branch_taken_0x30b148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B148u;
        // 0x30b14c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b148) {
            ctx->pc = 0x30B1A0u;
            goto label_30b1a0;
        }
    }
    ctx->pc = 0x30B150u;
    // 0x30b150: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x30b150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b154: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30b154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30b158: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x30B158u;
    {
        const bool branch_taken_0x30b158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B158u;
        // 0x30b15c: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b158) {
            ctx->pc = 0x30B1A0u;
            goto label_30b1a0;
        }
    }
    ctx->pc = 0x30B160u;
    // 0x30b160: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30B160u;
    {
        const bool branch_taken_0x30b160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B160u;
        // 0x30b164: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b160) {
            ctx->pc = 0x30B1A0u;
            goto label_30b1a0;
        }
    }
    ctx->pc = 0x30B168u;
    // 0x30b168: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30b168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30b16c: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30B16Cu;
    SET_GPR_U32(ctx, 31, 0x30B174u);
    ctx->pc = 0x30B170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B16Cu;
    // 0x30b170: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30B16Cu, 0x30B174u)) {
        return;
    }
    ctx->pc = 0x30B174u;
label_30b174:
    // 0x30b174: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30B174u;
    {
        const bool branch_taken_0x30b174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B174u;
        // 0x30b178: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b174) {
            ctx->pc = 0x30B1A0u;
            goto label_30b1a0;
        }
    }
    ctx->pc = 0x30B17Cu;
    // 0x30b17c: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x30b17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x30b180: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x30b180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30b184: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x30b184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x30b188: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x30b188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b18c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30B18Cu;
    {
        const bool branch_taken_0x30b18c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B18Cu;
        // 0x30b190: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b18c) {
            ctx->pc = 0x30B1A0u;
            goto label_30b1a0;
        }
    }
    ctx->pc = 0x30B194u;
    // 0x30b194: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30b194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30b198: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x30b198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30b19c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30b19cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_30b1a0:
    // 0x30b1a0: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x30b1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x30b1a4: 0xc0c2706  jal         func_309C18
    ctx->pc = 0x30B1A4u;
    SET_GPR_U32(ctx, 31, 0x30B1ACu);
    ctx->pc = 0x30B1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B1A4u;
    // 0x30b1a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309C18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309C18u, 0x30B1A4u, 0x30B1ACu)) {
        return;
    }
    ctx->pc = 0x30B1ACu;
label_30b1ac:
    // 0x30b1ac: 0xc0b5940  jal         func_2D6500
    ctx->pc = 0x30B1ACu;
    SET_GPR_U32(ctx, 31, 0x30B1B4u);
    ctx->pc = 0x30B1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B1ACu;
    // 0x30b1b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6500u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6500u, 0x30B1ACu, 0x30B1B4u)) {
        return;
    }
    ctx->pc = 0x30B1B4u;
label_30b1b4:
    // 0x30b1b4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30B1B4u;
    {
        const bool branch_taken_0x30b1b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B1B4u;
        // 0x30b1b8: 0xae920000  sw          $s2, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b1b4) {
            ctx->pc = 0x30B1C8u;
            goto label_30b1c8;
        }
    }
    ctx->pc = 0x30B1BCu;
    // 0x30b1bc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30b1c0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30b1c4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30b1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_30b1c8:
    // 0x30b1c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30b1cc:
    // 0x30b1cc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x30b1ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30b1d0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x30b1d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30b1d4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x30b1d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30b1d8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x30b1d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30b1dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30b1dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30b1e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30b1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30b1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x30B1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B1E4u;
        // 0x30b1e8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B1ECu;
    // 0x30b1ec: 0x0  nop
    ctx->pc = 0x30b1ecu;
    // NOP
    ctx->pc = 0x30b1f0u;
}
