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

// Function: sub_00256090
// Address: 0x256090 - 0x2560b8
void sub_00256090_0x256090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256090_0x256090");
#endif

    ctx->pc = 0x256090u;

    // 0x256090: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x256090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x256094: 0x8c633fbc  lw          $v1, 0x3FBC($v1)
    ctx->pc = 0x256094u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FBCu));
    // 0x256098: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x256098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x25609c: 0xac253fb8  sw          $a1, 0x3FB8($at)
    ctx->pc = 0x25609cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B3FB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FB8u, _value); } while (0);
    // 0x2560a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2560a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2560a4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2560a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2560a8: 0xac233fbc  sw          $v1, 0x3FBC($at)
    ctx->pc = 0x2560a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3FBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FBCu, _value); } while (0);
    // 0x2560ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2560ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2560B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2560ACu;
        // 0x2560b0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2560ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2560B4u;
    // 0x2560b4: 0x0  nop
    ctx->pc = 0x2560b4u;
    // NOP
    ctx->pc = 0x2560b8u;
}
