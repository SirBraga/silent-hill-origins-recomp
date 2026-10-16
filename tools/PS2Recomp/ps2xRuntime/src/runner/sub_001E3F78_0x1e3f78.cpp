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

// Function: sub_001E3F78
// Address: 0x1e3f78 - 0x1e3fa8
void sub_001E3F78_0x1e3f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3F78_0x1e3f78");
#endif

    ctx->pc = 0x1e3f78u;

    // 0x1e3f78: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x1e3f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3f7c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1e3f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3f80: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x1e3f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3f84: 0x0  nop
    ctx->pc = 0x1e3f84u;
    // NOP
    // 0x1e3f88: 0x0  nop
    ctx->pc = 0x1e3f88u;
    // NOP
    // 0x1e3f8c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e3f8cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1e3f90: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1e3f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1e3f94: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1e3f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3f98: 0x0  nop
    ctx->pc = 0x1e3f98u;
    // NOP
    // 0x1e3f9c: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x1e3f9cu;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[1]);
    // 0x1e3fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3FA0u;
        // 0x1e3fa4: 0xe4820008  swc1        $f2, 0x8($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3FA8u;
}
