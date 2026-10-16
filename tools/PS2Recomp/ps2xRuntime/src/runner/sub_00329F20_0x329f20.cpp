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

// Function: sub_00329F20
// Address: 0x329f20 - 0x329f34
void sub_00329F20_0x329f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329F20_0x329f20");
#endif

    ctx->pc = 0x329f20u;

    // 0x329f20: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x329f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x329f24: 0x807e9c2  j           func_1FA708
    ctx->pc = 0x329F24u;
    ctx->pc = 0x329F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329F24u;
    // 0x329f28: 0x24849134  addiu       $a0, $a0, -0x6ECC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938932));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA708u, 0x329F24u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x329F2Cu;
    // 0x329f2c: 0x0  nop
    ctx->pc = 0x329f2cu;
    // NOP
    // 0x329f30: 0x0  nop
    ctx->pc = 0x329f30u;
    // NOP
    ctx->pc = 0x329f34u;
}
