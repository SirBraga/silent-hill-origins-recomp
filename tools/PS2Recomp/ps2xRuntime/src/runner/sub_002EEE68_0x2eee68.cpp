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

// Function: sub_002EEE68
// Address: 0x2eee68 - 0x2ef0c8
void sub_002EEE68_0x2eee68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEE68_0x2eee68");
#endif

    switch (ctx->pc) {
        case 0x2eeea0u: goto label_2eeea0;
        case 0x2eeeb4u: goto label_2eeeb4;
        case 0x2eeec8u: goto label_2eeec8;
        case 0x2eeee8u: goto label_2eeee8;
        case 0x2eef04u: goto label_2eef04;
        case 0x2eef18u: goto label_2eef18;
        case 0x2eef2cu: goto label_2eef2c;
        case 0x2eef50u: goto label_2eef50;
        case 0x2eef6cu: goto label_2eef6c;
        case 0x2eef80u: goto label_2eef80;
        case 0x2eef94u: goto label_2eef94;
        case 0x2eefa4u: goto label_2eefa4;
        case 0x2eefc8u: goto label_2eefc8;
        case 0x2eeff8u: goto label_2eeff8;
        case 0x2ef010u: goto label_2ef010;
        case 0x2ef068u: goto label_2ef068;
        case 0x2ef088u: goto label_2ef088;
        default: break;
    }

    ctx->pc = 0x2eee68u;

    // 0x2eee68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2eee68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2eee6c: 0x8f8290a8  lw          $v0, -0x6F58($gp)
    ctx->pc = 0x2eee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938792)));
    // 0x2eee70: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2eee70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2eee74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eee74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eee78: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2eee78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2eee7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2eee7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee80: 0xc2a021  addu        $s4, $a2, $v0
    ctx->pc = 0x2eee80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2eee84: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2eee84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2eee88: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2eee88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2eee8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2eee8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2eee90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eee90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2eee94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2eee98: 0xc09270a  jal         func_249C28
    ctx->pc = 0x2EEE98u;
    SET_GPR_U32(ctx, 31, 0x2EEEA0u);
    ctx->pc = 0x2EEE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEE98u;
    // 0x2eee9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x2EEE98u, 0x2EEEA0u)) {
        return;
    }
    ctx->pc = 0x2EEEA0u;
label_2eeea0:
    // 0x2eeea0: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2EEEA0u;
    {
        const bool branch_taken_0x2eeea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEEA0u;
        // 0x2eeea4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeea0) {
            ctx->pc = 0x2EEFA4u;
            goto label_2eefa4;
        }
    }
    ctx->pc = 0x2EEEA8u;
    // 0x2eeea8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eeea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeeac: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x2EEEACu;
    SET_GPR_U32(ctx, 31, 0x2EEEB4u);
    ctx->pc = 0x2EEEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEEACu;
    // 0x2eeeb0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x2EEEACu, 0x2EEEB4u)) {
        return;
    }
    ctx->pc = 0x2EEEB4u;
label_2eeeb4:
    // 0x2eeeb4: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2EEEB4u;
    {
        const bool branch_taken_0x2eeeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEEB4u;
        // 0x2eeeb8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeeb4) {
            ctx->pc = 0x2EEFA4u;
            goto label_2eefa4;
        }
    }
    ctx->pc = 0x2EEEBCu;
    // 0x2eeebc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2eeebcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eeec0: 0x26900008  addiu       $s0, $s4, 0x8
    ctx->pc = 0x2eeec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2eeec4: 0x0  nop
    ctx->pc = 0x2eeec4u;
    // NOP
label_2eeec8:
    // 0x2eeec8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2eeec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eeecc: 0x2331804  sllv        $v1, $s3, $s1
    ctx->pc = 0x2eeeccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 17) & 0x1F));
    // 0x2eeed0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eeed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2eeed4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EEED4u;
    {
        const bool branch_taken_0x2eeed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEED4u;
        // 0x2eeed8: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeed4) {
            ctx->pc = 0x2EEF34u;
            goto label_2eef34;
        }
    }
    ctx->pc = 0x2EEEDCu;
    // 0x2eeedc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eeedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeee0: 0xc0bbb16  jal         func_2EEC58
    ctx->pc = 0x2EEEE0u;
    SET_GPR_U32(ctx, 31, 0x2EEEE8u);
    ctx->pc = 0x2EEEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEEE0u;
    // 0x2eeee4: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEC58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EEC58u, 0x2EEEE0u, 0x2EEEE8u)) {
        return;
    }
    ctx->pc = 0x2EEEE8u;
