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

// Function: sub_00149DA0
// Address: 0x149da0 - 0x149ef8
void sub_00149DA0_0x149da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149DA0_0x149da0");
#endif

    switch (ctx->pc) {
        case 0x149e04u: goto label_149e04;
        case 0x149e14u: goto label_149e14;
        case 0x149e2cu: goto label_149e2c;
        case 0x149e34u: goto label_149e34;
        case 0x149e40u: goto label_149e40;
        case 0x149e4cu: goto label_149e4c;
        case 0x149e58u: goto label_149e58;
        case 0x149e60u: goto label_149e60;
        case 0x149e6cu: goto label_149e6c;
        case 0x149e74u: goto label_149e74;
        case 0x149e80u: goto label_149e80;
        case 0x149e88u: goto label_149e88;
        case 0x149e90u: goto label_149e90;
        case 0x149e9cu: goto label_149e9c;
        case 0x149ea8u: goto label_149ea8;
        case 0x149eb4u: goto label_149eb4;
        case 0x149ec0u: goto label_149ec0;
        case 0x149eccu: goto label_149ecc;
        default: break;
    }

    ctx->pc = 0x149da0u;

    // 0x149da0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x149da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x149da4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x149da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x149da8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x149da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x149dac: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x149dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x149db0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x149db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x149db4: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x149db4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x149db8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x149db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x149dbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x149dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149dc0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x149dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x149dc4: 0x24421ab8  addiu       $v0, $v0, 0x1AB8
    ctx->pc = 0x149dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6840));
    // 0x149dc8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x149dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x149dcc: 0x24631a70  addiu       $v1, $v1, 0x1A70
    ctx->pc = 0x149dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6768));
    // 0x149dd0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x149dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x149dd4: 0x26320038  addiu       $s2, $s1, 0x38
    ctx->pc = 0x149dd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x149dd8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x149dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x149ddc: 0x2610eeb8  addiu       $s0, $s0, -0x1148
    ctx->pc = 0x149ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962872));
    // 0x149de0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x149de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x149de4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x149de4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149de8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149dec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x149decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149df0: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x149df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x149df4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x149df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149df8: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x149df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x149dfc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x149DFCu;
    SET_GPR_U32(ctx, 31, 0x149E04u);
    ctx->pc = 0x149E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149DFCu;
    // 0x149e00: 0x26350044  addiu       $s5, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x149DFCu, 0x149E04u)) {
        return;
    }
    ctx->pc = 0x149E04u;
label_149e04:
    // 0x149e04: 0x2634004c  addiu       $s4, $s1, 0x4C
    ctx->pc = 0x149e04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x149e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e0c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x149E0Cu;
    SET_GPR_U32(ctx, 31, 0x149E14u);
    ctx->pc = 0x149E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E0Cu;
    // 0x149e10: 0x26330054  addiu       $s3, $s1, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x149E0Cu, 0x149E14u)) {
        return;
    }
    ctx->pc = 0x149E14u;
label_149e14:
    // 0x149e14: 0x2636005c  addiu       $s6, $s1, 0x5C
    ctx->pc = 0x149e14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x149e18: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x149e18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x149e1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x149e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e20: 0x2610eea0  addiu       $s0, $s0, -0x1160
    ctx->pc = 0x149e20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962848));
    // 0x149e24: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x149E24u;
    SET_GPR_U32(ctx, 31, 0x149E2Cu);
    ctx->pc = 0x149E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E24u;
    // 0x149e28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x149E24u, 0x149E2Cu)) {
        return;
    }
    ctx->pc = 0x149E2Cu;
label_149e2c:
    // 0x149e2c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x149E2Cu;
    SET_GPR_U32(ctx, 31, 0x149E34u);
    ctx->pc = 0x149E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E2Cu;
    // 0x149e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x149E2Cu, 0x149E34u)) {
        return;
    }
    ctx->pc = 0x149E34u;
label_149e34:
    // 0x149e34: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x149e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x149e38: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x149E38u;
    SET_GPR_U32(ctx, 31, 0x149E40u);
    ctx->pc = 0x149E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E38u;
    // 0x149e3c: 0x2484eea8  addiu       $a0, $a0, -0x1158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x149E38u, 0x149E40u)) {
        return;
    }
    ctx->pc = 0x149E40u;
label_149e40:
    // 0x149e40: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x149e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x149e44: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x149E44u;
    SET_GPR_U32(ctx, 31, 0x149E4Cu);
    ctx->pc = 0x149E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E44u;
    // 0x149e48: 0x2484eeb0  addiu       $a0, $a0, -0x1150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x149E44u, 0x149E4Cu)) {
        return;
    }
    ctx->pc = 0x149E4Cu;
