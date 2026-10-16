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

// Function: sub_001C2698
// Address: 0x1c2698 - 0x1c26c0
void sub_001C2698_0x1c2698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2698_0x1c2698");
#endif

    switch (ctx->pc) {
        case 0x1c26b4u: goto label_1c26b4;
        default: break;
    }

    ctx->pc = 0x1c2698u;

    // 0x1c2698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c269c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c269cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c26a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c26a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c26a4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1c26a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c26a8: 0x2442de18  addiu       $v0, $v0, -0x21E8
    ctx->pc = 0x1c26a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958616));
    // 0x1c26ac: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1C26ACu;
    SET_GPR_U32(ctx, 31, 0x1C26B4u);
    ctx->pc = 0x1C26B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C26ACu;
    // 0x1c26b0: 0xac620258  sw          $v0, 0x258($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 600), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1C26ACu, 0x1C26B4u)) {
        return;
    }
    ctx->pc = 0x1C26B4u;
label_1c26b4:
    // 0x1c26b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c26b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c26b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C26B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C26BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26B8u;
        // 0x1c26bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C26B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C26C0u;
}
