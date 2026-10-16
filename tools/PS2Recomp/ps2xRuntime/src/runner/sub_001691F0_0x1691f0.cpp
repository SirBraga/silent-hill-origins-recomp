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

// Function: sub_001691F0
// Address: 0x1691f0 - 0x169228
void sub_001691F0_0x1691f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001691F0_0x1691f0");
#endif

    ctx->pc = 0x1691f0u;

    // 0x1691f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1691f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1691f4: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x1691f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
    // 0x1691f8: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x1691f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
    // 0x1691fc: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x1691fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
    // 0x169200: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x169200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
    // 0x169204: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x169204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
    // 0x169208: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x169208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
    // 0x16920c: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x16920cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x169210: 0xe7ae0034  swc1        $f14, 0x34($sp)
    ctx->pc = 0x169210u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x169214: 0xe7b00038  swc1        $f16, 0x38($sp)
    ctx->pc = 0x169214u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x169218: 0xe7b2003c  swc1        $f18, 0x3C($sp)
    ctx->pc = 0x169218u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x16921c: 0x3e00008  jr          $ra
    ctx->pc = 0x16921Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16921Cu;
        // 0x169220: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16921Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169224u;
    // 0x169224: 0x0  nop
    ctx->pc = 0x169224u;
    // NOP
    ctx->pc = 0x169228u;
}
