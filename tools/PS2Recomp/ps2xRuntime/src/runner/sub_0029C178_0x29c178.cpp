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

// Function: sub_0029C178
// Address: 0x29c178 - 0x29c1a8
void sub_0029C178_0x29c178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C178_0x29c178");
#endif

    ctx->pc = 0x29c178u;

    // 0x29c178: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29c178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29c17c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x29c17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x29c180: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29C180u;
    {
        const bool branch_taken_0x29c180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c180) {
            ctx->pc = 0x29C184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C180u;
            // 0x29c184: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C198u;
            goto label_29c198;
        }
    }
    ctx->pc = 0x29C188u;
    // 0x29c188: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x29c188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x29c18c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x29c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29c190: 0x3e00008  jr          $ra
    ctx->pc = 0x29C190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C190u;
        // 0x29c194: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C198u;
label_29c198:
    // 0x29c198: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x29c198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29c19c: 0x3e00008  jr          $ra
    ctx->pc = 0x29C19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C19Cu;
        // 0x29c1a0: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C1A4u;
    // 0x29c1a4: 0x0  nop
    ctx->pc = 0x29c1a4u;
    // NOP
    ctx->pc = 0x29c1a8u;
}
