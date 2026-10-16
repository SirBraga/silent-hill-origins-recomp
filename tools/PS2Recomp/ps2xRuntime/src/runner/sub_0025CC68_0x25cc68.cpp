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

// Function: sub_0025CC68
// Address: 0x25cc68 - 0x25ccb0
void sub_0025CC68_0x25cc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CC68_0x25cc68");
#endif

    switch (ctx->pc) {
        case 0x25cca0u: goto label_25cca0;
        default: break;
    }

    ctx->pc = 0x25cc68u;

    // 0x25cc68: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25cc68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25cc6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25cc70: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x25cc70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc74: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x25cc74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc78: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x25cc78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc7c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x25cc7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc80: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x25cc80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x25cc84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25cc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25cc88: 0x24841298  addiu       $a0, $a0, 0x1298
    ctx->pc = 0x25cc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4760));
    // 0x25cc8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25cc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc90: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x25cc90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc94: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x25cc94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc98: 0xc09389e  jal         func_24E278
    ctx->pc = 0x25CC98u;
    SET_GPR_U32(ctx, 31, 0x25CCA0u);
    ctx->pc = 0x25CC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CC98u;
    // 0x25cc9c: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E278u, 0x25CC98u, 0x25CCA0u)) {
        return;
    }
    ctx->pc = 0x25CCA0u;
label_25cca0:
    // 0x25cca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25cca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cca4: 0x3e00008  jr          $ra
    ctx->pc = 0x25CCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CCA4u;
        // 0x25cca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CCACu;
    // 0x25ccac: 0x0  nop
    ctx->pc = 0x25ccacu;
    // NOP
    ctx->pc = 0x25ccb0u;
}
