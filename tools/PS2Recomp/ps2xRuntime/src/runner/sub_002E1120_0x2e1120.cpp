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

// Function: sub_002E1120
// Address: 0x2e1120 - 0x2e1160
void sub_002E1120_0x2e1120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1120_0x2e1120");
#endif

    switch (ctx->pc) {
        case 0x2e1138u: goto label_2e1138;
        default: break;
    }

    ctx->pc = 0x2e1120u;

    // 0x2e1120: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2e1120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2e1124: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E1124u;
    {
        const bool branch_taken_0x2e1124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1124u;
        // 0x2e1128: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1124) {
            ctx->pc = 0x2E1154u;
            goto label_2e1154;
        }
    }
    ctx->pc = 0x2E112Cu;
    // 0x2e112c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e112cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1130: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2e1130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e1134: 0x0  nop
    ctx->pc = 0x2e1134u;
    // NOP
label_2e1138:
    // 0x2e1138: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2e1138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e113c: 0x2ca30020  sltiu       $v1, $a1, 0x20
    ctx->pc = 0x2e113cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2e1140: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1140u;
    {
        const bool branch_taken_0x2e1140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1140u;
        // 0x2e1144: 0xa61004  sllv        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1140) {
            ctx->pc = 0x2E1154u;
            goto label_2e1154;
        }
    }
    ctx->pc = 0x2E1148u;
    // 0x2e1148: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2e1148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2e114c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E114Cu;
    {
        const bool branch_taken_0x2e114c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E114Cu;
        // 0x2e1150: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e114c) {
            ctx->pc = 0x2E1138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1138;
        }
    }
    ctx->pc = 0x2E1154u;
label_2e1154:
    // 0x2e1154: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1154u;
        // 0x2e1158: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E115Cu;
    // 0x2e115c: 0x0  nop
    ctx->pc = 0x2e115cu;
    // NOP
    ctx->pc = 0x2e1160u;
}
