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

// Function: sub_00137D30
// Address: 0x137d30 - 0x137d50
void sub_00137D30_0x137d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137D30_0x137d30");
#endif

    switch (ctx->pc) {
        case 0x137d44u: goto label_137d44;
        default: break;
    }

    ctx->pc = 0x137d30u;

    // 0x137d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x137d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x137d34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x137d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137d38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137d3c: 0xc04da82  jal         func_136A08
    ctx->pc = 0x137D3Cu;
    SET_GPR_U32(ctx, 31, 0x137D44u);
    ctx->pc = 0x137D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137D3Cu;
    // 0x137d40: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x136A08u, 0x137D3Cu, 0x137D44u)) {
        return;
    }
    ctx->pc = 0x137D44u;
label_137d44:
    // 0x137d44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137d48: 0x3e00008  jr          $ra
    ctx->pc = 0x137D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D48u;
        // 0x137d4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137D50u;
}
