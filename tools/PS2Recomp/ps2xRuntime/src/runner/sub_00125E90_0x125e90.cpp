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

// Function: sub_00125E90
// Address: 0x125e90 - 0x125eb8
void sub_00125E90_0x125e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125E90_0x125e90");
#endif

    switch (ctx->pc) {
        case 0x125eacu: goto label_125eac;
        default: break;
    }

    ctx->pc = 0x125e90u;

    // 0x125e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x125e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x125e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125e98: 0x8c840c70  lw          $a0, 0xC70($a0)
    ctx->pc = 0x125e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3184)));
    // 0x125e9c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x125E9Cu;
    {
        const bool branch_taken_0x125e9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x125EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E9Cu;
        // 0x125ea0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e9c) {
            ctx->pc = 0x125EB0u;
            goto label_125eb0;
        }
    }
    ctx->pc = 0x125EA4u;
    // 0x125ea4: 0xc0411ce  jal         func_104738
    ctx->pc = 0x125EA4u;
    SET_GPR_U32(ctx, 31, 0x125EACu);
    ctx->pc = 0x104738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x104738u, 0x125EA4u, 0x125EACu)) {
        return;
    }
    ctx->pc = 0x125EACu;
label_125eac:
    // 0x125eac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_125eb0:
    // 0x125eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x125EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125EB0u;
        // 0x125eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125EB8u;
}
