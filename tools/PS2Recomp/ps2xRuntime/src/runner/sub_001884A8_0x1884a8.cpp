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

// Function: sub_001884A8
// Address: 0x1884a8 - 0x1884c8
void sub_001884A8_0x1884a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001884A8_0x1884a8");
#endif

    switch (ctx->pc) {
        case 0x1884bcu: goto label_1884bc;
        default: break;
    }

    ctx->pc = 0x1884a8u;

    // 0x1884a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1884a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1884ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1884acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1884b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1884b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1884b4: 0xc0620a2  jal         func_188288
    ctx->pc = 0x1884B4u;
    SET_GPR_U32(ctx, 31, 0x1884BCu);
    ctx->pc = 0x1884B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1884B4u;
    // 0x1884b8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x188288u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188288u, 0x1884B4u, 0x1884BCu)) {
        return;
    }
    ctx->pc = 0x1884BCu;
label_1884bc:
    // 0x1884bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1884bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1884c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1884C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1884C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884C0u;
        // 0x1884c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1884C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1884C8u;
}
