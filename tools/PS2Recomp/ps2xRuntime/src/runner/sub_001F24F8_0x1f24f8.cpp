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

// Function: sub_001F24F8
// Address: 0x1f24f8 - 0x1f2558
void sub_001F24F8_0x1f24f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F24F8_0x1f24f8");
#endif

    ctx->pc = 0x1f24f8u;

    // 0x1f24f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f24f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f24fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F24FCu;
    {
        const bool branch_taken_0x1f24fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24FCu;
        // 0x1f2500: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f24fc) {
            ctx->pc = 0x1F2510u;
            goto label_1f2510;
        }
    }
    ctx->pc = 0x1F2504u;
    // 0x1f2504: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f2504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f2508: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2508u;
    {
        const bool branch_taken_0x1f2508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2508u;
        // 0x1f250c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2508) {
            ctx->pc = 0x1F2528u;
            goto label_1f2528;
        }
    }
    ctx->pc = 0x1F2510u;
label_1f2510:
    // 0x1f2510: 0x8c820804  lw          $v0, 0x804($a0)
    ctx->pc = 0x1f2510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x1f2514: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1f2514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f2518: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1f2518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1f251c: 0xac830804  sw          $v1, 0x804($a0)
    ctx->pc = 0x1f251cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2052), GPR_U32(ctx, 3));
    // 0x1f2520: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1f2520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1f2524: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x1f2524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1f2528:
    // 0x1f2528: 0xacc4001c  sw          $a0, 0x1C($a2)
    ctx->pc = 0x1f2528u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 4));
    // 0x1f252c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1f252cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2530: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x1f2530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f2534: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x1f2534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f2538: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x1f2538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f253c: 0xb0c3000b  sdl         $v1, 0xB($a2)
    ctx->pc = 0x1f253cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2540: 0xb4c30004  sdr         $v1, 0x4($a2)
    ctx->pc = 0x1f2540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2544: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x1f2544u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
    // 0x1f2548: 0x8c832720  lw          $v1, 0x2720($a0)
    ctx->pc = 0x1f2548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10016)));
    // 0x1f254c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1f254cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1f2550: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2550u;
        // 0x1f2554: 0xac862720  sw          $a2, 0x2720($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 10016), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2558u;
}
