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

// Function: sub_0016ADA0
// Address: 0x16ada0 - 0x16aee0
void sub_0016ADA0_0x16ada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016ADA0_0x16ada0");
#endif

    switch (ctx->pc) {
        case 0x16ae0cu: goto label_16ae0c;
        case 0x16ae1cu: goto label_16ae1c;
        case 0x16ae28u: goto label_16ae28;
        case 0x16ae30u: goto label_16ae30;
        case 0x16ae38u: goto label_16ae38;
        case 0x16ae40u: goto label_16ae40;
        case 0x16ae48u: goto label_16ae48;
        case 0x16ae54u: goto label_16ae54;
        case 0x16ae5cu: goto label_16ae5c;
        case 0x16ae68u: goto label_16ae68;
        case 0x16ae74u: goto label_16ae74;
        case 0x16ae80u: goto label_16ae80;
        case 0x16ae8cu: goto label_16ae8c;
        case 0x16ae98u: goto label_16ae98;
        case 0x16aea4u: goto label_16aea4;
        case 0x16aeb0u: goto label_16aeb0;
        default: break;
    }

    ctx->pc = 0x16ada0u;

    // 0x16ada0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x16ada0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x16ada4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16ada8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x16ada8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x16adac: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16adacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16adb0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x16adb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x16adb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16adb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16adb8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x16adb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x16adbc: 0x244246b8  addiu       $v0, $v0, 0x46B8
    ctx->pc = 0x16adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18104));
    // 0x16adc0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x16adc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x16adc4: 0x24634670  addiu       $v1, $v1, 0x4670
    ctx->pc = 0x16adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18032));
    // 0x16adc8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x16adc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x16adcc: 0x26320038  addiu       $s2, $s1, 0x38
    ctx->pc = 0x16adccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16add0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x16add0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x16add4: 0x26340044  addiu       $s4, $s1, 0x44
    ctx->pc = 0x16add4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x16add8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x16add8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x16addc: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x16addcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ade0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x16ade0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x16ade4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16ade4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ade8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x16ade8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x16adec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16adecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16adf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16adf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16adf4: 0x2633004c  addiu       $s3, $s1, 0x4C
    ctx->pc = 0x16adf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x16adf8: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x16adf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x16adfc: 0x26370054  addiu       $s7, $s1, 0x54
    ctx->pc = 0x16adfcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    // 0x16ae00: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x16ae00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x16ae04: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16AE04u;
    SET_GPR_U32(ctx, 31, 0x16AE0Cu);
    ctx->pc = 0x16AE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE04u;
    // 0x16ae08: 0x2636005c  addiu       $s6, $s1, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16AE04u, 0x16AE0Cu)) {
        return;
    }
    ctx->pc = 0x16AE0Cu;
label_16ae0c:
    // 0x16ae0c: 0x26350064  addiu       $s5, $s1, 0x64
    ctx->pc = 0x16ae0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x16ae10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16ae10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae14: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16AE14u;
    SET_GPR_U32(ctx, 31, 0x16AE1Cu);
    ctx->pc = 0x16AE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE14u;
    // 0x16ae18: 0x2630006c  addiu       $s0, $s1, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16AE14u, 0x16AE1Cu)) {
        return;
    }
    ctx->pc = 0x16AE1Cu;
label_16ae1c:
    // 0x16ae1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16ae1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae20: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16AE20u;
    SET_GPR_U32(ctx, 31, 0x16AE28u);
    ctx->pc = 0x16AE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE20u;
    // 0x16ae24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16AE20u, 0x16AE28u)) {
        return;
    }
    ctx->pc = 0x16AE28u;
label_16ae28:
    // 0x16ae28: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16AE28u;
    SET_GPR_U32(ctx, 31, 0x16AE30u);
    ctx->pc = 0x16AE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE28u;
    // 0x16ae2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16AE28u, 0x16AE30u)) {
        return;
    }
    ctx->pc = 0x16AE30u;
label_16ae30:
    // 0x16ae30: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16AE30u;
    SET_GPR_U32(ctx, 31, 0x16AE38u);
    ctx->pc = 0x16AE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE30u;
    // 0x16ae34: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16AE30u, 0x16AE38u)) {
        return;
    }
    ctx->pc = 0x16AE38u;
