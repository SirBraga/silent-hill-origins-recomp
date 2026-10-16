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

// Function: sub_00250638
// Address: 0x250638 - 0x250668
void sub_00250638_0x250638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250638_0x250638");
#endif

    switch (ctx->pc) {
        case 0x250654u: goto label_250654;
        default: break;
    }

    ctx->pc = 0x250638u;

    // 0x250638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25063c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25063cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x250640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x250644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x250644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250648: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x250648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25064c: 0xc093e90  jal         func_24FA40
    ctx->pc = 0x25064Cu;
    SET_GPR_U32(ctx, 31, 0x250654u);
    ctx->pc = 0x250650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25064Cu;
    // 0x250650: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FA40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24FA40u, 0x25064Cu, 0x250654u)) {
        return;
    }
    ctx->pc = 0x250654u;
label_250654:
    // 0x250654: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x250654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25065c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25065cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250660: 0x3e00008  jr          $ra
    ctx->pc = 0x250660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250660u;
        // 0x250664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250668u;
}
