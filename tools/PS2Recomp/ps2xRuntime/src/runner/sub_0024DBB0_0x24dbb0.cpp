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

// Function: sub_0024DBB0
// Address: 0x24dbb0 - 0x24dbe8
void sub_0024DBB0_0x24dbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DBB0_0x24dbb0");
#endif

    switch (ctx->pc) {
        case 0x24dbb8u: goto label_24dbb8;
        default: break;
    }

    ctx->pc = 0x24dbb0u;

    // 0x24dbb0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x24dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x24dbb4: 0x0  nop
    ctx->pc = 0x24dbb4u;
    // NOP
label_24dbb8:
    // 0x24dbb8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24DBB8u;
    {
        const bool branch_taken_0x24dbb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dbb8) {
            ctx->pc = 0x24DBD8u;
            goto label_24dbd8;
        }
    }
    ctx->pc = 0x24DBC0u;
    // 0x24dbc0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x24dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x24dbc4: 0x0  nop
    ctx->pc = 0x24dbc4u;
    // NOP
    // 0x24dbc8: 0x5445fffb  bnel        $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x24DBC8u;
    {
        const bool branch_taken_0x24dbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x24dbc8) {
            ctx->pc = 0x24DBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DBC8u;
            // 0x24dbcc: 0x8c630030  lw          $v1, 0x30($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dbb8;
        }
    }
    ctx->pc = 0x24DBD0u;
    // 0x24dbd0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DBD0u;
    {
        const bool branch_taken_0x24dbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24dbd0) {
            ctx->pc = 0x24DBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DBD0u;
            // 0x24dbd4: 0xac660018  sw          $a2, 0x18($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DBE0u;
            goto label_24dbe0;
        }
    }
    ctx->pc = 0x24DBD8u;
label_24dbd8:
    // 0x24dbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x24DBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DBD8u;
        // 0x24dbdc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DBE0u;
label_24dbe0:
    // 0x24dbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x24DBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DBE0u;
        // 0x24dbe4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DBE8u;
}
