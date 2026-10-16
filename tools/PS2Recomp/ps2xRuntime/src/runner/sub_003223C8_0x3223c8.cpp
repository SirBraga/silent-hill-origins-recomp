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

// Function: sub_003223C8
// Address: 0x3223c8 - 0x3223f0
void sub_003223C8_0x3223c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003223C8_0x3223c8");
#endif

    ctx->pc = 0x3223c8u;

    // 0x3223c8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x3223c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x3223cc: 0x24439b00  addiu       $v1, $v0, -0x6500
    ctx->pc = 0x3223ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941440));
    // 0x3223d0: 0xac449b00  sw          $a0, -0x6500($v0)
    ctx->pc = 0x3223d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x729B00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x729B00u, _value); } while (0);
    // 0x3223d4: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x3223d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3223d8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3223d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3223dc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x3223dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x729B08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x729B08u, _value); } while (0);
    // 0x3223e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3223e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x729B04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x729B04u, _value); } while (0);
    // 0x3223e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3223E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3223E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3223E4u;
        // 0x3223e8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3223E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3223ECu;
    // 0x3223ec: 0x0  nop
    ctx->pc = 0x3223ecu;
    // NOP
    ctx->pc = 0x3223f0u;
}
