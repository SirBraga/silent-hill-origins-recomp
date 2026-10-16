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

// Function: sub_00107A68
// Address: 0x107a68 - 0x107ab8
void sub_00107A68_0x107a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107A68_0x107a68");
#endif

    ctx->pc = 0x107a68u;

    // 0x107a68: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x107a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x107a6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x107a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107a70: 0x24429bb0  addiu       $v0, $v0, -0x6450
    ctx->pc = 0x107a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941616));
    // 0x107a74: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x107a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x107a78: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x107a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x107a7c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x107a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107a80: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x107a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x107a84: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x107a84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x107a88: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x107a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x107a8c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x107a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x107a90: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x107a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x107a94: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x107a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x107a98: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x107a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x107a9c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x107a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x107aa0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x107aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x107aa4: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x107aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x107aa8: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x107aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x107aac: 0x3e00008  jr          $ra
    ctx->pc = 0x107AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AACu;
        // 0x107ab0: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107AB4u;
    // 0x107ab4: 0x0  nop
    ctx->pc = 0x107ab4u;
    // NOP
    ctx->pc = 0x107ab8u;
}
