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

// Function: sub_003039A8
// Address: 0x3039a8 - 0x3039e8
void sub_003039A8_0x3039a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003039A8_0x3039a8");
#endif

    switch (ctx->pc) {
        case 0x3039c8u: goto label_3039c8;
        default: break;
    }

    ctx->pc = 0x3039a8u;

    // 0x3039a8: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x3039a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3039ac: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x3039acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3039b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3039b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3039b4: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3039B4u;
    {
        const bool branch_taken_0x3039b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3039B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3039B4u;
        // 0x3039b8: 0xe23018  mult        $a2, $a3, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3039b4) {
            ctx->pc = 0x3039E0u;
            goto label_3039e0;
        }
    }
    ctx->pc = 0x3039BCu;
    // 0x3039bc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3039bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3039c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3039c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3039c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3039c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3039c8:
    // 0x3039c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3039c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3039cc: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x3039ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3039d0: 0x0  nop
    ctx->pc = 0x3039d0u;
    // NOP
    // 0x3039d4: 0x0  nop
    ctx->pc = 0x3039d4u;
    // NOP
    // 0x3039d8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3039D8u;
    {
        const bool branch_taken_0x3039d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3039DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3039D8u;
        // 0x3039dc: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3039d8) {
            ctx->pc = 0x3039C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3039c8;
        }
    }
    ctx->pc = 0x3039E0u;
label_3039e0:
    // 0x3039e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3039E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3039E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3039E0u;
        // 0x3039e4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3039E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3039E8u;
}
