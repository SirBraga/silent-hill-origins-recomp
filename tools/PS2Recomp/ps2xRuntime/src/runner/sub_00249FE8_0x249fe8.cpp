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

// Function: sub_00249FE8
// Address: 0x249fe8 - 0x24a008
void sub_00249FE8_0x249fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249FE8_0x249fe8");
#endif

    ctx->pc = 0x249fe8u;

    // 0x249fe8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x249fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x249fec: 0x8c633f54  lw          $v1, 0x3F54($v1)
    ctx->pc = 0x249fecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F54u));
    // 0x249ff0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x249ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x249ff4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x249ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x249ff8: 0xac233f54  sw          $v1, 0x3F54($at)
    ctx->pc = 0x249ff8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3F54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F54u, _value); } while (0);
    // 0x249ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x249FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FFCu;
        // 0x24a000: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A004u;
    // 0x24a004: 0x0  nop
    ctx->pc = 0x24a004u;
    // NOP
    ctx->pc = 0x24a008u;
}
