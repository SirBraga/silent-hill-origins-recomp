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

// Function: sub_0011F4A8
// Address: 0x11f4a8 - 0x11f4e8
void sub_0011F4A8_0x11f4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F4A8_0x11f4a8");
#endif

    switch (ctx->pc) {
        case 0x11f4bcu: goto label_11f4bc;
        case 0x11f4c8u: goto label_11f4c8;
        default: break;
    }

    ctx->pc = 0x11f4a8u;

    // 0x11f4a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11f4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11f4ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11f4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11f4b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11f4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11f4b4: 0xc04aecc  jal         func_12BB30
    ctx->pc = 0x11F4B4u;
    SET_GPR_U32(ctx, 31, 0x11F4BCu);
    ctx->pc = 0x11F4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F4B4u;
    // 0x11f4b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BB30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x12BB30u, 0x11F4B4u, 0x11F4BCu)) {
        return;
    }
    ctx->pc = 0x11F4BCu;
label_11f4bc:
    // 0x11f4bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4c0: 0xc047d96  jal         func_11F658
    ctx->pc = 0x11F4C0u;
    SET_GPR_U32(ctx, 31, 0x11F4C8u);
    ctx->pc = 0x11F4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F4C0u;
    // 0x11f4c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11F658u, 0x11F4C0u, 0x11F4C8u)) {
        return;
    }
    ctx->pc = 0x11F4C8u;
label_11f4c8:
    // 0x11f4c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11f4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f4cc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x11f4d0: 0xae022da8  sw          $v0, 0x2DA8($s0)
    ctx->pc = 0x11f4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11688), GPR_U32(ctx, 2));
    // 0x11f4d4: 0xae032da4  sw          $v1, 0x2DA4($s0)
    ctx->pc = 0x11f4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11684), GPR_U32(ctx, 3));
    // 0x11f4d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11f4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f4dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11f4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x11F4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4E0u;
        // 0x11f4e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F4E8u;
}
