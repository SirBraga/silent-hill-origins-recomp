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

// Function: sub_0024C608
// Address: 0x24c608 - 0x24c638
void sub_0024C608_0x24c608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C608_0x24c608");
#endif

    switch (ctx->pc) {
        case 0x24c618u: goto label_24c618;
        default: break;
    }

    ctx->pc = 0x24c608u;

    // 0x24c608: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24c608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c60c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24C60Cu;
    {
        const bool branch_taken_0x24c60c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C60Cu;
        // 0x24c610: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c60c) {
            ctx->pc = 0x24C630u;
            goto label_24c630;
        }
    }
    ctx->pc = 0x24C614u;
    // 0x24c614: 0x0  nop
    ctx->pc = 0x24c614u;
    // NOP
label_24c618:
    // 0x24c618: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x24c618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x24c61c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x24c61cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c620: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x24c620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x24c624: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x24c624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x24c628: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x24C628u;
    {
        const bool branch_taken_0x24c628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C628u;
        // 0x24c62c: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c628) {
            ctx->pc = 0x24C618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c618;
        }
    }
    ctx->pc = 0x24C630u;
label_24c630:
    // 0x24c630: 0x3e00008  jr          $ra
    ctx->pc = 0x24C630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C630u;
        // 0x24c634: 0x2ce20001  sltiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C638u;
}
