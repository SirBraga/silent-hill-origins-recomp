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

// Function: sub_00265168
// Address: 0x265168 - 0x2651a0
void sub_00265168_0x265168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265168_0x265168");
#endif

    switch (ctx->pc) {
        case 0x265180u: goto label_265180;
        default: break;
    }

    ctx->pc = 0x265168u;

    // 0x265168: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x265168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26516c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26516cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x265170: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x265170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x265174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265178: 0xc099e8c  jal         func_267A30
    ctx->pc = 0x265178u;
    SET_GPR_U32(ctx, 31, 0x265180u);
    ctx->pc = 0x26517Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265178u;
    // 0x26517c: 0x24841424  addiu       $a0, $a0, 0x1424 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267A30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x267A30u, 0x265178u, 0x265180u)) {
        return;
    }
    ctx->pc = 0x265180u;
label_265180:
    // 0x265180: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x265180u;
    {
        const bool branch_taken_0x265180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265180u;
        // 0x265184: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265180) {
            ctx->pc = 0x26518Cu;
            goto label_26518c;
        }
    }
    ctx->pc = 0x265188u;
    // 0x265188: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x265188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_26518c:
    // 0x26518c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26518cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265190: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x265190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265194: 0x3e00008  jr          $ra
    ctx->pc = 0x265194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265194u;
        // 0x265198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26519Cu;
    // 0x26519c: 0x0  nop
    ctx->pc = 0x26519cu;
    // NOP
    ctx->pc = 0x2651a0u;
}
