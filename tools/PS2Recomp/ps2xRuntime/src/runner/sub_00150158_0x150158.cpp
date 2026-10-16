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

// Function: sub_00150158
// Address: 0x150158 - 0x150190
void sub_00150158_0x150158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150158_0x150158");
#endif

    switch (ctx->pc) {
        case 0x150184u: goto label_150184;
        default: break;
    }

    ctx->pc = 0x150158u;

    // 0x150158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15015c: 0x3c02dead  lui         $v0, 0xDEAD
    ctx->pc = 0x15015cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57005 << 16));
    // 0x150160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150164: 0x3442face  ori         $v0, $v0, 0xFACE
    ctx->pc = 0x150164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64206);
    // 0x150168: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x150168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x15016c: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x15016cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x150170: 0xac82006c  sw          $v0, 0x6C($a0)
    ctx->pc = 0x150170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
    // 0x150174: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x150174u;
    {
        const bool branch_taken_0x150174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x150178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150174u;
        // 0x150178: 0xac820070  sw          $v0, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150174) {
            ctx->pc = 0x150184u;
            goto label_150184;
        }
    }
    ctx->pc = 0x15017Cu;
    // 0x15017c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x15017Cu;
    SET_GPR_U32(ctx, 31, 0x150184u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x15017Cu, 0x150184u)) {
        return;
    }
    ctx->pc = 0x150184u;
label_150184:
    // 0x150184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150188: 0x3e00008  jr          $ra
    ctx->pc = 0x150188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150188u;
        // 0x15018c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150190u;
}
