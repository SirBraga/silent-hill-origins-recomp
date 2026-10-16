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

// Function: sub_0018DF60
// Address: 0x18df60 - 0x18e088
void sub_0018DF60_0x18df60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DF60_0x18df60");
#endif

    switch (ctx->pc) {
        case 0x18dfacu: goto label_18dfac;
        case 0x18dfc0u: goto label_18dfc0;
        case 0x18dfccu: goto label_18dfcc;
        case 0x18e014u: goto label_18e014;
        case 0x18e01cu: goto label_18e01c;
        default: break;
    }

    ctx->pc = 0x18df60u;

    // 0x18df60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18df60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18df64: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x18df64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x18df68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18df68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18df6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18df6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df70: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x18df70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x18df74: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18df74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df78: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x18df78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x18df7c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x18df7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x18df80: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x18df80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x18df84: 0x12600037  beqz        $s3, . + 4 + (0x37 << 2)
    ctx->pc = 0x18DF84u;
    {
        const bool branch_taken_0x18df84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF84u;
        // 0x18df88: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df84) {
            ctx->pc = 0x18E064u;
            goto label_18e064;
        }
    }
    ctx->pc = 0x18DF8Cu;
    // 0x18df8c: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x18DF8Cu;
    {
        const bool branch_taken_0x18df8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF8Cu;
        // 0x18df90: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df8c) {
            ctx->pc = 0x18E064u;
            goto label_18e064;
        }
    }
    ctx->pc = 0x18DF94u;
    // 0x18df94: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x18df94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x18df98: 0x24a59478  addiu       $a1, $a1, -0x6B88
    ctx->pc = 0x18df98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939768));
    // 0x18df9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18df9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dfa0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18dfa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dfa4: 0xc07d352  jal         func_1F4D48
    ctx->pc = 0x18DFA4u;
    SET_GPR_U32(ctx, 31, 0x18DFACu);
    ctx->pc = 0x18DFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DFA4u;
    // 0x18dfa8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D48u, 0x18DFA4u, 0x18DFACu)) {
        return;
    }
    ctx->pc = 0x18DFACu;
label_18dfac:
    // 0x18dfac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18dfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dfb0: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x18DFB0u;
    {
        const bool branch_taken_0x18dfb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFB0u;
        // 0x18dfb4: 0x24150006  addiu       $s5, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dfb0) {
            ctx->pc = 0x18E064u;
            goto label_18e064;
        }
    }
    ctx->pc = 0x18DFB8u;
    // 0x18dfb8: 0x24140012  addiu       $s4, $zero, 0x12
    ctx->pc = 0x18dfb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x18dfbc: 0x0  nop
    ctx->pc = 0x18dfbcu;
    // NOP
label_18dfc0:
    // 0x18dfc0: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x18dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x18dfc4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x18DFC4u;
    SET_GPR_U32(ctx, 31, 0x18DFCCu);
    ctx->pc = 0x18DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DFC4u;
    // 0x18dfc8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x18DFC4u, 0x18DFCCu)) {
        return;
    }
    ctx->pc = 0x18DFCCu;
label_18dfcc:
    // 0x18dfcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18dfccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dfd0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x18dfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x18dfd4: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x18dfd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x18dfd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18dfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dfdc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18dfdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dfe0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18dfe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dfe4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x18dfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x18dfe8: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x18dfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x18dfec: 0xae150050  sw          $s5, 0x50($s0)
    ctx->pc = 0x18dfecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 21));
    // 0x18dff0: 0xae140054  sw          $s4, 0x54($s0)
    ctx->pc = 0x18dff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 20));
    // 0x18dff4: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x18dff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x18dff8: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x18dff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x18dffc: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x18dffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x18e000: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x18e000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x18e004: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x18e004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x18e008: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x18e008u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e00c: 0xc07d39c  jal         func_1F4E70
    ctx->pc = 0x18E00Cu;
    SET_GPR_U32(ctx, 31, 0x18E014u);
    ctx->pc = 0x18E010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E00Cu;
    // 0x18e010: 0xa2000028  sb          $zero, 0x28($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4E70u, 0x18E00Cu, 0x18E014u)) {
        return;
    }
    ctx->pc = 0x18E014u;
label_18e014:
    // 0x18e014: 0xc080858  jal         func_202160
    ctx->pc = 0x18E014u;
    SET_GPR_U32(ctx, 31, 0x18E01Cu);
    ctx->pc = 0x18E018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E014u;
    // 0x18e018: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x18E014u, 0x18E01Cu)) {
        return;
    }
    ctx->pc = 0x18E01Cu;
label_18e01c:
    // 0x18e01c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e020: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x18e020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18e024: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x18e024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x18e028: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x18e028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x18e02c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E02Cu;
    {
        const bool branch_taken_0x18e02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E02Cu;
        // 0x18e030: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e02c) {
            ctx->pc = 0x18E038u;
            goto label_18e038;
        }
    }
    ctx->pc = 0x18E034u;
    // 0x18e034: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x18e034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_18e038:
    // 0x18e038: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x18e038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18e03c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18E03Cu;
    {
        const bool branch_taken_0x18e03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e03c) {
            ctx->pc = 0x18E040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E03Cu;
            // 0x18e040: 0xae240004  sw          $a0, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E044u;
            goto label_18e044;
        }
    }
    ctx->pc = 0x18E044u;
label_18e044:
    // 0x18e044: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18e044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e048: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18e048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18e04c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e050: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18e050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18e054: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x18e054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x18e058: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x18e058u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x18e05c: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x18E05Cu;
    {
        const bool branch_taken_0x18e05c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E05Cu;
        // 0x18e060: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e05c) {
            ctx->pc = 0x18DFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18dfc0;
        }
    }
    ctx->pc = 0x18E064u;
label_18e064:
    // 0x18e064: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x18e064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18e068: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x18e068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18e06c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x18e06cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e070: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18e070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e074: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x18e074u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e078: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x18e078u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e07c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18e07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e080: 0x3e00008  jr          $ra
    ctx->pc = 0x18E080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E080u;
        // 0x18e084: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E088u;
}
