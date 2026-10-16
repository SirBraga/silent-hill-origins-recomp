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

// Function: sub_002EF800
// Address: 0x2ef800 - 0x2ef878
void sub_002EF800_0x2ef800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF800_0x2ef800");
#endif

    ctx->pc = 0x2ef800u;

    // 0x2ef800: 0x8f8290a8  lw          $v0, -0x6F58($gp)
    ctx->pc = 0x2ef800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938792)));
    // 0x2ef804: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ef804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ef808: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2ef808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ef80c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2EF80Cu;
    {
        const bool branch_taken_0x2ef80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF80Cu;
        // 0x2ef810: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef80c) {
            ctx->pc = 0x2EF868u;
            goto label_2ef868;
        }
    }
    ctx->pc = 0x2EF814u;
    // 0x2ef814: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ef814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ef818: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EF818u;
    {
        const bool branch_taken_0x2ef818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef818) {
            ctx->pc = 0x2EF868u;
            goto label_2ef868;
        }
    }
    ctx->pc = 0x2EF820u;
    // 0x2ef820: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2ef820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ef824: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EF824u;
    {
        const bool branch_taken_0x2ef824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef824) {
            ctx->pc = 0x2EF868u;
            goto label_2ef868;
        }
    }
    ctx->pc = 0x2EF82Cu;
    // 0x2ef82c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ef82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2ef830: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EF830u;
    {
        const bool branch_taken_0x2ef830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef830) {
            ctx->pc = 0x2EF868u;
            goto label_2ef868;
        }
    }
    ctx->pc = 0x2EF838u;
    // 0x2ef838: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2ef838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2ef83c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EF83Cu;
    {
        const bool branch_taken_0x2ef83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef83c) {
            ctx->pc = 0x2EF868u;
            goto label_2ef868;
        }
    }
    ctx->pc = 0x2EF844u;
    // 0x2ef844: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2ef844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2ef848: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EF848u;
    {
        const bool branch_taken_0x2ef848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef848) {
            ctx->pc = 0x2EF868u;
            goto label_2ef868;
        }
    }
    ctx->pc = 0x2EF850u;
    // 0x2ef850: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2ef850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2ef854: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF854u;
    {
        const bool branch_taken_0x2ef854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef854) {
            ctx->pc = 0x2EF868u;
            goto label_2ef868;
        }
    }
    ctx->pc = 0x2EF85Cu;
    // 0x2ef85c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2ef85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2ef860: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF860u;
    {
        const bool branch_taken_0x2ef860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef860) {
            ctx->pc = 0x2EF870u;
            goto label_2ef870;
        }
    }
    ctx->pc = 0x2EF868u;
label_2ef868:
    // 0x2ef868: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF868u;
        // 0x2ef86c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF870u;
label_2ef870:
    // 0x2ef870: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF870u;
        // 0x2ef874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF878u;
}
