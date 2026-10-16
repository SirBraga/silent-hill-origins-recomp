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

// Function: sub_0013B3F8
// Address: 0x13b3f8 - 0x13b418
void sub_0013B3F8_0x13b3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B3F8_0x13b3f8");
#endif

    switch (ctx->pc) {
        case 0x13b40cu: goto label_13b40c;
        default: break;
    }

    ctx->pc = 0x13b3f8u;

    // 0x13b3f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13b3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13b3fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13b3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13b400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13b404: 0xc04ebf2  jal         func_13AFC8
    ctx->pc = 0x13B404u;
    SET_GPR_U32(ctx, 31, 0x13B40Cu);
    ctx->pc = 0x13B408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B404u;
    // 0x13b408: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AFC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13AFC8u, 0x13B404u, 0x13B40Cu)) {
        return;
    }
    ctx->pc = 0x13B40Cu;
label_13b40c:
    // 0x13b40c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b410: 0x3e00008  jr          $ra
    ctx->pc = 0x13B410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B410u;
        // 0x13b414: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B418u;
}
