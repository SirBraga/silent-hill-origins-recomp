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

// Function: sub_001B6DF0
// Address: 0x1b6df0 - 0x1b6e28
void sub_001B6DF0_0x1b6df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6DF0_0x1b6df0");
#endif

    ctx->pc = 0x1b6df0u;

    // 0x1b6df0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1b6df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6df4: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1b6df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6df8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b6df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b6dfc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b6dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b6e00: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b6e00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b6e04: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1b6e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x1b6e08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b6e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b6e0c: 0x0  nop
    ctx->pc = 0x1b6e0cu;
    // NOP
    // 0x1b6e10: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x1b6e10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1b6e14: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1b6e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1b6e18: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b6e18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b6e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E1Cu;
        // 0x1b6e20: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6E24u;
    // 0x1b6e24: 0x0  nop
    ctx->pc = 0x1b6e24u;
    // NOP
    ctx->pc = 0x1b6e28u;
}
