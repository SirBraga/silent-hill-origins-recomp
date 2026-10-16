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

// Function: sub_00247AA8
// Address: 0x247aa8 - 0x247cf8
void sub_00247AA8_0x247aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247AA8_0x247aa8");
#endif

    switch (ctx->pc) {
        case 0x247b30u: goto label_247b30;
        case 0x247b38u: goto label_247b38;
        case 0x247b44u: goto label_247b44;
        case 0x247b60u: goto label_247b60;
        case 0x247b7cu: goto label_247b7c;
        case 0x247b8cu: goto label_247b8c;
        case 0x247b98u: goto label_247b98;
        case 0x247bacu: goto label_247bac;
        case 0x247bd4u: goto label_247bd4;
        case 0x247bf0u: goto label_247bf0;
        case 0x247bfcu: goto label_247bfc;
        case 0x247c28u: goto label_247c28;
        case 0x247c38u: goto label_247c38;
        case 0x247c48u: goto label_247c48;
        case 0x247c58u: goto label_247c58;
        case 0x247c68u: goto label_247c68;
        case 0x247c80u: goto label_247c80;
        case 0x247c90u: goto label_247c90;
        case 0x247ca0u: goto label_247ca0;
        case 0x247cb0u: goto label_247cb0;
        case 0x247cb8u: goto label_247cb8;
        case 0x247cc0u: goto label_247cc0;
        default: break;
    }

    ctx->pc = 0x247aa8u;

    // 0x247aa8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x247aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x247aac: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x247aacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x247ab0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x247ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x247ab4: 0xdc4234c8  ld          $v0, 0x34C8($v0)
    ctx->pc = 0x247ab4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34C8u));
    // 0x247ab8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x247ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x247abc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x247abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x247ac0: 0x21c3b  dsra        $v1, $v0, 16
    ctx->pc = 0x247ac0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 2) >> 16);
    // 0x247ac4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x247ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x247ac8: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x247ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x247acc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x247accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x247ad0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x247ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x247ad4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x247ad4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x247ad8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x247ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x247adc: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x247adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x247ae0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x247ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x247ae4: 0x2a140  sll         $s4, $v0, 5
    ctx->pc = 0x247ae4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x247ae8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x247ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x247aec: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x247aecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x247af0: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x247af0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x247af4: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x247af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x247af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247afc: 0x8ca60fc8  lw          $a2, 0xFC8($a1)
    ctx->pc = 0x247afcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4040)));
    // 0x247b00: 0x8cc50060  lw          $a1, 0x60($a2)
    ctx->pc = 0x247b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x247b04: 0x8cb50010  lw          $s5, 0x10($a1)
    ctx->pc = 0x247b04u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x247b08: 0x1480006d  bnez        $a0, . + 4 + (0x6D << 2)
    ctx->pc = 0x247B08u;
    {
        const bool branch_taken_0x247b08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x247B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B08u;
        // 0x247b0c: 0x8cb2000c  lw          $s2, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b08) {
            ctx->pc = 0x247CC0u;
            goto label_247cc0;
        }
    }
    ctx->pc = 0x247B10u;
    // 0x247b10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x247b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x247b14: 0x2643000f  addiu       $v1, $s2, 0xF
    ctx->pc = 0x247b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x247b18: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x247b18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x247b1c: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x247b1cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18));
    // 0x247b20: 0x39903  sra         $s3, $v1, 4
    ctx->pc = 0x247b20u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 4));
    // 0x247b24: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x247b24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x247b28: 0xc091e72  jal         func_2479C8
    ctx->pc = 0x247B28u;
    SET_GPR_U32(ctx, 31, 0x247B30u);
    ctx->pc = 0x247B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247B28u;
    // 0x247b2c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2479C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2479C8u, 0x247B28u, 0x247B30u)) {
        return;
    }
    ctx->pc = 0x247B30u;
label_247b30:
    // 0x247b30: 0xc091e4c  jal         func_247930
    ctx->pc = 0x247B30u;
    SET_GPR_U32(ctx, 31, 0x247B38u);
    ctx->pc = 0x247B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247B30u;
    // 0x247b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247930u, 0x247B30u, 0x247B38u)) {
        return;
    }
    ctx->pc = 0x247B38u;
