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

// Function: sub_0024DBE8
// Address: 0x24dbe8 - 0x24dc20
void sub_0024DBE8_0x24dbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DBE8_0x24dbe8");
#endif

    switch (ctx->pc) {
        case 0x24dbf0u: goto label_24dbf0;
        default: break;
    }

    ctx->pc = 0x24dbe8u;

    // 0x24dbe8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x24dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x24dbec: 0x0  nop
    ctx->pc = 0x24dbecu;
    // NOP
label_24dbf0:
    // 0x24dbf0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24DBF0u;
    {
        const bool branch_taken_0x24dbf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dbf0) {
            ctx->pc = 0x24DC10u;
            goto label_24dc10;
        }
    }
    ctx->pc = 0x24DBF8u;
    // 0x24dbf8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x24dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x24dbfc: 0x0  nop
    ctx->pc = 0x24dbfcu;
    // NOP
    // 0x24dc00: 0x5445fffb  bnel        $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x24DC00u;
    {
        const bool branch_taken_0x24dc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x24dc00) {
            ctx->pc = 0x24DC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DC00u;
            // 0x24dc04: 0x8c630030  lw          $v1, 0x30($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dbf0;
        }
    }
    ctx->pc = 0x24DC08u;
    // 0x24dc08: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DC08u;
    {
        const bool branch_taken_0x24dc08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24dc08) {
            ctx->pc = 0x24DC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DC08u;
            // 0x24dc0c: 0xac66001c  sw          $a2, 0x1C($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DC18u;
            goto label_24dc18;
        }
    }
    ctx->pc = 0x24DC10u;
label_24dc10:
    // 0x24dc10: 0x3e00008  jr          $ra
    ctx->pc = 0x24DC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC10u;
        // 0x24dc14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DC18u;
label_24dc18:
    // 0x24dc18: 0x3e00008  jr          $ra
    ctx->pc = 0x24DC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC18u;
        // 0x24dc1c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DC20u;
}
