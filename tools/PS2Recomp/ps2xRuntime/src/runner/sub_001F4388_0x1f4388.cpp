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

// Function: sub_001F4388
// Address: 0x1f4388 - 0x1f43a8
void sub_001F4388_0x1f4388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4388_0x1f4388");
#endif

    ctx->pc = 0x1f4388u;

    // 0x1f4388: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1f4388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1f438c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f438cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4390: 0x3c014208  lui         $at, 0x4208
    ctx->pc = 0x1f4390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16904 << 16));
    // 0x1f4394: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f4394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f4398: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1f4398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1f439c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F439Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F43A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F439Cu;
        // 0x1f43a0: 0xe481001c  swc1        $f1, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F439Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F43A4u;
    // 0x1f43a4: 0x0  nop
    ctx->pc = 0x1f43a4u;
    // NOP
    ctx->pc = 0x1f43a8u;
}
