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

// Function: sub_001FAF88
// Address: 0x1faf88 - 0x1fafa8
void sub_001FAF88_0x1faf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAF88_0x1faf88");
#endif

    ctx->pc = 0x1faf88u;

    // 0x1faf88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1faf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1faf8c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1faf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1faf90: 0x24422e68  addiu       $v0, $v0, 0x2E68
    ctx->pc = 0x1faf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11880));
    // 0x1faf94: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1faf94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1faf98: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1faf98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1faf9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF9Cu;
        // 0x1fafa0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAFA4u;
    // 0x1fafa4: 0x0  nop
    ctx->pc = 0x1fafa4u;
    // NOP
    ctx->pc = 0x1fafa8u;
}
