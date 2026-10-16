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

// Function: sub_0029D228
// Address: 0x29d228 - 0x29d270
void sub_0029D228_0x29d228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D228_0x29d228");
#endif

    switch (ctx->pc) {
        case 0x29d248u: goto label_29d248;
        default: break;
    }

    ctx->pc = 0x29d228u;

    // 0x29d228: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x29d228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x29d22c: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x29d22cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29d230: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29D230u;
    {
        const bool branch_taken_0x29d230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D230u;
        // 0x29d234: 0x31027  nor         $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d230) {
            ctx->pc = 0x29D268u;
            goto label_29d268;
        }
    }
    ctx->pc = 0x29D238u;
    // 0x29d238: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x29d238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29d23c: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x29d23cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29d240: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29d240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29d244: 0x0  nop
    ctx->pc = 0x29d244u;
    // NOP
label_29d248:
    // 0x29d248: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x29d248u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29d24c: 0x14480003  bne         $v0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D24Cu;
    {
        const bool branch_taken_0x29d24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x29D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D24Cu;
        // 0x29d250: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d24c) {
            ctx->pc = 0x29D25Cu;
            goto label_29d25c;
        }
    }
    ctx->pc = 0x29D254u;
    // 0x29d254: 0x3e00008  jr          $ra
    ctx->pc = 0x29D254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D254u;
        // 0x29d258: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D25Cu;
label_29d25c:
    // 0x29d25c: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x29d25cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29d260: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29D260u;
    {
        const bool branch_taken_0x29d260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D260u;
        // 0x29d264: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d260) {
            ctx->pc = 0x29D248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d248;
        }
    }
    ctx->pc = 0x29D268u;
label_29d268:
    // 0x29d268: 0x3e00008  jr          $ra
    ctx->pc = 0x29D268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D268u;
        // 0x29d26c: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D270u;
}
