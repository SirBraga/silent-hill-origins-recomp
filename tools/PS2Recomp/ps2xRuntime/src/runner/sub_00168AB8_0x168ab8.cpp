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

// Function: sub_00168AB8
// Address: 0x168ab8 - 0x168ad8
void sub_00168AB8_0x168ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168AB8_0x168ab8");
#endif

    switch (ctx->pc) {
        case 0x168accu: goto label_168acc;
        default: break;
    }

    ctx->pc = 0x168ab8u;

    // 0x168ab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168abc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x168abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168ac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168ac4: 0xc05a182  jal         func_168608
    ctx->pc = 0x168AC4u;
    SET_GPR_U32(ctx, 31, 0x168ACCu);
    ctx->pc = 0x168AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168AC4u;
    // 0x168ac8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x168608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x168608u, 0x168AC4u, 0x168ACCu)) {
        return;
    }
    ctx->pc = 0x168ACCu;
label_168acc:
    // 0x168acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x168AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168AD0u;
        // 0x168ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168AD8u;
}
