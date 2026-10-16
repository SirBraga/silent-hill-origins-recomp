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

// Function: sub_001A98C0
// Address: 0x1a98c0 - 0x1a9910
void sub_001A98C0_0x1a98c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A98C0_0x1a98c0");
#endif

    ctx->pc = 0x1a98c0u;

    // 0x1a98c0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a98c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98c4: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x1a98c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1a98c8: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1a98c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1a98cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a98ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a98d0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1a98d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a98d4: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A98D4u;
    {
        const bool branch_taken_0x1a98d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A98D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A98D4u;
        // 0x1a98d8: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a98d4) {
            ctx->pc = 0x1A9904u;
            goto label_1a9904;
        }
    }
    ctx->pc = 0x1A98DCu;
    // 0x1a98dc: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x1a98dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a98e0: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x1a98e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1a98e4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a98e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98e8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1a98e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a98ec: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1a98ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a98f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a98f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a98f4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a98f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a98f8: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x1a98f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a98fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A98FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A98FCu;
        // 0x1a9900: 0xacc40010  sw          $a0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A98FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9904u;
label_1a9904:
    // 0x1a9904: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a9904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a9908: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9908u;
        // 0x1a990c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9910u;
}
