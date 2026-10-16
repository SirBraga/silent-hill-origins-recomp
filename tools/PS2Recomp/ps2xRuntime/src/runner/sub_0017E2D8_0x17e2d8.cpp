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

// Function: sub_0017E2D8
// Address: 0x17e2d8 - 0x17e310
void sub_0017E2D8_0x17e2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E2D8_0x17e2d8");
#endif

    switch (ctx->pc) {
        case 0x17e2f4u: goto label_17e2f4;
        case 0x17e300u: goto label_17e300;
        default: break;
    }

    ctx->pc = 0x17e2d8u;

    // 0x17e2d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e2dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17e2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e2e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17e2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17e2e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e2e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e2ec: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x17E2ECu;
    SET_GPR_U32(ctx, 31, 0x17E2F4u);
    ctx->pc = 0x17E2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E2ECu;
    // 0x17e2f0: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x17E2ECu, 0x17E2F4u)) {
        return;
    }
    ctx->pc = 0x17E2F4u;
label_17e2f4:
    // 0x17e2f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2f8: 0xc05f8c4  jal         func_17E310
    ctx->pc = 0x17E2F8u;
    SET_GPR_U32(ctx, 31, 0x17E300u);
    ctx->pc = 0x17E2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E2F8u;
    // 0x17e2fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E310u, 0x17E2F8u, 0x17E300u)) {
        return;
    }
    ctx->pc = 0x17E300u;
label_17e300:
    // 0x17e300: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17e300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e308: 0x3e00008  jr          $ra
    ctx->pc = 0x17E308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E308u;
        // 0x17e30c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E310u;
}
