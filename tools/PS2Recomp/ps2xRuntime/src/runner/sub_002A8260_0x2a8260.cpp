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

// Function: sub_002A8260
// Address: 0x2a8260 - 0x2a8280
void sub_002A8260_0x2a8260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8260_0x2a8260");
#endif

    ctx->pc = 0x2a8260u;

    // 0x2a8260: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2a8260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8264: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x2a8264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x2a8268: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2a8268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a826c: 0xe4810044  swc1        $f1, 0x44($a0)
    ctx->pc = 0x2a826cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x2a8270: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2a8270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8274: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8274u;
        // 0x2a8278: 0xe4800048  swc1        $f0, 0x48($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A827Cu;
    // 0x2a827c: 0x0  nop
    ctx->pc = 0x2a827cu;
    // NOP
    ctx->pc = 0x2a8280u;
}
