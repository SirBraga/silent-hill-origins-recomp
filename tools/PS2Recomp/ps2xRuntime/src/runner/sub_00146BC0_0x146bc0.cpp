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

// Function: sub_00146BC0
// Address: 0x146bc0 - 0x146bf0
void sub_00146BC0_0x146bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146BC0_0x146bc0");
#endif

    switch (ctx->pc) {
        case 0x146be0u: goto label_146be0;
        default: break;
    }

    ctx->pc = 0x146bc0u;

    // 0x146bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x146bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x146bc4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x146bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x146bc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146bcc: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x146bccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33870Cu));
    // 0x146bd0: 0x8c85004c  lw          $a1, 0x4C($a0)
    ctx->pc = 0x146bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x146bd4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x146bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146bd8: 0xc05ee90  jal         func_17BA40
    ctx->pc = 0x146BD8u;
    SET_GPR_U32(ctx, 31, 0x146BE0u);
    ctx->pc = 0x146BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146BD8u;
    // 0x146bdc: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA40u, 0x146BD8u, 0x146BE0u)) {
        return;
    }
    ctx->pc = 0x146BE0u;
label_146be0:
    // 0x146be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146be4: 0x3e00008  jr          $ra
    ctx->pc = 0x146BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146BE4u;
        // 0x146be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146BECu;
    // 0x146bec: 0x0  nop
    ctx->pc = 0x146becu;
    // NOP
    ctx->pc = 0x146bf0u;
}
