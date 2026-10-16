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

// Function: sub_00206FC0
// Address: 0x206fc0 - 0x206fe8
void sub_00206FC0_0x206fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206FC0_0x206fc0");
#endif

    switch (ctx->pc) {
        case 0x206fd4u: goto label_206fd4;
        default: break;
    }

    ctx->pc = 0x206fc0u;

    // 0x206fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x206fc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x206fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x206fc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206fcc: 0xc0a0b6e  jal         func_282DB8
    ctx->pc = 0x206FCCu;
    SET_GPR_U32(ctx, 31, 0x206FD4u);
    ctx->pc = 0x206FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206FCCu;
    // 0x206fd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282DB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282DB8u, 0x206FCCu, 0x206FD4u)) {
        return;
    }
    ctx->pc = 0x206FD4u;
label_206fd4:
    // 0x206fd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x206fd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206fd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206fdc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x206fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x206FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FE0u;
        // 0x206fe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206FE8u;
}
