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

// Function: sub_0014D098
// Address: 0x14d098 - 0x14d0c8
void sub_0014D098_0x14d098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D098_0x14d098");
#endif

    switch (ctx->pc) {
        case 0x14d0bcu: goto label_14d0bc;
        default: break;
    }

    ctx->pc = 0x14d098u;

    // 0x14d098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d09c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d0a0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x14d0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14d0a4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D0A4u;
    {
        const bool branch_taken_0x14d0a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D0A4u;
        // 0x14d0a8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d0a4) {
            ctx->pc = 0x14D0BCu;
            goto label_14d0bc;
        }
    }
    ctx->pc = 0x14D0ACu;
    // 0x14d0ac: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x14d0acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x14d0b0: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x14d0b0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x14d0b4: 0xc09545a  jal         func_255168
    ctx->pc = 0x14D0B4u;
    SET_GPR_U32(ctx, 31, 0x14D0BCu);
    ctx->pc = 0x14D0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D0B4u;
    // 0x14d0b8: 0x24a5cf78  addiu       $a1, $a1, -0x3088 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x14D0B4u, 0x14D0BCu)) {
        return;
    }
    ctx->pc = 0x14D0BCu;
label_14d0bc:
    // 0x14d0bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x14D0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D0C0u;
        // 0x14d0c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D0C8u;
}
