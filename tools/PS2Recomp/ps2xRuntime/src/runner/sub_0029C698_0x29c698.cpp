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

// Function: sub_0029C698
// Address: 0x29c698 - 0x29c6d0
void sub_0029C698_0x29c698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C698_0x29c698");
#endif

    ctx->pc = 0x29c698u;

    // 0x29c698: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x29c698u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29c69c: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x29c69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x29c6a0: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x29c6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x29c6a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29c6a8: 0xac87002c  sw          $a3, 0x2C($a0)
    ctx->pc = 0x29c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 7));
    // 0x29c6ac: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x29c6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x29c6b0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x29c6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x29c6b4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x29c6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x29c6b8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x29c6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x29c6bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x29c6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x29c6c0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x29c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x29c6c4: 0xac870024  sw          $a3, 0x24($a0)
    ctx->pc = 0x29c6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
    // 0x29c6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x29C6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C6C8u;
        // 0x29c6cc: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C6D0u;
}