label_16ae38:
    // 0x16ae38: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16AE38u;
    SET_GPR_U32(ctx, 31, 0x16AE40u);
    ctx->pc = 0x16AE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE38u;
    // 0x16ae3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16AE38u, 0x16AE40u)) {
        return;
    }
    ctx->pc = 0x16AE40u;
label_16ae40:
    // 0x16ae40: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16AE40u;
    SET_GPR_U32(ctx, 31, 0x16AE48u);
    ctx->pc = 0x16AE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE40u;
    // 0x16ae44: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16AE40u, 0x16AE48u)) {
        return;
    }
    ctx->pc = 0x16AE48u;
label_16ae48:
    // 0x16ae48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16ae48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae4c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16AE4Cu;
    SET_GPR_U32(ctx, 31, 0x16AE54u);
    ctx->pc = 0x16AE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE4Cu;
    // 0x16ae50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16AE4Cu, 0x16AE54u)) {
        return;
    }
    ctx->pc = 0x16AE54u;
label_16ae54:
    // 0x16ae54: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16AE54u;
    SET_GPR_U32(ctx, 31, 0x16AE5Cu);
    ctx->pc = 0x16AE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE54u;
    // 0x16ae58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16AE54u, 0x16AE5Cu)) {
        return;
    }
    ctx->pc = 0x16AE5Cu;
label_16ae5c:
    // 0x16ae5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ae5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae60: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16AE60u;
    SET_GPR_U32(ctx, 31, 0x16AE68u);
    ctx->pc = 0x16AE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE60u;
    // 0x16ae64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16AE60u, 0x16AE68u)) {
        return;
    }
    ctx->pc = 0x16AE68u;
label_16ae68:
    // 0x16ae68: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16ae68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae6c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16AE6Cu;
    SET_GPR_U32(ctx, 31, 0x16AE74u);
    ctx->pc = 0x16AE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE6Cu;
    // 0x16ae70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16AE6Cu, 0x16AE74u)) {
        return;
    }
    ctx->pc = 0x16AE74u;
label_16ae74:
    // 0x16ae74: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16ae74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae78: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16AE78u;
    SET_GPR_U32(ctx, 31, 0x16AE80u);
    ctx->pc = 0x16AE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE78u;
    // 0x16ae7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16AE78u, 0x16AE80u)) {
        return;
    }
    ctx->pc = 0x16AE80u;
label_16ae80:
    // 0x16ae80: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x16ae80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae84: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16AE84u;
    SET_GPR_U32(ctx, 31, 0x16AE8Cu);
    ctx->pc = 0x16AE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE84u;
    // 0x16ae88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16AE84u, 0x16AE8Cu)) {
        return;
    }
    ctx->pc = 0x16AE8Cu;
label_16ae8c:
    // 0x16ae8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16ae8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae90: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16AE90u;
    SET_GPR_U32(ctx, 31, 0x16AE98u);
    ctx->pc = 0x16AE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE90u;
    // 0x16ae94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16AE90u, 0x16AE98u)) {
        return;
    }
    ctx->pc = 0x16AE98u;
label_16ae98:
    // 0x16ae98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16ae98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae9c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16AE9Cu;
    SET_GPR_U32(ctx, 31, 0x16AEA4u);
    ctx->pc = 0x16AEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE9Cu;
    // 0x16aea0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16AE9Cu, 0x16AEA4u)) {
        return;
    }
    ctx->pc = 0x16AEA4u;
label_16aea4:
    // 0x16aea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16aea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aea8: 0xc04f084  jal         func_13C210
    ctx->pc = 0x16AEA8u;
    SET_GPR_U32(ctx, 31, 0x16AEB0u);
    ctx->pc = 0x16AEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AEA8u;
    // 0x16aeac: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x16AEA8u, 0x16AEB0u)) {
        return;
    }
    ctx->pc = 0x16AEB0u;
label_16aeb0:
    // 0x16aeb0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x16aeb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16aeb4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x16aeb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16aeb8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x16aeb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16aebc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x16aebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16aec0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x16aec0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16aec4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x16aec4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16aec8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x16aec8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16aecc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x16aeccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16aed0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x16aed0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16aed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16aed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16aed8: 0x3e00008  jr          $ra
    ctx->pc = 0x16AED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AED8u;
        // 0x16aedc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AEE0u;
}
