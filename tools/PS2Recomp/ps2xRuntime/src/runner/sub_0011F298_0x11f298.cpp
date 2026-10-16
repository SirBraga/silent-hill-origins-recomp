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

// Function: sub_0011F298
// Address: 0x11f298 - 0x11f2e0
void sub_0011F298_0x11f298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F298_0x11f298");
#endif

    switch (ctx->pc) {
        case 0x11f2b4u: goto label_11f2b4;
        case 0x11f2c0u: goto label_11f2c0;
        default: break;
    }

    ctx->pc = 0x11f298u;

    // 0x11f298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11f298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11f29c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11f29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11f2a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11f2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11f2a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11f2a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f2a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11f2ac: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x11F2ACu;
    SET_GPR_U32(ctx, 31, 0x11F2B4u);
    ctx->pc = 0x11F2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F2ACu;
    // 0x11f2b0: 0x24042dc0  addiu       $a0, $zero, 0x2DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x11F2ACu, 0x11F2B4u)) {
        return;
    }
    ctx->pc = 0x11F2B4u;
label_11f2b4:
    // 0x11f2b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11f2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f2b8: 0xc047cb8  jal         func_11F2E0
    ctx->pc = 0x11F2B8u;
    SET_GPR_U32(ctx, 31, 0x11F2C0u);
    ctx->pc = 0x11F2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F2B8u;
    // 0x11f2bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F2E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11F2E0u, 0x11F2B8u, 0x11F2C0u)) {
        return;
    }
    ctx->pc = 0x11F2C0u;
label_11f2c0:
    // 0x11f2c0: 0x24430044  addiu       $v1, $v0, 0x44
    ctx->pc = 0x11f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x11f2c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11f2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f2c8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x11f2c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x11f2cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11f2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f2d0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11f2d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x11F2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2D4u;
        // 0x11f2d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F2DCu;
    // 0x11f2dc: 0x0  nop
    ctx->pc = 0x11f2dcu;
    // NOP
    ctx->pc = 0x11f2e0u;
}
