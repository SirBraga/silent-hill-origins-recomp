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

// Function: sub_0029B8B8
// Address: 0x29b8b8 - 0x29b8f8
void sub_0029B8B8_0x29b8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B8B8_0x29b8b8");
#endif

    switch (ctx->pc) {
        case 0x29b8e4u: goto label_29b8e4;
        default: break;
    }

    ctx->pc = 0x29b8b8u;

    // 0x29b8b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29b8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29b8bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29b8c0: 0x94820048  lhu         $v0, 0x48($a0)
    ctx->pc = 0x29b8c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x29b8c4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x29B8C4u;
    {
        const bool branch_taken_0x29b8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b8c4) {
            ctx->pc = 0x29B8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B8C4u;
            // 0x29b8c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B8ECu;
            goto label_29b8ec;
        }
    }
    ctx->pc = 0x29B8CCu;
    // 0x29b8cc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x29b8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x29b8d0: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x29b8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x29b8d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29b8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b8d8: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x29b8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x29b8dc: 0xc0a748a  jal         func_29D228
    ctx->pc = 0x29B8DCu;
    SET_GPR_U32(ctx, 31, 0x29B8E4u);
    ctx->pc = 0x29B8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B8DCu;
    // 0x29b8e0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29D228u, 0x29B8DCu, 0x29B8E4u)) {
        return;
    }
    ctx->pc = 0x29B8E4u;
label_29b8e4:
    // 0x29b8e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B8E4u;
    {
        const bool branch_taken_0x29b8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B8E4u;
        // 0x29b8e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b8e4) {
            ctx->pc = 0x29B8F0u;
            goto label_29b8f0;
        }
    }
    ctx->pc = 0x29B8ECu;
label_29b8ec:
    // 0x29b8ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29b8f0:
    // 0x29b8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x29B8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B8F0u;
        // 0x29b8f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B8F8u;
}
