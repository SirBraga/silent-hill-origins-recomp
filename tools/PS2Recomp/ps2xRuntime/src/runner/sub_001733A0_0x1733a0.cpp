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

// Function: sub_001733A0
// Address: 0x1733a0 - 0x1733f8
void sub_001733A0_0x1733a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001733A0_0x1733a0");
#endif

    switch (ctx->pc) {
        case 0x1733dcu: goto label_1733dc;
        case 0x1733ecu: goto label_1733ec;
        default: break;
    }

    ctx->pc = 0x1733a0u;

    // 0x1733a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1733a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1733a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1733a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1733a8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1733a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1733ac: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1733acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1733b0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1733B0u;
    {
        const bool branch_taken_0x1733b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1733B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1733B0u;
        // 0x1733b4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1733b0) {
            ctx->pc = 0x1733C4u;
            goto label_1733c4;
        }
    }
    ctx->pc = 0x1733B8u;
    // 0x1733b8: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x1733b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1733bc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1733BCu;
    {
        const bool branch_taken_0x1733bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1733C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1733BCu;
        // 0x1733c0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1733bc) {
            ctx->pc = 0x1733E4u;
            goto label_1733e4;
        }
    }
    ctx->pc = 0x1733C4u;
label_1733c4:
    // 0x1733c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1733c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1733c8: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x1733c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    // 0x1733cc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1733ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1733d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1733d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1733d4: 0xc06c24c  jal         func_1B0930
    ctx->pc = 0x1733D4u;
    SET_GPR_U32(ctx, 31, 0x1733DCu);
    ctx->pc = 0x1733D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1733D4u;
    // 0x1733d8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0930u, 0x1733D4u, 0x1733DCu)) {
        return;
    }
    ctx->pc = 0x1733DCu;
label_1733dc:
    // 0x1733dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1733DCu;
    {
        const bool branch_taken_0x1733dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1733E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1733DCu;
        // 0x1733e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1733dc) {
            ctx->pc = 0x1733F0u;
            goto label_1733f0;
        }
    }
    ctx->pc = 0x1733E4u;
label_1733e4:
    // 0x1733e4: 0xc05d852  jal         func_176148
    ctx->pc = 0x1733E4u;
    SET_GPR_U32(ctx, 31, 0x1733ECu);
    ctx->pc = 0x176148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176148u, 0x1733E4u, 0x1733ECu)) {
        return;
    }
    ctx->pc = 0x1733ECu;
label_1733ec:
    // 0x1733ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1733ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1733f0:
    // 0x1733f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1733F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1733F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1733F0u;
        // 0x1733f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1733F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1733F8u;
}
