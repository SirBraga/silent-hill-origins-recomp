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

// Function: sub_0014D290
// Address: 0x14d290 - 0x14d2c0
void sub_0014D290_0x14d290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D290_0x14d290");
#endif

    ctx->pc = 0x14d290u;

    // 0x14d290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d294: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x14d294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x14d298: 0xac820150  sw          $v0, 0x150($a0)
    ctx->pc = 0x14d298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 2));
    // 0x14d29c: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x14d29cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14d2a0: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x14d2a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x14d2a4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x14d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14d2a8: 0xb0820147  sdl         $v0, 0x147($a0)
    ctx->pc = 0x14d2a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d2ac: 0xb4820140  sdr         $v0, 0x140($a0)
    ctx->pc = 0x14d2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d2b0: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x14d2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x14d2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x14D2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D2BCu;
    // 0x14d2bc: 0x0  nop
    ctx->pc = 0x14d2bcu;
    // NOP
    ctx->pc = 0x14d2c0u;
}
