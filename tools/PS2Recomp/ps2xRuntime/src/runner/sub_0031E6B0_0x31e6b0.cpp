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

// Function: sub_0031E6B0
// Address: 0x31e6b0 - 0x31e6e8
void sub_0031E6B0_0x31e6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E6B0_0x31e6b0");
#endif

    switch (ctx->pc) {
        case 0x31e6d8u: goto label_31e6d8;
        default: break;
    }

    ctx->pc = 0x31e6b0u;

    // 0x31e6b0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x31e6b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e6b4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31e6b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31e6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31e6bc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x31e6bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e6c0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x31e6c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e6c4: 0x8c446ccc  lw          $a0, 0x6CCC($v0)
    ctx->pc = 0x31e6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x686CCCu));
    // 0x31e6c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31e6cc: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x31e6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e6d0: 0xc0c7920  jal         func_31E480
    ctx->pc = 0x31E6D0u;
    SET_GPR_U32(ctx, 31, 0x31E6D8u);
    ctx->pc = 0x31E6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E6D0u;
    // 0x31e6d4: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E480u, 0x31E6D0u, 0x31E6D8u)) {
        return;
    }
    ctx->pc = 0x31E6D8u;
label_31e6d8:
    // 0x31e6d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x31E6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6DCu;
        // 0x31e6e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E6E4u;
    // 0x31e6e4: 0x0  nop
    ctx->pc = 0x31e6e4u;
    // NOP
    ctx->pc = 0x31e6e8u;
}
