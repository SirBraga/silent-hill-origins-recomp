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

// Function: sub_001DA070
// Address: 0x1da070 - 0x1da0a0
void sub_001DA070_0x1da070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA070_0x1da070");
#endif

    switch (ctx->pc) {
        case 0x1da094u: goto label_1da094;
        default: break;
    }

    ctx->pc = 0x1da070u;

    // 0x1da070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da074: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1da074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1da078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da07c: 0x2442ac60  addiu       $v0, $v0, -0x53A0
    ctx->pc = 0x1da07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945888));
    // 0x1da080: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1da080u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1da084: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA084u;
    {
        const bool branch_taken_0x1da084 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA084u;
        // 0x1da088: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da084) {
            ctx->pc = 0x1DA094u;
            goto label_1da094;
        }
    }
    ctx->pc = 0x1DA08Cu;
    // 0x1da08c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1DA08Cu;
    SET_GPR_U32(ctx, 31, 0x1DA094u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1DA08Cu, 0x1DA094u)) {
        return;
    }
    ctx->pc = 0x1DA094u;
label_1da094:
    // 0x1da094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da098: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA098u;
        // 0x1da09c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA0A0u;
}
