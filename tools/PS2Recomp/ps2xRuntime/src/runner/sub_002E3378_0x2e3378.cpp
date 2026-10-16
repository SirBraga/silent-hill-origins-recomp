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

// Function: sub_002E3378
// Address: 0x2e3378 - 0x2e3408
void sub_002E3378_0x2e3378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3378_0x2e3378");
#endif

    switch (ctx->pc) {
        case 0x2e33a0u: goto label_2e33a0;
        default: break;
    }

    ctx->pc = 0x2e3378u;

    // 0x2e3378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e3378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e337c: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2e337cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2e3380: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e3380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e3384: 0x34c60806  ori         $a2, $a2, 0x806
    ctx->pc = 0x2e3384u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
    // 0x2e3388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e338c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e338cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3390: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2e3390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2e3394: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e3394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3398: 0xc0b708c  jal         func_2DC230
    ctx->pc = 0x2E3398u;
    SET_GPR_U32(ctx, 31, 0x2E33A0u);
    ctx->pc = 0x2E339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3398u;
    // 0x2e339c: 0x8e050034  lw          $a1, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC230u, 0x2E3398u, 0x2E33A0u)) {
        return;
    }
    ctx->pc = 0x2E33A0u;
label_2e33a0:
    // 0x2e33a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E33A0u;
    {
        const bool branch_taken_0x2e33a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E33A0u;
        // 0x2e33a4: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e33a0) {
            ctx->pc = 0x2E33B0u;
            goto label_2e33b0;
        }
    }
    ctx->pc = 0x2E33A8u;
    // 0x2e33a8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E33A8u;
    {
        const bool branch_taken_0x2e33a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E33A8u;
        // 0x2e33ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e33a8) {
            ctx->pc = 0x2E33F8u;
            goto label_2e33f8;
        }
    }
    ctx->pc = 0x2E33B0u;
label_2e33b0:
    // 0x2e33b0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2e33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2e33b4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E33B4u;
    {
        const bool branch_taken_0x2e33b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E33B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E33B4u;
        // 0x2e33b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e33b4) {
            ctx->pc = 0x2E33F8u;
            goto label_2e33f8;
        }
    }
    ctx->pc = 0x2E33BCu;
    // 0x2e33bc: 0x6a020017  ldl         $v0, 0x17($s0)
    ctx->pc = 0x2e33bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2e33c0: 0x6e020010  ldr         $v0, 0x10($s0)
    ctx->pc = 0x2e33c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2e33c4: 0x6a03001f  ldl         $v1, 0x1F($s0)
    ctx->pc = 0x2e33c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e33c8: 0x6e030018  ldr         $v1, 0x18($s0)
    ctx->pc = 0x2e33c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e33cc: 0x6a040027  ldl         $a0, 0x27($s0)
    ctx->pc = 0x2e33ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2e33d0: 0x6e040020  ldr         $a0, 0x20($s0)
    ctx->pc = 0x2e33d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2e33d4: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x2e33d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e33d8: 0xb2020033  sdl         $v0, 0x33($s0)
    ctx->pc = 0x2e33d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e33dc: 0xb602002c  sdr         $v0, 0x2C($s0)
    ctx->pc = 0x2e33dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e33e0: 0xb203003b  sdl         $v1, 0x3B($s0)
    ctx->pc = 0x2e33e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e33e4: 0xb6030034  sdr         $v1, 0x34($s0)
    ctx->pc = 0x2e33e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e33e8: 0xb2040043  sdl         $a0, 0x43($s0)
    ctx->pc = 0x2e33e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e33ec: 0xb604003c  sdr         $a0, 0x3C($s0)
    ctx->pc = 0x2e33ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e33f0: 0xae050044  sw          $a1, 0x44($s0)
    ctx->pc = 0x2e33f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 5));
    // 0x2e33f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e33f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e33f8:
    // 0x2e33f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e33f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e33fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e33fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3400: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3400u;
        // 0x2e3404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3408u;
}