label_247b38:
    // 0x247b38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247b3c: 0xc091e66  jal         func_247998
    ctx->pc = 0x247B3Cu;
    SET_GPR_U32(ctx, 31, 0x247B44u);
    ctx->pc = 0x247B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247B3Cu;
    // 0x247b40: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247B3Cu, 0x247B44u)) {
        return;
    }
    ctx->pc = 0x247B44u;
label_247b44:
    // 0x247b44: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x247b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247b48: 0x152840  sll         $a1, $s5, 1
    ctx->pc = 0x247b48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x247b4c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x247b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x247b50: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x247b50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x247b54: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x247b54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x247b58: 0xc091e66  jal         func_247998
    ctx->pc = 0x247B58u;
    SET_GPR_U32(ctx, 31, 0x247B60u);
    ctx->pc = 0x247B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247B58u;
    // 0x247b5c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247B58u, 0x247B60u)) {
        return;
    }
    ctx->pc = 0x247B60u;
label_247b60:
    // 0x247b60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x247b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x247b64: 0xdc4234c0  ld          $v0, 0x34C0($v0)
    ctx->pc = 0x247b64u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34C0u));
    // 0x247b68: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x247b68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x247b6c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x247b6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x247b70: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x247b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x247b74: 0xc091e66  jal         func_247998
    ctx->pc = 0x247B74u;
    SET_GPR_U32(ctx, 31, 0x247B7Cu);
    ctx->pc = 0x247B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247B74u;
    // 0x247b78: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247B74u, 0x247B7Cu)) {
        return;
    }
    ctx->pc = 0x247B7Cu;
label_247b7c:
    // 0x247b7c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x247b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x247b80: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x247b80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x247b84: 0xc091e66  jal         func_247998
    ctx->pc = 0x247B84u;
    SET_GPR_U32(ctx, 31, 0x247B8Cu);
    ctx->pc = 0x247B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247B84u;
    // 0x247b88: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247B84u, 0x247B8Cu)) {
        return;
    }
    ctx->pc = 0x247B8Cu;
label_247b8c:
    // 0x247b8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x247b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247b90: 0xc091e66  jal         func_247998
    ctx->pc = 0x247B90u;
    SET_GPR_U32(ctx, 31, 0x247B98u);
    ctx->pc = 0x247B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247B90u;
    // 0x247b94: 0x24050116  addiu       $a1, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247B90u, 0x247B98u)) {
        return;
    }
    ctx->pc = 0x247B98u;
label_247b98:
    // 0x247b98: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x247b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x247b9c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x247b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x247ba0: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x247ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x247ba4: 0xc091e66  jal         func_247998
    ctx->pc = 0x247BA4u;
    SET_GPR_U32(ctx, 31, 0x247BACu);
    ctx->pc = 0x247BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247BA4u;
    // 0x247ba8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247BA4u, 0x247BACu)) {
        return;
    }
    ctx->pc = 0x247BACu;
label_247bac:
    // 0x247bac: 0x111438  dsll        $v0, $s1, 16
    ctx->pc = 0x247bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 16);
    // 0x247bb0: 0x14297a  dsrl        $a1, $s4, 5
    ctx->pc = 0x247bb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) >> 5);
    // 0x247bb4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x247bb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x247bb8: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x247bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x247bbc: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x247bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x247bc0: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x247bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x247bc4: 0x31b38  dsll        $v1, $v1, 12
    ctx->pc = 0x247bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 12);
    // 0x247bc8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x247bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x247bcc: 0xc091e66  jal         func_247998
    ctx->pc = 0x247BCCu;
    SET_GPR_U32(ctx, 31, 0x247BD4u);
    ctx->pc = 0x247BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247BCCu;
    // 0x247bd0: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247BCCu, 0x247BD4u)) {
        return;
    }
    ctx->pc = 0x247BD4u;
