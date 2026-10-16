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

// Function: sub_00255F40
// Address: 0x255f40 - 0x255f68
void sub_00255F40_0x255f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255F40_0x255f40");
#endif

    switch (ctx->pc) {
        case 0x255f5cu: goto label_255f5c;
        default: break;
    }

    ctx->pc = 0x255f40u;

    // 0x255f40: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x255f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x255f44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x255f48: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x255f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f4c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x255f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x255f50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x255f54: 0xc0936ec  jal         func_24DBB0
    ctx->pc = 0x255F54u;
    SET_GPR_U32(ctx, 31, 0x255F5Cu);
    ctx->pc = 0x255F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255F54u;
    // 0x255f58: 0x244411e0  addiu       $a0, $v0, 0x11E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DBB0u, 0x255F54u, 0x255F5Cu)) {
        return;
    }
    ctx->pc = 0x255F5Cu;
label_255f5c:
    // 0x255f5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x255f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255f60: 0x3e00008  jr          $ra
    ctx->pc = 0x255F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F60u;
        // 0x255f64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255F68u;
}
