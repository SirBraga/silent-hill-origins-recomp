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

// Function: sub_002AD5A0
// Address: 0x2ad5a0 - 0x2ad5c8
void sub_002AD5A0_0x2ad5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD5A0_0x2ad5a0");
#endif

    ctx->pc = 0x2ad5a0u;

    // 0x2ad5a0: 0x8c86003c  lw          $a2, 0x3C($a0)
    ctx->pc = 0x2ad5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2ad5a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ad5a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad5a8: 0x8c870038  lw          $a3, 0x38($a0)
    ctx->pc = 0x2ad5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2ad5ac: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2ad5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ad5b0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2ad5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ad5b4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2ad5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ad5b8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2ad5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x2ad5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5BCu;
        // 0x2ad5c0: 0xac86003c  sw          $a2, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD5C4u;
    // 0x2ad5c4: 0x0  nop
    ctx->pc = 0x2ad5c4u;
    // NOP
    ctx->pc = 0x2ad5c8u;
}
