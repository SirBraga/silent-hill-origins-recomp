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

// Function: sub_00125410
// Address: 0x125410 - 0x125420
void sub_00125410_0x125410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125410_0x125410");
#endif

    ctx->pc = 0x125410u;

    // 0x125410: 0xc4800e24  lwc1        $f0, 0xE24($a0)
    ctx->pc = 0x125410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125414: 0x3e00008  jr          $ra
    ctx->pc = 0x125414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125414u;
        // 0x125418: 0x46000002  mul.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12541Cu;
    // 0x12541c: 0x0  nop
    ctx->pc = 0x12541cu;
    // NOP
    ctx->pc = 0x125420u;
}
