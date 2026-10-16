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

// Function: sub_001AC118
// Address: 0x1ac118 - 0x1ac150
void sub_001AC118_0x1ac118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC118_0x1ac118");
#endif

    switch (ctx->pc) {
        case 0x1ac138u: goto label_1ac138;
        default: break;
    }

    ctx->pc = 0x1ac118u;

    // 0x1ac118: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ac118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ac11c: 0x24a71074  addiu       $a3, $a1, 0x1074
    ctx->pc = 0x1ac11cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4212));
    // 0x1ac120: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ac120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ac124: 0x24a81070  addiu       $t0, $a1, 0x1070
    ctx->pc = 0x1ac124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4208));
    // 0x1ac128: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac12c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ac12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ac130: 0xc06b082  jal         func_1AC208
    ctx->pc = 0x1AC130u;
    SET_GPR_U32(ctx, 31, 0x1AC138u);
    ctx->pc = 0x1AC134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC130u;
    // 0x1ac134: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC208u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AC208u, 0x1AC130u, 0x1AC138u)) {
        return;
    }
    ctx->pc = 0x1AC138u;
label_1ac138:
    // 0x1ac138: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ac138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac13c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ac13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac140: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ac140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac144: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC144u;
        // 0x1ac148: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC14Cu;
    // 0x1ac14c: 0x0  nop
    ctx->pc = 0x1ac14cu;
    // NOP
    ctx->pc = 0x1ac150u;
}
