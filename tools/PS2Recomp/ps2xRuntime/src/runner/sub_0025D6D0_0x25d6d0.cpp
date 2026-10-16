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

// Function: sub_0025D6D0
// Address: 0x25d6d0 - 0x25d708
void sub_0025D6D0_0x25d6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D6D0_0x25d6d0");
#endif

    ctx->pc = 0x25d6d0u;

    // 0x25d6d0: 0x8f8585fc  lw          $a1, -0x7A04($gp)
    ctx->pc = 0x25d6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
    // 0x25d6d4: 0x3c080073  lui         $t0, 0x73
    ctx->pc = 0x25d6d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
    // 0x25d6d8: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x25d6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x25d6dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25d6dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d6e0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x25d6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x25d6e4: 0x24c6d668  addiu       $a2, $a2, -0x2998
    ctx->pc = 0x25d6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956648));
    // 0x25d6e8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x25d6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x25d6ec: 0x95030fd0  lhu         $v1, 0xFD0($t0)
    ctx->pc = 0x25d6ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x730FD0u));
    // 0x25d6f0: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x25d6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x25d6f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25d6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25d6f8: 0xa4830060  sh          $v1, 0x60($a0)
    ctx->pc = 0x25d6f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 3));
    // 0x25d6fc: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x25d6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x25d700: 0x3e00008  jr          $ra
    ctx->pc = 0x25D700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D700u;
        // 0x25d704: 0xac860010  sw          $a2, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D708u;
}
