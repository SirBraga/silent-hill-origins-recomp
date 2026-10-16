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

// Function: sub_00324530
// Address: 0x324530 - 0x324558
void sub_00324530_0x324530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324530_0x324530");
#endif

    switch (ctx->pc) {
        case 0x324540u: goto label_324540;
        default: break;
    }

    ctx->pc = 0x324530u;

    // 0x324530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x324530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x324534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x324538: 0xc0c8fb2  jal         func_323EC8
    ctx->pc = 0x324538u;
    SET_GPR_U32(ctx, 31, 0x324540u);
    ctx->pc = 0x323EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323EC8u, 0x324538u, 0x324540u)) {
        return;
    }
    ctx->pc = 0x324540u;
label_324540:
    // 0x324540: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x324540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x324544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324548: 0xac407554  sw          $zero, 0x7554($v0)
    ctx->pc = 0x324548u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x687554u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x687554u, _value); } while (0);
    // 0x32454c: 0x3e00008  jr          $ra
    ctx->pc = 0x32454Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32454Cu;
        // 0x324550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32454Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324554u;
    // 0x324554: 0x0  nop
    ctx->pc = 0x324554u;
    // NOP
    ctx->pc = 0x324558u;
}
