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

// Function: sub_00255F08
// Address: 0x255f08 - 0x255f40
void sub_00255F08_0x255f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255F08_0x255f08");
#endif

    switch (ctx->pc) {
        case 0x255f34u: goto label_255f34;
        default: break;
    }

    ctx->pc = 0x255f08u;

    // 0x255f08: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x255f08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x255f0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x255f10: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x255f10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f14: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x255f14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f18: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x255f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f1c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x255f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x255f20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x255f24: 0x244411e0  addiu       $a0, $v0, 0x11E0
    ctx->pc = 0x255f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4576));
    // 0x255f28: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x255f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f2c: 0xc0936dc  jal         func_24DB70
    ctx->pc = 0x255F2Cu;
    SET_GPR_U32(ctx, 31, 0x255F34u);
    ctx->pc = 0x255F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255F2Cu;
    // 0x255f30: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DB70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DB70u, 0x255F2Cu, 0x255F34u)) {
        return;
    }
    ctx->pc = 0x255F34u;
label_255f34:
    // 0x255f34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x255f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255f38: 0x3e00008  jr          $ra
    ctx->pc = 0x255F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F38u;
        // 0x255f3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255F40u;
}
