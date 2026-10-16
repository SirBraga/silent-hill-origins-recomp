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

// Function: sub_002DE3A0
// Address: 0x2de3a0 - 0x2de3f0
void sub_002DE3A0_0x2de3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE3A0_0x2de3a0");
#endif

    switch (ctx->pc) {
        case 0x2de3c8u: goto label_2de3c8;
        case 0x2de3d0u: goto label_2de3d0;
        default: break;
    }

    ctx->pc = 0x2de3a0u;

    // 0x2de3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2de3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2de3a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2de3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2de3a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de3ac: 0x24b10020  addiu       $s1, $a1, 0x20
    ctx->pc = 0x2de3acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2de3b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2de3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2de3b4: 0x8cb00020  lw          $s0, 0x20($a1)
    ctx->pc = 0x2de3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2de3b8: 0x52110008  beql        $s0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DE3B8u;
    {
        const bool branch_taken_0x2de3b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x2de3b8) {
            ctx->pc = 0x2DE3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE3B8u;
            // 0x2de3bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE3DCu;
            goto label_2de3dc;
        }
    }
    ctx->pc = 0x2DE3C0u;
    // 0x2de3c0: 0x2604ffc0  addiu       $a0, $s0, -0x40
    ctx->pc = 0x2de3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x2de3c4: 0x0  nop
    ctx->pc = 0x2de3c4u;
    // NOP
label_2de3c8:
    // 0x2de3c8: 0xc0b77f2  jal         func_2DDFC8
    ctx->pc = 0x2DE3C8u;
    SET_GPR_U32(ctx, 31, 0x2DE3D0u);
    ctx->pc = 0x2DE3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE3C8u;
    // 0x2de3cc: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDFC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDFC8u, 0x2DE3C8u, 0x2DE3D0u)) {
        return;
    }
    ctx->pc = 0x2DE3D0u;
label_2de3d0:
    // 0x2de3d0: 0x1611fffd  bne         $s0, $s1, . + 4 + (-0x3 << 2)
    ctx->pc = 0x2DE3D0u;
    {
        const bool branch_taken_0x2de3d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x2DE3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3D0u;
        // 0x2de3d4: 0x2604ffc0  addiu       $a0, $s0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3d0) {
            ctx->pc = 0x2DE3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de3c8;
        }
    }
    ctx->pc = 0x2DE3D8u;
    // 0x2de3d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2de3d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2de3dc:
    // 0x2de3dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2de3dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de3e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2de3e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de3e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3E8u;
        // 0x2de3ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE3F0u;
}
