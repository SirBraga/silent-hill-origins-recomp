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

// Function: sub_001372A0
// Address: 0x1372a0 - 0x1372c8
void sub_001372A0_0x1372a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001372A0_0x1372a0");
#endif

    switch (ctx->pc) {
        case 0x1372b0u: goto label_1372b0;
        default: break;
    }

    ctx->pc = 0x1372a0u;

    // 0x1372a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1372a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1372a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1372a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1372a8: 0xc049214  jal         func_124850
    ctx->pc = 0x1372A8u;
    SET_GPR_U32(ctx, 31, 0x1372B0u);
    ctx->pc = 0x124850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x124850u, 0x1372A8u, 0x1372B0u)) {
        return;
    }
    ctx->pc = 0x1372B0u;
label_1372b0:
    // 0x1372b0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1372b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1372b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1372b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1372b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1372b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1372bc: 0xac628b48  sw          $v0, -0x74B8($v1)
    ctx->pc = 0x1372bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x338B48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338B48u, _value); } while (0);
    // 0x1372c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1372C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1372C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1372C0u;
        // 0x1372c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1372C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1372C8u;
}
