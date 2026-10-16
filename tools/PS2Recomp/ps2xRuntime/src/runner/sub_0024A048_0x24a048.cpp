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

// Function: sub_0024A048
// Address: 0x24a048 - 0x24a068
void sub_0024A048_0x24a048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A048_0x24a048");
#endif

    ctx->pc = 0x24a048u;

    // 0x24a048: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24a048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24a04c: 0x8c633f5c  lw          $v1, 0x3F5C($v1)
    ctx->pc = 0x24a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F5Cu));
    // 0x24a050: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24a050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x24a054: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24a054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24a058: 0xac233f5c  sw          $v1, 0x3F5C($at)
    ctx->pc = 0x24a058u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3F5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F5Cu, _value); } while (0);
    // 0x24a05c: 0x3e00008  jr          $ra
    ctx->pc = 0x24A05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A05Cu;
        // 0x24a060: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A064u;
    // 0x24a064: 0x0  nop
    ctx->pc = 0x24a064u;
    // NOP
    ctx->pc = 0x24a068u;
}
