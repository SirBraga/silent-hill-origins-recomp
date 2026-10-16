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

// Function: sub_00149D60
// Address: 0x149d60 - 0x149d80
void sub_00149D60_0x149d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149D60_0x149d60");
#endif

    switch (ctx->pc) {
        case 0x149d74u: goto label_149d74;
        default: break;
    }

    ctx->pc = 0x149d60u;

    // 0x149d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x149d64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x149d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149d6c: 0xc0526d2  jal         func_149B48
    ctx->pc = 0x149D6Cu;
    SET_GPR_U32(ctx, 31, 0x149D74u);
    ctx->pc = 0x149D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149D6Cu;
    // 0x149d70: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x149B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x149B48u, 0x149D6Cu, 0x149D74u)) {
        return;
    }
    ctx->pc = 0x149D74u;
label_149d74:
    // 0x149d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149d78: 0x3e00008  jr          $ra
    ctx->pc = 0x149D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D78u;
        // 0x149d7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149D80u;
}
