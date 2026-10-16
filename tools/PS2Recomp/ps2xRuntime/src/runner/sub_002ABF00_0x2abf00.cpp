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

// Function: sub_002ABF00
// Address: 0x2abf00 - 0x2ac5e0
void sub_002ABF00_0x2abf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABF00_0x2abf00");
#endif

    switch (ctx->pc) {
        case 0x2abf70u: goto label_2abf70;
        case 0x2abf84u: goto label_2abf84;
        case 0x2abfa4u: goto label_2abfa4;
        case 0x2abfc4u: goto label_2abfc4;
        case 0x2abfe8u: goto label_2abfe8;
        case 0x2ac00cu: goto label_2ac00c;
        case 0x2ac030u: goto label_2ac030;
        case 0x2ac054u: goto label_2ac054;
        case 0x2ac088u: goto label_2ac088;
        case 0x2ac100u: goto label_2ac100;
        case 0x2ac1c0u: goto label_2ac1c0;
        case 0x2ac248u: goto label_2ac248;
        case 0x2ac28cu: goto label_2ac28c;
        case 0x2ac350u: goto label_2ac350;
        case 0x2ac40cu: goto label_2ac40c;
        case 0x2ac4b0u: goto label_2ac4b0;
        case 0x2ac540u: goto label_2ac540;
        case 0x2ac594u: goto label_2ac594;
        default: break;
    }

    ctx->pc = 0x2abf00u;

    // 0x2abf00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2abf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2abf04: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2abf04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2abf08: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2abf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2abf0c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2abf0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abf10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2abf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2abf14: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2abf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2abf18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2abf18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abf1c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2abf1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2abf20: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2abf20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abf24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2abf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2abf28: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2abf28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2abf2c: 0x3484fff0  ori         $a0, $a0, 0xFFF0
    ctx->pc = 0x2abf2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65520);
    // 0x2abf30: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2abf30u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2abf34: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2abf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2abf38: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2abf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2abf3c: 0x2463001f  addiu       $v1, $v1, 0x1F
    ctx->pc = 0x2abf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x2abf40: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2abf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2abf44: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x2abf44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x2abf48: 0x448824  and         $s1, $v0, $a0
    ctx->pc = 0x2abf48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2abf4c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2abf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2abf50: 0x26220093  addiu       $v0, $s1, 0x93
    ctx->pc = 0x2abf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 147));
    // 0x2abf54: 0xae270008  sw          $a3, 0x8($s1)
    ctx->pc = 0x2abf54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 7));
    // 0x2abf58: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2abf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2abf5c: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x2abf5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2abf60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2abf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abf64: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x2abf64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2abf68: 0xc0aaf22  jal         func_2ABC88
    ctx->pc = 0x2ABF68u;
    SET_GPR_U32(ctx, 31, 0x2ABF70u);
    ctx->pc = 0x2ABF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABF68u;
    // 0x2abf6c: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABC88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABC88u, 0x2ABF68u, 0x2ABF70u)) {
        return;
    }
    ctx->pc = 0x2ABF70u;
label_2abf70:
    // 0x2abf70: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x2abf70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2abf74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2abf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abf78: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x2abf78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2abf7c: 0xc0ae028  jal         func_2B80A0
    ctx->pc = 0x2ABF7Cu;
    SET_GPR_U32(ctx, 31, 0x2ABF84u);
    ctx->pc = 0x2ABF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABF7Cu;
    // 0x2abf80: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B80A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B80A0u, 0x2ABF7Cu, 0x2ABF84u)) {
        return;
    }
    ctx->pc = 0x2ABF84u;
label_2abf84:
    // 0x2abf84: 0xc78c80f8  lwc1        $f12, -0x7F08($gp)
    ctx->pc = 0x2abf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2abf88: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2abf88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abf8c: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x2abf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2abf90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2abf90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abf94: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x2abf94u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x2abf98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2abf98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abf9c: 0xc0ada14  jal         func_2B6850
    ctx->pc = 0x2ABF9Cu;
    SET_GPR_U32(ctx, 31, 0x2ABFA4u);
    ctx->pc = 0x2ABFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABF9Cu;
    // 0x2abfa0: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B6850u, 0x2ABF9Cu, 0x2ABFA4u)) {
        return;
    }
    ctx->pc = 0x2ABFA4u;
