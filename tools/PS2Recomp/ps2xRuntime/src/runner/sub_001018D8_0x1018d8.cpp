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

// Function: sub_001018D8
// Address: 0x1018d8 - 0x101908
void sub_001018D8_0x1018d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001018D8_0x1018d8");
#endif

    ctx->pc = 0x1018d8u;

    // 0x1018d8: 0x8c8200ec  lw          $v0, 0xEC($a0)
    ctx->pc = 0x1018d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1018dc: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1018DCu;
    {
        const bool branch_taken_0x1018dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1018E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018DCu;
        // 0x1018e0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1018dc) {
            ctx->pc = 0x1018ECu;
            goto label_1018ec;
        }
    }
    ctx->pc = 0x1018E4u;
    // 0x1018e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1018E4u;
    {
        const bool branch_taken_0x1018e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1018E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018E4u;
        // 0x1018e8: 0x34634000  ori         $v1, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1018e4) {
            ctx->pc = 0x1018FCu;
            goto label_1018fc;
        }
    }
    ctx->pc = 0x1018ECu;
label_1018ec:
    // 0x1018ec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1018ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1018f0: 0x3442bfff  ori         $v0, $v0, 0xBFFF
    ctx->pc = 0x1018f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49151);
    // 0x1018f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1018f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1018f8: 0x8c8200ec  lw          $v0, 0xEC($a0)
    ctx->pc = 0x1018f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
label_1018fc:
    // 0x1018fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1018FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018FCu;
        // 0x101900: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1018FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101904u;
    // 0x101904: 0x0  nop
    ctx->pc = 0x101904u;
    // NOP
    ctx->pc = 0x101908u;
}
