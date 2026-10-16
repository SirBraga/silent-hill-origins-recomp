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

// Function: sub_00165748
// Address: 0x165748 - 0x165760
void sub_00165748_0x165748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165748_0x165748");
#endif

    ctx->pc = 0x165748u;

    // 0x165748: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x165748u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x16574c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x16574cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x165750: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x165750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x165754: 0x3e00008  jr          $ra
    ctx->pc = 0x165754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165754u;
        // 0x165758: 0x90a20004  lbu         $v0, 0x4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16575Cu;
    // 0x16575c: 0x0  nop
    ctx->pc = 0x16575cu;
    // NOP
    ctx->pc = 0x165760u;
}