label_2abfa4:
    // 0x2abfa4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2abfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2abfa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2abfa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abfac: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2abfacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2abfb0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2abfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abfb4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2abfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2abfb8: 0xae230058  sw          $v1, 0x58($s1)
    ctx->pc = 0x2abfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
    // 0x2abfbc: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2ABFBCu;
    SET_GPR_U32(ctx, 31, 0x2ABFC4u);
    ctx->pc = 0x2ABFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABFBCu;
    // 0x2abfc0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2ABFBCu, 0x2ABFC4u)) {
        return;
    }
    ctx->pc = 0x2ABFC4u;
label_2abfc4:
    // 0x2abfc4: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2abfc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2abfc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2abfc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abfcc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2abfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2abfd0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2abfd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2abfd4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2abfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2abfd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2abfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abfdc: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2abfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2abfe0: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2ABFE0u;
    SET_GPR_U32(ctx, 31, 0x2ABFE8u);
    ctx->pc = 0x2ABFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABFE0u;
    // 0x2abfe4: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2ABFE0u, 0x2ABFE8u)) {
        return;
    }
    ctx->pc = 0x2ABFE8u;
label_2abfe8:
    // 0x2abfe8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2abfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2abfec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2abfecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abff0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2abff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2abff4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2abff4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2abff8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2abff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2abffc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2abffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac000: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2ac000u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2ac004: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2AC004u;
    SET_GPR_U32(ctx, 31, 0x2AC00Cu);
    ctx->pc = 0x2AC008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC004u;
    // 0x2ac008: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2AC004u, 0x2AC00Cu)) {
        return;
    }
    ctx->pc = 0x2AC00Cu;
label_2ac00c:
    // 0x2ac00c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2ac00cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac014: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2ac014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ac018: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2ac018u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ac01c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ac01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ac020: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac024: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2ac024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2ac028: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2AC028u;
    SET_GPR_U32(ctx, 31, 0x2AC030u);
    ctx->pc = 0x2AC02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC028u;
    // 0x2ac02c: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2AC028u, 0x2AC030u)) {
        return;
    }
    ctx->pc = 0x2AC030u;
label_2ac030:
    // 0x2ac030: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2ac030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac038: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2ac038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ac03c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2ac03cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ac040: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ac040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ac044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac048: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2ac048u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2ac04c: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2AC04Cu;
    SET_GPR_U32(ctx, 31, 0x2AC054u);
    ctx->pc = 0x2AC050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC04Cu;
    // 0x2ac050: 0xae220068  sw          $v0, 0x68($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2AC04Cu, 0x2AC054u)) {
        return;
    }
    ctx->pc = 0x2AC054u;
label_2ac054:
    // 0x2ac054: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2ac054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac058: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ac058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac05c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2ac05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ac060: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac064: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ac064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ac068: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AC068u;
    {
        const bool branch_taken_0x2ac068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC068u;
        // 0x2ac06c: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac068) {
            ctx->pc = 0x2AC0C0u;
            goto label_2ac0c0;
        }
    }
    ctx->pc = 0x2AC070u;
    // 0x2ac070: 0x8e280058  lw          $t0, 0x58($s1)
    ctx->pc = 0x2ac070u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2ac074: 0x8e26005c  lw          $a2, 0x5C($s1)
    ctx->pc = 0x2ac074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2ac078: 0x8e250064  lw          $a1, 0x64($s1)
    ctx->pc = 0x2ac078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2ac07c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2ac07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2ac080: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x2ac080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2ac084: 0x0  nop
    ctx->pc = 0x2ac084u;
    // NOP
