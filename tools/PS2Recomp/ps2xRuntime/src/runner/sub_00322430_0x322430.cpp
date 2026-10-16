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

// Function: sub_00322430
// Address: 0x322430 - 0x322470
void sub_00322430_0x322430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322430_0x322430");
#endif

    ctx->pc = 0x322430u;

    // 0x322430: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x322430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322434: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x322434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x322438: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x322438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x32243c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x32243cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x322440: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x322440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x322444: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x322444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x322448: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x322448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x32244c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x32244cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x322450: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x322450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x322454: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x322454u;
    {
        const bool branch_taken_0x322454 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x322458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322454u;
        // 0x322458: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322454) {
            ctx->pc = 0x322464u;
            goto label_322464;
        }
    }
    ctx->pc = 0x32245Cu;
    // 0x32245c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x32245cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x322460: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x322460u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_322464:
    // 0x322464: 0x3e00008  jr          $ra
    ctx->pc = 0x322464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32246Cu;
    // 0x32246c: 0x0  nop
    ctx->pc = 0x32246cu;
    // NOP
    ctx->pc = 0x322470u;
}
