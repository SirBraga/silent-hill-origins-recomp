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

// Function: sub_001C63F8
// Address: 0x1c63f8 - 0x1c6418
void sub_001C63F8_0x1c63f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C63F8_0x1c63f8");
#endif

    ctx->pc = 0x1c63f8u;

    // 0x1c63f8: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C63F8u;
    {
        const bool branch_taken_0x1c63f8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63F8u;
        // 0x1c63fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63f8) {
            ctx->pc = 0x1C6410u;
            goto label_1c6410;
        }
    }
    ctx->pc = 0x1C6400u;
    // 0x1c6400: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c6400u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6404: 0x46180a  movz        $v1, $v0, $a2
    ctx->pc = 0x1c6404u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
    // 0x1c6408: 0xace203c8  sw          $v0, 0x3C8($a3)
    ctx->pc = 0x1c6408u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 968), GPR_U32(ctx, 2));
    // 0x1c640c: 0xace303e4  sw          $v1, 0x3E4($a3)
    ctx->pc = 0x1c640cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 996), GPR_U32(ctx, 3));
label_1c6410:
    // 0x1c6410: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6410u;
        // 0x1c6414: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6418u;
}
