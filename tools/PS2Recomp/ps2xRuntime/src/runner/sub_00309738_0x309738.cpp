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

// Function: sub_00309738
// Address: 0x309738 - 0x309770
void sub_00309738_0x309738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309738_0x309738");
#endif

    switch (ctx->pc) {
        case 0x30974cu: goto label_30974c;
        case 0x309758u: goto label_309758;
        default: break;
    }

    ctx->pc = 0x309738u;

    // 0x309738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x309738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30973c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30973cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x309740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x309740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x309744: 0xc0c2608  jal         func_309820
    ctx->pc = 0x309744u;
    SET_GPR_U32(ctx, 31, 0x30974Cu);
    ctx->pc = 0x309748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309744u;
    // 0x309748: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309820u, 0x309744u, 0x30974Cu)) {
        return;
    }
    ctx->pc = 0x30974Cu;
label_30974c:
    // 0x30974c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30974cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309750: 0xc0ab568  jal         func_2AD5A0
    ctx->pc = 0x309750u;
    SET_GPR_U32(ctx, 31, 0x309758u);
    ctx->pc = 0x309754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309750u;
    // 0x309754: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD5A0u, 0x309750u, 0x309758u)) {
        return;
    }
    ctx->pc = 0x309758u;
label_309758:
    // 0x309758: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x309758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30975c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30975cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x309760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309764: 0x3e00008  jr          $ra
    ctx->pc = 0x309764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309764u;
        // 0x309768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30976Cu;
    // 0x30976c: 0x0  nop
    ctx->pc = 0x30976cu;
    // NOP
    ctx->pc = 0x309770u;
}