label_247bd4:
    // 0x247bd4: 0x118bb8  dsll        $s1, $s1, 14
    ctx->pc = 0x247bd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 14);
    // 0x247bd8: 0x3405ea8a  ori         $a1, $zero, 0xEA8A
    ctx->pc = 0x247bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60042);
    // 0x247bdc: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x247bdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x247be0: 0x2918825  or          $s1, $s4, $s1
    ctx->pc = 0x247be0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) | GPR_U64(ctx, 17));
    // 0x247be4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x247be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x247be8: 0xc091e66  jal         func_247998
    ctx->pc = 0x247BE8u;
    SET_GPR_U32(ctx, 31, 0x247BF0u);
    ctx->pc = 0x247BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247BE8u;
    // 0x247bec: 0x2252825  or          $a1, $s1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247BE8u, 0x247BF0u)) {
        return;
    }
    ctx->pc = 0x247BF0u;
label_247bf0:
    // 0x247bf0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x247bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x247bf4: 0xc091e66  jal         func_247998
    ctx->pc = 0x247BF4u;
    SET_GPR_U32(ctx, 31, 0x247BFCu);
    ctx->pc = 0x247BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247BF4u;
    // 0x247bf8: 0x24050201  addiu       $a1, $zero, 0x201 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247BF4u, 0x247BFCu)) {
        return;
    }
    ctx->pc = 0x247BFCu;
label_247bfc:
    // 0x247bfc: 0x1a60001c  blez        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x247BFCu;
    {
        const bool branch_taken_0x247bfc = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x247C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247BFCu;
        // 0x247c00: 0x151140  sll         $v0, $s5, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247bfc) {
            ctx->pc = 0x247C70u;
            goto label_247c70;
        }
    }
    ctx->pc = 0x247C04u;
    // 0x247c04: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x247c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247c08: 0x2b438  dsll        $s6, $v0, 16
    ctx->pc = 0x247c08u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << 16);
    // 0x247c0c: 0x3c170008  lui         $s7, 0x8
    ctx->pc = 0x247c0cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)8 << 16));
    // 0x247c10: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x247c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x247c14: 0x24140100  addiu       $s4, $zero, 0x100
    ctx->pc = 0x247c14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x247c18: 0x2ac38  dsll        $s5, $v0, 16
    ctx->pc = 0x247c18u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << 16);
    // 0x247c1c: 0x24130088  addiu       $s3, $zero, 0x88
    ctx->pc = 0x247c1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x247c20: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x247c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x247c24: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x247c24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_247c28:
    // 0x247c28: 0x2372825  or          $a1, $s1, $s7
    ctx->pc = 0x247c28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 23));
    // 0x247c2c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x247c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x247c30: 0xc091e66  jal         func_247998
    ctx->pc = 0x247C30u;
    SET_GPR_U32(ctx, 31, 0x247C38u);
    ctx->pc = 0x247C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247C30u;
    // 0x247c34: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247C30u, 0x247C38u)) {
        return;
    }
    ctx->pc = 0x247C38u;
label_247c38:
    // 0x247c38: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x247c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x247c3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x247c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247c40: 0xc091e66  jal         func_247998
    ctx->pc = 0x247C40u;
    SET_GPR_U32(ctx, 31, 0x247C48u);
    ctx->pc = 0x247C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247C40u;
    // 0x247c44: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247C40u, 0x247C48u)) {
        return;
    }
    ctx->pc = 0x247C48u;
label_247c48:
    // 0x247c48: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x247c48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x247c4c: 0x2752825  or          $a1, $s3, $s5
    ctx->pc = 0x247c4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 21));
    // 0x247c50: 0xc091e66  jal         func_247998
    ctx->pc = 0x247C50u;
    SET_GPR_U32(ctx, 31, 0x247C58u);
    ctx->pc = 0x247C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247C50u;
    // 0x247c54: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247C50u, 0x247C58u)) {
        return;
    }
    ctx->pc = 0x247C58u;
label_247c58:
    // 0x247c58: 0x26730100  addiu       $s3, $s3, 0x100
    ctx->pc = 0x247c58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x247c5c: 0x2962825  or          $a1, $s4, $s6
    ctx->pc = 0x247c5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | GPR_U64(ctx, 22));
    // 0x247c60: 0xc091e66  jal         func_247998
    ctx->pc = 0x247C60u;
    SET_GPR_U32(ctx, 31, 0x247C68u);
    ctx->pc = 0x247C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247C60u;
    // 0x247c64: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247C60u, 0x247C68u)) {
        return;
    }
    ctx->pc = 0x247C68u;
