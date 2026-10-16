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

// Function: sub_001EFC20
// Address: 0x1efc20 - 0x1efc50
void sub_001EFC20_0x1efc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFC20_0x1efc20");
#endif

    ctx->pc = 0x1efc20u;

    // 0x1efc20: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x1efc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efc24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1efc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1efc28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1efc28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efc2c: 0x0  nop
    ctx->pc = 0x1efc2cu;
    // NOP
    // 0x1efc30: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1efc30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efc34: 0x0  nop
    ctx->pc = 0x1efc34u;
    // NOP
    // 0x1efc38: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1EFC38u;
    {
        const bool branch_taken_0x1efc38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EFC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC38u;
        // 0x1efc3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc38) {
            ctx->pc = 0x1EFC44u;
            goto label_1efc44;
        }
    }
    ctx->pc = 0x1EFC40u;
    // 0x1efc40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1efc40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efc44:
    // 0x1efc44: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFC4Cu;
    // 0x1efc4c: 0x0  nop
    ctx->pc = 0x1efc4cu;
    // NOP
    ctx->pc = 0x1efc50u;
}
