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

// Function: sub_0023DFE8
// Address: 0x23dfe8 - 0x23f668
void sub_0023DFE8_0x23dfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DFE8_0x23dfe8");
#endif

    switch (ctx->pc) {
        case 0x23e094u: goto label_23e094;
        case 0x23e0b4u: goto label_23e0b4;
        case 0x23e128u: goto label_23e128;
        case 0x23e140u: goto label_23e140;
        case 0x23e18cu: goto label_23e18c;
        case 0x23e1b0u: goto label_23e1b0;
        case 0x23e1c8u: goto label_23e1c8;
        case 0x23e1e4u: goto label_23e1e4;
        case 0x23e228u: goto label_23e228;
        case 0x23e248u: goto label_23e248;
        case 0x23e250u: goto label_23e250;
        case 0x23e260u: goto label_23e260;
        case 0x23e27cu: goto label_23e27c;
        case 0x23e398u: goto label_23e398;
        case 0x23e3c8u: goto label_23e3c8;
        case 0x23e498u: goto label_23e498;
        case 0x23e4e8u: goto label_23e4e8;
        case 0x23e528u: goto label_23e528;
        case 0x23e550u: goto label_23e550;
        case 0x23e5a0u: goto label_23e5a0;
        case 0x23e5f0u: goto label_23e5f0;
        case 0x23e640u: goto label_23e640;
        case 0x23e680u: goto label_23e680;
        case 0x23e6a8u: goto label_23e6a8;
        case 0x23e720u: goto label_23e720;
        case 0x23e770u: goto label_23e770;
        case 0x23e7b8u: goto label_23e7b8;
        case 0x23e7e8u: goto label_23e7e8;
        case 0x23e8e8u: goto label_23e8e8;
        case 0x23e938u: goto label_23e938;
        case 0x23e998u: goto label_23e998;
        case 0x23e9c0u: goto label_23e9c0;
        case 0x23ea40u: goto label_23ea40;
        case 0x23ea90u: goto label_23ea90;
        case 0x23ead8u: goto label_23ead8;
        case 0x23eb08u: goto label_23eb08;
        case 0x23eb60u: goto label_23eb60;
        case 0x23ec48u: goto label_23ec48;
        case 0x23ec98u: goto label_23ec98;
        case 0x23ecd8u: goto label_23ecd8;
        case 0x23ed00u: goto label_23ed00;
        case 0x23ee08u: goto label_23ee08;
        case 0x23ee58u: goto label_23ee58;
        case 0x23ee98u: goto label_23ee98;
        case 0x23eec0u: goto label_23eec0;
        case 0x23eee8u: goto label_23eee8;
        case 0x23ef38u: goto label_23ef38;
        case 0x23ef88u: goto label_23ef88;
        case 0x23efc8u: goto label_23efc8;
        case 0x23eff0u: goto label_23eff0;
        case 0x23f040u: goto label_23f040;
        case 0x23f090u: goto label_23f090;
        case 0x23f0d8u: goto label_23f0d8;
        case 0x23f100u: goto label_23f100;
        case 0x23f230u: goto label_23f230;
        case 0x23f280u: goto label_23f280;
        case 0x23f2d8u: goto label_23f2d8;
        case 0x23f300u: goto label_23f300;
        case 0x23f360u: goto label_23f360;
        case 0x23f3b0u: goto label_23f3b0;
        case 0x23f3f8u: goto label_23f3f8;
        case 0x23f420u: goto label_23f420;
        case 0x23f488u: goto label_23f488;
        case 0x23f5a8u: goto label_23f5a8;
        case 0x23f5f8u: goto label_23f5f8;
        case 0x23f630u: goto label_23f630;
        default: break;
    }

    ctx->pc = 0x23dfe8u;

    // 0x23dfe8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x23dfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x23dfec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23dff0: 0x8c63416c  lw          $v1, 0x416C($v1)
    ctx->pc = 0x23dff0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x23dff4: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x23dff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x23dff8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x23dff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x23dffc: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x23dffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x23e000: 0x83b021  addu        $s6, $a0, $v1
    ctx->pc = 0x23e000u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x23e004: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x23e004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x23e008: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x23e008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x23e00c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x23e00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x23e010: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x23e010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x23e014: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x23e014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x23e018: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x23e018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x23e01c: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x23e01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x23e020: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23e020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x23e024: 0x92c20036  lbu         $v0, 0x36($s6)
    ctx->pc = 0x23e024u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 54)));
    // 0x23e028: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x23e028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x23e02c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x23E02Cu;
    {
        const bool branch_taken_0x23e02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E02Cu;
        // 0x23e030: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e02c) {
            ctx->pc = 0x23E0B4u;
            goto label_23e0b4;
        }
    }
    ctx->pc = 0x23E034u;
    // 0x23e034: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23e034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e038: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23e038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e03c: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x23e03cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x23e040: 0x8ce73f30  lw          $a3, 0x3F30($a3)
    ctx->pc = 0x23e040u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23e044: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23e044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23e048: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x23e048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x23e04c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x23e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x23e050: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x23e050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x23e054: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x23e054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x23e058: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x23e058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x23e05c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x23e05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x23e060: 0x84e3001c  lh          $v1, 0x1C($a3)
    ctx->pc = 0x23e060u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x23e064: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x23e064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x23e068: 0x8d260004  lw          $a2, 0x4($t1)
    ctx->pc = 0x23e068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x23e06c: 0x8d28000c  lw          $t0, 0xC($t1)
    ctx->pc = 0x23e06cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x23e070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23e070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23e074: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x23e074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x23e078: 0x84e2001e  lh          $v0, 0x1E($a3)
    ctx->pc = 0x23e078u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 30)));
    // 0x23e07c: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x23e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x23e080: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x23e080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x23e084: 0xafa8001c  sw          $t0, 0x1C($sp)
    ctx->pc = 0x23e084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 8));
    // 0x23e088: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23e088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x23e08c: 0xc08f028  jal         func_23C0A0
    ctx->pc = 0x23E08Cu;
    SET_GPR_U32(ctx, 31, 0x23E094u);
    ctx->pc = 0x23E090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E08Cu;
    // 0x23e090: 0xafa60014  sw          $a2, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C0A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23C0A0u, 0x23E08Cu, 0x23E094u)) {
        return;
    }
    ctx->pc = 0x23E094u;
label_23e094:
    // 0x23e094: 0x10400567  beqz        $v0, . + 4 + (0x567 << 2)
    ctx->pc = 0x23E094u;
    {
        const bool branch_taken_0x23e094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E094u;
        // 0x23e098: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e094) {
            ctx->pc = 0x23F634u;
            goto label_23f634;
        }
    }
    ctx->pc = 0x23E09Cu;
    // 0x23e09c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x23e09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e0a0: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x23e0a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x23e0a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23e0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23e0a8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23e0a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23e0ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E0ACu;
    {
        const bool branch_taken_0x23e0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0ACu;
        // 0x23e0b0: 0x8f828ec0  lw          $v0, -0x7140($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0ac) {
            ctx->pc = 0x23E0BCu;
            goto label_23e0bc;
        }
    }
    ctx->pc = 0x23E0B4u;
label_23e0b4:
    // 0x23e0b4: 0x1000055f  b           . + 4 + (0x55F << 2)
    ctx->pc = 0x23E0B4u;
    {
        const bool branch_taken_0x23e0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0B4u;
        // 0x23e0b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0b4) {
            ctx->pc = 0x23F634u;
            goto label_23f634;
        }
    }
    ctx->pc = 0x23E0BCu;
label_23e0bc:
    // 0x23e0bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e0c0: 0x90440020  lbu         $a0, 0x20($v0)
    ctx->pc = 0x23e0c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x23e0c4: 0x1083fffb  beq         $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23E0C4u;
    {
        const bool branch_taken_0x23e0c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x23E0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0C4u;
        // 0x23e0c8: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0c4) {
            ctx->pc = 0x23E0B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e0b4;
        }
    }
    ctx->pc = 0x23E0CCu;
    // 0x23e0cc: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x23e0ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23e0d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E0D0u;
    {
        const bool branch_taken_0x23e0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0D0u;
        // 0x23e0d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0d0) {
            ctx->pc = 0x23E0E8u;
            goto label_23e0e8;
        }
    }
    ctx->pc = 0x23E0D8u;
    // 0x23e0d8: 0x1080006a  beqz        $a0, . + 4 + (0x6A << 2)
    ctx->pc = 0x23E0D8u;
    {
        const bool branch_taken_0x23e0d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0D8u;
        // 0x23e0dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0d8) {
            ctx->pc = 0x23E284u;
            goto label_23e284;
        }
    }
    ctx->pc = 0x23E0E0u;
    // 0x23e0e0: 0x10000555  b           . + 4 + (0x555 << 2)
    ctx->pc = 0x23E0E0u;
    {
        const bool branch_taken_0x23e0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0E0u;
        // 0x23e0e4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0e0) {
            ctx->pc = 0x23F638u;
            goto label_23f638;
        }
    }
    ctx->pc = 0x23E0E8u;
label_23e0e8:
    // 0x23e0e8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E0E8u;
    {
        const bool branch_taken_0x23e0e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0E8u;
        // 0x23e0ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0e8) {
            ctx->pc = 0x23E100u;
            goto label_23e100;
        }
    }
    ctx->pc = 0x23E0F0u;
    // 0x23e0f0: 0x10820064  beq         $a0, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x23E0F0u;
    {
        const bool branch_taken_0x23e0f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0F0u;
        // 0x23e0f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0f0) {
            ctx->pc = 0x23E284u;
            goto label_23e284;
        }
    }
    ctx->pc = 0x23E0F8u;
    // 0x23e0f8: 0x1000054f  b           . + 4 + (0x54F << 2)
    ctx->pc = 0x23E0F8u;
    {
        const bool branch_taken_0x23e0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0F8u;
        // 0x23e0fc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0f8) {
            ctx->pc = 0x23F638u;
            goto label_23f638;
        }
    }
    ctx->pc = 0x23E100u;
label_23e100:
    // 0x23e100: 0x8fb10024  lw          $s1, 0x24($sp)
    ctx->pc = 0x23e100u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x23e104: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23e104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23e108: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x23e108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x23e10c: 0x24170040  addiu       $s7, $zero, 0x40
    ctx->pc = 0x23e10cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x23e110: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23e110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e114: 0x222a821  addu        $s5, $s1, $v0
    ctx->pc = 0x23e114u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23e118: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23e118u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e11c: 0x39c00  sll         $s3, $v1, 16
    ctx->pc = 0x23e11cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x23e120: 0xc08ed56  jal         func_23B558
    ctx->pc = 0x23E120u;
    SET_GPR_U32(ctx, 31, 0x23E128u);
    ctx->pc = 0x23E124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E120u;
    // 0x23e124: 0x8fbe001c  lw          $fp, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23B558u, 0x23E120u, 0x23E128u)) {
        return;
    }
    ctx->pc = 0x23E128u;
label_23e128:
    // 0x23e128: 0x2b12023  subu        $a0, $s5, $s1
    ctx->pc = 0x23e128u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x23e12c: 0x10800044  beqz        $a0, . + 4 + (0x44 << 2)
    ctx->pc = 0x23E12Cu;
    {
        const bool branch_taken_0x23e12c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e12c) {
            ctx->pc = 0x23E240u;
            goto label_23e240;
        }
    }
    ctx->pc = 0x23E134u;
    // 0x23e134: 0x3c12006b  lui         $s2, 0x6B
    ctx->pc = 0x23e134u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
    // 0x23e138: 0x26523f38  addiu       $s2, $s2, 0x3F38
    ctx->pc = 0x23e138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16184));
    // 0x23e13c: 0x0  nop
    ctx->pc = 0x23e13cu;
    // NOP
label_23e140:
    // 0x23e140: 0x2e4102b  sltu        $v0, $s7, $a0
    ctx->pc = 0x23e140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x23e144: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x23e144u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e148: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x23e148u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x23e14c: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x23e14cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
    // 0x23e150: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x23e150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x23e154: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23e154u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e158: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E158u;
    {
        const bool branch_taken_0x23e158 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e158) {
            ctx->pc = 0x23E15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E158u;
            // 0x23e15c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E160u;
            goto label_23e160;
        }
    }
    ctx->pc = 0x23E160u;
label_23e160:
    // 0x23e160: 0x38400  sll         $s0, $v1, 16
    ctx->pc = 0x23e160u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x23e164: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23e164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23e168: 0x8c423f40  lw          $v0, 0x3F40($v0)
    ctx->pc = 0x23e168u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3F40u));
    // 0x23e16c: 0x21e8018  mult        $s0, $s0, $fp
    ctx->pc = 0x23e16cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x23e170: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x23e170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x23e174: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23e174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23e178: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23e178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23e17c: 0x214001b  divu        $zero, $s0, $s4
    ctx->pc = 0x23e17cu;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x23e180: 0x8012  mflo        $s0
    ctx->pc = 0x23e180u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x23e184: 0xc091bd0  jal         func_246F40
    ctx->pc = 0x23E184u;
    SET_GPR_U32(ctx, 31, 0x23E18Cu);
    ctx->pc = 0x23E188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E184u;
    // 0x23e188: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246F40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246F40u, 0x23E184u, 0x23E18Cu)) {
        return;
    }
    ctx->pc = 0x23E18Cu;
label_23e18c:
    // 0x23e18c: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x23e18cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x23e190: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23e190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23e194: 0x8c423f40  lw          $v0, 0x3F40($v0)
    ctx->pc = 0x23e194u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3F40u));
    // 0x23e198: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x23e198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e19c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23e19cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e1a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23e1a4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23e1a8: 0xc08a188  jal         func_228620
    ctx->pc = 0x23E1A8u;
    SET_GPR_U32(ctx, 31, 0x23E1B0u);
    ctx->pc = 0x23E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E1A8u;
    // 0x23e1ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228620u, 0x23E1A8u, 0x23E1B0u)) {
        return;
    }
    ctx->pc = 0x23E1B0u;
label_23e1b0:
    // 0x23e1b0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23e1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23e1b4: 0x8c633f40  lw          $v1, 0x3F40($v1)
    ctx->pc = 0x23e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F40u));
    // 0x23e1b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23e1bc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x23e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x23e1c0: 0xc08f0b4  jal         func_23C2D0
    ctx->pc = 0x23E1C0u;
    SET_GPR_U32(ctx, 31, 0x23E1C8u);
    ctx->pc = 0x23E1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E1C0u;
    // 0x23e1c4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C2D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23C2D0u, 0x23E1C0u, 0x23E1C8u)) {
        return;
    }
    ctx->pc = 0x23E1C8u;
label_23e1c8:
    // 0x23e1c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23e1cc: 0x8c423f40  lw          $v0, 0x3F40($v0)
    ctx->pc = 0x23e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3F40u));
    // 0x23e1d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e1d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23e1d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23e1dc: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x23E1DCu;
    SET_GPR_U32(ctx, 31, 0x23E1E4u);
    ctx->pc = 0x23E1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E1DCu;
    // 0x23e1e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x23E1DCu, 0x23E1E4u)) {
        return;
    }
    ctx->pc = 0x23E1E4u;
label_23e1e4:
    // 0x23e1e4: 0x8faa0028  lw          $t2, 0x28($sp)
    ctx->pc = 0x23e1e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23e1e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e1ec: 0x8fab002c  lw          $t3, 0x2C($sp)
    ctx->pc = 0x23e1ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x23e1f0: 0x132c02  srl         $a1, $s3, 16
    ctx->pc = 0x23e1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), 16));
    // 0x23e1f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23e1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e1f8: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x23e1f8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x23e1fc: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x23e1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e200: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x23e200u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x23e204: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23e204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x23e208: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x23e208u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23e20c: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x23e20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x23e210: 0x254afff8  addiu       $t2, $t2, -0x8
    ctx->pc = 0x23e210u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
    // 0x23e214: 0x256bfff8  addiu       $t3, $t3, -0x8
    ctx->pc = 0x23e214u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967288));
    // 0x23e218: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x23e218u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23e21c: 0x103c02  srl         $a3, $s0, 16
    ctx->pc = 0x23e21cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x23e220: 0xc08ee74  jal         func_23B9D0
    ctx->pc = 0x23E220u;
    SET_GPR_U32(ctx, 31, 0x23E228u);
    ctx->pc = 0x23E224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E220u;
    // 0x23e224: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23B9D0u, 0x23E220u, 0x23E228u)) {
        return;
    }
    ctx->pc = 0x23E228u;
