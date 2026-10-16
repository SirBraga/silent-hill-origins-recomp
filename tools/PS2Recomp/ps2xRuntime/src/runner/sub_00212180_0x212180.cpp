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

// Function: sub_00212180
// Address: 0x212180 - 0x2121a0
void sub_00212180_0x212180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212180_0x212180");
#endif

    switch (ctx->pc) {
        case 0x212194u: goto label_212194;
        default: break;
    }

    ctx->pc = 0x212180u;

    // 0x212180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x212180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x212184: 0x85202d  daddu       $a0, $a0, $a1
    ctx->pc = 0x212184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 5));
    // 0x212188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x212188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21218c: 0xc0ca2b8  jal         func_328AE0
    ctx->pc = 0x21218Cu;
    SET_GPR_U32(ctx, 31, 0x212194u);
    ctx->pc = 0x212190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21218Cu;
    // 0x212190: 0x6484ffff  daddiu      $a0, $a0, -0x1 (Delay Slot)
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x21218Cu, 0x212194u)) {
        return;
    }
    ctx->pc = 0x212194u;
label_212194:
    // 0x212194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212198: 0x3e00008  jr          $ra
    ctx->pc = 0x212198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212198u;
        // 0x21219c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2121A0u;
}
