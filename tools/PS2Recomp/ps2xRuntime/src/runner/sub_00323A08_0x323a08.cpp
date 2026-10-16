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

// Function: sub_00323A08
// Address: 0x323a08 - 0x323a30
void sub_00323A08_0x323a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323A08_0x323a08");
#endif

    switch (ctx->pc) {
        case 0x323a20u: goto label_323a20;
        default: break;
    }

    ctx->pc = 0x323a08u;

    // 0x323a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x323a0c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x323a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a10: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x323A10u;
    {
        const bool branch_taken_0x323a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x323A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A10u;
        // 0x323a14: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323a10) {
            ctx->pc = 0x323A20u;
            goto label_323a20;
        }
    }
    ctx->pc = 0x323A18u;
    // 0x323a18: 0xc0c8a52  jal         func_322948
    ctx->pc = 0x323A18u;
    SET_GPR_U32(ctx, 31, 0x323A20u);
    ctx->pc = 0x322948u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x322948u, 0x323A18u, 0x323A20u)) {
        return;
    }
    ctx->pc = 0x323A20u;
label_323a20:
    // 0x323a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323a24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x323a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323a28: 0x3e00008  jr          $ra
    ctx->pc = 0x323A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A28u;
        // 0x323a2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323A30u;
}
