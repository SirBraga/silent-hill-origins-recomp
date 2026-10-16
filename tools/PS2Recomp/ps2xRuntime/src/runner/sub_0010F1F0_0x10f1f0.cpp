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

// Function: sub_0010F1F0
// Address: 0x10f1f0 - 0x10f220
void sub_0010F1F0_0x10f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F1F0_0x10f1f0");
#endif

    switch (ctx->pc) {
        case 0x10f210u: goto label_10f210;
        default: break;
    }

    ctx->pc = 0x10f1f0u;

    // 0x10f1f0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x10f1f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f1f4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x10f1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x10f1f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f1fc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x10f1fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f200: 0x8c6482f0  lw          $a0, -0x7D10($v1)
    ctx->pc = 0x10f200u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3382F0u));
    // 0x10f204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10f208: 0xc043140  jal         func_10C500
    ctx->pc = 0x10F208u;
    SET_GPR_U32(ctx, 31, 0x10F210u);
    ctx->pc = 0x10F20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F208u;
    // 0x10f20c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C500u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10C500u, 0x10F208u, 0x10F210u)) {
        return;
    }
    ctx->pc = 0x10F210u;
label_10f210:
    // 0x10f210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f214: 0x3e00008  jr          $ra
    ctx->pc = 0x10F214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F214u;
        // 0x10f218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F21Cu;
    // 0x10f21c: 0x0  nop
    ctx->pc = 0x10f21cu;
    // NOP
    ctx->pc = 0x10f220u;
}
