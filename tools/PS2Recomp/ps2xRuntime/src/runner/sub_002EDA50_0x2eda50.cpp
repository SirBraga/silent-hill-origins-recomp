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

// Function: sub_002EDA50
// Address: 0x2eda50 - 0x2edb40
void sub_002EDA50_0x2eda50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDA50_0x2eda50");
#endif

    switch (ctx->pc) {
        case 0x2eda80u: goto label_2eda80;
        case 0x2edad8u: goto label_2edad8;
        default: break;
    }

    ctx->pc = 0x2eda50u;

    // 0x2eda50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2eda50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2eda54: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2eda54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2eda58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2eda58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2eda5c: 0x24a5f0f0  addiu       $a1, $a1, -0xF10
    ctx->pc = 0x2eda5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963440));
    // 0x2eda60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2eda60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2eda64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eda64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eda68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2eda68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2eda6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2eda6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eda70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eda70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eda74: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2eda74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2eda78: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2EDA78u;
    SET_GPR_U32(ctx, 31, 0x2EDA80u);
    ctx->pc = 0x2EDA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDA78u;
    // 0x2eda7c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2EDA78u, 0x2EDA80u)) {
        return;
    }
    ctx->pc = 0x2EDA80u;
label_2eda80:
    // 0x2eda80: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EDA80u;
    {
        const bool branch_taken_0x2eda80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA80u;
        // 0x2eda84: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda80) {
            ctx->pc = 0x2EDACCu;
            goto label_2edacc;
        }
    }
    ctx->pc = 0x2EDA88u;
    // 0x2eda88: 0x9204000d  lbu         $a0, 0xD($s0)
    ctx->pc = 0x2eda88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x2eda8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eda8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eda90: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDA90u;
    {
        const bool branch_taken_0x2eda90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EDA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA90u;
        // 0x2eda94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda90) {
            ctx->pc = 0x2EDAA8u;
            goto label_2edaa8;
        }
    }
    ctx->pc = 0x2EDA98u;
    // 0x2eda98: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EDA98u;
    {
        const bool branch_taken_0x2eda98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EDA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA98u;
        // 0x2eda9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda98) {
            ctx->pc = 0x2EDAB8u;
            goto label_2edab8;
        }
    }
    ctx->pc = 0x2EDAA0u;
    // 0x2edaa0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2EDAA0u;
    {
        const bool branch_taken_0x2edaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAA0u;
        // 0x2edaa4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edaa0) {
            ctx->pc = 0x2EDB28u;
            goto label_2edb28;
        }
    }
    ctx->pc = 0x2EDAA8u;
label_2edaa8:
    // 0x2edaa8: 0x128902  srl         $s1, $s2, 4
    ctx->pc = 0x2edaa8u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    // 0x2edaac: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2edaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2edab0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2EDAB0u;
    {
        const bool branch_taken_0x2edab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAB0u;
        // 0x2edab4: 0x2228818  mult        $s1, $s1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edab0) {
            ctx->pc = 0x2EDB20u;
            goto label_2edb20;
        }
    }
    ctx->pc = 0x2EDAB8u;
label_2edab8:
    // 0x2edab8: 0x128902  srl         $s1, $s2, 4
    ctx->pc = 0x2edab8u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    // 0x2edabc: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2edabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2edac0: 0x2228818  mult        $s1, $s1, $v0
    ctx->pc = 0x2edac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x2edac4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2EDAC4u;
    {
        const bool branch_taken_0x2edac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAC4u;
        // 0x2edac8: 0x118842  srl         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edac4) {
            ctx->pc = 0x2EDB20u;
            goto label_2edb20;
        }
    }
    ctx->pc = 0x2EDACCu;
label_2edacc:
    // 0x2edacc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2edaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2edad0: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2EDAD0u;
    SET_GPR_U32(ctx, 31, 0x2EDAD8u);
    ctx->pc = 0x2EDAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDAD0u;
    // 0x2edad4: 0x24a5f100  addiu       $a1, $a1, -0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2EDAD0u, 0x2EDAD8u)) {
        return;
    }
    ctx->pc = 0x2EDAD8u;
label_2edad8:
    // 0x2edad8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EDAD8u;
    {
        const bool branch_taken_0x2edad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAD8u;
        // 0x2edadc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edad8) {
            ctx->pc = 0x2EDB24u;
            goto label_2edb24;
        }
    }
    ctx->pc = 0x2EDAE0u;
    // 0x2edae0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2edae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2edae4: 0x9204000c  lbu         $a0, 0xC($s0)
    ctx->pc = 0x2edae4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2edae8: 0x9043f654  lbu         $v1, -0x9AC($v0)
    ctx->pc = 0x2edae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6AF654u));
    // 0x2edaec: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2EDAECu;
    {
        const bool branch_taken_0x2edaec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EDAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAECu;
        // 0x2edaf0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edaec) {
            ctx->pc = 0x2EDB24u;
            goto label_2edb24;
        }
    }
    ctx->pc = 0x2EDAF4u;
    // 0x2edaf4: 0x9204000d  lbu         $a0, 0xD($s0)
    ctx->pc = 0x2edaf4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x2edaf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2edaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edafc: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDAFCu;
    {
        const bool branch_taken_0x2edafc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EDB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAFCu;
        // 0x2edb00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edafc) {
            ctx->pc = 0x2EDB14u;
            goto label_2edb14;
        }
    }
    ctx->pc = 0x2EDB04u;
    // 0x2edb04: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDB04u;
    {
        const bool branch_taken_0x2edb04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EDB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB04u;
        // 0x2edb08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb04) {
            ctx->pc = 0x2EDB1Cu;
            goto label_2edb1c;
        }
    }
    ctx->pc = 0x2EDB0Cu;
    // 0x2edb0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EDB0Cu;
    {
        const bool branch_taken_0x2edb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB0Cu;
        // 0x2edb10: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb0c) {
            ctx->pc = 0x2EDB28u;
            goto label_2edb28;
        }
    }
    ctx->pc = 0x2EDB14u;
label_2edb14:
    // 0x2edb14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EDB14u;
    {
        const bool branch_taken_0x2edb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB14u;
        // 0x2edb18: 0x128842  srl         $s1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb14) {
            ctx->pc = 0x2EDB20u;
            goto label_2edb20;
        }
    }
    ctx->pc = 0x2EDB1Cu;
label_2edb1c:
    // 0x2edb1c: 0x128882  srl         $s1, $s2, 2
    ctx->pc = 0x2edb1cu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 18), 2));
label_2edb20:
    // 0x2edb20: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2edb20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2edb24:
    // 0x2edb24: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2edb24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2edb28:
    // 0x2edb28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2edb28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2edb2c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2edb2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2edb30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2edb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2edb34: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB34u;
        // 0x2edb38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDB3Cu;
    // 0x2edb3c: 0x0  nop
    ctx->pc = 0x2edb3cu;
    // NOP
    ctx->pc = 0x2edb40u;
}
