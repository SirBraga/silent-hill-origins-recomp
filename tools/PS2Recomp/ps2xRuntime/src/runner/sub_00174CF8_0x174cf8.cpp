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

// Function: sub_00174CF8
// Address: 0x174cf8 - 0x174d40
void sub_00174CF8_0x174cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174CF8_0x174cf8");
#endif

    switch (ctx->pc) {
        case 0x174d14u: goto label_174d14;
        case 0x174d20u: goto label_174d20;
        default: break;
    }

    ctx->pc = 0x174cf8u;

    // 0x174cf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174cfc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x174cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x174d00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x174d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x174d04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174d0c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x174D0Cu;
    SET_GPR_U32(ctx, 31, 0x174D14u);
    ctx->pc = 0x174D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D0Cu;
    // 0x174d10: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x174D0Cu, 0x174D14u)) {
        return;
    }
    ctx->pc = 0x174D14u;
label_174d14:
    // 0x174d14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x174d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d18: 0xc05d350  jal         func_174D40
    ctx->pc = 0x174D18u;
    SET_GPR_U32(ctx, 31, 0x174D20u);
    ctx->pc = 0x174D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D18u;
    // 0x174d1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174D40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x174D40u, 0x174D18u, 0x174D20u)) {
        return;
    }
    ctx->pc = 0x174D20u;
label_174d20:
    // 0x174d20: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x174d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x174d24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x174d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174d28: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x174d28u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x174d2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174d30: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x174d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d34: 0x3e00008  jr          $ra
    ctx->pc = 0x174D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D34u;
        // 0x174d38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174D3Cu;
    // 0x174d3c: 0x0  nop
    ctx->pc = 0x174d3cu;
    // NOP
    ctx->pc = 0x174d40u;
}
