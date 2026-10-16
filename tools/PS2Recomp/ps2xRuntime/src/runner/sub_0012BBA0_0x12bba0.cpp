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

// Function: sub_0012BBA0
// Address: 0x12bba0 - 0x12bbd0
void sub_0012BBA0_0x12bba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BBA0_0x12bba0");
#endif

    switch (ctx->pc) {
        case 0x12bbb8u: goto label_12bbb8;
        case 0x12bbc0u: goto label_12bbc0;
        default: break;
    }

    ctx->pc = 0x12bba0u;

    // 0x12bba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12bba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12bba4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12bba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12bba8: 0x24900040  addiu       $s0, $a0, 0x40
    ctx->pc = 0x12bba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x12bbac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bbb0: 0xc049194  jal         func_124650
    ctx->pc = 0x12BBB0u;
    SET_GPR_U32(ctx, 31, 0x12BBB8u);
    ctx->pc = 0x12BBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BBB0u;
    // 0x12bbb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x124650u, 0x12BBB0u, 0x12BBB8u)) {
        return;
    }
    ctx->pc = 0x12BBB8u;
label_12bbb8:
    // 0x12bbb8: 0xc040678  jal         func_1019E0
    ctx->pc = 0x12BBB8u;
    SET_GPR_U32(ctx, 31, 0x12BBC0u);
    ctx->pc = 0x12BBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BBB8u;
    // 0x12bbbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1019E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1019E0u, 0x12BBB8u, 0x12BBC0u)) {
        return;
    }
    ctx->pc = 0x12BBC0u;
label_12bbc0:
    // 0x12bbc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12bbc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bbc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bbc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x12BBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBC8u;
        // 0x12bbcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BBD0u;
}
