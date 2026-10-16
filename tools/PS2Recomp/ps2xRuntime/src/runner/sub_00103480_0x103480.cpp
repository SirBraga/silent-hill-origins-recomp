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

// Function: sub_00103480
// Address: 0x103480 - 0x1034b0
void sub_00103480_0x103480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103480_0x103480");
#endif

    ctx->pc = 0x103480u;

    // 0x103480: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x103480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x103484: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x103484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x103488: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x103488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x10348c: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x10348cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x103490: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x103490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x103494: 0x24a50048  addiu       $a1, $a1, 0x48
    ctx->pc = 0x103494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
    // 0x103498: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x103498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x10349c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x10349cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1034a0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1034a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1034a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1034A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1034A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034A4u;
        // 0x1034a8: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1034A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1034ACu;
    // 0x1034ac: 0x0  nop
    ctx->pc = 0x1034acu;
    // NOP
    ctx->pc = 0x1034b0u;
}
