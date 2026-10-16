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

// Function: sub_00281160
// Address: 0x281160 - 0x2811c8
void sub_00281160_0x281160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281160_0x281160");
#endif

    switch (ctx->pc) {
        case 0x281180u: goto label_281180;
        default: break;
    }

    ctx->pc = 0x281160u;

    // 0x281160: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x281160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x281164: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x281164u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281168: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x281168u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28116c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28116cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281170: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x281170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x281174: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x281174u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281178: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x281178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x28117c: 0x0  nop
    ctx->pc = 0x28117cu;
    // NOP
label_281180:
    // 0x281180: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x281180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x281184: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x281184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x281188: 0x54690003  bnel        $v1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x281188u;
    {
        const bool branch_taken_0x281188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x281188) {
            ctx->pc = 0x28118Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281188u;
            // 0x28118c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281198u;
            goto label_281198;
        }
    }
    ctx->pc = 0x281190u;
    // 0x281190: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x281190u;
    {
        const bool branch_taken_0x281190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281190u;
        // 0x281194: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281190) {
            ctx->pc = 0x2811ACu;
            goto label_2811ac;
        }
    }
    ctx->pc = 0x281198u;
label_281198:
    // 0x281198: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x281198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28119c: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x28119cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2811a0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2811A0u;
    {
        const bool branch_taken_0x2811a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2811A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2811A0u;
        // 0x2811a4: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2811a0) {
            ctx->pc = 0x281180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281180;
        }
    }
    ctx->pc = 0x2811A8u;
    // 0x2811a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2811a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2811ac:
    // 0x2811ac: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2811acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2811b0: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2811b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2811b4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2811b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x2811b8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2811b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2811bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2811BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2811C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2811BCu;
        // 0x2811c0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2811BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2811C4u;
    // 0x2811c4: 0x0  nop
    ctx->pc = 0x2811c4u;
    // NOP
    ctx->pc = 0x2811c8u;
}
