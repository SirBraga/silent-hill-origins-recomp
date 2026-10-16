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

// Function: sub_002DC1D8
// Address: 0x2dc1d8 - 0x2dc200
void sub_002DC1D8_0x2dc1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC1D8_0x2dc1d8");
#endif

    switch (ctx->pc) {
        case 0x2dc1d8u: goto label_2dc1d8;
        case 0x2dc1dcu: goto label_2dc1dc;
        case 0x2dc1e0u: goto label_2dc1e0;
        case 0x2dc1e4u: goto label_2dc1e4;
        case 0x2dc1e8u: goto label_2dc1e8;
        case 0x2dc1ecu: goto label_2dc1ec;
        case 0x2dc1f0u: goto label_2dc1f0;
        case 0x2dc1f4u: goto label_2dc1f4;
        case 0x2dc1f8u: goto label_2dc1f8;
        case 0x2dc1fcu: goto label_2dc1fc;
        default: break;
    }

    ctx->pc = 0x2dc1d8u;

label_2dc1d8:
    // 0x2dc1d8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2dc1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2dc1dc:
    // 0x2dc1dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc1dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2dc1e0:
    // 0x2dc1e0: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x2dc1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_2dc1e4:
    // 0x2dc1e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2dc1e8:
    // 0x2dc1e8: 0x40f809  jalr        $v0
label_2dc1ec:
    if (ctx->pc == 0x2DC1ECu) {
        ctx->pc = 0x2DC1F0u;
        goto label_2dc1f0;
    }
    ctx->pc = 0x2DC1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DC1F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC1E8u, 0x2DC1F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DC1F0u;
label_2dc1f0:
    // 0x2dc1f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dc1f4:
    // 0x2dc1f4: 0x3e00008  jr          $ra
label_2dc1f8:
    if (ctx->pc == 0x2DC1F8u) {
        ctx->pc = 0x2DC1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1F4u;
        // 0x2dc1f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC1FCu;
        goto label_2dc1fc;
    }
    ctx->pc = 0x2DC1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1F4u;
        // 0x2dc1f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC1FCu;
label_2dc1fc:
    // 0x2dc1fc: 0x0  nop
    ctx->pc = 0x2dc1fcu;
    // NOP
    ctx->pc = 0x2dc200u;
}
