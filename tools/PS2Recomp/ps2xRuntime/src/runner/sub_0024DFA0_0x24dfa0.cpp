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

// Function: sub_0024DFA0
// Address: 0x24dfa0 - 0x24e048
void sub_0024DFA0_0x24dfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DFA0_0x24dfa0");
#endif

    switch (ctx->pc) {
        case 0x24dfccu: goto label_24dfcc;
        case 0x24dfd4u: goto label_24dfd4;
        case 0x24dfe8u: goto label_24dfe8;
        case 0x24e000u: goto label_24e000;
        case 0x24e010u: goto label_24e010;
        default: break;
    }

    ctx->pc = 0x24dfa0u;

    // 0x24dfa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24dfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24dfa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24dfa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dfa8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24dfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x24dfac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x24dfacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dfb0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24dfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24dfb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24dfb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dfb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24dfb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dfbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24dfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24dfc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24dfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dfc4: 0xc09270a  jal         func_249C28
    ctx->pc = 0x24DFC4u;
    SET_GPR_U32(ctx, 31, 0x24DFCCu);
    ctx->pc = 0x24DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DFC4u;
    // 0x24dfc8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x24DFC4u, 0x24DFCCu)) {
        return;
    }
    ctx->pc = 0x24DFCCu;
label_24dfcc:
    // 0x24dfcc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DFCCu;
    {
        const bool branch_taken_0x24dfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFCCu;
        // 0x24dfd0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dfcc) {
            ctx->pc = 0x24DFDCu;
            goto label_24dfdc;
        }
    }
    ctx->pc = 0x24DFD4u;
label_24dfd4:
    // 0x24dfd4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x24DFD4u;
    {
        const bool branch_taken_0x24dfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFD4u;
        // 0x24dfd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dfd4) {
            ctx->pc = 0x24E030u;
            goto label_24e030;
        }
    }
    ctx->pc = 0x24DFDCu;
label_24dfdc:
    // 0x24dfdc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x24DFDCu;
    {
        const bool branch_taken_0x24dfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFDCu;
        // 0x24dfe0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dfdc) {
            ctx->pc = 0x24E030u;
            goto label_24e030;
        }
    }
    ctx->pc = 0x24DFE4u;
    // 0x24dfe4: 0x0  nop
    ctx->pc = 0x24dfe4u;
    // NOP
label_24dfe8:
    // 0x24dfe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24dfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dfec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24dfecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dff0: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x24dff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x24dff4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24dff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dff8: 0xc0926aa  jal         func_249AA8
    ctx->pc = 0x24DFF8u;
    SET_GPR_U32(ctx, 31, 0x24E000u);
    ctx->pc = 0x24DFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DFF8u;
    // 0x24dffc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249AA8u, 0x24DFF8u, 0x24E000u)) {
        return;
    }
    ctx->pc = 0x24E000u;
label_24e000:
    // 0x24e000: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x24E000u;
    {
        const bool branch_taken_0x24e000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E000u;
        // 0x24e004: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e000) {
            ctx->pc = 0x24DFD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dfd4;
        }
    }
    ctx->pc = 0x24E008u;
    // 0x24e008: 0xc093620  jal         func_24D880
    ctx->pc = 0x24E008u;
    SET_GPR_U32(ctx, 31, 0x24E010u);
    ctx->pc = 0x24E00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E008u;
    // 0x24e00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D880u, 0x24E008u, 0x24E010u)) {
        return;
    }
    ctx->pc = 0x24E010u;
label_24e010:
    // 0x24e010: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x24E010u;
    {
        const bool branch_taken_0x24e010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E010u;
        // 0x24e014: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e010) {
            ctx->pc = 0x24DFD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dfd4;
        }
    }
    ctx->pc = 0x24E018u;
    // 0x24e018: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x24e018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x24e01c: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x24e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x24e020: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x24e020u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24e024: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x24E024u;
    {
        const bool branch_taken_0x24e024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E024u;
        // 0x24e028: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e024) {
            ctx->pc = 0x24DFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dfe8;
        }
    }
    ctx->pc = 0x24E02Cu;
    // 0x24e02c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x24e02cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24e030:
    // 0x24e030: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24e030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24e034: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24e034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24e038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24e038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e03c: 0x3e00008  jr          $ra
    ctx->pc = 0x24E03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E03Cu;
        // 0x24e040: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E044u;
    // 0x24e044: 0x0  nop
    ctx->pc = 0x24e044u;
    // NOP
    ctx->pc = 0x24e048u;
}
