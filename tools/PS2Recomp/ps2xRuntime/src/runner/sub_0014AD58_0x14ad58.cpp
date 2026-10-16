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

// Function: sub_0014AD58
// Address: 0x14ad58 - 0x14ade8
void sub_0014AD58_0x14ad58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AD58_0x14ad58");
#endif

    switch (ctx->pc) {
        case 0x14ad74u: goto label_14ad74;
        case 0x14ad94u: goto label_14ad94;
        case 0x14adb8u: goto label_14adb8;
        case 0x14adccu: goto label_14adcc;
        default: break;
    }

    ctx->pc = 0x14ad58u;

    // 0x14ad58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14ad58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14ad5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14ad5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14ad60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14ad60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14ad64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14ad68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ad68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ad6c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x14AD6Cu;
    SET_GPR_U32(ctx, 31, 0x14AD74u);
    ctx->pc = 0x14AD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD6Cu;
    // 0x14ad70: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x14AD6Cu, 0x14AD74u)) {
        return;
    }
    ctx->pc = 0x14AD74u;
label_14ad74:
    // 0x14ad74: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x14ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x14ad78: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x14ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x14ad7c: 0x24631c08  addiu       $v1, $v1, 0x1C08
    ctx->pc = 0x14ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7176));
    // 0x14ad80: 0x24421c28  addiu       $v0, $v0, 0x1C28
    ctx->pc = 0x14ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7208));
    // 0x14ad84: 0x2624005c  addiu       $a0, $s1, 0x5C
    ctx->pc = 0x14ad84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x14ad88: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x14ad88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x14ad8c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x14AD8Cu;
    SET_GPR_U32(ctx, 31, 0x14AD94u);
    ctx->pc = 0x14AD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD8Cu;
    // 0x14ad90: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x14AD8Cu, 0x14AD94u)) {
        return;
    }
    ctx->pc = 0x14AD94u;
label_14ad94:
    // 0x14ad94: 0xae300044  sw          $s0, 0x44($s1)
    ctx->pc = 0x14ad94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 16));
    // 0x14ad98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ad98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad9c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x14ad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x14ada0: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x14ada0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x14ada4: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x14ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x14ada8: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x14ada8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x14adac: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x14adacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x14adb0: 0xc07f8aa  jal         func_1FE2A8
    ctx->pc = 0x14ADB0u;
    SET_GPR_U32(ctx, 31, 0x14ADB8u);
    ctx->pc = 0x14ADB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ADB0u;
    // 0x14adb4: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE2A8u, 0x14ADB0u, 0x14ADB8u)) {
        return;
    }
    ctx->pc = 0x14ADB8u;
label_14adb8:
    // 0x14adb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14ADB8u;
    {
        const bool branch_taken_0x14adb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ADB8u;
        // 0x14adbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14adb8) {
            ctx->pc = 0x14ADD0u;
            goto label_14add0;
        }
    }
    ctx->pc = 0x14ADC0u;
    // 0x14adc0: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x14adc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x14adc4: 0xc041e86  jal         func_107A18
    ctx->pc = 0x14ADC4u;
    SET_GPR_U32(ctx, 31, 0x14ADCCu);
    ctx->pc = 0x14ADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ADC4u;
    // 0x14adc8: 0x24841b70  addiu       $a0, $a0, 0x1B70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107A18u, 0x14ADC4u, 0x14ADCCu)) {
        return;
    }
    ctx->pc = 0x14ADCCu;
label_14adcc:
    // 0x14adcc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14adccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14add0:
    // 0x14add0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14add0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14add4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14add4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14add8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14add8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14addc: 0x3e00008  jr          $ra
    ctx->pc = 0x14ADDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ADDCu;
        // 0x14ade0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ADDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ADE4u;
    // 0x14ade4: 0x0  nop
    ctx->pc = 0x14ade4u;
    // NOP
    ctx->pc = 0x14ade8u;
}
