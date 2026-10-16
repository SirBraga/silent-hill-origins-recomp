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

// Function: sub_00150270
// Address: 0x150270 - 0x150298
void sub_00150270_0x150270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150270_0x150270");
#endif

    switch (ctx->pc) {
        case 0x150288u: goto label_150288;
        default: break;
    }

    ctx->pc = 0x150270u;

    // 0x150270: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x150270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150274: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150278: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x150278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15027c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15027cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150280: 0xc053c20  jal         func_14F080
    ctx->pc = 0x150280u;
    SET_GPR_U32(ctx, 31, 0x150288u);
    ctx->pc = 0x150284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150280u;
    // 0x150284: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14F080u, 0x150280u, 0x150288u)) {
        return;
    }
    ctx->pc = 0x150288u;
label_150288:
    // 0x150288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15028c: 0x3e00008  jr          $ra
    ctx->pc = 0x15028Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15028Cu;
        // 0x150290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15028Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150294u;
    // 0x150294: 0x0  nop
    ctx->pc = 0x150294u;
    // NOP
    ctx->pc = 0x150298u;
}
