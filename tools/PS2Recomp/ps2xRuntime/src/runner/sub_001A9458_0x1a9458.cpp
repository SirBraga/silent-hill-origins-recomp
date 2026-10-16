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

// Function: sub_001A9458
// Address: 0x1a9458 - 0x1a9488
void sub_001A9458_0x1a9458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9458_0x1a9458");
#endif

    switch (ctx->pc) {
        case 0x1a9468u: goto label_1a9468;
        default: break;
    }

    ctx->pc = 0x1a9458u;

    // 0x1a9458: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a9458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a945c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1a945cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1a9460: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a9460u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9464: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a9464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a9468:
    // 0x1a9468: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1a9468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1a946c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1a946cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a9470: 0x0  nop
    ctx->pc = 0x1a9470u;
    // NOP
    // 0x1a9474: 0x0  nop
    ctx->pc = 0x1a9474u;
    // NOP
    // 0x1a9478: 0x14a4fffb  bne         $a1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A9478u;
    {
        const bool branch_taken_0x1a9478 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9478u;
        // 0x1a947c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9478) {
            ctx->pc = 0x1A9468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9468;
        }
    }
    ctx->pc = 0x1A9480u;
    // 0x1a9480: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9488u;
}
