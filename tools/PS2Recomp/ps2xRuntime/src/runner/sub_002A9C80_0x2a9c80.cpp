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

// Function: sub_002A9C80
// Address: 0x2a9c80 - 0x2a9cc0
void sub_002A9C80_0x2a9c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9C80_0x2a9c80");
#endif

    ctx->pc = 0x2a9c80u;

    // 0x2a9c80: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2a9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2a9c84: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2a9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2a9c88: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a9c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2a9c8c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A9C8Cu;
    {
        const bool branch_taken_0x2a9c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9c8c) {
            ctx->pc = 0x2A9CB4u;
            goto label_2a9cb4;
        }
    }
    ctx->pc = 0x2A9C94u;
    // 0x2a9c94: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2a9c94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a9c98: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2a9c98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2a9c9c: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x2a9c9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2a9ca0: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2a9ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2a9ca4: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x2a9ca4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2a9ca8: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x2a9ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x2a9cac: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x2a9cacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2a9cb0: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x2a9cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
label_2a9cb4:
    // 0x2a9cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9CBCu;
    // 0x2a9cbc: 0x0  nop
    ctx->pc = 0x2a9cbcu;
    // NOP
    ctx->pc = 0x2a9cc0u;
}
