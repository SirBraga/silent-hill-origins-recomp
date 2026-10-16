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

// Function: sub_0010EF20
// Address: 0x10ef20 - 0x10ef68
void sub_0010EF20_0x10ef20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EF20_0x10ef20");
#endif

    switch (ctx->pc) {
        case 0x10ef3cu: goto label_10ef3c;
        case 0x10ef48u: goto label_10ef48;
        default: break;
    }

    ctx->pc = 0x10ef20u;

    // 0x10ef20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ef20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ef24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10ef24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10ef28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10ef28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10ef2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ef2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ef30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ef34: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x10EF34u;
    SET_GPR_U32(ctx, 31, 0x10EF3Cu);
    ctx->pc = 0x10EF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF34u;
    // 0x10ef38: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x10EF34u, 0x10EF3Cu)) {
        return;
    }
    ctx->pc = 0x10EF3Cu;
label_10ef3c:
    // 0x10ef3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10ef3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef40: 0xc043bde  jal         func_10EF78
    ctx->pc = 0x10EF40u;
    SET_GPR_U32(ctx, 31, 0x10EF48u);
    ctx->pc = 0x10EF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF40u;
    // 0x10ef44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EF78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10EF78u, 0x10EF40u, 0x10EF48u)) {
        return;
    }
    ctx->pc = 0x10EF48u;
label_10ef48:
    // 0x10ef48: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x10ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x10ef4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10ef4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ef50: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x10ef50u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x10ef54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ef54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ef58: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10ef58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef5c: 0x3e00008  jr          $ra
    ctx->pc = 0x10EF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF5Cu;
        // 0x10ef60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EF64u;
    // 0x10ef64: 0x0  nop
    ctx->pc = 0x10ef64u;
    // NOP
    ctx->pc = 0x10ef68u;
}
