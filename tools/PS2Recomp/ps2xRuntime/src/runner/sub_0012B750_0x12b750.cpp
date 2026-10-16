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

// Function: sub_0012B750
// Address: 0x12b750 - 0x12b780
void sub_0012B750_0x12b750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B750_0x12b750");
#endif

    switch (ctx->pc) {
        case 0x12b764u: goto label_12b764;
        default: break;
    }

    ctx->pc = 0x12b750u;

    // 0x12b750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b754: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12b754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12b758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b75c: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x12B75Cu;
    SET_GPR_U32(ctx, 31, 0x12B764u);
    ctx->pc = 0x12B760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B75Cu;
    // 0x12b760: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x12B75Cu, 0x12B764u)) {
        return;
    }
    ctx->pc = 0x12B764u;
label_12b764:
    // 0x12b764: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x12b764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x12b768: 0x260228cc  addiu       $v0, $s0, 0x28CC
    ctx->pc = 0x12b768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 10444));
    // 0x12b76c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b770: 0xae0328f0  sw          $v1, 0x28F0($s0)
    ctx->pc = 0x12b770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10480), GPR_U32(ctx, 3));
    // 0x12b774: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12b774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b778: 0x3e00008  jr          $ra
    ctx->pc = 0x12B778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B778u;
        // 0x12b77c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B780u;
}
