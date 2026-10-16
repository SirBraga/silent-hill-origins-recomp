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

// Function: sub_0011B848
// Address: 0x11b848 - 0x11b890
void sub_0011B848_0x11b848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B848_0x11b848");
#endif

    switch (ctx->pc) {
        case 0x11b864u: goto label_11b864;
        case 0x11b870u: goto label_11b870;
        default: break;
    }

    ctx->pc = 0x11b848u;

    // 0x11b848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11b84c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11b84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b850: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11b850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11b854: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b85c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x11B85Cu;
    SET_GPR_U32(ctx, 31, 0x11B864u);
    ctx->pc = 0x11B860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B85Cu;
    // 0x11b860: 0x24040098  addiu       $a0, $zero, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x11B85Cu, 0x11B864u)) {
        return;
    }
    ctx->pc = 0x11B864u;
label_11b864:
    // 0x11b864: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b868: 0xc046e3a  jal         func_11B8E8
    ctx->pc = 0x11B868u;
    SET_GPR_U32(ctx, 31, 0x11B870u);
    ctx->pc = 0x11B86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B868u;
    // 0x11b86c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B8E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11B8E8u, 0x11B868u, 0x11B870u)) {
        return;
    }
    ctx->pc = 0x11B870u;
label_11b870:
    // 0x11b870: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x11b870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x11b874: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11b874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b878: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x11b878u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x11b87c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b880: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11b880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b884: 0x3e00008  jr          $ra
    ctx->pc = 0x11B884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B884u;
        // 0x11b888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B88Cu;
    // 0x11b88c: 0x0  nop
    ctx->pc = 0x11b88cu;
    // NOP
    ctx->pc = 0x11b890u;
}
