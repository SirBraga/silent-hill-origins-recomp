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

// Function: sub_00147A88
// Address: 0x147a88 - 0x147c18
void sub_00147A88_0x147a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147A88_0x147a88");
#endif

    switch (ctx->pc) {
        case 0x147b1cu: goto label_147b1c;
        case 0x147b24u: goto label_147b24;
        case 0x147b2cu: goto label_147b2c;
        case 0x147b34u: goto label_147b34;
        case 0x147b3cu: goto label_147b3c;
        case 0x147b44u: goto label_147b44;
        case 0x147b50u: goto label_147b50;
        case 0x147b58u: goto label_147b58;
        case 0x147b64u: goto label_147b64;
        case 0x147b6cu: goto label_147b6c;
        case 0x147b7cu: goto label_147b7c;
        case 0x147b88u: goto label_147b88;
        case 0x147b94u: goto label_147b94;
        case 0x147ba0u: goto label_147ba0;
        case 0x147bacu: goto label_147bac;
        case 0x147bb8u: goto label_147bb8;
        case 0x147bc4u: goto label_147bc4;
        case 0x147bd0u: goto label_147bd0;
        case 0x147bdcu: goto label_147bdc;
        case 0x147be8u: goto label_147be8;
        default: break;
    }

    ctx->pc = 0x147a88u;

    // 0x147a88: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x147a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x147a8c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x147a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x147a90: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x147a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x147a94: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x147a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x147a98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x147a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a9c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x147a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x147aa0: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x147aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x147aa4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x147aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x147aa8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x147aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x147aac: 0x24421508  addiu       $v0, $v0, 0x1508
    ctx->pc = 0x147aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5384));
    // 0x147ab0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x147ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x147ab4: 0x246313e8  addiu       $v1, $v1, 0x13E8
    ctx->pc = 0x147ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5096));
    // 0x147ab8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x147ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x147abc: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x147abcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x147ac0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x147ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x147ac4: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x147ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x147ac8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x147ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x147acc: 0x24c613a8  addiu       $a2, $a2, 0x13A8
    ctx->pc = 0x147accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5032));
    // 0x147ad0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x147ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x147ad4: 0x24e71528  addiu       $a3, $a3, 0x1528
    ctx->pc = 0x147ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5416));
    // 0x147ad8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x147ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x147adc: 0x261700f0  addiu       $s7, $s0, 0xF0
    ctx->pc = 0x147adcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x147ae0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x147ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x147ae4: 0x261e00e8  addiu       $fp, $s0, 0xE8
    ctx->pc = 0x147ae4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
    // 0x147ae8: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x147ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x147aec: 0x26160108  addiu       $s6, $s0, 0x108
    ctx->pc = 0x147aecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
    // 0x147af0: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x147af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x147af4: 0x26150110  addiu       $s5, $s0, 0x110
    ctx->pc = 0x147af4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x147af8: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x147af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x147afc: 0x26140118  addiu       $s4, $s0, 0x118
    ctx->pc = 0x147afcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x147b00: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x147b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x147b04: 0x261300f8  addiu       $s3, $s0, 0xF8
    ctx->pc = 0x147b04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    // 0x147b08: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x147b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x147b0c: 0x26120100  addiu       $s2, $s0, 0x100
    ctx->pc = 0x147b0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x147b10: 0xae060084  sw          $a2, 0x84($s0)
    ctx->pc = 0x147b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 6));
    // 0x147b14: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x147B14u;
    SET_GPR_U32(ctx, 31, 0x147B1Cu);
    ctx->pc = 0x147B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B14u;
    // 0x147b18: 0xae070034  sw          $a3, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x147B14u, 0x147B1Cu)) {
        return;
    }
    ctx->pc = 0x147B1Cu;
label_147b1c:
    // 0x147b1c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x147B1Cu;
    SET_GPR_U32(ctx, 31, 0x147B24u);
    ctx->pc = 0x147B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B1Cu;
    // 0x147b20: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x147B1Cu, 0x147B24u)) {
        return;
    }
    ctx->pc = 0x147B24u;
label_147b24:
    // 0x147b24: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x147B24u;
    SET_GPR_U32(ctx, 31, 0x147B2Cu);
    ctx->pc = 0x147B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B24u;
    // 0x147b28: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x147B24u, 0x147B2Cu)) {
        return;
    }
    ctx->pc = 0x147B2Cu;
label_147b2c:
    // 0x147b2c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x147B2Cu;
    SET_GPR_U32(ctx, 31, 0x147B34u);
    ctx->pc = 0x147B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B2Cu;
    // 0x147b30: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x147B2Cu, 0x147B34u)) {
        return;
    }
    ctx->pc = 0x147B34u;
label_147b34:
    // 0x147b34: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x147B34u;
    SET_GPR_U32(ctx, 31, 0x147B3Cu);
    ctx->pc = 0x147B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B34u;
    // 0x147b38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x147B34u, 0x147B3Cu)) {
        return;
    }
    ctx->pc = 0x147B3Cu;
label_147b3c:
    // 0x147b3c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x147B3Cu;
    SET_GPR_U32(ctx, 31, 0x147B44u);
    ctx->pc = 0x147B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B3Cu;
    // 0x147b40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x147B3Cu, 0x147B44u)) {
        return;
    }
    ctx->pc = 0x147B44u;