label_2eeee8:
    // 0x2eeee8: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2EEEE8u;
    {
        const bool branch_taken_0x2eeee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEEE8u;
        // 0x2eeeec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeee8) {
            ctx->pc = 0x2EF0A8u;
            goto label_2ef0a8;
        }
    }
    ctx->pc = 0x2EEEF0u;
    // 0x2eeef0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2eeef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2eeef4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EEEF4u;
    {
        const bool branch_taken_0x2eeef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEEF4u;
        // 0x2eeef8: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeef4) {
            ctx->pc = 0x2EEF34u;
            goto label_2eef34;
        }
    }
    ctx->pc = 0x2EEEFCu;
    // 0x2eeefc: 0xc09d8ce  jal         func_276338
    ctx->pc = 0x2EEEFCu;
    SET_GPR_U32(ctx, 31, 0x2EEF04u);
    ctx->pc = 0x276338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276338u, 0x2EEEFCu, 0x2EEF04u)) {
        return;
    }
    ctx->pc = 0x2EEF04u;
label_2eef04:
    // 0x2eef04: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2eef04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2eef08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2eef08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eef0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2eef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eef10: 0xc09d8e0  jal         func_276380
    ctx->pc = 0x2EEF10u;
    SET_GPR_U32(ctx, 31, 0x2EEF18u);
    ctx->pc = 0x2EEF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEF10u;
    // 0x2eef14: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276380u, 0x2EEF10u, 0x2EEF18u)) {
        return;
    }
    ctx->pc = 0x2EEF18u;
label_2eef18:
    // 0x2eef18: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2EEF18u;
    {
        const bool branch_taken_0x2eef18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF18u;
        // 0x2eef1c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef18) {
            ctx->pc = 0x2EEF9Cu;
            goto label_2eef9c;
        }
    }
    ctx->pc = 0x2EEF20u;
    // 0x2eef20: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2eef20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2eef24: 0xc09d55c  jal         func_275570
    ctx->pc = 0x2EEF24u;
    SET_GPR_U32(ctx, 31, 0x2EEF2Cu);
    ctx->pc = 0x2EEF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEF24u;
    // 0x2eef28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x2EEF24u, 0x2EEF2Cu)) {
        return;
    }
    ctx->pc = 0x2EEF2Cu;
label_2eef2c:
    // 0x2eef2c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EEF2Cu;
    {
        const bool branch_taken_0x2eef2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF2Cu;
        // 0x2eef30: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef2c) {
            ctx->pc = 0x2EEF9Cu;
            goto label_2eef9c;
        }
    }
    ctx->pc = 0x2EEF34u;
label_2eef34:
    // 0x2eef34: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2eef34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eef38: 0x531004  sllv        $v0, $s3, $v0
    ctx->pc = 0x2eef38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x2eef3c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2eef3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2eef40: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EEF40u;
    {
        const bool branch_taken_0x2eef40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF40u;
        // 0x2eef44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef40) {
            ctx->pc = 0x2EEFACu;
            goto label_2eefac;
        }
    }
    ctx->pc = 0x2EEF48u;
    // 0x2eef48: 0xc0bbb16  jal         func_2EEC58
    ctx->pc = 0x2EEF48u;
    SET_GPR_U32(ctx, 31, 0x2EEF50u);
    ctx->pc = 0x2EEF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEF48u;
    // 0x2eef4c: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEC58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EEC58u, 0x2EEF48u, 0x2EEF50u)) {
        return;
    }
    ctx->pc = 0x2EEF50u;
label_2eef50:
    // 0x2eef50: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2EEF50u;
    {
        const bool branch_taken_0x2eef50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF50u;
        // 0x2eef54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef50) {
            ctx->pc = 0x2EF0A8u;
            goto label_2ef0a8;
        }
    }
    ctx->pc = 0x2EEF58u;
    // 0x2eef58: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2eef58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2eef5c: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EEF5Cu;
    {
        const bool branch_taken_0x2eef5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eef5c) {
            ctx->pc = 0x2EEF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEF5Cu;
            // 0x2eef60: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEFB0u;
            goto label_2eefb0;
        }
    }
    ctx->pc = 0x2EEF64u;
    // 0x2eef64: 0xc09d8ce  jal         func_276338
    ctx->pc = 0x2EEF64u;
    SET_GPR_U32(ctx, 31, 0x2EEF6Cu);
    ctx->pc = 0x276338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276338u, 0x2EEF64u, 0x2EEF6Cu)) {
        return;
    }
    ctx->pc = 0x2EEF6Cu;
