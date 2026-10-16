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

// Function: sub_00276B30
// Address: 0x276b30 - 0x276b70
void sub_00276B30_0x276b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276B30_0x276b30");
#endif

    ctx->pc = 0x276b30u;

    // 0x276b30: 0x8f8387d0  lw          $v1, -0x7830($gp)
    ctx->pc = 0x276b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936528)));
    // 0x276b34: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x276b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276b38: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x276b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x276b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x276B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B3Cu;
        // 0x276b40: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276B44u;
    // 0x276b44: 0x0  nop
    ctx->pc = 0x276b44u;
    // NOP
    // 0x276b48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x276b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x276b4c: 0x0  nop
    ctx->pc = 0x276b4cu;
    // NOP
    // 0x276b50: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x276b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x276b54: 0x0  nop
    ctx->pc = 0x276b54u;
    // NOP
    // 0x276b58: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x276b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x276b5c: 0x0  nop
    ctx->pc = 0x276b5cu;
    // NOP
    // 0x276b60: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x276b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x276b64: 0x0  nop
    ctx->pc = 0x276b64u;
    // NOP
    // 0x276b68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x276b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x276b6c: 0x0  nop
    ctx->pc = 0x276b6cu;
    // NOP
    ctx->pc = 0x276b70u;
}
