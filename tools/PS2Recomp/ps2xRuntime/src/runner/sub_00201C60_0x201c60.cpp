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

// Function: sub_00201C60
// Address: 0x201c60 - 0x201cb0
void sub_00201C60_0x201c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201C60_0x201c60");
#endif

    switch (ctx->pc) {
        case 0x201c78u: goto label_201c78;
        case 0x201c88u: goto label_201c88;
        case 0x201c98u: goto label_201c98;
        default: break;
    }

    ctx->pc = 0x201c60u;

    // 0x201c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201c64: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x201c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x201c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201c6c: 0x24a51a08  addiu       $a1, $a1, 0x1A08
    ctx->pc = 0x201c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6664));
    // 0x201c70: 0xc080052  jal         func_200148
    ctx->pc = 0x201C70u;
    SET_GPR_U32(ctx, 31, 0x201C78u);
    ctx->pc = 0x201C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C70u;
    // 0x201c74: 0x2404070f  addiu       $a0, $zero, 0x70F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1807));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200148u, 0x201C70u, 0x201C78u)) {
        return;
    }
    ctx->pc = 0x201C78u;
label_201c78:
    // 0x201c78: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x201c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x201c7c: 0x24040715  addiu       $a0, $zero, 0x715
    ctx->pc = 0x201c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1813));
    // 0x201c80: 0xc080052  jal         func_200148
    ctx->pc = 0x201C80u;
    SET_GPR_U32(ctx, 31, 0x201C88u);
    ctx->pc = 0x201C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C80u;
    // 0x201c84: 0x24a51a88  addiu       $a1, $a1, 0x1A88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200148u, 0x201C80u, 0x201C88u)) {
        return;
    }
    ctx->pc = 0x201C88u;
label_201c88:
    // 0x201c88: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x201c88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x201c8c: 0x24040716  addiu       $a0, $zero, 0x716
    ctx->pc = 0x201c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1814));
    // 0x201c90: 0xc080052  jal         func_200148
    ctx->pc = 0x201C90u;
    SET_GPR_U32(ctx, 31, 0x201C98u);
    ctx->pc = 0x201C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C90u;
    // 0x201c94: 0x24a51b70  addiu       $a1, $a1, 0x1B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200148u, 0x201C90u, 0x201C98u)) {
        return;
    }
    ctx->pc = 0x201C98u;
label_201c98:
    // 0x201c98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x201C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C9Cu;
        // 0x201ca0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201CA4u;
    // 0x201ca4: 0x0  nop
    ctx->pc = 0x201ca4u;
    // NOP
    // 0x201ca8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x201ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x201cac: 0x0  nop
    ctx->pc = 0x201cacu;
    // NOP
    ctx->pc = 0x201cb0u;
}
