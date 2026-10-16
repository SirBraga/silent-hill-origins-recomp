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

// Function: sub_00126850
// Address: 0x126850 - 0x126878
void sub_00126850_0x126850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126850_0x126850");
#endif

    ctx->pc = 0x126850u;

    // 0x126850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x126850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126854: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x126854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x126858: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x126858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12685c: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x12685cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x126860: 0xb0830e77  sdl         $v1, 0xE77($a0)
    ctx->pc = 0x126860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3703); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x126864: 0xb4830e70  sdr         $v1, 0xE70($a0)
    ctx->pc = 0x126864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3696); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x126868: 0xac860e78  sw          $a2, 0xE78($a0)
    ctx->pc = 0x126868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3704), GPR_U32(ctx, 6));
    // 0x12686c: 0x3e00008  jr          $ra
    ctx->pc = 0x12686Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12686Cu;
        // 0x126870: 0xac820e60  sw          $v0, 0xE60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12686Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126874u;
    // 0x126874: 0x0  nop
    ctx->pc = 0x126874u;
    // NOP
    ctx->pc = 0x126878u;
}
