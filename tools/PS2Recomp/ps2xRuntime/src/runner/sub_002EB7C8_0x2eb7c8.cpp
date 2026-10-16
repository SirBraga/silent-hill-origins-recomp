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

// Function: sub_002EB7C8
// Address: 0x2eb7c8 - 0x2eb818
void sub_002EB7C8_0x2eb7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB7C8_0x2eb7c8");
#endif

    switch (ctx->pc) {
        case 0x2eb7dcu: goto label_2eb7dc;
        case 0x2eb800u: goto label_2eb800;
        case 0x2eb808u: goto label_2eb808;
        default: break;
    }

    ctx->pc = 0x2eb7c8u;

    // 0x2eb7c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eb7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eb7cc: 0xaf848cac  sw          $a0, -0x7354($gp)
    ctx->pc = 0x2eb7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937772), GPR_U32(ctx, 4));
    // 0x2eb7d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eb7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eb7d4: 0xc0c8484  jal         func_321210
    ctx->pc = 0x2EB7D4u;
    SET_GPR_U32(ctx, 31, 0x2EB7DCu);
    ctx->pc = 0x321210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321210u, 0x2EB7D4u, 0x2EB7DCu)) {
        return;
    }
    ctx->pc = 0x2EB7DCu;
label_2eb7dc:
    // 0x2eb7dc: 0x8f8a8cac  lw          $t2, -0x7354($gp)
    ctx->pc = 0x2eb7dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x2eb7e0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2eb7e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb7e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb7e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eb7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb7ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb7f0: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x2eb7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2eb7f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eb7f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb7f8: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2EB7F8u;
    SET_GPR_U32(ctx, 31, 0x2EB800u);
    ctx->pc = 0x2EB7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB7F8u;
    // 0x2eb7fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2EB7F8u, 0x2EB800u)) {
        return;
    }
    ctx->pc = 0x2EB800u;
label_2eb800:
    // 0x2eb800: 0xc0c8490  jal         func_321240
    ctx->pc = 0x2EB800u;
    SET_GPR_U32(ctx, 31, 0x2EB808u);
    ctx->pc = 0x321240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321240u, 0x2EB800u, 0x2EB808u)) {
        return;
    }
    ctx->pc = 0x2EB808u;
label_2eb808:
    // 0x2eb808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eb808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb80c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB80Cu;
        // 0x2eb810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB814u;
    // 0x2eb814: 0x0  nop
    ctx->pc = 0x2eb814u;
    // NOP
    ctx->pc = 0x2eb818u;
}
