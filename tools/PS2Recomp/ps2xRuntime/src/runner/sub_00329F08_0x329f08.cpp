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

// Function: sub_00329F08
// Address: 0x329f08 - 0x329f20
void sub_00329F08_0x329f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329F08_0x329f08");
#endif

    ctx->pc = 0x329f08u;

    // 0x329f08: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x329f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x329f0c: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x329f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x329f10: 0x24849134  addiu       $a0, $a0, -0x6ECC
    ctx->pc = 0x329f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938932));
    // 0x329f14: 0x807e9b8  j           func_1FA6E0
    ctx->pc = 0x329F14u;
    ctx->pc = 0x329F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329F14u;
    // 0x329f18: 0x24a50fb0  addiu       $a1, $a1, 0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6E0u, 0x329F14u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x329F1Cu;
    // 0x329f1c: 0x0  nop
    ctx->pc = 0x329f1cu;
    // NOP
    ctx->pc = 0x329f20u;
}