label_23e228:
    // 0x23e228: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23e228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23e22c: 0x8c423f40  lw          $v0, 0x3F40($v0)
    ctx->pc = 0x23e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3F40u));
    // 0x23e230: 0x2b12023  subu        $a0, $s5, $s1
    ctx->pc = 0x23e230u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x23e234: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x23e234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x23e238: 0x1480ffc1  bnez        $a0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x23E238u;
    {
        const bool branch_taken_0x23e238 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E238u;
        // 0x23e23c: 0xaf828ed0  sw          $v0, -0x7130($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e238) {
            ctx->pc = 0x23E140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e140;
        }
    }
    ctx->pc = 0x23E240u;
label_23e240:
    // 0x23e240: 0xc08eedc  jal         func_23BB70
    ctx->pc = 0x23E240u;
    SET_GPR_U32(ctx, 31, 0x23E248u);
    ctx->pc = 0x23BB70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23BB70u, 0x23E240u, 0x23E248u)) {
        return;
    }
    ctx->pc = 0x23E248u;
label_23e248:
    // 0x23e248: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x23E248u;
    SET_GPR_U32(ctx, 31, 0x23E250u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x23E248u, 0x23E250u)) {
        return;
    }
    ctx->pc = 0x23E250u;
label_23e250:
    // 0x23e250: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x23e250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x23e254: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23e258: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x23E258u;
    SET_GPR_U32(ctx, 31, 0x23E260u);
    ctx->pc = 0x23E25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E258u;
    // 0x23e25c: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x23E258u, 0x23E260u)) {
        return;
    }
    ctx->pc = 0x23E260u;
label_23e260:
    // 0x23e260: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x23e260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x23e264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e268: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23e26c: 0x146204f1  bne         $v1, $v0, . + 4 + (0x4F1 << 2)
    ctx->pc = 0x23E26Cu;
    {
        const bool branch_taken_0x23e26c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E26Cu;
        // 0x23e270: 0xaec30004  sw          $v1, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e26c) {
            ctx->pc = 0x23F634u;
            goto label_23f634;
        }
    }
    ctx->pc = 0x23E274u;
    // 0x23e274: 0xc08b97e  jal         func_22E5F8
    ctx->pc = 0x23E274u;
    SET_GPR_U32(ctx, 31, 0x23E27Cu);
    ctx->pc = 0x23E278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E274u;
    // 0x23e278: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E5F8u, 0x23E274u, 0x23E27Cu)) {
        return;
    }
    ctx->pc = 0x23E27Cu;
label_23e27c:
    // 0x23e27c: 0x100004ed  b           . + 4 + (0x4ED << 2)
    ctx->pc = 0x23E27Cu;
    {
        const bool branch_taken_0x23e27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E27Cu;
        // 0x23e280: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e27c) {
            ctx->pc = 0x23F634u;
            goto label_23f634;
        }
    }
    ctx->pc = 0x23E284u;
label_23e284:
    // 0x23e284: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x23e284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x23e288: 0x1040ff8a  beqz        $v0, . + 4 + (-0x76 << 2)
    ctx->pc = 0x23E288u;
    {
        const bool branch_taken_0x23e288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E288u;
        // 0x23e28c: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e288) {
            ctx->pc = 0x23E0B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e0b4;
        }
    }
    ctx->pc = 0x23E290u;
    // 0x23e290: 0x8c690004  lw          $t1, 0x4($v1)
    ctx->pc = 0x23e290u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23e294: 0x1120ff87  beqz        $t1, . + 4 + (-0x79 << 2)
    ctx->pc = 0x23E294u;
    {
        const bool branch_taken_0x23e294 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E294u;
        // 0x23e298: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e294) {
            ctx->pc = 0x23E0B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e0b4;
        }
    }
    ctx->pc = 0x23E29Cu;
    // 0x23e29c: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x23e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x23e2a0: 0x8503001c  lh          $v1, 0x1C($t0)
    ctx->pc = 0x23e2a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x23e2a4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x23e2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e2a8: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x23e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x23e2ac: 0x258c3  sra         $t3, $v0, 3
    ctx->pc = 0x23e2acu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 3));
    // 0x23e2b0: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x23e2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23e2b4: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x23e2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x23e2b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e2bc: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x23e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x23e2c0: 0x1652818  mult        $a1, $t3, $a1
    ctx->pc = 0x23e2c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23e2c4: 0x8fb70018  lw          $s7, 0x18($sp)
    ctx->pc = 0x23e2c4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e2c8: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x23e2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x23e2cc: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23e2d0: 0x8503001e  lh          $v1, 0x1E($t0)
    ctx->pc = 0x23e2d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 30)));
    // 0x23e2d4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x23e2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x23e2d8: 0x24c20007  addiu       $v0, $a2, 0x7
    ctx->pc = 0x23e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x23e2dc: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x23e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x23e2e0: 0x250c3  sra         $t2, $v0, 3
    ctx->pc = 0x23e2e0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 3));
    // 0x23e2e4: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x23e2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x23e2e8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x23e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x23e2ec: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x23e2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23e2f0: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x23e2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x23e2f4: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x23e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x23e2f8: 0x38023  negu        $s0, $v1
    ctx->pc = 0x23e2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x23e2fc: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x23e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x23e300: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x23e300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23e304: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23e304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23e308: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x23e308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
    // 0x23e30c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e310: 0x14c70007  bne         $a2, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x23E310u;
    {
        const bool branch_taken_0x23e310 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x23E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E310u;
        // 0x23e314: 0x65b021  addu        $s6, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e310) {
            ctx->pc = 0x23E330u;
            goto label_23e330;
        }
    }
    ctx->pc = 0x23E318u;
    // 0x23e318: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23e318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e31c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x23e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x23e320: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x23e320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x23e324: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x23e324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23e328: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23E328u;
    {
        const bool branch_taken_0x23e328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E328u;
        // 0x23e32c: 0x89a821  addu        $s5, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e328) {
            ctx->pc = 0x23E350u;
            goto label_23e350;
        }
    }
    ctx->pc = 0x23E330u;
label_23e330:
    // 0x23e330: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23e330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e334: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x23e334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x23e338: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x23e338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x23e33c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e340: 0x642818  mult        $a1, $v1, $a0
    ctx->pc = 0x23e340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23e344: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x23e344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23e348: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x23e348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x23e34c: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x23e34cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23e350:
    // 0x23e350: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x23e350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23e354: 0x1621818  mult        $v1, $t3, $v0
    ctx->pc = 0x23e354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23e358: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x23e358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x23e35c: 0x2445ffeb  addiu       $a1, $v0, -0x15
    ctx->pc = 0x23e35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967275));
    // 0x23e360: 0x2ca30018  sltiu       $v1, $a1, 0x18
    ctx->pc = 0x23e360u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x23e364: 0x1060ff53  beqz        $v1, . + 4 + (-0xAD << 2)
    ctx->pc = 0x23E364u;
    {
        const bool branch_taken_0x23e364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E364u;
        // 0x23e368: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e364) {
            ctx->pc = 0x23E0B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e0b4;
        }
    }
    ctx->pc = 0x23E36Cu;
    // 0x23e36c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x23e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23e370: 0x2442b2e0  addiu       $v0, $v0, -0x4D20
    ctx->pc = 0x23e370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947552));
    // 0x23e374: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23e374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e378: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23e378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e37c: 0x800008  jr          $a0
    ctx->pc = 0x23E37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23E0B4u: goto label_23e0b4;
            case 0x23E384u: goto label_23e384;
            case 0x23E514u: goto label_23e514;
            case 0x23E61Cu: goto label_23e61c;
            case 0x23ECC4u: goto label_23ecc4;
            case 0x23EE84u: goto label_23ee84;
            case 0x23EF64u: goto label_23ef64;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E37Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23E384u;
label_23e384:
    // 0x23e384: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23e384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23e388: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23e388u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e38c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23e390: 0x106004a7  beqz        $v1, . + 4 + (0x4A7 << 2)
    ctx->pc = 0x23E390u;
    {
        const bool branch_taken_0x23e390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E390u;
        // 0x23e394: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e390) {
            ctx->pc = 0x23F630u;
            goto label_23f630;
        }
    }
    ctx->pc = 0x23E398u;
label_23e398:
    // 0x23e398: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x23e398u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e39c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x23e39cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e3a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23e3a4: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x23e3a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e3a8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23e3a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e3ac: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x23e3acu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x23e3b0: 0x204f021  addu        $fp, $s0, $a0
    ctx->pc = 0x23e3b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x23e3b4: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x23E3B4u;
    {
        const bool branch_taken_0x23e3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3B4u;
        // 0x23e3b8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3b4) {
            ctx->pc = 0x23E4BCu;
            goto label_23e4bc;
        }
    }
    ctx->pc = 0x23E3BCu;
    // 0x23e3bc: 0x3c14ff00  lui         $s4, 0xFF00
    ctx->pc = 0x23e3bcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65280 << 16));
    // 0x23e3c0: 0x24180080  addiu       $t8, $zero, 0x80
    ctx->pc = 0x23e3c0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23e3c4: 0x3c1300ff  lui         $s3, 0xFF
    ctx->pc = 0x23e3c4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)255 << 16));
label_23e3c8:
    // 0x23e3c8: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x23e3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x23e3cc: 0x3c057f00  lui         $a1, 0x7F00
    ctx->pc = 0x23e3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32512 << 16));
    // 0x23e3d0: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x23e3d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x23e3d4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E3D4u;
    {
        const bool branch_taken_0x23e3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e3d4) {
            ctx->pc = 0x23E3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E3D4u;
            // 0x23e3d8: 0x8d2e0000  lw          $t6, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E3E8u;
            goto label_23e3e8;
        }
    }
    ctx->pc = 0x23E3DCu;
    // 0x23e3dc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x23E3DCu;
    {
        const bool branch_taken_0x23e3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3DCu;
        // 0x23e3e0: 0xad270000  sw          $a3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3dc) {
            ctx->pc = 0x23E484u;
            goto label_23e484;
        }
    }
    ctx->pc = 0x23E3E4u;
    // 0x23e3e4: 0x0  nop
    ctx->pc = 0x23e3e4u;
    // NOP
label_23e3e8:
    // 0x23e3e8: 0xf42824  and         $a1, $a3, $s4
    ctx->pc = 0x23e3e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 20));
    // 0x23e3ec: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x23e3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x23e3f0: 0xf33024  and         $a2, $a3, $s3
    ctx->pc = 0x23e3f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x23e3f4: 0x1d48024  and         $s0, $t6, $s4
    ctx->pc = 0x23e3f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) & GPR_U64(ctx, 20));
    // 0x23e3f8: 0x1d38824  and         $s1, $t6, $s3
    ctx->pc = 0x23e3f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & GPR_U64(ctx, 19));
    // 0x23e3fc: 0x3057823  subu        $t7, $t8, $a1
    ctx->pc = 0x23e3fcu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
    // 0x23e400: 0x31cdff00  andi        $t5, $t6, 0xFF00
    ctx->pc = 0x23e400u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65280);
    // 0x23e404: 0x108602  srl         $s0, $s0, 24
    ctx->pc = 0x23e404u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x23e408: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x23e408u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x23e40c: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x23e40cu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x23e410: 0x30e4ff00  andi        $a0, $a3, 0xFF00
    ctx->pc = 0x23e410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x23e414: 0x20f8018  mult        $s0, $s0, $t7
    ctx->pc = 0x23e414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x23e418: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x23e418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x23e41c: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x23e41cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x23e420: 0xd6a02  srl         $t5, $t5, 8
    ctx->pc = 0x23e420u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 8));
    // 0x23e424: 0x22f8818  mult        $s1, $s1, $t7
    ctx->pc = 0x23e424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x23e428: 0xa51018  mult        $v0, $a1, $a1
    ctx->pc = 0x23e428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23e42c: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x23e42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x23e430: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x23e430u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x23e434: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x23e434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23e438: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x23e438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x23e43c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x23e43cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23e440: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x23e440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x23e444: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23e448: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x23e448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x23e44c: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x23e44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x23e450: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x23e450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
    // 0x23e454: 0x30c67f80  andi        $a2, $a2, 0x7F80
    ctx->pc = 0x23e454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32640);
    // 0x23e458: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x23e458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x23e45c: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x23e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x23e460: 0x63240  sll         $a2, $a2, 9
    ctx->pc = 0x23e460u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x23e464: 0x30847f80  andi        $a0, $a0, 0x7F80
    ctx->pc = 0x23e464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32640);
    // 0x23e468: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23e468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23e46c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x23e46cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23e470: 0x30637f80  andi        $v1, $v1, 0x7F80
    ctx->pc = 0x23e470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32640);
    // 0x23e474: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23e474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23e478: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x23e478u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x23e47c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23e480: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x23e480u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_23e484:
    // 0x23e484: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x23e484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x23e488: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x23e488u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x23e48c: 0x322c821  addu        $t9, $t9, $v0
    ctx->pc = 0x23e48cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x23e490: 0x1b200007  blez        $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x23E490u;
    {
        const bool branch_taken_0x23e490 = (GPR_S64(ctx, 25) <= 0);
        ctx->pc = 0x23E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E490u;
        // 0x23e494: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e490) {
            ctx->pc = 0x23E4B0u;
            goto label_23e4b0;
        }
    }
    ctx->pc = 0x23E498u;
label_23e498:
    // 0x23e498: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x23e498u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x23e49c: 0x0  nop
    ctx->pc = 0x23e49cu;
    // NOP
    // 0x23e4a0: 0x0  nop
    ctx->pc = 0x23e4a0u;
    // NOP
    // 0x23e4a4: 0x0  nop
    ctx->pc = 0x23e4a4u;
    // NOP
    // 0x23e4a8: 0x1f20fffb  bgtz        $t9, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23E4A8u;
    {
        const bool branch_taken_0x23e4a8 = (GPR_S64(ctx, 25) > 0);
        ctx->pc = 0x23E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4A8u;
        // 0x23e4ac: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4a8) {
            ctx->pc = 0x23E498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e498;
        }
    }
    ctx->pc = 0x23E4B0u;
label_23e4b0:
    // 0x23e4b0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23e4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e4b4: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x23E4B4u;
    {
        const bool branch_taken_0x23e4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4B4u;
        // 0x23e4b8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4b4) {
            ctx->pc = 0x23E3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e3c8;
        }
    }
    ctx->pc = 0x23E4BCu;
label_23e4bc:
    // 0x23e4bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23e4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23e4c0: 0x8c633f30  lw          $v1, 0x3F30($v1)
    ctx->pc = 0x23e4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23e4c4: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x23e4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e4c8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23e4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23e4cc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23e4d0: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x23E4D0u;
    {
        const bool branch_taken_0x23e4d0 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x23E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4D0u;
        // 0x23e4d4: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4d0) {
            ctx->pc = 0x23E500u;
            goto label_23e500;
        }
    }
    ctx->pc = 0x23E4D8u;
    // 0x23e4d8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e4dc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23e4e0: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x23e4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23e4e4: 0x0  nop
    ctx->pc = 0x23e4e4u;
    // NOP
