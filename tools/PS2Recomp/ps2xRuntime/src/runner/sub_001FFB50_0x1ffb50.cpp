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

// Function: sub_001FFB50
// Address: 0x1ffb50 - 0x1ffbb8
void sub_001FFB50_0x1ffb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFB50_0x1ffb50");
#endif

    switch (ctx->pc) {
        case 0x1ffb68u: goto label_1ffb68;
        default: break;
    }

    ctx->pc = 0x1ffb50u;

    // 0x1ffb50: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x1ffb50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ffb54: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1ffb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1ffb58: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FFB58u;
    {
        const bool branch_taken_0x1ffb58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB58u;
        // 0x1ffb5c: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb58) {
            ctx->pc = 0x1FFB84u;
            goto label_1ffb84;
        }
    }
    ctx->pc = 0x1FFB60u;
    // 0x1ffb60: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x1ffb60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ffb64: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1ffb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1ffb68:
    // 0x1ffb68: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x1ffb68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1ffb6c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFB6Cu;
    {
        const bool branch_taken_0x1ffb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffb6c) {
            ctx->pc = 0x1FFB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFB6Cu;
            // 0x1ffb70: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFB7Cu;
            goto label_1ffb7c;
        }
    }
    ctx->pc = 0x1FFB74u;
    // 0x1ffb74: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1ffb74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb78: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1ffb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1ffb7c:
    // 0x1ffb7c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FFB7Cu;
    {
        const bool branch_taken_0x1ffb7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffb7c) {
            ctx->pc = 0x1FFB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFB7Cu;
            // 0x1ffb80: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffb68;
        }
    }
    ctx->pc = 0x1FFB84u;
label_1ffb84:
    // 0x1ffb84: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1ffb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ffb88: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x1ffb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x1ffb8c: 0x10e50006  beq         $a3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FFB8Cu;
    {
        const bool branch_taken_0x1ffb8c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FFB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB8Cu;
        // 0x1ffb90: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb8c) {
            ctx->pc = 0x1FFBA8u;
            goto label_1ffba8;
        }
    }
    ctx->pc = 0x1FFB94u;
    // 0x1ffb94: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ffb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ffb98: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x1ffb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1ffb9c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1ffb9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ffba0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFBA0u;
    {
        const bool branch_taken_0x1ffba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffba0) {
            ctx->pc = 0x1FFBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFBA0u;
            // 0x1ffba4: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFBACu;
            goto label_1ffbac;
        }
    }
    ctx->pc = 0x1FFBA8u;
label_1ffba8:
    // 0x1ffba8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1ffba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1ffbac:
    // 0x1ffbac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ffbacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBB0u;
        // 0x1ffbb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFBB8u;
}
