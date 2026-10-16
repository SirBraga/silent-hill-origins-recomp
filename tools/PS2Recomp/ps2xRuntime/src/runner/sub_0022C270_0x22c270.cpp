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

// Function: sub_0022C270
// Address: 0x22c270 - 0x22c2a8
void sub_0022C270_0x22c270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C270_0x22c270");
#endif

    switch (ctx->pc) {
        case 0x22c29cu: goto label_22c29c;
        default: break;
    }

    ctx->pc = 0x22c270u;

    // 0x22c270: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x22c270u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c274: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22c274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22c278: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x22c278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c27c: 0x8f8683f8  lw          $a2, -0x7C08($gp)
    ctx->pc = 0x22c27cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
    // 0x22c280: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22c280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22c284: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22c284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c288: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x22c288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x22c28c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x22c28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x22c290: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x22c290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x22c294: 0xc08b02a  jal         func_22C0A8
    ctx->pc = 0x22C294u;
    SET_GPR_U32(ctx, 31, 0x22C29Cu);
    ctx->pc = 0x22C298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C294u;
    // 0x22c298: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22C0A8u, 0x22C294u, 0x22C29Cu)) {
        return;
    }
    ctx->pc = 0x22C29Cu;
label_22c29c:
    // 0x22c29c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22c29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x22C2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2A0u;
        // 0x22c2a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C2A8u;
}
