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

// Function: sub_0016F808
// Address: 0x16f808 - 0x16f850
void sub_0016F808_0x16f808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F808_0x16f808");
#endif

    switch (ctx->pc) {
        case 0x16f824u: goto label_16f824;
        case 0x16f830u: goto label_16f830;
        default: break;
    }

    ctx->pc = 0x16f808u;

    // 0x16f808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16f808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16f80c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16f80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16f810: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16f810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16f814: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16f814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f81c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x16F81Cu;
    SET_GPR_U32(ctx, 31, 0x16F824u);
    ctx->pc = 0x16F820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F81Cu;
    // 0x16f820: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x16F81Cu, 0x16F824u)) {
        return;
    }
    ctx->pc = 0x16F824u;
label_16f824:
    // 0x16f824: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16f824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f828: 0xc05be14  jal         func_16F850
    ctx->pc = 0x16F828u;
    SET_GPR_U32(ctx, 31, 0x16F830u);
    ctx->pc = 0x16F82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F828u;
    // 0x16f82c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16F850u, 0x16F828u, 0x16F830u)) {
        return;
    }
    ctx->pc = 0x16F830u;
label_16f830:
    // 0x16f830: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x16f830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16f834: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16f834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f838: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x16f838u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x16f83c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f840: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16f840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f844: 0x3e00008  jr          $ra
    ctx->pc = 0x16F844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F844u;
        // 0x16f848: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F84Cu;
    // 0x16f84c: 0x0  nop
    ctx->pc = 0x16f84cu;
    // NOP
    ctx->pc = 0x16f850u;
}
