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

// Function: sub_00148EC8
// Address: 0x148ec8 - 0x148f10
void sub_00148EC8_0x148ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148EC8_0x148ec8");
#endif

    switch (ctx->pc) {
        case 0x148ee4u: goto label_148ee4;
        case 0x148ef0u: goto label_148ef0;
        default: break;
    }

    ctx->pc = 0x148ec8u;

    // 0x148ec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148ecc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x148eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x148ed0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x148ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x148ed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x148ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x148edc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x148EDCu;
    SET_GPR_U32(ctx, 31, 0x148EE4u);
    ctx->pc = 0x148EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148EDCu;
    // 0x148ee0: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x148EDCu, 0x148EE4u)) {
        return;
    }
    ctx->pc = 0x148EE4u;
label_148ee4:
    // 0x148ee4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x148ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ee8: 0xc0523c4  jal         func_148F10
    ctx->pc = 0x148EE8u;
    SET_GPR_U32(ctx, 31, 0x148EF0u);
    ctx->pc = 0x148EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148EE8u;
    // 0x148eec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x148F10u, 0x148EE8u, 0x148EF0u)) {
        return;
    }
    ctx->pc = 0x148EF0u;
label_148ef0:
    // 0x148ef0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x148ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x148ef4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x148ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148ef8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x148ef8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x148efc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148f00: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x148f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148f04: 0x3e00008  jr          $ra
    ctx->pc = 0x148F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F04u;
        // 0x148f08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148F0Cu;
    // 0x148f0c: 0x0  nop
    ctx->pc = 0x148f0cu;
    // NOP
    ctx->pc = 0x148f10u;
}
