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

// Function: sub_002D6B18
// Address: 0x2d6b18 - 0x2d6b48
void sub_002D6B18_0x2d6b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6B18_0x2d6b18");
#endif

    switch (ctx->pc) {
        case 0x2d6b34u: goto label_2d6b34;
        default: break;
    }

    ctx->pc = 0x2d6b18u;

    // 0x2d6b18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d6b1c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2d6b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2d6b20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d6b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d6b24: 0x24a5edd0  addiu       $a1, $a1, -0x1230
    ctx->pc = 0x2d6b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962640));
    // 0x2d6b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d6b2c: 0xc0aa872  jal         func_2AA1C8
    ctx->pc = 0x2D6B2Cu;
    SET_GPR_U32(ctx, 31, 0x2D6B34u);
    ctx->pc = 0x2D6B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6B2Cu;
    // 0x2d6b30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA1C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA1C8u, 0x2D6B2Cu, 0x2D6B34u)) {
        return;
    }
    ctx->pc = 0x2D6B34u;
label_2d6b34:
    // 0x2d6b34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d6b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6b3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d6b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6b40: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B40u;
        // 0x2d6b44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6B48u;
}
