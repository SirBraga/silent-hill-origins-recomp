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

// Function: sub_00129880
// Address: 0x129880 - 0x1299e8
void sub_00129880_0x129880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129880_0x129880");
#endif

    switch (ctx->pc) {
        case 0x1298c4u: goto label_1298c4;
        case 0x1298ccu: goto label_1298cc;
        case 0x1298ecu: goto label_1298ec;
        case 0x12992cu: goto label_12992c;
        default: break;
    }

    ctx->pc = 0x129880u;

    // 0x129880: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x129880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x129884: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x129884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x129888: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x129888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x12988c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12988cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129890: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x129890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x129894: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x129894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129898: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x129898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12989c: 0x26510040  addiu       $s1, $s2, 0x40
    ctx->pc = 0x12989cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1298a0: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x1298a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1298a4: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x1298a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1298a8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1298a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1298ac: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1298acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1298b0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1298b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1298b4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1298b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1298b8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1298b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1298bc: 0xc04f0c2  jal         func_13C308
    ctx->pc = 0x1298BCu;
    SET_GPR_U32(ctx, 31, 0x1298C4u);
    ctx->pc = 0x1298C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1298BCu;
    // 0x1298c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x1298BCu, 0x1298C4u)) {
        return;
    }
    ctx->pc = 0x1298C4u;
label_1298c4:
    // 0x1298c4: 0xc04f0f0  jal         func_13C3C0
    ctx->pc = 0x1298C4u;
    SET_GPR_U32(ctx, 31, 0x1298CCu);
    ctx->pc = 0x1298C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1298C4u;
    // 0x1298c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x1298C4u, 0x1298CCu)) {
        return;
    }
    ctx->pc = 0x1298CCu;
label_1298cc:
    // 0x1298cc: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x1298ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1298d0: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x1298d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1298d4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1298d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1298d8: 0xb2482757  sdl         $t0, 0x2757($s2)
    ctx->pc = 0x1298d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 10071); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1298dc: 0xb6482750  sdr         $t0, 0x2750($s2)
    ctx->pc = 0x1298dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 10064); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1298e0: 0xae432758  sw          $v1, 0x2758($s2)
    ctx->pc = 0x1298e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10072), GPR_U32(ctx, 3));
    // 0x1298e4: 0xc04f0f0  jal         func_13C3C0
    ctx->pc = 0x1298E4u;
    SET_GPR_U32(ctx, 31, 0x1298ECu);
    ctx->pc = 0x1298E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1298E4u;
    // 0x1298e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x1298E4u, 0x1298ECu)) {
        return;
    }
    ctx->pc = 0x1298ECu;
label_1298ec:
    // 0x1298ec: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x1298ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1298f0: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x1298f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1298f4: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x1298f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1298f8: 0xb2472777  sdl         $a3, 0x2777($s2)
    ctx->pc = 0x1298f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 10103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1298fc: 0xb6472770  sdr         $a3, 0x2770($s2)
    ctx->pc = 0x1298fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 10096); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129900: 0xae482778  sw          $t0, 0x2778($s2)
    ctx->pc = 0x129900u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10104), GPR_U32(ctx, 8));
    // 0x129904: 0x26452740  addiu       $a1, $s2, 0x2740
    ctx->pc = 0x129904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 10048));
    // 0x129908: 0x6a070007  ldl         $a3, 0x7($s0)
    ctx->pc = 0x129908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12990c: 0x6e070000  ldr         $a3, 0x0($s0)
    ctx->pc = 0x12990cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x129910: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x129910u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x129914: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x129914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129918: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x129918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12991c: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x12991cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x129920: 0x26442730  addiu       $a0, $s2, 0x2730
    ctx->pc = 0x129920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 10032));
    // 0x129924: 0xc06b2c4  jal         func_1ACB10
    ctx->pc = 0x129924u;
    SET_GPR_U32(ctx, 31, 0x12992Cu);
    ctx->pc = 0x129928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129924u;
    // 0x129928: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACB10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ACB10u, 0x129924u, 0x12992Cu)) {
        return;
    }
    ctx->pc = 0x12992Cu;
label_12992c:
    // 0x12992c: 0x6a040007  ldl         $a0, 0x7($s0)
    ctx->pc = 0x12992cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x129930: 0x6e040000  ldr         $a0, 0x0($s0)
    ctx->pc = 0x129930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x129934: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x129934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x129938: 0xb2442747  sdl         $a0, 0x2747($s2)
    ctx->pc = 0x129938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 10055); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12993c: 0xb6442740  sdr         $a0, 0x2740($s2)
    ctx->pc = 0x12993cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 10048); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129940: 0xae452748  sw          $a1, 0x2748($s2)
    ctx->pc = 0x129940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10056), GPR_U32(ctx, 5));
    // 0x129944: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x129944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129948: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x129948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x12994c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x12994cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x129950: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x129950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x129954: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x129954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129958: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x129958u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x12995c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x12995cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129960: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x129960u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x129964: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x129964u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x129968: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x129968u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x12996c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x12996cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x129970: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x129970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x129974: 0x6ba80047  ldl         $t0, 0x47($sp)
    ctx->pc = 0x129974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x129978: 0x6fa80040  ldr         $t0, 0x40($sp)
    ctx->pc = 0x129978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x12997c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129980: 0xb3a80037  sdl         $t0, 0x37($sp)
    ctx->pc = 0x129980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129984: 0xb7a80030  sdr         $t0, 0x30($sp)
    ctx->pc = 0x129984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129988: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x129988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x12998c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x12998cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x129990: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x129990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129994: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x129994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129998: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x129998u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x12999c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x12999cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1299a0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1299a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1299a4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1299a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1299a8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1299a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1299ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1299acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1299b0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1299b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1299b4: 0x0  nop
    ctx->pc = 0x1299b4u;
    // NOP
    // 0x1299b8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1299B8u;
    {
        const bool branch_taken_0x1299b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1299BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299B8u;
        // 0x1299bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299b8) {
            ctx->pc = 0x1299C8u;
            goto label_1299c8;
        }
    }
    ctx->pc = 0x1299C0u;
    // 0x1299c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1299c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1299c4: 0x0  nop
    ctx->pc = 0x1299c4u;
    // NOP
label_1299c8:
    // 0x1299c8: 0xae422a74  sw          $v0, 0x2A74($s2)
    ctx->pc = 0x1299c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10868), GPR_U32(ctx, 2));
    // 0x1299cc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1299ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1299d0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1299d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1299d4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1299d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1299d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1299d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1299dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1299DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1299E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299DCu;
        // 0x1299e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1299DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1299E4u;
    // 0x1299e4: 0x0  nop
    ctx->pc = 0x1299e4u;
    // NOP
    ctx->pc = 0x1299e8u;
}
