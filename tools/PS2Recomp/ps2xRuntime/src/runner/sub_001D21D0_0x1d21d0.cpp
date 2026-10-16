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

// Function: sub_001D21D0
// Address: 0x1d21d0 - 0x1d2208
void sub_001D21D0_0x1d21d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D21D0_0x1d21d0");
#endif

    ctx->pc = 0x1d21d0u;

    // 0x1d21d0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d21d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d21d4: 0x8c629b18  lw          $v0, -0x64E8($v1)
    ctx->pc = 0x1d21d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x339B18u));
    // 0x1d21d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D21D8u;
    {
        const bool branch_taken_0x1d21d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D21DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D21D8u;
        // 0x1d21dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21d8) {
            ctx->pc = 0x1D2200u;
            goto label_1d2200;
        }
    }
    ctx->pc = 0x1D21E0u;
    // 0x1d21e0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d21e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d21e4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1d21e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1d21e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d21e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d21ec: 0xc4409a64  lwc1        $f0, -0x659C($v0)
    ctx->pc = 0x1d21ecu;
    { uint32_t bits = FAST_READ32(0x339A64u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d21f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d21f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d21f4: 0x0  nop
    ctx->pc = 0x1d21f4u;
    // NOP
    // 0x1d21f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D21F8u;
    {
        const bool branch_taken_0x1d21f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d21f8) {
            ctx->pc = 0x1D21FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D21F8u;
            // 0x1d21fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2200u;
            goto label_1d2200;
        }
    }
    ctx->pc = 0x1D2200u;
label_1d2200:
    // 0x1d2200: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2200u;
        // 0x1d2204: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2208u;
}
