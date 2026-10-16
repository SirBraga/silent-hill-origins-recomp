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

// Function: sub_002E0460
// Address: 0x2e0460 - 0x2e04f8
void sub_002E0460_0x2e0460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0460_0x2e0460");
#endif

    switch (ctx->pc) {
        case 0x2e0484u: goto label_2e0484;
        case 0x2e0498u: goto label_2e0498;
        case 0x2e04b0u: goto label_2e04b0;
        case 0x2e04d0u: goto label_2e04d0;
        case 0x2e04d8u: goto label_2e04d8;
        default: break;
    }

    ctx->pc = 0x2e0460u;

    // 0x2e0460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0464: 0x8f848c10  lw          $a0, -0x73F0($gp)
    ctx->pc = 0x2e0464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937616)));
    // 0x2e0468: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e0468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e046c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e046cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e0470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0474: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e0474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0478: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e0478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e047c: 0xc0b673c  jal         func_2D9CF0
    ctx->pc = 0x2E047Cu;
    SET_GPR_U32(ctx, 31, 0x2E0484u);
    ctx->pc = 0x2E0480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E047Cu;
    // 0x2e0480: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9CF0u, 0x2E047Cu, 0x2E0484u)) {
        return;
    }
    ctx->pc = 0x2E0484u;
label_2e0484:
    // 0x2e0484: 0x8f828c14  lw          $v0, -0x73EC($gp)
    ctx->pc = 0x2e0484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937620)));
    // 0x2e0488: 0x5840000e  blezl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E0488u;
    {
        const bool branch_taken_0x2e0488 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2e0488) {
            ctx->pc = 0x2E048Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0488u;
            // 0x2e048c: 0x8f908c10  lw          $s0, -0x73F0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E04C4u;
            goto label_2e04c4;
        }
    }
    ctx->pc = 0x2E0490u;
    // 0x2e0490: 0x8f839038  lw          $v1, -0x6FC8($gp)
    ctx->pc = 0x2e0490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938680)));
    // 0x2e0494: 0x0  nop
    ctx->pc = 0x2e0494u;
    // NOP
label_2e0498:
    // 0x2e0498: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2e0498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2e049c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e049cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e04a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e04a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e04a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e04a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e04a8: 0xc0b66b4  jal         func_2D9AD0
    ctx->pc = 0x2E04A8u;
    SET_GPR_U32(ctx, 31, 0x2E04B0u);
    ctx->pc = 0x2E04ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E04A8u;
    // 0x2e04ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9AD0u, 0x2E04A8u, 0x2E04B0u)) {
        return;
    }
    ctx->pc = 0x2E04B0u;
label_2e04b0:
    // 0x2e04b0: 0x8f828c14  lw          $v0, -0x73EC($gp)
    ctx->pc = 0x2e04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937620)));
    // 0x2e04b4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2e04b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e04b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E04B8u;
    {
        const bool branch_taken_0x2e04b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E04B8u;
        // 0x2e04bc: 0x8f839038  lw          $v1, -0x6FC8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e04b8) {
            ctx->pc = 0x2E0498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0498;
        }
    }
    ctx->pc = 0x2E04C0u;
    // 0x2e04c0: 0x8f908c10  lw          $s0, -0x73F0($gp)
    ctx->pc = 0x2e04c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937616)));
label_2e04c4:
    // 0x2e04c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e04c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e04c8: 0xc0b66b4  jal         func_2D9AD0
    ctx->pc = 0x2E04C8u;
    SET_GPR_U32(ctx, 31, 0x2E04D0u);
    ctx->pc = 0x2E04CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E04C8u;
    // 0x2e04cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9AD0u, 0x2E04C8u, 0x2E04D0u)) {
        return;
    }
    ctx->pc = 0x2E04D0u;
label_2e04d0:
    // 0x2e04d0: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2E04D0u;
    SET_GPR_U32(ctx, 31, 0x2E04D8u);
    ctx->pc = 0x2E04D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E04D0u;
    // 0x2e04d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2E04D0u, 0x2E04D8u)) {
        return;
    }
    ctx->pc = 0x2E04D8u;
label_2e04d8:
    // 0x2e04d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e04d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e04dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e04dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e04e0: 0xaf808c0c  sw          $zero, -0x73F4($gp)
    ctx->pc = 0x2e04e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937612), GPR_U32(ctx, 0));
    // 0x2e04e4: 0xaf808c14  sw          $zero, -0x73EC($gp)
    ctx->pc = 0x2e04e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937620), GPR_U32(ctx, 0));
    // 0x2e04e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E04E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E04ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E04E8u;
        // 0x2e04ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E04E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E04F0u;
    // 0x2e04f0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e04f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e04f4: 0x0  nop
    ctx->pc = 0x2e04f4u;
    // NOP
    ctx->pc = 0x2e04f8u;
}
