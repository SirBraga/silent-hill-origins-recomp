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

// Function: sub_001833B0
// Address: 0x1833b0 - 0x1833f8
void sub_001833B0_0x1833b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001833B0_0x1833b0");
#endif

    switch (ctx->pc) {
        case 0x1833ccu: goto label_1833cc;
        case 0x1833d8u: goto label_1833d8;
        default: break;
    }

    ctx->pc = 0x1833b0u;

    // 0x1833b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1833b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1833b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1833b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1833b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1833b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1833bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1833bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1833c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1833c4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1833C4u;
    SET_GPR_U32(ctx, 31, 0x1833CCu);
    ctx->pc = 0x1833C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1833C4u;
    // 0x1833c8: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1833C4u, 0x1833CCu)) {
        return;
    }
    ctx->pc = 0x1833CCu;
label_1833cc:
    // 0x1833cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1833ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833d0: 0xc060cfe  jal         func_1833F8
    ctx->pc = 0x1833D0u;
    SET_GPR_U32(ctx, 31, 0x1833D8u);
    ctx->pc = 0x1833D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1833D0u;
    // 0x1833d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1833F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1833F8u, 0x1833D0u, 0x1833D8u)) {
        return;
    }
    ctx->pc = 0x1833D8u;
label_1833d8:
    // 0x1833d8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1833d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1833dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1833dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1833e0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1833e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x1833e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1833e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1833e8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1833e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1833ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1833F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1833ECu;
        // 0x1833f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1833ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1833F4u;
    // 0x1833f4: 0x0  nop
    ctx->pc = 0x1833f4u;
    // NOP
    ctx->pc = 0x1833f8u;
}
