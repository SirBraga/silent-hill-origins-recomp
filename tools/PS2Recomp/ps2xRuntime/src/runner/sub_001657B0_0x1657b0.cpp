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

// Function: sub_001657B0
// Address: 0x1657b0 - 0x1657e0
void sub_001657B0_0x1657b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001657B0_0x1657b0");
#endif

    switch (ctx->pc) {
        case 0x1657ccu: goto label_1657cc;
        default: break;
    }

    ctx->pc = 0x1657b0u;

    // 0x1657b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1657b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1657b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1657b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1657b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1657bc: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x1657bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1657c0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1657c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1657c4: 0xc08063c  jal         func_2018F0
    ctx->pc = 0x1657C4u;
    SET_GPR_U32(ctx, 31, 0x1657CCu);
    ctx->pc = 0x1657C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657C4u;
    // 0x1657c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x1657C4u, 0x1657CCu)) {
        return;
    }
    ctx->pc = 0x1657CCu;
label_1657cc:
    // 0x1657cc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1657ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1657d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1657d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1657d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1657D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1657D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657D4u;
        // 0x1657d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1657D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1657DCu;
    // 0x1657dc: 0x0  nop
    ctx->pc = 0x1657dcu;
    // NOP
    ctx->pc = 0x1657e0u;
}
