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

// Function: sub_00190440
// Address: 0x190440 - 0x190468
void sub_00190440_0x190440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190440_0x190440");
#endif

    switch (ctx->pc) {
        case 0x19045cu: goto label_19045c;
        default: break;
    }

    ctx->pc = 0x190440u;

    // 0x190440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190444: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x190444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19044c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19044cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190450: 0x8ca600c0  lw          $a2, 0xC0($a1)
    ctx->pc = 0x190450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x190454: 0xc0636ea  jal         func_18DBA8
    ctx->pc = 0x190454u;
    SET_GPR_U32(ctx, 31, 0x19045Cu);
    ctx->pc = 0x190458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190454u;
    // 0x190458: 0x8ca500c4  lw          $a1, 0xC4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18DBA8u, 0x190454u, 0x19045Cu)) {
        return;
    }
    ctx->pc = 0x19045Cu;
label_19045c:
    // 0x19045c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19045cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190460: 0x3e00008  jr          $ra
    ctx->pc = 0x190460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190460u;
        // 0x190464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190468u;
}
