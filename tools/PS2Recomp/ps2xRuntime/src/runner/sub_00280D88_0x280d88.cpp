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

// Function: sub_00280D88
// Address: 0x280d88 - 0x280dd8
void sub_00280D88_0x280d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280D88_0x280d88");
#endif

    switch (ctx->pc) {
        case 0x280da0u: goto label_280da0;
        default: break;
    }

    ctx->pc = 0x280d88u;

    // 0x280d88: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x280d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x280d8c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x280d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280d90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x280d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d94: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x280d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x280d98: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x280d98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280d9c: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x280d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_280da0:
    // 0x280da0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x280da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x280da4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x280da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x280da8: 0x50680008  beql        $v1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x280DA8u;
    {
        const bool branch_taken_0x280da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x280da8) {
            ctx->pc = 0x280DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280DA8u;
            // 0x280dac: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280DCCu;
            goto label_280dcc;
        }
    }
    ctx->pc = 0x280DB0u;
    // 0x280db0: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x280db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x280db4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x280db4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x280db8: 0x2cc30002  sltiu       $v1, $a2, 0x2
    ctx->pc = 0x280db8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x280dbc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x280DBCu;
    {
        const bool branch_taken_0x280dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x280dbc) {
            ctx->pc = 0x280DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280DBCu;
            // 0x280dc0: 0x61180  sll         $v0, $a2, 6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280da0;
        }
    }
    ctx->pc = 0x280DC4u;
    // 0x280dc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280dc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280dc8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x280dc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
label_280dcc:
    // 0x280dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x280DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280DCCu;
        // 0x280dd0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280DD4u;
    // 0x280dd4: 0x0  nop
    ctx->pc = 0x280dd4u;
    // NOP
    ctx->pc = 0x280dd8u;
}
