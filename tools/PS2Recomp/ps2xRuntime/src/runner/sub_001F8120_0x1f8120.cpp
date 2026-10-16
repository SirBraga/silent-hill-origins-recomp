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

// Function: sub_001F8120
// Address: 0x1f8120 - 0x1f8150
void sub_001F8120_0x1f8120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8120_0x1f8120");
#endif

    switch (ctx->pc) {
        case 0x1f8140u: goto label_1f8140;
        default: break;
    }

    ctx->pc = 0x1f8120u;

    // 0x1f8120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f8120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f8124: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1f8124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1f8128: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f8128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f812c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f812cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8130: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1f8130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1f8134: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1f8134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1f8138: 0xc07dfae  jal         func_1F7EB8
    ctx->pc = 0x1F8138u;
    SET_GPR_U32(ctx, 31, 0x1F8140u);
    ctx->pc = 0x1F813Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8138u;
    // 0x1f813c: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7EB8u, 0x1F8138u, 0x1F8140u)) {
        return;
    }
    ctx->pc = 0x1F8140u;
label_1f8140:
    // 0x1f8140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f8140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8144: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8144u;
        // 0x1f8148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F814Cu;
    // 0x1f814c: 0x0  nop
    ctx->pc = 0x1f814cu;
    // NOP
    ctx->pc = 0x1f8150u;
}
