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

// Function: sub_0024B4B8
// Address: 0x24b4b8 - 0x24b4f0
void sub_0024B4B8_0x24b4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B4B8_0x24b4b8");
#endif

    ctx->pc = 0x24b4b8u;

    // 0x24b4b8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x24b4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x24b4bc: 0x8ca53f60  lw          $a1, 0x3F60($a1)
    ctx->pc = 0x24b4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3F60u));
    // 0x24b4c0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x24b4c4: 0x24630fd4  addiu       $v1, $v1, 0xFD4
    ctx->pc = 0x24b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4052));
    // 0x24b4c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b4cc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x24b4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24b4d0: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x24b4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x24b4d4: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x24b4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x24b4d8: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x24b4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x24b4dc: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x24b4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24b4e0: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x24b4e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24b4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x24B4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B4E4u;
        // 0x24b4e8: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B4ECu;
    // 0x24b4ec: 0x0  nop
    ctx->pc = 0x24b4ecu;
    // NOP
    ctx->pc = 0x24b4f0u;
}
