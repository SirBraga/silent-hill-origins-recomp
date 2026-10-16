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

// Function: sub_00264FD8
// Address: 0x264fd8 - 0x265008
void sub_00264FD8_0x264fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264FD8_0x264fd8");
#endif

    switch (ctx->pc) {
        case 0x264ff0u: goto label_264ff0;
        default: break;
    }

    ctx->pc = 0x264fd8u;

    // 0x264fd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x264fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x264fdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x264fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x264fe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x264fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x264fe8: 0xc09945a  jal         func_265168
    ctx->pc = 0x264FE8u;
    SET_GPR_U32(ctx, 31, 0x264FF0u);
    ctx->pc = 0x264FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264FE8u;
    // 0x264fec: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265168u, 0x264FE8u, 0x264FF0u)) {
        return;
    }
    ctx->pc = 0x264FF0u;
label_264ff0:
    // 0x264ff0: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x264ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x264ff4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x264ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264ff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x264ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264ffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265000: 0x3e00008  jr          $ra
    ctx->pc = 0x265000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265000u;
        // 0x265004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265008u;
}
