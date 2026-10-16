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

// Function: sub_001CD4F0
// Address: 0x1cd4f0 - 0x1cd530
void sub_001CD4F0_0x1cd4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD4F0_0x1cd4f0");
#endif

    switch (ctx->pc) {
        case 0x1cd508u: goto label_1cd508;
        default: break;
    }

    ctx->pc = 0x1cd4f0u;

    // 0x1cd4f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1cd4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1cd4f4: 0x248402ac  addiu       $a0, $a0, 0x2AC
    ctx->pc = 0x1cd4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 684));
    // 0x1cd4f8: 0x24460050  addiu       $a2, $v0, 0x50
    ctx->pc = 0x1cd4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1cd4fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cd4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd500: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cd500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd504: 0x0  nop
    ctx->pc = 0x1cd504u;
    // NOP
label_1cd508:
    // 0x1cd508: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cd508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cd50c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1cd50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1cd510: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1cd510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cd514: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1cd514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1cd518: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1cd518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1cd51c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1cd51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1cd520: 0x4a1fff9  bgez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CD520u;
    {
        const bool branch_taken_0x1cd520 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1CD524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD520u;
        // 0x1cd524: 0x2380b  movn        $a3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd520) {
            ctx->pc = 0x1CD508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd508;
        }
    }
    ctx->pc = 0x1CD528u;
    // 0x1cd528: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD528u;
        // 0x1cd52c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD530u;
}
