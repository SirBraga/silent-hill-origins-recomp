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

// Function: sub_00230E54
// Address: 0x230e54 - 0x230e78
void sub_00230E54_0x230e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230E54_0x230e54");
#endif

    switch (ctx->pc) {
        case 0x230e5cu: goto label_230e5c;
        case 0x230e60u: goto label_230e60;
        case 0x230e64u: goto label_230e64;
        default: break;
    }

    ctx->pc = 0x230e54u;

    // 0x230e54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x230E54u;
    {
        const bool branch_taken_0x230e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E54u;
        // 0x230e58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e54) {
            ctx->pc = 0x230E60u;
            goto label_230e60;
        }
    }
    ctx->pc = 0x230E5Cu;
label_230e5c:
    // 0x230e5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230e60:
    // 0x230e60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x230e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_230e64:
    // 0x230e64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x230e64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x230E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E6Cu;
        // 0x230e70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230E74u;
    // 0x230e74: 0x0  nop
    ctx->pc = 0x230e74u;
    // NOP
    ctx->pc = 0x230e78u;
}
