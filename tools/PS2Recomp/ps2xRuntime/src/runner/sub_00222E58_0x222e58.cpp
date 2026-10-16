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

// Function: sub_00222E58
// Address: 0x222e58 - 0x222ea0
void sub_00222E58_0x222e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222E58_0x222e58");
#endif

    switch (ctx->pc) {
        case 0x222e84u: goto label_222e84;
        default: break;
    }

    ctx->pc = 0x222e58u;

    // 0x222e58: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x222e58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x222e5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x222e60: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x222e60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e64: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x222e64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e68: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x222e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e6c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x222e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x222e70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222e74: 0x24440400  addiu       $a0, $v0, 0x400
    ctx->pc = 0x222e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x222e78: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x222e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e7c: 0xc0936dc  jal         func_24DB70
    ctx->pc = 0x222E7Cu;
    SET_GPR_U32(ctx, 31, 0x222E84u);
    ctx->pc = 0x222E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222E7Cu;
    // 0x222e80: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DB70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DB70u, 0x222E7Cu, 0x222E84u)) {
        return;
    }
    ctx->pc = 0x222E84u;
label_222e84:
    // 0x222e84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222e88: 0x3e00008  jr          $ra
    ctx->pc = 0x222E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E88u;
        // 0x222e8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222E90u;
    // 0x222e90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x222e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x222e94: 0x0  nop
    ctx->pc = 0x222e94u;
    // NOP
    // 0x222e98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x222e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x222e9c: 0x0  nop
    ctx->pc = 0x222e9cu;
    // NOP
    ctx->pc = 0x222ea0u;
}
