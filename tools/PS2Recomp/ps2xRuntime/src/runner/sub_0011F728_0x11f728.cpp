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

// Function: sub_0011F728
// Address: 0x11f728 - 0x11f748
void sub_0011F728_0x11f728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F728_0x11f728");
#endif

    switch (ctx->pc) {
        case 0x11f73cu: goto label_11f73c;
        default: break;
    }

    ctx->pc = 0x11f728u;

    // 0x11f728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11f728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11f72c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11f72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11f730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11f734: 0xc047c88  jal         func_11F220
    ctx->pc = 0x11F734u;
    SET_GPR_U32(ctx, 31, 0x11F73Cu);
    ctx->pc = 0x11F738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F734u;
    // 0x11f738: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11F220u, 0x11F734u, 0x11F73Cu)) {
        return;
    }
    ctx->pc = 0x11F73Cu;
label_11f73c:
    // 0x11f73c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11f73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f740: 0x3e00008  jr          $ra
    ctx->pc = 0x11F740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F740u;
        // 0x11f744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F748u;
}
