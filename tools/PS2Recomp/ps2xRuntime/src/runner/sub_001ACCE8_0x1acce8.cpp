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

// Function: sub_001ACCE8
// Address: 0x1acce8 - 0x1acd10
void sub_001ACCE8_0x1acce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACCE8_0x1acce8");
#endif

    switch (ctx->pc) {
        case 0x1acd04u: goto label_1acd04;
        default: break;
    }

    ctx->pc = 0x1acce8u;

    // 0x1acce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1acce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1accec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1accecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1accf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1accf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1accf4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1accf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1accf8: 0x2442b848  addiu       $v0, $v0, -0x47B8
    ctx->pc = 0x1accf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948936));
    // 0x1accfc: 0xc06b2a8  jal         func_1ACAA0
    ctx->pc = 0x1ACCFCu;
    SET_GPR_U32(ctx, 31, 0x1ACD04u);
    ctx->pc = 0x1ACD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACCFCu;
    // 0x1acd00: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ACAA0u, 0x1ACCFCu, 0x1ACD04u)) {
        return;
    }
    ctx->pc = 0x1ACD04u;
label_1acd04:
    // 0x1acd04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1acd04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1acd08: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD08u;
        // 0x1acd0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACD10u;
}
