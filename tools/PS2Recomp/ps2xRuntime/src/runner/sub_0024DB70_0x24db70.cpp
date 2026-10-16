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

// Function: sub_0024DB70
// Address: 0x24db70 - 0x24dbb0
void sub_0024DB70_0x24db70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DB70_0x24db70");
#endif

    switch (ctx->pc) {
        case 0x24db78u: goto label_24db78;
        default: break;
    }

    ctx->pc = 0x24db70u;

    // 0x24db70: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x24db70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x24db74: 0x0  nop
    ctx->pc = 0x24db74u;
    // NOP
label_24db78:
    // 0x24db78: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24DB78u;
    {
        const bool branch_taken_0x24db78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24db78) {
            ctx->pc = 0x24DB98u;
            goto label_24db98;
        }
    }
    ctx->pc = 0x24DB80u;
    // 0x24db80: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x24db80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x24db84: 0x0  nop
    ctx->pc = 0x24db84u;
    // NOP
    // 0x24db88: 0x5445fffb  bnel        $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x24DB88u;
    {
        const bool branch_taken_0x24db88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x24db88) {
            ctx->pc = 0x24DB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DB88u;
            // 0x24db8c: 0x8c630030  lw          $v1, 0x30($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24db78;
        }
    }
    ctx->pc = 0x24DB90u;
    // 0x24db90: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DB90u;
    {
        const bool branch_taken_0x24db90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24db90) {
            ctx->pc = 0x24DB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DB90u;
            // 0x24db94: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DBA0u;
            goto label_24dba0;
        }
    }
    ctx->pc = 0x24DB98u;
label_24db98:
    // 0x24db98: 0x3e00008  jr          $ra
    ctx->pc = 0x24DB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB98u;
        // 0x24db9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DBA0u;
label_24dba0:
    // 0x24dba0: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x24dba0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x24dba4: 0xac680014  sw          $t0, 0x14($v1)
    ctx->pc = 0x24dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 8));
    // 0x24dba8: 0x3e00008  jr          $ra
    ctx->pc = 0x24DBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DBA8u;
        // 0x24dbac: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DBB0u;
}
