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

// Function: sub_00252DF8
// Address: 0x252df8 - 0x252e28
void sub_00252DF8_0x252df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252DF8_0x252df8");
#endif

    ctx->pc = 0x252df8u;

    // 0x252df8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x252df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x252dfc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x252dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x252e00: 0x8c625620  lw          $v0, 0x5620($v1)
    ctx->pc = 0x252e00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x735620u));
    // 0x252e04: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x252e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x252e08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x252e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x252e0c: 0x54650003  bnel        $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x252E0Cu;
    {
        const bool branch_taken_0x252e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x252e0c) {
            ctx->pc = 0x252E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252E0Cu;
            // 0x252e10: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252E1Cu;
            goto label_252e1c;
        }
    }
    ctx->pc = 0x252E14u;
    // 0x252e14: 0x3e00008  jr          $ra
    ctx->pc = 0x252E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E14u;
        // 0x252e18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252E1Cu;
label_252e1c:
    // 0x252e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x252E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E1Cu;
        // 0x252e20: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252E24u;
    // 0x252e24: 0x0  nop
    ctx->pc = 0x252e24u;
    // NOP
    ctx->pc = 0x252e28u;
}
