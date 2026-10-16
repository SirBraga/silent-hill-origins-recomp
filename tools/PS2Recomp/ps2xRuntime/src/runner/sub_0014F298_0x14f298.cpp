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

// Function: sub_0014F298
// Address: 0x14f298 - 0x14f2b8
void sub_0014F298_0x14f298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F298_0x14f298");
#endif

    switch (ctx->pc) {
        case 0x14f2acu: goto label_14f2ac;
        default: break;
    }

    ctx->pc = 0x14f298u;

    // 0x14f298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14f298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14f29c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14f29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f2a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14f2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14f2a4: 0xc053b68  jal         func_14EDA0
    ctx->pc = 0x14F2A4u;
    SET_GPR_U32(ctx, 31, 0x14F2ACu);
    ctx->pc = 0x14F2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2A4u;
    // 0x14f2a8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EDA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14EDA0u, 0x14F2A4u, 0x14F2ACu)) {
        return;
    }
    ctx->pc = 0x14F2ACu;
label_14f2ac:
    // 0x14f2ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14f2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x14F2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2B0u;
        // 0x14f2b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F2B8u;
}
