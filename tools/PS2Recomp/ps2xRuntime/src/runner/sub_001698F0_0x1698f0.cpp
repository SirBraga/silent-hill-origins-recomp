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

// Function: sub_001698F0
// Address: 0x1698f0 - 0x169938
void sub_001698F0_0x1698f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001698F0_0x1698f0");
#endif

    switch (ctx->pc) {
        case 0x16990cu: goto label_16990c;
        case 0x169918u: goto label_169918;
        default: break;
    }

    ctx->pc = 0x1698f0u;

    // 0x1698f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1698f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1698f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1698f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1698f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1698f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1698fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1698fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169904: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x169904u;
    SET_GPR_U32(ctx, 31, 0x16990Cu);
    ctx->pc = 0x169908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169904u;
    // 0x169908: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x169904u, 0x16990Cu)) {
        return;
    }
    ctx->pc = 0x16990Cu;
label_16990c:
    // 0x16990c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16990cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169910: 0xc05a650  jal         func_169940
    ctx->pc = 0x169910u;
    SET_GPR_U32(ctx, 31, 0x169918u);
    ctx->pc = 0x169914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169910u;
    // 0x169914: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169940u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x169940u, 0x169910u, 0x169918u)) {
        return;
    }
    ctx->pc = 0x169918u;
label_169918:
    // 0x169918: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x169918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16991c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16991cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169920: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x169920u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x169924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169928: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x169928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16992c: 0x3e00008  jr          $ra
    ctx->pc = 0x16992Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16992Cu;
        // 0x169930: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16992Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169934u;
    // 0x169934: 0x0  nop
    ctx->pc = 0x169934u;
    // NOP
    ctx->pc = 0x169938u;
}
