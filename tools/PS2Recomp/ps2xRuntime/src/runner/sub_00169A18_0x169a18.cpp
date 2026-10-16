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

// Function: sub_00169A18
// Address: 0x169a18 - 0x169b58
void sub_00169A18_0x169a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169A18_0x169a18");
#endif

    switch (ctx->pc) {
        case 0x169a84u: goto label_169a84;
        case 0x169aa0u: goto label_169aa0;
        case 0x169aa8u: goto label_169aa8;
        case 0x169ab0u: goto label_169ab0;
        case 0x169ab8u: goto label_169ab8;
        case 0x169ac4u: goto label_169ac4;
        case 0x169ad0u: goto label_169ad0;
        case 0x169ad8u: goto label_169ad8;
        case 0x169ae4u: goto label_169ae4;
        case 0x169aecu: goto label_169aec;
        case 0x169af8u: goto label_169af8;
        case 0x169b04u: goto label_169b04;
        case 0x169b10u: goto label_169b10;
        case 0x169b1cu: goto label_169b1c;
        case 0x169b28u: goto label_169b28;
        default: break;
    }

    ctx->pc = 0x169a18u;

    // 0x169a18: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x169a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x169a1c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x169a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x169a20: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x169a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x169a24: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x169a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x169a28: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x169a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x169a2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x169a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a30: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x169a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x169a34: 0x3c130070  lui         $s3, 0x70
    ctx->pc = 0x169a34u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)112 << 16));
    // 0x169a38: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x169a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x169a3c: 0x24424338  addiu       $v0, $v0, 0x4338
    ctx->pc = 0x169a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17208));
    // 0x169a40: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x169a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x169a44: 0x24634358  addiu       $v1, $v1, 0x4358
    ctx->pc = 0x169a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17240));
    // 0x169a48: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x169a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x169a4c: 0x26320038  addiu       $s2, $s1, 0x38
    ctx->pc = 0x169a4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x169a50: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x169a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x169a54: 0x26738880  addiu       $s3, $s3, -0x7780
    ctx->pc = 0x169a54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936704));
    // 0x169a58: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x169a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x169a5c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x169a5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a60: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x169a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x169a64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x169a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169a6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x169a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a70: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x169a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x169a74: 0x26370044  addiu       $s7, $s1, 0x44
    ctx->pc = 0x169a74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x169a78: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x169a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x169a7c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x169A7Cu;
    SET_GPR_U32(ctx, 31, 0x169A84u);
    ctx->pc = 0x169A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A7Cu;
    // 0x169a80: 0x2636004c  addiu       $s6, $s1, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x169A7Cu, 0x169A84u)) {
        return;
    }
    ctx->pc = 0x169A84u;
label_169a84:
    // 0x169a84: 0x263500ec  addiu       $s5, $s1, 0xEC
    ctx->pc = 0x169a84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 236));
    // 0x169a88: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x169a88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x169a8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x169a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a90: 0x261046c8  addiu       $s0, $s0, 0x46C8
    ctx->pc = 0x169a90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18120));
    // 0x169a94: 0x263400f4  addiu       $s4, $s1, 0xF4
    ctx->pc = 0x169a94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 244));
    // 0x169a98: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x169A98u;
    SET_GPR_U32(ctx, 31, 0x169AA0u);
    ctx->pc = 0x169A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A98u;
    // 0x169a9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x169A98u, 0x169AA0u)) {
        return;
    }
    ctx->pc = 0x169AA0u;
label_169aa0:
    // 0x169aa0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x169AA0u;
    SET_GPR_U32(ctx, 31, 0x169AA8u);
    ctx->pc = 0x169AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169AA0u;
    // 0x169aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x169AA0u, 0x169AA8u)) {
        return;
    }
    ctx->pc = 0x169AA8u;
label_169aa8:
    // 0x169aa8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x169AA8u;
    SET_GPR_U32(ctx, 31, 0x169AB0u);
    ctx->pc = 0x169AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169AA8u;
    // 0x169aac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x169AA8u, 0x169AB0u)) {
        return;
    }
    ctx->pc = 0x169AB0u;
