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

// Function: sub_0017DCD0
// Address: 0x17dcd0 - 0x17dd18
void sub_0017DCD0_0x17dcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DCD0_0x17dcd0");
#endif

    switch (ctx->pc) {
        case 0x17dcecu: goto label_17dcec;
        case 0x17dcf8u: goto label_17dcf8;
        default: break;
    }

    ctx->pc = 0x17dcd0u;

    // 0x17dcd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17dcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17dcd4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17dcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17dcd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17dcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17dcdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17dcdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17dce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17dce4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x17DCE4u;
    SET_GPR_U32(ctx, 31, 0x17DCECu);
    ctx->pc = 0x17DCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DCE4u;
    // 0x17dce8: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x17DCE4u, 0x17DCECu)) {
        return;
    }
    ctx->pc = 0x17DCECu;
label_17dcec:
    // 0x17dcec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17dcecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dcf0: 0xc05f746  jal         func_17DD18
    ctx->pc = 0x17DCF0u;
    SET_GPR_U32(ctx, 31, 0x17DCF8u);
    ctx->pc = 0x17DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DCF0u;
    // 0x17dcf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DD18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17DD18u, 0x17DCF0u, 0x17DCF8u)) {
        return;
    }
    ctx->pc = 0x17DCF8u;
label_17dcf8:
    // 0x17dcf8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x17dcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17dcfc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17dcfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dd00: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x17dd00u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x17dd04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17dd04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dd08: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17dd08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x17DD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD0Cu;
        // 0x17dd10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DD14u;
    // 0x17dd14: 0x0  nop
    ctx->pc = 0x17dd14u;
    // NOP
    ctx->pc = 0x17dd18u;
}
