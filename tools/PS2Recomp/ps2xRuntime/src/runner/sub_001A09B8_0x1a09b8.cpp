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

// Function: sub_001A09B8
// Address: 0x1a09b8 - 0x1a0a00
void sub_001A09B8_0x1a09b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A09B8_0x1a09b8");
#endif

    ctx->pc = 0x1a09b8u;

    // 0x1a09b8: 0x24020098  addiu       $v0, $zero, 0x98
    ctx->pc = 0x1a09b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1a09bc: 0x8c830804  lw          $v1, 0x804($a0)
    ctx->pc = 0x1a09bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x1a09c0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1a09c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1a09c4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1a09c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a09c8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1a09c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a09cc: 0xc440005c  lwc1        $f0, 0x5C($v0)
    ctx->pc = 0x1a09ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a09d0: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1a09d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1a09d4: 0x8c830804  lw          $v1, 0x804($a0)
    ctx->pc = 0x1a09d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x1a09d8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1a09d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a09dc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1a09dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a09e0: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x1a09e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a09e4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1a09e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1a09e8: 0x8c820804  lw          $v0, 0x804($a0)
    ctx->pc = 0x1a09e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x1a09ec: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a09ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a09f0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a09f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a09f4: 0xc4a00064  lwc1        $f0, 0x64($a1)
    ctx->pc = 0x1a09f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a09f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A09F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A09FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09F8u;
        // 0x1a09fc: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A09F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0A00u;
}
