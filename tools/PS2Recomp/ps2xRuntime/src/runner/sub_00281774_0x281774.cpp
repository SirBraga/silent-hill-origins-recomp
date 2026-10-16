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

// Function: sub_00281774
// Address: 0x281774 - 0x281790
void sub_00281774_0x281774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281774_0x281774");
#endif

    switch (ctx->pc) {
        case 0x281784u: goto label_281784;
        default: break;
    }

    ctx->pc = 0x281774u;

    // 0x281774: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x281774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x281778: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x281778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28177c: 0x34420048  ori         $v0, $v0, 0x48
    ctx->pc = 0x28177cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)72);
    // 0x281780: 0xfca00038  sd          $zero, 0x38($a1)
    ctx->pc = 0x281780u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 0));
label_281784:
    // 0x281784: 0xfca20028  sd          $v0, 0x28($a1)
    ctx->pc = 0x281784u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 2));
    // 0x281788: 0x3e00008  jr          $ra
    ctx->pc = 0x281788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281788u;
        // 0x28178c: 0xfca00030  sd          $zero, 0x30($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281790u;
}
