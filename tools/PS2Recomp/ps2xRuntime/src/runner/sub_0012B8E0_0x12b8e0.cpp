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

// Function: sub_0012B8E0
// Address: 0x12b8e0 - 0x12b918
void sub_0012B8E0_0x12b8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B8E0_0x12b8e0");
#endif

    switch (ctx->pc) {
        case 0x12b8fcu: goto label_12b8fc;
        default: break;
    }

    ctx->pc = 0x12b8e0u;

    // 0x12b8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12b8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b8e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b8e8: 0x8c822bc8  lw          $v0, 0x2BC8($a0)
    ctx->pc = 0x12b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11208)));
    // 0x12b8ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B8ECu;
    {
        const bool branch_taken_0x12b8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8ECu;
        // 0x12b8f0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8ec) {
            ctx->pc = 0x12B904u;
            goto label_12b904;
        }
    }
    ctx->pc = 0x12B8F4u;
    // 0x12b8f4: 0xc049a0e  jal         func_126838
    ctx->pc = 0x12B8F4u;
    SET_GPR_U32(ctx, 31, 0x12B8FCu);
    ctx->pc = 0x12B8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B8F4u;
    // 0x12b8f8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126838u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126838u, 0x12B8F4u, 0x12B8FCu)) {
        return;
    }
    ctx->pc = 0x12B8FCu;
label_12b8fc:
    // 0x12b8fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12B8FCu;
    {
        const bool branch_taken_0x12b8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8FCu;
        // 0x12b900: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8fc) {
            ctx->pc = 0x12B90Cu;
            goto label_12b90c;
        }
    }
    ctx->pc = 0x12B904u;
label_12b904:
    // 0x12b904: 0x2442c9b8  addiu       $v0, $v0, -0x3648
    ctx->pc = 0x12b904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953400));
    // 0x12b908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12b90c:
    // 0x12b90c: 0x3e00008  jr          $ra
    ctx->pc = 0x12B90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B90Cu;
        // 0x12b910: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B914u;
    // 0x12b914: 0x0  nop
    ctx->pc = 0x12b914u;
    // NOP
    ctx->pc = 0x12b918u;
}
