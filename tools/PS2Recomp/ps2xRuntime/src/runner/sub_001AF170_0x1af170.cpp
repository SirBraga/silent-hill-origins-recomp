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

// Function: sub_001AF170
// Address: 0x1af170 - 0x1af1a0
void sub_001AF170_0x1af170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF170_0x1af170");
#endif

    switch (ctx->pc) {
        case 0x1af188u: goto label_1af188;
        default: break;
    }

    ctx->pc = 0x1af170u;

    // 0x1af170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af174: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1af174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1af178: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1af178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1af17c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af180: 0xc06bd3c  jal         func_1AF4F0
    ctx->pc = 0x1AF180u;
    SET_GPR_U32(ctx, 31, 0x1AF188u);
    ctx->pc = 0x1AF184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF180u;
    // 0x1af184: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF4F0u, 0x1AF180u, 0x1AF188u)) {
        return;
    }
    ctx->pc = 0x1AF188u;
label_1af188:
    // 0x1af188: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1af188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1af18c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1af18cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af194: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF194u;
        // 0x1af198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF19Cu;
    // 0x1af19c: 0x0  nop
    ctx->pc = 0x1af19cu;
    // NOP
    ctx->pc = 0x1af1a0u;
}
