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

// Function: sub_00323A58
// Address: 0x323a58 - 0x323aa8
void sub_00323A58_0x323a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323A58_0x323a58");
#endif

    switch (ctx->pc) {
        case 0x323a84u: goto label_323a84;
        default: break;
    }

    ctx->pc = 0x323a58u;

    // 0x323a58: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x323a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x323a5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323a60: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x323a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x323a64: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x323a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x323a6c: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x323a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x323a70: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x323a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323a74: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x323a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x323a78: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x323a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x323a7c: 0xc0c8b26  jal         func_322C98
    ctx->pc = 0x323A7Cu;
    SET_GPR_U32(ctx, 31, 0x323A84u);
    ctx->pc = 0x323A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323A7Cu;
    // 0x323a80: 0xffab0078  sd          $t3, 0x78($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x322C98u, 0x323A7Cu, 0x323A84u)) {
        return;
    }
    ctx->pc = 0x323A84u;
label_323a84:
    // 0x323a84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x323a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323a88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x323a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323a90: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x323a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x323a94: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x323a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x323a98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x323A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A9Cu;
        // 0x323aa0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323AA4u;
    // 0x323aa4: 0x0  nop
    ctx->pc = 0x323aa4u;
    // NOP
    ctx->pc = 0x323aa8u;
}
