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

// Function: sub_0019AB90
// Address: 0x19ab90 - 0x19ac48
void sub_0019AB90_0x19ab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019AB90_0x19ab90");
#endif

    switch (ctx->pc) {
        case 0x19aba8u: goto label_19aba8;
        case 0x19abf0u: goto label_19abf0;
        case 0x19ac28u: goto label_19ac28;
        default: break;
    }

    ctx->pc = 0x19ab90u;

    // 0x19ab90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19ab90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19ab94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19ab94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x19ab98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19ab98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19ab9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ab9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19aba0: 0xc07664a  jal         func_1D9928
    ctx->pc = 0x19ABA0u;
    SET_GPR_U32(ctx, 31, 0x19ABA8u);
    ctx->pc = 0x19ABA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ABA0u;
    // 0x19aba4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9928u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9928u, 0x19ABA0u, 0x19ABA8u)) {
        return;
    }
    ctx->pc = 0x19ABA8u;
label_19aba8:
    // 0x19aba8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19aba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19abac: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x19abacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x19abb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19abb4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19ABB4u;
    {
        const bool branch_taken_0x19abb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABB4u;
        // 0x19abb8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19abb4) {
            ctx->pc = 0x19ABD8u;
            goto label_19abd8;
        }
    }
    ctx->pc = 0x19ABBCu;
    // 0x19abbc: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x19ABBCu;
    {
        const bool branch_taken_0x19abbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19abbc) {
            ctx->pc = 0x19ABC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19ABBCu;
            // 0x19abc0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AC34u;
            goto label_19ac34;
        }
    }
    ctx->pc = 0x19ABC4u;
    // 0x19abc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19abc8: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19ABC8u;
    {
        const bool branch_taken_0x19abc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19abc8) {
            ctx->pc = 0x19ABCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19ABC8u;
            // 0x19abcc: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19ABE4u;
            goto label_19abe4;
        }
    }
    ctx->pc = 0x19ABD0u;
    // 0x19abd0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x19ABD0u;
    {
        const bool branch_taken_0x19abd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABD0u;
        // 0x19abd4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19abd0) {
            ctx->pc = 0x19AC34u;
            goto label_19ac34;
        }
    }
    ctx->pc = 0x19ABD8u;
label_19abd8:
    // 0x19abd8: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x19abd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x19abdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19ABDCu;
    {
        const bool branch_taken_0x19abdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABDCu;
        // 0x19abe0: 0x2404fc18  addiu       $a0, $zero, -0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19abdc) {
            ctx->pc = 0x19ABE8u;
            goto label_19abe8;
        }
    }
    ctx->pc = 0x19ABE4u;
label_19abe4:
    // 0x19abe4: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x19abe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_19abe8:
    // 0x19abe8: 0xc076542  jal         func_1D9508
    ctx->pc = 0x19ABE8u;
    SET_GPR_U32(ctx, 31, 0x19ABF0u);
    ctx->pc = 0x1D9508u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9508u, 0x19ABE8u, 0x19ABF0u)) {
        return;
    }
    ctx->pc = 0x19ABF0u;
label_19abf0:
    // 0x19abf0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19ABF0u;
    {
        const bool branch_taken_0x19abf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABF0u;
        // 0x19abf4: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19abf0) {
            ctx->pc = 0x19AC28u;
            goto label_19ac28;
        }
    }
    ctx->pc = 0x19ABF8u;
    // 0x19abf8: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x19abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x19abfc: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x19abfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x19ac00: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x19ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
    // 0x19ac04: 0x50820009  beql        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19AC04u;
    {
        const bool branch_taken_0x19ac04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ac04) {
            ctx->pc = 0x19AC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AC04u;
            // 0x19ac08: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AC2Cu;
            goto label_19ac2c;
        }
    }
    ctx->pc = 0x19AC0Cu;
    // 0x19ac0c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ac10: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AC10u;
    {
        const bool branch_taken_0x19ac10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ac10) {
            ctx->pc = 0x19AC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AC10u;
            // 0x19ac14: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AC2Cu;
            goto label_19ac2c;
        }
    }
    ctx->pc = 0x19AC18u;
    // 0x19ac18: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x19ac18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x19ac1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19ac1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac20: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x19AC20u;
    SET_GPR_U32(ctx, 31, 0x19AC28u);
    ctx->pc = 0x19AC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AC20u;
    // 0x19ac24: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x19AC20u, 0x19AC28u)) {
        return;
    }
    ctx->pc = 0x19AC28u;
label_19ac28:
    // 0x19ac28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19ac2c:
    // 0x19ac2c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x19ac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x19ac30: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19ac30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19ac34:
    // 0x19ac34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19ac34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ac38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ac38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ac3c: 0x3e00008  jr          $ra
    ctx->pc = 0x19AC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC3Cu;
        // 0x19ac40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AC44u;
    // 0x19ac44: 0x0  nop
    ctx->pc = 0x19ac44u;
    // NOP
    ctx->pc = 0x19ac48u;
}
