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

// Function: sub_002ECFB8
// Address: 0x2ecfb8 - 0x2ecfe0
void sub_002ECFB8_0x2ecfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECFB8_0x2ecfb8");
#endif

    ctx->pc = 0x2ecfb8u;

    // 0x2ecfb8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ecfb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecfbc: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2ecfbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ecfc0: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2ecfc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ecfc4: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2ecfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2ecfc8: 0xb043006b  sdl         $v1, 0x6B($v0)
    ctx->pc = 0x2ecfc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ecfcc: 0xb4430064  sdr         $v1, 0x64($v0)
    ctx->pc = 0x2ecfccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ecfd0: 0xac44006c  sw          $a0, 0x6C($v0)
    ctx->pc = 0x2ecfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 4));
    // 0x2ecfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECFDCu;
    // 0x2ecfdc: 0x0  nop
    ctx->pc = 0x2ecfdcu;
    // NOP
    ctx->pc = 0x2ecfe0u;
}
