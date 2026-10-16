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

// Function: sub_002DA660
// Address: 0x2da660 - 0x2da6a0
void sub_002DA660_0x2da660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA660_0x2da660");
#endif

    switch (ctx->pc) {
        case 0x2da680u: goto label_2da680;
        case 0x2da690u: goto label_2da690;
        default: break;
    }

    ctx->pc = 0x2da660u;

    // 0x2da660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2da660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2da664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2da664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da668: 0x8f848b54  lw          $a0, -0x74AC($gp)
    ctx->pc = 0x2da668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937428)));
    // 0x2da66c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2da66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2da670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2da674: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2da674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da678: 0xc0b69c2  jal         func_2DA708
    ctx->pc = 0x2DA678u;
    SET_GPR_U32(ctx, 31, 0x2DA680u);
    ctx->pc = 0x2DA67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA678u;
    // 0x2da67c: 0xaf828fd0  sw          $v0, -0x7030($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938576), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DA708u, 0x2DA678u, 0x2DA680u)) {
        return;
    }
    ctx->pc = 0x2DA680u;
label_2da680:
    // 0x2da680: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2da680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2da684: 0xaf808b54  sw          $zero, -0x74AC($gp)
    ctx->pc = 0x2da684u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937428), GPR_U32(ctx, 0));
    // 0x2da688: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x2DA688u;
    SET_GPR_U32(ctx, 31, 0x2DA690u);
    ctx->pc = 0x2DA68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA688u;
    // 0x2da68c: 0x24847c48  addiu       $a0, $a0, 0x7C48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2DA688u, 0x2DA690u)) {
        return;
    }
    ctx->pc = 0x2DA690u;
label_2da690:
    // 0x2da690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2da690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da694: 0xaf808b58  sw          $zero, -0x74A8($gp)
    ctx->pc = 0x2da694u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937432), GPR_U32(ctx, 0));
    // 0x2da698: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA698u;
        // 0x2da69c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA6A0u;
}
