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

// Function: sub_002175B8
// Address: 0x2175b8 - 0x2175f8
void sub_002175B8_0x2175b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002175B8_0x2175b8");
#endif

    ctx->pc = 0x2175b8u;

    // 0x2175b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2175b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2175bc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2175bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2175c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2175c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2175c4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2175c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2175c8: 0xac820260  sw          $v0, 0x260($a0)
    ctx->pc = 0x2175c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 2));
    // 0x2175cc: 0xa083025c  sb          $v1, 0x25C($a0)
    ctx->pc = 0x2175ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 604), (uint8_t)GPR_U32(ctx, 3));
    // 0x2175d0: 0xac850264  sw          $a1, 0x264($a0)
    ctx->pc = 0x2175d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 612), GPR_U32(ctx, 5));
    // 0x2175d4: 0xac860268  sw          $a2, 0x268($a0)
    ctx->pc = 0x2175d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 616), GPR_U32(ctx, 6));
    // 0x2175d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2175D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2175DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2175D8u;
        // 0x2175dc: 0xac80026c  sw          $zero, 0x26C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 620), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2175D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2175E0u;
    // 0x2175e0: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x2175e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x2175e4: 0x0  nop
    ctx->pc = 0x2175e4u;
    // NOP
    // 0x2175e8: 0x0  nop
    ctx->pc = 0x2175e8u;
    // NOP
    // 0x2175ec: 0x0  nop
    ctx->pc = 0x2175ecu;
    // NOP
    // 0x2175f0: 0x0  nop
    ctx->pc = 0x2175f0u;
    // NOP
    // 0x2175f4: 0x0  nop
    ctx->pc = 0x2175f4u;
    // NOP
    ctx->pc = 0x2175f8u;
}
