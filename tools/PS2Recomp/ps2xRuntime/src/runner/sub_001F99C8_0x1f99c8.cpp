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

// Function: sub_001F99C8
// Address: 0x1f99c8 - 0x1f9a00
void sub_001F99C8_0x1f99c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F99C8_0x1f99c8");
#endif

    switch (ctx->pc) {
        case 0x1f99d8u: goto label_1f99d8;
        default: break;
    }

    ctx->pc = 0x1f99c8u;

    // 0x1f99c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f99c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f99cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f99ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f99d0: 0xc07e144  jal         func_1F8510
    ctx->pc = 0x1F99D0u;
    SET_GPR_U32(ctx, 31, 0x1F99D8u);
    ctx->pc = 0x1F8510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8510u, 0x1F99D0u, 0x1F99D8u)) {
        return;
    }
    ctx->pc = 0x1F99D8u;
label_1f99d8:
    // 0x1f99d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f99d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f99dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F99DCu;
    {
        const bool branch_taken_0x1f99dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F99E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99DCu;
        // 0x1f99e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f99dc) {
            ctx->pc = 0x1F99ECu;
            goto label_1f99ec;
        }
    }
    ctx->pc = 0x1F99E4u;
    // 0x1f99e4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1f99e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1f99e8: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1f99e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f99ec:
    // 0x1f99ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f99ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f99f0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1f99f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f99f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F99F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F99F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99F4u;
        // 0x1f99f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F99F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F99FCu;
    // 0x1f99fc: 0x0  nop
    ctx->pc = 0x1f99fcu;
    // NOP
    ctx->pc = 0x1f9a00u;
}
