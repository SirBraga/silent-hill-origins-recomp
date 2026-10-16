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

// Function: sub_00225578
// Address: 0x225578 - 0x2255a0
void sub_00225578_0x225578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225578_0x225578");
#endif

    switch (ctx->pc) {
        case 0x225578u: goto label_225578;
        case 0x22557cu: goto label_22557c;
        case 0x225580u: goto label_225580;
        case 0x225584u: goto label_225584;
        case 0x225588u: goto label_225588;
        case 0x22558cu: goto label_22558c;
        case 0x225590u: goto label_225590;
        case 0x225594u: goto label_225594;
        case 0x225598u: goto label_225598;
        case 0x22559cu: goto label_22559c;
        default: break;
    }

    ctx->pc = 0x225578u;

label_225578:
    // 0x225578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_22557c:
    // 0x22557c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x22557cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_225580:
    // 0x225580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_225584:
    // 0x225584: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x225584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_225588:
    // 0x225588: 0x40f809  jalr        $v0
label_22558c:
    if (ctx->pc == 0x22558Cu) {
        ctx->pc = 0x22558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225588u;
        // 0x22558c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225590u;
        goto label_225590;
    }
    ctx->pc = 0x225588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x225590u);
        ctx->pc = 0x22558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225588u;
        // 0x22558c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225588u, 0x225590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x225590u;
label_225590:
    // 0x225590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225594:
    // 0x225594: 0x3e00008  jr          $ra
label_225598:
    if (ctx->pc == 0x225598u) {
        ctx->pc = 0x225598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225594u;
        // 0x225598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22559Cu;
        goto label_22559c;
    }
    ctx->pc = 0x225594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225594u;
        // 0x225598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22559Cu;
label_22559c:
    // 0x22559c: 0x0  nop
    ctx->pc = 0x22559cu;
    // NOP
    ctx->pc = 0x2255a0u;
}
