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

// Function: sub_00248058
// Address: 0x248058 - 0x2480a8
void sub_00248058_0x248058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248058_0x248058");
#endif

    switch (ctx->pc) {
        case 0x248090u: goto label_248090;
        default: break;
    }

    ctx->pc = 0x248058u;

    // 0x248058: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x248058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x24805c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24805cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x248060: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x248060u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x248064: 0x8cc64188  lw          $a2, 0x4188($a2)
    ctx->pc = 0x248064u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248068: 0x24440fc8  addiu       $a0, $v0, 0xFC8
    ctx->pc = 0x248068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x24806c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24806cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248070: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x248070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x248074: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x248074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x248078: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x248078u;
    {
        const bool branch_taken_0x248078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248078u;
        // 0x24807c: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248078) {
            ctx->pc = 0x248098u;
            goto label_248098;
        }
    }
    ctx->pc = 0x248080u;
    // 0x248080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248084: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x248084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x248088: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x248088u;
    SET_GPR_U32(ctx, 31, 0x248090u);
    ctx->pc = 0x24808Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248088u;
    // 0x24808c: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x248088u, 0x248090u)) {
        return;
    }
    ctx->pc = 0x248090u;
label_248090:
    // 0x248090: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x248090u;
    {
        const bool branch_taken_0x248090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248090u;
        // 0x248094: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248090) {
            ctx->pc = 0x24809Cu;
            goto label_24809c;
        }
    }
    ctx->pc = 0x248098u;
label_248098:
    // 0x248098: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x248098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24809c:
    // 0x24809c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24809cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2480a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2480A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2480A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480A0u;
        // 0x2480a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2480A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2480A8u;
}
