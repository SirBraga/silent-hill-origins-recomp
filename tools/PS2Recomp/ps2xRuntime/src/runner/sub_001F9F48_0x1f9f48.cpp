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

// Function: sub_001F9F48
// Address: 0x1f9f48 - 0x1f9f90
void sub_001F9F48_0x1f9f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9F48_0x1f9f48");
#endif

    switch (ctx->pc) {
        case 0x1f9f60u: goto label_1f9f60;
        default: break;
    }

    ctx->pc = 0x1f9f48u;

    // 0x1f9f48: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1f9f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9f4c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1F9F4Cu;
    {
        const bool branch_taken_0x1f9f4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F4Cu;
        // 0x1f9f50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f4c) {
            ctx->pc = 0x1F9F88u;
            goto label_1f9f88;
        }
    }
    ctx->pc = 0x1F9F54u;
    // 0x1f9f54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9F54u;
    {
        const bool branch_taken_0x1f9f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F54u;
        // 0x1f9f58: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f54) {
            ctx->pc = 0x1F9F68u;
            goto label_1f9f68;
        }
    }
    ctx->pc = 0x1F9F5Cu;
    // 0x1f9f5c: 0x0  nop
    ctx->pc = 0x1f9f5cu;
    // NOP
label_1f9f60:
    // 0x1f9f60: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f9f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9f64: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1f9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f9f68:
    // 0x1f9f68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9F68u;
    {
        const bool branch_taken_0x1f9f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F68u;
        // 0x1f9f6c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f68) {
            ctx->pc = 0x1F9F78u;
            goto label_1f9f78;
        }
    }
    ctx->pc = 0x1F9F70u;
    // 0x1f9f70: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f9f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f9f74: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x1f9f74u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1f9f78:
    // 0x1f9f78: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1f9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1f9f7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1f9f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f9f80: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F9F80u;
    {
        const bool branch_taken_0x1f9f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F80u;
        // 0x1f9f84: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f80) {
            ctx->pc = 0x1F9F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9f60;
        }
    }
    ctx->pc = 0x1F9F88u;
label_1f9f88:
    // 0x1f9f88: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F88u;
        // 0x1f9f8c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9F90u;
}
