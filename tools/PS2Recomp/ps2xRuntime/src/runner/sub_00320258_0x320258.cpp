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

// Function: sub_00320258
// Address: 0x320258 - 0x320290
void sub_00320258_0x320258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320258_0x320258");
#endif

    switch (ctx->pc) {
        case 0x320270u: goto label_320270;
        default: break;
    }

    ctx->pc = 0x320258u;

    // 0x320258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x320258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32025c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32025cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x320260: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x320260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x320268: 0xc0c7f7c  jal         func_31FDF0
    ctx->pc = 0x320268u;
    SET_GPR_U32(ctx, 31, 0x320270u);
    ctx->pc = 0x32026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320268u;
    // 0x32026c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FDF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FDF0u, 0x320268u, 0x320270u)) {
        return;
    }
    ctx->pc = 0x320270u;
label_320270:
    // 0x320270: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x320270u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320274: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x320274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320278: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x320278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x32027c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32027cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320284: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x320284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x320288: 0x3e00008  jr          $ra
    ctx->pc = 0x320288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320288u;
        // 0x32028c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320290u;
}