label_147b44:
    // 0x147b44: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x147b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b48: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x147B48u;
    SET_GPR_U32(ctx, 31, 0x147B50u);
    ctx->pc = 0x147B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B48u;
    // 0x147b4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x147B48u, 0x147B50u)) {
        return;
    }
    ctx->pc = 0x147B50u;
label_147b50:
    // 0x147b50: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x147B50u;
    SET_GPR_U32(ctx, 31, 0x147B58u);
    ctx->pc = 0x147B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B50u;
    // 0x147b54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x147B50u, 0x147B58u)) {
        return;
    }
    ctx->pc = 0x147B58u;
label_147b58:
    // 0x147b58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x147b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b5c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x147B5Cu;
    SET_GPR_U32(ctx, 31, 0x147B64u);
    ctx->pc = 0x147B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B5Cu;
    // 0x147b60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x147B5Cu, 0x147B64u)) {
        return;
    }
    ctx->pc = 0x147B64u;
label_147b64:
    // 0x147b64: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x147B64u;
    SET_GPR_U32(ctx, 31, 0x147B6Cu);
    ctx->pc = 0x147B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B64u;
    // 0x147b68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x147B64u, 0x147B6Cu)) {
        return;
    }
    ctx->pc = 0x147B6Cu;
label_147b6c:
    // 0x147b6c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x147b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x147b70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x147b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b74: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x147B74u;
    SET_GPR_U32(ctx, 31, 0x147B7Cu);
    ctx->pc = 0x147B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B74u;
    // 0x147b78: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x147B74u, 0x147B7Cu)) {
        return;
    }
    ctx->pc = 0x147B7Cu;
label_147b7c:
    // 0x147b7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x147b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b80: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x147B80u;
    SET_GPR_U32(ctx, 31, 0x147B88u);
    ctx->pc = 0x147B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B80u;
    // 0x147b84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x147B80u, 0x147B88u)) {
        return;
    }
    ctx->pc = 0x147B88u;
label_147b88:
    // 0x147b88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x147b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b8c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x147B8Cu;
    SET_GPR_U32(ctx, 31, 0x147B94u);
    ctx->pc = 0x147B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B8Cu;
    // 0x147b90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x147B8Cu, 0x147B94u)) {
        return;
    }
    ctx->pc = 0x147B94u;
label_147b94:
    // 0x147b94: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x147b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b98: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x147B98u;
    SET_GPR_U32(ctx, 31, 0x147BA0u);
    ctx->pc = 0x147B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B98u;
    // 0x147b9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x147B98u, 0x147BA0u)) {
        return;
    }
    ctx->pc = 0x147BA0u;
label_147ba0:
    // 0x147ba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147ba4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x147BA4u;
    SET_GPR_U32(ctx, 31, 0x147BACu);
    ctx->pc = 0x147BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147BA4u;
    // 0x147ba8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x147BA4u, 0x147BACu)) {
        return;
    }
    ctx->pc = 0x147BACu;
label_147bac:
    // 0x147bac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x147bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147bb0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x147BB0u;
    SET_GPR_U32(ctx, 31, 0x147BB8u);
    ctx->pc = 0x147BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147BB0u;
    // 0x147bb4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x147BB0u, 0x147BB8u)) {
        return;
    }
    ctx->pc = 0x147BB8u;
label_147bb8:
    // 0x147bb8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x147bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147bbc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x147BBCu;
    SET_GPR_U32(ctx, 31, 0x147BC4u);
    ctx->pc = 0x147BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147BBCu;
    // 0x147bc0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x147BBCu, 0x147BC4u)) {
        return;
    }
    ctx->pc = 0x147BC4u;
label_147bc4:
    // 0x147bc4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x147bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147bc8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x147BC8u;
    SET_GPR_U32(ctx, 31, 0x147BD0u);
    ctx->pc = 0x147BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147BC8u;
    // 0x147bcc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x147BC8u, 0x147BD0u)) {
        return;
    }
    ctx->pc = 0x147BD0u;
label_147bd0:
    // 0x147bd0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x147bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x147bd4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x147BD4u;
    SET_GPR_U32(ctx, 31, 0x147BDCu);
    ctx->pc = 0x147BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147BD4u;
    // 0x147bd8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x147BD4u, 0x147BDCu)) {
        return;
    }
    ctx->pc = 0x147BDCu;
label_147bdc:
    // 0x147bdc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x147bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147be0: 0xc051e70  jal         func_1479C0
    ctx->pc = 0x147BE0u;
    SET_GPR_U32(ctx, 31, 0x147BE8u);
    ctx->pc = 0x147BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147BE0u;
    // 0x147be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1479C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1479C0u, 0x147BE0u, 0x147BE8u)) {
        return;
    }
    ctx->pc = 0x147BE8u;
label_147be8:
    // 0x147be8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x147be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x147bec: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x147becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x147bf0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x147bf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x147bf4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x147bf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x147bf8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x147bf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x147bfc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x147bfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x147c00: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x147c00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147c04: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x147c04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147c08: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x147c08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147c0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x147c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147c10: 0x3e00008  jr          $ra
    ctx->pc = 0x147C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C10u;
        // 0x147c14: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147C18u;
}
