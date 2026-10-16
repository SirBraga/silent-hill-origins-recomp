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

// Function: sub_0019F090
// Address: 0x19f090 - 0x19f0b8
void sub_0019F090_0x19f090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F090_0x19f090");
#endif

    switch (ctx->pc) {
        case 0x19f0a4u: goto label_19f0a4;
        default: break;
    }

    ctx->pc = 0x19f090u;

    // 0x19f090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f094: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x19f094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x19f098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f09c: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x19F09Cu;
    SET_GPR_U32(ctx, 31, 0x19F0A4u);
    ctx->pc = 0x19F0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F09Cu;
    // 0x19f0a0: 0x24a5a448  addiu       $a1, $a1, -0x5BB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x19F09Cu, 0x19F0A4u)) {
        return;
    }
    ctx->pc = 0x19F0A4u;
label_19f0a4:
    // 0x19f0a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f0a8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x19f0a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x19f0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x19F0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0ACu;
        // 0x19f0b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F0B4u;
    // 0x19f0b4: 0x0  nop
    ctx->pc = 0x19f0b4u;
    // NOP
    ctx->pc = 0x19f0b8u;
}
