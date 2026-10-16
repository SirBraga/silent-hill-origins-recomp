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

// Function: sub_001A89A8
// Address: 0x1a89a8 - 0x1a89f8
void sub_001A89A8_0x1a89a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A89A8_0x1a89a8");
#endif

    switch (ctx->pc) {
        case 0x1a89c4u: goto label_1a89c4;
        default: break;
    }

    ctx->pc = 0x1a89a8u;

    // 0x1a89a8: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x1a89a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1a89ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a89acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a89b0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1a89b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a89b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a89b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a89b8: 0x94a30028  lhu         $v1, 0x28($a1)
    ctx->pc = 0x1a89b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1a89bc: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A89BCu;
    {
        const bool branch_taken_0x1a89bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a89bc) {
            ctx->pc = 0x1A89C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A89BCu;
            // 0x1a89c0: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A89CCu;
            goto label_1a89cc;
        }
    }
    ctx->pc = 0x1A89C4u;
label_1a89c4:
    // 0x1a89c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A89C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A89C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89C4u;
        // 0x1a89c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A89C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A89CCu;
label_1a89cc:
    // 0x1a89cc: 0x0  nop
    ctx->pc = 0x1a89ccu;
    // NOP
    // 0x1a89d0: 0x0  nop
    ctx->pc = 0x1a89d0u;
    // NOP
    // 0x1a89d4: 0x10a0fffb  beqz        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A89D4u;
    {
        const bool branch_taken_0x1a89d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A89D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89D4u;
        // 0x1a89d8: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a89d4) {
            ctx->pc = 0x1A89C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a89c4;
        }
    }
    ctx->pc = 0x1A89DCu;
    // 0x1a89dc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a89dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a89e0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1a89e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a89e4: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A89E4u;
    {
        const bool branch_taken_0x1a89e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A89E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89E4u;
        // 0x1a89e8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a89e4) {
            ctx->pc = 0x1A89C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a89c4;
        }
    }
    ctx->pc = 0x1A89ECu;
    // 0x1a89ec: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1a89ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a89f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A89F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A89F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89F0u;
        // 0x1a89f4: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A89F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A89F8u;
}
