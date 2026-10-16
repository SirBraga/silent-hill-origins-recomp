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

// Function: sub_0014A2F0
// Address: 0x14a2f0 - 0x14a338
void sub_0014A2F0_0x14a2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A2F0_0x14a2f0");
#endif

    switch (ctx->pc) {
        case 0x14a30cu: goto label_14a30c;
        case 0x14a318u: goto label_14a318;
        default: break;
    }

    ctx->pc = 0x14a2f0u;

    // 0x14a2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14a2f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14a2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a2f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14a2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14a2fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14a2fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a304: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x14A304u;
    SET_GPR_U32(ctx, 31, 0x14A30Cu);
    ctx->pc = 0x14A308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A304u;
    // 0x14a308: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x14A304u, 0x14A30Cu)) {
        return;
    }
    ctx->pc = 0x14A30Cu;
label_14a30c:
    // 0x14a30c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14a30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a310: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x14A310u;
    SET_GPR_U32(ctx, 31, 0x14A318u);
    ctx->pc = 0x14A314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A310u;
    // 0x14a314: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14A338u, 0x14A310u, 0x14A318u)) {
        return;
    }
    ctx->pc = 0x14A318u;
label_14a318:
    // 0x14a318: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x14a318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14a31c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14a31cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a320: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x14a320u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x14a324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a328: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14a328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a32c: 0x3e00008  jr          $ra
    ctx->pc = 0x14A32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A32Cu;
        // 0x14a330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A334u;
    // 0x14a334: 0x0  nop
    ctx->pc = 0x14a334u;
    // NOP
    ctx->pc = 0x14a338u;
}
