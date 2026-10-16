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

// Function: sub_001F4998
// Address: 0x1f4998 - 0x1f49e0
void sub_001F4998_0x1f4998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4998_0x1f4998");
#endif

    switch (ctx->pc) {
        case 0x1f49b4u: goto label_1f49b4;
        case 0x1f49d0u: goto label_1f49d0;
        default: break;
    }

    ctx->pc = 0x1f4998u;

    // 0x1f4998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f4998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f499c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f499cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f49a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f49a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f49a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f49a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f49a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f49a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f49ac: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1F49ACu;
    SET_GPR_U32(ctx, 31, 0x1F49B4u);
    ctx->pc = 0x1F49B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F49ACu;
    // 0x1f49b0: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1F49ACu, 0x1F49B4u)) {
        return;
    }
    ctx->pc = 0x1F49B4u;
label_1f49b4:
    // 0x1f49b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f49b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f49b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f49b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f49bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f49bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f49c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f49c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f49c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f49c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f49c8: 0xc07d2a4  jal         func_1F4A90
    ctx->pc = 0x1F49C8u;
    SET_GPR_U32(ctx, 31, 0x1F49D0u);
    ctx->pc = 0x1F49CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F49C8u;
    // 0x1f49cc: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4A90u, 0x1F49C8u, 0x1F49D0u)) {
        return;
    }
    ctx->pc = 0x1F49D0u;
label_1f49d0:
    // 0x1f49d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f49d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f49d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f49d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f49d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F49D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F49DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F49D8u;
        // 0x1f49dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F49D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F49E0u;
}
