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

// Function: sub_00146C68
// Address: 0x146c68 - 0x146c98
void sub_00146C68_0x146c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146C68_0x146c68");
#endif

    switch (ctx->pc) {
        case 0x146c80u: goto label_146c80;
        default: break;
    }

    ctx->pc = 0x146c68u;

    // 0x146c68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146c6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x146c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x146c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x146c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146c78: 0xc097b74  jal         func_25EDD0
    ctx->pc = 0x146C78u;
    SET_GPR_U32(ctx, 31, 0x146C80u);
    ctx->pc = 0x146C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146C78u;
    // 0x146c7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EDD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EDD0u, 0x146C78u, 0x146C80u)) {
        return;
    }
    ctx->pc = 0x146C80u;
label_146c80:
    // 0x146c80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x146c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146c88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x146c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x146C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146C8Cu;
        // 0x146c90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146C94u;
    // 0x146c94: 0x0  nop
    ctx->pc = 0x146c94u;
    // NOP
    ctx->pc = 0x146c98u;
}
