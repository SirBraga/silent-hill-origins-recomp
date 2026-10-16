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

// Function: sub_001E3300
// Address: 0x1e3300 - 0x1e3338
void sub_001E3300_0x1e3300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3300_0x1e3300");
#endif

    switch (ctx->pc) {
        case 0x1e332cu: goto label_1e332c;
        default: break;
    }

    ctx->pc = 0x1e3300u;

    // 0x1e3300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3308: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1e3308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e330c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1e330cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3310: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x1e3310u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1e3314: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e3314u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e3318: 0x0  nop
    ctx->pc = 0x1e3318u;
    // NOP
    // 0x1e331c: 0x0  nop
    ctx->pc = 0x1e331cu;
    // NOP
    // 0x1e3320: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1e3320u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[0]);
    // 0x1e3324: 0xc078b48  jal         func_1E2D20
    ctx->pc = 0x1E3324u;
    SET_GPR_U32(ctx, 31, 0x1E332Cu);
    ctx->pc = 0x1E2D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E2D20u, 0x1E3324u, 0x1E332Cu)) {
        return;
    }
    ctx->pc = 0x1E332Cu;
label_1e332c:
    // 0x1e332c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e332cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3330: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3330u;
        // 0x1e3334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3338u;
}
