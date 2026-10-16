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

// Function: sub_001E0208
// Address: 0x1e0208 - 0x1e0250
void sub_001E0208_0x1e0208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0208_0x1e0208");
#endif

    ctx->pc = 0x1e0208u;

    // 0x1e0208: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1e0208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e020c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1e020cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0210: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e0210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e0214: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1e0214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1e0218: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1e0218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e021c: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x1e021cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0220: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e0220u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0224: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x1e0224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1e0228: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x1e0228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e022c: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x1e022cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0230: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e0230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e0234: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1e0234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1e0238: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x1e0238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e023c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1e023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0240: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e0240u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0244: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0244u;
        // 0x1e0248: 0xe4810014  swc1        $f1, 0x14($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E024Cu;
    // 0x1e024c: 0x0  nop
    ctx->pc = 0x1e024cu;
    // NOP
    ctx->pc = 0x1e0250u;
}
