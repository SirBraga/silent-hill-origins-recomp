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

// Function: sub_00175088
// Address: 0x175088 - 0x1750a8
void sub_00175088_0x175088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175088_0x175088");
#endif

    switch (ctx->pc) {
        case 0x17509cu: goto label_17509c;
        default: break;
    }

    ctx->pc = 0x175088u;

    // 0x175088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17508c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17508cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175090: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175094: 0xc05d320  jal         func_174C80
    ctx->pc = 0x175094u;
    SET_GPR_U32(ctx, 31, 0x17509Cu);
    ctx->pc = 0x175098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175094u;
    // 0x175098: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x174C80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x174C80u, 0x175094u, 0x17509Cu)) {
        return;
    }
    ctx->pc = 0x17509Cu;
label_17509c:
    // 0x17509c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17509cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1750a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1750A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1750A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1750A0u;
        // 0x1750a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1750A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1750A8u;
}
