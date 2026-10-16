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

// Function: sub_002534B8
// Address: 0x2534b8 - 0x2534f0
void sub_002534B8_0x2534b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002534B8_0x2534b8");
#endif

    ctx->pc = 0x2534b8u;

    // 0x2534b8: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x2534b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2534bc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2534BCu;
    {
        const bool branch_taken_0x2534bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2534bc) {
            ctx->pc = 0x2534C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2534BCu;
            // 0x2534c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2534D4u;
            goto label_2534d4;
        }
    }
    ctx->pc = 0x2534C4u;
    // 0x2534c4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x2534c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2534c8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2534C8u;
    {
        const bool branch_taken_0x2534c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2534CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2534C8u;
        // 0x2534cc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2534c8) {
            ctx->pc = 0x2534D4u;
            goto label_2534d4;
        }
    }
    ctx->pc = 0x2534D0u;
    // 0x2534d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2534d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2534d4:
    // 0x2534d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2534D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2534D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2534DCu;
    // 0x2534dc: 0x0  nop
    ctx->pc = 0x2534dcu;
    // NOP
    // 0x2534e0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2534e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2534e4: 0x0  nop
    ctx->pc = 0x2534e4u;
    // NOP
    // 0x2534e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2534e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2534ec: 0x0  nop
    ctx->pc = 0x2534ecu;
    // NOP
    ctx->pc = 0x2534f0u;
}