label_2ac088:
    // 0x2ac088: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2ac088u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x2ac08c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2ac08cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2ac090: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2ac090u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2ac094: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2ac094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2ac098: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ac098u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ac09c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2ac09cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2ac0a0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2ac0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2ac0a4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2ac0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2ac0a8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2ac0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2ac0ac: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2ac0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2ac0b0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2ac0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac0b4: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x2ac0b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ac0b8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2AC0B8u;
    {
        const bool branch_taken_0x2ac0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC0B8u;
        // 0x2ac0bc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac0b8) {
            ctx->pc = 0x2AC088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ac088;
        }
    }
    ctx->pc = 0x2AC0C0u;
label_2ac0c0:
    // 0x2ac0c0: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x2ac0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2ac0c4: 0x2410002c  addiu       $s0, $zero, 0x2C
    ctx->pc = 0x2ac0c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2ac0c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2ac0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac0cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac0d0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2ac0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ac0d4: 0xd00018  mult        $zero, $a2, $s0
    ctx->pc = 0x2ac0d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2ac0d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ac0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ac0dc: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2ac0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ac0e0: 0xae240070  sw          $a0, 0x70($s1)
    ctx->pc = 0x2ac0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 4));
    // 0x2ac0e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ac0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ac0e8: 0xae230074  sw          $v1, 0x74($s1)
    ctx->pc = 0x2ac0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
    // 0x2ac0ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac0f0: 0x3012  mflo        $a2
    ctx->pc = 0x2ac0f0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2ac0f4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2ac0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2ac0f8: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2AC0F8u;
    SET_GPR_U32(ctx, 31, 0x2AC100u);
    ctx->pc = 0x2AC0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC0F8u;
    // 0x2ac0fc: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2AC0F8u, 0x2AC100u)) {
        return;
    }
    ctx->pc = 0x2AC100u;
label_2ac100:
    // 0x2ac100: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x2ac100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2ac104: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ac104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac108: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2ac108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ac10c: 0x902818  mult        $a1, $a0, $s0
    ctx->pc = 0x2ac10cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2ac110: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ac110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac114: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ac114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ac118: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ac118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ac11c: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x2ac11cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x2ac120: 0x10800040  beqz        $a0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2AC120u;
    {
        const bool branch_taken_0x2ac120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC120u;
        // 0x2ac124: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac120) {
            ctx->pc = 0x2AC224u;
            goto label_2ac224;
        }
    }
    ctx->pc = 0x2AC128u;
    // 0x2ac128: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2ac128u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac12c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2ac12cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac130: 0x31440003  andi        $a0, $t2, 0x3
    ctx->pc = 0x2ac130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x2ac134: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ac134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac138: 0x19400016  blez        $t2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2AC138u;
    {
        const bool branch_taken_0x2ac138 = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x2AC13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC138u;
        // 0x2ac13c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac138) {
            ctx->pc = 0x2AC194u;
            goto label_2ac194;
        }
    }
    ctx->pc = 0x2AC140u;
    // 0x2ac140: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2AC140u;
    {
        const bool branch_taken_0x2ac140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC140u;
        // 0x2ac144: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac140) {
            ctx->pc = 0x2AC1BCu;
            goto label_2ac1bc;
        }
    }
    ctx->pc = 0x2AC148u;
    // 0x2ac148: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2AC148u;
    {
        const bool branch_taken_0x2ac148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac148) {
            ctx->pc = 0x2AC14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC148u;
            // 0x2ac14c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC198u;
            goto label_2ac198;
        }
    }
    ctx->pc = 0x2AC150u;
    // 0x2ac150: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2ac150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ac154: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC154u;
    {
        const bool branch_taken_0x2ac154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC154u;
        // 0x2ac158: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac154) {
            ctx->pc = 0x2AC178u;
            goto label_2ac178;
        }
    }
    ctx->pc = 0x2AC15Cu;
    // 0x2ac15c: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2ac15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2ac160: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x2ac160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2ac164: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ac164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac168: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2ac168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ac16c: 0x2442ffd4  addiu       $v0, $v0, -0x2C
    ctx->pc = 0x2ac16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967252));
    // 0x2ac170: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2ac170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2ac174: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2ac174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2ac178:
    // 0x2ac178: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2ac178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2ac17c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2ac17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ac180: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2ac180u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ac184: 0x2442ffd4  addiu       $v0, $v0, -0x2C
    ctx->pc = 0x2ac184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967252));
    // 0x2ac188: 0x24c6002c  addiu       $a2, $a2, 0x2C
    ctx->pc = 0x2ac188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
    // 0x2ac18c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2ac18cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2ac190: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2ac190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2ac194:
    // 0x2ac194: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2ac194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2ac198:
    // 0x2ac198: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2ac198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2ac19c: 0xea482b  sltu        $t1, $a3, $t2
    ctx->pc = 0x2ac19cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2ac1a0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2ac1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ac1a4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2ac1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ac1a8: 0x2442ffd4  addiu       $v0, $v0, -0x2C
    ctx->pc = 0x2ac1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967252));
    // 0x2ac1ac: 0x24c6002c  addiu       $a2, $a2, 0x2C
    ctx->pc = 0x2ac1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
    // 0x2ac1b0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2ac1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2ac1b4: 0x1120001b  beqz        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2AC1B4u;
    {
        const bool branch_taken_0x2ac1b4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC1B4u;
        // 0x2ac1b8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac1b4) {
            ctx->pc = 0x2AC224u;
            goto label_2ac224;
        }
    }
    ctx->pc = 0x2AC1BCu;
