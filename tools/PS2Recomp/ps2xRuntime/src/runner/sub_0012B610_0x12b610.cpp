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

// Function: sub_0012B610
// Address: 0x12b610 - 0x12b630
void sub_0012B610_0x12b610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B610_0x12b610");
#endif

    switch (ctx->pc) {
        case 0x12b624u: goto label_12b624;
        default: break;
    }

    ctx->pc = 0x12b610u;

    // 0x12b610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12b610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b614: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12b614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b61c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x12B61Cu;
    SET_GPR_U32(ctx, 31, 0x12B624u);
    ctx->pc = 0x12B620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B61Cu;
    // 0x12b620: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x12B61Cu, 0x12B624u)) {
        return;
    }
    ctx->pc = 0x12B624u;
label_12b624:
    // 0x12b624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b628: 0x3e00008  jr          $ra
    ctx->pc = 0x12B628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B628u;
        // 0x12b62c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B630u;
}
