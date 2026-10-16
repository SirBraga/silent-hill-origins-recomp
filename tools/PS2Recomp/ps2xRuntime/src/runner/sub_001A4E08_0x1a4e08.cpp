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

// Function: sub_001A4E08
// Address: 0x1a4e08 - 0x1a4e80
void sub_001A4E08_0x1a4e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4E08_0x1a4e08");
#endif

    switch (ctx->pc) {
        case 0x1a4e20u: goto label_1a4e20;
        default: break;
    }

    ctx->pc = 0x1a4e08u;

    // 0x1a4e08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a4e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a4e0c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A4E0Cu;
    {
        const bool branch_taken_0x1a4e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E0Cu;
        // 0x1a4e10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e0c) {
            ctx->pc = 0x1A4E74u;
            goto label_1a4e74;
        }
    }
    ctx->pc = 0x1A4E14u;
    // 0x1a4e14: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x1a4e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1a4e18: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1a4e18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4e1c: 0x0  nop
    ctx->pc = 0x1a4e1cu;
    // NOP
label_1a4e20:
    // 0x1a4e20: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1a4e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a4e24: 0x5445000f  bnel        $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A4E24u;
    {
        const bool branch_taken_0x1a4e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1a4e24) {
            ctx->pc = 0x1A4E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4E24u;
            // 0x1a4e28: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4E64u;
            goto label_1a4e64;
        }
    }
    ctx->pc = 0x1A4E2Cu;
    // 0x1a4e2c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1a4e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a4e30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a4e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a4e34: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1a4e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1a4e38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a4e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a4e3c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1a4e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1a4e40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a4e44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a4e48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a4e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a4e4c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1a4e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1a4e50: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a4e50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1a4e54: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a4e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a4e58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a4e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a4e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E5Cu;
        // 0x1a4e60: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4E64u;
label_1a4e64:
    // 0x1a4e64: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1a4e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a4e68: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x1a4e68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a4e6c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1A4E6Cu;
    {
        const bool branch_taken_0x1a4e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E6Cu;
        // 0x1a4e70: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e6c) {
            ctx->pc = 0x1A4E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4e20;
        }
    }
    ctx->pc = 0x1A4E74u;
label_1a4e74:
    // 0x1a4e74: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4E7Cu;
    // 0x1a4e7c: 0x0  nop
    ctx->pc = 0x1a4e7cu;
    // NOP
    ctx->pc = 0x1a4e80u;
}
