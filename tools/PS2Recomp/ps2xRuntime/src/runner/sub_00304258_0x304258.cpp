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

// Function: sub_00304258
// Address: 0x304258 - 0x304290
void sub_00304258_0x304258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304258_0x304258");
#endif

    ctx->pc = 0x304258u;

    // 0x304258: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x304258u;
    {
        const bool branch_taken_0x304258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x304258) {
            ctx->pc = 0x304288u;
            goto label_304288;
        }
    }
    ctx->pc = 0x304260u;
    // 0x304260: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x304260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x304264: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x304264u;
    {
        const bool branch_taken_0x304264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304264) {
            ctx->pc = 0x304288u;
            goto label_304288;
        }
    }
    ctx->pc = 0x30426Cu;
    // 0x30426c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x30426cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x304270: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x304270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x304274: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x304274u;
    {
        const bool branch_taken_0x304274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304274u;
        // 0x304278: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304274) {
            ctx->pc = 0x304288u;
            goto label_304288;
        }
    }
    ctx->pc = 0x30427Cu;
    // 0x30427c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x30427cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x304280: 0x3e00008  jr          $ra
    ctx->pc = 0x304280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304280u;
        // 0x304284: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304288u;
label_304288:
    // 0x304288: 0x3e00008  jr          $ra
    ctx->pc = 0x304288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304288u;
        // 0x30428c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304290u;
}
