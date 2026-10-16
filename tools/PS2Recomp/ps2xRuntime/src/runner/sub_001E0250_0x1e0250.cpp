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

// Function: sub_001E0250
// Address: 0x1e0250 - 0x1e02a8
void sub_001E0250_0x1e0250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0250_0x1e0250");
#endif

    ctx->pc = 0x1e0250u;

    // 0x1e0250: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1e0250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0254: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x1e0254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0258: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x1e0258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e025c: 0x0  nop
    ctx->pc = 0x1e025cu;
    // NOP
    // 0x1e0260: 0x0  nop
    ctx->pc = 0x1e0260u;
    // NOP
    // 0x1e0264: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1e0264u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x1e0268: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x1e0268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e026c: 0xc4840010  lwc1        $f4, 0x10($a0)
    ctx->pc = 0x1e026cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e0270: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x1e0270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1e0274: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1e0274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0278: 0x0  nop
    ctx->pc = 0x1e0278u;
    // NOP
    // 0x1e027c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1e027cu;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[0]);
    // 0x1e0280: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x1e0280u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1e0284: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1e0284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0288: 0x0  nop
    ctx->pc = 0x1e0288u;
    // NOP
    // 0x1e028c: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x1e028cu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[0]);
    // 0x1e0290: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x1e0290u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1e0294: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1e0294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0298: 0x0  nop
    ctx->pc = 0x1e0298u;
    // NOP
    // 0x1e029c: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x1e029cu;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[0]);
    // 0x1e02a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E02A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E02A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02A0u;
        // 0x1e02a4: 0xe4840010  swc1        $f4, 0x10($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E02A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E02A8u;
}
