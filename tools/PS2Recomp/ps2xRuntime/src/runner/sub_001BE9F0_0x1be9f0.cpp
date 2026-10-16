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

// Function: sub_001BE9F0
// Address: 0x1be9f0 - 0x1bea48
void sub_001BE9F0_0x1be9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE9F0_0x1be9f0");
#endif

    ctx->pc = 0x1be9f0u;

    // 0x1be9f0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1be9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1be9f4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1be9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1be9f8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1be9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1be9fc: 0x2483001c  addiu       $v1, $a0, 0x1C
    ctx->pc = 0x1be9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x1bea00: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1bea00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1bea04: 0x24a5d7e0  addiu       $a1, $a1, -0x2820
    ctx->pc = 0x1bea04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957024));
    // 0x1bea08: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1bea08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1bea0c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bea0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea10: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1bea10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1bea14: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1bea14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1bea18: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1bea18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1bea1c: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x1bea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x1bea20: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1bea20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1bea24: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1bea24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1bea28: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1bea28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1bea2c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1bea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1bea30: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1bea30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1bea34: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1bea34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1bea38: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1bea38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1bea3c: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1bea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1bea40: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA40u;
        // 0x1bea44: 0xac800040  sw          $zero, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEA48u;
}
