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

// Function: sub_001F9AC0
// Address: 0x1f9ac0 - 0x1f9af0
void sub_001F9AC0_0x1f9ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9AC0_0x1f9ac0");
#endif

    switch (ctx->pc) {
        case 0x1f9ae4u: goto label_1f9ae4;
        default: break;
    }

    ctx->pc = 0x1f9ac0u;

    // 0x1f9ac0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f9ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f9ac4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f9ac4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f9ac8: 0x24422cf8  addiu       $v0, $v0, 0x2CF8
    ctx->pc = 0x1f9ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11512));
    // 0x1f9acc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9ad0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1f9ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1f9ad4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9AD4u;
    {
        const bool branch_taken_0x1f9ad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9AD4u;
        // 0x1f9ad8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ad4) {
            ctx->pc = 0x1F9AE4u;
            goto label_1f9ae4;
        }
    }
    ctx->pc = 0x1F9ADCu;
    // 0x1f9adc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1F9ADCu;
    SET_GPR_U32(ctx, 31, 0x1F9AE4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1F9ADCu, 0x1F9AE4u)) {
        return;
    }
    ctx->pc = 0x1F9AE4u;
label_1f9ae4:
    // 0x1f9ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9AE8u;
        // 0x1f9aec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9AF0u;
}
