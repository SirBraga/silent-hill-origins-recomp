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

// Function: sub_001BE570
// Address: 0x1be570 - 0x1be5a0
void sub_001BE570_0x1be570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE570_0x1be570");
#endif

    switch (ctx->pc) {
        case 0x1be594u: goto label_1be594;
        default: break;
    }

    ctx->pc = 0x1be570u;

    // 0x1be570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be574: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1be574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1be578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be57c: 0x2442d6e8  addiu       $v0, $v0, -0x2918
    ctx->pc = 0x1be57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956776));
    // 0x1be580: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1be580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1be584: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE584u;
    {
        const bool branch_taken_0x1be584 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE584u;
        // 0x1be588: 0xac82006c  sw          $v0, 0x6C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be584) {
            ctx->pc = 0x1BE594u;
            goto label_1be594;
        }
    }
    ctx->pc = 0x1BE58Cu;
    // 0x1be58c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1BE58Cu;
    SET_GPR_U32(ctx, 31, 0x1BE594u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1BE58Cu, 0x1BE594u)) {
        return;
    }
    ctx->pc = 0x1BE594u;
label_1be594:
    // 0x1be594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be598: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE598u;
        // 0x1be59c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE5A0u;
}
