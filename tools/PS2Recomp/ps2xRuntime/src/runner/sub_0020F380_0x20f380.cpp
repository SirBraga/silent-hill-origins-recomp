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

// Function: sub_0020F380
// Address: 0x20f380 - 0x20f3e8
void sub_0020F380_0x20f380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F380_0x20f380");
#endif

    switch (ctx->pc) {
        case 0x20f3a0u: goto label_20f3a0;
        case 0x20f3a8u: goto label_20f3a8;
        case 0x20f3c8u: goto label_20f3c8;
        case 0x20f3d4u: goto label_20f3d4;
        default: break;
    }

    ctx->pc = 0x20f380u;

    // 0x20f380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20f380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20f384: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20f384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x20f388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20f388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20f38c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x20f38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20f390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20f394: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20f394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f398: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20f398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f39c: 0x0  nop
    ctx->pc = 0x20f39cu;
    // NOP
label_20f3a0:
    // 0x20f3a0: 0xc083b4c  jal         func_20ED30
    ctx->pc = 0x20F3A0u;
    SET_GPR_U32(ctx, 31, 0x20F3A8u);
    ctx->pc = 0x20F3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F3A0u;
    // 0x20f3a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20ED30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20ED30u, 0x20F3A0u, 0x20F3A8u)) {
        return;
    }
    ctx->pc = 0x20F3A8u;
label_20f3a8:
    // 0x20f3a8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x20f3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x20f3ac: 0x0  nop
    ctx->pc = 0x20f3acu;
    // NOP
    // 0x20f3b0: 0x601fffb  bgez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x20F3B0u;
    {
        const bool branch_taken_0x20f3b0 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x20F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3B0u;
        // 0x20f3b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3b0) {
            ctx->pc = 0x20F3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f3a0;
        }
    }
    ctx->pc = 0x20F3B8u;
    // 0x20f3b8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x20f3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20f3bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f3c0: 0xc083d02  jal         func_20F408
    ctx->pc = 0x20F3C0u;
    SET_GPR_U32(ctx, 31, 0x20F3C8u);
    ctx->pc = 0x20F3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F3C0u;
    // 0x20f3c4: 0x24060068  addiu       $a2, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F408u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20F408u, 0x20F3C0u, 0x20F3C8u)) {
        return;
    }
    ctx->pc = 0x20F3C8u;
label_20f3c8:
    // 0x20f3c8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x20f3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x20f3cc: 0xc083d2c  jal         func_20F4B0
    ctx->pc = 0x20F3CCu;
    SET_GPR_U32(ctx, 31, 0x20F3D4u);
    ctx->pc = 0x20F3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F3CCu;
    // 0x20f3d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F4B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20F4B0u, 0x20F3CCu, 0x20F3D4u)) {
        return;
    }
    ctx->pc = 0x20F3D4u;
label_20f3d4:
    // 0x20f3d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20f3d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f3d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20f3d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f3dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x20F3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3E0u;
        // 0x20f3e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F3E8u;
}
