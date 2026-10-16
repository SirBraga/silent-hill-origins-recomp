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

// Function: sub_0017B9D8
// Address: 0x17b9d8 - 0x17ba00
void sub_0017B9D8_0x17b9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B9D8_0x17b9d8");
#endif

    switch (ctx->pc) {
        case 0x17b9f0u: goto label_17b9f0;
        default: break;
    }

    ctx->pc = 0x17b9d8u;

    // 0x17b9d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b9dc: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17B9DCu;
    {
        const bool branch_taken_0x17b9dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9DCu;
        // 0x17b9e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9dc) {
            ctx->pc = 0x17B9E8u;
            goto label_17b9e8;
        }
    }
    ctx->pc = 0x17B9E4u;
    // 0x17b9e4: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x17b9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17b9e8:
    // 0x17b9e8: 0xc09792c  jal         func_25E4B0
    ctx->pc = 0x17B9E8u;
    SET_GPR_U32(ctx, 31, 0x17B9F0u);
    ctx->pc = 0x17B9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B9E8u;
    // 0x17b9ec: 0x8cc40058  lw          $a0, 0x58($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E4B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E4B0u, 0x17B9E8u, 0x17B9F0u)) {
        return;
    }
    ctx->pc = 0x17B9F0u;
label_17b9f0:
    // 0x17b9f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9F4u;
        // 0x17b9f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B9FCu;
    // 0x17b9fc: 0x0  nop
    ctx->pc = 0x17b9fcu;
    // NOP
    ctx->pc = 0x17ba00u;
}
