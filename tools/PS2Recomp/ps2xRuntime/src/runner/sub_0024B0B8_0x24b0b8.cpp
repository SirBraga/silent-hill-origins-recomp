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

// Function: sub_0024B0B8
// Address: 0x24b0b8 - 0x24b0e8
void sub_0024B0B8_0x24b0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B0B8_0x24b0b8");
#endif

    ctx->pc = 0x24b0b8u;

    // 0x24b0b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x24b0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b0bc: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B0BCu;
    {
        const bool branch_taken_0x24b0bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0BCu;
        // 0x24b0c0: 0x8f848ef0  lw          $a0, -0x7110($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b0bc) {
            ctx->pc = 0x24B0CCu;
            goto label_24b0cc;
        }
    }
    ctx->pc = 0x24B0C4u;
    // 0x24b0c4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x24b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x24b0c8: 0x2445a5f0  addiu       $a1, $v0, -0x5A10
    ctx->pc = 0x24b0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944240));
label_24b0cc:
    // 0x24b0cc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24b0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x24b0d0: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x24b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x24b0d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b0d8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24b0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x24B0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0DCu;
        // 0x24b0e0: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B0E4u;
    // 0x24b0e4: 0x0  nop
    ctx->pc = 0x24b0e4u;
    // NOP
    ctx->pc = 0x24b0e8u;
}
