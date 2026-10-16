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

// Function: sub_001A0BA0
// Address: 0x1a0ba0 - 0x1a0be0
void sub_001A0BA0_0x1a0ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0BA0_0x1a0ba0");
#endif

    ctx->pc = 0x1a0ba0u;

    // 0x1a0ba0: 0x8c82080c  lw          $v0, 0x80C($a0)
    ctx->pc = 0x1a0ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2060)));
    // 0x1a0ba4: 0x24060098  addiu       $a2, $zero, 0x98
    ctx->pc = 0x1a0ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1a0ba8: 0x8c850804  lw          $a1, 0x804($a0)
    ctx->pc = 0x1a0ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x1a0bac: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1a0bacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a0bb0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1a0bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a0bb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a0bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a0bb8: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x1a0bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a0bbc: 0x30831000  andi        $v1, $a0, 0x1000
    ctx->pc = 0x1a0bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x1a0bc0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0BC0u;
    {
        const bool branch_taken_0x1a0bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BC0u;
        // 0x1a0bc4: 0x30840001  andi        $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0bc0) {
            ctx->pc = 0x1A0BD8u;
            goto label_1a0bd8;
        }
    }
    ctx->pc = 0x1A0BC8u;
    // 0x1a0bc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a0bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0bcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BD0u;
        // 0x1a0bd4: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0BD8u;
label_1a0bd8:
    // 0x1a0bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BD8u;
        // 0x1a0bdc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0BE0u;
}
