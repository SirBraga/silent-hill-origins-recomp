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

// Function: sub_001D8738
// Address: 0x1d8738 - 0x1d8778
void sub_001D8738_0x1d8738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8738_0x1d8738");
#endif

    ctx->pc = 0x1d8738u;

    // 0x1d8738: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1d8738u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1d873c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d873cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8740: 0x8cc49da8  lw          $a0, -0x6258($a2)
    ctx->pc = 0x1d8740u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339DA8u));
    // 0x1d8744: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x1d8744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d8748: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8748u;
    {
        const bool branch_taken_0x1d8748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8748u;
        // 0x1d874c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8748) {
            ctx->pc = 0x1D8768u;
            goto label_1d8768;
        }
    }
    ctx->pc = 0x1D8750u;
    // 0x1d8750: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d8750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d8754: 0x244289c8  addiu       $v0, $v0, -0x7638
    ctx->pc = 0x1d8754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937032));
    // 0x1d8758: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d8758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d875c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d875cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d8760: 0xacc49da8  sw          $a0, -0x6258($a2)
    ctx->pc = 0x1d8760u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294942120), GPR_U32(ctx, 4));
    // 0x1d8764: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1d8764u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1d8768:
    // 0x1d8768: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8770u;
    // 0x1d8770: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d8770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d8774: 0x0  nop
    ctx->pc = 0x1d8774u;
    // NOP
    ctx->pc = 0x1d8778u;
}
