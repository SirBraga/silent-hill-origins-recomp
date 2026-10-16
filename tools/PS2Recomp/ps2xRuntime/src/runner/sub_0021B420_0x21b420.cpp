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

// Function: sub_0021B420
// Address: 0x21b420 - 0x21b468
void sub_0021B420_0x21b420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B420_0x21b420");
#endif

    ctx->pc = 0x21b420u;

    // 0x21b420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b424: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x21b424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x21b428: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21b428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21b42c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x21b42cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b430: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x21b430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x21b434: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x21b434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x21b438: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x21b438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x21b43c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x21b43cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x21b440: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x21b440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x21b444: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x21b444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x21b448: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x21b448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x21b44c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x21b44cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x21b450: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x21b450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x21b454: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x21b454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x21b458: 0x3e00008  jr          $ra
    ctx->pc = 0x21B458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B458u;
        // 0x21b45c: 0xac800030  sw          $zero, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B460u;
    // 0x21b460: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x21b460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21b464: 0x0  nop
    ctx->pc = 0x21b464u;
    // NOP
    ctx->pc = 0x21b468u;
}
