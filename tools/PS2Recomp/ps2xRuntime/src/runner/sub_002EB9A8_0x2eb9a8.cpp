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

// Function: sub_002EB9A8
// Address: 0x2eb9a8 - 0x2eb9f8
void sub_002EB9A8_0x2eb9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB9A8_0x2eb9a8");
#endif

    switch (ctx->pc) {
        case 0x2eb9bcu: goto label_2eb9bc;
        case 0x2eb9e0u: goto label_2eb9e0;
        case 0x2eb9e8u: goto label_2eb9e8;
        default: break;
    }

    ctx->pc = 0x2eb9a8u;

    // 0x2eb9a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eb9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2eb9ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2eb9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2eb9b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eb9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eb9b4: 0xc0c8484  jal         func_321210
    ctx->pc = 0x2EB9B4u;
    SET_GPR_U32(ctx, 31, 0x2EB9BCu);
    ctx->pc = 0x2EB9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB9B4u;
    // 0x2eb9b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321210u, 0x2EB9B4u, 0x2EB9BCu)) {
        return;
    }
    ctx->pc = 0x2EB9BCu;
label_2eb9bc:
    // 0x2eb9bc: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2eb9bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb9c0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2eb9c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb9c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb9c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eb9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb9cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb9ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb9d0: 0x24070046  addiu       $a3, $zero, 0x46
    ctx->pc = 0x2eb9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2eb9d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eb9d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb9d8: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2EB9D8u;
    SET_GPR_U32(ctx, 31, 0x2EB9E0u);
    ctx->pc = 0x2EB9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB9D8u;
    // 0x2eb9dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2EB9D8u, 0x2EB9E0u)) {
        return;
    }
    ctx->pc = 0x2EB9E0u;
label_2eb9e0:
    // 0x2eb9e0: 0xc0c8490  jal         func_321240
    ctx->pc = 0x2EB9E0u;
    SET_GPR_U32(ctx, 31, 0x2EB9E8u);
    ctx->pc = 0x321240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321240u, 0x2EB9E0u, 0x2EB9E8u)) {
        return;
    }
    ctx->pc = 0x2EB9E8u;
label_2eb9e8:
    // 0x2eb9e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2eb9e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb9ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eb9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9F0u;
        // 0x2eb9f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB9F8u;
}
