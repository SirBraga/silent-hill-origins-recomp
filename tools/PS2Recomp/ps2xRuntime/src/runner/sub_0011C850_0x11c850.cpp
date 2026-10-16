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

// Function: sub_0011C850
// Address: 0x11c850 - 0x11c898
void sub_0011C850_0x11c850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C850_0x11c850");
#endif

    switch (ctx->pc) {
        case 0x11c86cu: goto label_11c86c;
        case 0x11c878u: goto label_11c878;
        default: break;
    }

    ctx->pc = 0x11c850u;

    // 0x11c850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11c850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11c854: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11c854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11c858: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11c858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11c85c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c864: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x11C864u;
    SET_GPR_U32(ctx, 31, 0x11C86Cu);
    ctx->pc = 0x11C868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C864u;
    // 0x11c868: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x11C864u, 0x11C86Cu)) {
        return;
    }
    ctx->pc = 0x11C86Cu;
label_11c86c:
    // 0x11c86c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11c86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c870: 0xc047228  jal         func_11C8A0
    ctx->pc = 0x11C870u;
    SET_GPR_U32(ctx, 31, 0x11C878u);
    ctx->pc = 0x11C874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C870u;
    // 0x11c874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C8A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11C8A0u, 0x11C870u, 0x11C878u)) {
        return;
    }
    ctx->pc = 0x11C878u;
label_11c878:
    // 0x11c878: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x11c878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x11c87c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11c87cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c880: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x11c880u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x11c884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c888: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11c888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c88c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C88Cu;
        // 0x11c890: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C894u;
    // 0x11c894: 0x0  nop
    ctx->pc = 0x11c894u;
    // NOP
    ctx->pc = 0x11c898u;
}
