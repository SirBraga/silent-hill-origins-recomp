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

// Function: sub_00317200
// Address: 0x317200 - 0x317238
void sub_00317200_0x317200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317200_0x317200");
#endif

    switch (ctx->pc) {
        case 0x317228u: goto label_317228;
        default: break;
    }

    ctx->pc = 0x317200u;

    // 0x317200: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x317200u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317204: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x317204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x317208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x317208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31720c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x31720cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317210: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x317210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317214: 0x8c446ccc  lw          $a0, 0x6CCC($v0)
    ctx->pc = 0x317214u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x686CCCu));
    // 0x317218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x317218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31721c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x31721cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317220: 0xc0c5bfc  jal         func_316FF0
    ctx->pc = 0x317220u;
    SET_GPR_U32(ctx, 31, 0x317228u);
    ctx->pc = 0x317224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317220u;
    // 0x317224: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316FF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316FF0u, 0x317220u, 0x317228u)) {
        return;
    }
    ctx->pc = 0x317228u;
label_317228:
    // 0x317228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31722c: 0x3e00008  jr          $ra
    ctx->pc = 0x31722Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31722Cu;
        // 0x317230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31722Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317234u;
    // 0x317234: 0x0  nop
    ctx->pc = 0x317234u;
    // NOP
    ctx->pc = 0x317238u;
}
