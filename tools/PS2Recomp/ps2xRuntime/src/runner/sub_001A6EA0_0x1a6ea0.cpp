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

// Function: sub_001A6EA0
// Address: 0x1a6ea0 - 0x1a6ed0
void sub_001A6EA0_0x1a6ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6EA0_0x1a6ea0");
#endif

    switch (ctx->pc) {
        case 0x1a6ec4u: goto label_1a6ec4;
        default: break;
    }

    ctx->pc = 0x1a6ea0u;

    // 0x1a6ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6ea4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1a6ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1a6ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6eac: 0x2442b490  addiu       $v0, $v0, -0x4B70
    ctx->pc = 0x1a6eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947984));
    // 0x1a6eb0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1a6eb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1a6eb4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6EB4u;
    {
        const bool branch_taken_0x1a6eb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EB4u;
        // 0x1a6eb8: 0xac820050  sw          $v0, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6eb4) {
            ctx->pc = 0x1A6EC4u;
            goto label_1a6ec4;
        }
    }
    ctx->pc = 0x1A6EBCu;
    // 0x1a6ebc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1A6EBCu;
    SET_GPR_U32(ctx, 31, 0x1A6EC4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1A6EBCu, 0x1A6EC4u)) {
        return;
    }
    ctx->pc = 0x1A6EC4u;
label_1a6ec4:
    // 0x1a6ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EC8u;
        // 0x1a6ecc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6ED0u;
}
