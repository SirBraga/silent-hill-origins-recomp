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

// Function: sub_002626B8
// Address: 0x2626b8 - 0x2626d8
void sub_002626B8_0x2626b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002626B8_0x2626b8");
#endif

    ctx->pc = 0x2626b8u;

    // 0x2626b8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2626b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x2626bc: 0x8c450fcc  lw          $a1, 0xFCC($v0)
    ctx->pc = 0x2626bcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x730FCCu));
    // 0x2626c0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2626c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2626c4: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x2626c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x2626c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2626c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2626cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2626CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2626D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626CCu;
        // 0x2626d0: 0xa083002a  sb          $v1, 0x2A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2626CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2626D4u;
    // 0x2626d4: 0x0  nop
    ctx->pc = 0x2626d4u;
    // NOP
    ctx->pc = 0x2626d8u;
}
