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

// Function: sub_002ED8B0
// Address: 0x2ed8b0 - 0x2ed908
void sub_002ED8B0_0x2ed8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED8B0_0x2ed8b0");
#endif

    switch (ctx->pc) {
        case 0x2ed8e0u: goto label_2ed8e0;
        case 0x2ed8f4u: goto label_2ed8f4;
        default: break;
    }

    ctx->pc = 0x2ed8b0u;

    // 0x2ed8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ed8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ed8b4: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x2ed8b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x2ed8b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ed8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ed8bc: 0x2508e8a8  addiu       $t0, $t0, -0x1758
    ctx->pc = 0x2ed8bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961320));
    // 0x2ed8c0: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2ed8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x2ed8c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed8c8: 0x2610e890  addiu       $s0, $s0, -0x1770
    ctx->pc = 0x2ed8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961296));
    // 0x2ed8cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ed8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed8d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ed8d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed8d4: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x2ed8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x2ed8d8: 0xc0bb784  jal         func_2EDE10
    ctx->pc = 0x2ED8D8u;
    SET_GPR_U32(ctx, 31, 0x2ED8E0u);
    ctx->pc = 0x2ED8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED8D8u;
    // 0x2ed8dc: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDE10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EDE10u, 0x2ED8D8u, 0x2ED8E0u)) {
        return;
    }
    ctx->pc = 0x2ED8E0u;
label_2ed8e0:
    // 0x2ed8e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed8e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed8e8: 0x24065400  addiu       $a2, $zero, 0x5400
    ctx->pc = 0x2ed8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21504));
    // 0x2ed8ec: 0xc0bb8e0  jal         func_2EE380
    ctx->pc = 0x2ED8ECu;
    SET_GPR_U32(ctx, 31, 0x2ED8F4u);
    ctx->pc = 0x2ED8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED8ECu;
    // 0x2ed8f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE380u, 0x2ED8ECu, 0x2ED8F4u)) {
        return;
    }
    ctx->pc = 0x2ED8F4u;
label_2ed8f4:
    // 0x2ed8f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ed8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed8f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED8FCu;
        // 0x2ed900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED904u;
    // 0x2ed904: 0x0  nop
    ctx->pc = 0x2ed904u;
    // NOP
    ctx->pc = 0x2ed908u;
}
