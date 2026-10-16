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

// Function: sub_002B2FB8
// Address: 0x2b2fb8 - 0x2b2fe8
void sub_002B2FB8_0x2b2fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2FB8_0x2b2fb8");
#endif

    ctx->pc = 0x2b2fb8u;

    // 0x2b2fb8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2b2fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b2fbc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2FBCu;
    {
        const bool branch_taken_0x2b2fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2fbc) {
            ctx->pc = 0x2B2FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2FBCu;
            // 0x2b2fc0: 0x8c830018  lw          $v1, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2FD4u;
            goto label_2b2fd4;
        }
    }
    ctx->pc = 0x2B2FC4u;
    // 0x2b2fc4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2b2fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2b2fc8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2b2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2fcc: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x2b2fccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x2b2fd0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2b2fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2b2fd4:
    // 0x2b2fd4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b2fd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2fd8: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2b2fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x2b2fdc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2b2fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b2fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FE0u;
        // 0x2b2fe4: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2FE8u;
}
