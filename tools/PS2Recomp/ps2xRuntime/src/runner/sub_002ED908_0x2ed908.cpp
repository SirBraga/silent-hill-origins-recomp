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

// Function: sub_002ED908
// Address: 0x2ed908 - 0x2ed948
void sub_002ED908_0x2ed908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED908_0x2ed908");
#endif

    switch (ctx->pc) {
        case 0x2ed930u: goto label_2ed930;
        case 0x2ed938u: goto label_2ed938;
        default: break;
    }

    ctx->pc = 0x2ed908u;

    // 0x2ed908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ed908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ed90c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed910: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ed910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ed914: 0x24065400  addiu       $a2, $zero, 0x5400
    ctx->pc = 0x2ed914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21504));
    // 0x2ed918: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2ed918u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x2ed91c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed920: 0x2610e890  addiu       $s0, $s0, -0x1770
    ctx->pc = 0x2ed920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961296));
    // 0x2ed924: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ed924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed928: 0xc0bb8e0  jal         func_2EE380
    ctx->pc = 0x2ED928u;
    SET_GPR_U32(ctx, 31, 0x2ED930u);
    ctx->pc = 0x2ED92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED928u;
    // 0x2ed92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE380u, 0x2ED928u, 0x2ED930u)) {
        return;
    }
    ctx->pc = 0x2ED930u;
label_2ed930:
    // 0x2ed930: 0xc0bb8bc  jal         func_2EE2F0
    ctx->pc = 0x2ED930u;
    SET_GPR_U32(ctx, 31, 0x2ED938u);
    ctx->pc = 0x2ED934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED930u;
    // 0x2ed934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE2F0u, 0x2ED930u, 0x2ED938u)) {
        return;
    }
    ctx->pc = 0x2ED938u;
label_2ed938:
    // 0x2ed938: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ed938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed93c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed940: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED940u;
        // 0x2ed944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED948u;
}
