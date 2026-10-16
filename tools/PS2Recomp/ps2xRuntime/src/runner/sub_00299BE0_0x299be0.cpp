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

// Function: sub_00299BE0
// Address: 0x299be0 - 0x299c00
void sub_00299BE0_0x299be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299BE0_0x299be0");
#endif

    ctx->pc = 0x299be0u;

    // 0x299be0: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x299be0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x299be4: 0x2406ff8f  addiu       $a2, $zero, -0x71
    ctx->pc = 0x299be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x299be8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x299be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x299bec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x299becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299bf0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x299bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x299bf4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x299bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x299bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x299BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299BF8u;
        // 0x299bfc: 0xfc830010  sd          $v1, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299C00u;
}