label_169ab0:
    // 0x169ab0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x169AB0u;
    SET_GPR_U32(ctx, 31, 0x169AB8u);
    ctx->pc = 0x169AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169AB0u;
    // 0x169ab4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x169AB0u, 0x169AB8u)) {
        return;
    }
    ctx->pc = 0x169AB8u;
label_169ab8:
    // 0x169ab8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x169ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169abc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x169ABCu;
    SET_GPR_U32(ctx, 31, 0x169AC4u);
    ctx->pc = 0x169AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169ABCu;
    // 0x169ac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x169ABCu, 0x169AC4u)) {
        return;
    }
    ctx->pc = 0x169AC4u;
label_169ac4:
    // 0x169ac4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x169ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ac8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x169AC8u;
    SET_GPR_U32(ctx, 31, 0x169AD0u);
    ctx->pc = 0x169ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169AC8u;
    // 0x169acc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x169AC8u, 0x169AD0u)) {
        return;
    }
    ctx->pc = 0x169AD0u;
label_169ad0:
    // 0x169ad0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x169AD0u;
    SET_GPR_U32(ctx, 31, 0x169AD8u);
    ctx->pc = 0x169AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169AD0u;
    // 0x169ad4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x169AD0u, 0x169AD8u)) {
        return;
    }
    ctx->pc = 0x169AD8u;
label_169ad8:
    // 0x169ad8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x169ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169adc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x169ADCu;
    SET_GPR_U32(ctx, 31, 0x169AE4u);
    ctx->pc = 0x169AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169ADCu;
    // 0x169ae0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x169ADCu, 0x169AE4u)) {
        return;
    }
    ctx->pc = 0x169AE4u;
label_169ae4:
    // 0x169ae4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x169AE4u;
    SET_GPR_U32(ctx, 31, 0x169AECu);
    ctx->pc = 0x169AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169AE4u;
    // 0x169ae8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x169AE4u, 0x169AECu)) {
        return;
    }
    ctx->pc = 0x169AECu;
label_169aec:
    // 0x169aec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x169aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169af0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x169AF0u;
    SET_GPR_U32(ctx, 31, 0x169AF8u);
    ctx->pc = 0x169AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169AF0u;
    // 0x169af4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x169AF0u, 0x169AF8u)) {
        return;
    }
    ctx->pc = 0x169AF8u;
label_169af8:
    // 0x169af8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x169af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169afc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x169AFCu;
    SET_GPR_U32(ctx, 31, 0x169B04u);
    ctx->pc = 0x169B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169AFCu;
    // 0x169b00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x169AFCu, 0x169B04u)) {
        return;
    }
    ctx->pc = 0x169B04u;
label_169b04:
    // 0x169b04: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x169b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b08: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x169B08u;
    SET_GPR_U32(ctx, 31, 0x169B10u);
    ctx->pc = 0x169B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169B08u;
    // 0x169b0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x169B08u, 0x169B10u)) {
        return;
    }
    ctx->pc = 0x169B10u;
label_169b10:
    // 0x169b10: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x169b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b14: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x169B14u;
    SET_GPR_U32(ctx, 31, 0x169B1Cu);
    ctx->pc = 0x169B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169B14u;
    // 0x169b18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x169B14u, 0x169B1Cu)) {
        return;
    }
    ctx->pc = 0x169B1Cu;
label_169b1c:
    // 0x169b1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b20: 0xc04f084  jal         func_13C210
    ctx->pc = 0x169B20u;
    SET_GPR_U32(ctx, 31, 0x169B28u);
    ctx->pc = 0x169B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169B20u;
    // 0x169b24: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x169B20u, 0x169B28u)) {
        return;
    }
    ctx->pc = 0x169B28u;
label_169b28:
    // 0x169b28: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x169b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x169b2c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x169b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x169b30: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x169b30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x169b34: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x169b34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169b38: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x169b38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x169b3c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x169b3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x169b40: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x169b40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169b44: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x169b44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169b48: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x169b48u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169b4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169b50: 0x3e00008  jr          $ra
    ctx->pc = 0x169B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B50u;
        // 0x169b54: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169B58u;
}
