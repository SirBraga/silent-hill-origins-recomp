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

// Function: sub_002EDA08
// Address: 0x2eda08 - 0x2eda50
void sub_002EDA08_0x2eda08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDA08_0x2eda08");
#endif

    ctx->pc = 0x2eda08u;

    // 0x2eda08: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2eda08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2eda0c: 0x8c626280  lw          $v0, 0x6280($v1)
    ctx->pc = 0x2eda0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x686280u));
    // 0x2eda10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EDA10u;
    {
        const bool branch_taken_0x2eda10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA10u;
        // 0x2eda14: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda10) {
            ctx->pc = 0x2EDA20u;
            goto label_2eda20;
        }
    }
    ctx->pc = 0x2EDA18u;
    // 0x2eda18: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA18u;
        // 0x2eda1c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDA20u;
label_2eda20:
    // 0x2eda20: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2eda20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2eda24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eda24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eda28: 0x2463e890  addiu       $v1, $v1, -0x1770
    ctx->pc = 0x2eda28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961296));
    // 0x2eda2c: 0x90640008  lbu         $a0, 0x8($v1)
    ctx->pc = 0x2eda2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x70E898u));
    // 0x2eda30: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x2eda30u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x70E8A4u));
    // 0x2eda34: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x2eda34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2eda38: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2eda38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2eda3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2eda3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2eda40: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2eda40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2eda44: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x2eda44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2eda48: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA48u;
        // 0x2eda4c: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDA50u;
}
