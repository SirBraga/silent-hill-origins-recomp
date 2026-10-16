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

// Function: sub_00173960
// Address: 0x173960 - 0x173980
void sub_00173960_0x173960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173960_0x173960");
#endif

    switch (ctx->pc) {
        case 0x173974u: goto label_173974;
        default: break;
    }

    ctx->pc = 0x173960u;

    // 0x173960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173964: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x173964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17396c: 0xc05cdaa  jal         func_1736A8
    ctx->pc = 0x17396Cu;
    SET_GPR_U32(ctx, 31, 0x173974u);
    ctx->pc = 0x173970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17396Cu;
    // 0x173970: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1736A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1736A8u, 0x17396Cu, 0x173974u)) {
        return;
    }
    ctx->pc = 0x173974u;
label_173974:
    // 0x173974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173978: 0x3e00008  jr          $ra
    ctx->pc = 0x173978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173978u;
        // 0x17397c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173980u;
}
