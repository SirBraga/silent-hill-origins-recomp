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

// Function: sub_0024E248
// Address: 0x24e248 - 0x24e278
void sub_0024E248_0x24e248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E248_0x24e248");
#endif

    switch (ctx->pc) {
        case 0x24e258u: goto label_24e258;
        default: break;
    }

    ctx->pc = 0x24e248u;

    // 0x24e248: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x24e248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x24e24c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24E24Cu;
    {
        const bool branch_taken_0x24e24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e24c) {
            ctx->pc = 0x24E270u;
            goto label_24e270;
        }
    }
    ctx->pc = 0x24E254u;
    // 0x24e254: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x24e254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_24e258:
    // 0x24e258: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E258u;
    {
        const bool branch_taken_0x24e258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x24e258) {
            ctx->pc = 0x24E25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E258u;
            // 0x24e25c: 0x8c630030  lw          $v1, 0x30($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E268u;
            goto label_24e268;
        }
    }
    ctx->pc = 0x24E260u;
    // 0x24e260: 0x3e00008  jr          $ra
    ctx->pc = 0x24E260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E260u;
        // 0x24e264: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E268u;
label_24e268:
    // 0x24e268: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x24E268u;
    {
        const bool branch_taken_0x24e268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e268) {
            ctx->pc = 0x24E26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E268u;
            // 0x24e26c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e258;
        }
    }
    ctx->pc = 0x24E270u;
label_24e270:
    // 0x24e270: 0x3e00008  jr          $ra
    ctx->pc = 0x24E270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E270u;
        // 0x24e274: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E278u;
}
