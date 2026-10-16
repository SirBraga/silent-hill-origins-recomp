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

// Function: sub_0025F7A8
// Address: 0x25f7a8 - 0x25f820
void sub_0025F7A8_0x25f7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F7A8_0x25f7a8");
#endif

    switch (ctx->pc) {
        case 0x25f7e0u: goto label_25f7e0;
        default: break;
    }

    ctx->pc = 0x25f7a8u;

    // 0x25f7a8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x25f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x25f7ac: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x25f7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x25f7b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25f7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25f7b4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x25F7B4u;
    {
        const bool branch_taken_0x25f7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7B4u;
        // 0x25f7b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7b4) {
            ctx->pc = 0x25F80Cu;
            goto label_25f80c;
        }
    }
    ctx->pc = 0x25F7BCu;
    // 0x25f7bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x25f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x25f7c0: 0x8c4241b0  lw          $v0, 0x41B0($v0)
    ctx->pc = 0x25f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41B0u));
    // 0x25f7c4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x25f7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x25f7c8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x25f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25f7cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25f7d0: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x25f7d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25f7d4: 0x1120000d  beqz        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x25F7D4u;
    {
        const bool branch_taken_0x25f7d4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7D4u;
        // 0x25f7d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7d4) {
            ctx->pc = 0x25F80Cu;
            goto label_25f80c;
        }
    }
    ctx->pc = 0x25F7DCu;
    // 0x25f7dc: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x25f7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_25f7e0:
    // 0x25f7e0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x25f7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25f7e4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x25f7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x25f7e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x25f7e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x25f7ec: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x25f7ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x25f7f0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x25f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25f7f4: 0x109282b  sltu        $a1, $t0, $t1
    ctx->pc = 0x25f7f4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x25f7f8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x25f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x25f7fc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x25f7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25f800: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x25f800u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f804: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x25F804u;
    {
        const bool branch_taken_0x25f804 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F804u;
        // 0x25f808: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f804) {
            ctx->pc = 0x25F7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f7e0;
        }
    }
    ctx->pc = 0x25F80Cu;
label_25f80c:
    // 0x25f80c: 0x3e00008  jr          $ra
    ctx->pc = 0x25F80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F80Cu;
        // 0x25f810: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F814u;
    // 0x25f814: 0x0  nop
    ctx->pc = 0x25f814u;
    // NOP
    // 0x25f818: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25f818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25f81c: 0x0  nop
    ctx->pc = 0x25f81cu;
    // NOP
    ctx->pc = 0x25f820u;
}