label_2ac1bc:
    // 0x2ac1bc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ac1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ac1c0:
    // 0x2ac1c0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2ac1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2ac1c4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2ac1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2ac1c8: 0xea482b  sltu        $t1, $a3, $t2
    ctx->pc = 0x2ac1c8u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2ac1cc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2ac1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2ac1d0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2ac1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ac1d4: 0x2463ffd4  addiu       $v1, $v1, -0x2C
    ctx->pc = 0x2ac1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967252));
    // 0x2ac1d8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2ac1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2ac1dc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2ac1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2ac1e0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2ac1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ac1e4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2ac1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ac1e8: 0x2442ffa8  addiu       $v0, $v0, -0x58
    ctx->pc = 0x2ac1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967208));
    // 0x2ac1ec: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2ac1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2ac1f0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2ac1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2ac1f4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2ac1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2ac1f8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2ac1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ac1fc: 0x2463ff7c  addiu       $v1, $v1, -0x84
    ctx->pc = 0x2ac1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967164));
    // 0x2ac200: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2ac200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2ac204: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2ac204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2ac208: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2ac208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ac20c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2ac20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ac210: 0x2442ff50  addiu       $v0, $v0, -0xB0
    ctx->pc = 0x2ac210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967120));
    // 0x2ac214: 0x24c600b0  addiu       $a2, $a2, 0xB0
    ctx->pc = 0x2ac214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
    // 0x2ac218: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2ac218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2ac21c: 0x1520ffe8  bnez        $t1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2AC21Cu;
    {
        const bool branch_taken_0x2ac21c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC21Cu;
        // 0x2ac220: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac21c) {
            ctx->pc = 0x2AC1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ac1c0;
        }
    }
    ctx->pc = 0x2AC224u;
label_2ac224:
    // 0x2ac224: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2ac224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2ac228: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x2ac228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x2ac22c: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2ac22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2ac230: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x2ac230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x2ac234: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2ac234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2ac238: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AC238u;
    {
        const bool branch_taken_0x2ac238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC238u;
        // 0x2ac23c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac238) {
            ctx->pc = 0x2AC264u;
            goto label_2ac264;
        }
    }
    ctx->pc = 0x2AC240u;
    // 0x2ac240: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2ac240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2ac244: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x2ac244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2ac248:
    // 0x2ac248: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x2ac248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x2ac24c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2ac24cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2ac250: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2ac250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2ac254: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x2ac254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ac258: 0x0  nop
    ctx->pc = 0x2ac258u;
    // NOP
    // 0x2ac25c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2AC25Cu;
    {
        const bool branch_taken_0x2ac25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC25Cu;
        // 0x2ac260: 0x2463002c  addiu       $v1, $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac25c) {
            ctx->pc = 0x2AC248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ac248;
        }
    }
    ctx->pc = 0x2AC264u;
