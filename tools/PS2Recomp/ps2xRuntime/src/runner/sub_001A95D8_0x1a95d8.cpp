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

// Function: sub_001A95D8
// Address: 0x1a95d8 - 0x1a9600
void sub_001A95D8_0x1a95d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A95D8_0x1a95d8");
#endif

    switch (ctx->pc) {
        case 0x1a95f0u: goto label_1a95f0;
        default: break;
    }

    ctx->pc = 0x1a95d8u;

    // 0x1a95d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a95d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a95dc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1a95dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1a95e0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A95E0u;
    {
        const bool branch_taken_0x1a95e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95E0u;
        // 0x1a95e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a95e0) {
            ctx->pc = 0x1A95F0u;
            goto label_1a95f0;
        }
    }
    ctx->pc = 0x1A95E8u;
    // 0x1a95e8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1A95E8u;
    SET_GPR_U32(ctx, 31, 0x1A95F0u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1A95E8u, 0x1A95F0u)) {
        return;
    }
    ctx->pc = 0x1A95F0u;
label_1a95f0:
    // 0x1a95f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a95f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a95f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A95F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A95F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95F4u;
        // 0x1a95f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A95F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A95FCu;
    // 0x1a95fc: 0x0  nop
    ctx->pc = 0x1a95fcu;
    // NOP
    ctx->pc = 0x1a9600u;
}
