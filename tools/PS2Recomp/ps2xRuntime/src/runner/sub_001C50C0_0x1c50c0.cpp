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

// Function: sub_001C50C0
// Address: 0x1c50c0 - 0x1c5108
void sub_001C50C0_0x1c50c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C50C0_0x1c50c0");
#endif

    switch (ctx->pc) {
        case 0x1c50d4u: goto label_1c50d4;
        case 0x1c50e0u: goto label_1c50e0;
        case 0x1c50e8u: goto label_1c50e8;
        case 0x1c50f4u: goto label_1c50f4;
        default: break;
    }

    ctx->pc = 0x1c50c0u;

    // 0x1c50c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c50c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c50c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c50c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c50c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c50c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c50cc: 0xc06d744  jal         func_1B5D10
    ctx->pc = 0x1C50CCu;
    SET_GPR_U32(ctx, 31, 0x1C50D4u);
    ctx->pc = 0x1C50D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50CCu;
    // 0x1c50d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B5D10u, 0x1C50CCu, 0x1C50D4u)) {
        return;
    }
    ctx->pc = 0x1C50D4u;
label_1c50d4:
    // 0x1c50d4: 0x8e0502d4  lw          $a1, 0x2D4($s0)
    ctx->pc = 0x1c50d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
    // 0x1c50d8: 0xc06c97c  jal         func_1B25F0
    ctx->pc = 0x1C50D8u;
    SET_GPR_U32(ctx, 31, 0x1C50E0u);
    ctx->pc = 0x1C50DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50D8u;
    // 0x1c50dc: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1C50D8u, 0x1C50E0u)) {
        return;
    }
    ctx->pc = 0x1C50E0u;
label_1c50e0:
    // 0x1c50e0: 0xc05fda6  jal         func_17F698
    ctx->pc = 0x1C50E0u;
    SET_GPR_U32(ctx, 31, 0x1C50E8u);
    ctx->pc = 0x1C50E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50E0u;
    // 0x1c50e4: 0xae0202d0  sw          $v0, 0x2D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F698u, 0x1C50E0u, 0x1C50E8u)) {
        return;
    }
    ctx->pc = 0x1C50E8u;
label_1c50e8:
    // 0x1c50e8: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c50e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1c50ec: 0xc071476  jal         func_1C51D8
    ctx->pc = 0x1C50ECu;
    SET_GPR_U32(ctx, 31, 0x1C50F4u);
    ctx->pc = 0x1C50F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50ECu;
    // 0x1c50f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C51D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C51D8u, 0x1C50ECu, 0x1C50F4u)) {
        return;
    }
    ctx->pc = 0x1C50F4u;
label_1c50f4:
    // 0x1c50f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c50f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c50f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c50f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c50fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C50FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50FCu;
        // 0x1c5100: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C50FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5104u;
    // 0x1c5104: 0x0  nop
    ctx->pc = 0x1c5104u;
    // NOP
    ctx->pc = 0x1c5108u;
}
