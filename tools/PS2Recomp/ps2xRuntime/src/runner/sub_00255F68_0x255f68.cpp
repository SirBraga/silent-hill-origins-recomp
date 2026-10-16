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

// Function: sub_00255F68
// Address: 0x255f68 - 0x255f90
void sub_00255F68_0x255f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255F68_0x255f68");
#endif

    switch (ctx->pc) {
        case 0x255f84u: goto label_255f84;
        default: break;
    }

    ctx->pc = 0x255f68u;

    // 0x255f68: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x255f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x255f6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x255f70: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x255f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f74: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x255f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x255f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x255f7c: 0xc0936fa  jal         func_24DBE8
    ctx->pc = 0x255F7Cu;
    SET_GPR_U32(ctx, 31, 0x255F84u);
    ctx->pc = 0x255F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255F7Cu;
    // 0x255f80: 0x244411e0  addiu       $a0, $v0, 0x11E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DBE8u, 0x255F7Cu, 0x255F84u)) {
        return;
    }
    ctx->pc = 0x255F84u;
label_255f84:
    // 0x255f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x255f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255f88: 0x3e00008  jr          $ra
    ctx->pc = 0x255F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F88u;
        // 0x255f8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255F90u;
}
