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

// Function: sub_0025EC78
// Address: 0x25ec78 - 0x25ec98
void sub_0025EC78_0x25ec78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EC78_0x25ec78");
#endif

    ctx->pc = 0x25ec78u;

    // 0x25ec78: 0x94820062  lhu         $v0, 0x62($a0)
    ctx->pc = 0x25ec78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 98)));
    // 0x25ec7c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x25ec7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x25ec80: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x25ec80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x25ec84: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x25ec84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x25ec88: 0x3e00008  jr          $ra
    ctx->pc = 0x25EC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC88u;
        // 0x25ec8c: 0xa4820062  sh          $v0, 0x62($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 98), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EC90u;
    // 0x25ec90: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x25ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x25ec94: 0x0  nop
    ctx->pc = 0x25ec94u;
    // NOP
    ctx->pc = 0x25ec98u;
}
