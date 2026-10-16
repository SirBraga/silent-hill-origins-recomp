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

// Function: sub_00280FB8
// Address: 0x280fb8 - 0x281078
void sub_00280FB8_0x280fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280FB8_0x280fb8");
#endif

    switch (ctx->pc) {
        case 0x280ff0u: goto label_280ff0;
        case 0x281038u: goto label_281038;
        case 0x28104cu: goto label_28104c;
        case 0x281058u: goto label_281058;
        default: break;
    }

    ctx->pc = 0x280fb8u;

    // 0x280fb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x280fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x280fbc: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x280fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x280fc0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x280fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x280fc4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x280fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x280fc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x280fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x280fcc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x280fccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280fd0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x280fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x280fd4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x280fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x280fd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280fdc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x280fdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280fe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280fe4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x280fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280fe8: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x280fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x280fec: 0x0  nop
    ctx->pc = 0x280fecu;
    // NOP
label_280ff0:
    // 0x280ff0: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x280ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x280ff4: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x280ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x280ff8: 0x14670003  bne         $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x280FF8u;
    {
        const bool branch_taken_0x280ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x280FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FF8u;
        // 0x280ffc: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ff8) {
            ctx->pc = 0x281008u;
            goto label_281008;
        }
    }
    ctx->pc = 0x281000u;
    // 0x281000: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x281000u;
    {
        const bool branch_taken_0x281000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281000u;
        // 0x281004: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281000) {
            ctx->pc = 0x28101Cu;
            goto label_28101c;
        }
    }
    ctx->pc = 0x281008u;
label_281008:
    // 0x281008: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x281008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28100c: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x28100cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x281010: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x281010u;
    {
        const bool branch_taken_0x281010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x281014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281010u;
        // 0x281014: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281010) {
            ctx->pc = 0x280FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280ff0;
        }
    }
    ctx->pc = 0x281018u;
    // 0x281018: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x281018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28101c:
    // 0x28101c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x28101cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x281020: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x281020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x281024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x281024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x281028: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281028u;
    {
        const bool branch_taken_0x281028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281028u;
        // 0x28102c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281028) {
            ctx->pc = 0x28103Cu;
            goto label_28103c;
        }
    }
    ctx->pc = 0x281030u;
    // 0x281030: 0xc08ab74  jal         func_22ADD0
    ctx->pc = 0x281030u;
    SET_GPR_U32(ctx, 31, 0x281038u);
    ctx->pc = 0x22ADD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ADD0u, 0x281030u, 0x281038u)) {
        return;
    }
    ctx->pc = 0x281038u;
label_281038:
    // 0x281038: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x281038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_28103c:
    // 0x28103c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x28103cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x281040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281044: 0xc0a0608  jal         func_281820
    ctx->pc = 0x281044u;
    SET_GPR_U32(ctx, 31, 0x28104Cu);
    ctx->pc = 0x281048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281044u;
    // 0x281048: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281820u, 0x281044u, 0x28104Cu)) {
        return;
    }
    ctx->pc = 0x28104Cu;
label_28104c:
    // 0x28104c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28104cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281050: 0xc0a0608  jal         func_281820
    ctx->pc = 0x281050u;
    SET_GPR_U32(ctx, 31, 0x281058u);
    ctx->pc = 0x281054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281050u;
    // 0x281054: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281820u, 0x281050u, 0x281058u)) {
        return;
    }
    ctx->pc = 0x281058u;
label_281058:
    // 0x281058: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x281058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28105c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28105cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281060: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x281060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281064: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x281064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28106c: 0x3e00008  jr          $ra
    ctx->pc = 0x28106Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28106Cu;
        // 0x281070: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28106Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281074u;
    // 0x281074: 0x0  nop
    ctx->pc = 0x281074u;
    // NOP
    ctx->pc = 0x281078u;
}
