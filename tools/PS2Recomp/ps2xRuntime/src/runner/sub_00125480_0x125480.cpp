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

// Function: sub_00125480
// Address: 0x125480 - 0x1254a8
void sub_00125480_0x125480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125480_0x125480");
#endif

    ctx->pc = 0x125480u;

    // 0x125480: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x125480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125484: 0xc4800bdc  lwc1        $f0, 0xBDC($a0)
    ctx->pc = 0x125484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125488: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x125488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12548c: 0x0  nop
    ctx->pc = 0x12548cu;
    // NOP
    // 0x125490: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x125490u;
    {
        const bool branch_taken_0x125490 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x125494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125490u;
        // 0x125494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125490) {
            ctx->pc = 0x1254A0u;
            goto label_1254a0;
        }
    }
    ctx->pc = 0x125498u;
    // 0x125498: 0x8c820f54  lw          $v0, 0xF54($a0)
    ctx->pc = 0x125498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3924)));
    // 0x12549c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x12549cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1254a0:
    // 0x1254a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1254A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1254A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1254A8u;
}
