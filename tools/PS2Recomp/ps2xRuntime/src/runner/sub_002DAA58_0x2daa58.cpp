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

// Function: sub_002DAA58
// Address: 0x2daa58 - 0x2daac8
void sub_002DAA58_0x2daa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAA58_0x2daa58");
#endif

    ctx->pc = 0x2daa58u;

    // 0x2daa58: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA58u;
        // 0x2daa5c: 0x8f828b54  lw          $v0, -0x74AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937428)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAA60u;
    // 0x2daa60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2daa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2daa64: 0x0  nop
    ctx->pc = 0x2daa64u;
    // NOP
    // 0x2daa68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2daa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2daa6c: 0x0  nop
    ctx->pc = 0x2daa6cu;
    // NOP
    // 0x2daa70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2daa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2daa74: 0x0  nop
    ctx->pc = 0x2daa74u;
    // NOP
    // 0x2daa78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2daa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2daa7c: 0x0  nop
    ctx->pc = 0x2daa7cu;
    // NOP
    // 0x2daa80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2daa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2daa84: 0x0  nop
    ctx->pc = 0x2daa84u;
    // NOP
    // 0x2daa88: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2daa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2daa8c: 0x0  nop
    ctx->pc = 0x2daa8cu;
    // NOP
    // 0x2daa90: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2daa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2daa94: 0x0  nop
    ctx->pc = 0x2daa94u;
    // NOP
    // 0x2daa98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2daa98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2daa9c: 0x0  nop
    ctx->pc = 0x2daa9cu;
    // NOP
    // 0x2daaa0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2daaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2daaa4: 0x0  nop
    ctx->pc = 0x2daaa4u;
    // NOP
    // 0x2daaa8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2daaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2daaac: 0x0  nop
    ctx->pc = 0x2daaacu;
    // NOP
    // 0x2daab0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2daab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2daab4: 0x0  nop
    ctx->pc = 0x2daab4u;
    // NOP
    // 0x2daab8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2daab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2daabc: 0x0  nop
    ctx->pc = 0x2daabcu;
    // NOP
    // 0x2daac0: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x2daac0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x2daac4: 0x0  nop
    ctx->pc = 0x2daac4u;
    // NOP
    ctx->pc = 0x2daac8u;
}
