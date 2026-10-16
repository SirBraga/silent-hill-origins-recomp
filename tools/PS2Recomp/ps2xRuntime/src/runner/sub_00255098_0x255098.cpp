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

// Function: sub_00255098
// Address: 0x255098 - 0x2550e0
void sub_00255098_0x255098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255098_0x255098");
#endif

    switch (ctx->pc) {
        case 0x2550b4u: goto label_2550b4;
        default: break;
    }

    ctx->pc = 0x255098u;

    // 0x255098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x255098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25509c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x25509cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x2550a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2550a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2550a4: 0x24a54448  addiu       $a1, $a1, 0x4448
    ctx->pc = 0x2550a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17480));
    // 0x2550a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2550a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2550ac: 0xc09545a  jal         func_255168
    ctx->pc = 0x2550ACu;
    SET_GPR_U32(ctx, 31, 0x2550B4u);
    ctx->pc = 0x2550B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2550ACu;
    // 0x2550b0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x2550ACu, 0x2550B4u)) {
        return;
    }
    ctx->pc = 0x2550B4u;
label_2550b4:
    // 0x2550b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2550b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2550b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2550b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2550bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2550BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2550C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550BCu;
        // 0x2550c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2550BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2550C4u;
    // 0x2550c4: 0x0  nop
    ctx->pc = 0x2550c4u;
    // NOP
    // 0x2550c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2550c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2550cc: 0x0  nop
    ctx->pc = 0x2550ccu;
    // NOP
    // 0x2550d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2550d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2550d4: 0x0  nop
    ctx->pc = 0x2550d4u;
    // NOP
    // 0x2550d8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2550d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2550dc: 0x0  nop
    ctx->pc = 0x2550dcu;
    // NOP
    ctx->pc = 0x2550e0u;
}
