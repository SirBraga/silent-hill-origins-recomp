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

// Function: sub_00281578
// Address: 0x281578 - 0x2815a8
void sub_00281578_0x281578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281578_0x281578");
#endif

    switch (ctx->pc) {
        case 0x28159cu: goto label_28159c;
        default: break;
    }

    ctx->pc = 0x281578u;

    // 0x281578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28157c: 0x8f828820  lw          $v0, -0x77E0($gp)
    ctx->pc = 0x28157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936608)));
    // 0x281580: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x281580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x281584: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x281584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281588: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x281588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x28158c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28158cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x281590: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x281590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x281594: 0xc092782  jal         func_249E08
    ctx->pc = 0x281594u;
    SET_GPR_U32(ctx, 31, 0x28159Cu);
    ctx->pc = 0x281598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281594u;
    // 0x281598: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x281594u, 0x28159Cu)) {
        return;
    }
    ctx->pc = 0x28159Cu;
label_28159c:
    // 0x28159c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28159cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2815a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2815A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2815A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2815A0u;
        // 0x2815a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2815A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2815A8u;
}
