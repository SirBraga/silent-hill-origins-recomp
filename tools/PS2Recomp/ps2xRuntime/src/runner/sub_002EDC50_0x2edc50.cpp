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

// Function: sub_002EDC50
// Address: 0x2edc50 - 0x2edc80
void sub_002EDC50_0x2edc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDC50_0x2edc50");
#endif

    ctx->pc = 0x2edc50u;

    // 0x2edc50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2edc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2edc54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2edc54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2edc58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2edc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edc5c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2edc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2edc60: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2edc60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2edc64: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2edc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2edc68: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2edc68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2edc6c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2edc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2edc70: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC70u;
        // 0x2edc74: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDC78u;
    // 0x2edc78: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2edc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2edc7c: 0x0  nop
    ctx->pc = 0x2edc7cu;
    // NOP
    ctx->pc = 0x2edc80u;
}
