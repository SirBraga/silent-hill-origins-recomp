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

// Function: sub_001BB4D8
// Address: 0x1bb4d8 - 0x1bb4f0
void sub_001BB4D8_0x1bb4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB4D8_0x1bb4d8");
#endif

    switch (ctx->pc) {
        case 0x1bb4dcu: goto label_1bb4dc;
        default: break;
    }

    ctx->pc = 0x1bb4d8u;

    // 0x1bb4d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bb4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bb4dc:
    // 0x1bb4dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb4dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb4e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb4e4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1bb4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bb4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4E8u;
        // 0x1bb4ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB4F0u;
}
