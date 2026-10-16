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

// Function: sub_0029C620
// Address: 0x29c620 - 0x29c650
void sub_0029C620_0x29c620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C620_0x29c620");
#endif

    ctx->pc = 0x29c620u;

    // 0x29c620: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29c620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c624: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29c624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29c628: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x29c628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x29c62c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C62Cu;
    {
        const bool branch_taken_0x29c62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C62Cu;
        // 0x29c630: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c62c) {
            ctx->pc = 0x29C648u;
            goto label_29c648;
        }
    }
    ctx->pc = 0x29C634u;
    // 0x29c634: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x29c634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x29c638: 0x8c442c10  lw          $a0, 0x2C10($v0)
    ctx->pc = 0x29c638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11280)));
    // 0x29c63c: 0xac452c10  sw          $a1, 0x2C10($v0)
    ctx->pc = 0x29c63cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11280), GPR_U32(ctx, 5));
    // 0x29c640: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x29c640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x29c644: 0xaca40034  sw          $a0, 0x34($a1)
    ctx->pc = 0x29c644u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 4));
label_29c648:
    // 0x29c648: 0x3e00008  jr          $ra
    ctx->pc = 0x29C648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C650u;
}
