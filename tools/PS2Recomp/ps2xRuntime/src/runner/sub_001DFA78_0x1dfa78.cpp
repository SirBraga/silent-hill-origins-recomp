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

// Function: sub_001DFA78
// Address: 0x1dfa78 - 0x1dfb10
void sub_001DFA78_0x1dfa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFA78_0x1dfa78");
#endif

    switch (ctx->pc) {
        case 0x1dfa90u: goto label_1dfa90;
        case 0x1dfac4u: goto label_1dfac4;
        case 0x1dfaecu: goto label_1dfaec;
        default: break;
    }

    ctx->pc = 0x1dfa78u;

    // 0x1dfa78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dfa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dfa7c: 0x24040a03  addiu       $a0, $zero, 0xA03
    ctx->pc = 0x1dfa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2563));
    // 0x1dfa80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dfa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dfa84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dfa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dfa88: 0xc095b44  jal         func_256D10
    ctx->pc = 0x1DFA88u;
    SET_GPR_U32(ctx, 31, 0x1DFA90u);
    ctx->pc = 0x1DFA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFA88u;
    // 0x1dfa8c: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256D10u, 0x1DFA88u, 0x1DFA90u)) {
        return;
    }
    ctx->pc = 0x1DFA90u;
label_1dfa90:
    // 0x1dfa90: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFA90u;
    {
        const bool branch_taken_0x1dfa90 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1DFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA90u;
        // 0x1dfa94: 0xae02e6d0  sw          $v0, -0x1930($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa90) {
            ctx->pc = 0x1DFAA0u;
            goto label_1dfaa0;
        }
    }
    ctx->pc = 0x1DFA98u;
    // 0x1dfa98: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1DFA98u;
    {
        const bool branch_taken_0x1dfa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA98u;
        // 0x1dfa9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa98) {
            ctx->pc = 0x1DFB00u;
            goto label_1dfb00;
        }
    }
    ctx->pc = 0x1DFAA0u;
label_1dfaa0:
    // 0x1dfaa0: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1dfaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1dfaa4: 0x3c07001e  lui         $a3, 0x1E
    ctx->pc = 0x1dfaa4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
    // 0x1dfaa8: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1dfaa8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1dfaac: 0x24c6fb10  addiu       $a2, $a2, -0x4F0
    ctx->pc = 0x1dfaacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966032));
    // 0x1dfab0: 0x24e7fb30  addiu       $a3, $a3, -0x4D0
    ctx->pc = 0x1dfab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966064));
    // 0x1dfab4: 0x2508fb38  addiu       $t0, $t0, -0x4C8
    ctx->pc = 0x1dfab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966072));
    // 0x1dfab8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1dfab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dfabc: 0xc095b24  jal         func_256C90
    ctx->pc = 0x1DFABCu;
    SET_GPR_U32(ctx, 31, 0x1DFAC4u);
    ctx->pc = 0x1DFAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFABCu;
    // 0x1dfac0: 0x24050a03  addiu       $a1, $zero, 0xA03 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2563));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256C90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256C90u, 0x1DFABCu, 0x1DFAC4u)) {
        return;
    }
    ctx->pc = 0x1DFAC4u;
label_1dfac4:
    // 0x1dfac4: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DFAC4u;
    {
        const bool branch_taken_0x1dfac4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1DFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAC4u;
        // 0x1dfac8: 0xae02e6d0  sw          $v0, -0x1930($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfac4) {
            ctx->pc = 0x1DFAFCu;
            goto label_1dfafc;
        }
    }
    ctx->pc = 0x1DFACCu;
    // 0x1dfacc: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1dfaccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1dfad0: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1dfad0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1dfad4: 0x3c07001e  lui         $a3, 0x1E
    ctx->pc = 0x1dfad4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
    // 0x1dfad8: 0x24a5fb58  addiu       $a1, $a1, -0x4A8
    ctx->pc = 0x1dfad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966104));
    // 0x1dfadc: 0x24c6fbb8  addiu       $a2, $a2, -0x448
    ctx->pc = 0x1dfadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966200));
    // 0x1dfae0: 0x24e7fc80  addiu       $a3, $a3, -0x380
    ctx->pc = 0x1dfae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966400));
    // 0x1dfae4: 0xc095b36  jal         func_256CD8
    ctx->pc = 0x1DFAE4u;
    SET_GPR_U32(ctx, 31, 0x1DFAECu);
    ctx->pc = 0x1DFAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFAE4u;
    // 0x1dfae8: 0x24040a03  addiu       $a0, $zero, 0xA03 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2563));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256CD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256CD8u, 0x1DFAE4u, 0x1DFAECu)) {
        return;
    }
    ctx->pc = 0x1DFAECu;
label_1dfaec:
    // 0x1dfaec: 0x8e03e6d0  lw          $v1, -0x1930($s0)
    ctx->pc = 0x1dfaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960848)));
    // 0x1dfaf0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1dfaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1dfaf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DFAF4u;
    {
        const bool branch_taken_0x1dfaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAF4u;
        // 0x1dfaf8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfaf4) {
            ctx->pc = 0x1DFB00u;
            goto label_1dfb00;
        }
    }
    ctx->pc = 0x1DFAFCu;
label_1dfafc:
    // 0x1dfafc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dfafcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfb00:
    // 0x1dfb00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dfb00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfb04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dfb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfb08: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB08u;
        // 0x1dfb0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFB10u;
}
