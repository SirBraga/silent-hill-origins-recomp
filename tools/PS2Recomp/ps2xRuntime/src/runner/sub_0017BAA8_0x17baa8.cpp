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

// Function: sub_0017BAA8
// Address: 0x17baa8 - 0x17bad0
void sub_0017BAA8_0x17baa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BAA8_0x17baa8");
#endif

    switch (ctx->pc) {
        case 0x17bac0u: goto label_17bac0;
        default: break;
    }

    ctx->pc = 0x17baa8u;

    // 0x17baa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17baa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17baac: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17BAACu;
    {
        const bool branch_taken_0x17baac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAACu;
        // 0x17bab0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17baac) {
            ctx->pc = 0x17BAB8u;
            goto label_17bab8;
        }
    }
    ctx->pc = 0x17BAB4u;
    // 0x17bab4: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x17bab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17bab8:
    // 0x17bab8: 0xc0979fe  jal         func_25E7F8
    ctx->pc = 0x17BAB8u;
    SET_GPR_U32(ctx, 31, 0x17BAC0u);
    ctx->pc = 0x17BABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BAB8u;
    // 0x17babc: 0x8cc40058  lw          $a0, 0x58($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E7F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E7F8u, 0x17BAB8u, 0x17BAC0u)) {
        return;
    }
    ctx->pc = 0x17BAC0u;
label_17bac0:
    // 0x17bac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bac4: 0x3e00008  jr          $ra
    ctx->pc = 0x17BAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAC4u;
        // 0x17bac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BACCu;
    // 0x17bacc: 0x0  nop
    ctx->pc = 0x17baccu;
    // NOP
    ctx->pc = 0x17bad0u;
}
