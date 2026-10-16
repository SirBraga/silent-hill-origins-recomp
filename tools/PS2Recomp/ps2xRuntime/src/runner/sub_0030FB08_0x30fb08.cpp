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

// Function: sub_0030FB08
// Address: 0x30fb08 - 0x30fb28
void sub_0030FB08_0x30fb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030FB08_0x30fb08");
#endif

    switch (ctx->pc) {
        case 0x30fb1cu: goto label_30fb1c;
        default: break;
    }

    ctx->pc = 0x30fb08u;

    // 0x30fb08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30fb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30fb0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30fb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30fb10: 0xc48c004c  lwc1        $f12, 0x4C($a0)
    ctx->pc = 0x30fb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30fb14: 0xc0c38f8  jal         func_30E3E0
    ctx->pc = 0x30FB14u;
    SET_GPR_U32(ctx, 31, 0x30FB1Cu);
    ctx->pc = 0x30FB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FB14u;
    // 0x30fb18: 0x8c840040  lw          $a0, 0x40($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E3E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30E3E0u, 0x30FB14u, 0x30FB1Cu)) {
        return;
    }
    ctx->pc = 0x30FB1Cu;
label_30fb1c:
    // 0x30fb1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30fb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30fb20: 0x3e00008  jr          $ra
    ctx->pc = 0x30FB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB20u;
        // 0x30fb24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FB28u;
}