label_23e4e8:
    // 0x23e4e8: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x23e4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x23e4ec: 0x0  nop
    ctx->pc = 0x23e4ecu;
    // NOP
    // 0x23e4f0: 0x0  nop
    ctx->pc = 0x23e4f0u;
    // NOP
    // 0x23e4f4: 0x0  nop
    ctx->pc = 0x23e4f4u;
    // NOP
    // 0x23e4f8: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23E4F8u;
    {
        const bool branch_taken_0x23e4f8 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x23E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4F8u;
        // 0x23e4fc: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4f8) {
            ctx->pc = 0x23E4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e4e8;
        }
    }
    ctx->pc = 0x23E500u;
label_23e500:
    // 0x23e500: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x23e500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23e504: 0x1480ffa4  bnez        $a0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x23E504u;
    {
        const bool branch_taken_0x23e504 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E504u;
        // 0x23e508: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e504) {
            ctx->pc = 0x23E398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e398;
        }
    }
    ctx->pc = 0x23E50Cu;
    // 0x23e50c: 0x10000449  b           . + 4 + (0x449 << 2)
    ctx->pc = 0x23E50Cu;
    {
        const bool branch_taken_0x23e50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E50Cu;
        // 0x23e510: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e50c) {
            ctx->pc = 0x23F634u;
            goto label_23f634;
        }
    }
    ctx->pc = 0x23E514u;
label_23e514:
    // 0x23e514: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23e514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23e518: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23e518u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e51c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23e520: 0x10600443  beqz        $v1, . + 4 + (0x443 << 2)
    ctx->pc = 0x23E520u;
    {
        const bool branch_taken_0x23e520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E520u;
        // 0x23e524: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e520) {
            ctx->pc = 0x23F630u;
            goto label_23f630;
        }
    }
    ctx->pc = 0x23E528u;
label_23e528:
    // 0x23e528: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23e528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23e52c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x23e52cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e530: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x23e530u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e534: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x23e534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e538: 0x202f021  addu        $fp, $s0, $v0
    ctx->pc = 0x23e538u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23e53c: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x23e53cu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x23e540: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23e540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e544: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x23E544u;
    {
        const bool branch_taken_0x23e544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E544u;
        // 0x23e548: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e544) {
            ctx->pc = 0x23E5C4u;
            goto label_23e5c4;
        }
    }
    ctx->pc = 0x23E54Cu;
    // 0x23e54c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x23e54cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_23e550:
    // 0x23e550: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x23e550u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23e554: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x23e554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x23e558: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23E558u;
    {
        const bool branch_taken_0x23e558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E558u;
        // 0x23e55c: 0x30a403e0  andi        $a0, $a1, 0x3E0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)992);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e558) {
            ctx->pc = 0x23E588u;
            goto label_23e588;
        }
    }
    ctx->pc = 0x23E560u;
    // 0x23e560: 0x30a37c00  andi        $v1, $a1, 0x7C00
    ctx->pc = 0x23e560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31744);
    // 0x23e564: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x23e564u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x23e568: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x23e568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x23e56c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x23e56cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x23e570: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x23e570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x23e574: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23e574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23e578: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23e578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23e57c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23e57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23e580: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x23e580u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x23e584: 0x0  nop
    ctx->pc = 0x23e584u;
    // NOP
label_23e588:
    // 0x23e588: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x23e588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x23e58c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x23e58cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x23e590: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x23e590u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x23e594: 0x1b200008  blez        $t9, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E594u;
    {
        const bool branch_taken_0x23e594 = (GPR_S64(ctx, 25) <= 0);
        ctx->pc = 0x23E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E594u;
        // 0x23e598: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e594) {
            ctx->pc = 0x23E5B8u;
            goto label_23e5b8;
        }
    }
    ctx->pc = 0x23E59Cu;
    // 0x23e59c: 0x0  nop
    ctx->pc = 0x23e59cu;
    // NOP
label_23e5a0:
    // 0x23e5a0: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x23e5a0u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x23e5a4: 0x0  nop
    ctx->pc = 0x23e5a4u;
    // NOP
    // 0x23e5a8: 0x0  nop
    ctx->pc = 0x23e5a8u;
    // NOP
    // 0x23e5ac: 0x0  nop
    ctx->pc = 0x23e5acu;
    // NOP
    // 0x23e5b0: 0x1f20fffb  bgtz        $t9, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23E5B0u;
    {
        const bool branch_taken_0x23e5b0 = (GPR_S64(ctx, 25) > 0);
        ctx->pc = 0x23E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5B0u;
        // 0x23e5b4: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5b0) {
            ctx->pc = 0x23E5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e5a0;
        }
    }
    ctx->pc = 0x23E5B8u;
label_23e5b8:
    // 0x23e5b8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23e5b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e5bc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x23E5BCu;
    {
        const bool branch_taken_0x23e5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5BCu;
        // 0x23e5c0: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5bc) {
            ctx->pc = 0x23E550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e550;
        }
    }
    ctx->pc = 0x23E5C4u;
label_23e5c4:
    // 0x23e5c4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23e5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23e5c8: 0x8c633f30  lw          $v1, 0x3F30($v1)
    ctx->pc = 0x23e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23e5cc: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x23e5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e5d0: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23e5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23e5d4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23e5d8: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x23E5D8u;
    {
        const bool branch_taken_0x23e5d8 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x23E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5D8u;
        // 0x23e5dc: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5d8) {
            ctx->pc = 0x23E608u;
            goto label_23e608;
        }
    }
    ctx->pc = 0x23E5E0u;
    // 0x23e5e0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23e5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e5e4: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x23e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x23e5e8: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x23e5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23e5ec: 0x0  nop
    ctx->pc = 0x23e5ecu;
    // NOP
label_23e5f0:
    // 0x23e5f0: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x23e5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x23e5f4: 0x0  nop
    ctx->pc = 0x23e5f4u;
    // NOP
    // 0x23e5f8: 0x0  nop
    ctx->pc = 0x23e5f8u;
    // NOP
    // 0x23e5fc: 0x0  nop
    ctx->pc = 0x23e5fcu;
    // NOP
    // 0x23e600: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23E600u;
    {
        const bool branch_taken_0x23e600 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x23E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E600u;
        // 0x23e604: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e600) {
            ctx->pc = 0x23E5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e5f0;
        }
    }
    ctx->pc = 0x23E608u;
label_23e608:
    // 0x23e608: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x23e608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23e60c: 0x1480ffc6  bnez        $a0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x23E60Cu;
    {
        const bool branch_taken_0x23e60c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E60Cu;
        // 0x23e610: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e60c) {
            ctx->pc = 0x23E528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e528;
        }
    }
    ctx->pc = 0x23E614u;
    // 0x23e614: 0x10000407  b           . + 4 + (0x407 << 2)
    ctx->pc = 0x23E614u;
    {
        const bool branch_taken_0x23e614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E614u;
        // 0x23e618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e614) {
            ctx->pc = 0x23F634u;
            goto label_23f634;
        }
    }
    ctx->pc = 0x23E61Cu;
label_23e61c:
    // 0x23e61c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x23e61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e620: 0x90820022  lbu         $v0, 0x22($a0)
    ctx->pc = 0x23e620u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x23e624: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x23e624u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x23e628: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23e628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23e62c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E62Cu;
    {
        const bool branch_taken_0x23e62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E62Cu;
        // 0x23e630: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e62c) {
            ctx->pc = 0x23E640u;
            goto label_23e640;
        }
    }
    ctx->pc = 0x23E634u;
    // 0x23e634: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e638: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x23E638u;
    SET_GPR_U32(ctx, 31, 0x23E640u);
    ctx->pc = 0x23E63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E638u;
    // 0x23e63c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x23E638u, 0x23E640u)) {
        return;
    }
    ctx->pc = 0x23E640u;
label_23e640:
    // 0x23e640: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23e640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e644: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x23e644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23e648: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x23e648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x23e64c: 0x146200c5  bne         $v1, $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x23E64Cu;
    {
        const bool branch_taken_0x23e64c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E64Cu;
        // 0x23e650: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e64c) {
            ctx->pc = 0x23E964u;
            goto label_23e964;
        }
    }
    ctx->pc = 0x23E654u;
    // 0x23e654: 0x90a20023  lbu         $v0, 0x23($a1)
    ctx->pc = 0x23e654u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 35)));
    // 0x23e658: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e65c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23e65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23e660: 0x1443004e  bne         $v0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x23E660u;
    {
        const bool branch_taken_0x23e660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E660u;
        // 0x23e664: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e660) {
            ctx->pc = 0x23E79Cu;
            goto label_23e79c;
        }
    }
    ctx->pc = 0x23E668u;
    // 0x23e668: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x23e668u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x23e66c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23e66cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e670: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23e670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23e674: 0x10600191  beqz        $v1, . + 4 + (0x191 << 2)
    ctx->pc = 0x23E674u;
    {
        const bool branch_taken_0x23e674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E674u;
        // 0x23e678: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e674) {
            ctx->pc = 0x23ECBCu;
            goto label_23ecbc;
        }
    }
    ctx->pc = 0x23E67Cu;
    // 0x23e67c: 0x0  nop
    ctx->pc = 0x23e67cu;
    // NOP
label_23e680:
    // 0x23e680: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23e680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23e684: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x23e684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e688: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x23e688u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e68c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23e68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e690: 0x202f021  addu        $fp, $s0, $v0
    ctx->pc = 0x23e690u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23e694: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x23e694u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x23e698: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23e698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e69c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x23E69Cu;
    {
        const bool branch_taken_0x23e69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E69Cu;
        // 0x23e6a0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e69c) {
            ctx->pc = 0x23E744u;
            goto label_23e744;
        }
    }
    ctx->pc = 0x23E6A4u;
    // 0x23e6a4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x23e6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_23e6a8:
    // 0x23e6a8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23e6a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23e6ac: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x23e6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23e6b0: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x23e6b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x23e6b4: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x23e6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x23e6b8: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x23e6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x23e6bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23e6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23e6c0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x23e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23e6c4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23e6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x23e6c8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23e6cc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x23e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x23e6d0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x23e6d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e6d4: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x23e6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x23e6d8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x23E6D8u;
    {
        const bool branch_taken_0x23e6d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6D8u;
        // 0x23e6dc: 0x304403e0  andi        $a0, $v0, 0x3E0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)992);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e6d8) {
            ctx->pc = 0x23E708u;
            goto label_23e708;
        }
    }
    ctx->pc = 0x23E6E0u;
    // 0x23e6e0: 0x30437c00  andi        $v1, $v0, 0x7C00
    ctx->pc = 0x23e6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x23e6e4: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x23e6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x23e6e8: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x23e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x23e6ec: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x23e6ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x23e6f0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23e6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23e6f4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23e6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23e6f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23e6fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23e6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23e700: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x23e700u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x23e704: 0x0  nop
    ctx->pc = 0x23e704u;
    // NOP
label_23e708:
    // 0x23e708: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x23e708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x23e70c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x23e70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x23e710: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x23e710u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x23e714: 0x1b200008  blez        $t9, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E714u;
    {
        const bool branch_taken_0x23e714 = (GPR_S64(ctx, 25) <= 0);
        ctx->pc = 0x23E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E714u;
        // 0x23e718: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e714) {
            ctx->pc = 0x23E738u;
            goto label_23e738;
        }
    }
    ctx->pc = 0x23E71Cu;
    // 0x23e71c: 0x0  nop
    ctx->pc = 0x23e71cu;
    // NOP
label_23e720:
    // 0x23e720: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x23e720u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x23e724: 0x0  nop
    ctx->pc = 0x23e724u;
    // NOP
    // 0x23e728: 0x0  nop
    ctx->pc = 0x23e728u;
    // NOP
    // 0x23e72c: 0x0  nop
    ctx->pc = 0x23e72cu;
    // NOP
    // 0x23e730: 0x1f20fffb  bgtz        $t9, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23E730u;
    {
        const bool branch_taken_0x23e730 = (GPR_S64(ctx, 25) > 0);
        ctx->pc = 0x23E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E730u;
        // 0x23e734: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e730) {
            ctx->pc = 0x23E720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e720;
        }
    }
    ctx->pc = 0x23E738u;
label_23e738:
    // 0x23e738: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23e738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e73c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x23E73Cu;
    {
        const bool branch_taken_0x23e73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E73Cu;
        // 0x23e740: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e73c) {
            ctx->pc = 0x23E6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e6a8;
        }
    }
    ctx->pc = 0x23E744u;
label_23e744:
    // 0x23e744: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23e744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23e748: 0x8c633f30  lw          $v1, 0x3F30($v1)
    ctx->pc = 0x23e748u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23e74c: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x23e74cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e750: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23e750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23e754: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23e754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23e758: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x23E758u;
    {
        const bool branch_taken_0x23e758 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x23E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E758u;
        // 0x23e75c: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e758) {
            ctx->pc = 0x23E788u;
            goto label_23e788;
        }
    }
    ctx->pc = 0x23E760u;
    // 0x23e760: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23e760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e764: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x23e764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x23e768: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x23e768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23e76c: 0x0  nop
    ctx->pc = 0x23e76cu;
    // NOP
label_23e770:
    // 0x23e770: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x23e770u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x23e774: 0x0  nop
    ctx->pc = 0x23e774u;
    // NOP
    // 0x23e778: 0x0  nop
    ctx->pc = 0x23e778u;
    // NOP
    // 0x23e77c: 0x0  nop
    ctx->pc = 0x23e77cu;
    // NOP
    // 0x23e780: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23E780u;
    {
        const bool branch_taken_0x23e780 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x23E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E780u;
        // 0x23e784: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e780) {
            ctx->pc = 0x23E770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e770;
        }
    }
    ctx->pc = 0x23E788u;
label_23e788:
    // 0x23e788: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x23e788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23e78c: 0x1480ffbc  bnez        $a0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x23E78Cu;
    {
        const bool branch_taken_0x23e78c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E78Cu;
        // 0x23e790: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e78c) {
            ctx->pc = 0x23E680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e680;
        }
    }
    ctx->pc = 0x23E794u;
    // 0x23e794: 0x100003a2  b           . + 4 + (0x3A2 << 2)
    ctx->pc = 0x23E794u;
    {
        const bool branch_taken_0x23e794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E794u;
        // 0x23e798: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e794) {
            ctx->pc = 0x23F620u;
            goto label_23f620;
        }
    }
    ctx->pc = 0x23E79Cu;
label_23e79c:
    // 0x23e79c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x23e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e7a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23e7a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e7a4: 0x8c980008  lw          $t8, 0x8($a0)
    ctx->pc = 0x23e7a4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23e7a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23e7ac: 0x10600143  beqz        $v1, . + 4 + (0x143 << 2)
    ctx->pc = 0x23E7ACu;
    {
        const bool branch_taken_0x23e7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7ACu;
        // 0x23e7b0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e7ac) {
            ctx->pc = 0x23ECBCu;
            goto label_23ecbc;
        }
    }
    ctx->pc = 0x23E7B4u;
    // 0x23e7b4: 0x0  nop
    ctx->pc = 0x23e7b4u;
    // NOP
label_23e7b8:
    // 0x23e7b8: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x23e7b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e7bc: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x23e7bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e7c0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x23e7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23e7c4: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x23e7c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e7c8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23e7c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e7cc: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x23e7ccu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x23e7d0: 0x205f021  addu        $fp, $s0, $a1
    ctx->pc = 0x23e7d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x23e7d4: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x23E7D4u;
    {
        const bool branch_taken_0x23e7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7D4u;
        // 0x23e7d8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e7d4) {
            ctx->pc = 0x23E90Cu;
            goto label_23e90c;
        }
    }
    ctx->pc = 0x23E7DCu;
    // 0x23e7dc: 0x3c14ff00  lui         $s4, 0xFF00
    ctx->pc = 0x23e7dcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65280 << 16));
    // 0x23e7e0: 0x3c1300ff  lui         $s3, 0xFF
    ctx->pc = 0x23e7e0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)255 << 16));
    // 0x23e7e4: 0x0  nop
    ctx->pc = 0x23e7e4u;
    // NOP
