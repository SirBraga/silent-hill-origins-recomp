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

// Function: sub_00257EB0
// Address: 0x257eb0 - 0x257ed8
void sub_00257EB0_0x257eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257EB0_0x257eb0");
#endif

    switch (ctx->pc) {
        case 0x257ec8u: goto label_257ec8;
        default: break;
    }

    ctx->pc = 0x257eb0u;

    // 0x257eb0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x257eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257eb4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x257eb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x257eb8: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x257eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x257ebc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257ec0: 0xc093892  jal         func_24E248
    ctx->pc = 0x257EC0u;
    SET_GPR_U32(ctx, 31, 0x257EC8u);
    ctx->pc = 0x257EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257EC0u;
    // 0x257ec4: 0x24841240  addiu       $a0, $a0, 0x1240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E248u, 0x257EC0u, 0x257EC8u)) {
        return;
    }
    ctx->pc = 0x257EC8u;
label_257ec8:
    // 0x257ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x257ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257ECCu;
        // 0x257ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257ED4u;
    // 0x257ed4: 0x0  nop
    ctx->pc = 0x257ed4u;
    // NOP
    ctx->pc = 0x257ed8u;
}
