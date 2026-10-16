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

// Function: sub_002ED148
// Address: 0x2ed148 - 0x2ed168
void sub_002ED148_0x2ed148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED148_0x2ed148");
#endif

    ctx->pc = 0x2ed148u;

    // 0x2ed148: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ed148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed14c: 0x94430058  lhu         $v1, 0x58($v0)
    ctx->pc = 0x2ed14cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2ed150: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2ed150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2ed154: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x2ed154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2ed158: 0xa4430058  sh          $v1, 0x58($v0)
    ctx->pc = 0x2ed158u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 88), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ed15c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2ed15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ed160: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED160u;
        // 0x2ed164: 0xaca40018  sw          $a0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED168u;
}
