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

// Function: sub_0027F3A0
// Address: 0x27f3a0 - 0x27f3e0
void sub_0027F3A0_0x27f3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F3A0_0x27f3a0");
#endif

    switch (ctx->pc) {
        case 0x27f3b8u: goto label_27f3b8;
        case 0x27f3c8u: goto label_27f3c8;
        default: break;
    }

    ctx->pc = 0x27f3a0u;

    // 0x27f3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27f3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27f3a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27f3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27f3a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27f3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27f3ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27f3acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3b0: 0xc09f90a  jal         func_27E428
    ctx->pc = 0x27F3B0u;
    SET_GPR_U32(ctx, 31, 0x27F3B8u);
    ctx->pc = 0x27F3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F3B0u;
    // 0x27f3b4: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27E428u, 0x27F3B0u, 0x27F3B8u)) {
        return;
    }
    ctx->pc = 0x27F3B8u;
label_27f3b8:
    // 0x27f3b8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F3B8u;
    {
        const bool branch_taken_0x27f3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f3b8) {
            ctx->pc = 0x27F3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F3B8u;
            // 0x27f3bc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F3CCu;
            goto label_27f3cc;
        }
    }
    ctx->pc = 0x27F3C0u;
    // 0x27f3c0: 0xc09fc2a  jal         func_27F0A8
    ctx->pc = 0x27F3C0u;
    SET_GPR_U32(ctx, 31, 0x27F3C8u);
    ctx->pc = 0x27F3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F3C0u;
    // 0x27f3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27F0A8u, 0x27F3C0u, 0x27F3C8u)) {
        return;
    }
    ctx->pc = 0x27F3C8u;
label_27f3c8:
    // 0x27f3c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27f3c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27f3cc:
    // 0x27f3cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f3d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27f3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x27F3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F3D4u;
        // 0x27f3d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F3DCu;
    // 0x27f3dc: 0x0  nop
    ctx->pc = 0x27f3dcu;
    // NOP
    ctx->pc = 0x27f3e0u;
}
