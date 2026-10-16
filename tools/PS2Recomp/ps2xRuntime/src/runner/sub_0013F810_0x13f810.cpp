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

// Function: sub_0013F810
// Address: 0x13f810 - 0x13f858
void sub_0013F810_0x13f810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F810_0x13f810");
#endif

    switch (ctx->pc) {
        case 0x13f82cu: goto label_13f82c;
        case 0x13f838u: goto label_13f838;
        default: break;
    }

    ctx->pc = 0x13f810u;

    // 0x13f810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13f814: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13f814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13f818: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13f818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13f81c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13f81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f824: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x13F824u;
    SET_GPR_U32(ctx, 31, 0x13F82Cu);
    ctx->pc = 0x13F828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F824u;
    // 0x13f828: 0x24040310  addiu       $a0, $zero, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x13F824u, 0x13F82Cu)) {
        return;
    }
    ctx->pc = 0x13F82Cu;
label_13f82c:
    // 0x13f82c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13f82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f830: 0xc04fe1e  jal         func_13F878
    ctx->pc = 0x13F830u;
    SET_GPR_U32(ctx, 31, 0x13F838u);
    ctx->pc = 0x13F834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F830u;
    // 0x13f834: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13F878u, 0x13F830u, 0x13F838u)) {
        return;
    }
    ctx->pc = 0x13F838u;
label_13f838:
    // 0x13f838: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x13f838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13f83c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13f83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f840: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x13f840u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x13f844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f848: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13f848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f84c: 0x3e00008  jr          $ra
    ctx->pc = 0x13F84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F84Cu;
        // 0x13f850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F854u;
    // 0x13f854: 0x0  nop
    ctx->pc = 0x13f854u;
    // NOP
    ctx->pc = 0x13f858u;
}
