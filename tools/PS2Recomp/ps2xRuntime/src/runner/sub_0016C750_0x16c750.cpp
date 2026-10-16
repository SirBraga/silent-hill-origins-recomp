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

// Function: sub_0016C750
// Address: 0x16c750 - 0x16c798
void sub_0016C750_0x16c750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C750_0x16c750");
#endif

    switch (ctx->pc) {
        case 0x16c76cu: goto label_16c76c;
        case 0x16c778u: goto label_16c778;
        default: break;
    }

    ctx->pc = 0x16c750u;

    // 0x16c750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c754: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16c754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c758: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16c758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16c75c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16c75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c760: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c764: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x16C764u;
    SET_GPR_U32(ctx, 31, 0x16C76Cu);
    ctx->pc = 0x16C768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C764u;
    // 0x16c768: 0x24040110  addiu       $a0, $zero, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x16C764u, 0x16C76Cu)) {
        return;
    }
    ctx->pc = 0x16C76Cu;
label_16c76c:
    // 0x16c76c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16c76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c770: 0xc05b1e8  jal         func_16C7A0
    ctx->pc = 0x16C770u;
    SET_GPR_U32(ctx, 31, 0x16C778u);
    ctx->pc = 0x16C774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C770u;
    // 0x16c774: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C7A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16C7A0u, 0x16C770u, 0x16C778u)) {
        return;
    }
    ctx->pc = 0x16C778u;
label_16c778:
    // 0x16c778: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x16c778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16c77c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16c77cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c780: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x16c780u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x16c784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c788: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16c788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c78c: 0x3e00008  jr          $ra
    ctx->pc = 0x16C78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C78Cu;
        // 0x16c790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C794u;
    // 0x16c794: 0x0  nop
    ctx->pc = 0x16c794u;
    // NOP
    ctx->pc = 0x16c798u;
}
