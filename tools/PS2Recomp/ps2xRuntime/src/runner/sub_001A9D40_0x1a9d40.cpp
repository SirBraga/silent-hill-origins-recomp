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

// Function: sub_001A9D40
// Address: 0x1a9d40 - 0x1a9d68
void sub_001A9D40_0x1a9d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9D40_0x1a9d40");
#endif

    ctx->pc = 0x1a9d40u;

    // 0x1a9d40: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1a9d40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1a9d44: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a9d44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d48: 0x94c390cc  lhu         $v1, -0x6F34($a2)
    ctx->pc = 0x1a9d48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x3390CCu));
    // 0x1a9d4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a9d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a9d50: 0xa4c390cc  sh          $v1, -0x6F34($a2)
    ctx->pc = 0x1a9d50u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3390CCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3390CCu, _value); } while (0);
    // 0x1a9d54: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x1a9d54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a9d58: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D58u;
        // 0x1a9d5c: 0xa4850002  sh          $a1, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9D60u;
    // 0x1a9d60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a9d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a9d64: 0x0  nop
    ctx->pc = 0x1a9d64u;
    // NOP
    ctx->pc = 0x1a9d68u;
}
