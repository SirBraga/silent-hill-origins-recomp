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

// Function: sub_00162B48
// Address: 0x162b48 - 0x162b90
void sub_00162B48_0x162b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162B48_0x162b48");
#endif

    switch (ctx->pc) {
        case 0x162b64u: goto label_162b64;
        case 0x162b70u: goto label_162b70;
        default: break;
    }

    ctx->pc = 0x162b48u;

    // 0x162b48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162b4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x162b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162b50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x162b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x162b54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x162b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162b5c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x162B5Cu;
    SET_GPR_U32(ctx, 31, 0x162B64u);
    ctx->pc = 0x162B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162B5Cu;
    // 0x162b60: 0x24041dac  addiu       $a0, $zero, 0x1DAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7596));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x162B5Cu, 0x162B64u)) {
        return;
    }
    ctx->pc = 0x162B64u;
label_162b64:
    // 0x162b64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x162b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b68: 0xc05894c  jal         func_162530
    ctx->pc = 0x162B68u;
    SET_GPR_U32(ctx, 31, 0x162B70u);
    ctx->pc = 0x162B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162B68u;
    // 0x162b6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x162530u, 0x162B68u, 0x162B70u)) {
        return;
    }
    ctx->pc = 0x162B70u;
label_162b70:
    // 0x162b70: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x162b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x162b74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x162b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162b78: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x162b78u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x162b7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162b80: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x162b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b84: 0x3e00008  jr          $ra
    ctx->pc = 0x162B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B84u;
        // 0x162b88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162B8Cu;
    // 0x162b8c: 0x0  nop
    ctx->pc = 0x162b8cu;
    // NOP
    ctx->pc = 0x162b90u;
}
