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

// Function: sub_002B7CE8
// Address: 0x2b7ce8 - 0x2b7d08
void sub_002B7CE8_0x2b7ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7CE8_0x2b7ce8");
#endif

    ctx->pc = 0x2b7ce8u;

    // 0x2b7ce8: 0x3402b810  ori         $v0, $zero, 0xB810
    ctx->pc = 0x2b7ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47120);
    // 0x2b7cec: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2b7cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2b7cf0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b7cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b7cf4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2b7cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2b7cf8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2b7cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b7cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CFCu;
        // 0x2b7d00: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7D04u;
    // 0x2b7d04: 0x0  nop
    ctx->pc = 0x2b7d04u;
    // NOP
    ctx->pc = 0x2b7d08u;
}