label_2ac264:
    // 0x2ac264: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x2ac264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2ac268: 0x10c00057  beqz        $a2, . + 4 + (0x57 << 2)
    ctx->pc = 0x2AC268u;
    {
        const bool branch_taken_0x2ac268 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC268u;
        // 0x2ac26c: 0x2410009c  addiu       $s0, $zero, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac268) {
            ctx->pc = 0x2AC3C8u;
            goto label_2ac3c8;
        }
    }
    ctx->pc = 0x2AC270u;
    // 0x2ac270: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2ac270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ac274: 0xd00018  mult        $zero, $a2, $s0
    ctx->pc = 0x2ac274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2ac278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac27c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac280: 0x3012  mflo        $a2
    ctx->pc = 0x2ac280u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2ac284: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2AC284u;
    SET_GPR_U32(ctx, 31, 0x2AC28Cu);
    ctx->pc = 0x2AC288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC284u;
    // 0x2ac288: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2AC284u, 0x2AC28Cu)) {
        return;
    }
    ctx->pc = 0x2AC28Cu;
label_2ac28c:
    // 0x2ac28c: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x2ac28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2ac290: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ac290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac294: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2ac294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ac298: 0x902818  mult        $a1, $a0, $s0
    ctx->pc = 0x2ac298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2ac29c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ac29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac2a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ac2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ac2a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ac2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ac2a8: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x2ac2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x2ac2ac: 0x10800041  beqz        $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2AC2ACu;
    {
        const bool branch_taken_0x2ac2ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2ACu;
        // 0x2ac2b0: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2ac) {
            ctx->pc = 0x2AC3B4u;
            goto label_2ac3b4;
        }
    }
    ctx->pc = 0x2AC2B4u;
    // 0x2ac2b4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2ac2b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac2b8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2ac2b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac2bc: 0x31440003  andi        $a0, $t2, 0x3
    ctx->pc = 0x2ac2bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x2ac2c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ac2c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac2c4: 0x19400016  blez        $t2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2AC2C4u;
    {
        const bool branch_taken_0x2ac2c4 = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x2AC2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2C4u;
        // 0x2ac2c8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2c4) {
            ctx->pc = 0x2AC320u;
            goto label_2ac320;
        }
    }
    ctx->pc = 0x2AC2CCu;
    // 0x2ac2cc: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2AC2CCu;
    {
        const bool branch_taken_0x2ac2cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2CCu;
        // 0x2ac2d0: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2cc) {
            ctx->pc = 0x2AC348u;
            goto label_2ac348;
        }
    }
    ctx->pc = 0x2AC2D4u;
    // 0x2ac2d4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2AC2D4u;
    {
        const bool branch_taken_0x2ac2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac2d4) {
            ctx->pc = 0x2AC2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC2D4u;
            // 0x2ac2d8: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC324u;
            goto label_2ac324;
        }
    }
    ctx->pc = 0x2AC2DCu;
    // 0x2ac2dc: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2ac2dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ac2e0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC2E0u;
    {
        const bool branch_taken_0x2ac2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2E0u;
        // 0x2ac2e4: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2e0) {
            ctx->pc = 0x2AC304u;
            goto label_2ac304;
        }
    }
    ctx->pc = 0x2AC2E8u;
    // 0x2ac2e8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2ac2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2ac2ec: 0x2406009c  addiu       $a2, $zero, 0x9C
    ctx->pc = 0x2ac2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x2ac2f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ac2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac2f4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2ac2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ac2f8: 0x2442ff64  addiu       $v0, $v0, -0x9C
    ctx->pc = 0x2ac2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967140));
    // 0x2ac2fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2ac2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2ac300: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2ac300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2ac304:
    // 0x2ac304: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2ac304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2ac308: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2ac308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ac30c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2ac30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ac310: 0x2442ff64  addiu       $v0, $v0, -0x9C
    ctx->pc = 0x2ac310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967140));
    // 0x2ac314: 0x24c6009c  addiu       $a2, $a2, 0x9C
    ctx->pc = 0x2ac314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 156));
    // 0x2ac318: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2ac318u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2ac31c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2ac31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2ac320:
    // 0x2ac320: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2ac320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2ac324:
    // 0x2ac324: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2ac324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2ac328: 0xea482b  sltu        $t1, $a3, $t2
    ctx->pc = 0x2ac328u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2ac32c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2ac32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ac330: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2ac330u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ac334: 0x2442ff64  addiu       $v0, $v0, -0x9C
    ctx->pc = 0x2ac334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967140));
    // 0x2ac338: 0x24c6009c  addiu       $a2, $a2, 0x9C
    ctx->pc = 0x2ac338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 156));
    // 0x2ac33c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2ac33cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2ac340: 0x1120001c  beqz        $t1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2AC340u;
    {
        const bool branch_taken_0x2ac340 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC340u;
        // 0x2ac344: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac340) {
            ctx->pc = 0x2AC3B4u;
            goto label_2ac3b4;
        }
    }
    ctx->pc = 0x2AC348u;
