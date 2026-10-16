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

// Function: sub_00167328
// Address: 0x167328 - 0x167350
void sub_00167328_0x167328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167328_0x167328");
#endif

    ctx->pc = 0x167328u;

    // 0x167328: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x167328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16732c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16732cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167330: 0x0  nop
    ctx->pc = 0x167330u;
    // NOP
    // 0x167334: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x167334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167338: 0x0  nop
    ctx->pc = 0x167338u;
    // NOP
    // 0x16733c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x16733Cu;
    {
        const bool branch_taken_0x16733c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16733c) {
            ctx->pc = 0x167340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16733Cu;
            // 0x167340: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167344u;
            goto label_167344;
        }
    }
    ctx->pc = 0x167344u;
label_167344:
    // 0x167344: 0x3e00008  jr          $ra
    ctx->pc = 0x167344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167344u;
        // 0x167348: 0xe48c0054  swc1        $f12, 0x54($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16734Cu;
    // 0x16734c: 0x0  nop
    ctx->pc = 0x16734cu;
    // NOP
    ctx->pc = 0x167350u;
}
