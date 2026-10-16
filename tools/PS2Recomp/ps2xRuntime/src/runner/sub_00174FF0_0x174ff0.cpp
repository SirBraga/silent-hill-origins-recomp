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

// Function: sub_00174FF0
// Address: 0x174ff0 - 0x175018
void sub_00174FF0_0x174ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174FF0_0x174ff0");
#endif

    switch (ctx->pc) {
        case 0x17500cu: goto label_17500c;
        default: break;
    }

    ctx->pc = 0x174ff0u;

    // 0x174ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174ff8: 0x8c850080  lw          $a1, 0x80($a0)
    ctx->pc = 0x174ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x174ffc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x174FFCu;
    {
        const bool branch_taken_0x174ffc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x175000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FFCu;
        // 0x175000: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ffc) {
            ctx->pc = 0x175010u;
            goto label_175010;
        }
    }
    ctx->pc = 0x175004u;
    // 0x175004: 0xc043c88  jal         func_10F220
    ctx->pc = 0x175004u;
    SET_GPR_U32(ctx, 31, 0x17500Cu);
    ctx->pc = 0x175008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175004u;
    // 0x175008: 0x2484005c  addiu       $a0, $a0, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F220u, 0x175004u, 0x17500Cu)) {
        return;
    }
    ctx->pc = 0x17500Cu;
label_17500c:
    // 0x17500c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17500cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175010:
    // 0x175010: 0x3e00008  jr          $ra
    ctx->pc = 0x175010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175010u;
        // 0x175014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175018u;
}
