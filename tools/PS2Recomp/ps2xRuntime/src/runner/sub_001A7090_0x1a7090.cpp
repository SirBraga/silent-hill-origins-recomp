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

// Function: sub_001A7090
// Address: 0x1a7090 - 0x1a70b8
void sub_001A7090_0x1a7090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7090_0x1a7090");
#endif

    ctx->pc = 0x1a7090u;

    // 0x1a7090: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a7090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7094: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a7094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a7098: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1a7098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1a709c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A709Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A70A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A709Cu;
        // 0x1a70a0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A709Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A70A4u;
    // 0x1a70a4: 0x0  nop
    ctx->pc = 0x1a70a4u;
    // NOP
    // 0x1a70a8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1a70a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a70ac: 0x0  nop
    ctx->pc = 0x1a70acu;
    // NOP
    // 0x1a70b0: 0xa480001c  sh          $zero, 0x1C($a0)
    ctx->pc = 0x1a70b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a70b4: 0x0  nop
    ctx->pc = 0x1a70b4u;
    // NOP
    ctx->pc = 0x1a70b8u;
}
