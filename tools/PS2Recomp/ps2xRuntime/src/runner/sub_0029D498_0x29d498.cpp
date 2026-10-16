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

// Function: sub_0029D498
// Address: 0x29d498 - 0x29d4d0
void sub_0029D498_0x29d498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D498_0x29d498");
#endif

    ctx->pc = 0x29d498u;

    // 0x29d498: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x29d498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29d49c: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D49Cu;
    {
        const bool branch_taken_0x29d49c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d49c) {
            ctx->pc = 0x29D4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D49Cu;
            // 0x29d4a0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D4ACu;
            goto label_29d4ac;
        }
    }
    ctx->pc = 0x29D4A4u;
    // 0x29d4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x29D4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4A4u;
        // 0x29d4a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D4ACu;
label_29d4ac:
    // 0x29d4ac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x29d4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x29d4b0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x29D4B0u;
    {
        const bool branch_taken_0x29d4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d4b0) {
            ctx->pc = 0x29D4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D4B0u;
            // 0x29d4b4: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D4BCu;
            goto label_29d4bc;
        }
    }
    ctx->pc = 0x29D4B8u;
    // 0x29d4b8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x29d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_29d4bc:
    // 0x29d4bc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x29d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x29d4c0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x29d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29d4c4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x29d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29d4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x29D4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4C8u;
        // 0x29d4cc: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D4D0u;
}
