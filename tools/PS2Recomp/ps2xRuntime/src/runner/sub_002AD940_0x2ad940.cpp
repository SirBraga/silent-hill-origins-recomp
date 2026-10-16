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

// Function: sub_002AD940
// Address: 0x2ad940 - 0x2ad9a0
void sub_002AD940_0x2ad940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD940_0x2ad940");
#endif

    switch (ctx->pc) {
        case 0x2ad958u: goto label_2ad958;
        default: break;
    }

    ctx->pc = 0x2ad940u;

    // 0x2ad940: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x2ad940u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ad944: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AD944u;
    {
        const bool branch_taken_0x2ad944 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD944u;
        // 0x2ad948: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad944) {
            ctx->pc = 0x2AD98Cu;
            goto label_2ad98c;
        }
    }
    ctx->pc = 0x2AD94Cu;
    // 0x2ad94c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2ad94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ad950: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ad950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad954: 0x0  nop
    ctx->pc = 0x2ad954u;
    // NOP
label_2ad958:
    // 0x2ad958: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ad958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ad95c: 0x54450006  bnel        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD95Cu;
    {
        const bool branch_taken_0x2ad95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2ad95c) {
            ctx->pc = 0x2AD960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD95Cu;
            // 0x2ad960: 0x8c87000c  lw          $a3, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD978u;
            goto label_2ad978;
        }
    }
    ctx->pc = 0x2AD964u;
    // 0x2ad964: 0x15070002  bne         $t0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AD964u;
    {
        const bool branch_taken_0x2ad964 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x2AD968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD964u;
        // 0x2ad968: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad964) {
            ctx->pc = 0x2AD970u;
            goto label_2ad970;
        }
    }
    ctx->pc = 0x2AD96Cu;
    // 0x2ad96c: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2ad96cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_2ad970:
    // 0x2ad970: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD970u;
        // 0x2ad974: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD978u;
label_2ad978:
    // 0x2ad978: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2ad978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ad97c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2ad97cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2ad980: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x2ad980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2ad984: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2AD984u;
    {
        const bool branch_taken_0x2ad984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD984u;
        // 0x2ad988: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad984) {
            ctx->pc = 0x2AD958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad958;
        }
    }
    ctx->pc = 0x2AD98Cu;
label_2ad98c:
    // 0x2ad98c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD98Cu;
        // 0x2ad990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD994u;
    // 0x2ad994: 0x0  nop
    ctx->pc = 0x2ad994u;
    // NOP
    // 0x2ad998: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ad998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad99c: 0x0  nop
    ctx->pc = 0x2ad99cu;
    // NOP
    ctx->pc = 0x2ad9a0u;
}
