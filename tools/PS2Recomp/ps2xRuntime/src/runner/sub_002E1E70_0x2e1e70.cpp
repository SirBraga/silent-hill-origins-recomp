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

// Function: sub_002E1E70
// Address: 0x2e1e70 - 0x2e1ec0
void sub_002E1E70_0x2e1e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1E70_0x2e1e70");
#endif

    switch (ctx->pc) {
        case 0x2e1e90u: goto label_2e1e90;
        case 0x2e1ea8u: goto label_2e1ea8;
        default: break;
    }

    ctx->pc = 0x2e1e70u;

    // 0x2e1e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e1e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e1e74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e1e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e1e78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1e7c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1E7Cu;
    {
        const bool branch_taken_0x2e1e7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1E7Cu;
        // 0x2e1e80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1e7c) {
            ctx->pc = 0x2E1E9Cu;
            goto label_2e1e9c;
        }
    }
    ctx->pc = 0x2E1E84u;
    // 0x2e1e84: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2e1e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2e1e88: 0xc0b807c  jal         func_2E01F0
    ctx->pc = 0x2E1E88u;
    SET_GPR_U32(ctx, 31, 0x2E1E90u);
    ctx->pc = 0x2E1E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1E88u;
    // 0x2e1e8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E01F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E01F0u, 0x2E1E88u, 0x2E1E90u)) {
        return;
    }
    ctx->pc = 0x2E1E90u;
label_2e1e90:
    // 0x2e1e90: 0x8f828c24  lw          $v0, -0x73DC($gp)
    ctx->pc = 0x2e1e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937636)));
    // 0x2e1e94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1E94u;
    {
        const bool branch_taken_0x2e1e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1E94u;
        // 0x2e1e98: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1e94) {
            ctx->pc = 0x2E1EA8u;
            goto label_2e1ea8;
        }
    }
    ctx->pc = 0x2E1E9Cu;
label_2e1e9c:
    // 0x2e1e9c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2e1e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2e1ea0: 0xc0b807c  jal         func_2E01F0
    ctx->pc = 0x2E1EA0u;
    SET_GPR_U32(ctx, 31, 0x2E1EA8u);
    ctx->pc = 0x2E1EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1EA0u;
    // 0x2e1ea4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E01F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E01F0u, 0x2E1EA0u, 0x2E1EA8u)) {
        return;
    }
    ctx->pc = 0x2E1EA8u;
label_2e1ea8:
    // 0x2e1ea8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e1ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1eac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1EB0u;
        // 0x2e1eb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1EB8u;
    // 0x2e1eb8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2e1eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e1ebc: 0x0  nop
    ctx->pc = 0x2e1ebcu;
    // NOP
    ctx->pc = 0x2e1ec0u;
}
