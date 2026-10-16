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

// Function: sub_0022B298
// Address: 0x22b298 - 0x22b2d0
void sub_0022B298_0x22b298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B298_0x22b298");
#endif

    switch (ctx->pc) {
        case 0x22b298u: goto label_22b298;
        case 0x22b29cu: goto label_22b29c;
        case 0x22b2a0u: goto label_22b2a0;
        case 0x22b2a4u: goto label_22b2a4;
        case 0x22b2a8u: goto label_22b2a8;
        case 0x22b2acu: goto label_22b2ac;
        case 0x22b2b0u: goto label_22b2b0;
        case 0x22b2b4u: goto label_22b2b4;
        case 0x22b2b8u: goto label_22b2b8;
        case 0x22b2bcu: goto label_22b2bc;
        case 0x22b2c0u: goto label_22b2c0;
        case 0x22b2c4u: goto label_22b2c4;
        case 0x22b2c8u: goto label_22b2c8;
        case 0x22b2ccu: goto label_22b2cc;
        default: break;
    }

    ctx->pc = 0x22b298u;

label_22b298:
    // 0x22b298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22b298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_22b29c:
    // 0x22b29c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_22b2a0:
    // 0x22b2a0: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22b2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16032)));
label_22b2a4:
    // 0x22b2a4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x22b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_22b2a8:
    // 0x22b2a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22b2ac:
    // 0x22b2ac: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x22b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_22b2b0:
    // 0x22b2b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22b2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22b2b4:
    // 0x22b2b4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22b2b8:
    // 0x22b2b8: 0x40f809  jalr        $v0
label_22b2bc:
    if (ctx->pc == 0x22B2BCu) {
        ctx->pc = 0x22B2C0u;
        goto label_22b2c0;
    }
    ctx->pc = 0x22B2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B2C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B2B8u, 0x22B2C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B2C0u;
label_22b2c0:
    // 0x22b2c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22b2c4:
    // 0x22b2c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x22b2c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_22b2c8:
    // 0x22b2c8: 0x3e00008  jr          $ra
label_22b2cc:
    if (ctx->pc == 0x22B2CCu) {
        ctx->pc = 0x22B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2C8u;
        // 0x22b2cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B2D0u;
        goto label_fallthrough_0x22b2c8;
    }
    ctx->pc = 0x22B2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2C8u;
        // 0x22b2cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22b2c8:
    ctx->pc = 0x22B2D0u;
}