label_2eef6c:
    // 0x2eef6c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2eef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2eef70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2eef70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eef74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2eef74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eef78: 0xc09d8e0  jal         func_276380
    ctx->pc = 0x2EEF78u;
    SET_GPR_U32(ctx, 31, 0x2EEF80u);
    ctx->pc = 0x2EEF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEF78u;
    // 0x2eef7c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276380u, 0x2EEF78u, 0x2EEF80u)) {
        return;
    }
    ctx->pc = 0x2EEF80u;
label_2eef80:
    // 0x2eef80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EEF80u;
    {
        const bool branch_taken_0x2eef80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF80u;
        // 0x2eef84: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef80) {
            ctx->pc = 0x2EEF9Cu;
            goto label_2eef9c;
        }
    }
    ctx->pc = 0x2EEF88u;
    // 0x2eef88: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2eef88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2eef8c: 0xc09d55c  jal         func_275570
    ctx->pc = 0x2EEF8Cu;
    SET_GPR_U32(ctx, 31, 0x2EEF94u);
    ctx->pc = 0x2EEF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEF8Cu;
    // 0x2eef90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x2EEF8Cu, 0x2EEF94u)) {
        return;
    }
    ctx->pc = 0x2EEF94u;
label_2eef94:
    // 0x2eef94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EEF94u;
    {
        const bool branch_taken_0x2eef94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF94u;
        // 0x2eef98: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef94) {
            ctx->pc = 0x2EEFB0u;
            goto label_2eefb0;
        }
    }
    ctx->pc = 0x2EEF9Cu;
label_2eef9c:
    // 0x2eef9c: 0xc0bbd9e  jal         func_2EF678
    ctx->pc = 0x2EEF9Cu;
    SET_GPR_U32(ctx, 31, 0x2EEFA4u);
    ctx->pc = 0x2EEFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEF9Cu;
    // 0x2eefa0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF678u, 0x2EEF9Cu, 0x2EEFA4u)) {
        return;
    }
    ctx->pc = 0x2EEFA4u;
label_2eefa4:
    // 0x2eefa4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2EEFA4u;
    {
        const bool branch_taken_0x2eefa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFA4u;
        // 0x2eefa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eefa4) {
            ctx->pc = 0x2EF0A8u;
            goto label_2ef0a8;
        }
    }
    ctx->pc = 0x2EEFACu;
label_2eefac:
    // 0x2eefac: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x2eefacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_2eefb0:
    // 0x2eefb0: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x2eefb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2eefb4: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x2EEFB4u;
    {
        const bool branch_taken_0x2eefb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFB4u;
        // 0x2eefb8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eefb4) {
            ctx->pc = 0x2EEEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eeec8;
        }
    }
    ctx->pc = 0x2EEFBCu;
    // 0x2eefbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2eefbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eefc0: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x2eefc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2eefc4: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x2eefc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2eefc8:
    // 0x2eefc8: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x2eefc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2eefcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eefccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eefd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eefd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eefd4: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2EEFD4u;
    {
        const bool branch_taken_0x2eefd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFD4u;
        // 0x2eefd8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eefd4) {
            ctx->pc = 0x2EF010u;
            goto label_2ef010;
        }
    }
    ctx->pc = 0x2EEFDCu;
    // 0x2eefdc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2eefdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eefe0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2eefe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2eefe4: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x2eefe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2eefe8: 0x12240018  beq         $s1, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2EEFE8u;
    {
        const bool branch_taken_0x2eefe8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x2EEFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFE8u;
        // 0x2eefec: 0x8e080000  lw          $t0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eefe8) {
            ctx->pc = 0x2EF04Cu;
            goto label_2ef04c;
        }
    }
    ctx->pc = 0x2EEFF0u;
    // 0x2eeff0: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2eeff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2eeff4: 0x0  nop
    ctx->pc = 0x2eeff4u;
    // NOP
label_2eeff8:
    // 0x2eeff8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2eeff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2eeffc: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x2eeffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ef000: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EF000u;
    {
        const bool branch_taken_0x2ef000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF000u;
        // 0x2ef004: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef000) {
            ctx->pc = 0x2EF01Cu;
            goto label_2ef01c;
        }
    }
    ctx->pc = 0x2EF008u;
    // 0x2ef008: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EF008u;
    {
        const bool branch_taken_0x2ef008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF008u;
        // 0x2ef00c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef008) {
            ctx->pc = 0x2EF014u;
            goto label_2ef014;
        }
    }
    ctx->pc = 0x2EF010u;
