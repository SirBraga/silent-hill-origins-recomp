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

// Function: sub_002558E0
// Address: 0x2558e0 - 0x255918
void sub_002558E0_0x2558e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002558E0_0x2558e0");
#endif

    ctx->pc = 0x2558e0u;

    // 0x2558e0: 0x8f8285bc  lw          $v0, -0x7A44($gp)
    ctx->pc = 0x2558e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935996)));
    // 0x2558e4: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x2558e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2558e8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2558e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2558ec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2558ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2558f0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2558f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2558f4: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x2558f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2558f8: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x2558f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x2558fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2558fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255900: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x255900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x255904: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x255904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x255908: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x255908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x25590c: 0x3e00008  jr          $ra
    ctx->pc = 0x25590Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25590Cu;
        // 0x255910: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25590Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255914u;
    // 0x255914: 0x0  nop
    ctx->pc = 0x255914u;
    // NOP
    ctx->pc = 0x255918u;
}
