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

// Function: sub_001FC190
// Address: 0x1fc190 - 0x1fc1d8
void sub_001FC190_0x1fc190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC190_0x1fc190");
#endif

    switch (ctx->pc) {
        case 0x1fc1b4u: goto label_1fc1b4;
        case 0x1fc1c4u: goto label_1fc1c4;
        default: break;
    }

    ctx->pc = 0x1fc190u;

    // 0x1fc190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fc190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fc194: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1fc194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fc198: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fc198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fc19c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fc19cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc1a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fc1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fc1a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc1a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fc1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc1ac: 0xc093546  jal         func_24D518
    ctx->pc = 0x1FC1ACu;
    SET_GPR_U32(ctx, 31, 0x1FC1B4u);
    ctx->pc = 0x1FC1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC1ACu;
    // 0x1fc1b0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1FC1ACu, 0x1FC1B4u)) {
        return;
    }
    ctx->pc = 0x1FC1B4u;
label_1fc1b4:
    // 0x1fc1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc1b8: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x1fc1b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1fc1bc: 0xc093546  jal         func_24D518
    ctx->pc = 0x1FC1BCu;
    SET_GPR_U32(ctx, 31, 0x1FC1C4u);
    ctx->pc = 0x1FC1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC1BCu;
    // 0x1fc1c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1FC1BCu, 0x1FC1C4u)) {
        return;
    }
    ctx->pc = 0x1FC1C4u;
label_1fc1c4:
    // 0x1fc1c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fc1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc1c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fc1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1CCu;
        // 0x1fc1d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC1D4u;
    // 0x1fc1d4: 0x0  nop
    ctx->pc = 0x1fc1d4u;
    // NOP
    ctx->pc = 0x1fc1d8u;
}