label_149e4c:
    // 0x149e4c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x149e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e50: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x149E50u;
    SET_GPR_U32(ctx, 31, 0x149E58u);
    ctx->pc = 0x149E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E50u;
    // 0x149e54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x149E50u, 0x149E58u)) {
        return;
    }
    ctx->pc = 0x149E58u;
label_149e58:
    // 0x149e58: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x149E58u;
    SET_GPR_U32(ctx, 31, 0x149E60u);
    ctx->pc = 0x149E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E58u;
    // 0x149e5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x149E58u, 0x149E60u)) {
        return;
    }
    ctx->pc = 0x149E60u;
label_149e60:
    // 0x149e60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x149e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e64: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x149E64u;
    SET_GPR_U32(ctx, 31, 0x149E6Cu);
    ctx->pc = 0x149E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E64u;
    // 0x149e68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x149E64u, 0x149E6Cu)) {
        return;
    }
    ctx->pc = 0x149E6Cu;
label_149e6c:
    // 0x149e6c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x149E6Cu;
    SET_GPR_U32(ctx, 31, 0x149E74u);
    ctx->pc = 0x149E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E6Cu;
    // 0x149e70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x149E6Cu, 0x149E74u)) {
        return;
    }
    ctx->pc = 0x149E74u;
label_149e74:
    // 0x149e74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x149e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e78: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x149E78u;
    SET_GPR_U32(ctx, 31, 0x149E80u);
    ctx->pc = 0x149E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E78u;
    // 0x149e7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x149E78u, 0x149E80u)) {
        return;
    }
    ctx->pc = 0x149E80u;
label_149e80:
    // 0x149e80: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x149E80u;
    SET_GPR_U32(ctx, 31, 0x149E88u);
    ctx->pc = 0x149E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E80u;
    // 0x149e84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x149E80u, 0x149E88u)) {
        return;
    }
    ctx->pc = 0x149E88u;
label_149e88:
    // 0x149e88: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x149E88u;
    SET_GPR_U32(ctx, 31, 0x149E90u);
    ctx->pc = 0x149E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E88u;
    // 0x149e8c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x149E88u, 0x149E90u)) {
        return;
    }
    ctx->pc = 0x149E90u;
label_149e90:
    // 0x149e90: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x149e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e94: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x149E94u;
    SET_GPR_U32(ctx, 31, 0x149E9Cu);
    ctx->pc = 0x149E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E94u;
    // 0x149e98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x149E94u, 0x149E9Cu)) {
        return;
    }
    ctx->pc = 0x149E9Cu;
label_149e9c:
    // 0x149e9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x149e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ea0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x149EA0u;
    SET_GPR_U32(ctx, 31, 0x149EA8u);
    ctx->pc = 0x149EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149EA0u;
    // 0x149ea4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x149EA0u, 0x149EA8u)) {
        return;
    }
    ctx->pc = 0x149EA8u;
label_149ea8:
    // 0x149ea8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x149ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149eac: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x149EACu;
    SET_GPR_U32(ctx, 31, 0x149EB4u);
    ctx->pc = 0x149EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149EACu;
    // 0x149eb0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x149EACu, 0x149EB4u)) {
        return;
    }
    ctx->pc = 0x149EB4u;
label_149eb4:
    // 0x149eb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x149eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149eb8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x149EB8u;
    SET_GPR_U32(ctx, 31, 0x149EC0u);
    ctx->pc = 0x149EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149EB8u;
    // 0x149ebc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x149EB8u, 0x149EC0u)) {
        return;
    }
    ctx->pc = 0x149EC0u;
label_149ec0:
    // 0x149ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ec4: 0xc04f084  jal         func_13C210
    ctx->pc = 0x149EC4u;
    SET_GPR_U32(ctx, 31, 0x149ECCu);
    ctx->pc = 0x149EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149EC4u;
    // 0x149ec8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x149EC4u, 0x149ECCu)) {
        return;
    }
    ctx->pc = 0x149ECCu;
label_149ecc:
    // 0x149ecc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x149eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x149ed0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x149ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x149ed4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x149ed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x149ed8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x149ed8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x149edc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x149edcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x149ee0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x149ee0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149ee4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x149ee4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149ee8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x149ee8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149eec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x149EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149EF0u;
        // 0x149ef4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149EF8u;
}
