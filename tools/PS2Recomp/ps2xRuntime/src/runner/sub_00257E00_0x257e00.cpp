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

// Function: sub_00257E00
// Address: 0x257e00 - 0x257e48
void sub_00257E00_0x257e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257E00_0x257e00");
#endif

    switch (ctx->pc) {
        case 0x257e38u: goto label_257e38;
        default: break;
    }

    ctx->pc = 0x257e00u;

    // 0x257e00: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x257e00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x257e04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x257e08: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x257e08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e0c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x257e0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e10: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x257e10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e14: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x257e14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e18: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x257e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x257e1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257e20: 0x24841240  addiu       $a0, $a0, 0x1240
    ctx->pc = 0x257e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4672));
    // 0x257e24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x257e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e28: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x257e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e2c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x257e2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e30: 0xc09389e  jal         func_24E278
    ctx->pc = 0x257E30u;
    SET_GPR_U32(ctx, 31, 0x257E38u);
    ctx->pc = 0x257E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E30u;
    // 0x257e34: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E278u, 0x257E30u, 0x257E38u)) {
        return;
    }
    ctx->pc = 0x257E38u;
label_257e38:
    // 0x257e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x257E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E3Cu;
        // 0x257e40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257E44u;
    // 0x257e44: 0x0  nop
    ctx->pc = 0x257e44u;
    // NOP
    ctx->pc = 0x257e48u;
}
