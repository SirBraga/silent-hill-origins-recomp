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

// Function: sub_002B81F0
// Address: 0x2b81f0 - 0x2b8220
void sub_002B81F0_0x2b81f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B81F0_0x2b81f0");
#endif

    ctx->pc = 0x2b81f0u;

    // 0x2b81f0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2b81f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2b81f4: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2b81f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b81f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2b81f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2b81fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B81FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81FCu;
        // 0x2b8200: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B81FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8204u;
    // 0x2b8204: 0x0  nop
    ctx->pc = 0x2b8204u;
    // NOP
    // 0x2b8208: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x2b8208u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b820c: 0x0  nop
    ctx->pc = 0x2b820cu;
    // NOP
    // 0x2b8210: 0xa4470002  sh          $a3, 0x2($v0)
    ctx->pc = 0x2b8210u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b8214: 0x0  nop
    ctx->pc = 0x2b8214u;
    // NOP
    // 0x2b8218: 0xa4860002  sh          $a2, 0x2($a0)
    ctx->pc = 0x2b8218u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x2b821c: 0x0  nop
    ctx->pc = 0x2b821cu;
    // NOP
    ctx->pc = 0x2b8220u;
}
