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

// Function: sub_001D6858
// Address: 0x1d6858 - 0x1d68a0
void sub_001D6858_0x1d6858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6858_0x1d6858");
#endif

    switch (ctx->pc) {
        case 0x1d6874u: goto label_1d6874;
        case 0x1d6880u: goto label_1d6880;
        default: break;
    }

    ctx->pc = 0x1d6858u;

    // 0x1d6858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d685c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d685cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d6860: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d6860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d6864: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d686c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1D686Cu;
    SET_GPR_U32(ctx, 31, 0x1D6874u);
    ctx->pc = 0x1D6870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D686Cu;
    // 0x1d6870: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1D686Cu, 0x1D6874u)) {
        return;
    }
    ctx->pc = 0x1D6874u;
label_1d6874:
    // 0x1d6874: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d6874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6878: 0xc075a2a  jal         func_1D68A8
    ctx->pc = 0x1D6878u;
    SET_GPR_U32(ctx, 31, 0x1D6880u);
    ctx->pc = 0x1D687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6878u;
    // 0x1d687c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D68A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D68A8u, 0x1D6878u, 0x1D6880u)) {
        return;
    }
    ctx->pc = 0x1D6880u;
label_1d6880:
    // 0x1d6880: 0x24430044  addiu       $v1, $v0, 0x44
    ctx->pc = 0x1d6880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x1d6884: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d6884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6888: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1d6888u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x1d688c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d688cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6890: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1d6890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6894: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6894u;
        // 0x1d6898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D689Cu;
    // 0x1d689c: 0x0  nop
    ctx->pc = 0x1d689cu;
    // NOP
    ctx->pc = 0x1d68a0u;
}
