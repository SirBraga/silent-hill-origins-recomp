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

// Function: sub_0022AD40
// Address: 0x22ad40 - 0x22add0
void sub_0022AD40_0x22ad40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AD40_0x22ad40");
#endif

    switch (ctx->pc) {
        case 0x22ad40u: goto label_22ad40;
        case 0x22ad44u: goto label_22ad44;
        case 0x22ad48u: goto label_22ad48;
        case 0x22ad4cu: goto label_22ad4c;
        case 0x22ad50u: goto label_22ad50;
        case 0x22ad54u: goto label_22ad54;
        case 0x22ad58u: goto label_22ad58;
        case 0x22ad5cu: goto label_22ad5c;
        case 0x22ad60u: goto label_22ad60;
        case 0x22ad64u: goto label_22ad64;
        case 0x22ad68u: goto label_22ad68;
        case 0x22ad6cu: goto label_22ad6c;
        case 0x22ad70u: goto label_22ad70;
        case 0x22ad74u: goto label_22ad74;
        case 0x22ad78u: goto label_22ad78;
        case 0x22ad7cu: goto label_22ad7c;
        case 0x22ad80u: goto label_22ad80;
        case 0x22ad84u: goto label_22ad84;
        case 0x22ad88u: goto label_22ad88;
        case 0x22ad8cu: goto label_22ad8c;
        case 0x22ad90u: goto label_22ad90;
        case 0x22ad94u: goto label_22ad94;
        case 0x22ad98u: goto label_22ad98;
        case 0x22ad9cu: goto label_22ad9c;
        case 0x22ada0u: goto label_22ada0;
        case 0x22ada4u: goto label_22ada4;
        case 0x22ada8u: goto label_22ada8;
        case 0x22adacu: goto label_22adac;
        case 0x22adb0u: goto label_22adb0;
        case 0x22adb4u: goto label_22adb4;
        case 0x22adb8u: goto label_22adb8;
        case 0x22adbcu: goto label_22adbc;
        case 0x22adc0u: goto label_22adc0;
        case 0x22adc4u: goto label_22adc4;
        case 0x22adc8u: goto label_22adc8;
        case 0x22adccu: goto label_22adcc;
        default: break;
    }

    ctx->pc = 0x22ad40u;

label_22ad40:
    // 0x22ad40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22ad40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22ad44:
    // 0x22ad44: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_22ad48:
    // 0x22ad48: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16032)));
label_22ad4c:
    // 0x22ad4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22ad4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_22ad50:
    // 0x22ad50: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x22ad50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
label_22ad54:
    // 0x22ad54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ad54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22ad58:
    // 0x22ad58: 0x24a50fc8  addiu       $a1, $a1, 0xFC8
    ctx->pc = 0x22ad58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4040));
label_22ad5c:
    // 0x22ad5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ad5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22ad60:
    // 0x22ad60: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_22ad64:
    // 0x22ad64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22ad64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22ad68:
    // 0x22ad68: 0x8ca20118  lw          $v0, 0x118($a1)
    ctx->pc = 0x22ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
label_22ad6c:
    // 0x22ad6c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x22ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_22ad70:
    // 0x22ad70: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x22ad70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_22ad74:
    // 0x22ad74: 0x40f809  jalr        $v0
label_22ad78:
    if (ctx->pc == 0x22AD78u) {
        ctx->pc = 0x22AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD74u;
        // 0x22ad78: 0x34a50006  ori         $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AD7Cu;
        goto label_22ad7c;
    }
    ctx->pc = 0x22AD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22AD7Cu);
        ctx->pc = 0x22AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD74u;
        // 0x22ad78: 0x34a50006  ori         $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AD74u, 0x22AD7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22AD7Cu;
label_22ad7c:
    // 0x22ad7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22ad7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22ad80:
    // 0x22ad80: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_22ad84:
    if (ctx->pc == 0x22AD84u) {
        ctx->pc = 0x22AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD80u;
        // 0x22ad84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AD88u;
        goto label_22ad88;
    }
    ctx->pc = 0x22AD80u;
    {
        const bool branch_taken_0x22ad80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD80u;
        // 0x22ad84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad80) {
            ctx->pc = 0x22ADB4u;
            goto label_22adb4;
        }
    }
    ctx->pc = 0x22AD88u;
label_22ad88:
    // 0x22ad88: 0x24031101  addiu       $v1, $zero, 0x1101
    ctx->pc = 0x22ad88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
label_22ad8c:
    // 0x22ad8c: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x22ad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_22ad90:
    // 0x22ad90: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x22ad90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_22ad94:
    // 0x22ad94: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x22ad94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_22ad98:
    // 0x22ad98: 0x24840448  addiu       $a0, $a0, 0x448
    ctx->pc = 0x22ad98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1096));
label_22ad9c:
    // 0x22ad9c: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x22ad9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
label_22ada0:
    // 0x22ada0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22ada0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22ada4:
    // 0x22ada4: 0xa2000030  sb          $zero, 0x30($s0)
    ctx->pc = 0x22ada4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 0));
label_22ada8:
    // 0x22ada8: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x22ada8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_22adac:
    // 0x22adac: 0xc093958  jal         func_24E560
label_22adb0:
    if (ctx->pc == 0x22ADB0u) {
        ctx->pc = 0x22ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ADACu;
        // 0x22adb0: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ADB4u;
        goto label_22adb4;
    }
    ctx->pc = 0x22ADACu;
    SET_GPR_U32(ctx, 31, 0x22ADB4u);
    ctx->pc = 0x22ADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ADACu;
    // 0x22adb0: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E560u, 0x22ADACu, 0x22ADB4u)) {
        return;
    }
    ctx->pc = 0x22ADB4u;
label_22adb4:
    // 0x22adb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22adb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22adb8:
    // 0x22adb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22adb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22adbc:
    // 0x22adbc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22adbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22adc0:
    // 0x22adc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22adc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22adc4:
    // 0x22adc4: 0x3e00008  jr          $ra
label_22adc8:
    if (ctx->pc == 0x22ADC8u) {
        ctx->pc = 0x22ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ADC4u;
        // 0x22adc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ADCCu;
        goto label_22adcc;
    }
    ctx->pc = 0x22ADC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ADC4u;
        // 0x22adc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ADC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ADCCu;
label_22adcc:
    // 0x22adcc: 0x0  nop
    ctx->pc = 0x22adccu;
    // NOP
    ctx->pc = 0x22add0u;
}