label_2ac348:
    // 0x2ac348: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ac348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac34c: 0x0  nop
    ctx->pc = 0x2ac34cu;
    // NOP
label_2ac350:
    // 0x2ac350: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x2ac350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2ac354: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2ac354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2ac358: 0xea482b  sltu        $t1, $a3, $t2
    ctx->pc = 0x2ac358u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2ac35c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2ac35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2ac360: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2ac360u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ac364: 0x2463ff64  addiu       $v1, $v1, -0x9C
    ctx->pc = 0x2ac364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967140));
    // 0x2ac368: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2ac368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2ac36c: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2ac36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2ac370: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2ac370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ac374: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2ac374u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ac378: 0x2442fec8  addiu       $v0, $v0, -0x138
    ctx->pc = 0x2ac378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966984));
    // 0x2ac37c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2ac37cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2ac380: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x2ac380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2ac384: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2ac384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2ac388: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2ac388u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ac38c: 0x2463fe2c  addiu       $v1, $v1, -0x1D4
    ctx->pc = 0x2ac38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966828));
    // 0x2ac390: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2ac390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2ac394: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2ac394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2ac398: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2ac398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ac39c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2ac39cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ac3a0: 0x2442fd90  addiu       $v0, $v0, -0x270
    ctx->pc = 0x2ac3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966672));
    // 0x2ac3a4: 0x24c60270  addiu       $a2, $a2, 0x270
    ctx->pc = 0x2ac3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 624));
    // 0x2ac3a8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2ac3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2ac3ac: 0x1520ffe8  bnez        $t1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2AC3ACu;
    {
        const bool branch_taken_0x2ac3ac = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC3ACu;
        // 0x2ac3b0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac3ac) {
            ctx->pc = 0x2AC350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ac350;
        }
    }
    ctx->pc = 0x2AC3B4u;
label_2ac3b4:
    // 0x2ac3b4: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x2ac3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2ac3b8: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x2ac3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x2ac3bc: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x2ac3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2ac3c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC3C0u;
    {
        const bool branch_taken_0x2ac3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC3C0u;
        // 0x2ac3c4: 0xae230040  sw          $v1, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac3c0) {
            ctx->pc = 0x2AC3D8u;
            goto label_2ac3d8;
        }
    }
    ctx->pc = 0x2AC3C8u;
