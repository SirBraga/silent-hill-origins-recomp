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

// Function: sub_001B4D70
// Address: 0x1b4d70 - 0x1b4da8
void sub_001B4D70_0x1b4d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4D70_0x1b4d70");
#endif

    switch (ctx->pc) {
        case 0x1b4d94u: goto label_1b4d94;
        default: break;
    }

    ctx->pc = 0x1b4d70u;

    // 0x1b4d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4d74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b4d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b4d78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d80: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1b4d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b4d84: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4D84u;
    {
        const bool branch_taken_0x1b4d84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4d84) {
            ctx->pc = 0x1B4D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4D84u;
            // 0x1b4d88: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4D9Cu;
            goto label_1b4d9c;
        }
    }
    ctx->pc = 0x1B4D8Cu;
    // 0x1b4d8c: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x1B4D8Cu;
    SET_GPR_U32(ctx, 31, 0x1B4D94u);
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x1B4D8Cu, 0x1B4D94u)) {
        return;
    }
    ctx->pc = 0x1B4D94u;
label_1b4d94:
    // 0x1b4d94: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1b4d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1b4d98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b4d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b4d9c:
    // 0x1b4d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4da0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DA0u;
        // 0x1b4da4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4DA8u;
}
