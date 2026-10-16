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

// Function: sub_001A5470
// Address: 0x1a5470 - 0x1a54a0
void sub_001A5470_0x1a5470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5470_0x1a5470");
#endif

    ctx->pc = 0x1a5470u;

    // 0x1a5470: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5474: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5474u;
    {
        const bool branch_taken_0x1a5474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5474u;
        // 0x1a5478: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5474) {
            ctx->pc = 0x1A5488u;
            goto label_1a5488;
        }
    }
    ctx->pc = 0x1A547Cu;
    // 0x1a547c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a547cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a5480: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5480u;
    {
        const bool branch_taken_0x1a5480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5480u;
        // 0x1a5484: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5480) {
            ctx->pc = 0x1A548Cu;
            goto label_1a548c;
        }
    }
    ctx->pc = 0x1A5488u;
label_1a5488:
    // 0x1a5488: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a5488u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a548c:
    // 0x1a548c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A548Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A548Cu;
        // 0x1a5490: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A548Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5494u;
    // 0x1a5494: 0x0  nop
    ctx->pc = 0x1a5494u;
    // NOP
    // 0x1a5498: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a549c: 0x0  nop
    ctx->pc = 0x1a549cu;
    // NOP
    ctx->pc = 0x1a54a0u;
}