label_23e7e8:
    // 0x23e7e8: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x23e7e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x23e7ec: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x23e7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23e7f0: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x23e7f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x23e7f4: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x23e7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x23e7f8: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x23e7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x23e7fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23e7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23e800: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x23e800u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23e804: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23e804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x23e808: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23e808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23e80c: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x23e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x23e810: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x23e810u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e814: 0x3c027f00  lui         $v0, 0x7F00
    ctx->pc = 0x23e814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32512 << 16));
    // 0x23e818: 0x47182b  sltu        $v1, $v0, $a3
    ctx->pc = 0x23e818u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x23e81c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E81Cu;
    {
        const bool branch_taken_0x23e81c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e81c) {
            ctx->pc = 0x23E820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E81Cu;
            // 0x23e820: 0x8d2e0000  lw          $t6, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E830u;
            goto label_23e830;
        }
    }
    ctx->pc = 0x23E824u;
    // 0x23e824: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x23E824u;
    {
        const bool branch_taken_0x23e824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E824u;
        // 0x23e828: 0xad270000  sw          $a3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e824) {
            ctx->pc = 0x23E8D0u;
            goto label_23e8d0;
        }
    }
    ctx->pc = 0x23E82Cu;
    // 0x23e82c: 0x0  nop
    ctx->pc = 0x23e82cu;
    // NOP
label_23e830:
    // 0x23e830: 0xf42824  and         $a1, $a3, $s4
    ctx->pc = 0x23e830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 20));
    // 0x23e834: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x23e834u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x23e838: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x23e838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23e83c: 0x1d48024  and         $s0, $t6, $s4
    ctx->pc = 0x23e83cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) & GPR_U64(ctx, 20));
    // 0x23e840: 0x1d38824  and         $s1, $t6, $s3
    ctx->pc = 0x23e840u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & GPR_U64(ctx, 19));
    // 0x23e844: 0xf33024  and         $a2, $a3, $s3
    ctx->pc = 0x23e844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x23e848: 0x657823  subu        $t7, $v1, $a1
    ctx->pc = 0x23e848u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23e84c: 0x31cdff00  andi        $t5, $t6, 0xFF00
    ctx->pc = 0x23e84cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65280);
    // 0x23e850: 0x108602  srl         $s0, $s0, 24
    ctx->pc = 0x23e850u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x23e854: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x23e854u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x23e858: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x23e858u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x23e85c: 0x30e4ff00  andi        $a0, $a3, 0xFF00
    ctx->pc = 0x23e85cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x23e860: 0x20f8018  mult        $s0, $s0, $t7
    ctx->pc = 0x23e860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x23e864: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x23e864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x23e868: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x23e868u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x23e86c: 0xd6a02  srl         $t5, $t5, 8
    ctx->pc = 0x23e86cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 8));
    // 0x23e870: 0x22f8818  mult        $s1, $s1, $t7
    ctx->pc = 0x23e870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x23e874: 0xa51018  mult        $v0, $a1, $a1
    ctx->pc = 0x23e874u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23e878: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x23e878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x23e87c: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x23e87cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x23e880: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x23e880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23e884: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x23e884u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x23e888: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x23e888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23e88c: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x23e88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x23e890: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x23e890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x23e894: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23e894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23e898: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x23e898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
    // 0x23e89c: 0x30c67f80  andi        $a2, $a2, 0x7F80
    ctx->pc = 0x23e89cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32640);
    // 0x23e8a0: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x23e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x23e8a4: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x23e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x23e8a8: 0x63240  sll         $a2, $a2, 9
    ctx->pc = 0x23e8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x23e8ac: 0x30847f80  andi        $a0, $a0, 0x7F80
    ctx->pc = 0x23e8acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32640);
    // 0x23e8b0: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x23e8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x23e8b4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23e8b8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x23e8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23e8bc: 0x30637f80  andi        $v1, $v1, 0x7F80
    ctx->pc = 0x23e8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32640);
    // 0x23e8c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23e8c4: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x23e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x23e8c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23e8cc: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x23e8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_23e8d0:
    // 0x23e8d0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x23e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x23e8d4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x23e8d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x23e8d8: 0x322c821  addu        $t9, $t9, $v0
    ctx->pc = 0x23e8d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x23e8dc: 0x1b200008  blez        $t9, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E8DCu;
    {
        const bool branch_taken_0x23e8dc = (GPR_S64(ctx, 25) <= 0);
        ctx->pc = 0x23E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8DCu;
        // 0x23e8e0: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8dc) {
            ctx->pc = 0x23E900u;
            goto label_23e900;
        }
    }
    ctx->pc = 0x23E8E4u;
    // 0x23e8e4: 0x0  nop
    ctx->pc = 0x23e8e4u;
    // NOP
label_23e8e8:
    // 0x23e8e8: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x23e8e8u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x23e8ec: 0x0  nop
    ctx->pc = 0x23e8ecu;
    // NOP
    // 0x23e8f0: 0x0  nop
    ctx->pc = 0x23e8f0u;
    // NOP
    // 0x23e8f4: 0x0  nop
    ctx->pc = 0x23e8f4u;
    // NOP
    // 0x23e8f8: 0x1f20fffb  bgtz        $t9, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23E8F8u;
    {
        const bool branch_taken_0x23e8f8 = (GPR_S64(ctx, 25) > 0);
        ctx->pc = 0x23E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8F8u;
        // 0x23e8fc: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8f8) {
            ctx->pc = 0x23E8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e8e8;
        }
    }
    ctx->pc = 0x23E900u;
label_23e900:
    // 0x23e900: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23e900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e904: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x23E904u;
    {
        const bool branch_taken_0x23e904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E904u;
        // 0x23e908: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e904) {
            ctx->pc = 0x23E7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e7e8;
        }
    }
    ctx->pc = 0x23E90Cu;
label_23e90c:
    // 0x23e90c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23e90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23e910: 0x8c633f30  lw          $v1, 0x3F30($v1)
    ctx->pc = 0x23e910u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23e914: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x23e914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e918: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23e918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23e91c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23e920: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x23E920u;
    {
        const bool branch_taken_0x23e920 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x23E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E920u;
        // 0x23e924: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e920) {
            ctx->pc = 0x23E950u;
            goto label_23e950;
        }
    }
    ctx->pc = 0x23E928u;
    // 0x23e928: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23e928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e92c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23e930: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x23e930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23e934: 0x0  nop
    ctx->pc = 0x23e934u;
    // NOP
label_23e938:
    // 0x23e938: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x23e938u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x23e93c: 0x0  nop
    ctx->pc = 0x23e93cu;
    // NOP
    // 0x23e940: 0x0  nop
    ctx->pc = 0x23e940u;
    // NOP
    // 0x23e944: 0x0  nop
    ctx->pc = 0x23e944u;
    // NOP
    // 0x23e948: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23E948u;
    {
        const bool branch_taken_0x23e948 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x23E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E948u;
        // 0x23e94c: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e948) {
            ctx->pc = 0x23E938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e938;
        }
    }
    ctx->pc = 0x23E950u;
label_23e950:
    // 0x23e950: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x23e950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23e954: 0x1480ff98  bnez        $a0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x23E954u;
    {
        const bool branch_taken_0x23e954 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E954u;
        // 0x23e958: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e954) {
            ctx->pc = 0x23E7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e7b8;
        }
    }
    ctx->pc = 0x23E95Cu;
    // 0x23e95c: 0x10000330  b           . + 4 + (0x330 << 2)
    ctx->pc = 0x23E95Cu;
    {
        const bool branch_taken_0x23e95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E95Cu;
        // 0x23e960: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e95c) {
            ctx->pc = 0x23F620u;
            goto label_23f620;
        }
    }
    ctx->pc = 0x23E964u;
label_23e964:
    // 0x23e964: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x23e964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
    // 0x23e968: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e96c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23e96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23e970: 0x14430052  bne         $v0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x23E970u;
    {
        const bool branch_taken_0x23e970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E970u;
        // 0x23e974: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e970) {
            ctx->pc = 0x23EABCu;
            goto label_23eabc;
        }
    }
    ctx->pc = 0x23E978u;
    // 0x23e978: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23e978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23e97c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x23e97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e980: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23e980u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e984: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x23e984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23e988: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23e988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23e98c: 0x106000cb  beqz        $v1, . + 4 + (0xCB << 2)
    ctx->pc = 0x23E98Cu;
    {
        const bool branch_taken_0x23e98c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E98Cu;
        // 0x23e990: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e98c) {
            ctx->pc = 0x23ECBCu;
            goto label_23ecbc;
        }
    }
    ctx->pc = 0x23E994u;
    // 0x23e994: 0x0  nop
    ctx->pc = 0x23e994u;
    // NOP
label_23e998:
    // 0x23e998: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x23e998u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e99c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x23e99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e9a0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x23e9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23e9a4: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x23e9a4u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x23e9a8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23e9a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e9ac: 0x8fab0020  lw          $t3, 0x20($sp)
    ctx->pc = 0x23e9acu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e9b0: 0x205f021  addu        $fp, $s0, $a1
    ctx->pc = 0x23e9b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x23e9b4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x23E9B4u;
    {
        const bool branch_taken_0x23e9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9B4u;
        // 0x23e9b8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9b4) {
            ctx->pc = 0x23EA64u;
            goto label_23ea64;
        }
    }
    ctx->pc = 0x23E9BCu;
    // 0x23e9bc: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x23e9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_23e9c0:
    // 0x23e9c0: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x23e9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x23e9c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E9C4u;
    {
        const bool branch_taken_0x23e9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9C4u;
        // 0x23e9c8: 0xb1042  srl         $v0, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9c4) {
            ctx->pc = 0x23E9E0u;
            goto label_23e9e0;
        }
    }
    ctx->pc = 0x23E9CCu;
    // 0x23e9cc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x23e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x23e9d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23e9d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e9d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23E9D4u;
    {
        const bool branch_taken_0x23e9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9D4u;
        // 0x23e9d8: 0x3063000f  andi        $v1, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9d4) {
            ctx->pc = 0x23E9F0u;
            goto label_23e9f0;
        }
    }
    ctx->pc = 0x23E9DCu;
    // 0x23e9dc: 0x0  nop
    ctx->pc = 0x23e9dcu;
    // NOP
label_23e9e0:
    // 0x23e9e0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x23e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x23e9e4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23e9e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e9e8: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x23e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x23e9ec: 0x0  nop
    ctx->pc = 0x23e9ecu;
    // NOP
label_23e9f0:
    // 0x23e9f0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23e9f4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23e9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23e9f8: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x23e9f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e9fc: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x23e9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x23ea00: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23EA00u;
    {
        const bool branch_taken_0x23ea00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA00u;
        // 0x23ea04: 0x30a403e0  andi        $a0, $a1, 0x3E0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)992);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea00) {
            ctx->pc = 0x23EA2Cu;
            goto label_23ea2c;
        }
    }
    ctx->pc = 0x23EA08u;
    // 0x23ea08: 0x30a37c00  andi        $v1, $a1, 0x7C00
    ctx->pc = 0x23ea08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31744);
    // 0x23ea0c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x23ea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x23ea10: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x23ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x23ea14: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x23ea14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x23ea18: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x23ea18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x23ea1c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23ea1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23ea20: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23ea24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23ea24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23ea28: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x23ea28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_23ea2c:
    // 0x23ea2c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x23ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x23ea30: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x23ea30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x23ea34: 0x322c821  addu        $t9, $t9, $v0
    ctx->pc = 0x23ea34u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x23ea38: 0x1b200007  blez        $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x23EA38u;
    {
        const bool branch_taken_0x23ea38 = (GPR_S64(ctx, 25) <= 0);
        ctx->pc = 0x23EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA38u;
        // 0x23ea3c: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea38) {
            ctx->pc = 0x23EA58u;
            goto label_23ea58;
        }
    }
    ctx->pc = 0x23EA40u;
label_23ea40:
    // 0x23ea40: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x23ea40u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x23ea44: 0x0  nop
    ctx->pc = 0x23ea44u;
    // NOP
    // 0x23ea48: 0x0  nop
    ctx->pc = 0x23ea48u;
    // NOP
    // 0x23ea4c: 0x0  nop
    ctx->pc = 0x23ea4cu;
    // NOP
    // 0x23ea50: 0x1f20fffb  bgtz        $t9, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23EA50u;
    {
        const bool branch_taken_0x23ea50 = (GPR_S64(ctx, 25) > 0);
        ctx->pc = 0x23EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA50u;
        // 0x23ea54: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea50) {
            ctx->pc = 0x23EA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ea40;
        }
    }
    ctx->pc = 0x23EA58u;
label_23ea58:
    // 0x23ea58: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23ea58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ea5c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x23EA5Cu;
    {
        const bool branch_taken_0x23ea5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA5Cu;
        // 0x23ea60: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea5c) {
            ctx->pc = 0x23E9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e9c0;
        }
    }
    ctx->pc = 0x23EA64u;
label_23ea64:
    // 0x23ea64: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23ea68: 0x8c633f30  lw          $v1, 0x3F30($v1)
    ctx->pc = 0x23ea68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23ea6c: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x23ea6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ea70: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23ea74: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23ea78: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x23EA78u;
    {
        const bool branch_taken_0x23ea78 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x23EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA78u;
        // 0x23ea7c: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea78) {
            ctx->pc = 0x23EAA8u;
            goto label_23eaa8;
        }
    }
    ctx->pc = 0x23EA80u;
    // 0x23ea80: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ea84: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23ea88: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x23ea88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23ea8c: 0x0  nop
    ctx->pc = 0x23ea8cu;
    // NOP
label_23ea90:
    // 0x23ea90: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x23ea90u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x23ea94: 0x0  nop
    ctx->pc = 0x23ea94u;
    // NOP
    // 0x23ea98: 0x0  nop
    ctx->pc = 0x23ea98u;
    // NOP
    // 0x23ea9c: 0x0  nop
    ctx->pc = 0x23ea9cu;
    // NOP
    // 0x23eaa0: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23EAA0u;
    {
        const bool branch_taken_0x23eaa0 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x23EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAA0u;
        // 0x23eaa4: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eaa0) {
            ctx->pc = 0x23EA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ea90;
        }
    }
    ctx->pc = 0x23EAA8u;
label_23eaa8:
    // 0x23eaa8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x23eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23eaac: 0x1480ffba  bnez        $a0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x23EAACu;
    {
        const bool branch_taken_0x23eaac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAACu;
        // 0x23eab0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eaac) {
            ctx->pc = 0x23E998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e998;
        }
    }
    ctx->pc = 0x23EAB4u;
    // 0x23eab4: 0x100002da  b           . + 4 + (0x2DA << 2)
    ctx->pc = 0x23EAB4u;
    {
        const bool branch_taken_0x23eab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAB4u;
        // 0x23eab8: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eab4) {
            ctx->pc = 0x23F620u;
            goto label_23f620;
        }
    }
    ctx->pc = 0x23EABCu;
label_23eabc:
    // 0x23eabc: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23eac0: 0x8c780008  lw          $t8, 0x8($v1)
    ctx->pc = 0x23eac0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x23eac4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23eac4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eac8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23eacc: 0x1060007b  beqz        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x23EACCu;
    {
        const bool branch_taken_0x23eacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EACCu;
        // 0x23ead0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eacc) {
            ctx->pc = 0x23ECBCu;
            goto label_23ecbc;
        }
    }
    ctx->pc = 0x23EAD4u;
    // 0x23ead4: 0x0  nop
    ctx->pc = 0x23ead4u;
    // NOP
