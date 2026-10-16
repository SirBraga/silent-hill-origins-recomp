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

// Function: sub_00119768
// Address: 0x119768 - 0x119788
void sub_00119768_0x119768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119768_0x119768");
#endif

    switch (ctx->pc) {
        case 0x11977cu: goto label_11977c;
        default: break;
    }

    ctx->pc = 0x119768u;

    // 0x119768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x119768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11976c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11976cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x119774: 0xc04640e  jal         func_119038
    ctx->pc = 0x119774u;
    SET_GPR_U32(ctx, 31, 0x11977Cu);
    ctx->pc = 0x119778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119774u;
    // 0x119778: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x119038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x119038u, 0x119774u, 0x11977Cu)) {
        return;
    }
    ctx->pc = 0x11977Cu;
label_11977c:
    // 0x11977c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11977cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119780: 0x3e00008  jr          $ra
    ctx->pc = 0x119780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119780u;
        // 0x119784: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119788u;
}
