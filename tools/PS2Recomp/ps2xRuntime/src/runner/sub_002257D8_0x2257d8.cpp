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

// Function: sub_002257D8
// Address: 0x2257d8 - 0x225800
void sub_002257D8_0x2257d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002257D8_0x2257d8");
#endif

    switch (ctx->pc) {
        case 0x2257f0u: goto label_2257f0;
        default: break;
    }

    ctx->pc = 0x2257d8u;

    // 0x2257d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2257d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2257dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2257dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2257e0: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x2257e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x2257e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2257e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2257e8: 0xc093892  jal         func_24E248
    ctx->pc = 0x2257E8u;
    SET_GPR_U32(ctx, 31, 0x2257F0u);
    ctx->pc = 0x2257ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2257E8u;
    // 0x2257ec: 0x248402e8  addiu       $a0, $a0, 0x2E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E248u, 0x2257E8u, 0x2257F0u)) {
        return;
    }
    ctx->pc = 0x2257F0u;
label_2257f0:
    // 0x2257f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2257f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2257f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2257F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2257F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2257F4u;
        // 0x2257f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2257F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2257FCu;
    // 0x2257fc: 0x0  nop
    ctx->pc = 0x2257fcu;
    // NOP
    ctx->pc = 0x225800u;
}
