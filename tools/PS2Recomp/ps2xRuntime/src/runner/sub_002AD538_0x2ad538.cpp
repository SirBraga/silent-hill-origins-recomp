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

// Function: sub_002AD538
// Address: 0x2ad538 - 0x2ad560
void sub_002AD538_0x2ad538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD538_0x2ad538");
#endif

    ctx->pc = 0x2ad538u;

    // 0x2ad538: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x2ad538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2ad53c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ad53cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad540: 0x8c870028  lw          $a3, 0x28($a0)
    ctx->pc = 0x2ad540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2ad544: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2ad544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ad548: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2ad548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ad54c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2ad54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ad550: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2ad550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x2ad554: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD554u;
        // 0x2ad558: 0xac86002c  sw          $a2, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD55Cu;
    // 0x2ad55c: 0x0  nop
    ctx->pc = 0x2ad55cu;
    // NOP
    ctx->pc = 0x2ad560u;
}
