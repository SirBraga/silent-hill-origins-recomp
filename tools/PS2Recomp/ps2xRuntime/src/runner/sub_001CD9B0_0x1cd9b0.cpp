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

// Function: sub_001CD9B0
// Address: 0x1cd9b0 - 0x1cda30
void sub_001CD9B0_0x1cd9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD9B0_0x1cd9b0");
#endif

    switch (ctx->pc) {
        case 0x1cd9c4u: goto label_1cd9c4;
        case 0x1cd9d8u: goto label_1cd9d8;
        case 0x1cd9e0u: goto label_1cd9e0;
        case 0x1cda1cu: goto label_1cda1c;
        default: break;
    }

    ctx->pc = 0x1cd9b0u;

    // 0x1cd9b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cd9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd9b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cd9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cd9b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd9bc: 0xc06bbe0  jal         func_1AEF80
    ctx->pc = 0x1CD9BCu;
    SET_GPR_U32(ctx, 31, 0x1CD9C4u);
    ctx->pc = 0x1CD9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD9BCu;
    // 0x1cd9c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1CD9BCu, 0x1CD9C4u)) {
        return;
    }
    ctx->pc = 0x1CD9C4u;
label_1cd9c4:
    // 0x1cd9c4: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1cd9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1cd9c8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD9C8u;
    {
        const bool branch_taken_0x1cd9c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9C8u;
        // 0x1cd9cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd9c8) {
            ctx->pc = 0x1CD9E0u;
            goto label_1cd9e0;
        }
    }
    ctx->pc = 0x1CD9D0u;
    // 0x1cd9d0: 0xc06db7c  jal         func_1B6DF0
    ctx->pc = 0x1CD9D0u;
    SET_GPR_U32(ctx, 31, 0x1CD9D8u);
    ctx->pc = 0x1B6DF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6DF0u, 0x1CD9D0u, 0x1CD9D8u)) {
        return;
    }
    ctx->pc = 0x1CD9D8u;
label_1cd9d8:
    // 0x1cd9d8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cd9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cd9dc: 0x0  nop
    ctx->pc = 0x1cd9dcu;
    // NOP
label_1cd9e0:
    // 0x1cd9e0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cd9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cd9e4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cd9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cd9e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cd9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cd9ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cd9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cd9f0: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1cd9f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1cd9f4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CD9F4u;
    {
        const bool branch_taken_0x1cd9f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9F4u;
        // 0x1cd9f8: 0xac4001d0  sw          $zero, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd9f4) {
            ctx->pc = 0x1CD9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd9e0;
        }
    }
    ctx->pc = 0x1CD9FCu;
    // 0x1cd9fc: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cd9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cda00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cda00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cda04: 0xac4000f4  sw          $zero, 0xF4($v0)
    ctx->pc = 0x1cda04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 0));
    // 0x1cda08: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1cda08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cda0c: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1cda0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1cda10: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cda10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cda14: 0xc073732  jal         func_1CDCC8
    ctx->pc = 0x1CDA14u;
    SET_GPR_U32(ctx, 31, 0x1CDA1Cu);
    ctx->pc = 0x1CDA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDA14u;
    // 0x1cda18: 0xac4001d0  sw          $zero, 0x1D0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDCC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CDCC8u, 0x1CDA14u, 0x1CDA1Cu)) {
        return;
    }
    ctx->pc = 0x1CDA1Cu;
label_1cda1c:
    // 0x1cda1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cda1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cda20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cda20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cda24: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA24u;
        // 0x1cda28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDA2Cu;
    // 0x1cda2c: 0x0  nop
    ctx->pc = 0x1cda2cu;
    // NOP
    ctx->pc = 0x1cda30u;
}
