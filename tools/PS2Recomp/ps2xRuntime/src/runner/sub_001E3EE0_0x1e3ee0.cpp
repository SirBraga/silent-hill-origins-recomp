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

// Function: sub_001E3EE0
// Address: 0x1e3ee0 - 0x1e3f18
void sub_001E3EE0_0x1e3ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3EE0_0x1e3ee0");
#endif

    ctx->pc = 0x1e3ee0u;

    // 0x1e3ee0: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x1e3ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3ee4: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x1e3ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3ee8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e3ee8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e3eec: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1e3eecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1e3ef0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e3ef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e3ef4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1e3ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1e3ef8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1e3ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3efc: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1e3efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3f00: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e3f00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e3f04: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1e3f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1e3f08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e3f08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e3f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F0Cu;
        // 0x1e3f10: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3F14u;
    // 0x1e3f14: 0x0  nop
    ctx->pc = 0x1e3f14u;
    // NOP
    ctx->pc = 0x1e3f18u;
}
