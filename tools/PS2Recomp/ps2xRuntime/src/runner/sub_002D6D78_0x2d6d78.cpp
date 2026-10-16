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

// Function: sub_002D6D78
// Address: 0x2d6d78 - 0x2d6dc0
void sub_002D6D78_0x2d6d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6D78_0x2d6d78");
#endif

    switch (ctx->pc) {
        case 0x2d6d94u: goto label_2d6d94;
        default: break;
    }

    ctx->pc = 0x2d6d78u;

    // 0x2d6d78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d6d7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d6d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d6d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d6d84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d6d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d88: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2d6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d6d8c: 0xc0ab826  jal         func_2AE098
    ctx->pc = 0x2D6D8Cu;
    SET_GPR_U32(ctx, 31, 0x2D6D94u);
    ctx->pc = 0x2D6D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6D8Cu;
    // 0x2d6d90: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE098u, 0x2D6D8Cu, 0x2D6D94u)) {
        return;
    }
    ctx->pc = 0x2D6D94u;
label_2d6d94:
    // 0x2d6d94: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d6d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6d98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d6d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d9c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2d6d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d6da0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2d6da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2d6da4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d6da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6da8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d6da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d6dac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6db0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2d6db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2d6db4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x2d6db4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x2d6db8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6DB8u;
        // 0x2d6dbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6DC0u;
}
