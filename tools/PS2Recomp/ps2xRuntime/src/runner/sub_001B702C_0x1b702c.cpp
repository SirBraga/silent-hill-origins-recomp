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

// Function: sub_001B702C
// Address: 0x1b702c - 0x1b7050
void sub_001B702C_0x1b702c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B702C_0x1b702c");
#endif

    switch (ctx->pc) {
        case 0x1b7034u: goto label_1b7034;
        default: break;
    }

    ctx->pc = 0x1b702cu;

    // 0x1b702c: 0xc06dc14  jal         func_1B7050
    ctx->pc = 0x1B702Cu;
    SET_GPR_U32(ctx, 31, 0x1B7034u);
    ctx->pc = 0x1B7030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B702Cu;
    // 0x1b7030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7050u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B7050u, 0x1B702Cu, 0x1B7034u)) {
        return;
    }
    ctx->pc = 0x1B7034u;
label_1b7034:
    // 0x1b7034: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b7034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b703c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b703cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7040: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1b7040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b7044: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1b7044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b7048: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7048u;
        // 0x1b704c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7050u;
}
