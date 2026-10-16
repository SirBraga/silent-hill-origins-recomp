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

// Function: sub_00326F60
// Address: 0x326f60 - 0x326f98
void sub_00326F60_0x326f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326F60_0x326f60");
#endif

    switch (ctx->pc) {
        case 0x326f70u: goto label_326f70;
        default: break;
    }

    ctx->pc = 0x326f60u;

    // 0x326f60: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x326f60u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x326f64: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x326F64u;
    {
        const bool branch_taken_0x326f64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x326F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F64u;
        // 0x326f68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326f64) {
            ctx->pc = 0x326F90u;
            goto label_326f90;
        }
    }
    ctx->pc = 0x326F6Cu;
    // 0x326f6c: 0x0  nop
    ctx->pc = 0x326f6cu;
    // NOP
label_326f70:
    // 0x326f70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x326f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x326f74: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x326f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x326f78: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x326f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x326f7c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x326f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x326f80: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x326f80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x326f84: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x326f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x326f88: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x326F88u;
    {
        const bool branch_taken_0x326f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326f88) {
            ctx->pc = 0x326F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326f70;
        }
    }
    ctx->pc = 0x326F90u;
label_326f90:
    // 0x326f90: 0x3e00008  jr          $ra
    ctx->pc = 0x326F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F90u;
        // 0x326f94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326F98u;
}
