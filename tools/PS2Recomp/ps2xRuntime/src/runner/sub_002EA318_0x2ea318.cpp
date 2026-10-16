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

// Function: sub_002EA318
// Address: 0x2ea318 - 0x2ea348
void sub_002EA318_0x2ea318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA318_0x2ea318");
#endif

    switch (ctx->pc) {
        case 0x2ea330u: goto label_2ea330;
        default: break;
    }

    ctx->pc = 0x2ea318u;

    // 0x2ea318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ea318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ea31c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ea31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ea320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ea320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ea324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ea324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea328: 0xc0ba674  jal         func_2E99D0
    ctx->pc = 0x2EA328u;
    SET_GPR_U32(ctx, 31, 0x2EA330u);
    ctx->pc = 0x2EA32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA328u;
    // 0x2ea32c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E99D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E99D0u, 0x2EA328u, 0x2EA330u)) {
        return;
    }
    ctx->pc = 0x2EA330u;
label_2ea330:
    // 0x2ea330: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ea330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ea334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea338: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ea338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea33c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA33Cu;
        // 0x2ea340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA344u;
    // 0x2ea344: 0x0  nop
    ctx->pc = 0x2ea344u;
    // NOP
    ctx->pc = 0x2ea348u;
}
