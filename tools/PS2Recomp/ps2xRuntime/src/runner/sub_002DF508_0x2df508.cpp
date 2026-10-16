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

// Function: sub_002DF508
// Address: 0x2df508 - 0x2df538
void sub_002DF508_0x2df508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF508_0x2df508");
#endif

    switch (ctx->pc) {
        case 0x2df51cu: goto label_2df51c;
        default: break;
    }

    ctx->pc = 0x2df508u;

    // 0x2df508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2df508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2df50c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2df50cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2df510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df514: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x2DF514u;
    SET_GPR_U32(ctx, 31, 0x2DF51Cu);
    ctx->pc = 0x2DF518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF514u;
    // 0x2df518: 0x24848090  addiu       $a0, $a0, -0x7F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2DF514u, 0x2DF51Cu)) {
        return;
    }
    ctx->pc = 0x2DF51Cu;
label_2df51c:
    // 0x2df51c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df520: 0xaf808bf8  sw          $zero, -0x7408($gp)
    ctx->pc = 0x2df520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937592), GPR_U32(ctx, 0));
    // 0x2df524: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF524u;
        // 0x2df528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF52Cu;
    // 0x2df52c: 0x0  nop
    ctx->pc = 0x2df52cu;
    // NOP
    // 0x2df530: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2df530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2df534: 0x0  nop
    ctx->pc = 0x2df534u;
    // NOP
    ctx->pc = 0x2df538u;
}
