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

// Function: sub_00247998
// Address: 0x247998 - 0x2479c8
void sub_00247998_0x247998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247998_0x247998");
#endif

    ctx->pc = 0x247998u;

    // 0x247998: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x247998u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x24799c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24799cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2479a0: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x2479a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2479a4: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x2479a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x2479a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2479a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2479ac: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2479acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2479b0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2479b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2479b4: 0x8f838508  lw          $v1, -0x7AF8($gp)
    ctx->pc = 0x2479b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935816)));
    // 0x2479b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2479b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2479bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2479BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2479C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2479BCu;
        // 0x2479c0: 0xaf838508  sw          $v1, -0x7AF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2479BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2479C4u;
    // 0x2479c4: 0x0  nop
    ctx->pc = 0x2479c4u;
    // NOP
    ctx->pc = 0x2479c8u;
}
