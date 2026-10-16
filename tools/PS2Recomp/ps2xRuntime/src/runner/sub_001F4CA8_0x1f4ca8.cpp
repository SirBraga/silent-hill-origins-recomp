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

// Function: sub_001F4CA8
// Address: 0x1f4ca8 - 0x1f4cd0
void sub_001F4CA8_0x1f4ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4CA8_0x1f4ca8");
#endif

    switch (ctx->pc) {
        case 0x1f4cc0u: goto label_1f4cc0;
        default: break;
    }

    ctx->pc = 0x1f4ca8u;

    // 0x1f4ca8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1f4ca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4cac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f4cacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f4cb0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1f4cb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4cb8: 0xc07d420  jal         func_1F5080
    ctx->pc = 0x1F4CB8u;
    SET_GPR_U32(ctx, 31, 0x1F4CC0u);
    ctx->pc = 0x1F4CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4CB8u;
    // 0x1f4cbc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5080u, 0x1F4CB8u, 0x1F4CC0u)) {
        return;
    }
    ctx->pc = 0x1F4CC0u;
label_1f4cc0:
    // 0x1f4cc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4CC4u;
        // 0x1f4cc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4CCCu;
    // 0x1f4ccc: 0x0  nop
    ctx->pc = 0x1f4cccu;
    // NOP
    ctx->pc = 0x1f4cd0u;
}