label_2ef010:
    // 0x2ef010: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x2ef010u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ef014:
    // 0x2ef014: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2ef014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ef018: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x2ef018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2ef01c:
    // 0x2ef01c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EF01Cu;
    {
        const bool branch_taken_0x2ef01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF01Cu;
        // 0x2ef020: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef01c) {
            ctx->pc = 0x2EF050u;
            goto label_2ef050;
        }
    }
    ctx->pc = 0x2EF024u;
    // 0x2ef024: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2ef024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2ef028: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ef028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ef02c: 0x10a0fff8  beqz        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EF02Cu;
    {
        const bool branch_taken_0x2ef02c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF02Cu;
        // 0x2ef030: 0x72080  sll         $a0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef02c) {
            ctx->pc = 0x2EF010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef010;
        }
    }
    ctx->pc = 0x2EF034u;
    // 0x2ef034: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ef034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ef038: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2ef038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2ef03c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ef03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ef040: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2ef040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2ef044: 0x5623ffec  bnel        $s1, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2EF044u;
    {
        const bool branch_taken_0x2ef044 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ef044) {
            ctx->pc = 0x2EF048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF044u;
            // 0x2ef048: 0x8ca2002c  lw          $v0, 0x2C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eeff8;
        }
    }
    ctx->pc = 0x2EF04Cu;
label_2ef04c:
    // 0x2ef04c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2ef04cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef050:
    // 0x2ef050: 0x11200009  beqz        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EF050u;
    {
        const bool branch_taken_0x2ef050 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef050) {
            ctx->pc = 0x2EF078u;
            goto label_2ef078;
        }
    }
    ctx->pc = 0x2EF058u;
    // 0x2ef058: 0x5500000d  bnel        $t0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2EF058u;
    {
        const bool branch_taken_0x2ef058 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef058) {
            ctx->pc = 0x2EF05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF058u;
            // 0x2ef05c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF090u;
            goto label_2ef090;
        }
    }
    ctx->pc = 0x2EF060u;
    // 0x2ef060: 0xc092ff4  jal         func_24BFD0
    ctx->pc = 0x2EF060u;
    SET_GPR_U32(ctx, 31, 0x2EF068u);
    ctx->pc = 0x24BFD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BFD0u, 0x2EF060u, 0x2EF068u)) {
        return;
    }
    ctx->pc = 0x2EF068u;
label_2ef068:
    // 0x2ef068: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EF068u;
    {
        const bool branch_taken_0x2ef068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF068u;
        // 0x2ef06c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef068) {
            ctx->pc = 0x2EF08Cu;
            goto label_2ef08c;
        }
    }
    ctx->pc = 0x2EF070u;
    // 0x2ef070: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EF070u;
    {
        const bool branch_taken_0x2ef070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF070u;
        // 0x2ef074: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef070) {
            ctx->pc = 0x2EF0A0u;
            goto label_2ef0a0;
        }
    }
    ctx->pc = 0x2EF078u;
label_2ef078:
    // 0x2ef078: 0x51000005  beql        $t0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EF078u;
    {
        const bool branch_taken_0x2ef078 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef078) {
            ctx->pc = 0x2EF07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF078u;
            // 0x2ef07c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF090u;
            goto label_2ef090;
        }
    }
    ctx->pc = 0x2EF080u;
    // 0x2ef080: 0xc092fe4  jal         func_24BF90
    ctx->pc = 0x2EF080u;
    SET_GPR_U32(ctx, 31, 0x2EF088u);
    ctx->pc = 0x2EF084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF080u;
    // 0x2ef084: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BF90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BF90u, 0x2EF080u, 0x2EF088u)) {
        return;
    }
    ctx->pc = 0x2EF088u;
label_2ef088:
    // 0x2ef088: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ef088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ef08c:
    // 0x2ef08c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ef08cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ef090:
    // 0x2ef090: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x2ef090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ef094: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2EF094u;
    {
        const bool branch_taken_0x2ef094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF094u;
        // 0x2ef098: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef094) {
            ctx->pc = 0x2EEFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eefc8;
        }
    }
    ctx->pc = 0x2EF09Cu;
    // 0x2ef09c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ef09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ef0a0:
    // 0x2ef0a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ef0a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef0a4: 0x246100b  movn        $v0, $s2, $a2
    ctx->pc = 0x2ef0a4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18));
label_2ef0a8:
    // 0x2ef0a8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2ef0a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ef0ac: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2ef0acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ef0b0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2ef0b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ef0b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ef0b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ef0b8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2ef0b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef0bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ef0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF0C0u;
        // 0x2ef0c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF0C8u;
}
