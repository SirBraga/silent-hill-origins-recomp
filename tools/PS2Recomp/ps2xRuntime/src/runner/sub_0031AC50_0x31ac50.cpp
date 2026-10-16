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

// Function: sub_0031AC50
// Address: 0x31ac50 - 0x31ad58
void sub_0031AC50_0x31ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AC50_0x31ac50");
#endif

    switch (ctx->pc) {
        case 0x31aca0u: goto label_31aca0;
        case 0x31acb8u: goto label_31acb8;
        case 0x31ace8u: goto label_31ace8;
        case 0x31ad18u: goto label_31ad18;
        default: break;
    }

    ctx->pc = 0x31ac50u;

    // 0x31ac50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x31ac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x31ac54: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x31ac54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x31ac58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31ac58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac5c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x31ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x31ac60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31ac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31ac64: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x31ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x31ac68: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x31ac68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x31ac6c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x31ac6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac70: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x31ac70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x31ac74: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x31ac74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac78: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x31ac78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x31ac7c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x31ac7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x31ac80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31ac80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31ac84: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x31AC84u;
    {
        const bool branch_taken_0x31ac84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC84u;
        // 0x31ac88: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ac84) {
            ctx->pc = 0x31AD04u;
            goto label_31ad04;
        }
    }
    ctx->pc = 0x31AC8Cu;
    // 0x31ac8c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x31ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x31ac90: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x31ac90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x31ac94: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x31ac94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x31ac98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31ac98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac9c: 0x242880a  movz        $s1, $s2, $v0
    ctx->pc = 0x31ac9cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18));
label_31aca0:
    // 0x31aca0: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x31aca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x31aca4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31ACA4u;
    {
        const bool branch_taken_0x31aca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ACA4u;
        // 0x31aca8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aca4) {
            ctx->pc = 0x31ACD8u;
            goto label_31acd8;
        }
    }
    ctx->pc = 0x31ACACu;
    // 0x31acac: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x31acacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x31acb0: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x31acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x31acb4: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x31acb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_31acb8:
    // 0x31acb8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x31acb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31acbc: 0x3a61021  addu        $v0, $sp, $a2
    ctx->pc = 0x31acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
    // 0x31acc0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31acc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31acc4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x31acc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x31acc8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x31acc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31accc: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31ACCCu;
    {
        const bool branch_taken_0x31accc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ACCCu;
        // 0x31acd0: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31accc) {
            ctx->pc = 0x31ACB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31acb8;
        }
    }
    ctx->pc = 0x31ACD4u;
    // 0x31acd4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x31acd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31acd8:
    // 0x31acd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31acd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31acdc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31acdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ace0: 0xc0c6ad2  jal         func_31AB48
    ctx->pc = 0x31ACE0u;
    SET_GPR_U32(ctx, 31, 0x31ACE8u);
    ctx->pc = 0x31ACE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ACE0u;
    // 0x31ace4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AB48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AB48u, 0x31ACE0u, 0x31ACE8u)) {
        return;
    }
    ctx->pc = 0x31ACE8u;
label_31ace8:
    // 0x31ace8: 0x12320010  beq         $s1, $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x31ACE8u;
    {
        const bool branch_taken_0x31ace8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x31ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ACE8u;
        // 0x31acec: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ace8) {
            ctx->pc = 0x31AD2Cu;
            goto label_31ad2c;
        }
    }
    ctx->pc = 0x31ACF0u;
    // 0x31acf0: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x31ACF0u;
    {
        const bool branch_taken_0x31acf0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x31ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ACF0u;
        // 0x31acf4: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31acf0) {
            ctx->pc = 0x31AD2Cu;
            goto label_31ad2c;
        }
    }
    ctx->pc = 0x31ACF8u;
    // 0x31acf8: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x31acf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x31acfc: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x31ACFCu;
    {
        const bool branch_taken_0x31acfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ACFCu;
        // 0x31ad00: 0x242880b  movn        $s1, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31acfc) {
            ctx->pc = 0x31ACA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31aca0;
        }
    }
    ctx->pc = 0x31AD04u;
label_31ad04:
    // 0x31ad04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31ad04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31ad08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad0c: 0x123040  sll         $a2, $s2, 1
    ctx->pc = 0x31ad0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x31ad10: 0xc0c6ad2  jal         func_31AB48
    ctx->pc = 0x31AD10u;
    SET_GPR_U32(ctx, 31, 0x31AD18u);
    ctx->pc = 0x31AD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD10u;
    // 0x31ad14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AB48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AB48u, 0x31AD10u, 0x31AD18u)) {
        return;
    }
    ctx->pc = 0x31AD18u;
label_31ad18:
    // 0x31ad18: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x31ad18u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x31ad1c: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31AD1Cu;
    {
        const bool branch_taken_0x31ad1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ad1c) {
            ctx->pc = 0x31AD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AD1Cu;
            // 0x31ad20: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AD24u;
            goto label_31ad24;
        }
    }
    ctx->pc = 0x31AD24u;
label_31ad24:
    // 0x31ad24: 0x1012  mflo        $v0
    ctx->pc = 0x31ad24u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x31ad28: 0x2a840  sll         $s5, $v0, 1
    ctx->pc = 0x31ad28u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_31ad2c:
    // 0x31ad2c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x31ad2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad30: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x31ad30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31ad34: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x31ad34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31ad38: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x31ad38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31ad3c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x31ad3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31ad40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31ad40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31ad44: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x31ad44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31ad48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31ad48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ad4c: 0x3e00008  jr          $ra
    ctx->pc = 0x31AD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD4Cu;
        // 0x31ad50: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AD54u;
    // 0x31ad54: 0x0  nop
    ctx->pc = 0x31ad54u;
    // NOP
    ctx->pc = 0x31ad58u;
}
