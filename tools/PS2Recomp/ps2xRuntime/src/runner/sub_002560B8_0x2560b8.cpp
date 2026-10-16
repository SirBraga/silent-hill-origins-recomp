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

// Function: sub_002560B8
// Address: 0x2560b8 - 0x2560e0
void sub_002560B8_0x2560b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002560B8_0x2560b8");
#endif

    ctx->pc = 0x2560b8u;

    // 0x2560b8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2560b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2560bc: 0x8c633fbc  lw          $v1, 0x3FBC($v1)
    ctx->pc = 0x2560bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FBCu));
    // 0x2560c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2560c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2560c4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2560c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2560c8: 0xac233fbc  sw          $v1, 0x3FBC($at)
    ctx->pc = 0x2560c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3FBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FBCu, _value); } while (0);
    // 0x2560cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2560CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2560D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2560CCu;
        // 0x2560d0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2560CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2560D4u;
    // 0x2560d4: 0x0  nop
    ctx->pc = 0x2560d4u;
    // NOP
    // 0x2560d8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2560d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2560dc: 0x0  nop
    ctx->pc = 0x2560dcu;
    // NOP
    ctx->pc = 0x2560e0u;
}
