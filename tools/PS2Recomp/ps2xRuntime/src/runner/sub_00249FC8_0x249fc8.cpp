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

// Function: sub_00249FC8
// Address: 0x249fc8 - 0x249fe8
void sub_00249FC8_0x249fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249FC8_0x249fc8");
#endif

    ctx->pc = 0x249fc8u;

    // 0x249fc8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x249fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x249fcc: 0x8c633f54  lw          $v1, 0x3F54($v1)
    ctx->pc = 0x249fccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F54u));
    // 0x249fd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x249fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x249fd4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x249fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x249fd8: 0xac233f54  sw          $v1, 0x3F54($at)
    ctx->pc = 0x249fd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3F54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F54u, _value); } while (0);
    // 0x249fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x249FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FDCu;
        // 0x249fe0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249FE4u;
    // 0x249fe4: 0x0  nop
    ctx->pc = 0x249fe4u;
    // NOP
    ctx->pc = 0x249fe8u;
}
