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

// Function: sub_001194D8
// Address: 0x1194d8 - 0x119510
void sub_001194D8_0x1194d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001194D8_0x1194d8");
#endif

    ctx->pc = 0x1194d8u;

    // 0x1194d8: 0x8c820280  lw          $v0, 0x280($a0)
    ctx->pc = 0x1194d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 640)));
    // 0x1194dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1194DCu;
    {
        const bool branch_taken_0x1194dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194DCu;
        // 0x1194e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194dc) {
            ctx->pc = 0x119504u;
            goto label_119504;
        }
    }
    ctx->pc = 0x1194E4u;
    // 0x1194e4: 0x688300f3  ldl         $v1, 0xF3($a0)
    ctx->pc = 0x1194e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1194e8: 0x6c8300ec  ldr         $v1, 0xEC($a0)
    ctx->pc = 0x1194e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1194ec: 0x8c8500f4  lw          $a1, 0xF4($a0)
    ctx->pc = 0x1194ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x1194f0: 0xb083027b  sdl         $v1, 0x27B($a0)
    ctx->pc = 0x1194f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 635); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1194f4: 0xb4830274  sdr         $v1, 0x274($a0)
    ctx->pc = 0x1194f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 628); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1194f8: 0xac85027c  sw          $a1, 0x27C($a0)
    ctx->pc = 0x1194f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 636), GPR_U32(ctx, 5));
    // 0x1194fc: 0xac820284  sw          $v0, 0x284($a0)
    ctx->pc = 0x1194fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 2));
    // 0x119500: 0xac800288  sw          $zero, 0x288($a0)
    ctx->pc = 0x119500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 648), GPR_U32(ctx, 0));
label_119504:
    // 0x119504: 0x3e00008  jr          $ra
    ctx->pc = 0x119504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11950Cu;
    // 0x11950c: 0x0  nop
    ctx->pc = 0x11950cu;
    // NOP
    ctx->pc = 0x119510u;
}
