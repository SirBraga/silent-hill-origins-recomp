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

// Function: sub_002F0560
// Address: 0x2f0560 - 0x2f0598
void sub_002F0560_0x2f0560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0560_0x2f0560");
#endif

    ctx->pc = 0x2f0560u;

    // 0x2f0560: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2f0560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0564: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f0564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0568: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2f0568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2f056c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2f056cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0570: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2f0570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2f0574: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2f0574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0578: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2f0578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2f057c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2f057cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0580: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2f0580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2f0584: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x2f0584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0588: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x2f0588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2f058c: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x2f058cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0590: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0590u;
        // 0x2f0594: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0598u;
}
