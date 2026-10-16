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

// Function: sub_001E7AA8
// Address: 0x1e7aa8 - 0x1e7ca0
void sub_001E7AA8_0x1e7aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7AA8_0x1e7aa8");
#endif

    switch (ctx->pc) {
        case 0x1e7ae4u: goto label_1e7ae4;
        case 0x1e7af4u: goto label_1e7af4;
        case 0x1e7b00u: goto label_1e7b00;
        case 0x1e7b1cu: goto label_1e7b1c;
        case 0x1e7b34u: goto label_1e7b34;
        case 0x1e7b44u: goto label_1e7b44;
        case 0x1e7b50u: goto label_1e7b50;
        case 0x1e7b68u: goto label_1e7b68;
        case 0x1e7ba8u: goto label_1e7ba8;
        case 0x1e7bb4u: goto label_1e7bb4;
        case 0x1e7bc8u: goto label_1e7bc8;
        case 0x1e7bf8u: goto label_1e7bf8;
        case 0x1e7c08u: goto label_1e7c08;
        case 0x1e7c24u: goto label_1e7c24;
        case 0x1e7c34u: goto label_1e7c34;
        case 0x1e7c44u: goto label_1e7c44;
        case 0x1e7c54u: goto label_1e7c54;
        case 0x1e7c60u: goto label_1e7c60;
        case 0x1e7c6cu: goto label_1e7c6c;
        case 0x1e7c74u: goto label_1e7c74;
        default: break;
    }

    ctx->pc = 0x1e7aa8u;

    // 0x1e7aa8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e7aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e7aac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e7aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e7ab0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e7ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e7ab4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e7ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ab8: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1e7ab8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1e7abc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e7abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ac0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1e7ac0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1e7ac4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1e7ac4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1e7ac8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e7ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e7acc: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1e7accu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1e7ad0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e7ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1e7ad4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e7ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7adc: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E7ADCu;
    SET_GPR_U32(ctx, 31, 0x1E7AE4u);
    ctx->pc = 0x1E7AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7ADCu;
    // 0x1e7ae0: 0x3c12006b  lui         $s2, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E7ADCu, 0x1E7AE4u)) {
        return;
    }
    ctx->pc = 0x1E7AE4u;
label_1e7ae4:
    // 0x1e7ae4: 0x3c13006b  lui         $s3, 0x6B
    ctx->pc = 0x1e7ae4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    // 0x1e7ae8: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1e7ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1e7aec: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7AECu;
    SET_GPR_U32(ctx, 31, 0x1E7AF4u);
    ctx->pc = 0x1E7AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7AECu;
    // 0x1e7af0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7AECu, 0x1E7AF4u)) {
        return;
    }
    ctx->pc = 0x1E7AF4u;
label_1e7af4:
    // 0x1e7af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e7af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7af8: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7AF8u;
    SET_GPR_U32(ctx, 31, 0x1E7B00u);
    ctx->pc = 0x1E7AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7AF8u;
    // 0x1e7afc: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7AF8u, 0x1E7B00u)) {
        return;
    }
    ctx->pc = 0x1E7B00u;
label_1e7b00:
    // 0x1e7b00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e7b04: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e7b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e7b08: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1e7b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e7b0c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e7b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e7b10: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x1e7b10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e7b14: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7B14u;
    SET_GPR_U32(ctx, 31, 0x1E7B1Cu);
    ctx->pc = 0x1E7B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7B14u;
    // 0x1e7b18: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7B14u, 0x1E7B1Cu)) {
        return;
    }
    ctx->pc = 0x1E7B1Cu;
label_1e7b1c:
    // 0x1e7b1c: 0xde4234c0  ld          $v0, 0x34C0($s2)
    ctx->pc = 0x1e7b1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 13504)));
    // 0x1e7b20: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1e7b20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7b24: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x1e7b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x1e7b28: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x1e7b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1e7b2c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7B2Cu;
    SET_GPR_U32(ctx, 31, 0x1E7B34u);
    ctx->pc = 0x1E7B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7B2Cu;
    // 0x1e7b30: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7B2Cu, 0x1E7B34u)) {
        return;
    }
    ctx->pc = 0x1E7B34u;
