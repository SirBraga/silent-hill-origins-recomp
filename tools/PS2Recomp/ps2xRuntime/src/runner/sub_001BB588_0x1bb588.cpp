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

// Function: sub_001BB588
// Address: 0x1bb588 - 0x1bb5b0
void sub_001BB588_0x1bb588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB588_0x1bb588");
#endif

    switch (ctx->pc) {
        case 0x1bb58cu: goto label_1bb58c;
        default: break;
    }

    ctx->pc = 0x1bb588u;

    // 0x1bb588: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1bb588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
label_1bb58c:
    // 0x1bb58c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb590: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bb590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bb594: 0x2c640001  sltiu       $a0, $v1, 0x1
    ctx->pc = 0x1bb594u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1bb598: 0xae030324  sw          $v1, 0x324($s0)
    ctx->pc = 0x1bb598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 3));
    // 0x1bb59c: 0xae04032c  sw          $a0, 0x32C($s0)
    ctx->pc = 0x1bb59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 4));
    // 0x1bb5a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bb5a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB5A4u;
        // 0x1bb5a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB5ACu;
    // 0x1bb5ac: 0x0  nop
    ctx->pc = 0x1bb5acu;
    // NOP
    ctx->pc = 0x1bb5b0u;
}
