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

// Function: sub_002E3F00
// Address: 0x2e3f00 - 0x2e3f50
void sub_002E3F00_0x2e3f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3F00_0x2e3f00");
#endif

    switch (ctx->pc) {
        case 0x2e3f10u: goto label_2e3f10;
        default: break;
    }

    ctx->pc = 0x2e3f00u;

    // 0x2e3f00: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2e3f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2e3f04: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x2e3f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2e3f08: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E3F08u;
    {
        const bool branch_taken_0x2e3f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2E3F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F08u;
        // 0x2e3f0c: 0x2462ffe8  addiu       $v0, $v1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f08) {
            ctx->pc = 0x2E3F28u;
            goto label_2e3f28;
        }
    }
    ctx->pc = 0x2E3F10u;
label_2e3f10:
    // 0x2e3f10: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3F10u;
    {
        const bool branch_taken_0x2e3f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2E3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F10u;
        // 0x2e3f14: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f10) {
            ctx->pc = 0x2E3F20u;
            goto label_2e3f20;
        }
    }
    ctx->pc = 0x2E3F18u;
    // 0x2e3f18: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F18u;
        // 0x2e3f1c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3F20u;
label_2e3f20:
    // 0x2e3f20: 0x1466fffb  bne         $v1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E3F20u;
    {
        const bool branch_taken_0x2e3f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x2E3F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F20u;
        // 0x2e3f24: 0x2462ffe8  addiu       $v0, $v1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f20) {
            ctx->pc = 0x2E3F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3f10;
        }
    }
    ctx->pc = 0x2E3F28u;
label_2e3f28:
    // 0x2e3f28: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F28u;
        // 0x2e3f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3F30u;
    // 0x2e3f30: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e3f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e3f34: 0x0  nop
    ctx->pc = 0x2e3f34u;
    // NOP
    // 0x2e3f38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e3f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e3f3c: 0x0  nop
    ctx->pc = 0x2e3f3cu;
    // NOP
    // 0x2e3f40: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2e3f40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3f44: 0x0  nop
    ctx->pc = 0x2e3f44u;
    // NOP
    // 0x2e3f48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e3f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e3f4c: 0x0  nop
    ctx->pc = 0x2e3f4cu;
    // NOP
    ctx->pc = 0x2e3f50u;
}
