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

// Function: sub_001F4970
// Address: 0x1f4970 - 0x1f4998
void sub_001F4970_0x1f4970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4970_0x1f4970");
#endif

    switch (ctx->pc) {
        case 0x1f4984u: goto label_1f4984;
        default: break;
    }

    ctx->pc = 0x1f4970u;

    // 0x1f4970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f4970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f4974: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1f4974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1f4978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f497c: 0xc07d266  jal         func_1F4998
    ctx->pc = 0x1F497Cu;
    SET_GPR_U32(ctx, 31, 0x1F4984u);
    ctx->pc = 0x1F4980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F497Cu;
    // 0x1f4980: 0x248427f8  addiu       $a0, $a0, 0x27F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4998u, 0x1F497Cu, 0x1F4984u)) {
        return;
    }
    ctx->pc = 0x1F4984u;
label_1f4984:
    // 0x1f4984: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1f4984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1f4988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f498c: 0xac624144  sw          $v0, 0x4144($v1)
    ctx->pc = 0x1f498cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4144u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4144u, _value); } while (0);
    // 0x1f4990: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4990u;
        // 0x1f4994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4998u;
}
