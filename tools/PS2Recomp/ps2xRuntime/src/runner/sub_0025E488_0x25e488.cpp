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

// Function: sub_0025E488
// Address: 0x25e488 - 0x25e4b0
void sub_0025E488_0x25e488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E488_0x25e488");
#endif

    ctx->pc = 0x25e488u;

    // 0x25e488: 0x8f8385f8  lw          $v1, -0x7A08($gp)
    ctx->pc = 0x25e488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
    // 0x25e48c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x25e48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25e490: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x25e490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x25e494: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E494u;
    {
        const bool branch_taken_0x25e494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e494) {
            ctx->pc = 0x25E498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E494u;
            // 0x25e498: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E4A4u;
            goto label_25e4a4;
        }
    }
    ctx->pc = 0x25E49Cu;
    // 0x25e49c: 0x3e00008  jr          $ra
    ctx->pc = 0x25E49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E49Cu;
        // 0x25e4a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E4A4u;
label_25e4a4:
    // 0x25e4a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25e4a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x25E4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4A8u;
        // 0x25e4ac: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E4B0u;
}
