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

// Function: sub_00101A60
// Address: 0x101a60 - 0x101aa8
void sub_00101A60_0x101a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101A60_0x101a60");
#endif

    switch (ctx->pc) {
        case 0x101a8cu: goto label_101a8c;
        default: break;
    }

    ctx->pc = 0x101a60u;

    // 0x101a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x101a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x101a64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x101a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x101a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101a6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x101a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101a70: 0x8c8400ec  lw          $a0, 0xEC($a0)
    ctx->pc = 0x101a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x101a74: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x101a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x101a78: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x101a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101a7c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x101A7Cu;
    {
        const bool branch_taken_0x101a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101a7c) {
            ctx->pc = 0x101A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101A7Cu;
            // 0x101a80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101A94u;
            goto label_101a94;
        }
    }
    ctx->pc = 0x101A84u;
    // 0x101a84: 0xc0941a8  jal         func_2506A0
    ctx->pc = 0x101A84u;
    SET_GPR_U32(ctx, 31, 0x101A8Cu);
    ctx->pc = 0x2506A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2506A0u, 0x101A84u, 0x101A8Cu)) {
        return;
    }
    ctx->pc = 0x101A8Cu;
label_101a8c:
    // 0x101a8c: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x101a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x101a90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_101a94:
    // 0x101a94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x101a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x101A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A9Cu;
        // 0x101aa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101AA4u;
    // 0x101aa4: 0x0  nop
    ctx->pc = 0x101aa4u;
    // NOP
    ctx->pc = 0x101aa8u;
}
