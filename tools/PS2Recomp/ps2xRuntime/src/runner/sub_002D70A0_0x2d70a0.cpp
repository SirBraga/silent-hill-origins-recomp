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

// Function: sub_002D70A0
// Address: 0x2d70a0 - 0x2d70e8
void sub_002D70A0_0x2d70a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D70A0_0x2d70a0");
#endif

    switch (ctx->pc) {
        case 0x2d70c8u: goto label_2d70c8;
        case 0x2d70d0u: goto label_2d70d0;
        default: break;
    }

    ctx->pc = 0x2d70a0u;

    // 0x2d70a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d70a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d70a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d70a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d70a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d70a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d70ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d70acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d70b0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2d70b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2d70b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d70b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d70b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D70B8u;
    {
        const bool branch_taken_0x2d70b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D70BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D70B8u;
        // 0x2d70bc: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d70b8) {
            ctx->pc = 0x2D70D0u;
            goto label_2d70d0;
        }
    }
    ctx->pc = 0x2D70C0u;
    // 0x2d70c0: 0xc0acb5a  jal         func_2B2D68
    ctx->pc = 0x2D70C0u;
    SET_GPR_U32(ctx, 31, 0x2D70C8u);
    ctx->pc = 0x2B2D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2D68u, 0x2D70C0u, 0x2D70C8u)) {
        return;
    }
    ctx->pc = 0x2D70C8u;
label_2d70c8:
    // 0x2d70c8: 0xc0ad2d0  jal         func_2B4B40
    ctx->pc = 0x2D70C8u;
    SET_GPR_U32(ctx, 31, 0x2D70D0u);
    ctx->pc = 0x2D70CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D70C8u;
    // 0x2d70cc: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4B40u, 0x2D70C8u, 0x2D70D0u)) {
        return;
    }
    ctx->pc = 0x2D70D0u;
label_2d70d0:
    // 0x2d70d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d70d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d70d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d70d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d70d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d70d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d70dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D70DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D70E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D70DCu;
        // 0x2d70e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D70DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D70E4u;
    // 0x2d70e4: 0x0  nop
    ctx->pc = 0x2d70e4u;
    // NOP
    ctx->pc = 0x2d70e8u;
}
