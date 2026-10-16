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

// Function: sub_00255918
// Address: 0x255918 - 0x255950
void sub_00255918_0x255918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255918_0x255918");
#endif

    ctx->pc = 0x255918u;

    // 0x255918: 0x8f8385bc  lw          $v1, -0x7A44($gp)
    ctx->pc = 0x255918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935996)));
    // 0x25591c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25591cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255920: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x255920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x255924: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x255924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x255928: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x255928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x25592c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x25592cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x255930: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x255930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x255934: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x255934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x255938: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x255938u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x25593c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x25593cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x255940: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x255940u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x255944: 0x3e00008  jr          $ra
    ctx->pc = 0x255944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255944u;
        // 0x255948: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25594Cu;
    // 0x25594c: 0x0  nop
    ctx->pc = 0x25594cu;
    // NOP
    ctx->pc = 0x255950u;
}
