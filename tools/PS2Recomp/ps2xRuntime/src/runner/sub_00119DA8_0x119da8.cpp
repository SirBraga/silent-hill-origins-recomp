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

// Function: sub_00119DA8
// Address: 0x119da8 - 0x119df0
void sub_00119DA8_0x119da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119DA8_0x119da8");
#endif

    switch (ctx->pc) {
        case 0x119dc4u: goto label_119dc4;
        case 0x119dd0u: goto label_119dd0;
        default: break;
    }

    ctx->pc = 0x119da8u;

    // 0x119da8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119dac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x119dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x119db0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x119db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x119db4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x119db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119db8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x119dbc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x119DBCu;
    SET_GPR_U32(ctx, 31, 0x119DC4u);
    ctx->pc = 0x119DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119DBCu;
    // 0x119dc0: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x119DBCu, 0x119DC4u)) {
        return;
    }
    ctx->pc = 0x119DC4u;
label_119dc4:
    // 0x119dc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x119dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119dc8: 0xc04677c  jal         func_119DF0
    ctx->pc = 0x119DC8u;
    SET_GPR_U32(ctx, 31, 0x119DD0u);
    ctx->pc = 0x119DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119DC8u;
    // 0x119dcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119DF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x119DF0u, 0x119DC8u, 0x119DD0u)) {
        return;
    }
    ctx->pc = 0x119DD0u;
label_119dd0:
    // 0x119dd0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x119dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x119dd4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x119dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119dd8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x119dd8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x119ddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119de0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x119de0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119de4: 0x3e00008  jr          $ra
    ctx->pc = 0x119DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119DE4u;
        // 0x119de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119DECu;
    // 0x119dec: 0x0  nop
    ctx->pc = 0x119decu;
    // NOP
    ctx->pc = 0x119df0u;
}
