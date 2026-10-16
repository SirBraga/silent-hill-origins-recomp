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

// Function: sub_001FAEF8
// Address: 0x1faef8 - 0x1faf18
void sub_001FAEF8_0x1faef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAEF8_0x1faef8");
#endif

    ctx->pc = 0x1faef8u;

    // 0x1faef8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1faef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1faefc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1faefcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1faf00: 0x24422e50  addiu       $v0, $v0, 0x2E50
    ctx->pc = 0x1faf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11856));
    // 0x1faf04: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1faf04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1faf08: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1faf08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1faf0c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1faf0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf10: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF10u;
        // 0x1faf14: 0xac87000c  sw          $a3, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAF18u;
}
