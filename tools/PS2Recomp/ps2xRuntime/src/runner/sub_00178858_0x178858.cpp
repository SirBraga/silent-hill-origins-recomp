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

// Function: sub_00178858
// Address: 0x178858 - 0x1788a0
void sub_00178858_0x178858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178858_0x178858");
#endif

    switch (ctx->pc) {
        case 0x178874u: goto label_178874;
        case 0x178880u: goto label_178880;
        default: break;
    }

    ctx->pc = 0x178858u;

    // 0x178858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17885c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17885cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178860: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x178860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x178864: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17886c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x17886Cu;
    SET_GPR_U32(ctx, 31, 0x178874u);
    ctx->pc = 0x178870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17886Cu;
    // 0x178870: 0x240400cc  addiu       $a0, $zero, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x17886Cu, 0x178874u)) {
        return;
    }
    ctx->pc = 0x178874u;
label_178874:
    // 0x178874: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178878: 0xc05df84  jal         func_177E10
    ctx->pc = 0x178878u;
    SET_GPR_U32(ctx, 31, 0x178880u);
    ctx->pc = 0x17887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178878u;
    // 0x17887c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x177E10u, 0x178878u, 0x178880u)) {
        return;
    }
    ctx->pc = 0x178880u;
label_178880:
    // 0x178880: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x178880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x178884: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x178884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178888: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x178888u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x17888c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17888cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178890: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x178890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178894: 0x3e00008  jr          $ra
    ctx->pc = 0x178894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178894u;
        // 0x178898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17889Cu;
    // 0x17889c: 0x0  nop
    ctx->pc = 0x17889cu;
    // NOP
    ctx->pc = 0x1788a0u;
}
