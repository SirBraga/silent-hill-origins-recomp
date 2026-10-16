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

// Function: sub_002AE1B8
// Address: 0x2ae1b8 - 0x2ae1f8
void sub_002AE1B8_0x2ae1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE1B8_0x2ae1b8");
#endif

    ctx->pc = 0x2ae1b8u;

    // 0x2ae1b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ae1b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae1bc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2ae1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ae1c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ae1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ae1c4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2ae1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ae1c8: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2ae1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2ae1cc: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x2ae1ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ae1d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ae1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ae1d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ae1d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae1d8: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x2ae1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2ae1dc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ae1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ae1e0: 0xe46c002c  swc1        $f12, 0x2C($v1)
    ctx->pc = 0x2ae1e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x2ae1e4: 0x460c0016  rsqrt.s     $f0, $f0, $f12
    ctx->pc = 0x2ae1e4u;
    ctx->f[0] = FPU_RSQRT_S(ctx, ctx->f[0], ctx->f[12]);
    // 0x2ae1e8: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x2ae1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2ae1ec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2ae1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ae1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE1F0u;
        // 0x2ae1f4: 0xe480002c  swc1        $f0, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE1F8u;
}
