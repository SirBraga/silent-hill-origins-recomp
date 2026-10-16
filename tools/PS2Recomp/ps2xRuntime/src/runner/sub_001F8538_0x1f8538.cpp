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

// Function: sub_001F8538
// Address: 0x1f8538 - 0x1f8560
void sub_001F8538_0x1f8538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8538_0x1f8538");
#endif

    switch (ctx->pc) {
        case 0x1f8538u: goto label_1f8538;
        case 0x1f853cu: goto label_1f853c;
        case 0x1f8540u: goto label_1f8540;
        case 0x1f8544u: goto label_1f8544;
        case 0x1f8548u: goto label_1f8548;
        case 0x1f854cu: goto label_1f854c;
        case 0x1f8550u: goto label_1f8550;
        case 0x1f8554u: goto label_1f8554;
        case 0x1f8558u: goto label_1f8558;
        case 0x1f855cu: goto label_1f855c;
        default: break;
    }

    ctx->pc = 0x1f8538u;

label_1f8538:
    // 0x1f8538: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1f8538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1f853c:
    // 0x1f853c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f853cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f8540:
    // 0x1f8540: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1f8540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
label_1f8544:
    // 0x1f8544: 0x24428560  addiu       $v0, $v0, -0x7AA0
    ctx->pc = 0x1f8544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935904));
label_1f8548:
    // 0x1f8548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f854c:
    // 0x1f854c: 0x40f809  jalr        $v0
label_1f8550:
    if (ctx->pc == 0x1F8550u) {
        ctx->pc = 0x1F8550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F854Cu;
        // 0x1f8550: 0xac62ec54  sw          $v0, -0x13AC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294962260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8554u;
        goto label_1f8554;
    }
    ctx->pc = 0x1F854Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F8554u);
        ctx->pc = 0x1F8550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F854Cu;
        // 0x1f8550: 0xac62ec54  sw          $v0, -0x13AC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294962260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F854Cu, 0x1F8554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8554u;
label_1f8554:
    // 0x1f8554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8558:
    // 0x1f8558: 0x3e00008  jr          $ra
label_1f855c:
    if (ctx->pc == 0x1F855Cu) {
        ctx->pc = 0x1F855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8558u;
        // 0x1f855c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8560u;
        goto label_fallthrough_0x1f8558;
    }
    ctx->pc = 0x1F8558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8558u;
        // 0x1f855c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f8558:
    ctx->pc = 0x1F8560u;
}
