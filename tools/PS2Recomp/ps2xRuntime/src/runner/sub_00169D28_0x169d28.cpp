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

// Function: sub_00169D28
// Address: 0x169d28 - 0x169d70
void sub_00169D28_0x169d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169D28_0x169d28");
#endif

    switch (ctx->pc) {
        case 0x169d44u: goto label_169d44;
        case 0x169d50u: goto label_169d50;
        default: break;
    }

    ctx->pc = 0x169d28u;

    // 0x169d28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169d2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x169d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169d30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x169d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x169d34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169d3c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x169D3Cu;
    SET_GPR_U32(ctx, 31, 0x169D44u);
    ctx->pc = 0x169D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D3Cu;
    // 0x169d40: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x169D3Cu, 0x169D44u)) {
        return;
    }
    ctx->pc = 0x169D44u;
label_169d44:
    // 0x169d44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x169d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d48: 0xc05a75c  jal         func_169D70
    ctx->pc = 0x169D48u;
    SET_GPR_U32(ctx, 31, 0x169D50u);
    ctx->pc = 0x169D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D48u;
    // 0x169d4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x169D70u, 0x169D48u, 0x169D50u)) {
        return;
    }
    ctx->pc = 0x169D50u;
label_169d50:
    // 0x169d50: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x169d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x169d54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x169d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169d58: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x169d58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x169d5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169d60: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x169d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d64: 0x3e00008  jr          $ra
    ctx->pc = 0x169D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D64u;
        // 0x169d68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169D6Cu;
    // 0x169d6c: 0x0  nop
    ctx->pc = 0x169d6cu;
    // NOP
    ctx->pc = 0x169d70u;
}
