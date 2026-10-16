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

// Function: sub_001AED80
// Address: 0x1aed80 - 0x1aedf0
void sub_001AED80_0x1aed80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AED80_0x1aed80");
#endif

    switch (ctx->pc) {
        case 0x1aeda8u: goto label_1aeda8;
        case 0x1aedb4u: goto label_1aedb4;
        default: break;
    }

    ctx->pc = 0x1aed80u;

    // 0x1aed80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1aed80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1aed84: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1aed84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1aed88: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1aed88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1aed8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1aed8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1aed90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aed90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aed94: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1aed94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1aed98: 0x245190f8  addiu       $s1, $v0, -0x6F08
    ctx->pc = 0x1aed98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938872));
    // 0x1aed9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aed9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aeda0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1aeda0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeda4: 0x0  nop
    ctx->pc = 0x1aeda4u;
    // NOP
label_1aeda8:
    // 0x1aeda8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1aeda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1aedac: 0xc0c5c96  jal         func_317258
    ctx->pc = 0x1AEDACu;
    SET_GPR_U32(ctx, 31, 0x1AEDB4u);
    ctx->pc = 0x1AEDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEDACu;
    // 0x1aedb0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317258u, 0x1AEDACu, 0x1AEDB4u)) {
        return;
    }
    ctx->pc = 0x1AEDB4u;
label_1aedb4:
    // 0x1aedb4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEDB4u;
    {
        const bool branch_taken_0x1aedb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aedb4) {
            ctx->pc = 0x1AEDB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEDB4u;
            // 0x1aedb8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEDC4u;
            goto label_1aedc4;
        }
    }
    ctx->pc = 0x1AEDBCu;
    // 0x1aedbc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AEDBCu;
    {
        const bool branch_taken_0x1aedbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDBCu;
        // 0x1aedc0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aedbc) {
            ctx->pc = 0x1AEDD4u;
            goto label_1aedd4;
        }
    }
    ctx->pc = 0x1AEDC4u;
label_1aedc4:
    // 0x1aedc4: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x1aedc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1aedc8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AEDC8u;
    {
        const bool branch_taken_0x1aedc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDC8u;
        // 0x1aedcc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aedc8) {
            ctx->pc = 0x1AEDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aeda8;
        }
    }
    ctx->pc = 0x1AEDD0u;
    // 0x1aedd0: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1aedd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1aedd4:
    // 0x1aedd4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1aedd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aedd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1aedd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aeddc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1aeddcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aede0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aede0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aede4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDE4u;
        // 0x1aede8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEDECu;
    // 0x1aedec: 0x0  nop
    ctx->pc = 0x1aedecu;
    // NOP
    ctx->pc = 0x1aedf0u;
}
