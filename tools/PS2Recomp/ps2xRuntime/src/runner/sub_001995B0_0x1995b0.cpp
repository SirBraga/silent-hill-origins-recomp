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

// Function: sub_001995B0
// Address: 0x1995b0 - 0x1995e8
void sub_001995B0_0x1995b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001995B0_0x1995b0");
#endif

    switch (ctx->pc) {
        case 0x1995dcu: goto label_1995dc;
        default: break;
    }

    ctx->pc = 0x1995b0u;

    // 0x1995b0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1995b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1995b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1995b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1995b8: 0x8c628bcc  lw          $v0, -0x7434($v1)
    ctx->pc = 0x1995b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338BCCu));
    // 0x1995bc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1995bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1995c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1995c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1995c4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1995c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1995c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1995c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1995cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1995ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1995d0: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1995d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1995d4: 0xc0ab178  jal         func_2AC5E0
    ctx->pc = 0x1995D4u;
    SET_GPR_U32(ctx, 31, 0x1995DCu);
    ctx->pc = 0x1995D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1995D4u;
    // 0x1995d8: 0xac628bcc  sw          $v0, -0x7434($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937548), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC5E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AC5E0u, 0x1995D4u, 0x1995DCu)) {
        return;
    }
    ctx->pc = 0x1995DCu;
label_1995dc:
    // 0x1995dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1995dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1995e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1995E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1995E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995E0u;
        // 0x1995e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1995E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1995E8u;
}
