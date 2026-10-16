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

// Function: sub_001019F0
// Address: 0x1019f0 - 0x101a20
void sub_001019F0_0x1019f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001019F0_0x1019f0");
#endif

    ctx->pc = 0x1019f0u;

    // 0x1019f0: 0xac8001c8  sw          $zero, 0x1C8($a0)
    ctx->pc = 0x1019f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 0));
    // 0x1019f4: 0x248201f0  addiu       $v0, $a0, 0x1F0
    ctx->pc = 0x1019f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 496));
    // 0x1019f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1019f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1019fc: 0x24830200  addiu       $v1, $a0, 0x200
    ctx->pc = 0x1019fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x101a00: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101a00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101a04: 0xac8001f0  sw          $zero, 0x1F0($a0)
    ctx->pc = 0x101a04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 496), GPR_U32(ctx, 0));
    // 0x101a08: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101a08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101a0c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x101a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x101a10: 0x3e00008  jr          $ra
    ctx->pc = 0x101A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A10u;
        // 0x101a14: 0xac800200  sw          $zero, 0x200($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101A18u;
    // 0x101a18: 0xac8201cc  sw          $v0, 0x1CC($a0)
    ctx->pc = 0x101a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 460), GPR_U32(ctx, 2));
    // 0x101a1c: 0x0  nop
    ctx->pc = 0x101a1cu;
    // NOP
    ctx->pc = 0x101a20u;
}