label_247c68:
    // 0x247c68: 0x1600ffef  bnez        $s0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x247C68u;
    {
        const bool branch_taken_0x247c68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x247C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C68u;
        // 0x247c6c: 0x26940100  addiu       $s4, $s4, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247c68) {
            ctx->pc = 0x247C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247c28;
        }
    }
    ctx->pc = 0x247C70u;
label_247c70:
    // 0x247c70: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x247c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x247c74: 0xdca534d8  ld          $a1, 0x34D8($a1)
    ctx->pc = 0x247c74u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6B34D8u));
    // 0x247c78: 0xc091e66  jal         func_247998
    ctx->pc = 0x247C78u;
    SET_GPR_U32(ctx, 31, 0x247C80u);
    ctx->pc = 0x247C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247C78u;
    // 0x247c7c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247C78u, 0x247C80u)) {
        return;
    }
    ctx->pc = 0x247C80u;
label_247c80:
    // 0x247c80: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x247c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x247c84: 0xdca53500  ld          $a1, 0x3500($a1)
    ctx->pc = 0x247c84u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6B3500u));
    // 0x247c88: 0xc091e66  jal         func_247998
    ctx->pc = 0x247C88u;
    SET_GPR_U32(ctx, 31, 0x247C90u);
    ctx->pc = 0x247C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247C88u;
    // 0x247c8c: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247C88u, 0x247C90u)) {
        return;
    }
    ctx->pc = 0x247C90u;
label_247c90:
    // 0x247c90: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x247c90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x247c94: 0xdca534c8  ld          $a1, 0x34C8($a1)
    ctx->pc = 0x247c94u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6B34C8u));
    // 0x247c98: 0xc091e66  jal         func_247998
    ctx->pc = 0x247C98u;
    SET_GPR_U32(ctx, 31, 0x247CA0u);
    ctx->pc = 0x247C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247C98u;
    // 0x247c9c: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247C98u, 0x247CA0u)) {
        return;
    }
    ctx->pc = 0x247CA0u;
label_247ca0:
    // 0x247ca0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x247ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x247ca4: 0xdca534e0  ld          $a1, 0x34E0($a1)
    ctx->pc = 0x247ca4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6B34E0u));
    // 0x247ca8: 0xc091e66  jal         func_247998
    ctx->pc = 0x247CA8u;
    SET_GPR_U32(ctx, 31, 0x247CB0u);
    ctx->pc = 0x247CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247CA8u;
    // 0x247cac: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247CA8u, 0x247CB0u)) {
        return;
    }
    ctx->pc = 0x247CB0u;
label_247cb0:
    // 0x247cb0: 0xc091e64  jal         func_247990
    ctx->pc = 0x247CB0u;
    SET_GPR_U32(ctx, 31, 0x247CB8u);
    ctx->pc = 0x247990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247990u, 0x247CB0u, 0x247CB8u)) {
        return;
    }
    ctx->pc = 0x247CB8u;
label_247cb8:
    // 0x247cb8: 0xc091e72  jal         func_2479C8
    ctx->pc = 0x247CB8u;
    SET_GPR_U32(ctx, 31, 0x247CC0u);
    ctx->pc = 0x2479C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2479C8u, 0x247CB8u, 0x247CC0u)) {
        return;
    }
    ctx->pc = 0x247CC0u;
label_247cc0:
    // 0x247cc0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x247cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x247cc4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x247cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x247cc8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x247cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x247ccc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x247cccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x247cd0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x247cd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x247cd4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x247cd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247cd8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x247cd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247cdc: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x247cdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247ce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247ce4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x247ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x247ce8: 0xac204138  sw          $zero, 0x4138($at)
    ctx->pc = 0x247ce8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B4138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4138u, _value); } while (0);
    // 0x247cec: 0x3e00008  jr          $ra
    ctx->pc = 0x247CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247CECu;
        // 0x247cf0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247CF4u;
    // 0x247cf4: 0x0  nop
    ctx->pc = 0x247cf4u;
    // NOP
    ctx->pc = 0x247cf8u;
}
