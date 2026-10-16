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

// Function: sub_0021AB40
// Address: 0x21ab40 - 0x21ab68
void sub_0021AB40_0x21ab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AB40_0x21ab40");
#endif

    switch (ctx->pc) {
        case 0x21ab58u: goto label_21ab58;
        default: break;
    }

    ctx->pc = 0x21ab40u;

    // 0x21ab40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21ab40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21ab44: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x21ab44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x21ab48: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AB48u;
    {
        const bool branch_taken_0x21ab48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB48u;
        // 0x21ab4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ab48) {
            ctx->pc = 0x21AB58u;
            goto label_21ab58;
        }
    }
    ctx->pc = 0x21AB50u;
    // 0x21ab50: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x21AB50u;
    SET_GPR_U32(ctx, 31, 0x21AB58u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x21AB50u, 0x21AB58u)) {
        return;
    }
    ctx->pc = 0x21AB58u;
label_21ab58:
    // 0x21ab58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ab58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ab5c: 0x3e00008  jr          $ra
    ctx->pc = 0x21AB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB5Cu;
        // 0x21ab60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AB64u;
    // 0x21ab64: 0x0  nop
    ctx->pc = 0x21ab64u;
    // NOP
    ctx->pc = 0x21ab68u;
}
