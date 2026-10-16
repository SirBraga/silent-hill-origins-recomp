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

// Function: sub_00172498
// Address: 0x172498 - 0x1724e0
void sub_00172498_0x172498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172498_0x172498");
#endif

    switch (ctx->pc) {
        case 0x1724b4u: goto label_1724b4;
        case 0x1724c0u: goto label_1724c0;
        default: break;
    }

    ctx->pc = 0x172498u;

    // 0x172498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x172498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17249c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17249cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1724a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1724a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1724a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1724a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1724a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1724a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1724ac: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1724ACu;
    SET_GPR_U32(ctx, 31, 0x1724B4u);
    ctx->pc = 0x1724B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1724ACu;
    // 0x1724b0: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1724ACu, 0x1724B4u)) {
        return;
    }
    ctx->pc = 0x1724B4u;
label_1724b4:
    // 0x1724b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1724b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1724b8: 0xc05c938  jal         func_1724E0
    ctx->pc = 0x1724B8u;
    SET_GPR_U32(ctx, 31, 0x1724C0u);
    ctx->pc = 0x1724BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1724B8u;
    // 0x1724bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1724E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1724E0u, 0x1724B8u, 0x1724C0u)) {
        return;
    }
    ctx->pc = 0x1724C0u;
label_1724c0:
    // 0x1724c0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1724c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1724c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1724c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1724c8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1724c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x1724cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1724ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1724d0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1724d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1724d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1724D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1724D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724D4u;
        // 0x1724d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1724D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1724DCu;
    // 0x1724dc: 0x0  nop
    ctx->pc = 0x1724dcu;
    // NOP
    ctx->pc = 0x1724e0u;
}
