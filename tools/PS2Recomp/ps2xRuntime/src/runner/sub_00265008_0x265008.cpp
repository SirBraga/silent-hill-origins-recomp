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

// Function: sub_00265008
// Address: 0x265008 - 0x265038
void sub_00265008_0x265008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265008_0x265008");
#endif

    switch (ctx->pc) {
        case 0x265020u: goto label_265020;
        default: break;
    }

    ctx->pc = 0x265008u;

    // 0x265008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x265008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26500c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26500cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x265010: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x265010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265018: 0xc09945a  jal         func_265168
    ctx->pc = 0x265018u;
    SET_GPR_U32(ctx, 31, 0x265020u);
    ctx->pc = 0x26501Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265018u;
    // 0x26501c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265168u, 0x265018u, 0x265020u)) {
        return;
    }
    ctx->pc = 0x265020u;
label_265020:
    // 0x265020: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x265020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x265024: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x265024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26502c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26502cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265030: 0x3e00008  jr          $ra
    ctx->pc = 0x265030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265030u;
        // 0x265034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265038u;
}
