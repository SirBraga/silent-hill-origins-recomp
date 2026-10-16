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

// Function: sub_0016CEC0
// Address: 0x16cec0 - 0x16cf08
void sub_0016CEC0_0x16cec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CEC0_0x16cec0");
#endif

    switch (ctx->pc) {
        case 0x16cedcu: goto label_16cedc;
        case 0x16cee8u: goto label_16cee8;
        default: break;
    }

    ctx->pc = 0x16cec0u;

    // 0x16cec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16cec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16cec4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16cec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16cec8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16cec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16cecc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16ceccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ced0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ced0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ced4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x16CED4u;
    SET_GPR_U32(ctx, 31, 0x16CEDCu);
    ctx->pc = 0x16CED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CED4u;
    // 0x16ced8: 0x240400dc  addiu       $a0, $zero, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x16CED4u, 0x16CEDCu)) {
        return;
    }
    ctx->pc = 0x16CEDCu;
label_16cedc:
    // 0x16cedc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16cedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cee0: 0xc05b3c2  jal         func_16CF08
    ctx->pc = 0x16CEE0u;
    SET_GPR_U32(ctx, 31, 0x16CEE8u);
    ctx->pc = 0x16CEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CEE0u;
    // 0x16cee4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CF08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16CF08u, 0x16CEE0u, 0x16CEE8u)) {
        return;
    }
    ctx->pc = 0x16CEE8u;
label_16cee8:
    // 0x16cee8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x16cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16ceec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16ceecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16cef0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x16cef0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x16cef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16cef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cef8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16cef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cefc: 0x3e00008  jr          $ra
    ctx->pc = 0x16CEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CEFCu;
        // 0x16cf00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CF04u;
    // 0x16cf04: 0x0  nop
    ctx->pc = 0x16cf04u;
    // NOP
    ctx->pc = 0x16cf08u;
}
