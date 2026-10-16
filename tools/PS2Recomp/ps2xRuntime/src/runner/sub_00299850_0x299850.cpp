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

// Function: sub_00299850
// Address: 0x299850 - 0x299888
void sub_00299850_0x299850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299850_0x299850");
#endif

    switch (ctx->pc) {
        case 0x299870u: goto label_299870;
        case 0x299878u: goto label_299878;
        default: break;
    }

    ctx->pc = 0x299850u;

    // 0x299850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x299850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x299854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x299858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29985c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29985cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299860: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x299860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x299864: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x299864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299868: 0xc0a7bd0  jal         func_29EF40
    ctx->pc = 0x299868u;
    SET_GPR_U32(ctx, 31, 0x299870u);
    ctx->pc = 0x29986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299868u;
    // 0x29986c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EF40u, 0x299868u, 0x299870u)) {
        return;
    }
    ctx->pc = 0x299870u;
label_299870:
    // 0x299870: 0xc0a65b6  jal         func_2996D8
    ctx->pc = 0x299870u;
    SET_GPR_U32(ctx, 31, 0x299878u);
    ctx->pc = 0x299874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299870u;
    // 0x299874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2996D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2996D8u, 0x299870u, 0x299878u)) {
        return;
    }
    ctx->pc = 0x299878u;
label_299878:
    // 0x299878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29987c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29987cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299880: 0x3e00008  jr          $ra
    ctx->pc = 0x299880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299880u;
        // 0x299884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299888u;
}
