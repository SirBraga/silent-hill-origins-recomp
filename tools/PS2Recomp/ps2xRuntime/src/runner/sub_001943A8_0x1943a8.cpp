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

// Function: sub_001943A8
// Address: 0x1943a8 - 0x1943c8
void sub_001943A8_0x1943a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001943A8_0x1943a8");
#endif

    switch (ctx->pc) {
        case 0x1943bcu: goto label_1943bc;
        default: break;
    }

    ctx->pc = 0x1943a8u;

    // 0x1943a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1943a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1943ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1943acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1943b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1943b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1943b4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1943B4u;
    SET_GPR_U32(ctx, 31, 0x1943BCu);
    ctx->pc = 0x1943B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1943B4u;
    // 0x1943b8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1943B4u, 0x1943BCu)) {
        return;
    }
    ctx->pc = 0x1943BCu;
label_1943bc:
    // 0x1943bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1943bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1943c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1943C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1943C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943C0u;
        // 0x1943c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1943C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1943C8u;
}
