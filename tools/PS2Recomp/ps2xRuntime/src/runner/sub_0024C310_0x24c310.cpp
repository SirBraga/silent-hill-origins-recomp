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

// Function: sub_0024C310
// Address: 0x24c310 - 0x24c338
void sub_0024C310_0x24c310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C310_0x24c310");
#endif

    switch (ctx->pc) {
        case 0x24c328u: goto label_24c328;
        default: break;
    }

    ctx->pc = 0x24c310u;

    // 0x24c310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24c310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24c314: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x24c314u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24c318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24c31c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24c31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c320: 0xc093054  jal         func_24C150
    ctx->pc = 0x24C320u;
    SET_GPR_U32(ctx, 31, 0x24C328u);
    ctx->pc = 0x24C324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C320u;
    // 0x24c324: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C150u, 0x24C320u, 0x24C328u)) {
        return;
    }
    ctx->pc = 0x24C328u;
label_24c328:
    // 0x24c328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24c328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c32c: 0x3e00008  jr          $ra
    ctx->pc = 0x24C32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C32Cu;
        // 0x24c330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C334u;
    // 0x24c334: 0x0  nop
    ctx->pc = 0x24c334u;
    // NOP
    ctx->pc = 0x24c338u;
}
