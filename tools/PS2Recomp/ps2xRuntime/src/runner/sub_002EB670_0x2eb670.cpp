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

// Function: sub_002EB670
// Address: 0x2eb670 - 0x2eb6b0
void sub_002EB670_0x2eb670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB670_0x2eb670");
#endif

    switch (ctx->pc) {
        case 0x2eb688u: goto label_2eb688;
        case 0x2eb6a4u: goto label_2eb6a4;
        default: break;
    }

    ctx->pc = 0x2eb670u;

    // 0x2eb670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eb670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eb674: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x2eb674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
    // 0x2eb678: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EB678u;
    {
        const bool branch_taken_0x2eb678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB678u;
        // 0x2eb67c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb678) {
            ctx->pc = 0x2EB698u;
            goto label_2eb698;
        }
    }
    ctx->pc = 0x2EB680u;
    // 0x2eb680: 0xc0bb03c  jal         func_2EC0F0
    ctx->pc = 0x2EB680u;
    SET_GPR_U32(ctx, 31, 0x2EB688u);
    ctx->pc = 0x2EC0F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EC0F0u, 0x2EB680u, 0x2EB688u)) {
        return;
    }
    ctx->pc = 0x2EB688u;
label_2eb688:
    // 0x2eb688: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB688u;
    {
        const bool branch_taken_0x2eb688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb688) {
            ctx->pc = 0x2EB68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB688u;
            // 0x2eb68c: 0xaf808c8c  sw          $zero, -0x7374($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294937740), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB698u;
            goto label_2eb698;
        }
    }
    ctx->pc = 0x2EB690u;
    // 0x2eb690: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EB690u;
    {
        const bool branch_taken_0x2eb690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB690u;
        // 0x2eb694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb690) {
            ctx->pc = 0x2EB6A4u;
            goto label_2eb6a4;
        }
    }
    ctx->pc = 0x2EB698u;
label_2eb698:
    // 0x2eb698: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2eb698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2eb69c: 0xc0b8df0  jal         func_2E37C0
    ctx->pc = 0x2EB69Cu;
    SET_GPR_U32(ctx, 31, 0x2EB6A4u);
    ctx->pc = 0x2EB6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB69Cu;
    // 0x2eb6a0: 0x2484e700  addiu       $a0, $a0, -0x1900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E37C0u, 0x2EB69Cu, 0x2EB6A4u)) {
        return;
    }
    ctx->pc = 0x2EB6A4u;
label_2eb6a4:
    // 0x2eb6a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eb6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6A8u;
        // 0x2eb6ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB6B0u;
}
