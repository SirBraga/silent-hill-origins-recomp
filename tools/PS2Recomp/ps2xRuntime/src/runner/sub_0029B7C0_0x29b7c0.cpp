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

// Function: sub_0029B7C0
// Address: 0x29b7c0 - 0x29b7f8
void sub_0029B7C0_0x29b7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B7C0_0x29b7c0");
#endif

    switch (ctx->pc) {
        case 0x29b7e0u: goto label_29b7e0;
        default: break;
    }

    ctx->pc = 0x29b7c0u;

    // 0x29b7c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b7c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x29b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x29b7c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b7cc: 0x2442d9b0  addiu       $v0, $v0, -0x2650
    ctx->pc = 0x29b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957488));
    // 0x29b7d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b7d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b7d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b7d8: 0xc0a7416  jal         func_29D058
    ctx->pc = 0x29B7D8u;
    SET_GPR_U32(ctx, 31, 0x29B7E0u);
    ctx->pc = 0x29B7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B7D8u;
    // 0x29b7dc: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29D058u, 0x29B7D8u, 0x29B7E0u)) {
        return;
    }
    ctx->pc = 0x29B7E0u;
label_29b7e0:
    // 0x29b7e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29b7e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b7e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b7e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b7e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x29B7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B7ECu;
        // 0x29b7f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B7F4u;
    // 0x29b7f4: 0x0  nop
    ctx->pc = 0x29b7f4u;
    // NOP
    ctx->pc = 0x29b7f8u;
}