label_2ac3c8:
    // 0x2ac3c8: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2ac3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x2ac3cc: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x2ac3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x2ac3d0: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x2ac3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x2ac3d4: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x2ac3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_2ac3d8:
    // 0x2ac3d8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2ac3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2ac3dc: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2AC3DCu;
    {
        const bool branch_taken_0x2ac3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC3DCu;
        // 0x2ac3e0: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac3dc) {
            ctx->pc = 0x2AC558u;
            goto label_2ac558;
        }
    }
    ctx->pc = 0x2AC3E4u;
    // 0x2ac3e4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2ac3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2ac3e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac3ec: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2ac3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ac3f0: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x2ac3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x2ac3f4: 0x23942  srl         $a3, $v0, 5
    ctx->pc = 0x2ac3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2ac3f8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ac3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac3fc: 0x78080  sll         $s0, $a3, 2
    ctx->pc = 0x2ac3fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ac400: 0xae23006c  sw          $v1, 0x6C($s1)
    ctx->pc = 0x2ac400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
    // 0x2ac404: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2AC404u;
    SET_GPR_U32(ctx, 31, 0x2AC40Cu);
    ctx->pc = 0x2AC408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC404u;
    // 0x2ac408: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2AC404u, 0x2AC40Cu)) {
        return;
    }
    ctx->pc = 0x2AC40Cu;
label_2ac40c:
    // 0x2ac40c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2ac40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ac410: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ac410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac414: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2ac414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2ac418: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2ac418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2ac41c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2ac41cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ac420: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x2ac420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
    // 0x2ac424: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ac424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ac428: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ac428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ac42c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ac42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ac430: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2AC430u;
    {
        const bool branch_taken_0x2ac430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC430u;
        // 0x2ac434: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac430) {
            ctx->pc = 0x2AC50Cu;
            goto label_2ac50c;
        }
    }
    ctx->pc = 0x2AC438u;
    // 0x2ac438: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2ac438u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac43c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ac43cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac440: 0x19400013  blez        $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x2AC440u;
    {
        const bool branch_taken_0x2ac440 = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x2AC444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC440u;
        // 0x2ac444: 0x31430003  andi        $v1, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac440) {
            ctx->pc = 0x2AC490u;
            goto label_2ac490;
        }
    }
    ctx->pc = 0x2AC448u;
    // 0x2ac448: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2AC448u;
    {
        const bool branch_taken_0x2ac448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac448) {
            ctx->pc = 0x2AC44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC448u;
            // 0x2ac44c: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC4B4u;
            goto label_2ac4b4;
        }
    }
    ctx->pc = 0x2AC450u;
    // 0x2ac450: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2ac450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ac454: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2AC454u;
    {
        const bool branch_taken_0x2ac454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac454) {
            ctx->pc = 0x2AC458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC454u;
            // 0x2ac458: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC494u;
            goto label_2ac494;
        }
    }
    ctx->pc = 0x2AC45Cu;
    // 0x2ac45c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2ac45cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ac460: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AC460u;
    {
        const bool branch_taken_0x2ac460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac460) {
            ctx->pc = 0x2AC464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC460u;
            // 0x2ac464: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC47Cu;
            goto label_2ac47c;
        }
    }
    ctx->pc = 0x2AC468u;
    // 0x2ac468: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x2ac468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2ac46c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x2ac46cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ac470: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2ac470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2ac474: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ac474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac478: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2ac478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2ac47c:
    // 0x2ac47c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2ac47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2ac480: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2ac480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2ac484: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x2ac484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2ac488: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x2ac488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2ac48c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2ac48cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_2ac490:
    // 0x2ac490: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2ac490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2ac494:
    // 0x2ac494: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2ac494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2ac498: 0xea482b  sltu        $t1, $a3, $t2
    ctx->pc = 0x2ac498u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2ac49c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2ac49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2ac4a0: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x2ac4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2ac4a4: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x2ac4a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2ac4a8: 0x11200018  beqz        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2AC4A8u;
    {
        const bool branch_taken_0x2ac4a8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC4A8u;
        // 0x2ac4ac: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac4a8) {
            ctx->pc = 0x2AC50Cu;
            goto label_2ac50c;
        }
    }
    ctx->pc = 0x2AC4B0u;
