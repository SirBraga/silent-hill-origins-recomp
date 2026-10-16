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

// Function: sub_001672B8
// Address: 0x1672b8 - 0x1672f0
void sub_001672B8_0x1672b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001672B8_0x1672b8");
#endif

    switch (ctx->pc) {
        case 0x1672e0u: goto label_1672e0;
        default: break;
    }

    ctx->pc = 0x1672b8u;

    // 0x1672b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1672b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1672bc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1672bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1672c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1672c4: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x1672c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x1672c8: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1672c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1672cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1672CCu;
    {
        const bool branch_taken_0x1672cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1672D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672CCu;
        // 0x1672d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1672cc) {
            ctx->pc = 0x1672E0u;
            goto label_1672e0;
        }
    }
    ctx->pc = 0x1672D4u;
    // 0x1672d4: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x1672d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x1672d8: 0xc09545a  jal         func_255168
    ctx->pc = 0x1672D8u;
    SET_GPR_U32(ctx, 31, 0x1672E0u);
    ctx->pc = 0x1672DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1672D8u;
    // 0x1672dc: 0x24a57468  addiu       $a1, $a1, 0x7468 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x1672D8u, 0x1672E0u)) {
        return;
    }
    ctx->pc = 0x1672E0u;
label_1672e0:
    // 0x1672e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1672e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1672e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1672E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1672E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672E4u;
        // 0x1672e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1672E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1672ECu;
    // 0x1672ec: 0x0  nop
    ctx->pc = 0x1672ecu;
    // NOP
    ctx->pc = 0x1672f0u;
}
