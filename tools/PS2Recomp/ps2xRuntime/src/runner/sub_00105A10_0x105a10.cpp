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

// Function: sub_00105A10
// Address: 0x105a10 - 0x105a80
void sub_00105A10_0x105a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105A10_0x105a10");
#endif

    switch (ctx->pc) {
        case 0x105a28u: goto label_105a28;
        case 0x105a40u: goto label_105a40;
        default: break;
    }

    ctx->pc = 0x105a10u;

    // 0x105a10: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x105a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x105a14: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x105A14u;
    {
        const bool branch_taken_0x105a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A14u;
        // 0x105a18: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a14) {
            ctx->pc = 0x105A74u;
            goto label_105a74;
        }
    }
    ctx->pc = 0x105A1Cu;
    // 0x105a1c: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x105a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x105a20: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x105a20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a24: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x105a24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_105a28:
    // 0x105a28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x105a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x105a2c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x105A2Cu;
    {
        const bool branch_taken_0x105a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A2Cu;
        // 0x105a30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a2c) {
            ctx->pc = 0x105A60u;
            goto label_105a60;
        }
    }
    ctx->pc = 0x105A34u;
    // 0x105a34: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x105a34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x105a38: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x105a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x105a3c: 0x0  nop
    ctx->pc = 0x105a3cu;
    // NOP
label_105a40:
    // 0x105a40: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x105a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x105a44: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x105A44u;
    {
        const bool branch_taken_0x105a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x105A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A44u;
        // 0x105a48: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a44) {
            ctx->pc = 0x105A54u;
            goto label_105a54;
        }
    }
    ctx->pc = 0x105A4Cu;
    // 0x105a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x105A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A4Cu;
        // 0x105a50: 0x8c620070  lw          $v0, 0x70($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105A54u;
label_105a54:
    // 0x105a54: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x105a54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x105a58: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x105A58u;
    {
        const bool branch_taken_0x105a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A58u;
        // 0x105a5c: 0x24630080  addiu       $v1, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a58) {
            ctx->pc = 0x105A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105a40;
        }
    }
    ctx->pc = 0x105A60u;
label_105a60:
    // 0x105a60: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x105a60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x105a64: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x105a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x105a68: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x105a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x105a6c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x105A6Cu;
    {
        const bool branch_taken_0x105a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A6Cu;
        // 0x105a70: 0x24e7000c  addiu       $a3, $a3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a6c) {
            ctx->pc = 0x105A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105a28;
        }
    }
    ctx->pc = 0x105A74u;
label_105a74:
    // 0x105a74: 0x3e00008  jr          $ra
    ctx->pc = 0x105A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A74u;
        // 0x105a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105A7Cu;
    // 0x105a7c: 0x0  nop
    ctx->pc = 0x105a7cu;
    // NOP
    ctx->pc = 0x105a80u;
}