label_23ead8:
    // 0x23ead8: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x23ead8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23eadc: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x23eadcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eae0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23eae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23eae4: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x23eae4u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x23eae8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23eae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eaec: 0x8fab0020  lw          $t3, 0x20($sp)
    ctx->pc = 0x23eaecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23eaf0: 0x204f021  addu        $fp, $s0, $a0
    ctx->pc = 0x23eaf0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x23eaf4: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x23EAF4u;
    {
        const bool branch_taken_0x23eaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAF4u;
        // 0x23eaf8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eaf4) {
            ctx->pc = 0x23EC6Cu;
            goto label_23ec6c;
        }
    }
    ctx->pc = 0x23EAFCu;
    // 0x23eafc: 0x3c14ff00  lui         $s4, 0xFF00
    ctx->pc = 0x23eafcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65280 << 16));
    // 0x23eb00: 0x3c1300ff  lui         $s3, 0xFF
    ctx->pc = 0x23eb00u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)255 << 16));
    // 0x23eb04: 0x0  nop
    ctx->pc = 0x23eb04u;
    // NOP
label_23eb08:
    // 0x23eb08: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x23eb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x23eb0c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x23EB0Cu;
    {
        const bool branch_taken_0x23eb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB0Cu;
        // 0x23eb10: 0xb1042  srl         $v0, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb0c) {
            ctx->pc = 0x23EB68u;
            goto label_23eb68;
        }
    }
    ctx->pc = 0x23EB14u;
    // 0x23eb14: 0x3c057f00  lui         $a1, 0x7F00
    ctx->pc = 0x23eb14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32512 << 16));
    // 0x23eb18: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x23eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x23eb1c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23eb1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23eb20: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x23eb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x23eb24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23eb28: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x23eb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x23eb2c: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x23eb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23eb30: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x23eb30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x23eb34: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23EB34u;
    {
        const bool branch_taken_0x23eb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB34u;
        // 0x23eb38: 0xf42824  and         $a1, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb34) {
            ctx->pc = 0x23EB60u;
            goto label_23eb60;
        }
    }
    ctx->pc = 0x23EB3Cu;
    // 0x23eb3c: 0x8d2e0000  lw          $t6, 0x0($t1)
    ctx->pc = 0x23eb3cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x23eb40: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x23eb40u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x23eb44: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x23eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23eb48: 0x1d48024  and         $s0, $t6, $s4
    ctx->pc = 0x23eb48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) & GPR_U64(ctx, 20));
    // 0x23eb4c: 0x1d38824  and         $s1, $t6, $s3
    ctx->pc = 0x23eb4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & GPR_U64(ctx, 19));
    // 0x23eb50: 0xf33024  and         $a2, $a3, $s3
    ctx->pc = 0x23eb50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x23eb54: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x23EB54u;
    {
        const bool branch_taken_0x23eb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB54u;
        // 0x23eb58: 0x457823  subu        $t7, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb54) {
            ctx->pc = 0x23EBB0u;
            goto label_23ebb0;
        }
    }
    ctx->pc = 0x23EB5Cu;
    // 0x23eb5c: 0x0  nop
    ctx->pc = 0x23eb5cu;
    // NOP
label_23eb60:
    // 0x23eb60: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x23EB60u;
    {
        const bool branch_taken_0x23eb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB60u;
        // 0x23eb64: 0xad270000  sw          $a3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb60) {
            ctx->pc = 0x23EC34u;
            goto label_23ec34;
        }
    }
    ctx->pc = 0x23EB68u;
label_23eb68:
    // 0x23eb68: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x23eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x23eb6c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23eb6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23eb70: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x23eb70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x23eb74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23eb78: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x23eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x23eb7c: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x23eb7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23eb80: 0x3c037f00  lui         $v1, 0x7F00
    ctx->pc = 0x23eb80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32512 << 16));
    // 0x23eb84: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x23eb84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x23eb88: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x23EB88u;
    {
        const bool branch_taken_0x23eb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB88u;
        // 0x23eb8c: 0xf42824  and         $a1, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb88) {
            ctx->pc = 0x23EB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23eb60;
        }
    }
    ctx->pc = 0x23EB90u;
    // 0x23eb90: 0x8d2e0000  lw          $t6, 0x0($t1)
    ctx->pc = 0x23eb90u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x23eb94: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x23eb94u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x23eb98: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x23eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23eb9c: 0x857823  subu        $t7, $a0, $a1
    ctx->pc = 0x23eb9cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x23eba0: 0x1d48024  and         $s0, $t6, $s4
    ctx->pc = 0x23eba0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) & GPR_U64(ctx, 20));
    // 0x23eba4: 0x1d38824  and         $s1, $t6, $s3
    ctx->pc = 0x23eba4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) & GPR_U64(ctx, 19));
    // 0x23eba8: 0xf33024  and         $a2, $a3, $s3
    ctx->pc = 0x23eba8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x23ebac: 0x0  nop
    ctx->pc = 0x23ebacu;
    // NOP
label_23ebb0:
    // 0x23ebb0: 0x31cdff00  andi        $t5, $t6, 0xFF00
    ctx->pc = 0x23ebb0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65280);
    // 0x23ebb4: 0x108602  srl         $s0, $s0, 24
    ctx->pc = 0x23ebb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x23ebb8: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x23ebb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x23ebbc: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x23ebbcu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x23ebc0: 0x30e4ff00  andi        $a0, $a3, 0xFF00
    ctx->pc = 0x23ebc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x23ebc4: 0x20f8018  mult        $s0, $s0, $t7
    ctx->pc = 0x23ebc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x23ebc8: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x23ebc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x23ebcc: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x23ebccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x23ebd0: 0xd6a02  srl         $t5, $t5, 8
    ctx->pc = 0x23ebd0u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 8));
    // 0x23ebd4: 0x22f8818  mult        $s1, $s1, $t7
    ctx->pc = 0x23ebd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x23ebd8: 0xa51018  mult        $v0, $a1, $a1
    ctx->pc = 0x23ebd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23ebdc: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x23ebdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x23ebe0: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x23ebe0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x23ebe4: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x23ebe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23ebe8: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x23ebe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x23ebec: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x23ebecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23ebf0: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x23ebf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x23ebf4: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x23ebf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x23ebf8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23ebfc: 0x30427f80  andi        $v0, $v0, 0x7F80
    ctx->pc = 0x23ebfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32640);
    // 0x23ec00: 0x30c67f80  andi        $a2, $a2, 0x7F80
    ctx->pc = 0x23ec00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32640);
    // 0x23ec04: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x23ec04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x23ec08: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x23ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
    // 0x23ec0c: 0x63240  sll         $a2, $a2, 9
    ctx->pc = 0x23ec0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x23ec10: 0x30847f80  andi        $a0, $a0, 0x7F80
    ctx->pc = 0x23ec10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32640);
    // 0x23ec14: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x23ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x23ec18: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23ec1c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x23ec1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23ec20: 0x30637f80  andi        $v1, $v1, 0x7F80
    ctx->pc = 0x23ec20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32640);
    // 0x23ec24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23ec28: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x23ec28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x23ec2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23ec30: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x23ec30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_23ec34:
    // 0x23ec34: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x23ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x23ec38: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x23ec38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x23ec3c: 0x322c821  addu        $t9, $t9, $v0
    ctx->pc = 0x23ec3cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x23ec40: 0x1b200007  blez        $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x23EC40u;
    {
        const bool branch_taken_0x23ec40 = (GPR_S64(ctx, 25) <= 0);
        ctx->pc = 0x23EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC40u;
        // 0x23ec44: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec40) {
            ctx->pc = 0x23EC60u;
            goto label_23ec60;
        }
    }
    ctx->pc = 0x23EC48u;
label_23ec48:
    // 0x23ec48: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x23ec48u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x23ec4c: 0x0  nop
    ctx->pc = 0x23ec4cu;
    // NOP
    // 0x23ec50: 0x0  nop
    ctx->pc = 0x23ec50u;
    // NOP
    // 0x23ec54: 0x0  nop
    ctx->pc = 0x23ec54u;
    // NOP
    // 0x23ec58: 0x1f20fffb  bgtz        $t9, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23EC58u;
    {
        const bool branch_taken_0x23ec58 = (GPR_S64(ctx, 25) > 0);
        ctx->pc = 0x23EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC58u;
        // 0x23ec5c: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec58) {
            ctx->pc = 0x23EC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ec48;
        }
    }
    ctx->pc = 0x23EC60u;
label_23ec60:
    // 0x23ec60: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23ec60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec64: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x23EC64u;
    {
        const bool branch_taken_0x23ec64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC64u;
        // 0x23ec68: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec64) {
            ctx->pc = 0x23EB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23eb08;
        }
    }
    ctx->pc = 0x23EC6Cu;
label_23ec6c:
    // 0x23ec6c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23ec70: 0x8c633f30  lw          $v1, 0x3F30($v1)
    ctx->pc = 0x23ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23ec74: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x23ec74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec78: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23ec78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23ec7c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23ec80: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x23EC80u;
    {
        const bool branch_taken_0x23ec80 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x23EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC80u;
        // 0x23ec84: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec80) {
            ctx->pc = 0x23ECB0u;
            goto label_23ecb0;
        }
    }
    ctx->pc = 0x23EC88u;
    // 0x23ec88: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ec8c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23ec90: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x23ec90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23ec94: 0x0  nop
    ctx->pc = 0x23ec94u;
    // NOP
label_23ec98:
    // 0x23ec98: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x23ec98u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x23ec9c: 0x0  nop
    ctx->pc = 0x23ec9cu;
    // NOP
    // 0x23eca0: 0x0  nop
    ctx->pc = 0x23eca0u;
    // NOP
    // 0x23eca4: 0x0  nop
    ctx->pc = 0x23eca4u;
    // NOP
    // 0x23eca8: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23ECA8u;
    {
        const bool branch_taken_0x23eca8 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x23ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECA8u;
        // 0x23ecac: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eca8) {
            ctx->pc = 0x23EC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ec98;
        }
    }
    ctx->pc = 0x23ECB0u;
label_23ecb0:
    // 0x23ecb0: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x23ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23ecb4: 0x1480ff88  bnez        $a0, . + 4 + (-0x78 << 2)
    ctx->pc = 0x23ECB4u;
    {
        const bool branch_taken_0x23ecb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECB4u;
        // 0x23ecb8: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ecb4) {
            ctx->pc = 0x23EAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ead8;
        }
    }
    ctx->pc = 0x23ECBCu;
label_23ecbc:
    // 0x23ecbc: 0x10000258  b           . + 4 + (0x258 << 2)
    ctx->pc = 0x23ECBCu;
    {
        const bool branch_taken_0x23ecbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECBCu;
        // 0x23ecc0: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ecbc) {
            ctx->pc = 0x23F620u;
            goto label_23f620;
        }
    }
    ctx->pc = 0x23ECC4u;
label_23ecc4:
    // 0x23ecc4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23ecc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23ecc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eccc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23ecd0: 0x10600257  beqz        $v1, . + 4 + (0x257 << 2)
    ctx->pc = 0x23ECD0u;
    {
        const bool branch_taken_0x23ecd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECD0u;
        // 0x23ecd4: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ecd0) {
            ctx->pc = 0x23F630u;
            goto label_23f630;
        }
    }
    ctx->pc = 0x23ECD8u;
label_23ecd8:
    // 0x23ecd8: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x23ecd8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23ecdc: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x23ecdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ece0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23ece0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ece4: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x23ece4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ece8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23ece8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ecec: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x23ececu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x23ecf0: 0x203f021  addu        $fp, $s0, $v1
    ctx->pc = 0x23ecf0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x23ecf4: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x23ECF4u;
    {
        const bool branch_taken_0x23ecf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECF4u;
        // 0x23ecf8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ecf4) {
            ctx->pc = 0x23EE2Cu;
            goto label_23ee2c;
        }
    }
    ctx->pc = 0x23ECFCu;
    // 0x23ecfc: 0x0  nop
    ctx->pc = 0x23ecfcu;
    // NOP
label_23ed00:
    // 0x23ed00: 0x8e980000  lw          $t8, 0x0($s4)
    ctx->pc = 0x23ed00u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23ed04: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x23ed04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x23ed08: 0x3c057f00  lui         $a1, 0x7F00
    ctx->pc = 0x23ed08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32512 << 16));
    // 0x23ed0c: 0x3047824  and         $t7, $t8, $a0
    ctx->pc = 0x23ed0cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x23ed10: 0xaf102b  sltu        $v0, $a1, $t7
    ctx->pc = 0x23ed10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x23ed14: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23ED14u;
    {
        const bool branch_taken_0x23ed14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED14u;
        // 0x23ed18: 0x3c0200f8  lui         $v0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)248 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed14) {
            ctx->pc = 0x23ED48u;
            goto label_23ed48;
        }
    }
    ctx->pc = 0x23ED1Cu;
    // 0x23ed1c: 0x3304f800  andi        $a0, $t8, 0xF800
    ctx->pc = 0x23ed1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)63488);
    // 0x23ed20: 0x3021824  and         $v1, $t8, $v0
    ctx->pc = 0x23ed20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x23ed24: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x23ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x23ed28: 0x31a42  srl         $v1, $v1, 9
    ctx->pc = 0x23ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x23ed2c: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x23ed2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x23ed30: 0x330200f8  andi        $v0, $t8, 0xF8
    ctx->pc = 0x23ed30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)248);
    // 0x23ed34: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23ed34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23ed38: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x23ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x23ed3c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x23ED3Cu;
    {
        const bool branch_taken_0x23ed3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED3Cu;
        // 0x23ed40: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed3c) {
            ctx->pc = 0x23EDECu;
            goto label_23edec;
        }
    }
    ctx->pc = 0x23ED44u;
    // 0x23ed44: 0x0  nop
    ctx->pc = 0x23ed44u;
    // NOP
label_23ed48:
    // 0x23ed48: 0x966c0000  lhu         $t4, 0x0($s3)
    ctx->pc = 0x23ed48u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23ed4c: 0xf7e02  srl         $t7, $t7, 24
    ctx->pc = 0x23ed4cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 24));
    // 0x23ed50: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x23ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23ed54: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x23ed54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x23ed58: 0x318b8000  andi        $t3, $t4, 0x8000
    ctx->pc = 0x23ed58u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32768);
    // 0x23ed5c: 0x6f8823  subu        $s1, $v1, $t7
    ctx->pc = 0x23ed5cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x23ed60: 0x3046824  and         $t5, $t8, $a0
    ctx->pc = 0x23ed60u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x23ed64: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x23ed64u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x23ed68: 0x31907c00  andi        $s0, $t4, 0x7C00
    ctx->pc = 0x23ed68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31744);
    // 0x23ed6c: 0x318e03e0  andi        $t6, $t4, 0x3E0
    ctx->pc = 0x23ed6cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)992);
    // 0x23ed70: 0x3304ff00  andi        $a0, $t8, 0xFF00
    ctx->pc = 0x23ed70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65280);
    // 0x23ed74: 0x1715818  mult        $t3, $t3, $s1
    ctx->pc = 0x23ed74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x23ed78: 0x1ef1818  mult        $v1, $t7, $t7
    ctx->pc = 0x23ed78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23ed7c: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x23ed7cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x23ed80: 0x1081c2  srl         $s0, $s0, 7
    ctx->pc = 0x23ed80u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 7));
    // 0x23ed84: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x23ed84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x23ed88: 0xe7082  srl         $t6, $t6, 2
    ctx->pc = 0x23ed88u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 2));
    // 0x23ed8c: 0x318c001f  andi        $t4, $t4, 0x1F
    ctx->pc = 0x23ed8cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31);
    // 0x23ed90: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x23ed90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x23ed94: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x23ed94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x23ed98: 0x330200ff  andi        $v0, $t8, 0xFF
    ctx->pc = 0x23ed98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
    // 0x23ed9c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x23ed9cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x23eda0: 0x8f2018  mult        $a0, $a0, $t7
    ctx->pc = 0x23eda0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23eda4: 0x1d17018  mult        $t6, $t6, $s1
    ctx->pc = 0x23eda4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x23eda8: 0x256b2000  addiu       $t3, $t3, 0x2000
    ctx->pc = 0x23eda8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8192));
    // 0x23edac: 0x4f1018  mult        $v0, $v0, $t7
    ctx->pc = 0x23edacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23edb0: 0x1916018  mult        $t4, $t4, $s1
    ctx->pc = 0x23edb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x23edb4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x23edb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x23edb8: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x23edb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x23edbc: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x23edbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x23edc0: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x23edc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x23edc4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23edc8: 0x31ad7c00  andi        $t5, $t5, 0x7C00
    ctx->pc = 0x23edc8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)31744);
    // 0x23edcc: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x23edccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x23edd0: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x23edd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x23edd4: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x23edd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x23edd8: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x23edd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x23eddc: 0x30427c00  andi        $v0, $v0, 0x7C00
    ctx->pc = 0x23eddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x23ede0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23ede4: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x23ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x23ede8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23edec:
    // 0x23edec: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x23edecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x23edf0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x23edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x23edf4: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x23edf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x23edf8: 0x322c821  addu        $t9, $t9, $v0
    ctx->pc = 0x23edf8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x23edfc: 0x1b200008  blez        $t9, . + 4 + (0x8 << 2)
    ctx->pc = 0x23EDFCu;
    {
        const bool branch_taken_0x23edfc = (GPR_S64(ctx, 25) <= 0);
        ctx->pc = 0x23EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDFCu;
        // 0x23ee00: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23edfc) {
            ctx->pc = 0x23EE20u;
            goto label_23ee20;
        }
    }
    ctx->pc = 0x23EE04u;
    // 0x23ee04: 0x0  nop
    ctx->pc = 0x23ee04u;
    // NOP
