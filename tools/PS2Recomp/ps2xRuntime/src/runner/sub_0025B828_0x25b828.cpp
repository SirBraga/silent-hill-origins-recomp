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

// Function: sub_0025B828
// Address: 0x25b828 - 0x25b850
void sub_0025B828_0x25b828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B828_0x25b828");
#endif

    switch (ctx->pc) {
        case 0x25b844u: goto label_25b844;
        default: break;
    }

    ctx->pc = 0x25b828u;

    // 0x25b828: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x25b828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b82c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25b82cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25b830: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25b830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b834: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x25b834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x25b838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b83c: 0xc0936ec  jal         func_24DBB0
    ctx->pc = 0x25B83Cu;
    SET_GPR_U32(ctx, 31, 0x25B844u);
    ctx->pc = 0x25B840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B83Cu;
    // 0x25b840: 0x24441280  addiu       $a0, $v0, 0x1280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DBB0u, 0x25B83Cu, 0x25B844u)) {
        return;
    }
    ctx->pc = 0x25B844u;
label_25b844:
    // 0x25b844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b848: 0x3e00008  jr          $ra
    ctx->pc = 0x25B848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B848u;
        // 0x25b84c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B850u;
}
