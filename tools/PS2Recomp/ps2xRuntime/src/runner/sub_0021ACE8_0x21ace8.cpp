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

// Function: sub_0021ACE8
// Address: 0x21ace8 - 0x21ad10
void sub_0021ACE8_0x21ace8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021ACE8_0x21ace8");
#endif

    switch (ctx->pc) {
        case 0x21ad00u: goto label_21ad00;
        default: break;
    }

    ctx->pc = 0x21ace8u;

    // 0x21ace8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21ace8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21acec: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x21acecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x21acf0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21ACF0u;
    {
        const bool branch_taken_0x21acf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ACF0u;
        // 0x21acf4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21acf0) {
            ctx->pc = 0x21AD00u;
            goto label_21ad00;
        }
    }
    ctx->pc = 0x21ACF8u;
    // 0x21acf8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x21ACF8u;
    SET_GPR_U32(ctx, 31, 0x21AD00u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x21ACF8u, 0x21AD00u)) {
        return;
    }
    ctx->pc = 0x21AD00u;
label_21ad00:
    // 0x21ad00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ad00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ad04: 0x3e00008  jr          $ra
    ctx->pc = 0x21AD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD04u;
        // 0x21ad08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AD0Cu;
    // 0x21ad0c: 0x0  nop
    ctx->pc = 0x21ad0cu;
    // NOP
    ctx->pc = 0x21ad10u;
}
