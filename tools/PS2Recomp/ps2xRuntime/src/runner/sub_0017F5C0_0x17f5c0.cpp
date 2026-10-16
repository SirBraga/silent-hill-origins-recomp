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

// Function: sub_0017F5C0
// Address: 0x17f5c0 - 0x17f600
void sub_0017F5C0_0x17f5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F5C0_0x17f5c0");
#endif

    switch (ctx->pc) {
        case 0x17f5d8u: goto label_17f5d8;
        default: break;
    }

    ctx->pc = 0x17f5c0u;

    // 0x17f5c0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f5c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f5c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f5c8: 0x8c4482f0  lw          $a0, -0x7D10($v0)
    ctx->pc = 0x17f5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3382F0u));
    // 0x17f5cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f5d0: 0xc043a44  jal         func_10E910
    ctx->pc = 0x17F5D0u;
    SET_GPR_U32(ctx, 31, 0x17F5D8u);
    ctx->pc = 0x10E910u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E910u, 0x17F5D0u, 0x17F5D8u)) {
        return;
    }
    ctx->pc = 0x17F5D8u;
label_17f5d8:
    // 0x17f5d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x17F5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F5DCu;
        // 0x17f5e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F5E4u;
    // 0x17f5e4: 0x0  nop
    ctx->pc = 0x17f5e4u;
    // NOP
    // 0x17f5e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17f5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17f5ec: 0x0  nop
    ctx->pc = 0x17f5ecu;
    // NOP
    // 0x17f5f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17f5f4: 0x0  nop
    ctx->pc = 0x17f5f4u;
    // NOP
    // 0x17f5f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17f5fc: 0x0  nop
    ctx->pc = 0x17f5fcu;
    // NOP
    ctx->pc = 0x17f600u;
}
