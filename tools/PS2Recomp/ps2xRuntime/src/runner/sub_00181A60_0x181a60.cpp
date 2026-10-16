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

// Function: sub_00181A60
// Address: 0x181a60 - 0x181aa8
void sub_00181A60_0x181a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181A60_0x181a60");
#endif

    switch (ctx->pc) {
        case 0x181a84u: goto label_181a84;
        case 0x181a98u: goto label_181a98;
        default: break;
    }

    ctx->pc = 0x181a60u;

    // 0x181a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181a64: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x181a64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x181a68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x181a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x181a6c: 0x24060f81  addiu       $a2, $zero, 0xF81
    ctx->pc = 0x181a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3969));
    // 0x181a70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x181a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181a78: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x181a78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a7c: 0xc0be22c  jal         func_2F88B0
    ctx->pc = 0x181A7Cu;
    SET_GPR_U32(ctx, 31, 0x181A84u);
    ctx->pc = 0x181A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181A7Cu;
    // 0x181a80: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F88B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F88B0u, 0x181A7Cu, 0x181A84u)) {
        return;
    }
    ctx->pc = 0x181A84u;
label_181a84:
    // 0x181a84: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x181a84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x181a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181a8c: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x181a8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x181a90: 0xc0be22c  jal         func_2F88B0
    ctx->pc = 0x181A90u;
    SET_GPR_U32(ctx, 31, 0x181A98u);
    ctx->pc = 0x181A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181A90u;
    // 0x181a94: 0x24061081  addiu       $a2, $zero, 0x1081 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4225));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F88B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F88B0u, 0x181A90u, 0x181A98u)) {
        return;
    }
    ctx->pc = 0x181A98u;
label_181a98:
    // 0x181a98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x181a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x181AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181AA0u;
        // 0x181aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181AA8u;
}
