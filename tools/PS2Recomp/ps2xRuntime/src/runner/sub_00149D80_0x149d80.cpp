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

// Function: sub_00149D80
// Address: 0x149d80 - 0x149da0
void sub_00149D80_0x149d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149D80_0x149d80");
#endif

    switch (ctx->pc) {
        case 0x149d94u: goto label_149d94;
        default: break;
    }

    ctx->pc = 0x149d80u;

    // 0x149d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x149d84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x149d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149d88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149d8c: 0xc0526d2  jal         func_149B48
    ctx->pc = 0x149D8Cu;
    SET_GPR_U32(ctx, 31, 0x149D94u);
    ctx->pc = 0x149D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149D8Cu;
    // 0x149d90: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x149B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x149B48u, 0x149D8Cu, 0x149D94u)) {
        return;
    }
    ctx->pc = 0x149D94u;
label_149d94:
    // 0x149d94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149d98: 0x3e00008  jr          $ra
    ctx->pc = 0x149D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D98u;
        // 0x149d9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149DA0u;
}
