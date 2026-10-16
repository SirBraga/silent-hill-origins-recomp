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

// Function: sub_001DF7E0
// Address: 0x1df7e0 - 0x1df838
void sub_001DF7E0_0x1df7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF7E0_0x1df7e0");
#endif

    ctx->pc = 0x1df7e0u;

    // 0x1df7e0: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x1df7e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
    // 0x1df7e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1df7e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df7e8: 0x8d07e6c8  lw          $a3, -0x1938($t0)
    ctx->pc = 0x1df7e8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x33E6C8u));
    // 0x1df7ec: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x1df7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1df7f0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1df7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1df7f4: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x1df7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1df7f8: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1df7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1df7fc: 0x8d03e6c8  lw          $v1, -0x1938($t0)
    ctx->pc = 0x1df7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E6C8u));
    // 0x1df800: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x1df800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1df804: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1df804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1df808: 0x68e6000b  ldl         $a2, 0xB($a3)
    ctx->pc = 0x1df808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1df80c: 0x6ce60004  ldr         $a2, 0x4($a3)
    ctx->pc = 0x1df80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1df810: 0x8ce9000c  lw          $t1, 0xC($a3)
    ctx->pc = 0x1df810u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1df814: 0xb066000b  sdl         $a2, 0xB($v1)
    ctx->pc = 0x1df814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df818: 0xb4660004  sdr         $a2, 0x4($v1)
    ctx->pc = 0x1df818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df81c: 0xac69000c  sw          $t1, 0xC($v1)
    ctx->pc = 0x1df81cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
    // 0x1df820: 0x8d06e6c8  lw          $a2, -0x1938($t0)
    ctx->pc = 0x1df820u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x33E6C8u));
    // 0x1df824: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1df824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1df828: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1df828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1df82c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1df82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df830: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF830u;
        // 0x1df834: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF838u;
}
