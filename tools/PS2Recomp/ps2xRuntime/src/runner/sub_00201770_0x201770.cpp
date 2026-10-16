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

// Function: sub_00201770
// Address: 0x201770 - 0x201798
void sub_00201770_0x201770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201770_0x201770");
#endif

    ctx->pc = 0x201770u;

    // 0x201770: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x201770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x201774: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x201774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x201778: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x201778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x20177c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20177cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x201780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201784: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x201784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201788: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x201788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x20178c: 0x3e00008  jr          $ra
    ctx->pc = 0x20178Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20178Cu;
        // 0x201790: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20178Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201794u;
    // 0x201794: 0x0  nop
    ctx->pc = 0x201794u;
    // NOP
    ctx->pc = 0x201798u;
}
