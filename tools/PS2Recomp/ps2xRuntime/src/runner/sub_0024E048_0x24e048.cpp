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

// Function: sub_0024E048
// Address: 0x24e048 - 0x24e098
void sub_0024E048_0x24e048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E048_0x24e048");
#endif

    switch (ctx->pc) {
        case 0x24e070u: goto label_24e070;
        default: break;
    }

    ctx->pc = 0x24e048u;

    // 0x24e048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24e048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24e04c: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x24e04cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x24e050: 0x8f858570  lw          $a1, -0x7A90($gp)
    ctx->pc = 0x24e050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935920)));
    // 0x24e054: 0x25084220  addiu       $t0, $t0, 0x4220
    ctx->pc = 0x24e054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16928));
    // 0x24e058: 0x8f878574  lw          $a3, -0x7A8C($gp)
    ctx->pc = 0x24e058u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935924)));
    // 0x24e05c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x24e05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x24e060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24e060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24e064: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x24e064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24e068: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x24E068u;
    SET_GPR_U32(ctx, 31, 0x24E070u);
    ctx->pc = 0x24E06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E068u;
    // 0x24e06c: 0x3c090004  lui         $t1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x24E068u, 0x24E070u)) {
        return;
    }
    ctx->pc = 0x24E070u;
label_24e070:
    // 0x24e070: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24E070u;
    {
        const bool branch_taken_0x24e070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E070u;
        // 0x24e074: 0xaf828f08  sw          $v0, -0x70F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e070) {
            ctx->pc = 0x24E084u;
            goto label_24e084;
        }
    }
    ctx->pc = 0x24E078u;
    // 0x24e078: 0xaf80856c  sw          $zero, -0x7A94($gp)
    ctx->pc = 0x24e078u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935916), GPR_U32(ctx, 0));
    // 0x24e07c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24E07Cu;
    {
        const bool branch_taken_0x24e07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E07Cu;
        // 0x24e080: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e07c) {
            ctx->pc = 0x24E088u;
            goto label_24e088;
        }
    }
    ctx->pc = 0x24E084u;
label_24e084:
    // 0x24e084: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24e084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24e088:
    // 0x24e088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24e088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e08c: 0x3e00008  jr          $ra
    ctx->pc = 0x24E08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E08Cu;
        // 0x24e090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E094u;
    // 0x24e094: 0x0  nop
    ctx->pc = 0x24e094u;
    // NOP
    ctx->pc = 0x24e098u;
}
