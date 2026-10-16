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

// Function: sub_001F4BB8
// Address: 0x1f4bb8 - 0x1f4be0
void sub_001F4BB8_0x1f4bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4BB8_0x1f4bb8");
#endif

    switch (ctx->pc) {
        case 0x1f4bd4u: goto label_1f4bd4;
        default: break;
    }

    ctx->pc = 0x1f4bb8u;

    // 0x1f4bb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f4bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f4bbc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1f4bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f4bc0: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1f4bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1f4bc4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f4bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4bc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f4bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f4bcc: 0xc07d420  jal         func_1F5080
    ctx->pc = 0x1F4BCCu;
    SET_GPR_U32(ctx, 31, 0x1F4BD4u);
    ctx->pc = 0x1F4BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4BCCu;
    // 0x1f4bd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5080u, 0x1F4BCCu, 0x1F4BD4u)) {
        return;
    }
    ctx->pc = 0x1F4BD4u;
label_1f4bd4:
    // 0x1f4bd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f4bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4BD8u;
        // 0x1f4bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4BE0u;
}