label_23ee08:
    // 0x23ee08: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x23ee08u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x23ee0c: 0x0  nop
    ctx->pc = 0x23ee0cu;
    // NOP
    // 0x23ee10: 0x0  nop
    ctx->pc = 0x23ee10u;
    // NOP
    // 0x23ee14: 0x0  nop
    ctx->pc = 0x23ee14u;
    // NOP
    // 0x23ee18: 0x1f20fffb  bgtz        $t9, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23EE18u;
    {
        const bool branch_taken_0x23ee18 = (GPR_S64(ctx, 25) > 0);
        ctx->pc = 0x23EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE18u;
        // 0x23ee1c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee18) {
            ctx->pc = 0x23EE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ee08;
        }
    }
    ctx->pc = 0x23EE20u;
label_23ee20:
    // 0x23ee20: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23ee20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ee24: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x23EE24u;
    {
        const bool branch_taken_0x23ee24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE24u;
        // 0x23ee28: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee24) {
            ctx->pc = 0x23ED00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ed00;
        }
    }
    ctx->pc = 0x23EE2Cu;
label_23ee2c:
    // 0x23ee2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23ee30: 0x8c633f30  lw          $v1, 0x3F30($v1)
    ctx->pc = 0x23ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23ee34: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x23ee34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ee38: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23ee38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23ee3c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23ee40: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x23EE40u;
    {
        const bool branch_taken_0x23ee40 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x23EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE40u;
        // 0x23ee44: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee40) {
            ctx->pc = 0x23EE70u;
            goto label_23ee70;
        }
    }
    ctx->pc = 0x23EE48u;
    // 0x23ee48: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23ee48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ee4c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23ee50: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x23ee50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23ee54: 0x0  nop
    ctx->pc = 0x23ee54u;
    // NOP
label_23ee58:
    // 0x23ee58: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x23ee58u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x23ee5c: 0x0  nop
    ctx->pc = 0x23ee5cu;
    // NOP
    // 0x23ee60: 0x0  nop
    ctx->pc = 0x23ee60u;
    // NOP
    // 0x23ee64: 0x0  nop
    ctx->pc = 0x23ee64u;
    // NOP
    // 0x23ee68: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23EE68u;
    {
        const bool branch_taken_0x23ee68 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x23EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE68u;
        // 0x23ee6c: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee68) {
            ctx->pc = 0x23EE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ee58;
        }
    }
    ctx->pc = 0x23EE70u;
label_23ee70:
    // 0x23ee70: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x23ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23ee74: 0x1480ff98  bnez        $a0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x23EE74u;
    {
        const bool branch_taken_0x23ee74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE74u;
        // 0x23ee78: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee74) {
            ctx->pc = 0x23ECD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ecd8;
        }
    }
    ctx->pc = 0x23EE7Cu;
    // 0x23ee7c: 0x100001ed  b           . + 4 + (0x1ED << 2)
    ctx->pc = 0x23EE7Cu;
    {
        const bool branch_taken_0x23ee7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE7Cu;
        // 0x23ee80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee7c) {
            ctx->pc = 0x23F634u;
            goto label_23f634;
        }
    }
    ctx->pc = 0x23EE84u;
label_23ee84:
    // 0x23ee84: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23ee88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23ee88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ee8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23ee90: 0x106001e7  beqz        $v1, . + 4 + (0x1E7 << 2)
    ctx->pc = 0x23EE90u;
    {
        const bool branch_taken_0x23ee90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE90u;
        // 0x23ee94: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee90) {
            ctx->pc = 0x23F630u;
            goto label_23f630;
        }
    }
    ctx->pc = 0x23EE98u;
label_23ee98:
    // 0x23ee98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23ee9c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x23ee9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eea0: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x23eea0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23eea4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23eea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eea8: 0x202f021  addu        $fp, $s0, $v0
    ctx->pc = 0x23eea8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23eeac: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x23eeacu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x23eeb0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23eeb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eeb4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23EEB4u;
    {
        const bool branch_taken_0x23eeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEB4u;
        // 0x23eeb8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eeb4) {
            ctx->pc = 0x23EF0Cu;
            goto label_23ef0c;
        }
    }
    ctx->pc = 0x23EEBCu;
    // 0x23eebc: 0x0  nop
    ctx->pc = 0x23eebcu;
    // NOP
label_23eec0:
    // 0x23eec0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x23eec0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23eec4: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x23eec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x23eec8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23EEC8u;
    {
        const bool branch_taken_0x23eec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23eec8) {
            ctx->pc = 0x23EECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EEC8u;
            // 0x23eecc: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EED0u;
            goto label_23eed0;
        }
    }
    ctx->pc = 0x23EED0u;
label_23eed0:
    // 0x23eed0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x23eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x23eed4: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x23eed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x23eed8: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x23eed8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x23eedc: 0x1b200008  blez        $t9, . + 4 + (0x8 << 2)
    ctx->pc = 0x23EEDCu;
    {
        const bool branch_taken_0x23eedc = (GPR_S64(ctx, 25) <= 0);
        ctx->pc = 0x23EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEDCu;
        // 0x23eee0: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eedc) {
            ctx->pc = 0x23EF00u;
            goto label_23ef00;
        }
    }
    ctx->pc = 0x23EEE4u;
    // 0x23eee4: 0x0  nop
    ctx->pc = 0x23eee4u;
    // NOP
label_23eee8:
    // 0x23eee8: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x23eee8u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x23eeec: 0x0  nop
    ctx->pc = 0x23eeecu;
    // NOP
    // 0x23eef0: 0x0  nop
    ctx->pc = 0x23eef0u;
    // NOP
    // 0x23eef4: 0x0  nop
    ctx->pc = 0x23eef4u;
    // NOP
    // 0x23eef8: 0x1f20fffb  bgtz        $t9, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23EEF8u;
    {
        const bool branch_taken_0x23eef8 = (GPR_S64(ctx, 25) > 0);
        ctx->pc = 0x23EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEF8u;
        // 0x23eefc: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eef8) {
            ctx->pc = 0x23EEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23eee8;
        }
    }
    ctx->pc = 0x23EF00u;
label_23ef00:
    // 0x23ef00: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23ef00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ef04: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x23EF04u;
    {
        const bool branch_taken_0x23ef04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF04u;
        // 0x23ef08: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef04) {
            ctx->pc = 0x23EEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23eec0;
        }
    }
    ctx->pc = 0x23EF0Cu;
label_23ef0c:
    // 0x23ef0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23ef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23ef10: 0x8c633f30  lw          $v1, 0x3F30($v1)
    ctx->pc = 0x23ef10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23ef14: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x23ef14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ef18: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23ef18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23ef1c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23ef20: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x23EF20u;
    {
        const bool branch_taken_0x23ef20 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x23EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF20u;
        // 0x23ef24: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef20) {
            ctx->pc = 0x23EF50u;
            goto label_23ef50;
        }
    }
    ctx->pc = 0x23EF28u;
    // 0x23ef28: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23ef28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ef2c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x23ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x23ef30: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x23ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23ef34: 0x0  nop
    ctx->pc = 0x23ef34u;
    // NOP
label_23ef38:
    // 0x23ef38: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x23ef38u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x23ef3c: 0x0  nop
    ctx->pc = 0x23ef3cu;
    // NOP
    // 0x23ef40: 0x0  nop
    ctx->pc = 0x23ef40u;
    // NOP
    // 0x23ef44: 0x0  nop
    ctx->pc = 0x23ef44u;
    // NOP
    // 0x23ef48: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23EF48u;
    {
        const bool branch_taken_0x23ef48 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x23EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF48u;
        // 0x23ef4c: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef48) {
            ctx->pc = 0x23EF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ef38;
        }
    }
    ctx->pc = 0x23EF50u;
label_23ef50:
    // 0x23ef50: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x23ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23ef54: 0x1480ffd0  bnez        $a0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x23EF54u;
    {
        const bool branch_taken_0x23ef54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF54u;
        // 0x23ef58: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef54) {
            ctx->pc = 0x23EE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ee98;
        }
    }
    ctx->pc = 0x23EF5Cu;
    // 0x23ef5c: 0x100001b5  b           . + 4 + (0x1B5 << 2)
    ctx->pc = 0x23EF5Cu;
    {
        const bool branch_taken_0x23ef5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF5Cu;
        // 0x23ef60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef5c) {
            ctx->pc = 0x23F634u;
            goto label_23f634;
        }
    }
    ctx->pc = 0x23EF64u;
label_23ef64:
    // 0x23ef64: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x23ef64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ef68: 0x90820022  lbu         $v0, 0x22($a0)
    ctx->pc = 0x23ef68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x23ef6c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x23ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x23ef70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23ef70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23ef74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23EF74u;
    {
        const bool branch_taken_0x23ef74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF74u;
        // 0x23ef78: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef74) {
            ctx->pc = 0x23EF88u;
            goto label_23ef88;
        }
    }
    ctx->pc = 0x23EF7Cu;
    // 0x23ef7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23ef7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ef80: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x23EF80u;
    SET_GPR_U32(ctx, 31, 0x23EF88u);
    ctx->pc = 0x23EF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF80u;
    // 0x23ef84: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x23EF80u, 0x23EF88u)) {
        return;
    }
    ctx->pc = 0x23EF88u;
label_23ef88:
    // 0x23ef88: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23ef88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ef8c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x23ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23ef90: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x23ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x23ef94: 0x146200c5  bne         $v1, $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x23EF94u;
    {
        const bool branch_taken_0x23ef94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF94u;
        // 0x23ef98: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef94) {
            ctx->pc = 0x23F2ACu;
            goto label_23f2ac;
        }
    }
    ctx->pc = 0x23EF9Cu;
    // 0x23ef9c: 0x90a20023  lbu         $v0, 0x23($a1)
    ctx->pc = 0x23ef9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 35)));
    // 0x23efa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23efa4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23efa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23efa8: 0x14430044  bne         $v0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x23EFA8u;
    {
        const bool branch_taken_0x23efa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFA8u;
        // 0x23efac: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efa8) {
            ctx->pc = 0x23F0BCu;
            goto label_23f0bc;
        }
    }
    ctx->pc = 0x23EFB0u;
    // 0x23efb0: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x23efb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x23efb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23efb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23efb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23efbc: 0x10600197  beqz        $v1, . + 4 + (0x197 << 2)
    ctx->pc = 0x23EFBCu;
    {
        const bool branch_taken_0x23efbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFBCu;
        // 0x23efc0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efbc) {
            ctx->pc = 0x23F61Cu;
            goto label_23f61c;
        }
    }
    ctx->pc = 0x23EFC4u;
    // 0x23efc4: 0x0  nop
    ctx->pc = 0x23efc4u;
    // NOP
label_23efc8:
    // 0x23efc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23efcc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x23efccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23efd0: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x23efd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23efd4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23efd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23efd8: 0x202f021  addu        $fp, $s0, $v0
    ctx->pc = 0x23efd8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23efdc: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x23efdcu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x23efe0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23efe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23efe4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x23EFE4u;
    {
        const bool branch_taken_0x23efe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFE4u;
        // 0x23efe8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efe4) {
            ctx->pc = 0x23F064u;
            goto label_23f064;
        }
    }
    ctx->pc = 0x23EFECu;
    // 0x23efec: 0x0  nop
    ctx->pc = 0x23efecu;
    // NOP
label_23eff0:
    // 0x23eff0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23eff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23eff4: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x23eff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23eff8: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x23eff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x23effc: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x23effcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x23f000: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x23f000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x23f004: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23f004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23f008: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x23f008u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23f00c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23f00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x23f010: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23f010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23f014: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x23f014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x23f018: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x23f018u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f01c: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x23f01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x23f020: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23F020u;
    {
        const bool branch_taken_0x23f020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f020) {
            ctx->pc = 0x23F024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F020u;
            // 0x23f024: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F028u;
            goto label_23f028;
        }
    }
    ctx->pc = 0x23F028u;
label_23f028:
    // 0x23f028: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x23f028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x23f02c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x23f02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x23f030: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x23f030u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x23f034: 0x1b200008  blez        $t9, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F034u;
    {
        const bool branch_taken_0x23f034 = (GPR_S64(ctx, 25) <= 0);
        ctx->pc = 0x23F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F034u;
        // 0x23f038: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f034) {
            ctx->pc = 0x23F058u;
            goto label_23f058;
        }
    }
    ctx->pc = 0x23F03Cu;
    // 0x23f03c: 0x0  nop
    ctx->pc = 0x23f03cu;
    // NOP
label_23f040:
    // 0x23f040: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x23f040u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x23f044: 0x0  nop
    ctx->pc = 0x23f044u;
    // NOP
    // 0x23f048: 0x0  nop
    ctx->pc = 0x23f048u;
    // NOP
    // 0x23f04c: 0x0  nop
    ctx->pc = 0x23f04cu;
    // NOP
    // 0x23f050: 0x1f20fffb  bgtz        $t9, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23F050u;
    {
        const bool branch_taken_0x23f050 = (GPR_S64(ctx, 25) > 0);
        ctx->pc = 0x23F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F050u;
        // 0x23f054: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f050) {
            ctx->pc = 0x23F040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f040;
        }
    }
    ctx->pc = 0x23F058u;
label_23f058:
    // 0x23f058: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23f058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f05c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x23F05Cu;
    {
        const bool branch_taken_0x23f05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F05Cu;
        // 0x23f060: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f05c) {
            ctx->pc = 0x23EFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23eff0;
        }
    }
    ctx->pc = 0x23F064u;
label_23f064:
    // 0x23f064: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23f064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23f068: 0x8c633f30  lw          $v1, 0x3F30($v1)
    ctx->pc = 0x23f068u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23f06c: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x23f06cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f070: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23f070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23f074: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23f074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23f078: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x23F078u;
    {
        const bool branch_taken_0x23f078 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x23F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F078u;
        // 0x23f07c: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f078) {
            ctx->pc = 0x23F0A8u;
            goto label_23f0a8;
        }
    }
    ctx->pc = 0x23F080u;
    // 0x23f080: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23f080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f084: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x23f084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x23f088: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x23f088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23f08c: 0x0  nop
    ctx->pc = 0x23f08cu;
    // NOP
