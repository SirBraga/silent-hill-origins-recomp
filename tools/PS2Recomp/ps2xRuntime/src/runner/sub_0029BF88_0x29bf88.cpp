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

// Function: sub_0029BF88
// Address: 0x29bf88 - 0x29bfb0
void sub_0029BF88_0x29bf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BF88_0x29bf88");
#endif

    ctx->pc = 0x29bf88u;

    // 0x29bf88: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BF88u;
    {
        const bool branch_taken_0x29bf88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF88u;
        // 0x29bf8c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf88) {
            ctx->pc = 0x29BF9Cu;
            goto label_29bf9c;
        }
    }
    ctx->pc = 0x29BF90u;
    // 0x29bf90: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x29bf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x29bf94: 0x3e00008  jr          $ra
    ctx->pc = 0x29BF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF94u;
        // 0x29bf98: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BF9Cu;
label_29bf9c:
    // 0x29bf9c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x29bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x29bfa0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29bfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29bfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x29BFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFA4u;
        // 0x29bfa8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BFACu;
    // 0x29bfac: 0x0  nop
    ctx->pc = 0x29bfacu;
    // NOP
    ctx->pc = 0x29bfb0u;
}
