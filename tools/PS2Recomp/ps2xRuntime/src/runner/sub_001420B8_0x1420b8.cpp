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

// Function: sub_001420B8
// Address: 0x1420b8 - 0x1420f0
void sub_001420B8_0x1420b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001420B8_0x1420b8");
#endif

    switch (ctx->pc) {
        case 0x1420d4u: goto label_1420d4;
        case 0x1420e4u: goto label_1420e4;
        default: break;
    }

    ctx->pc = 0x1420b8u;

    // 0x1420b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1420b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1420bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1420bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1420c0: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x1420c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x1420c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1420C4u;
    {
        const bool branch_taken_0x1420c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1420c4) {
            ctx->pc = 0x1420DCu;
            goto label_1420dc;
        }
    }
    ctx->pc = 0x1420CCu;
    // 0x1420cc: 0xc0500b4  jal         func_1402D0
    ctx->pc = 0x1420CCu;
    SET_GPR_U32(ctx, 31, 0x1420D4u);
    ctx->pc = 0x1420D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1420CCu;
    // 0x1420d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1402D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1402D0u, 0x1420CCu, 0x1420D4u)) {
        return;
    }
    ctx->pc = 0x1420D4u;
label_1420d4:
    // 0x1420d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1420D4u;
    {
        const bool branch_taken_0x1420d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1420D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1420D4u;
        // 0x1420d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1420d4) {
            ctx->pc = 0x1420E8u;
            goto label_1420e8;
        }
    }
    ctx->pc = 0x1420DCu;
label_1420dc:
    // 0x1420dc: 0xc0500b4  jal         func_1402D0
    ctx->pc = 0x1420DCu;
    SET_GPR_U32(ctx, 31, 0x1420E4u);
    ctx->pc = 0x1402D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1402D0u, 0x1420DCu, 0x1420E4u)) {
        return;
    }
    ctx->pc = 0x1420E4u;
label_1420e4:
    // 0x1420e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1420e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1420e8:
    // 0x1420e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1420E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1420ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1420E8u;
        // 0x1420ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1420E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1420F0u;
}
