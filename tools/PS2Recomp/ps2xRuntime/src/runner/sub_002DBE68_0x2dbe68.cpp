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

// Function: sub_002DBE68
// Address: 0x2dbe68 - 0x2dbe90
void sub_002DBE68_0x2dbe68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBE68_0x2dbe68");
#endif

    switch (ctx->pc) {
        case 0x2dbe80u: goto label_2dbe80;
        default: break;
    }

    ctx->pc = 0x2dbe68u;

    // 0x2dbe68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dbe68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dbe6c: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2dbe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2dbe70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dbe70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dbe74: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2dbe74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2dbe78: 0xc0b6ea8  jal         func_2DBAA0
    ctx->pc = 0x2DBE78u;
    SET_GPR_U32(ctx, 31, 0x2DBE80u);
    ctx->pc = 0x2DBE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBE78u;
    // 0x2dbe7c: 0x24844110  addiu       $a0, $a0, 0x4110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DBAA0u, 0x2DBE78u, 0x2DBE80u)) {
        return;
    }
    ctx->pc = 0x2DBE80u;
label_2dbe80:
    // 0x2dbe80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dbe80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbe84: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2dbe84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2dbe88: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE88u;
        // 0x2dbe8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBE90u;
}
