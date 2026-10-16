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

// Function: sub_002020E8
// Address: 0x2020e8 - 0x202118
void sub_002020E8_0x2020e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002020E8_0x2020e8");
#endif

    switch (ctx->pc) {
        case 0x2020f8u: goto label_2020f8;
        default: break;
    }

    ctx->pc = 0x2020e8u;

    // 0x2020e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2020e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2020ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2020ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2020f0: 0xc080846  jal         func_202118
    ctx->pc = 0x2020F0u;
    SET_GPR_U32(ctx, 31, 0x2020F8u);
    ctx->pc = 0x202118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202118u, 0x2020F0u, 0x2020F8u)) {
        return;
    }
    ctx->pc = 0x2020F8u;
label_2020f8:
    // 0x2020f8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2020f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2020fc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2020fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x202100: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x202100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x202104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202108: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x202108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20210c: 0x3e00008  jr          $ra
    ctx->pc = 0x20210Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20210Cu;
        // 0x202110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20210Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202114u;
    // 0x202114: 0x0  nop
    ctx->pc = 0x202114u;
    // NOP
    ctx->pc = 0x202118u;
}
