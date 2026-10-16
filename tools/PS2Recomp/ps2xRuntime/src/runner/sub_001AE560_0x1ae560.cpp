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

// Function: sub_001AE560
// Address: 0x1ae560 - 0x1ae580
void sub_001AE560_0x1ae560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE560_0x1ae560");
#endif

    switch (ctx->pc) {
        case 0x1ae574u: goto label_1ae574;
        default: break;
    }

    ctx->pc = 0x1ae560u;

    // 0x1ae560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ae560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ae564: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ae564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae56c: 0xc06b7f2  jal         func_1ADFC8
    ctx->pc = 0x1AE56Cu;
    SET_GPR_U32(ctx, 31, 0x1AE574u);
    ctx->pc = 0x1AE570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE56Cu;
    // 0x1ae570: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADFC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ADFC8u, 0x1AE56Cu, 0x1AE574u)) {
        return;
    }
    ctx->pc = 0x1AE574u;
label_1ae574:
    // 0x1ae574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae578: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE578u;
        // 0x1ae57c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE580u;
}
