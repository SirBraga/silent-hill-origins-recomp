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

// Function: sub_0027D6B0
// Address: 0x27d6b0 - 0x27d6d8
void sub_0027D6B0_0x27d6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D6B0_0x27d6b0");
#endif

    switch (ctx->pc) {
        case 0x27d6b0u: goto label_27d6b0;
        case 0x27d6b4u: goto label_27d6b4;
        case 0x27d6b8u: goto label_27d6b8;
        case 0x27d6bcu: goto label_27d6bc;
        case 0x27d6c0u: goto label_27d6c0;
        case 0x27d6c4u: goto label_27d6c4;
        case 0x27d6c8u: goto label_27d6c8;
        case 0x27d6ccu: goto label_27d6cc;
        case 0x27d6d0u: goto label_27d6d0;
        case 0x27d6d4u: goto label_27d6d4;
        default: break;
    }

    ctx->pc = 0x27d6b0u;

label_27d6b0:
    // 0x27d6b0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x27d6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_27d6b4:
    // 0x27d6b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27d6b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_27d6b8:
    // 0x27d6b8: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x27d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_27d6bc:
    // 0x27d6bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27d6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27d6c0:
    // 0x27d6c0: 0x40f809  jalr        $v0
label_27d6c4:
    if (ctx->pc == 0x27D6C4u) {
        ctx->pc = 0x27D6C8u;
        goto label_27d6c8;
    }
    ctx->pc = 0x27D6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27D6C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D6C0u, 0x27D6C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27D6C8u;
label_27d6c8:
    // 0x27d6c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27d6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27d6cc:
    // 0x27d6cc: 0x3e00008  jr          $ra
label_27d6d0:
    if (ctx->pc == 0x27D6D0u) {
        ctx->pc = 0x27D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D6CCu;
        // 0x27d6d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D6D4u;
        goto label_27d6d4;
    }
    ctx->pc = 0x27D6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D6CCu;
        // 0x27d6d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D6D4u;
label_27d6d4:
    // 0x27d6d4: 0x0  nop
    ctx->pc = 0x27d6d4u;
    // NOP
    ctx->pc = 0x27d6d8u;
}
