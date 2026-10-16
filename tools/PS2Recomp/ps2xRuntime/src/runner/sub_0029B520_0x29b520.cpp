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

// Function: sub_0029B520
// Address: 0x29b520 - 0x29b550
void sub_0029B520_0x29b520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B520_0x29b520");
#endif

    switch (ctx->pc) {
        case 0x29b538u: goto label_29b538;
        default: break;
    }

    ctx->pc = 0x29b520u;

    // 0x29b520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29b520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29b524: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29b524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29b528: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x29b528u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x29b52c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29b530: 0xc0a7332  jal         func_29CCC8
    ctx->pc = 0x29B530u;
    SET_GPR_U32(ctx, 31, 0x29B538u);
    ctx->pc = 0x29CCC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29CCC8u, 0x29B530u, 0x29B538u)) {
        return;
    }
    ctx->pc = 0x29B538u;
label_29b538:
    // 0x29b538: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b53c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b540: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29b540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29b544: 0x3e00008  jr          $ra
    ctx->pc = 0x29B544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B544u;
        // 0x29b548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B54Cu;
    // 0x29b54c: 0x0  nop
    ctx->pc = 0x29b54cu;
    // NOP
    ctx->pc = 0x29b550u;
}