label_1e7b34:
    // 0x1e7b34: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1e7b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1e7b38: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x1e7b38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x1e7b3c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7B3Cu;
    SET_GPR_U32(ctx, 31, 0x1E7B44u);
    ctx->pc = 0x1E7B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7B3Cu;
    // 0x1e7b40: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7B3Cu, 0x1E7B44u)) {
        return;
    }
    ctx->pc = 0x1E7B44u;
label_1e7b44:
    // 0x1e7b44: 0x24050201  addiu       $a1, $zero, 0x201
    ctx->pc = 0x1e7b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x1e7b48: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7B48u;
    SET_GPR_U32(ctx, 31, 0x1E7B50u);
    ctx->pc = 0x1E7B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7B48u;
    // 0x1e7b4c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7B48u, 0x1E7B50u)) {
        return;
    }
    ctx->pc = 0x1E7B50u;
label_1e7b50:
    // 0x1e7b50: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1e7b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e7b54: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1e7b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1e7b58: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x1e7b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1e7b5c: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x1e7b5cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x1e7b60: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7B60u;
    SET_GPR_U32(ctx, 31, 0x1E7B68u);
    ctx->pc = 0x1E7B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7B60u;
    // 0x1e7b64: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7B60u, 0x1E7B68u)) {
        return;
    }
    ctx->pc = 0x1E7B68u;
label_1e7b68:
    // 0x1e7b68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e7b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e7b6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e7b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e7b70: 0xde6534c8  ld          $a1, 0x34C8($s3)
    ctx->pc = 0x1e7b70u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 13512)));
    // 0x1e7b74: 0x3406cc80  ori         $a2, $zero, 0xCC80
    ctx->pc = 0x1e7b74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52352);
    // 0x1e7b78: 0x634f8  dsll        $a2, $a2, 19
    ctx->pc = 0x1e7b78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 19);
    // 0x1e7b7c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1e7b7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e7b80: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x1e7b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x1e7b84: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1e7b84u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1e7b88: 0x30a501ff  andi        $a1, $a1, 0x1FF
    ctx->pc = 0x1e7b88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)511);
    // 0x1e7b8c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1e7b8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1e7b90: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x1e7b90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x1e7b94: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x1e7b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x1e7b98: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1e7b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e7b9c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1e7b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1e7ba0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7BA0u;
    SET_GPR_U32(ctx, 31, 0x1E7BA8u);
    ctx->pc = 0x1E7BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7BA0u;
    // 0x1e7ba4: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7BA0u, 0x1E7BA8u)) {
        return;
    }
    ctx->pc = 0x1E7BA8u;
label_1e7ba8:
    // 0x1e7ba8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e7ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7bac: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7BACu;
    SET_GPR_U32(ctx, 31, 0x1E7BB4u);
    ctx->pc = 0x1E7BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7BACu;
    // 0x1e7bb0: 0x24050116  addiu       $a1, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7BACu, 0x1E7BB4u)) {
        return;
    }
    ctx->pc = 0x1E7BB4u;
label_1e7bb4:
    // 0x1e7bb4: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x1e7bb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1e7bb8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e7bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e7bbc: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x1e7bbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x1e7bc0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7BC0u;
    SET_GPR_U32(ctx, 31, 0x1E7BC8u);
    ctx->pc = 0x1E7BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7BC0u;
    // 0x1e7bc4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7BC0u, 0x1E7BC8u)) {
        return;
    }
    ctx->pc = 0x1E7BC8u;
label_1e7bc8:
    // 0x1e7bc8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1e7bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1e7bcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e7bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7bd0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e7bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e7bd4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1e7bd4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1e7bd8: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1e7bd8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1e7bdc: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e7bdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e7be0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1e7be0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e7be4: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e7be4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e7be8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e7be8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e7bec: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e7becu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e7bf0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7BF0u;
    SET_GPR_U32(ctx, 31, 0x1E7BF8u);
    ctx->pc = 0x1E7BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7BF0u;
    // 0x1e7bf4: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7BF0u, 0x1E7BF8u)) {
        return;
    }
    ctx->pc = 0x1E7BF8u;
