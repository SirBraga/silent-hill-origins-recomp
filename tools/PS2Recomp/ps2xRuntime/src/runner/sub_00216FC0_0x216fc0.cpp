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

// Function: sub_00216FC0
// Address: 0x216fc0 - 0x216ff0
void sub_00216FC0_0x216fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216FC0_0x216fc0");
#endif

    switch (ctx->pc) {
        case 0x216fe0u: goto label_216fe0;
        default: break;
    }

    ctx->pc = 0x216fc0u;

    // 0x216fc0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x216fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216fc4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216fc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216fc8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x216fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216fcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216fd0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x216fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216fd4: 0x24470048  addiu       $a3, $v0, 0x48
    ctx->pc = 0x216fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x216fd8: 0xc085e42  jal         func_217908
    ctx->pc = 0x216FD8u;
    SET_GPR_U32(ctx, 31, 0x216FE0u);
    ctx->pc = 0x216FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216FD8u;
    // 0x216fdc: 0x24460044  addiu       $a2, $v0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x217908u, 0x216FD8u, 0x216FE0u)) {
        return;
    }
    ctx->pc = 0x216FE0u;
label_216fe0:
    // 0x216fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x216FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FE4u;
        // 0x216fe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216FECu;
    // 0x216fec: 0x0  nop
    ctx->pc = 0x216fecu;
    // NOP
    ctx->pc = 0x216ff0u;
}
