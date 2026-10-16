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

// Function: sub_0031AB48
// Address: 0x31ab48 - 0x31ac50
void sub_0031AB48_0x31ab48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AB48_0x31ab48");
#endif

    switch (ctx->pc) {
        case 0x31ab98u: goto label_31ab98;
        case 0x31aba8u: goto label_31aba8;
        case 0x31abd0u: goto label_31abd0;
        case 0x31ac08u: goto label_31ac08;
        default: break;
    }

    ctx->pc = 0x31ab48u;

    // 0x31ab48: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31ab48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x31ab4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ab50: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x31ab50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x31ab54: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x31ab54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x31ab58: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x31ab58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ab5c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x31ab5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x31ab60: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x31ab60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ab64: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x31ab64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x31ab68: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x31ab68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ab6c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x31ab6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x31ab70: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x31ab70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x31ab74: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x31ab74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x31ab78: 0x14e2000d  bne         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31AB78u;
    {
        const bool branch_taken_0x31ab78 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x31AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB78u;
        // 0x31ab7c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ab78) {
            ctx->pc = 0x31ABB0u;
            goto label_31abb0;
        }
    }
    ctx->pc = 0x31AB80u;
    // 0x31ab80: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x31ab80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x31ab84: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x31ab84u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x31ab88: 0x26319238  addiu       $s1, $s1, -0x6DC8
    ctx->pc = 0x31ab88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939192));
    // 0x31ab8c: 0x8e0670bc  lw          $a2, 0x70BC($s0)
    ctx->pc = 0x31ab8cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6870BCu));
    // 0x31ab90: 0xc0c863a  jal         func_3218E8
    ctx->pc = 0x31AB90u;
    SET_GPR_U32(ctx, 31, 0x31AB98u);
    ctx->pc = 0x31AB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AB90u;
    // 0x31ab94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3218E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3218E8u, 0x31AB90u, 0x31AB98u)) {
        return;
    }
    ctx->pc = 0x31AB98u;
label_31ab98:
    // 0x31ab98: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x31ab98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x31ab9c: 0xae0070bc  sw          $zero, 0x70BC($s0)
    ctx->pc = 0x31ab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28860), GPR_U32(ctx, 0));
    // 0x31aba0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31ABA0u;
    {
        const bool branch_taken_0x31aba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABA0u;
        // 0x31aba4: 0xac7170c0  sw          $s1, 0x70C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28864), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aba0) {
            ctx->pc = 0x31AC28u;
            goto label_31ac28;
        }
    }
    ctx->pc = 0x31ABA8u;
label_31aba8:
    // 0x31aba8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x31ABA8u;
    {
        const bool branch_taken_0x31aba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABA8u;
        // 0x31abac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aba8) {
            ctx->pc = 0x31AC28u;
            goto label_31ac28;
        }
    }
    ctx->pc = 0x31ABB0u;
label_31abb0:
    // 0x31abb0: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x31ABB0u;
    {
        const bool branch_taken_0x31abb0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABB0u;
        // 0x31abb4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31abb0) {
            ctx->pc = 0x31AC24u;
            goto label_31ac24;
        }
    }
    ctx->pc = 0x31ABB8u;
    // 0x31abb8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x31abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x31abbc: 0x3c110068  lui         $s1, 0x68
    ctx->pc = 0x31abbcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)104 << 16));
    // 0x31abc0: 0x24559238  addiu       $s5, $v0, -0x6DC8
    ctx->pc = 0x31abc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939192));
    // 0x31abc4: 0x3c120068  lui         $s2, 0x68
    ctx->pc = 0x31abc4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)104 << 16));
    // 0x31abc8: 0x2d01821  addu        $v1, $s6, $s0
    ctx->pc = 0x31abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x31abcc: 0x0  nop
    ctx->pc = 0x31abccu;
    // NOP
label_31abd0:
    // 0x31abd0: 0x8e2470c0  lw          $a0, 0x70C0($s1)
    ctx->pc = 0x31abd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28864)));
    // 0x31abd4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x31abd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31abd8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x31abd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x31abdc: 0x8e4270bc  lw          $v0, 0x70BC($s2)
    ctx->pc = 0x31abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28860)));
    // 0x31abe0: 0x8e2370c0  lw          $v1, 0x70C0($s1)
    ctx->pc = 0x31abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28864)));
    // 0x31abe4: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x31abe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31abe8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31abe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31abec: 0xae4670bc  sw          $a2, 0x70BC($s2)
    ctx->pc = 0x31abecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28860), GPR_U32(ctx, 6));
    // 0x31abf0: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x31abf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x31abf4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31ABF4u;
    {
        const bool branch_taken_0x31abf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABF4u;
        // 0x31abf8: 0xae2370c0  sw          $v1, 0x70C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28864), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31abf4) {
            ctx->pc = 0x31AC14u;
            goto label_31ac14;
        }
    }
    ctx->pc = 0x31ABFCu;
    // 0x31abfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31abfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac00: 0xc0c863a  jal         func_3218E8
    ctx->pc = 0x31AC00u;
    SET_GPR_U32(ctx, 31, 0x31AC08u);
    ctx->pc = 0x31AC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AC00u;
    // 0x31ac04: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3218E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3218E8u, 0x31AC00u, 0x31AC08u)) {
        return;
    }
    ctx->pc = 0x31AC08u;
label_31ac08:
    // 0x31ac08: 0xae3570c0  sw          $s5, 0x70C0($s1)
    ctx->pc = 0x31ac08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28864), GPR_U32(ctx, 21));
    // 0x31ac0c: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x31AC0Cu;
    {
        const bool branch_taken_0x31ac0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC0Cu;
        // 0x31ac10: 0xae4070bc  sw          $zero, 0x70BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ac0c) {
            ctx->pc = 0x31ABA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31aba8;
        }
    }
    ctx->pc = 0x31AC14u;
label_31ac14:
    // 0x31ac14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31ac14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31ac18: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x31ac18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x31ac1c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x31AC1Cu;
    {
        const bool branch_taken_0x31ac1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC1Cu;
        // 0x31ac20: 0x2d01821  addu        $v1, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ac1c) {
            ctx->pc = 0x31ABD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31abd0;
        }
    }
    ctx->pc = 0x31AC24u;
label_31ac24:
    // 0x31ac24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31ac24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31ac28:
    // 0x31ac28: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x31ac28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31ac2c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x31ac2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31ac30: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x31ac30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31ac34: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31ac34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31ac38: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x31ac38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31ac3c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x31ac3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ac40: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x31ac40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ac44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31ac44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ac48: 0x3e00008  jr          $ra
    ctx->pc = 0x31AC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC48u;
        // 0x31ac4c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AC50u;
}
