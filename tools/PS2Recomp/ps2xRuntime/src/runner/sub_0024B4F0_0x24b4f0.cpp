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

// Function: sub_0024B4F0
// Address: 0x24b4f0 - 0x24b528
void sub_0024B4F0_0x24b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B4F0_0x24b4f0");
#endif

    ctx->pc = 0x24b4f0u;

    // 0x24b4f0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x24b4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x24b4f4: 0x8ca53f60  lw          $a1, 0x3F60($a1)
    ctx->pc = 0x24b4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3F60u));
    // 0x24b4f8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x24b4fc: 0x24630fd4  addiu       $v1, $v1, 0xFD4
    ctx->pc = 0x24b4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4052));
    // 0x24b500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b504: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x24b504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24b508: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x24b508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x24b50c: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x24b50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x24b510: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x24b510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x24b514: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x24b514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24b518: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x24b518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24b51c: 0x3e00008  jr          $ra
    ctx->pc = 0x24B51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B51Cu;
        // 0x24b520: 0xaca60008  sw          $a2, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B524u;
    // 0x24b524: 0x0  nop
    ctx->pc = 0x24b524u;
    // NOP
    ctx->pc = 0x24b528u;
}
