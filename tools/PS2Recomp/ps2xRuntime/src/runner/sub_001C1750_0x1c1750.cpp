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

// Function: sub_001C1750
// Address: 0x1c1750 - 0x1c1780
void sub_001C1750_0x1c1750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1750_0x1c1750");
#endif

    switch (ctx->pc) {
        case 0x1c1758u: goto label_1c1758;
        default: break;
    }

    ctx->pc = 0x1c1750u;

    // 0x1c1750: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c1750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1754: 0x0  nop
    ctx->pc = 0x1c1754u;
    // NOP
label_1c1758:
    // 0x1c1758: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x1c1758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c175c: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x1c175cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c1760: 0xb0a3000f  sdl         $v1, 0xF($a1)
    ctx->pc = 0x1c1760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c1764: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x1c1764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c1768: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c1768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c176c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C176Cu;
    {
        const bool branch_taken_0x1c176c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1C1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C176Cu;
        // 0x1c1770: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c176c) {
            ctx->pc = 0x1C1758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1758;
        }
    }
    ctx->pc = 0x1C1774u;
    // 0x1c1774: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C177Cu;
    // 0x1c177c: 0x0  nop
    ctx->pc = 0x1c177cu;
    // NOP
    ctx->pc = 0x1c1780u;
}
