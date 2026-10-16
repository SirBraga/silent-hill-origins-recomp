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

// Function: sub_001F9498
// Address: 0x1f9498 - 0x1f94d0
void sub_001F9498_0x1f9498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9498_0x1f9498");
#endif

    switch (ctx->pc) {
        case 0x1f94a8u: goto label_1f94a8;
        default: break;
    }

    ctx->pc = 0x1f9498u;

    // 0x1f9498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f9498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f949c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f949cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f94a0: 0xc07e144  jal         func_1F8510
    ctx->pc = 0x1F94A0u;
    SET_GPR_U32(ctx, 31, 0x1F94A8u);
    ctx->pc = 0x1F8510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8510u, 0x1F94A0u, 0x1F94A8u)) {
        return;
    }
    ctx->pc = 0x1F94A8u;
label_1f94a8:
    // 0x1f94a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f94a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f94ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f94acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f94b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f94b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f94b4: 0xdc640020  ld          $a0, 0x20($v1)
    ctx->pc = 0x1f94b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f94b8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1f94b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f94bc: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x1f94bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
    // 0x1f94c0: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x1f94c0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x1f94c4: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x1f94c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x1f94c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F94C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F94CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F94C8u;
        // 0x1f94cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F94C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F94D0u;
}
