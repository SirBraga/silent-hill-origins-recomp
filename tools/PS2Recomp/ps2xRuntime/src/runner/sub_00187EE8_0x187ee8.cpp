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

// Function: sub_00187EE8
// Address: 0x187ee8 - 0x187f08
void sub_00187EE8_0x187ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187EE8_0x187ee8");
#endif

    switch (ctx->pc) {
        case 0x187efcu: goto label_187efc;
        default: break;
    }

    ctx->pc = 0x187ee8u;

    // 0x187ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187eec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x187eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187ef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187ef4: 0xc061f8c  jal         func_187E30
    ctx->pc = 0x187EF4u;
    SET_GPR_U32(ctx, 31, 0x187EFCu);
    ctx->pc = 0x187EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187EF4u;
    // 0x187ef8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x187E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x187E30u, 0x187EF4u, 0x187EFCu)) {
        return;
    }
    ctx->pc = 0x187EFCu;
label_187efc:
    // 0x187efc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187f00: 0x3e00008  jr          $ra
    ctx->pc = 0x187F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F00u;
        // 0x187f04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187F08u;
}