label_23f090:
    // 0x23f090: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x23f090u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x23f094: 0x0  nop
    ctx->pc = 0x23f094u;
    // NOP
    // 0x23f098: 0x0  nop
    ctx->pc = 0x23f098u;
    // NOP
    // 0x23f09c: 0x0  nop
    ctx->pc = 0x23f09cu;
    // NOP
    // 0x23f0a0: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23F0A0u;
    {
        const bool branch_taken_0x23f0a0 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x23F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0A0u;
        // 0x23f0a4: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0a0) {
            ctx->pc = 0x23F090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f090;
        }
    }
    ctx->pc = 0x23F0A8u;
label_23f0a8:
    // 0x23f0a8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x23f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23f0ac: 0x1480ffc6  bnez        $a0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x23F0ACu;
    {
        const bool branch_taken_0x23f0ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0ACu;
        // 0x23f0b0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0ac) {
            ctx->pc = 0x23EFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23efc8;
        }
    }
    ctx->pc = 0x23F0B4u;
    // 0x23f0b4: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x23F0B4u;
    {
        const bool branch_taken_0x23f0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0B4u;
        // 0x23f0b8: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0b4) {
            ctx->pc = 0x23F620u;
            goto label_23f620;
        }
    }
    ctx->pc = 0x23F0BCu;
label_23f0bc:
    // 0x23f0bc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x23f0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f0c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23f0c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0c4: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x23f0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23f0c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23f0cc: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x23f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x23f0d0: 0x10600152  beqz        $v1, . + 4 + (0x152 << 2)
    ctx->pc = 0x23F0D0u;
    {
        const bool branch_taken_0x23f0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0D0u;
        // 0x23f0d4: 0xafa40048  sw          $a0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0d0) {
            ctx->pc = 0x23F61Cu;
            goto label_23f61c;
        }
    }
    ctx->pc = 0x23F0D8u;
label_23f0d8:
    // 0x23f0d8: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x23f0d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23f0dc: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x23f0dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0e0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x23f0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f0e4: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x23f0e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0e8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23f0e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0ec: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x23f0ecu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x23f0f0: 0x205f021  addu        $fp, $s0, $a1
    ctx->pc = 0x23f0f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x23f0f4: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x23F0F4u;
    {
        const bool branch_taken_0x23f0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0F4u;
        // 0x23f0f8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0f4) {
            ctx->pc = 0x23F254u;
            goto label_23f254;
        }
    }
    ctx->pc = 0x23F0FCu;
    // 0x23f0fc: 0x0  nop
    ctx->pc = 0x23f0fcu;
    // NOP
label_23f100:
    // 0x23f100: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x23f100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23f104: 0x3c057f00  lui         $a1, 0x7F00
    ctx->pc = 0x23f104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32512 << 16));
    // 0x23f108: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x23f108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23f10c: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x23f10cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x23f110: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x23f110u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x23f114: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x23f114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x23f118: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23f118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23f11c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x23f11cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23f120: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23f120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x23f124: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23f124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f128: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23f128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23f12c: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x23f12cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x23f130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23f130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23f134: 0x8c580000  lw          $t8, 0x0($v0)
    ctx->pc = 0x23f134u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f138: 0x3047824  and         $t7, $t8, $a0
    ctx->pc = 0x23f138u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x23f13c: 0xaf102b  sltu        $v0, $a1, $t7
    ctx->pc = 0x23f13cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x23f140: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23F140u;
    {
        const bool branch_taken_0x23f140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F140u;
        // 0x23f144: 0x3c0200f8  lui         $v0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)248 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f140) {
            ctx->pc = 0x23F170u;
            goto label_23f170;
        }
    }
    ctx->pc = 0x23F148u;
    // 0x23f148: 0x3304f800  andi        $a0, $t8, 0xF800
    ctx->pc = 0x23f148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)63488);
    // 0x23f14c: 0x3021824  and         $v1, $t8, $v0
    ctx->pc = 0x23f14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x23f150: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x23f150u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x23f154: 0x31a42  srl         $v1, $v1, 9
    ctx->pc = 0x23f154u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x23f158: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x23f158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x23f15c: 0x330200f8  andi        $v0, $t8, 0xF8
    ctx->pc = 0x23f15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)248);
    // 0x23f160: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23f160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23f164: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x23f164u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x23f168: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x23F168u;
    {
        const bool branch_taken_0x23f168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F168u;
        // 0x23f16c: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f168) {
            ctx->pc = 0x23F214u;
            goto label_23f214;
        }
    }
    ctx->pc = 0x23F170u;
label_23f170:
    // 0x23f170: 0x966c0000  lhu         $t4, 0x0($s3)
    ctx->pc = 0x23f170u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23f174: 0xf7e02  srl         $t7, $t7, 24
    ctx->pc = 0x23f174u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 24));
    // 0x23f178: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x23f178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23f17c: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x23f17cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x23f180: 0x318b8000  andi        $t3, $t4, 0x8000
    ctx->pc = 0x23f180u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32768);
    // 0x23f184: 0x6f8823  subu        $s1, $v1, $t7
    ctx->pc = 0x23f184u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x23f188: 0x3046824  and         $t5, $t8, $a0
    ctx->pc = 0x23f188u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x23f18c: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x23f18cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x23f190: 0x31907c00  andi        $s0, $t4, 0x7C00
    ctx->pc = 0x23f190u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31744);
    // 0x23f194: 0x318e03e0  andi        $t6, $t4, 0x3E0
    ctx->pc = 0x23f194u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)992);
    // 0x23f198: 0x3304ff00  andi        $a0, $t8, 0xFF00
    ctx->pc = 0x23f198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65280);
    // 0x23f19c: 0x1715818  mult        $t3, $t3, $s1
    ctx->pc = 0x23f19cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x23f1a0: 0x1ef1818  mult        $v1, $t7, $t7
    ctx->pc = 0x23f1a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23f1a4: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x23f1a4u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x23f1a8: 0x1081c2  srl         $s0, $s0, 7
    ctx->pc = 0x23f1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 7));
    // 0x23f1ac: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x23f1acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x23f1b0: 0xe7082  srl         $t6, $t6, 2
    ctx->pc = 0x23f1b0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 2));
    // 0x23f1b4: 0x318c001f  andi        $t4, $t4, 0x1F
    ctx->pc = 0x23f1b4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31);
    // 0x23f1b8: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x23f1b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x23f1bc: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x23f1bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x23f1c0: 0x330200ff  andi        $v0, $t8, 0xFF
    ctx->pc = 0x23f1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
    // 0x23f1c4: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x23f1c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x23f1c8: 0x8f2018  mult        $a0, $a0, $t7
    ctx->pc = 0x23f1c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23f1cc: 0x1d17018  mult        $t6, $t6, $s1
    ctx->pc = 0x23f1ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x23f1d0: 0x256b2000  addiu       $t3, $t3, 0x2000
    ctx->pc = 0x23f1d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8192));
    // 0x23f1d4: 0x4f1018  mult        $v0, $v0, $t7
    ctx->pc = 0x23f1d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23f1d8: 0x1916018  mult        $t4, $t4, $s1
    ctx->pc = 0x23f1d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x23f1dc: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x23f1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x23f1e0: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x23f1e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x23f1e4: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x23f1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x23f1e8: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x23f1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x23f1ec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23f1f0: 0x31ad7c00  andi        $t5, $t5, 0x7C00
    ctx->pc = 0x23f1f0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)31744);
    // 0x23f1f4: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x23f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x23f1f8: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x23f1f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x23f1fc: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x23f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x23f200: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x23f200u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x23f204: 0x30427c00  andi        $v0, $v0, 0x7C00
    ctx->pc = 0x23f204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x23f208: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23f208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23f20c: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x23f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x23f210: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23f210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23f214:
    // 0x23f214: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x23f214u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x23f218: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x23f218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x23f21c: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x23f21cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x23f220: 0x322c821  addu        $t9, $t9, $v0
    ctx->pc = 0x23f220u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x23f224: 0x1b200008  blez        $t9, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F224u;
    {
        const bool branch_taken_0x23f224 = (GPR_S64(ctx, 25) <= 0);
        ctx->pc = 0x23F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F224u;
        // 0x23f228: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f224) {
            ctx->pc = 0x23F248u;
            goto label_23f248;
        }
    }
    ctx->pc = 0x23F22Cu;
    // 0x23f22c: 0x0  nop
    ctx->pc = 0x23f22cu;
    // NOP
label_23f230:
    // 0x23f230: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x23f230u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x23f234: 0x0  nop
    ctx->pc = 0x23f234u;
    // NOP
    // 0x23f238: 0x0  nop
    ctx->pc = 0x23f238u;
    // NOP
    // 0x23f23c: 0x0  nop
    ctx->pc = 0x23f23cu;
    // NOP
    // 0x23f240: 0x1f20fffb  bgtz        $t9, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23F240u;
    {
        const bool branch_taken_0x23f240 = (GPR_S64(ctx, 25) > 0);
        ctx->pc = 0x23F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F240u;
        // 0x23f244: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f240) {
            ctx->pc = 0x23F230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f230;
        }
    }
    ctx->pc = 0x23F248u;
label_23f248:
    // 0x23f248: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23f248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f24c: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x23F24Cu;
    {
        const bool branch_taken_0x23f24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F24Cu;
        // 0x23f250: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f24c) {
            ctx->pc = 0x23F100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f100;
        }
    }
    ctx->pc = 0x23F254u;
label_23f254:
    // 0x23f254: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23f254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23f258: 0x8c633f30  lw          $v1, 0x3F30($v1)
    ctx->pc = 0x23f258u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23f25c: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x23f25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f260: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23f260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23f264: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23f264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23f268: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x23F268u;
    {
        const bool branch_taken_0x23f268 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x23F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F268u;
        // 0x23f26c: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f268) {
            ctx->pc = 0x23F298u;
            goto label_23f298;
        }
    }
    ctx->pc = 0x23F270u;
    // 0x23f270: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23f270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f274: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23f274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23f278: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x23f278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23f27c: 0x0  nop
    ctx->pc = 0x23f27cu;
    // NOP
label_23f280:
    // 0x23f280: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x23f280u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x23f284: 0x0  nop
    ctx->pc = 0x23f284u;
    // NOP
    // 0x23f288: 0x0  nop
    ctx->pc = 0x23f288u;
    // NOP
    // 0x23f28c: 0x0  nop
    ctx->pc = 0x23f28cu;
    // NOP
    // 0x23f290: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23F290u;
    {
        const bool branch_taken_0x23f290 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x23F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F290u;
        // 0x23f294: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f290) {
            ctx->pc = 0x23F280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f280;
        }
    }
    ctx->pc = 0x23F298u;
label_23f298:
    // 0x23f298: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x23f298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23f29c: 0x1480ff8e  bnez        $a0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x23F29Cu;
    {
        const bool branch_taken_0x23f29c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F29Cu;
        // 0x23f2a0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f29c) {
            ctx->pc = 0x23F0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f0d8;
        }
    }
    ctx->pc = 0x23F2A4u;
    // 0x23f2a4: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x23F2A4u;
    {
        const bool branch_taken_0x23f2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F2A4u;
        // 0x23f2a8: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f2a4) {
            ctx->pc = 0x23F620u;
            goto label_23f620;
        }
    }
    ctx->pc = 0x23F2ACu;
label_23f2ac:
    // 0x23f2ac: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x23f2acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
    // 0x23f2b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f2b4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23f2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23f2b8: 0x14430048  bne         $v0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x23F2B8u;
    {
        const bool branch_taken_0x23f2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F2B8u;
        // 0x23f2bc: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f2b8) {
            ctx->pc = 0x23F3DCu;
            goto label_23f3dc;
        }
    }
    ctx->pc = 0x23F2C0u;
    // 0x23f2c0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x23f2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f2c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23f2c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f2c8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x23f2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23f2cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23f2d0: 0x106000d2  beqz        $v1, . + 4 + (0xD2 << 2)
    ctx->pc = 0x23F2D0u;
    {
        const bool branch_taken_0x23f2d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F2D0u;
        // 0x23f2d4: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f2d0) {
            ctx->pc = 0x23F61Cu;
            goto label_23f61c;
        }
    }
    ctx->pc = 0x23F2D8u;
label_23f2d8:
    // 0x23f2d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f2dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23f2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f2e0: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x23f2e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23f2e4: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x23f2e4u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x23f2e8: 0x202f021  addu        $fp, $s0, $v0
    ctx->pc = 0x23f2e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23f2ec: 0x8fb30020  lw          $s3, 0x20($sp)
    ctx->pc = 0x23f2ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f2f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23f2f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f2f4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x23F2F4u;
    {
        const bool branch_taken_0x23f2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F2F4u;
        // 0x23f2f8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f2f4) {
            ctx->pc = 0x23F384u;
            goto label_23f384;
        }
    }
    ctx->pc = 0x23F2FCu;
    // 0x23f2fc: 0x0  nop
    ctx->pc = 0x23f2fcu;
    // NOP
label_23f300:
    // 0x23f300: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x23f300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x23f304: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F304u;
    {
        const bool branch_taken_0x23f304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F304u;
        // 0x23f308: 0x131042  srl         $v0, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f304) {
            ctx->pc = 0x23F320u;
            goto label_23f320;
        }
    }
    ctx->pc = 0x23F30Cu;
    // 0x23f30c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x23f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x23f310: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23f310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f314: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23F314u;
    {
        const bool branch_taken_0x23f314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F314u;
        // 0x23f318: 0x3063000f  andi        $v1, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f314) {
            ctx->pc = 0x23F330u;
            goto label_23f330;
        }
    }
    ctx->pc = 0x23F31Cu;
    // 0x23f31c: 0x0  nop
    ctx->pc = 0x23f31cu;
    // NOP
label_23f320:
    // 0x23f320: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x23f320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x23f324: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23f324u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f328: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x23f328u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x23f32c: 0x0  nop
    ctx->pc = 0x23f32cu;
    // NOP
label_23f330:
    // 0x23f330: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23f330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23f334: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23f334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23f338: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x23f338u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f33c: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x23f33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x23f340: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23F340u;
    {
        const bool branch_taken_0x23f340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f340) {
            ctx->pc = 0x23F344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F340u;
            // 0x23f344: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F348u;
            goto label_23f348;
        }
    }
    ctx->pc = 0x23F348u;
label_23f348:
    // 0x23f348: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x23f348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x23f34c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x23f34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x23f350: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x23f350u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x23f354: 0x1b200008  blez        $t9, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F354u;
    {
        const bool branch_taken_0x23f354 = (GPR_S64(ctx, 25) <= 0);
        ctx->pc = 0x23F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F354u;
        // 0x23f358: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f354) {
            ctx->pc = 0x23F378u;
            goto label_23f378;
        }
    }
    ctx->pc = 0x23F35Cu;
    // 0x23f35c: 0x0  nop
    ctx->pc = 0x23f35cu;
    // NOP
label_23f360:
    // 0x23f360: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x23f360u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x23f364: 0x0  nop
    ctx->pc = 0x23f364u;
    // NOP
    // 0x23f368: 0x0  nop
    ctx->pc = 0x23f368u;
    // NOP
    // 0x23f36c: 0x0  nop
    ctx->pc = 0x23f36cu;
    // NOP
    // 0x23f370: 0x1f20fffb  bgtz        $t9, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23F370u;
    {
        const bool branch_taken_0x23f370 = (GPR_S64(ctx, 25) > 0);
        ctx->pc = 0x23F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F370u;
        // 0x23f374: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f370) {
            ctx->pc = 0x23F360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f360;
        }
    }
    ctx->pc = 0x23F378u;
label_23f378:
    // 0x23f378: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23f378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f37c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x23F37Cu;
    {
        const bool branch_taken_0x23f37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F37Cu;
        // 0x23f380: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f37c) {
            ctx->pc = 0x23F300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f300;
        }
    }
    ctx->pc = 0x23F384u;
