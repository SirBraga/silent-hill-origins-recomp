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

// Function: sub_0024CE00
// Address: 0x24ce00 - 0x24ce90
void sub_0024CE00_0x24ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CE00_0x24ce00");
#endif

    ctx->pc = 0x24ce00u;

    // 0x24ce00: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x24ce04: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24ce04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24ce08: 0x8c634198  lw          $v1, 0x4198($v1)
    ctx->pc = 0x24ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4198u));
    // 0x24ce0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24ce0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ce10: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x24ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x24ce14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24ce18: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x24ce18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x24ce1c: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x24ce1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x24ce20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24ce24: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24CE24u;
    {
        const bool branch_taken_0x24ce24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x24CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE24u;
        // 0x24ce28: 0x8f829128  lw          $v0, -0x6ED8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce24) {
            ctx->pc = 0x24CE74u;
            goto label_24ce74;
        }
    }
    ctx->pc = 0x24CE2Cu;
    // 0x24ce2c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24ce30: 0x54450007  bnel        $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24CE30u;
    {
        const bool branch_taken_0x24ce30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x24ce30) {
            ctx->pc = 0x24CE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CE30u;
            // 0x24ce34: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CE50u;
            goto label_24ce50;
        }
    }
    ctx->pc = 0x24CE38u;
    // 0x24ce38: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x24ce38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x24ce3c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x24ce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x24ce40: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x24ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24ce44: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x24ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x24ce48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24CE48u;
    {
        const bool branch_taken_0x24ce48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE48u;
        // 0x24ce4c: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce48) {
            ctx->pc = 0x24CE64u;
            goto label_24ce64;
        }
    }
    ctx->pc = 0x24CE50u;
label_24ce50:
    // 0x24ce50: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24ce54: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x24ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x24ce58: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x24ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24ce5c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x24ce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x24ce60: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x24ce60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_24ce64:
    // 0x24ce64: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x24ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x24ce68: 0xac840004  sw          $a0, 0x4($a0)
    ctx->pc = 0x24ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
    // 0x24ce6c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x24ce70: 0x8c424198  lw          $v0, 0x4198($v0)
    ctx->pc = 0x24ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4198u));
label_24ce74:
    // 0x24ce74: 0x24c30fc8  addiu       $v1, $a2, 0xFC8
    ctx->pc = 0x24ce74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4040));
    // 0x24ce78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24ce7c: 0xac440024  sw          $a0, 0x24($v0)
    ctx->pc = 0x24ce7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 4));
    // 0x24ce80: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x24ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    // 0x24ce84: 0x3e00008  jr          $ra
    ctx->pc = 0x24CE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE84u;
        // 0x24ce88: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CE8Cu;
    // 0x24ce8c: 0x0  nop
    ctx->pc = 0x24ce8cu;
    // NOP
    ctx->pc = 0x24ce90u;
}
