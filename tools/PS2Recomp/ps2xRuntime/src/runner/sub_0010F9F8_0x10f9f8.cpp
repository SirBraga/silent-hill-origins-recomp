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

// Function: sub_0010F9F8
// Address: 0x10f9f8 - 0x10fa40
void sub_0010F9F8_0x10f9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F9F8_0x10f9f8");
#endif

    switch (ctx->pc) {
        case 0x10fa14u: goto label_10fa14;
        case 0x10fa20u: goto label_10fa20;
        default: break;
    }

    ctx->pc = 0x10f9f8u;

    // 0x10f9f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10f9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10f9fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10f9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10fa00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10fa00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10fa04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10fa04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10fa0c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x10FA0Cu;
    SET_GPR_U32(ctx, 31, 0x10FA14u);
    ctx->pc = 0x10FA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FA0Cu;
    // 0x10fa10: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x10FA0Cu, 0x10FA14u)) {
        return;
    }
    ctx->pc = 0x10FA14u;
label_10fa14:
    // 0x10fa14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10fa14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa18: 0xc043ea2  jal         func_10FA88
    ctx->pc = 0x10FA18u;
    SET_GPR_U32(ctx, 31, 0x10FA20u);
    ctx->pc = 0x10FA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FA18u;
    // 0x10fa1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10FA88u, 0x10FA18u, 0x10FA20u)) {
        return;
    }
    ctx->pc = 0x10FA20u;
label_10fa20:
    // 0x10fa20: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x10fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x10fa24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10fa24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fa28: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x10fa28u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x10fa2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fa2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fa30: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10fa30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa34: 0x3e00008  jr          $ra
    ctx->pc = 0x10FA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA34u;
        // 0x10fa38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FA3Cu;
    // 0x10fa3c: 0x0  nop
    ctx->pc = 0x10fa3cu;
    // NOP
    ctx->pc = 0x10fa40u;
}
