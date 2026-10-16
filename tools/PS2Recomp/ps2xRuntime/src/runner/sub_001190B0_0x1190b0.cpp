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

// Function: sub_001190B0
// Address: 0x1190b0 - 0x1190e0
void sub_001190B0_0x1190b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001190B0_0x1190b0");
#endif

    ctx->pc = 0x1190b0u;

    // 0x1190b0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1190b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1190b4: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1190b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1190b8: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x1190b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1190bc: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x1190bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1190c0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1190c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1190c4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1190c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1190c8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1190c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1190cc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1190ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1190d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1190d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1190d4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1190d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1190d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1190D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1190DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190D8u;
        // 0x1190dc: 0x46001000  add.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1190D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1190E0u;
}
