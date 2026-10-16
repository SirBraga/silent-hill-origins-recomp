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

// Function: sub_001FB0A0
// Address: 0x1fb0a0 - 0x1fb0d0
void sub_001FB0A0_0x1fb0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB0A0_0x1fb0a0");
#endif

    switch (ctx->pc) {
        case 0x1fb0c4u: goto label_1fb0c4;
        default: break;
    }

    ctx->pc = 0x1fb0a0u;

    // 0x1fb0a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fb0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fb0a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fb0a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fb0a8: 0x24422cf8  addiu       $v0, $v0, 0x2CF8
    ctx->pc = 0x1fb0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11512));
    // 0x1fb0ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fb0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fb0b0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1fb0b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1fb0b4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB0B4u;
    {
        const bool branch_taken_0x1fb0b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB0B4u;
        // 0x1fb0b8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb0b4) {
            ctx->pc = 0x1FB0C4u;
            goto label_1fb0c4;
        }
    }
    ctx->pc = 0x1FB0BCu;
    // 0x1fb0bc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1FB0BCu;
    SET_GPR_U32(ctx, 31, 0x1FB0C4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1FB0BCu, 0x1FB0C4u)) {
        return;
    }
    ctx->pc = 0x1FB0C4u;
label_1fb0c4:
    // 0x1fb0c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB0C8u;
        // 0x1fb0cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB0D0u;
}
