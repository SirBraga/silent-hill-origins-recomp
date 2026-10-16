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

// Function: sub_0031E6E8
// Address: 0x31e6e8 - 0x31e708
void sub_0031E6E8_0x31e6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E6E8_0x31e6e8");
#endif

    ctx->pc = 0x31e6e8u;

    // 0x31e6e8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x31e6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x31e6ec: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x31e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x31e6f0: 0x24a511d1  addiu       $a1, $a1, 0x11D1
    ctx->pc = 0x31e6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4561));
    // 0x31e6f4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x31e6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31e6f8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x31e6f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31e6fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31e6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31e700: 0x3e00008  jr          $ra
    ctx->pc = 0x31E700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E700u;
        // 0x31e704: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E708u;
}
