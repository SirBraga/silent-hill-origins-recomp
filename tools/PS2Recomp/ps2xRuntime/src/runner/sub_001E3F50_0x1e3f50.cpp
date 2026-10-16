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

// Function: sub_001E3F50
// Address: 0x1e3f50 - 0x1e3f78
void sub_001E3F50_0x1e3f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3F50_0x1e3f50");
#endif

    ctx->pc = 0x1e3f50u;

    // 0x1e3f50: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x1e3f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3f54: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x1e3f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3f58: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e3f58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e3f5c: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x1e3f5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1e3f60: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1e3f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3f64: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1e3f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3f68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e3f68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e3f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F6Cu;
        // 0x1e3f70: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3F74u;
    // 0x1e3f74: 0x0  nop
    ctx->pc = 0x1e3f74u;
    // NOP
    ctx->pc = 0x1e3f78u;
}
