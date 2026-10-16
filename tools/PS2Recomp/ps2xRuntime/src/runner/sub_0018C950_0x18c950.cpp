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

// Function: sub_0018C950
// Address: 0x18c950 - 0x18c978
void sub_0018C950_0x18c950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C950_0x18c950");
#endif

    switch (ctx->pc) {
        case 0x18c96cu: goto label_18c96c;
        default: break;
    }

    ctx->pc = 0x18c950u;

    // 0x18c950: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18c950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c954: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18c954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x18c958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18c958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18c95c: 0x8c448b2c  lw          $a0, -0x74D4($v0)
    ctx->pc = 0x18c95cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338B2Cu));
    // 0x18c960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c964: 0xc0640c0  jal         func_190300
    ctx->pc = 0x18C964u;
    SET_GPR_U32(ctx, 31, 0x18C96Cu);
    ctx->pc = 0x190300u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190300u, 0x18C964u, 0x18C96Cu)) {
        return;
    }
    ctx->pc = 0x18C96Cu;
label_18c96c:
    // 0x18c96c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c970: 0x3e00008  jr          $ra
    ctx->pc = 0x18C970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C970u;
        // 0x18c974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C978u;
}
