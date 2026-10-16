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

// Function: sub_001BDCE8
// Address: 0x1bdce8 - 0x1bdd08
void sub_001BDCE8_0x1bdce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDCE8_0x1bdce8");
#endif

    switch (ctx->pc) {
        case 0x1bdcfcu: goto label_1bdcfc;
        default: break;
    }

    ctx->pc = 0x1bdce8u;

    // 0x1bdce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bdce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bdcec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bdcecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdcf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bdcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bdcf4: 0xc06bce2  jal         func_1AF388
    ctx->pc = 0x1BDCF4u;
    SET_GPR_U32(ctx, 31, 0x1BDCFCu);
    ctx->pc = 0x1BDCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDCF4u;
    // 0x1bdcf8: 0xac4002ac  sw          $zero, 0x2AC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 684), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF388u, 0x1BDCF4u, 0x1BDCFCu)) {
        return;
    }
    ctx->pc = 0x1BDCFCu;
label_1bdcfc:
    // 0x1bdcfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdcfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdd00: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD00u;
        // 0x1bdd04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDD00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDD08u;
}
