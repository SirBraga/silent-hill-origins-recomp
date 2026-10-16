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

// Function: sub_0029B550
// Address: 0x29b550 - 0x29b580
void sub_0029B550_0x29b550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B550_0x29b550");
#endif

    switch (ctx->pc) {
        case 0x29b568u: goto label_29b568;
        default: break;
    }

    ctx->pc = 0x29b550u;

    // 0x29b550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29b550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29b554: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29b554u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29b558: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x29b558u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x29b55c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29b560: 0xc0a738a  jal         func_29CE28
    ctx->pc = 0x29B560u;
    SET_GPR_U32(ctx, 31, 0x29B568u);
    ctx->pc = 0x29CE28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29CE28u, 0x29B560u, 0x29B568u)) {
        return;
    }
    ctx->pc = 0x29B568u;
label_29b568:
    // 0x29b568: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b56c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b570: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29b570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29b574: 0x3e00008  jr          $ra
    ctx->pc = 0x29B574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B574u;
        // 0x29b578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B57Cu;
    // 0x29b57c: 0x0  nop
    ctx->pc = 0x29b57cu;
    // NOP
    ctx->pc = 0x29b580u;
}
