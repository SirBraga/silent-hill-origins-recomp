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

// Function: sub_0028F338
// Address: 0x28f338 - 0x28f370
void sub_0028F338_0x28f338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F338_0x28f338");
#endif

    switch (ctx->pc) {
        case 0x28f354u: goto label_28f354;
        default: break;
    }

    ctx->pc = 0x28f338u;

    // 0x28f338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28f33c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f340: 0x8c840068  lw          $a0, 0x68($a0)
    ctx->pc = 0x28f340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x28f344: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F344u;
    {
        const bool branch_taken_0x28f344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F344u;
        // 0x28f348: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f344) {
            ctx->pc = 0x28F358u;
            goto label_28f358;
        }
    }
    ctx->pc = 0x28F34Cu;
    // 0x28f34c: 0xc088c9e  jal         func_223278
    ctx->pc = 0x28F34Cu;
    SET_GPR_U32(ctx, 31, 0x28F354u);
    ctx->pc = 0x223278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x223278u, 0x28F34Cu, 0x28F354u)) {
        return;
    }
    ctx->pc = 0x28F354u;
label_28f354:
    // 0x28f354: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x28f354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_28f358:
    // 0x28f358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f35c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x28f35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x28f360: 0x3e00008  jr          $ra
    ctx->pc = 0x28F360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F360u;
        // 0x28f364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F368u;
    // 0x28f368: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28f368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28f36c: 0x0  nop
    ctx->pc = 0x28f36cu;
    // NOP
    ctx->pc = 0x28f370u;
}
