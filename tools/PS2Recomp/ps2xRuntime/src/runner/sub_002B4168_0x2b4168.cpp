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

// Function: sub_002B4168
// Address: 0x2b4168 - 0x2b41d8
void sub_002B4168_0x2b4168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4168_0x2b4168");
#endif

    ctx->pc = 0x2b4168u;

    // 0x2b4168: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2b4168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b416c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x2b416cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2b4170: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2b4170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4174: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x2b4174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2b4178: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x2b4178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2b417c: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x2b417cu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x2b4180: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x2b4180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2b4184: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2b4184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4188: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b4188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b418c: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x2b418cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x2b4190: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x2b4190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2b4194: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b4194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4198: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b4198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b419c: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x2b419cu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x2b41a0: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x2b41a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2b41a4: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2b41a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b41a8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b41a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b41ac: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x2b41acu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x2b41b0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2b41b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b41b4: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2b41b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b41b8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2b41b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b41bc: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x2b41bcu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x2b41c0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2b41c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b41c4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2b41c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b41c8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2b41c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b41cc: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x2b41ccu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x2b41d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B41D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B41D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41D0u;
        // 0x2b41d4: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B41D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B41D8u;
}
