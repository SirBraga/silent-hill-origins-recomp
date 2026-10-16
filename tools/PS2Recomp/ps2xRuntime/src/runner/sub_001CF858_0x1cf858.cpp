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

// Function: sub_001CF858
// Address: 0x1cf858 - 0x1cf888
void sub_001CF858_0x1cf858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF858_0x1cf858");
#endif

    switch (ctx->pc) {
        case 0x1cf874u: goto label_1cf874;
        default: break;
    }

    ctx->pc = 0x1cf858u;

    // 0x1cf858: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1cf858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cf85c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf85cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf860: 0x3842000d  xori        $v0, $v0, 0xD
    ctx->pc = 0x1cf860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)13);
    // 0x1cf864: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF864u;
    {
        const bool branch_taken_0x1cf864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF864u;
        // 0x1cf868: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf864) {
            ctx->pc = 0x1CF874u;
            goto label_1cf874;
        }
    }
    ctx->pc = 0x1CF86Cu;
    // 0x1cf86c: 0xc0603b6  jal         func_180ED8
    ctx->pc = 0x1CF86Cu;
    SET_GPR_U32(ctx, 31, 0x1CF874u);
    ctx->pc = 0x180ED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180ED8u, 0x1CF86Cu, 0x1CF874u)) {
        return;
    }
    ctx->pc = 0x1CF874u;
label_1cf874:
    // 0x1cf874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf87c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF87Cu;
        // 0x1cf880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF884u;
    // 0x1cf884: 0x0  nop
    ctx->pc = 0x1cf884u;
    // NOP
    ctx->pc = 0x1cf888u;
}
