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

// Function: sub_00181D20
// Address: 0x181d20 - 0x181d48
void sub_00181D20_0x181d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181D20_0x181d20");
#endif

    switch (ctx->pc) {
        case 0x181d38u: goto label_181d38;
        default: break;
    }

    ctx->pc = 0x181d20u;

    // 0x181d20: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x181d20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181d24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181d24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181d28: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x181d28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181d2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181d30: 0xc0606aa  jal         func_181AA8
    ctx->pc = 0x181D30u;
    SET_GPR_U32(ctx, 31, 0x181D38u);
    ctx->pc = 0x181D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181D30u;
    // 0x181d34: 0x24070400  addiu       $a3, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181AA8u, 0x181D30u, 0x181D38u)) {
        return;
    }
    ctx->pc = 0x181D38u;
label_181d38:
    // 0x181d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x181D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D3Cu;
        // 0x181d40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181D44u;
    // 0x181d44: 0x0  nop
    ctx->pc = 0x181d44u;
    // NOP
    ctx->pc = 0x181d48u;
}
