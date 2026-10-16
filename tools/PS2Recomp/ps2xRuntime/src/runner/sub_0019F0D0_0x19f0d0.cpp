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

// Function: sub_0019F0D0
// Address: 0x19f0d0 - 0x19f108
void sub_0019F0D0_0x19f0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F0D0_0x19f0d0");
#endif

    switch (ctx->pc) {
        case 0x19f0f0u: goto label_19f0f0;
        case 0x19f0f8u: goto label_19f0f8;
        default: break;
    }

    ctx->pc = 0x19f0d0u;

    // 0x19f0d0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x19f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x19f0d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f0d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f0d8: 0x8c439080  lw          $v1, -0x6F80($v0)
    ctx->pc = 0x19f0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x339080u));
    // 0x19f0dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19F0DCu;
    {
        const bool branch_taken_0x19f0dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0DCu;
        // 0x19f0e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f0dc) {
            ctx->pc = 0x19F0F8u;
            goto label_19f0f8;
        }
    }
    ctx->pc = 0x19F0E4u;
    // 0x19f0e4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x19f0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x19f0e8: 0xc041e86  jal         func_107A18
    ctx->pc = 0x19F0E8u;
    SET_GPR_U32(ctx, 31, 0x19F0F0u);
    ctx->pc = 0x19F0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F0E8u;
    // 0x19f0ec: 0x2484a4e8  addiu       $a0, $a0, -0x5B18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107A18u, 0x19F0E8u, 0x19F0F0u)) {
        return;
    }
    ctx->pc = 0x19F0F0u;
label_19f0f0:
    // 0x19f0f0: 0xc06744e  jal         func_19D138
    ctx->pc = 0x19F0F0u;
    SET_GPR_U32(ctx, 31, 0x19F0F8u);
    ctx->pc = 0x19F0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F0F0u;
    // 0x19f0f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19D138u, 0x19F0F0u, 0x19F0F8u)) {
        return;
    }
    ctx->pc = 0x19F0F8u;
label_19f0f8:
    // 0x19f0f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x19F0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0FCu;
        // 0x19f100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F104u;
    // 0x19f104: 0x0  nop
    ctx->pc = 0x19f104u;
    // NOP
    ctx->pc = 0x19f108u;
}
