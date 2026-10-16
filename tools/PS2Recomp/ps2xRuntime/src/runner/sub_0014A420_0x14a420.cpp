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

// Function: sub_0014A420
// Address: 0x14a420 - 0x14a450
void sub_0014A420_0x14a420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A420_0x14a420");
#endif

    switch (ctx->pc) {
        case 0x14a43cu: goto label_14a43c;
        default: break;
    }

    ctx->pc = 0x14a420u;

    // 0x14a420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14a424: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14a424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14a428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a42c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14a42cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a430: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14a430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a434: 0xc05e390  jal         func_178E40
    ctx->pc = 0x14A434u;
    SET_GPR_U32(ctx, 31, 0x14A43Cu);
    ctx->pc = 0x14A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A434u;
    // 0x14a438: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178E40u, 0x14A434u, 0x14A43Cu)) {
        return;
    }
    ctx->pc = 0x14A43Cu;
label_14a43c:
    // 0x14a43c: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x14a43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x14a440: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14a440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a448: 0x3e00008  jr          $ra
    ctx->pc = 0x14A448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A448u;
        // 0x14a44c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A450u;
}
