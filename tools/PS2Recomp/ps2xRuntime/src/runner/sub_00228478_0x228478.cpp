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

// Function: sub_00228478
// Address: 0x228478 - 0x2284c0
void sub_00228478_0x228478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228478_0x228478");
#endif

    switch (ctx->pc) {
        case 0x2284b0u: goto label_2284b0;
        default: break;
    }

    ctx->pc = 0x228478u;

    // 0x228478: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x228478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22847c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22847cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228480: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x228480u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228484: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x228484u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228488: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x228488u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22848c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x22848cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228490: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x228490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x228494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228498: 0x24840430  addiu       $a0, $a0, 0x430
    ctx->pc = 0x228498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1072));
    // 0x22849c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22849cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2284a0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2284a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2284a4: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x2284a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2284a8: 0xc09389e  jal         func_24E278
    ctx->pc = 0x2284A8u;
    SET_GPR_U32(ctx, 31, 0x2284B0u);
    ctx->pc = 0x2284ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2284A8u;
    // 0x2284ac: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E278u, 0x2284A8u, 0x2284B0u)) {
        return;
    }
    ctx->pc = 0x2284B0u;
label_2284b0:
    // 0x2284b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2284b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2284b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2284B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2284B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284B4u;
        // 0x2284b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2284B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2284BCu;
    // 0x2284bc: 0x0  nop
    ctx->pc = 0x2284bcu;
    // NOP
    ctx->pc = 0x2284c0u;
}
