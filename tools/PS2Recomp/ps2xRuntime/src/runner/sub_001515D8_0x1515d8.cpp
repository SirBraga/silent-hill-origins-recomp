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

// Function: sub_001515D8
// Address: 0x1515d8 - 0x1515f8
void sub_001515D8_0x1515d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001515D8_0x1515d8");
#endif

    switch (ctx->pc) {
        case 0x1515ecu: goto label_1515ec;
        default: break;
    }

    ctx->pc = 0x1515d8u;

    // 0x1515d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1515d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1515dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1515dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1515e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1515e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1515e4: 0xc05449a  jal         func_151268
    ctx->pc = 0x1515E4u;
    SET_GPR_U32(ctx, 31, 0x1515ECu);
    ctx->pc = 0x1515E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1515E4u;
    // 0x1515e8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x151268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x151268u, 0x1515E4u, 0x1515ECu)) {
        return;
    }
    ctx->pc = 0x1515ECu;
label_1515ec:
    // 0x1515ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1515ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1515f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1515F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1515F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515F0u;
        // 0x1515f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1515F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1515F8u;
}
