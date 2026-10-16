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

// Function: sub_00175018
// Address: 0x175018 - 0x175040
void sub_00175018_0x175018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175018_0x175018");
#endif

    switch (ctx->pc) {
        case 0x175034u: goto label_175034;
        default: break;
    }

    ctx->pc = 0x175018u;

    // 0x175018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17501c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17501cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175020: 0x8c850080  lw          $a1, 0x80($a0)
    ctx->pc = 0x175020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x175024: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x175024u;
    {
        const bool branch_taken_0x175024 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x175028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175024u;
        // 0x175028: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175024) {
            ctx->pc = 0x175038u;
            goto label_175038;
        }
    }
    ctx->pc = 0x17502Cu;
    // 0x17502c: 0xc043ca0  jal         func_10F280
    ctx->pc = 0x17502Cu;
    SET_GPR_U32(ctx, 31, 0x175034u);
    ctx->pc = 0x175030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17502Cu;
    // 0x175030: 0x2484005c  addiu       $a0, $a0, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F280u, 0x17502Cu, 0x175034u)) {
        return;
    }
    ctx->pc = 0x175034u;
label_175034:
    // 0x175034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175038:
    // 0x175038: 0x3e00008  jr          $ra
    ctx->pc = 0x175038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175038u;
        // 0x17503c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175040u;
}
