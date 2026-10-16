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

// Function: sub_00263888
// Address: 0x263888 - 0x2638b8
void sub_00263888_0x263888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263888_0x263888");
#endif

    switch (ctx->pc) {
        case 0x2638a4u: goto label_2638a4;
        case 0x2638acu: goto label_2638ac;
        default: break;
    }

    ctx->pc = 0x263888u;

    // 0x263888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x263888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26388c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26388cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263890: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x263890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x263894: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263894u;
    {
        const bool branch_taken_0x263894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263894u;
        // 0x263898: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263894) {
            ctx->pc = 0x2638B0u;
            goto label_2638b0;
        }
    }
    ctx->pc = 0x26389Cu;
    // 0x26389c: 0xc08b848  jal         func_22E120
    ctx->pc = 0x26389Cu;
    SET_GPR_U32(ctx, 31, 0x2638A4u);
    ctx->pc = 0x22E120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E120u, 0x26389Cu, 0x2638A4u)) {
        return;
    }
    ctx->pc = 0x2638A4u;
label_2638a4:
    // 0x2638a4: 0xc08b848  jal         func_22E120
    ctx->pc = 0x2638A4u;
    SET_GPR_U32(ctx, 31, 0x2638ACu);
    ctx->pc = 0x22E120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E120u, 0x2638A4u, 0x2638ACu)) {
        return;
    }
    ctx->pc = 0x2638ACu;
label_2638ac:
    // 0x2638ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2638acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2638b0:
    // 0x2638b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2638B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2638B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638B0u;
        // 0x2638b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2638B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2638B8u;
}
