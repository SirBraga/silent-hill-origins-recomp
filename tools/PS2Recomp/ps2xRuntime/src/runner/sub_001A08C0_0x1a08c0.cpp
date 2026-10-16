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

// Function: sub_001A08C0
// Address: 0x1a08c0 - 0x1a0920
void sub_001A08C0_0x1a08c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A08C0_0x1a08c0");
#endif

    ctx->pc = 0x1a08c0u;

    // 0x1a08c0: 0x8c82080c  lw          $v0, 0x80C($a0)
    ctx->pc = 0x1a08c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2060)));
    // 0x1a08c4: 0x24070098  addiu       $a3, $zero, 0x98
    ctx->pc = 0x1a08c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1a08c8: 0x8c860804  lw          $a2, 0x804($a0)
    ctx->pc = 0x1a08c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x1a08cc: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1a08ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a08d0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1a08d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a08d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a08d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a08d8: 0xc440005c  lwc1        $f0, 0x5C($v0)
    ctx->pc = 0x1a08d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a08dc: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1a08dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1a08e0: 0x8c82080c  lw          $v0, 0x80C($a0)
    ctx->pc = 0x1a08e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2060)));
    // 0x1a08e4: 0x8c860804  lw          $a2, 0x804($a0)
    ctx->pc = 0x1a08e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x1a08e8: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1a08e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a08ec: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1a08ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a08f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a08f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a08f4: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x1a08f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a08f8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1a08f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1a08fc: 0x8c82080c  lw          $v0, 0x80C($a0)
    ctx->pc = 0x1a08fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2060)));
    // 0x1a0900: 0x8c860804  lw          $a2, 0x804($a0)
    ctx->pc = 0x1a0900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x1a0904: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1a0904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a0908: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1a0908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a090c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a090cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a0910: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x1a0910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0914: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0914u;
        // 0x1a0918: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A091Cu;
    // 0x1a091c: 0x0  nop
    ctx->pc = 0x1a091cu;
    // NOP
    ctx->pc = 0x1a0920u;
}
