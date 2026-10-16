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

// Function: sub_003027C8
// Address: 0x3027c8 - 0x302800
void sub_003027C8_0x3027c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003027C8_0x3027c8");
#endif

    ctx->pc = 0x3027c8u;

    // 0x3027c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3027c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3027cc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3027ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3027d0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x3027d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x3027d4: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x3027d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x3027d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3027d8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x3027dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3027dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3027e0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3027e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3027e4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3027E4u;
    {
        const bool branch_taken_0x3027e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3027e4) {
            ctx->pc = 0x3027F4u;
            goto label_3027f4;
        }
    }
    ctx->pc = 0x3027ECu;
    // 0x3027ec: 0x80c0068  j           func_3001A0
    ctx->pc = 0x3027ECu;
    ctx->pc = 0x3001A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3001A0u, 0x3027ECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3027F4u;
label_3027f4:
    // 0x3027f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3027F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3027F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3027FCu;
    // 0x3027fc: 0x0  nop
    ctx->pc = 0x3027fcu;
    // NOP
    ctx->pc = 0x302800u;
}
