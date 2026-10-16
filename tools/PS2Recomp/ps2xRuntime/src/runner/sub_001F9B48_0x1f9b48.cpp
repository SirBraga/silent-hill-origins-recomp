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

// Function: sub_001F9B48
// Address: 0x1f9b48 - 0x1f9b90
void sub_001F9B48_0x1f9b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9B48_0x1f9b48");
#endif

    switch (ctx->pc) {
        case 0x1f9b60u: goto label_1f9b60;
        default: break;
    }

    ctx->pc = 0x1f9b48u;

    // 0x1f9b48: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1f9b48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9b4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f9b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f9b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f9b54: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1f9b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1f9b58: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9B58u;
    {
        const bool branch_taken_0x1f9b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B58u;
        // 0x1f9b5c: 0x3066007f  andi        $a2, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9b58) {
            ctx->pc = 0x1F9B80u;
            goto label_1f9b80;
        }
    }
    ctx->pc = 0x1F9B60u;
label_1f9b60:
    // 0x1f9b60: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1f9b60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9b64: 0x24e70007  addiu       $a3, $a3, 0x7
    ctx->pc = 0x1f9b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x1f9b68: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f9b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f9b6c: 0x3062007f  andi        $v0, $v1, 0x7F
    ctx->pc = 0x1f9b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1f9b70: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x1f9b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x1f9b74: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1f9b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1f9b78: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F9B78u;
    {
        const bool branch_taken_0x1f9b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B78u;
        // 0x1f9b7c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9b78) {
            ctx->pc = 0x1F9B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9b60;
        }
    }
    ctx->pc = 0x1F9B80u;
label_1f9b80:
    // 0x1f9b80: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1f9b80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1f9b84: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B84u;
        // 0x1f9b88: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9B8Cu;
    // 0x1f9b8c: 0x0  nop
    ctx->pc = 0x1f9b8cu;
    // NOP
    ctx->pc = 0x1f9b90u;
}
