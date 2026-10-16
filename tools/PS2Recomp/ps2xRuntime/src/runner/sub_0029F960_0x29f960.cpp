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

// Function: sub_0029F960
// Address: 0x29f960 - 0x29f988
void sub_0029F960_0x29f960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F960_0x29f960");
#endif

    ctx->pc = 0x29f960u;

    // 0x29f960: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29F960u;
    {
        const bool branch_taken_0x29f960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f960) {
            ctx->pc = 0x29F97Cu;
            goto label_29f97c;
        }
    }
    ctx->pc = 0x29F968u;
    // 0x29f968: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x29f968u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x29f96c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29F96Cu;
    {
        const bool branch_taken_0x29f96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f96c) {
            ctx->pc = 0x29F97Cu;
            goto label_29f97c;
        }
    }
    ctx->pc = 0x29F974u;
    // 0x29f974: 0x80c5486  j           func_315218
    ctx->pc = 0x29F974u;
    ctx->pc = 0x315218u;
    sub_00315218_0x315218(rdram, ctx, runtime); return;
    ctx->pc = 0x29F97Cu;
label_29f97c:
    // 0x29f97c: 0x3e00008  jr          $ra
    ctx->pc = 0x29F97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F984u;
    // 0x29f984: 0x0  nop
    ctx->pc = 0x29f984u;
    // NOP
    ctx->pc = 0x29f988u;
}
