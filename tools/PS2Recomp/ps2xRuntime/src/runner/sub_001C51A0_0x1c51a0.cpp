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

// Function: sub_001C51A0
// Address: 0x1c51a0 - 0x1c51d8
void sub_001C51A0_0x1c51a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C51A0_0x1c51a0");
#endif

    switch (ctx->pc) {
        case 0x1c51b4u: goto label_1c51b4;
        case 0x1c51bcu: goto label_1c51bc;
        case 0x1c51c4u: goto label_1c51c4;
        default: break;
    }

    ctx->pc = 0x1c51a0u;

    // 0x1c51a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c51a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c51a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c51a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c51a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c51a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c51ac: 0xc071488  jal         func_1C5220
    ctx->pc = 0x1C51ACu;
    SET_GPR_U32(ctx, 31, 0x1C51B4u);
    ctx->pc = 0x1C51B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51ACu;
    // 0x1c51b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C5220u, 0x1C51ACu, 0x1C51B4u)) {
        return;
    }
    ctx->pc = 0x1C51B4u;
label_1c51b4:
    // 0x1c51b4: 0xc071476  jal         func_1C51D8
    ctx->pc = 0x1C51B4u;
    SET_GPR_U32(ctx, 31, 0x1C51BCu);
    ctx->pc = 0x1C51B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51B4u;
    // 0x1c51b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C51D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C51D8u, 0x1C51B4u, 0x1C51BCu)) {
        return;
    }
    ctx->pc = 0x1C51BCu;
label_1c51bc:
    // 0x1c51bc: 0xc05fe1e  jal         func_17F878
    ctx->pc = 0x1C51BCu;
    SET_GPR_U32(ctx, 31, 0x1C51C4u);
    ctx->pc = 0x1C51C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51BCu;
    // 0x1c51c0: 0x8e0402d8  lw          $a0, 0x2D8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F878u, 0x1C51BCu, 0x1C51C4u)) {
        return;
    }
    ctx->pc = 0x1C51C4u;
label_1c51c4:
    // 0x1c51c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c51c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c51c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c51c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c51cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C51CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C51D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51CCu;
        // 0x1c51d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C51CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C51D4u;
    // 0x1c51d4: 0x0  nop
    ctx->pc = 0x1c51d4u;
    // NOP
    ctx->pc = 0x1c51d8u;
}
