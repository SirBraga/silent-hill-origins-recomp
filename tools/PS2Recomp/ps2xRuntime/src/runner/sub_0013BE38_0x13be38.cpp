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

// Function: sub_0013BE38
// Address: 0x13be38 - 0x13be68
void sub_0013BE38_0x13be38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BE38_0x13be38");
#endif

    switch (ctx->pc) {
        case 0x13be5cu: goto label_13be5c;
        default: break;
    }

    ctx->pc = 0x13be38u;

    // 0x13be38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13be38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13be3c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x13be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x13be40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13be40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13be44: 0x2442f600  addiu       $v0, $v0, -0xA00
    ctx->pc = 0x13be44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964736));
    // 0x13be48: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x13be48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x13be4c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BE4Cu;
    {
        const bool branch_taken_0x13be4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE4Cu;
        // 0x13be50: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be4c) {
            ctx->pc = 0x13BE5Cu;
            goto label_13be5c;
        }
    }
    ctx->pc = 0x13BE54u;
    // 0x13be54: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x13BE54u;
    SET_GPR_U32(ctx, 31, 0x13BE5Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x13BE54u, 0x13BE5Cu)) {
        return;
    }
    ctx->pc = 0x13BE5Cu;
label_13be5c:
    // 0x13be5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13be5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13be60: 0x3e00008  jr          $ra
    ctx->pc = 0x13BE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE60u;
        // 0x13be64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BE68u;
}