label_1e7bf8:
    // 0x1e7bf8: 0x1029c0  sll         $a1, $s0, 7
    ctx->pc = 0x1e7bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x1e7bfc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e7bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e7c00: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7C00u;
    SET_GPR_U32(ctx, 31, 0x1E7C08u);
    ctx->pc = 0x1E7C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7C00u;
    // 0x1e7c04: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7C00u, 0x1E7C08u)) {
        return;
    }
    ctx->pc = 0x1E7C08u;
label_1e7c08:
    // 0x1e7c08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e7c08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e7c0c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x1e7c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x1e7c10: 0x1081c0  sll         $s0, $s0, 7
    ctx->pc = 0x1e7c10u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x1e7c14: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e7c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e7c18: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1e7c18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1e7c1c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7C1Cu;
    SET_GPR_U32(ctx, 31, 0x1E7C24u);
    ctx->pc = 0x1E7C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7C1Cu;
    // 0x1e7c20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7C1Cu, 0x1E7C24u)) {
        return;
    }
    ctx->pc = 0x1E7C24u;
label_1e7c24:
    // 0x1e7c24: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e7c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e7c28: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1e7c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1e7c2c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7C2Cu;
    SET_GPR_U32(ctx, 31, 0x1E7C34u);
    ctx->pc = 0x1E7C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7C2Cu;
    // 0x1e7c30: 0xdc4534d8  ld          $a1, 0x34D8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7C2Cu, 0x1E7C34u)) {
        return;
    }
    ctx->pc = 0x1E7C34u;
label_1e7c34:
    // 0x1e7c34: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e7c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e7c38: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e7c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e7c3c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7C3Cu;
    SET_GPR_U32(ctx, 31, 0x1E7C44u);
    ctx->pc = 0x1E7C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7C3Cu;
    // 0x1e7c40: 0xdc453500  ld          $a1, 0x3500($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7C3Cu, 0x1E7C44u)) {
        return;
    }
    ctx->pc = 0x1E7C44u;
label_1e7c44:
    // 0x1e7c44: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e7c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e7c48: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e7c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e7c4c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7C4Cu;
    SET_GPR_U32(ctx, 31, 0x1E7C54u);
    ctx->pc = 0x1E7C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7C4Cu;
    // 0x1e7c50: 0xdc4534e0  ld          $a1, 0x34E0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7C4Cu, 0x1E7C54u)) {
        return;
    }
    ctx->pc = 0x1E7C54u;
label_1e7c54:
    // 0x1e7c54: 0xde4534c0  ld          $a1, 0x34C0($s2)
    ctx->pc = 0x1e7c54u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 13504)));
    // 0x1e7c58: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7C58u;
    SET_GPR_U32(ctx, 31, 0x1E7C60u);
    ctx->pc = 0x1E7C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7C58u;
    // 0x1e7c5c: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7C58u, 0x1E7C60u)) {
        return;
    }
    ctx->pc = 0x1E7C60u;
label_1e7c60:
    // 0x1e7c60: 0xde6534c8  ld          $a1, 0x34C8($s3)
    ctx->pc = 0x1e7c60u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 13512)));
    // 0x1e7c64: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7C64u;
    SET_GPR_U32(ctx, 31, 0x1E7C6Cu);
    ctx->pc = 0x1E7C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7C64u;
    // 0x1e7c68: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7C64u, 0x1E7C6Cu)) {
        return;
    }
    ctx->pc = 0x1E7C6Cu;
label_1e7c6c:
    // 0x1e7c6c: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E7C6Cu;
    SET_GPR_U32(ctx, 31, 0x1E7C74u);
    ctx->pc = 0x1E7C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7C6Cu;
    // 0x1e7c70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E7C6Cu, 0x1E7C74u)) {
        return;
    }
    ctx->pc = 0x1E7C74u;
label_1e7c74:
    // 0x1e7c74: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e7c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7c78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e7c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c7c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e7c7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7c80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e7c80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7c84: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e7c84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7c8c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1e7c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e7c90: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1e7c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e7c94: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C94u;
        // 0x1e7c98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7C9Cu;
    // 0x1e7c9c: 0x0  nop
    ctx->pc = 0x1e7c9cu;
    // NOP
    ctx->pc = 0x1e7ca0u;
}
