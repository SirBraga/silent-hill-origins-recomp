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

// Function: sub_001192E0
// Address: 0x1192e0 - 0x119480
void sub_001192E0_0x1192e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001192E0_0x1192e0");
#endif

    ctx->pc = 0x1192e0u;

    // 0x1192e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1192e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1192e4: 0x8c820238  lw          $v0, 0x238($a0)
    ctx->pc = 0x1192e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 568)));
    // 0x1192e8: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1192E8u;
    {
        const bool branch_taken_0x1192e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1192ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1192E8u;
        // 0x1192ec: 0xac830050  sw          $v1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1192e8) {
            ctx->pc = 0x119440u;
            goto label_119440;
        }
    }
    ctx->pc = 0x1192F0u;
    // 0x1192f0: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1192f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1192f4: 0x68850117  ldl         $a1, 0x117($a0)
    ctx->pc = 0x1192f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1192f8: 0x6c850110  ldr         $a1, 0x110($a0)
    ctx->pc = 0x1192f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1192fc: 0x6886011f  ldl         $a2, 0x11F($a0)
    ctx->pc = 0x1192fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x119300: 0x6c860118  ldr         $a2, 0x118($a0)
    ctx->pc = 0x119300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x119304: 0x68870127  ldl         $a3, 0x127($a0)
    ctx->pc = 0x119304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x119308: 0x6c870120  ldr         $a3, 0x120($a0)
    ctx->pc = 0x119308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11930c: 0x6888012f  ldl         $t0, 0x12F($a0)
    ctx->pc = 0x11930cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x119310: 0x6c880128  ldr         $t0, 0x128($a0)
    ctx->pc = 0x119310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x119314: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x119314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119318: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x119318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11931c: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x11931cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119320: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x119320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119324: 0xb0470027  sdl         $a3, 0x27($v0)
    ctx->pc = 0x119324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119328: 0xb4470020  sdr         $a3, 0x20($v0)
    ctx->pc = 0x119328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11932c: 0xb048002f  sdl         $t0, 0x2F($v0)
    ctx->pc = 0x11932cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119330: 0xb4480028  sdr         $t0, 0x28($v0)
    ctx->pc = 0x119330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119334: 0x68850137  ldl         $a1, 0x137($a0)
    ctx->pc = 0x119334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x119338: 0x6c850130  ldr         $a1, 0x130($a0)
    ctx->pc = 0x119338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x11933c: 0x6886013f  ldl         $a2, 0x13F($a0)
    ctx->pc = 0x11933cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x119340: 0x6c860138  ldr         $a2, 0x138($a0)
    ctx->pc = 0x119340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x119344: 0x68870147  ldl         $a3, 0x147($a0)
    ctx->pc = 0x119344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x119348: 0x6c870140  ldr         $a3, 0x140($a0)
    ctx->pc = 0x119348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11934c: 0x6888014f  ldl         $t0, 0x14F($a0)
    ctx->pc = 0x11934cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x119350: 0x6c880148  ldr         $t0, 0x148($a0)
    ctx->pc = 0x119350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x119354: 0xb0450037  sdl         $a1, 0x37($v0)
    ctx->pc = 0x119354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119358: 0xb4450030  sdr         $a1, 0x30($v0)
    ctx->pc = 0x119358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11935c: 0xb046003f  sdl         $a2, 0x3F($v0)
    ctx->pc = 0x11935cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119360: 0xb4460038  sdr         $a2, 0x38($v0)
    ctx->pc = 0x119360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119364: 0xb0470047  sdl         $a3, 0x47($v0)
    ctx->pc = 0x119364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119368: 0xb4470040  sdr         $a3, 0x40($v0)
    ctx->pc = 0x119368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11936c: 0xb048004f  sdl         $t0, 0x4F($v0)
    ctx->pc = 0x11936cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119370: 0xb4480048  sdr         $t0, 0x48($v0)
    ctx->pc = 0x119370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119374: 0x68820117  ldl         $v0, 0x117($a0)
    ctx->pc = 0x119374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x119378: 0x6c820110  ldr         $v0, 0x110($a0)
    ctx->pc = 0x119378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x11937c: 0x6885011f  ldl         $a1, 0x11F($a0)
    ctx->pc = 0x11937cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x119380: 0x6c850118  ldr         $a1, 0x118($a0)
    ctx->pc = 0x119380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x119384: 0x68860127  ldl         $a2, 0x127($a0)
    ctx->pc = 0x119384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x119388: 0x6c860120  ldr         $a2, 0x120($a0)
    ctx->pc = 0x119388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11938c: 0x6887012f  ldl         $a3, 0x12F($a0)
    ctx->pc = 0x11938cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x119390: 0x6c870128  ldr         $a3, 0x128($a0)
    ctx->pc = 0x119390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x119394: 0xb0820197  sdl         $v0, 0x197($a0)
    ctx->pc = 0x119394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119398: 0xb4820190  sdr         $v0, 0x190($a0)
    ctx->pc = 0x119398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11939c: 0xb085019f  sdl         $a1, 0x19F($a0)
    ctx->pc = 0x11939cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 415); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1193a0: 0xb4850198  sdr         $a1, 0x198($a0)
    ctx->pc = 0x1193a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 408); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1193a4: 0xb08601a7  sdl         $a2, 0x1A7($a0)
    ctx->pc = 0x1193a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1193a8: 0xb48601a0  sdr         $a2, 0x1A0($a0)
    ctx->pc = 0x1193a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1193ac: 0xb08701af  sdl         $a3, 0x1AF($a0)
    ctx->pc = 0x1193acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 431); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1193b0: 0xb48701a8  sdr         $a3, 0x1A8($a0)
    ctx->pc = 0x1193b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 424); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1193b4: 0x68820137  ldl         $v0, 0x137($a0)
    ctx->pc = 0x1193b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1193b8: 0x6c820130  ldr         $v0, 0x130($a0)
    ctx->pc = 0x1193b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1193bc: 0x6885013f  ldl         $a1, 0x13F($a0)
    ctx->pc = 0x1193bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1193c0: 0x6c850138  ldr         $a1, 0x138($a0)
    ctx->pc = 0x1193c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1193c4: 0x68860147  ldl         $a2, 0x147($a0)
    ctx->pc = 0x1193c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1193c8: 0x6c860140  ldr         $a2, 0x140($a0)
    ctx->pc = 0x1193c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1193cc: 0x6887014f  ldl         $a3, 0x14F($a0)
    ctx->pc = 0x1193ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1193d0: 0x6c870148  ldr         $a3, 0x148($a0)
    ctx->pc = 0x1193d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1193d4: 0xb08201b7  sdl         $v0, 0x1B7($a0)
    ctx->pc = 0x1193d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 439); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1193d8: 0xb48201b0  sdr         $v0, 0x1B0($a0)
    ctx->pc = 0x1193d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 432); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1193dc: 0xb08501bf  sdl         $a1, 0x1BF($a0)
    ctx->pc = 0x1193dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 447); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1193e0: 0xb48501b8  sdr         $a1, 0x1B8($a0)
    ctx->pc = 0x1193e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 440); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1193e4: 0xb08601c7  sdl         $a2, 0x1C7($a0)
    ctx->pc = 0x1193e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1193e8: 0xb48601c0  sdr         $a2, 0x1C0($a0)
    ctx->pc = 0x1193e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1193ec: 0xb08701cf  sdl         $a3, 0x1CF($a0)
    ctx->pc = 0x1193ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 463); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1193f0: 0xb48701c8  sdr         $a3, 0x1C8($a0)
    ctx->pc = 0x1193f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 456); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1193f4: 0x68880147  ldl         $t0, 0x147($a0)
    ctx->pc = 0x1193f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1193f8: 0x6c880140  ldr         $t0, 0x140($a0)
    ctx->pc = 0x1193f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1193fc: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x1193fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x119400: 0xb08800db  sdl         $t0, 0xDB($a0)
    ctx->pc = 0x119400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119404: 0xb48800d4  sdr         $t0, 0xD4($a0)
    ctx->pc = 0x119404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119408: 0xac8200dc  sw          $v0, 0xDC($a0)
    ctx->pc = 0x119408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 2));
    // 0x11940c: 0x68870147  ldl         $a3, 0x147($a0)
    ctx->pc = 0x11940cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x119410: 0x6c870140  ldr         $a3, 0x140($a0)
    ctx->pc = 0x119410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x119414: 0x8c880148  lw          $t0, 0x148($a0)
    ctx->pc = 0x119414u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x119418: 0xb08700e7  sdl         $a3, 0xE7($a0)
    ctx->pc = 0x119418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11941c: 0xb48700e0  sdr         $a3, 0xE0($a0)
    ctx->pc = 0x11941cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119420: 0xac8800e8  sw          $t0, 0xE8($a0)
    ctx->pc = 0x119420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 8));
    // 0x119424: 0x68860147  ldl         $a2, 0x147($a0)
    ctx->pc = 0x119424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x119428: 0x6c860140  ldr         $a2, 0x140($a0)
    ctx->pc = 0x119428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11942c: 0x8c870148  lw          $a3, 0x148($a0)
    ctx->pc = 0x11942cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x119430: 0xb08600f3  sdl         $a2, 0xF3($a0)
    ctx->pc = 0x119430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119434: 0xb48600ec  sdr         $a2, 0xEC($a0)
    ctx->pc = 0x119434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119438: 0xac8700f4  sw          $a3, 0xF4($a0)
    ctx->pc = 0x119438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 7));
    // 0x11943c: 0xac83020c  sw          $v1, 0x20C($a0)
    ctx->pc = 0x11943cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 3));
