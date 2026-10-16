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

// Function: sub_0014F208
// Address: 0x14f208 - 0x14f220
void sub_0014F208_0x14f208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F208_0x14f208");
#endif

    ctx->pc = 0x14f208u;

    // 0x14f208: 0x8c8200d8  lw          $v0, 0xD8($a0)
    ctx->pc = 0x14f208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x14f20c: 0x50450001  beql        $v0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x14F20Cu;
    {
        const bool branch_taken_0x14f20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x14f20c) {
            ctx->pc = 0x14F210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F20Cu;
            // 0x14f210: 0xac8000d8  sw          $zero, 0xD8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F214u;
            goto label_14f214;
        }
    }
    ctx->pc = 0x14F214u;
label_14f214:
    // 0x14f214: 0x3e00008  jr          $ra
    ctx->pc = 0x14F214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F21Cu;
    // 0x14f21c: 0x0  nop
    ctx->pc = 0x14f21cu;
    // NOP
    ctx->pc = 0x14f220u;
}
