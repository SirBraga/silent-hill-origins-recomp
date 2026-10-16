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

// Function: sub_00311278
// Address: 0x311278 - 0x311290
void sub_00311278_0x311278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311278_0x311278");
#endif

    ctx->pc = 0x311278u;

    // 0x311278: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x311278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31127c: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x31127cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311280: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x311280u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x311284: 0x3e00008  jr          $ra
    ctx->pc = 0x311284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311284u;
        // 0x311288: 0x46000000  add.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31128Cu;
    // 0x31128c: 0x0  nop
    ctx->pc = 0x31128cu;
    // NOP
    ctx->pc = 0x311290u;
}