label_119440:
    // 0x119440: 0x8c820280  lw          $v0, 0x280($a0)
    ctx->pc = 0x119440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 640)));
    // 0x119444: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x119444u;
    {
        const bool branch_taken_0x119444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119444) {
            ctx->pc = 0x119474u;
            goto label_119474;
        }
    }
    ctx->pc = 0x11944Cu;
    // 0x11944c: 0x8c820288  lw          $v0, 0x288($a0)
    ctx->pc = 0x11944cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 648)));
    // 0x119450: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x119450u;
    {
        const bool branch_taken_0x119450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119450) {
            ctx->pc = 0x119474u;
            goto label_119474;
        }
    }
    ctx->pc = 0x119458u;
    // 0x119458: 0x688500f3  ldl         $a1, 0xF3($a0)
    ctx->pc = 0x119458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x11945c: 0x6c8500ec  ldr         $a1, 0xEC($a0)
    ctx->pc = 0x11945cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x119460: 0x8c8600f4  lw          $a2, 0xF4($a0)
    ctx->pc = 0x119460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x119464: 0xb085027b  sdl         $a1, 0x27B($a0)
    ctx->pc = 0x119464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 635); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x119468: 0xb4850274  sdr         $a1, 0x274($a0)
    ctx->pc = 0x119468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 628); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11946c: 0xac86027c  sw          $a2, 0x27C($a0)
    ctx->pc = 0x11946cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 636), GPR_U32(ctx, 6));
    // 0x119470: 0xac830284  sw          $v1, 0x284($a0)
    ctx->pc = 0x119470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 3));
label_119474:
    // 0x119474: 0x3e00008  jr          $ra
    ctx->pc = 0x119474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11947Cu;
    // 0x11947c: 0x0  nop
    ctx->pc = 0x11947cu;
    // NOP
    ctx->pc = 0x119480u;
}
