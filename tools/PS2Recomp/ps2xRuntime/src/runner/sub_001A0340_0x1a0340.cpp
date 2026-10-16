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

// Function: sub_001A0340
// Address: 0x1a0340 - 0x1a0368
void sub_001A0340_0x1a0340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0340_0x1a0340");
#endif

    switch (ctx->pc) {
        case 0x1a0358u: goto label_1a0358;
        default: break;
    }

    ctx->pc = 0x1a0340u;

    // 0x1a0340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0344: 0x24840870  addiu       $a0, $a0, 0x870
    ctx->pc = 0x1a0344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2160));
    // 0x1a0348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a034c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a034cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0350: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1A0350u;
    SET_GPR_U32(ctx, 31, 0x1A0358u);
    ctx->pc = 0x1A0354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0350u;
    // 0x1a0354: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1A0350u, 0x1A0358u)) {
        return;
    }
    ctx->pc = 0x1A0358u;
label_1a0358:
    // 0x1a0358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a035c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A035Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A035Cu;
        // 0x1a0360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A035Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0364u;
    // 0x1a0364: 0x0  nop
    ctx->pc = 0x1a0364u;
    // NOP
    ctx->pc = 0x1a0368u;
}
