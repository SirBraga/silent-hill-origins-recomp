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

// Function: sub_001CF3B0
// Address: 0x1cf3b0 - 0x1cf440
void sub_001CF3B0_0x1cf3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF3B0_0x1cf3b0");
#endif

    switch (ctx->pc) {
        case 0x1cf3c4u: goto label_1cf3c4;
        case 0x1cf3d8u: goto label_1cf3d8;
        case 0x1cf3e0u: goto label_1cf3e0;
        case 0x1cf42cu: goto label_1cf42c;
        default: break;
    }

    ctx->pc = 0x1cf3b0u;

    // 0x1cf3b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf3b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cf3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cf3b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf3bc: 0xc06bbe0  jal         func_1AEF80
    ctx->pc = 0x1CF3BCu;
    SET_GPR_U32(ctx, 31, 0x1CF3C4u);
    ctx->pc = 0x1CF3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF3BCu;
    // 0x1cf3c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1CF3BCu, 0x1CF3C4u)) {
        return;
    }
    ctx->pc = 0x1CF3C4u;
label_1cf3c4:
    // 0x1cf3c4: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1cf3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1cf3c8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF3C8u;
    {
        const bool branch_taken_0x1cf3c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3C8u;
        // 0x1cf3cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3c8) {
            ctx->pc = 0x1CF3E0u;
            goto label_1cf3e0;
        }
    }
    ctx->pc = 0x1CF3D0u;
    // 0x1cf3d0: 0xc06db7c  jal         func_1B6DF0
    ctx->pc = 0x1CF3D0u;
    SET_GPR_U32(ctx, 31, 0x1CF3D8u);
    ctx->pc = 0x1B6DF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6DF0u, 0x1CF3D0u, 0x1CF3D8u)) {
        return;
    }
    ctx->pc = 0x1CF3D8u;
label_1cf3d8:
    // 0x1cf3d8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cf3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cf3dc: 0x0  nop
    ctx->pc = 0x1cf3dcu;
    // NOP
label_1cf3e0:
    // 0x1cf3e0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cf3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cf3e4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cf3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cf3e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cf3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cf3ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cf3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cf3f0: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1cf3f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1cf3f4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CF3F4u;
    {
        const bool branch_taken_0x1cf3f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3F4u;
        // 0x1cf3f8: 0xac4001d0  sw          $zero, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3f4) {
            ctx->pc = 0x1CF3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf3e0;
        }
    }
    ctx->pc = 0x1CF3FCu;
    // 0x1cf3fc: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1cf3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cf400: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1cf400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1cf404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf408: 0xac6000f4  sw          $zero, 0xF4($v1)
    ctx->pc = 0x1cf408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 0));
    // 0x1cf40c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cf40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cf410: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1cf410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1cf414: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1cf414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cf418: 0xac6001d0  sw          $zero, 0x1D0($v1)
    ctx->pc = 0x1cf418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 0));
    // 0x1cf41c: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x1cf41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x1cf420: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x1cf420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x1cf424: 0xc073dc4  jal         func_1CF710
    ctx->pc = 0x1CF424u;
    SET_GPR_U32(ctx, 31, 0x1CF42Cu);
    ctx->pc = 0x1CF428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF424u;
    // 0x1cf428: 0xae05028c  sw          $a1, 0x28C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CF710u, 0x1CF424u, 0x1CF42Cu)) {
        return;
    }
    ctx->pc = 0x1CF42Cu;
label_1cf42c:
    // 0x1cf42c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cf42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf434: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF434u;
        // 0x1cf438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF43Cu;
    // 0x1cf43c: 0x0  nop
    ctx->pc = 0x1cf43cu;
    // NOP
    ctx->pc = 0x1cf440u;
}
