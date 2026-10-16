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

// Function: sub_001AE3F0
// Address: 0x1ae3f0 - 0x1ae418
void sub_001AE3F0_0x1ae3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE3F0_0x1ae3f0");
#endif

    ctx->pc = 0x1ae3f0u;

    // 0x1ae3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3F0u;
        // 0x1ae3f4: 0xe48c0018  swc1        $f12, 0x18($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE3F8u;
    // 0x1ae3f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ae3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ae3fc: 0x0  nop
    ctx->pc = 0x1ae3fcu;
    // NOP
    // 0x1ae400: 0x0  nop
    ctx->pc = 0x1ae400u;
    // NOP
    // 0x1ae404: 0x0  nop
    ctx->pc = 0x1ae404u;
    // NOP
    // 0x1ae408: 0x0  nop
    ctx->pc = 0x1ae408u;
    // NOP
    // 0x1ae40c: 0x0  nop
    ctx->pc = 0x1ae40cu;
    // NOP
    // 0x1ae410: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ae410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ae414: 0x0  nop
    ctx->pc = 0x1ae414u;
    // NOP
    ctx->pc = 0x1ae418u;
}
