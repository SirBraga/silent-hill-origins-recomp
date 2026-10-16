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

// Function: sub_00141948
// Address: 0x141948 - 0x141968
void sub_00141948_0x141948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141948_0x141948");
#endif

    switch (ctx->pc) {
        case 0x14195cu: goto label_14195c;
        default: break;
    }

    ctx->pc = 0x141948u;

    // 0x141948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14194c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14194cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141950: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141954: 0xc0505b4  jal         func_1416D0
    ctx->pc = 0x141954u;
    SET_GPR_U32(ctx, 31, 0x14195Cu);
    ctx->pc = 0x141958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141954u;
    // 0x141958: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1416D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1416D0u, 0x141954u, 0x14195Cu)) {
        return;
    }
    ctx->pc = 0x14195Cu;
label_14195c:
    // 0x14195c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14195cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141960: 0x3e00008  jr          $ra
    ctx->pc = 0x141960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141960u;
        // 0x141964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141968u;
}
