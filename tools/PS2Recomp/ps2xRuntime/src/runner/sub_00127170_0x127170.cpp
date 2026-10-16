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

// Function: sub_00127170
// Address: 0x127170 - 0x127190
void sub_00127170_0x127170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127170_0x127170");
#endif

    switch (ctx->pc) {
        case 0x127184u: goto label_127184;
        default: break;
    }

    ctx->pc = 0x127170u;

    // 0x127170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x127170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x127174: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x127174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x127178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12717c: 0xc04943c  jal         func_1250F0
    ctx->pc = 0x12717Cu;
    SET_GPR_U32(ctx, 31, 0x127184u);
    ctx->pc = 0x127180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12717Cu;
    // 0x127180: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1250F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1250F0u, 0x12717Cu, 0x127184u)) {
        return;
    }
    ctx->pc = 0x127184u;
label_127184:
    // 0x127184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x127184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127188: 0x3e00008  jr          $ra
    ctx->pc = 0x127188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127188u;
        // 0x12718c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127190u;
}
