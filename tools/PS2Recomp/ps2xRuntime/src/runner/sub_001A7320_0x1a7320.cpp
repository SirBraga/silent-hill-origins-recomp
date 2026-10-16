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

// Function: sub_001A7320
// Address: 0x1a7320 - 0x1a7358
void sub_001A7320_0x1a7320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7320_0x1a7320");
#endif

    switch (ctx->pc) {
        case 0x1a7330u: goto label_1a7330;
        default: break;
    }

    ctx->pc = 0x1a7320u;

    // 0x1a7320: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a7320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a7324: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a7324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7328: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a7328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a732c: 0x0  nop
    ctx->pc = 0x1a732cu;
    // NOP
label_1a7330:
    // 0x1a7330: 0x0  nop
    ctx->pc = 0x1a7330u;
    // NOP
    // 0x1a7334: 0x0  nop
    ctx->pc = 0x1a7334u;
    // NOP
    // 0x1a7338: 0x0  nop
    ctx->pc = 0x1a7338u;
    // NOP
    // 0x1a733c: 0x0  nop
    ctx->pc = 0x1a733cu;
    // NOP
    // 0x1a7340: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A7340u;
    {
        const bool branch_taken_0x1a7340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A7344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7340u;
        // 0x1a7344: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7340) {
            ctx->pc = 0x1A7330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7330;
        }
    }
    ctx->pc = 0x1A7348u;
    // 0x1a7348: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a7348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a734c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A734Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A734Cu;
        // 0x1a7350: 0xac801000  sw          $zero, 0x1000($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4096), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A734Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7354u;
    // 0x1a7354: 0x0  nop
    ctx->pc = 0x1a7354u;
    // NOP
    ctx->pc = 0x1a7358u;
}
