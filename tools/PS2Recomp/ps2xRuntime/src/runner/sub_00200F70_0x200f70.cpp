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

// Function: sub_00200F70
// Address: 0x200f70 - 0x200f90
void sub_00200F70_0x200f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200F70_0x200f70");
#endif

    switch (ctx->pc) {
        case 0x200f84u: goto label_200f84;
        default: break;
    }

    ctx->pc = 0x200f70u;

    // 0x200f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200f74: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x200f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x200f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200f7c: 0xc07f8ce  jal         func_1FE338
    ctx->pc = 0x200F7Cu;
    SET_GPR_U32(ctx, 31, 0x200F84u);
    ctx->pc = 0x200F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F7Cu;
    // 0x200f80: 0x24a53640  addiu       $a1, $a1, 0x3640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE338u, 0x200F7Cu, 0x200F84u)) {
        return;
    }
    ctx->pc = 0x200F84u;
label_200f84:
    // 0x200f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200f88: 0x3e00008  jr          $ra
    ctx->pc = 0x200F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F88u;
        // 0x200f8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200F90u;
}
