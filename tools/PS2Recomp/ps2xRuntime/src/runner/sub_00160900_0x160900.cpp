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

// Function: sub_00160900
// Address: 0x160900 - 0x160938
void sub_00160900_0x160900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160900_0x160900");
#endif

    switch (ctx->pc) {
        case 0x160924u: goto label_160924;
        default: break;
    }

    ctx->pc = 0x160900u;

    // 0x160900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x160900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x160904: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x160904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x160908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x160908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16090c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16090cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160910: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x160910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x160914: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x160914u;
    {
        const bool branch_taken_0x160914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x160914) {
            ctx->pc = 0x160918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160914u;
            // 0x160918: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16092Cu;
            goto label_16092c;
        }
    }
    ctx->pc = 0x16091Cu;
    // 0x16091c: 0xc07f228  jal         func_1FC8A0
    ctx->pc = 0x16091Cu;
    SET_GPR_U32(ctx, 31, 0x160924u);
    ctx->pc = 0x160920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16091Cu;
    // 0x160920: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC8A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC8A0u, 0x16091Cu, 0x160924u)) {
        return;
    }
    ctx->pc = 0x160924u;
label_160924:
    // 0x160924: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x160924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x160928: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x160928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16092c:
    // 0x16092c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16092cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160930: 0x3e00008  jr          $ra
    ctx->pc = 0x160930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160930u;
        // 0x160934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160938u;
}
