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

// Function: sub_00125D68
// Address: 0x125d68 - 0x125d90
void sub_00125D68_0x125d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125D68_0x125d68");
#endif

    ctx->pc = 0x125d68u;

    // 0x125d68: 0x8c820c00  lw          $v0, 0xC00($a0)
    ctx->pc = 0x125d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3072)));
    // 0x125d6c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x125D6Cu;
    {
        const bool branch_taken_0x125d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125d6c) {
            ctx->pc = 0x125D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125D6Cu;
            // 0x125d70: 0x8c420054  lw          $v0, 0x54($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125D80u;
            goto label_125d80;
        }
    }
    ctx->pc = 0x125D74u;
    // 0x125d74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x125d74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125d78: 0x3e00008  jr          $ra
    ctx->pc = 0x125D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125D80u;
label_125d80:
    // 0x125d80: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x125d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x125d84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x125d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x125d88: 0x3e00008  jr          $ra
    ctx->pc = 0x125D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D88u;
        // 0x125d8c: 0xc480004c  lwc1        $f0, 0x4C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125D90u;
}
