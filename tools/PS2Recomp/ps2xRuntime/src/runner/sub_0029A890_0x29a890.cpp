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

// Function: sub_0029A890
// Address: 0x29a890 - 0x29a8b0
void sub_0029A890_0x29a890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A890_0x29a890");
#endif

    switch (ctx->pc) {
        case 0x29a890u: goto label_29a890;
        case 0x29a894u: goto label_29a894;
        case 0x29a898u: goto label_29a898;
        case 0x29a89cu: goto label_29a89c;
        case 0x29a8a0u: goto label_29a8a0;
        case 0x29a8a4u: goto label_29a8a4;
        case 0x29a8a8u: goto label_29a8a8;
        case 0x29a8acu: goto label_29a8ac;
        default: break;
    }

    ctx->pc = 0x29a890u;

label_29a890:
    // 0x29a890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29a890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29a894:
    // 0x29a894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29a898:
    // 0x29a898: 0xa0f809  jalr        $a1
label_29a89c:
    if (ctx->pc == 0x29A89Cu) {
        ctx->pc = 0x29A8A0u;
        goto label_29a8a0;
    }
    ctx->pc = 0x29A898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x29A8A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A898u, 0x29A8A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A8A0u;
label_29a8a0:
    // 0x29a8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29a8a4:
    // 0x29a8a4: 0x3e00008  jr          $ra
label_29a8a8:
    if (ctx->pc == 0x29A8A8u) {
        ctx->pc = 0x29A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A8A4u;
        // 0x29a8a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A8ACu;
        goto label_29a8ac;
    }
    ctx->pc = 0x29A8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A8A4u;
        // 0x29a8a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A8ACu;
label_29a8ac:
    // 0x29a8ac: 0x0  nop
    ctx->pc = 0x29a8acu;
    // NOP
    ctx->pc = 0x29a8b0u;
}
