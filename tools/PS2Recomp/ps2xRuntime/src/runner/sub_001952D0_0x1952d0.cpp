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

// Function: sub_001952D0
// Address: 0x1952d0 - 0x195310
void sub_001952D0_0x1952d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001952D0_0x1952d0");
#endif

    switch (ctx->pc) {
        case 0x1952fcu: goto label_1952fc;
        default: break;
    }

    ctx->pc = 0x1952d0u;

    // 0x1952d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1952d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1952d4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1952d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1952d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1952d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1952dc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1952DCu;
    {
        const bool branch_taken_0x1952dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1952E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952DCu;
        // 0x1952e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1952dc) {
            ctx->pc = 0x195300u;
            goto label_195300;
        }
    }
    ctx->pc = 0x1952E4u;
    // 0x1952e4: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x1952e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x1952e8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1952e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1952ec: 0x24a551a0  addiu       $a1, $a1, 0x51A0
    ctx->pc = 0x1952ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20896));
    // 0x1952f0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1952f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1952f4: 0xc09545a  jal         func_255168
    ctx->pc = 0x1952F4u;
    SET_GPR_U32(ctx, 31, 0x1952FCu);
    ctx->pc = 0x1952F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1952F4u;
    // 0x1952f8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x1952F4u, 0x1952FCu)) {
        return;
    }
    ctx->pc = 0x1952FCu;
label_1952fc:
    // 0x1952fc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1952fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_195300:
    // 0x195300: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x195300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195304: 0x3e00008  jr          $ra
    ctx->pc = 0x195304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195304u;
        // 0x195308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19530Cu;
    // 0x19530c: 0x0  nop
    ctx->pc = 0x19530cu;
    // NOP
    ctx->pc = 0x195310u;
}
