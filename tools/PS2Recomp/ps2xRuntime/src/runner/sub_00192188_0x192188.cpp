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

// Function: sub_00192188
// Address: 0x192188 - 0x1921a8
void sub_00192188_0x192188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192188_0x192188");
#endif

    switch (ctx->pc) {
        case 0x19219cu: goto label_19219c;
        default: break;
    }

    ctx->pc = 0x192188u;

    // 0x192188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x192188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19218c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19218cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192194: 0xc064798  jal         func_191E60
    ctx->pc = 0x192194u;
    SET_GPR_U32(ctx, 31, 0x19219Cu);
    ctx->pc = 0x192198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192194u;
    // 0x192198: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x191E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191E60u, 0x192194u, 0x19219Cu)) {
        return;
    }
    ctx->pc = 0x19219Cu;
label_19219c:
    // 0x19219c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19219cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1921a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1921A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1921A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921A0u;
        // 0x1921a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1921A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1921A8u;
}
