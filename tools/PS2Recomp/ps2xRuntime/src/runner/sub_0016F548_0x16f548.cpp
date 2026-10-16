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

// Function: sub_0016F548
// Address: 0x16f548 - 0x16f568
void sub_0016F548_0x16f548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F548_0x16f548");
#endif

    switch (ctx->pc) {
        case 0x16f55cu: goto label_16f55c;
        default: break;
    }

    ctx->pc = 0x16f548u;

    // 0x16f548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16f54c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f554: 0xc05bcca  jal         func_16F328
    ctx->pc = 0x16F554u;
    SET_GPR_U32(ctx, 31, 0x16F55Cu);
    ctx->pc = 0x16F558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F554u;
    // 0x16f558: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16F328u, 0x16F554u, 0x16F55Cu)) {
        return;
    }
    ctx->pc = 0x16F55Cu;
label_16f55c:
    // 0x16f55c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f560: 0x3e00008  jr          $ra
    ctx->pc = 0x16F560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F560u;
        // 0x16f564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F568u;
}
