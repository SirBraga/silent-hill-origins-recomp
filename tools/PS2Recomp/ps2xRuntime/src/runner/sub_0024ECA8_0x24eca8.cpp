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

// Function: sub_0024ECA8
// Address: 0x24eca8 - 0x24ecc8
void sub_0024ECA8_0x24eca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024ECA8_0x24eca8");
#endif

    ctx->pc = 0x24eca8u;

    // 0x24eca8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24ecac: 0x8c633f84  lw          $v1, 0x3F84($v1)
    ctx->pc = 0x24ecacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F84u));
    // 0x24ecb0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24ecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x24ecb4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24ecb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24ecb8: 0xac233f84  sw          $v1, 0x3F84($at)
    ctx->pc = 0x24ecb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3F84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F84u, _value); } while (0);
    // 0x24ecbc: 0x3e00008  jr          $ra
    ctx->pc = 0x24ECBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECBCu;
        // 0x24ecc0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ECBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24ECC4u;
    // 0x24ecc4: 0x0  nop
    ctx->pc = 0x24ecc4u;
    // NOP
    ctx->pc = 0x24ecc8u;
}
