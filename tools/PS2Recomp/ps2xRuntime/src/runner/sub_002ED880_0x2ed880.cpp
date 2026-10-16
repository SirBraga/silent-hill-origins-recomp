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

// Function: sub_002ED880
// Address: 0x2ed880 - 0x2ed8b0
void sub_002ED880_0x2ed880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED880_0x2ed880");
#endif

    switch (ctx->pc) {
        case 0x2ed8a0u: goto label_2ed8a0;
        default: break;
    }

    ctx->pc = 0x2ed880u;

    // 0x2ed880: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ed880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed884: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed888: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ed888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2ed88c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ed88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed894: 0x2444e890  addiu       $a0, $v0, -0x1770
    ctx->pc = 0x2ed894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x2ed898: 0xc0bb8e0  jal         func_2EE380
    ctx->pc = 0x2ED898u;
    SET_GPR_U32(ctx, 31, 0x2ED8A0u);
    ctx->pc = 0x2ED89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED898u;
    // 0x2ed89c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE380u, 0x2ED898u, 0x2ED8A0u)) {
        return;
    }
    ctx->pc = 0x2ED8A0u;
label_2ed8a0:
    // 0x2ed8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED8A4u;
        // 0x2ed8a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED8ACu;
    // 0x2ed8ac: 0x0  nop
    ctx->pc = 0x2ed8acu;
    // NOP
    ctx->pc = 0x2ed8b0u;
}
