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

// Function: sub_0011EA48
// Address: 0x11ea48 - 0x11eb10
void sub_0011EA48_0x11ea48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EA48_0x11ea48");
#endif

    switch (ctx->pc) {
        case 0x11ea94u: goto label_11ea94;
        case 0x11eaacu: goto label_11eaac;
        case 0x11eabcu: goto label_11eabc;
        case 0x11eaccu: goto label_11eacc;
        case 0x11eadcu: goto label_11eadc;
        case 0x11eaecu: goto label_11eaec;
        case 0x11eaf8u: goto label_11eaf8;
        default: break;
    }

    ctx->pc = 0x11ea48u;

    // 0x11ea48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11ea48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11ea4c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x11ea50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11ea50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11ea54: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x11ea54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x11ea58: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11ea58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11ea5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11ea5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea60: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11ea60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11ea64: 0x2442b548  addiu       $v0, $v0, -0x4AB8
    ctx->pc = 0x11ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948168));
    // 0x11ea68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ea68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ea6c: 0x2463b568  addiu       $v1, $v1, -0x4A98
    ctx->pc = 0x11ea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948200));
    // 0x11ea70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11ea70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea74: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x11ea74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x11ea78: 0x8e240128  lw          $a0, 0x128($s1)
    ctx->pc = 0x11ea78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x11ea7c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11EA7Cu;
    {
        const bool branch_taken_0x11ea7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA7Cu;
        // 0x11ea80: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea7c) {
            ctx->pc = 0x11EA98u;
            goto label_11ea98;
        }
    }
    ctx->pc = 0x11EA84u;
    // 0x11ea84: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x11ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x11ea88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11ea88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea8c: 0xc044f16  jal         func_113C58
    ctx->pc = 0x11EA8Cu;
    SET_GPR_U32(ctx, 31, 0x11EA94u);
    ctx->pc = 0x11EA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EA8Cu;
    // 0x11ea90: 0x8c44830c  lw          $a0, -0x7CF4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113C58u, 0x11EA8Cu, 0x11EA94u)) {
        return;
    }
    ctx->pc = 0x11EA94u;
label_11ea94:
    // 0x11ea94: 0xae200128  sw          $zero, 0x128($s1)
    ctx->pc = 0x11ea94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 0));
label_11ea98:
    // 0x11ea98: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x11ea98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x11ea9c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x11ea9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x11eaa0: 0x24a544e8  addiu       $a1, $a1, 0x44E8
    ctx->pc = 0x11eaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17640));
    // 0x11eaa4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11EAA4u;
    SET_GPR_U32(ctx, 31, 0x11EAACu);
    ctx->pc = 0x11EAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EAA4u;
    // 0x11eaa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11EAA4u, 0x11EAACu)) {
        return;
    }
    ctx->pc = 0x11EAACu;
label_11eaac:
    // 0x11eaac: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x11eaacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x11eab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11eab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eab4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11EAB4u;
    SET_GPR_U32(ctx, 31, 0x11EABCu);
    ctx->pc = 0x11EAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EAB4u;
    // 0x11eab8: 0x24a544f0  addiu       $a1, $a1, 0x44F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11EAB4u, 0x11EABCu)) {
        return;
    }
    ctx->pc = 0x11EABCu;
label_11eabc:
    // 0x11eabc: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x11eabcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x11eac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11eac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eac4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11EAC4u;
    SET_GPR_U32(ctx, 31, 0x11EACCu);
    ctx->pc = 0x11EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EAC4u;
    // 0x11eac8: 0x24a544f8  addiu       $a1, $a1, 0x44F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11EAC4u, 0x11EACCu)) {
        return;
    }
    ctx->pc = 0x11EACCu;
label_11eacc:
    // 0x11eacc: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x11eaccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x11ead0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ead0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ead4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11EAD4u;
    SET_GPR_U32(ctx, 31, 0x11EADCu);
    ctx->pc = 0x11EAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EAD4u;
    // 0x11ead8: 0x24a54500  addiu       $a1, $a1, 0x4500 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11EAD4u, 0x11EADCu)) {
        return;
    }
    ctx->pc = 0x11EADCu;
label_11eadc:
    // 0x11eadc: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x11eadcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x11eae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11eae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eae4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11EAE4u;
    SET_GPR_U32(ctx, 31, 0x11EAECu);
    ctx->pc = 0x11EAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EAE4u;
    // 0x11eae8: 0x24a54508  addiu       $a1, $a1, 0x4508 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11EAE4u, 0x11EAECu)) {
        return;
    }
    ctx->pc = 0x11EAECu;
label_11eaec:
    // 0x11eaec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11eaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eaf0: 0xc04465e  jal         func_111978
    ctx->pc = 0x11EAF0u;
    SET_GPR_U32(ctx, 31, 0x11EAF8u);
    ctx->pc = 0x11EAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EAF0u;
    // 0x11eaf4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111978u, 0x11EAF0u, 0x11EAF8u)) {
        return;
    }
    ctx->pc = 0x11EAF8u;
label_11eaf8:
    // 0x11eaf8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11eaf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11eafc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11eafcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11eb00: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11eb00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11eb04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11eb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11eb08: 0x3e00008  jr          $ra
    ctx->pc = 0x11EB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB08u;
        // 0x11eb0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EB10u;
}
