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

// Function: sub_001F8430
// Address: 0x1f8430 - 0x1f8458
void sub_001F8430_0x1f8430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8430_0x1f8430");
#endif

    switch (ctx->pc) {
        case 0x1f8430u: goto label_1f8430;
        case 0x1f8434u: goto label_1f8434;
        case 0x1f8438u: goto label_1f8438;
        case 0x1f843cu: goto label_1f843c;
        case 0x1f8440u: goto label_1f8440;
        case 0x1f8444u: goto label_1f8444;
        case 0x1f8448u: goto label_1f8448;
        case 0x1f844cu: goto label_1f844c;
        case 0x1f8450u: goto label_1f8450;
        case 0x1f8454u: goto label_1f8454;
        default: break;
    }

    ctx->pc = 0x1f8430u;

label_1f8430:
    // 0x1f8430: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x1f8430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_1f8434:
    // 0x1f8434: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f8438:
    // 0x1f8438: 0x8c43ec50  lw          $v1, -0x13B0($v0)
    ctx->pc = 0x1f8438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962256)));
label_1f843c:
    // 0x1f843c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f843cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f8440:
    // 0x1f8440: 0x60f809  jalr        $v1
label_1f8444:
    if (ctx->pc == 0x1F8444u) {
        ctx->pc = 0x1F8448u;
        goto label_1f8448;
    }
    ctx->pc = 0x1F8440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F8448u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8440u, 0x1F8448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8448u;
label_1f8448:
    // 0x1f8448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f844c:
    // 0x1f844c: 0x3e00008  jr          $ra
label_1f8450:
    if (ctx->pc == 0x1F8450u) {
        ctx->pc = 0x1F8450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F844Cu;
        // 0x1f8450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8454u;
        goto label_1f8454;
    }
    ctx->pc = 0x1F844Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F844Cu;
        // 0x1f8450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F844Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8454u;
label_1f8454:
    // 0x1f8454: 0x0  nop
    ctx->pc = 0x1f8454u;
    // NOP
    ctx->pc = 0x1f8458u;
}