label_2ac4b0:
    // 0x2ac4b0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2ac4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2ac4b4:
    // 0x2ac4b4: 0x25040008  addiu       $a0, $t0, 0x8
    ctx->pc = 0x2ac4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2ac4b8: 0x25050010  addiu       $a1, $t0, 0x10
    ctx->pc = 0x2ac4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2ac4bc: 0x25060018  addiu       $a2, $t0, 0x18
    ctx->pc = 0x2ac4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
    // 0x2ac4c0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2ac4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2ac4c4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2ac4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2ac4c8: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x2ac4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2ac4cc: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x2ac4ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x2ac4d0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2ac4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2ac4d4: 0xea482b  sltu        $t1, $a3, $t2
    ctx->pc = 0x2ac4d4u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2ac4d8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2ac4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2ac4dc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ac4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ac4e0: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x2ac4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2ac4e4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2ac4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2ac4e8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2ac4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2ac4ec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2ac4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ac4f0: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x2ac4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2ac4f4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2ac4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2ac4f8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2ac4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2ac4fc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2ac4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ac500: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x2ac500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2ac504: 0x1520ffea  bnez        $t1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2AC504u;
    {
        const bool branch_taken_0x2ac504 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC504u;
        // 0x2ac508: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac504) {
            ctx->pc = 0x2AC4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ac4b0;
        }
    }
    ctx->pc = 0x2AC50Cu;
label_2ac50c:
    // 0x2ac50c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2ac50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2ac510: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2ac510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2ac514: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x2ac514u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ac518: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac51c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ac51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ac520: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x2ac520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2ac524: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2ac524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2ac528: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2ac528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac52c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2ac52cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ac530: 0xae270020  sw          $a3, 0x20($s1)
    ctx->pc = 0x2ac530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 7));
    // 0x2ac534: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2ac534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2ac538: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2AC538u;
    SET_GPR_U32(ctx, 31, 0x2AC540u);
    ctx->pc = 0x2AC53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC538u;
    // 0x2ac53c: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2AC538u, 0x2AC540u)) {
        return;
    }
    ctx->pc = 0x2AC540u;
label_2ac540:
    // 0x2ac540: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2ac540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2ac544: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2ac544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ac548: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ac548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ac54c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ac54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ac550: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC550u;
    {
        const bool branch_taken_0x2ac550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC550u;
        // 0x2ac554: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac550) {
            ctx->pc = 0x2AC564u;
            goto label_2ac564;
        }
    }
    ctx->pc = 0x2AC558u;
label_2ac558:
    // 0x2ac558: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x2ac558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x2ac55c: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2ac55cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2ac560: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x2ac560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_2ac564:
    // 0x2ac564: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2ac564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2ac568: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac56c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2ac56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ac570: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x2ac570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x2ac574: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac578: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x2ac578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x2ac57c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x2ac57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2ac580: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x2ac580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x2ac584: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x2ac584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    // 0x2ac588: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x2ac588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2ac58c: 0xc0ad290  jal         func_2B4A40
    ctx->pc = 0x2AC58Cu;
    SET_GPR_U32(ctx, 31, 0x2AC594u);
    ctx->pc = 0x2AC590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC58Cu;
    // 0x2ac590: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A40u, 0x2AC58Cu, 0x2AC594u)) {
        return;
    }
    ctx->pc = 0x2AC594u;
label_2ac594:
    // 0x2ac594: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2ac594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2ac598: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ac598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac59c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2ac59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ac5a0: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2ac5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ac5a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ac5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ac5a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2ac5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ac5ac: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ac5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ac5b0: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x2ac5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ac5b4: 0xae240078  sw          $a0, 0x78($s1)
    ctx->pc = 0x2ac5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 4));
    // 0x2ac5b8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2ac5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2ac5bc: 0xae260080  sw          $a2, 0x80($s1)
    ctx->pc = 0x2ac5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 6));
    // 0x2ac5c0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x2ac5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x2ac5c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ac5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ac5c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ac5c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac5cc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2ac5ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac5d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac5d4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2ac5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ac5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC5D8u;
        // 0x2ac5dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC5E0u;
}
