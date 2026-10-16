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

// Function: sub_0016F3A0
// Address: 0x16f3a0 - 0x16f3e8
void sub_0016F3A0_0x16f3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F3A0_0x16f3a0");
#endif

    switch (ctx->pc) {
        case 0x16f3bcu: goto label_16f3bc;
        case 0x16f3c8u: goto label_16f3c8;
        default: break;
    }

    ctx->pc = 0x16f3a0u;

    // 0x16f3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16f3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16f3a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16f3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16f3a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16f3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16f3ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16f3acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f3b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f3b4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x16F3B4u;
    SET_GPR_U32(ctx, 31, 0x16F3BCu);
    ctx->pc = 0x16F3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F3B4u;
    // 0x16f3b8: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x16F3B4u, 0x16F3BCu)) {
        return;
    }
    ctx->pc = 0x16F3BCu;
label_16f3bc:
    // 0x16f3bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16f3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f3c0: 0xc05bcfa  jal         func_16F3E8
    ctx->pc = 0x16F3C0u;
    SET_GPR_U32(ctx, 31, 0x16F3C8u);
    ctx->pc = 0x16F3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F3C0u;
    // 0x16f3c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F3E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16F3E8u, 0x16F3C0u, 0x16F3C8u)) {
        return;
    }
    ctx->pc = 0x16F3C8u;
label_16f3c8:
    // 0x16f3c8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x16f3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16f3cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16f3ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f3d0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x16f3d0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x16f3d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f3d8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16f3d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x16F3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3DCu;
        // 0x16f3e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F3E4u;
    // 0x16f3e4: 0x0  nop
    ctx->pc = 0x16f3e4u;
    // NOP
    ctx->pc = 0x16f3e8u;
}