label_23f384:
    // 0x23f384: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23f384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23f388: 0x8c633f30  lw          $v1, 0x3F30($v1)
    ctx->pc = 0x23f388u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23f38c: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x23f38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f390: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23f390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23f394: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23f394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23f398: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x23F398u;
    {
        const bool branch_taken_0x23f398 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x23F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F398u;
        // 0x23f39c: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f398) {
            ctx->pc = 0x23F3C8u;
            goto label_23f3c8;
        }
    }
    ctx->pc = 0x23F3A0u;
    // 0x23f3a0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23f3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f3a4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23f3a8: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x23f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23f3ac: 0x0  nop
    ctx->pc = 0x23f3acu;
    // NOP
label_23f3b0:
    // 0x23f3b0: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x23f3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x23f3b4: 0x0  nop
    ctx->pc = 0x23f3b4u;
    // NOP
    // 0x23f3b8: 0x0  nop
    ctx->pc = 0x23f3b8u;
    // NOP
    // 0x23f3bc: 0x0  nop
    ctx->pc = 0x23f3bcu;
    // NOP
    // 0x23f3c0: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23F3C0u;
    {
        const bool branch_taken_0x23f3c0 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x23F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3C0u;
        // 0x23f3c4: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3c0) {
            ctx->pc = 0x23F3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f3b0;
        }
    }
    ctx->pc = 0x23F3C8u;
label_23f3c8:
    // 0x23f3c8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x23f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23f3cc: 0x1480ffc2  bnez        $a0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x23F3CCu;
    {
        const bool branch_taken_0x23f3cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3CCu;
        // 0x23f3d0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3cc) {
            ctx->pc = 0x23F2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f2d8;
        }
    }
    ctx->pc = 0x23F3D4u;
    // 0x23f3d4: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x23F3D4u;
    {
        const bool branch_taken_0x23f3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3D4u;
        // 0x23f3d8: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3d4) {
            ctx->pc = 0x23F620u;
            goto label_23f620;
        }
    }
    ctx->pc = 0x23F3DCu;
label_23f3dc:
    // 0x23f3dc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x23f3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f3e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23f3e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f3e4: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x23f3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23f3e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23f3ec: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x23f3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x23f3f0: 0x1060008a  beqz        $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x23F3F0u;
    {
        const bool branch_taken_0x23f3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3F0u;
        // 0x23f3f4: 0xafa4004c  sw          $a0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3f0) {
            ctx->pc = 0x23F61Cu;
            goto label_23f61c;
        }
    }
    ctx->pc = 0x23F3F8u;
label_23f3f8:
    // 0x23f3f8: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x23f3f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23f3fc: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x23f3fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f400: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x23f400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f404: 0x17c823  negu        $t9, $s7
    ctx->pc = 0x23f404u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x23f408: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23f408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f40c: 0x8fb30020  lw          $s3, 0x20($sp)
    ctx->pc = 0x23f40cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f410: 0x205f021  addu        $fp, $s0, $a1
    ctx->pc = 0x23f410u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x23f414: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x23F414u;
    {
        const bool branch_taken_0x23f414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F414u;
        // 0x23f418: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f414) {
            ctx->pc = 0x23F5CCu;
            goto label_23f5cc;
        }
    }
    ctx->pc = 0x23F41Cu;
    // 0x23f41c: 0x0  nop
    ctx->pc = 0x23f41cu;
    // NOP
label_23f420:
    // 0x23f420: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x23f420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x23f424: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x23F424u;
    {
        const bool branch_taken_0x23f424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F424u;
        // 0x23f428: 0x131042  srl         $v0, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f424) {
            ctx->pc = 0x23F4B0u;
            goto label_23f4b0;
        }
    }
    ctx->pc = 0x23F42Cu;
    // 0x23f42c: 0x3c047f00  lui         $a0, 0x7F00
    ctx->pc = 0x23f42cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32512 << 16));
    // 0x23f430: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x23f430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x23f434: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23f434u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f438: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x23f438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x23f43c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x23f43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x23f440: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23f440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23f444: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23f444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f448: 0x8c780000  lw          $t8, 0x0($v1)
    ctx->pc = 0x23f448u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f44c: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x23f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x23f450: 0x3037824  and         $t7, $t8, $v1
    ctx->pc = 0x23f450u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) & GPR_U64(ctx, 3));
    // 0x23f454: 0x8f102b  sltu        $v0, $a0, $t7
    ctx->pc = 0x23f454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x23f458: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x23F458u;
    {
        const bool branch_taken_0x23f458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F458u;
        // 0x23f45c: 0x3c0400f8  lui         $a0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)248 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f458) {
            ctx->pc = 0x23F4E8u;
            goto label_23f4e8;
        }
    }
    ctx->pc = 0x23F460u;
    // 0x23f460: 0x3302f800  andi        $v0, $t8, 0xF800
    ctx->pc = 0x23f460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)63488);
    // 0x23f464: 0x3041824  and         $v1, $t8, $a0
    ctx->pc = 0x23f464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x23f468: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x23f468u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x23f46c: 0x31a42  srl         $v1, $v1, 9
    ctx->pc = 0x23f46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x23f470: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x23f470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x23f474: 0x330400f8  andi        $a0, $t8, 0xF8
    ctx->pc = 0x23f474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)248);
    // 0x23f478: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23f478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23f47c: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x23f47cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x23f480: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x23F480u;
    {
        const bool branch_taken_0x23f480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F480u;
        // 0x23f484: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f480) {
            ctx->pc = 0x23F58Cu;
            goto label_23f58c;
        }
    }
    ctx->pc = 0x23F488u;
label_23f488:
    // 0x23f488: 0x3c0500f8  lui         $a1, 0xF8
    ctx->pc = 0x23f488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)248 << 16));
    // 0x23f48c: 0x3051824  and         $v1, $t8, $a1
    ctx->pc = 0x23f48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & GPR_U64(ctx, 5));
    // 0x23f490: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x23f490u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x23f494: 0x31a42  srl         $v1, $v1, 9
    ctx->pc = 0x23f494u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x23f498: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x23f498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x23f49c: 0x330400f8  andi        $a0, $t8, 0xF8
    ctx->pc = 0x23f49cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)248);
    // 0x23f4a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23f4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23f4a4: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x23f4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x23f4a8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x23F4A8u;
    {
        const bool branch_taken_0x23f4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4A8u;
        // 0x23f4ac: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4a8) {
            ctx->pc = 0x23F58Cu;
            goto label_23f58c;
        }
    }
    ctx->pc = 0x23F4B0u;
label_23f4b0:
    // 0x23f4b0: 0x3c047f00  lui         $a0, 0x7F00
    ctx->pc = 0x23f4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32512 << 16));
    // 0x23f4b4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x23f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x23f4b8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23f4b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f4bc: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x23f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x23f4c0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x23f4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x23f4c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23f4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23f4c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23f4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f4cc: 0x8c780000  lw          $t8, 0x0($v1)
    ctx->pc = 0x23f4ccu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f4d0: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x23f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x23f4d4: 0x3037824  and         $t7, $t8, $v1
    ctx->pc = 0x23f4d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) & GPR_U64(ctx, 3));
    // 0x23f4d8: 0x8f102b  sltu        $v0, $a0, $t7
    ctx->pc = 0x23f4d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x23f4dc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x23F4DCu;
    {
        const bool branch_taken_0x23f4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4DCu;
        // 0x23f4e0: 0x3302f800  andi        $v0, $t8, 0xF800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)63488);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4dc) {
            ctx->pc = 0x23F488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f488;
        }
    }
    ctx->pc = 0x23F4E4u;
    // 0x23f4e4: 0x0  nop
    ctx->pc = 0x23f4e4u;
    // NOP
label_23f4e8:
    // 0x23f4e8: 0x968c0000  lhu         $t4, 0x0($s4)
    ctx->pc = 0x23f4e8u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23f4ec: 0xf7e02  srl         $t7, $t7, 24
    ctx->pc = 0x23f4ecu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 24));
    // 0x23f4f0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x23f4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23f4f4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x23f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x23f4f8: 0x318b8000  andi        $t3, $t4, 0x8000
    ctx->pc = 0x23f4f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32768);
    // 0x23f4fc: 0xaf8823  subu        $s1, $a1, $t7
    ctx->pc = 0x23f4fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x23f500: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x23f500u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x23f504: 0x3026824  and         $t5, $t8, $v0
    ctx->pc = 0x23f504u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x23f508: 0x31907c00  andi        $s0, $t4, 0x7C00
    ctx->pc = 0x23f508u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31744);
    // 0x23f50c: 0x318e03e0  andi        $t6, $t4, 0x3E0
    ctx->pc = 0x23f50cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)992);
    // 0x23f510: 0x3304ff00  andi        $a0, $t8, 0xFF00
    ctx->pc = 0x23f510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65280);
    // 0x23f514: 0x1715818  mult        $t3, $t3, $s1
    ctx->pc = 0x23f514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x23f518: 0x1ef1818  mult        $v1, $t7, $t7
    ctx->pc = 0x23f518u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23f51c: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x23f51cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x23f520: 0x1081c2  srl         $s0, $s0, 7
    ctx->pc = 0x23f520u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 7));
    // 0x23f524: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x23f524u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x23f528: 0xe7082  srl         $t6, $t6, 2
    ctx->pc = 0x23f528u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 2));
    // 0x23f52c: 0x318c001f  andi        $t4, $t4, 0x1F
    ctx->pc = 0x23f52cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)31);
    // 0x23f530: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x23f530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x23f534: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x23f534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x23f538: 0x330200ff  andi        $v0, $t8, 0xFF
    ctx->pc = 0x23f538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
    // 0x23f53c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x23f53cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x23f540: 0x8f2018  mult        $a0, $a0, $t7
    ctx->pc = 0x23f540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x23f544: 0x1d17018  mult        $t6, $t6, $s1
    ctx->pc = 0x23f544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x23f548: 0x256b2000  addiu       $t3, $t3, 0x2000
    ctx->pc = 0x23f548u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8192));
    // 0x23f54c: 0x4f1018  mult        $v0, $v0, $t7
    ctx->pc = 0x23f54cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23f550: 0x1916018  mult        $t4, $t4, $s1
    ctx->pc = 0x23f550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x23f554: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x23f554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x23f558: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x23f558u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x23f55c: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x23f55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x23f560: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x23f560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x23f564: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23f564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23f568: 0x31ad7c00  andi        $t5, $t5, 0x7C00
    ctx->pc = 0x23f568u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)31744);
    // 0x23f56c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x23f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x23f570: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x23f570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x23f574: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x23f574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x23f578: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x23f578u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x23f57c: 0x30427c00  andi        $v0, $v0, 0x7C00
    ctx->pc = 0x23f57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x23f580: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23f580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23f584: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x23f584u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x23f588: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23f588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23f58c:
    // 0x23f58c: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x23f58cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x23f590: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x23f590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x23f594: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x23f594u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x23f598: 0x322c821  addu        $t9, $t9, $v0
    ctx->pc = 0x23f598u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x23f59c: 0x1b200008  blez        $t9, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F59Cu;
    {
        const bool branch_taken_0x23f59c = (GPR_S64(ctx, 25) <= 0);
        ctx->pc = 0x23F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F59Cu;
        // 0x23f5a0: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f59c) {
            ctx->pc = 0x23F5C0u;
            goto label_23f5c0;
        }
    }
    ctx->pc = 0x23F5A4u;
    // 0x23f5a4: 0x0  nop
    ctx->pc = 0x23f5a4u;
    // NOP
label_23f5a8:
    // 0x23f5a8: 0x337c823  subu        $t9, $t9, $s7
    ctx->pc = 0x23f5a8u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 23)));
    // 0x23f5ac: 0x0  nop
    ctx->pc = 0x23f5acu;
    // NOP
    // 0x23f5b0: 0x0  nop
    ctx->pc = 0x23f5b0u;
    // NOP
    // 0x23f5b4: 0x0  nop
    ctx->pc = 0x23f5b4u;
    // NOP
    // 0x23f5b8: 0x1f20fffb  bgtz        $t9, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23F5B8u;
    {
        const bool branch_taken_0x23f5b8 = (GPR_S64(ctx, 25) > 0);
        ctx->pc = 0x23F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5B8u;
        // 0x23f5bc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f5b8) {
            ctx->pc = 0x23F5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f5a8;
        }
    }
    ctx->pc = 0x23F5C0u;
label_23f5c0:
    // 0x23f5c0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23f5c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f5c4: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x23F5C4u;
    {
        const bool branch_taken_0x23f5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5C4u;
        // 0x23f5c8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f5c4) {
            ctx->pc = 0x23F420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f420;
        }
    }
    ctx->pc = 0x23F5CCu;
label_23f5cc:
    // 0x23f5cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23f5d0: 0x8c633f30  lw          $v1, 0x3F30($v1)
    ctx->pc = 0x23f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F30u));
    // 0x23f5d4: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x23f5d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f5d8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23f5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x23f5dc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23f5e0: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x23F5E0u;
    {
        const bool branch_taken_0x23f5e0 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x23F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5E0u;
        // 0x23f5e4: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f5e0) {
            ctx->pc = 0x23F610u;
            goto label_23f610;
        }
    }
    ctx->pc = 0x23F5E8u;
    // 0x23f5e8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f5ec: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23f5f0: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x23f5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x23f5f4: 0x0  nop
    ctx->pc = 0x23f5f4u;
    // NOP
label_23f5f8:
    // 0x23f5f8: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x23f5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x23f5fc: 0x0  nop
    ctx->pc = 0x23f5fcu;
    // NOP
    // 0x23f600: 0x0  nop
    ctx->pc = 0x23f600u;
    // NOP
    // 0x23f604: 0x0  nop
    ctx->pc = 0x23f604u;
    // NOP
    // 0x23f608: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23F608u;
    {
        const bool branch_taken_0x23f608 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x23F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F608u;
        // 0x23f60c: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f608) {
            ctx->pc = 0x23F5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f5f8;
        }
    }
    ctx->pc = 0x23F610u;
label_23f610:
    // 0x23f610: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x23f610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23f614: 0x1480ff78  bnez        $a0, . + 4 + (-0x88 << 2)
    ctx->pc = 0x23F614u;
    {
        const bool branch_taken_0x23f614 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F614u;
        // 0x23f618: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f614) {
            ctx->pc = 0x23F3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f3f8;
        }
    }
    ctx->pc = 0x23F61Cu;
label_23f61c:
    // 0x23f61c: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x23f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_23f620:
    // 0x23f620: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F620u;
    {
        const bool branch_taken_0x23f620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F620u;
        // 0x23f624: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f620) {
            ctx->pc = 0x23F634u;
            goto label_23f634;
        }
    }
    ctx->pc = 0x23F628u;
    // 0x23f628: 0xc08a0b0  jal         func_2282C0
    ctx->pc = 0x23F628u;
    SET_GPR_U32(ctx, 31, 0x23F630u);
    ctx->pc = 0x23F62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F628u;
    // 0x23f62c: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2282C0u, 0x23F628u, 0x23F630u)) {
        return;
    }
    ctx->pc = 0x23F630u;
label_23f630:
    // 0x23f630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f634:
    // 0x23f634: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x23f634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_23f638:
    // 0x23f638: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x23f638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23f63c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x23f63cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23f640: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x23f640u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23f644: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x23f644u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23f648: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x23f648u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23f64c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x23f64cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23f650: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x23f650u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23f654: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x23f654u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23f658: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23f658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23f65c: 0x3e00008  jr          $ra
    ctx->pc = 0x23F65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F65Cu;
        // 0x23f660: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F664u;
    // 0x23f664: 0x0  nop
    ctx->pc = 0x23f664u;
    // NOP
    ctx->pc = 0x23f668u;
}
