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

// Function: sub_002AD5C8
// Address: 0x2ad5c8 - 0x2ad5e8
void sub_002AD5C8_0x2ad5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD5C8_0x2ad5c8");
#endif

    switch (ctx->pc) {
        case 0x2ad5dcu: goto label_2ad5dc;
        default: break;
    }

    ctx->pc = 0x2ad5c8u;

    // 0x2ad5c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ad5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ad5cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ad5d0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2ad5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ad5d4: 0xc0adf3a  jal         func_2B7CE8
    ctx->pc = 0x2AD5D4u;
    SET_GPR_U32(ctx, 31, 0x2AD5DCu);
    ctx->pc = 0x2AD5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD5D4u;
    // 0x2ad5d8: 0x94a50020  lhu         $a1, 0x20($a1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B7CE8u, 0x2AD5D4u, 0x2AD5DCu)) {
        return;
    }
    ctx->pc = 0x2AD5DCu;
label_2ad5dc:
    // 0x2ad5dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5E0u;
        // 0x2ad5e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD5E8u;
}
