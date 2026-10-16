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

// Function: sub_0017BA40
// Address: 0x17ba40 - 0x17ba68
void sub_0017BA40_0x17ba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BA40_0x17ba40");
#endif

    switch (ctx->pc) {
        case 0x17ba58u: goto label_17ba58;
        default: break;
    }

    ctx->pc = 0x17ba40u;

    // 0x17ba40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17ba40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ba44: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17BA44u;
    {
        const bool branch_taken_0x17ba44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA44u;
        // 0x17ba48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba44) {
            ctx->pc = 0x17BA50u;
            goto label_17ba50;
        }
    }
    ctx->pc = 0x17BA4Cu;
    // 0x17ba4c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x17ba4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17ba50:
    // 0x17ba50: 0xc09795e  jal         func_25E578
    ctx->pc = 0x17BA50u;
    SET_GPR_U32(ctx, 31, 0x17BA58u);
    ctx->pc = 0x17BA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BA50u;
    // 0x17ba54: 0x8cc40058  lw          $a0, 0x58($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E578u, 0x17BA50u, 0x17BA58u)) {
        return;
    }
    ctx->pc = 0x17BA58u;
label_17ba58:
    // 0x17ba58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ba58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ba5c: 0x3e00008  jr          $ra
    ctx->pc = 0x17BA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA5Cu;
        // 0x17ba60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BA64u;
    // 0x17ba64: 0x0  nop
    ctx->pc = 0x17ba64u;
    // NOP
    ctx->pc = 0x17ba68u;
}
