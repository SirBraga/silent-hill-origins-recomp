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

// Function: sub_00127150
// Address: 0x127150 - 0x127170
void sub_00127150_0x127150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127150_0x127150");
#endif

    switch (ctx->pc) {
        case 0x127164u: goto label_127164;
        default: break;
    }

    ctx->pc = 0x127150u;

    // 0x127150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x127150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x127154: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x127158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12715c: 0xc04943c  jal         func_1250F0
    ctx->pc = 0x12715Cu;
    SET_GPR_U32(ctx, 31, 0x127164u);
    ctx->pc = 0x127160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12715Cu;
    // 0x127160: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1250F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1250F0u, 0x12715Cu, 0x127164u)) {
        return;
    }
    ctx->pc = 0x127164u;
label_127164:
    // 0x127164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x127164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127168: 0x3e00008  jr          $ra
    ctx->pc = 0x127168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127168u;
        // 0x12716c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127170u;
}
