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

// Function: sub_002575C8
// Address: 0x2575c8 - 0x257610
void sub_002575C8_0x2575c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002575C8_0x2575c8");
#endif

    switch (ctx->pc) {
        case 0x257600u: goto label_257600;
        default: break;
    }

    ctx->pc = 0x2575c8u;

    // 0x2575c8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2575c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2575cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2575ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2575d0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2575d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2575d4: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2575d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2575d8: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2575d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2575dc: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2575dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2575e0: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x2575e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x2575e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2575e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2575e8: 0x24841228  addiu       $a0, $a0, 0x1228
    ctx->pc = 0x2575e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4648));
    // 0x2575ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2575ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2575f0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2575f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2575f4: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x2575f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2575f8: 0xc09389e  jal         func_24E278
    ctx->pc = 0x2575F8u;
    SET_GPR_U32(ctx, 31, 0x257600u);
    ctx->pc = 0x2575FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2575F8u;
    // 0x2575fc: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E278u, 0x2575F8u, 0x257600u)) {
        return;
    }
    ctx->pc = 0x257600u;
label_257600:
    // 0x257600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257604: 0x3e00008  jr          $ra
    ctx->pc = 0x257604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257604u;
        // 0x257608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25760Cu;
    // 0x25760c: 0x0  nop
    ctx->pc = 0x25760cu;
    // NOP
    ctx->pc = 0x257610u;
}
