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

// Function: sub_0025B758
// Address: 0x25b758 - 0x25b778
void sub_0025B758_0x25b758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B758_0x25b758");
#endif

    ctx->pc = 0x25b758u;

    // 0x25b758: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25b758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x25b75c: 0x8c633fdc  lw          $v1, 0x3FDC($v1)
    ctx->pc = 0x25b75cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FDCu));
    // 0x25b760: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25b760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25b764: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x25b764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x25b768: 0xac233fdc  sw          $v1, 0x3FDC($at)
    ctx->pc = 0x25b768u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3FDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FDCu, _value); } while (0);
    // 0x25b76c: 0x3e00008  jr          $ra
    ctx->pc = 0x25B76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B76Cu;
        // 0x25b770: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B774u;
    // 0x25b774: 0x0  nop
    ctx->pc = 0x25b774u;
    // NOP
    ctx->pc = 0x25b778u;
}
