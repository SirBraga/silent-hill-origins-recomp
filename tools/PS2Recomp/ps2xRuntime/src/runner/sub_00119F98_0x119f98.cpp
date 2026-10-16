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

// Function: sub_00119F98
// Address: 0x119f98 - 0x119fb8
void sub_00119F98_0x119f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119F98_0x119f98");
#endif

    switch (ctx->pc) {
        case 0x119facu: goto label_119fac;
        default: break;
    }

    ctx->pc = 0x119f98u;

    // 0x119f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x119f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x119f9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x119f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119fa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x119fa4: 0xc04674c  jal         func_119D30
    ctx->pc = 0x119FA4u;
    SET_GPR_U32(ctx, 31, 0x119FACu);
    ctx->pc = 0x119FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119FA4u;
    // 0x119fa8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x119D30u, 0x119FA4u, 0x119FACu)) {
        return;
    }
    ctx->pc = 0x119FACu;
label_119fac:
    // 0x119fac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x119FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FB0u;
        // 0x119fb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119FB8u;
}
