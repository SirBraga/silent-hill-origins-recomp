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

// Function: sub_00101820
// Address: 0x101820 - 0x101880
void sub_00101820_0x101820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101820_0x101820");
#endif

    ctx->pc = 0x101820u;

    // 0x101820: 0x3e00008  jr          $ra
    ctx->pc = 0x101820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101828u;
    // 0x101828: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x101828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10182c: 0x0  nop
    ctx->pc = 0x10182cu;
    // NOP
    // 0x101830: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x101830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x101834: 0x0  nop
    ctx->pc = 0x101834u;
    // NOP
    // 0x101838: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x101838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x10183c: 0x0  nop
    ctx->pc = 0x10183cu;
    // NOP
    // 0x101840: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x101840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x101844: 0x0  nop
    ctx->pc = 0x101844u;
    // NOP
    // 0x101848: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x101848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x10184c: 0x0  nop
    ctx->pc = 0x10184cu;
    // NOP
    // 0x101850: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x101850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101854: 0x0  nop
    ctx->pc = 0x101854u;
    // NOP
    // 0x101858: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x101858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x10185c: 0x0  nop
    ctx->pc = 0x10185cu;
    // NOP
    // 0x101860: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x101860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x101864: 0x0  nop
    ctx->pc = 0x101864u;
    // NOP
    // 0x101868: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x101868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x10186c: 0x0  nop
    ctx->pc = 0x10186cu;
    // NOP
    // 0x101870: 0xac8202ac  sw          $v0, 0x2AC($a0)
    ctx->pc = 0x101870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 684), GPR_U32(ctx, 2));
    // 0x101874: 0x0  nop
    ctx->pc = 0x101874u;
    // NOP
    // 0x101878: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x101878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x10187c: 0x0  nop
    ctx->pc = 0x10187cu;
    // NOP
    ctx->pc = 0x101880u;
}
