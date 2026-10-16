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

// Function: sub_001DAA58
// Address: 0x1daa58 - 0x1daa88
void sub_001DAA58_0x1daa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DAA58_0x1daa58");
#endif

    switch (ctx->pc) {
        case 0x1daa78u: goto label_1daa78;
        default: break;
    }

    ctx->pc = 0x1daa58u;

    // 0x1daa58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1daa58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1daa5c: 0x24820090  addiu       $v0, $a0, 0x90
    ctx->pc = 0x1daa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x1daa60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1daa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1daa64: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x1daa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x1daa68: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DAA68u;
    {
        const bool branch_taken_0x1daa68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DAA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA68u;
        // 0x1daa6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daa68) {
            ctx->pc = 0x1DAA7Cu;
            goto label_1daa7c;
        }
    }
    ctx->pc = 0x1DAA70u;
    // 0x1daa70: 0xc0898d2  jal         func_226348
    ctx->pc = 0x1DAA70u;
    SET_GPR_U32(ctx, 31, 0x1DAA78u);
    ctx->pc = 0x226348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226348u, 0x1DAA70u, 0x1DAA78u)) {
        return;
    }
    ctx->pc = 0x1DAA78u;
label_1daa78:
    // 0x1daa78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1daa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1daa7c:
    // 0x1daa7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1daa7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1daa80: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA80u;
        // 0x1daa84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAA88u;
}
