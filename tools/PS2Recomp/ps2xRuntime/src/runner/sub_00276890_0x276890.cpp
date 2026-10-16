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

// Function: sub_00276890
// Address: 0x276890 - 0x2768a8
void sub_00276890_0x276890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276890_0x276890");
#endif

    ctx->pc = 0x276890u;

    // 0x276890: 0x8f8387c8  lw          $v1, -0x7838($gp)
    ctx->pc = 0x276890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x276894: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x276894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276898: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x276898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27689c: 0x3e00008  jr          $ra
    ctx->pc = 0x27689Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2768A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27689Cu;
        // 0x2768a0: 0xaf8387c8  sw          $v1, -0x7838($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936520), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27689Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2768A4u;
    // 0x2768a4: 0x0  nop
    ctx->pc = 0x2768a4u;
    // NOP
    ctx->pc = 0x2768a8u;
}
