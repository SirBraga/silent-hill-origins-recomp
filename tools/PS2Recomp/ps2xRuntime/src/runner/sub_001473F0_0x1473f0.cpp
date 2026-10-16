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

// Function: sub_001473F0
// Address: 0x1473f0 - 0x147438
void sub_001473F0_0x1473f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001473F0_0x1473f0");
#endif

    switch (ctx->pc) {
        case 0x147414u: goto label_147414;
        case 0x147420u: goto label_147420;
        default: break;
    }

    ctx->pc = 0x1473f0u;

    // 0x1473f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1473f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1473f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1473f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1473f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1473f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1473fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1473fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147404: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x147404u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x147408: 0x8e248bc4  lw          $a0, -0x743C($s1)
    ctx->pc = 0x147408u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338BC4u));
    // 0x14740c: 0xc066512  jal         func_199448
    ctx->pc = 0x14740Cu;
    SET_GPR_U32(ctx, 31, 0x147414u);
    ctx->pc = 0x147410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14740Cu;
    // 0x147410: 0x8e050054  lw          $a1, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199448u, 0x14740Cu, 0x147414u)) {
        return;
    }
    ctx->pc = 0x147414u;
label_147414:
    // 0x147414: 0x8e248bc4  lw          $a0, -0x743C($s1)
    ctx->pc = 0x147414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937540)));
    // 0x147418: 0xc06659a  jal         func_199668
    ctx->pc = 0x147418u;
    SET_GPR_U32(ctx, 31, 0x147420u);
    ctx->pc = 0x14741Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147418u;
    // 0x14741c: 0x8e050054  lw          $a1, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199668u, 0x147418u, 0x147420u)) {
        return;
    }
    ctx->pc = 0x147420u;
label_147420:
    // 0x147420: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x147420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x147424: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x147424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147428: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x147428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14742c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14742cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147430: 0x3e00008  jr          $ra
    ctx->pc = 0x147430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147430u;
        // 0x147434: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147438u;
}
