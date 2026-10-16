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

// Function: sub_0010B368
// Address: 0x10b368 - 0x10b3b0
void sub_0010B368_0x10b368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B368_0x10b368");
#endif

    switch (ctx->pc) {
        case 0x10b384u: goto label_10b384;
        case 0x10b390u: goto label_10b390;
        default: break;
    }

    ctx->pc = 0x10b368u;

    // 0x10b368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b36c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10b36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b370: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10b370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10b374: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b37c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x10B37Cu;
    SET_GPR_U32(ctx, 31, 0x10B384u);
    ctx->pc = 0x10B380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B37Cu;
    // 0x10b380: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x10B37Cu, 0x10B384u)) {
        return;
    }
    ctx->pc = 0x10B384u;
label_10b384:
    // 0x10b384: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b388: 0xc042cec  jal         func_10B3B0
    ctx->pc = 0x10B388u;
    SET_GPR_U32(ctx, 31, 0x10B390u);
    ctx->pc = 0x10B38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B388u;
    // 0x10b38c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B3B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10B3B0u, 0x10B388u, 0x10B390u)) {
        return;
    }
    ctx->pc = 0x10B390u;
label_10b390:
    // 0x10b390: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x10b390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x10b394: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10b394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b398: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x10b398u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x10b39c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b3a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10b3a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x10B3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3A4u;
        // 0x10b3a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B3ACu;
    // 0x10b3ac: 0x0  nop
    ctx->pc = 0x10b3acu;
    // NOP
    ctx->pc = 0x10b3b0u;
}
