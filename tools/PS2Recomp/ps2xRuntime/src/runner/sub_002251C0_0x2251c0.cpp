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

// Function: sub_002251C0
// Address: 0x2251c0 - 0x225210
void sub_002251C0_0x2251c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002251C0_0x2251c0");
#endif

    switch (ctx->pc) {
        case 0x2251f8u: goto label_2251f8;
        default: break;
    }

    ctx->pc = 0x2251c0u;

    // 0x2251c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2251c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2251c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2251c8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2251c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251cc: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2251ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251d0: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2251d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251d4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2251d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251d8: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x2251d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x2251dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2251dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2251e0: 0x248402d0  addiu       $a0, $a0, 0x2D0
    ctx->pc = 0x2251e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
    // 0x2251e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2251e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251e8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2251e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251ec: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x2251ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251f0: 0xc09389e  jal         func_24E278
    ctx->pc = 0x2251F0u;
    SET_GPR_U32(ctx, 31, 0x2251F8u);
    ctx->pc = 0x2251F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2251F0u;
    // 0x2251f4: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E278u, 0x2251F0u, 0x2251F8u)) {
        return;
    }
    ctx->pc = 0x2251F8u;
label_2251f8:
    // 0x2251f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2251f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2251fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2251FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2251FCu;
        // 0x225200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2251FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225204u;
    // 0x225204: 0x0  nop
    ctx->pc = 0x225204u;
    // NOP
    // 0x225208: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x225208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22520c: 0x0  nop
    ctx->pc = 0x22520cu;
    // NOP
    ctx->pc = 0x225210u;
}
