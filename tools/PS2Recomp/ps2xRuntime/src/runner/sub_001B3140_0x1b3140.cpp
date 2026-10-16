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

// Function: sub_001B3140
// Address: 0x1b3140 - 0x1b3188
void sub_001B3140_0x1b3140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3140_0x1b3140");
#endif

    switch (ctx->pc) {
        case 0x1b315cu: goto label_1b315c;
        case 0x1b3168u: goto label_1b3168;
        default: break;
    }

    ctx->pc = 0x1b3140u;

    // 0x1b3140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b3140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b3144: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b3144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3148: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b3148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b314c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b314cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3154: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B3154u;
    SET_GPR_U32(ctx, 31, 0x1B315Cu);
    ctx->pc = 0x1B3158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3154u;
    // 0x1b3158: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B3154u, 0x1B315Cu)) {
        return;
    }
    ctx->pc = 0x1B315Cu;
label_1b315c:
    // 0x1b315c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b315cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3160: 0xc06cc62  jal         func_1B3188
    ctx->pc = 0x1B3160u;
    SET_GPR_U32(ctx, 31, 0x1B3168u);
    ctx->pc = 0x1B3164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3160u;
    // 0x1b3164: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3188u, 0x1B3160u, 0x1B3168u)) {
        return;
    }
    ctx->pc = 0x1B3168u;
label_1b3168:
    // 0x1b3168: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1b3168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b316c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b316cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3170: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1b3170u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x1b3174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3178: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b3178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b317c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B317Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B317Cu;
        // 0x1b3180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B317Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3184u;
    // 0x1b3184: 0x0  nop
    ctx->pc = 0x1b3184u;
    // NOP
    ctx->pc = 0x1b3188u;
}
