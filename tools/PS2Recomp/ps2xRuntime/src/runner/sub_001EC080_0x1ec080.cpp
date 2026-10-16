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

// Function: sub_001EC080
// Address: 0x1ec080 - 0x1ec0b8
void sub_001EC080_0x1ec080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC080_0x1ec080");
#endif

    switch (ctx->pc) {
        case 0x1ec0a8u: goto label_1ec0a8;
        default: break;
    }

    ctx->pc = 0x1ec080u;

    // 0x1ec080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ec080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ec084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ec088: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1ec088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1ec08c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EC08Cu;
    {
        const bool branch_taken_0x1ec08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC08Cu;
        // 0x1ec090: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec08c) {
            ctx->pc = 0x1EC098u;
            goto label_1ec098;
        }
    }
    ctx->pc = 0x1EC094u;
    // 0x1ec094: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ec094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ec098:
    // 0x1ec098: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC098u;
    {
        const bool branch_taken_0x1ec098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC098u;
        // 0x1ec09c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec098) {
            ctx->pc = 0x1EC0A8u;
            goto label_1ec0a8;
        }
    }
    ctx->pc = 0x1EC0A0u;
    // 0x1ec0a0: 0xc08994a  jal         func_226528
    ctx->pc = 0x1EC0A0u;
    SET_GPR_U32(ctx, 31, 0x1EC0A8u);
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x1EC0A0u, 0x1EC0A8u)) {
        return;
    }
    ctx->pc = 0x1EC0A8u;
label_1ec0a8:
    // 0x1ec0a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC0ACu;
        // 0x1ec0b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC0B4u;
    // 0x1ec0b4: 0x0  nop
    ctx->pc = 0x1ec0b4u;
    // NOP
    ctx->pc = 0x1ec0b8u;
}
