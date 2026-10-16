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

// Function: sub_0013E818
// Address: 0x13e818 - 0x13e850
void sub_0013E818_0x13e818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E818_0x13e818");
#endif

    ctx->pc = 0x13e818u;

    // 0x13e818: 0x688201a7  ldl         $v0, 0x1A7($a0)
    ctx->pc = 0x13e818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x13e81c: 0x6c8201a0  ldr         $v0, 0x1A0($a0)
    ctx->pc = 0x13e81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x13e820: 0x8c8301a8  lw          $v1, 0x1A8($a0)
    ctx->pc = 0x13e820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 424)));
    // 0x13e824: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x13e824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e828: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x13e828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13e82c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x13e82cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x13e830: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13e830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13e834: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13e834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13e838: 0xc48100e0  lwc1        $f1, 0xE0($a0)
    ctx->pc = 0x13e838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e83c: 0xc48000e8  lwc1        $f0, 0xE8($a0)
    ctx->pc = 0x13e83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e840: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13e840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13e844: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x13e844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x13e848: 0x3e00008  jr          $ra
    ctx->pc = 0x13E848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E848u;
        // 0x13e84c: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E850u;
}
