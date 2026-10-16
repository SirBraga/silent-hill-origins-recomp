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

// Function: sub_001A7358
// Address: 0x1a7358 - 0x1a7678
void sub_001A7358_0x1a7358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7358_0x1a7358");
#endif

    switch (ctx->pc) {
        case 0x1a73a8u: goto label_1a73a8;
        case 0x1a7530u: goto label_1a7530;
        case 0x1a7540u: goto label_1a7540;
        case 0x1a7558u: goto label_1a7558;
        case 0x1a7570u: goto label_1a7570;
        case 0x1a75a8u: goto label_1a75a8;
        case 0x1a75f8u: goto label_1a75f8;
        case 0x1a7628u: goto label_1a7628;
        default: break;
    }

    ctx->pc = 0x1a7358u;

    // 0x1a7358: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1a7358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1a735c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a735cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7360: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x1a7360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x1a7364: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x1a7364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7368: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x1a7368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x1a736c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a736cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7370: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x1a7370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x1a7374: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1a7374u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7378: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x1a7378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
    // 0x1a737c: 0x27b50054  addiu       $s5, $sp, 0x54
    ctx->pc = 0x1a737cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1a7380: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x1a7380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
    // 0x1a7384: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a7384u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7388: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x1a7388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x1a738c: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1a738cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7390: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x1a7390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x1a7394: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1a7394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7398: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x1a7398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x1a739c: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x1a739cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
    // 0x1a73a0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1a73a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1a73a4: 0xafa700c0  sw          $a3, 0xC0($sp)
    ctx->pc = 0x1a73a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 7));
label_1a73a8:
    // 0x1a73a8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1a73a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1a73ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a73acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a73b0: 0x0  nop
    ctx->pc = 0x1a73b0u;
    // NOP
    // 0x1a73b4: 0x0  nop
    ctx->pc = 0x1a73b4u;
    // NOP
    // 0x1a73b8: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A73B8u;
    {
        const bool branch_taken_0x1a73b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1A73BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73B8u;
        // 0x1a73bc: 0x2442001c  addiu       $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73b8) {
            ctx->pc = 0x1A73A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a73a8;
        }
    }
    ctx->pc = 0x1A73C0u;
    // 0x1a73c0: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x1a73c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a73c4: 0x24910028  addiu       $s1, $a0, 0x28
    ctx->pc = 0x1a73c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x1a73c8: 0xc484000c  lwc1        $f4, 0xC($a0)
    ctx->pc = 0x1a73c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a73cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a73ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a73d0: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x1a73d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a73d4: 0x26770008  addiu       $s7, $s3, 0x8
    ctx->pc = 0x1a73d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1a73d8: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x1a73d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a73dc: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1a73dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a73e0: 0xe7a50080  swc1        $f5, 0x80($sp)
    ctx->pc = 0x1a73e0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1a73e4: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x1a73e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1a73e8: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x1a73e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1a73ec: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x1a73ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1a73f0: 0x6ba20087  ldl         $v0, 0x87($sp)
    ctx->pc = 0x1a73f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a73f4: 0x6fa20080  ldr         $v0, 0x80($sp)
    ctx->pc = 0x1a73f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a73f8: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x1a73f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a73fc: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x1a73fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7400: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x1a7400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a7404: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x1a7404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a7408: 0xb3a2006f  sdl         $v0, 0x6F($sp)
    ctx->pc = 0x1a7408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a740c: 0xb7a20068  sdr         $v0, 0x68($sp)
    ctx->pc = 0x1a740cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7410: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1a7410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x1a7414: 0x6ba20067  ldl         $v0, 0x67($sp)
    ctx->pc = 0x1a7414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a7418: 0x6fa20060  ldr         $v0, 0x60($sp)
    ctx->pc = 0x1a7418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a741c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1a741cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7420: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1a7420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7424: 0x6ba2006f  ldl         $v0, 0x6F($sp)
    ctx->pc = 0x1a7424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a7428: 0x6fa20068  ldr         $v0, 0x68($sp)
    ctx->pc = 0x1a7428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a742c: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x1a742cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7430: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x1a7430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7434: 0x6ba20077  ldl         $v0, 0x77($sp)
    ctx->pc = 0x1a7434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a7438: 0x6fa20070  ldr         $v0, 0x70($sp)
    ctx->pc = 0x1a7438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a743c: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1a743cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7440: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x1a7440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7444: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x1a7444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7448: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x1a7448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a744c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1a744cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a7450: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x1a7450u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1a7454: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1a7454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1a7458: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x1a7458u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1a745c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1a745cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1a7460: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x1a7460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1a7464: 0x6ba200a7  ldl         $v0, 0xA7($sp)
    ctx->pc = 0x1a7464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a7468: 0x6fa200a0  ldr         $v0, 0xA0($sp)
    ctx->pc = 0x1a7468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a746c: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x1a746cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7470: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x1a7470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7474: 0x6ba600b7  ldl         $a2, 0xB7($sp)
    ctx->pc = 0x1a7474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1a7478: 0x6fa600b0  ldr         $a2, 0xB0($sp)
    ctx->pc = 0x1a7478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1a747c: 0xb3a6006f  sdl         $a2, 0x6F($sp)
    ctx->pc = 0x1a747cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7480: 0xb7a60068  sdr         $a2, 0x68($sp)
    ctx->pc = 0x1a7480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7484: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1a7484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x1a7488: 0x6ba50067  ldl         $a1, 0x67($sp)
    ctx->pc = 0x1a7488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1a748c: 0x6fa50060  ldr         $a1, 0x60($sp)
    ctx->pc = 0x1a748cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1a7490: 0xb3a50023  sdl         $a1, 0x23($sp)
    ctx->pc = 0x1a7490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7494: 0xb7a5001c  sdr         $a1, 0x1C($sp)
    ctx->pc = 0x1a7494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7498: 0x6ba4006f  ldl         $a0, 0x6F($sp)
    ctx->pc = 0x1a7498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1a749c: 0x6fa40068  ldr         $a0, 0x68($sp)
    ctx->pc = 0x1a749cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1a74a0: 0xb3a4002b  sdl         $a0, 0x2B($sp)
    ctx->pc = 0x1a74a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a74a4: 0xb7a40024  sdr         $a0, 0x24($sp)
    ctx->pc = 0x1a74a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a74a8: 0x6ba30077  ldl         $v1, 0x77($sp)
    ctx->pc = 0x1a74a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a74ac: 0x6fa30070  ldr         $v1, 0x70($sp)
    ctx->pc = 0x1a74acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a74b0: 0xb3a30033  sdl         $v1, 0x33($sp)
    ctx->pc = 0x1a74b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a74b4: 0xb7a3002c  sdr         $v1, 0x2C($sp)
    ctx->pc = 0x1a74b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a74b8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1a74b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1a74bc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1a74bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a74c0: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1a74c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1a74c4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1a74c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1a74c8: 0xe7a50090  swc1        $f5, 0x90($sp)
    ctx->pc = 0x1a74c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1a74cc: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x1a74ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1a74d0: 0x6ba20087  ldl         $v0, 0x87($sp)
    ctx->pc = 0x1a74d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a74d4: 0x6fa20080  ldr         $v0, 0x80($sp)
    ctx->pc = 0x1a74d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a74d8: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x1a74d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a74dc: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x1a74dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a74e0: 0x6ba60097  ldl         $a2, 0x97($sp)
    ctx->pc = 0x1a74e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1a74e4: 0x6fa60090  ldr         $a2, 0x90($sp)
    ctx->pc = 0x1a74e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1a74e8: 0xb3a6006f  sdl         $a2, 0x6F($sp)
    ctx->pc = 0x1a74e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a74ec: 0xb7a60068  sdr         $a2, 0x68($sp)
    ctx->pc = 0x1a74ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a74f0: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1a74f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x1a74f4: 0x6ba50067  ldl         $a1, 0x67($sp)
    ctx->pc = 0x1a74f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1a74f8: 0x6fa50060  ldr         $a1, 0x60($sp)
    ctx->pc = 0x1a74f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1a74fc: 0xb3a5003f  sdl         $a1, 0x3F($sp)
    ctx->pc = 0x1a74fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7500: 0xb7a50038  sdr         $a1, 0x38($sp)
    ctx->pc = 0x1a7500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7504: 0x6ba4006f  ldl         $a0, 0x6F($sp)
    ctx->pc = 0x1a7504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1a7508: 0x6fa40068  ldr         $a0, 0x68($sp)
    ctx->pc = 0x1a7508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1a750c: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x1a750cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7510: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x1a7510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7514: 0x6ba30077  ldl         $v1, 0x77($sp)
    ctx->pc = 0x1a7514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a7518: 0x6fa30070  ldr         $v1, 0x70($sp)
    ctx->pc = 0x1a7518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a751c: 0xb3a3004f  sdl         $v1, 0x4F($sp)
    ctx->pc = 0x1a751cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7520: 0xb7a30048  sdr         $v1, 0x48($sp)
    ctx->pc = 0x1a7520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7524: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1a7524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a7528: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1a7528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1a752c: 0x0  nop
    ctx->pc = 0x1a752cu;
    // NOP
label_1a7530:
    // 0x1a7530: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a7530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a7534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7538: 0xc0695d6  jal         func_1A5758
    ctx->pc = 0x1A7538u;
    SET_GPR_U32(ctx, 31, 0x1A7540u);
    ctx->pc = 0x1A753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7538u;
    // 0x1a753c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A5758u, 0x1A7538u, 0x1A7540u)) {
        return;
    }
    ctx->pc = 0x1A7540u;
label_1a7540:
    // 0x1a7540: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a7540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7544: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A7544u;
    {
        const bool branch_taken_0x1a7544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A7548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7544u;
        // 0x1a7548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7544) {
            ctx->pc = 0x1A75C8u;
            goto label_1a75c8;
        }
    }
    ctx->pc = 0x1A754Cu;
    // 0x1a754c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a754cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a7550: 0xc0695d6  jal         func_1A5758
    ctx->pc = 0x1A7550u;
    SET_GPR_U32(ctx, 31, 0x1A7558u);
    ctx->pc = 0x1A7554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7550u;
    // 0x1a7554: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A5758u, 0x1A7550u, 0x1A7558u)) {
        return;
    }
    ctx->pc = 0x1A7558u;
label_1a7558:
    // 0x1a7558: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a7558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a755c: 0x1044001b  beq         $v0, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A755Cu;
    {
        const bool branch_taken_0x1a755c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1A7560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A755Cu;
        // 0x1a7560: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a755c) {
            ctx->pc = 0x1A75CCu;
            goto label_1a75cc;
        }
    }
    ctx->pc = 0x1A7564u;
    // 0x1a7564: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7568: 0xc069576  jal         func_1A55D8
    ctx->pc = 0x1A7568u;
    SET_GPR_U32(ctx, 31, 0x1A7570u);
    ctx->pc = 0x1A756Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7568u;
    // 0x1a756c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A55D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A55D8u, 0x1A7568u, 0x1A7570u)) {
        return;
    }
    ctx->pc = 0x1A7570u;
label_1a7570:
    // 0x1a7570: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1a7570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1a7574: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a7574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a7578: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A7578u;
    {
        const bool branch_taken_0x1a7578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7578u;
        // 0x1a757c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7578) {
            ctx->pc = 0x1A75CCu;
            goto label_1a75cc;
        }
    }
    ctx->pc = 0x1A7580u;
    // 0x1a7580: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1a7580u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a7584: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1a7584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a7588: 0x50450002  beql        $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7588u;
    {
        const bool branch_taken_0x1a7588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1a7588) {
            ctx->pc = 0x1A758Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7588u;
            // 0x1a758c: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7594u;
            goto label_1a7594;
        }
    }
    ctx->pc = 0x1A7590u;
    // 0x1a7590: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x1a7590u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
label_1a7594:
    // 0x1a7594: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x1a7594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a7598: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1a7598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a759c: 0x13a20008  beq         $sp, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A759Cu;
    {
        const bool branch_taken_0x1a759c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A75A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A759Cu;
        // 0x1a75a0: 0xacd20000  sw          $s2, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a759c) {
            ctx->pc = 0x1A75C0u;
            goto label_1a75c0;
        }
    }
    ctx->pc = 0x1A75A4u;
    // 0x1a75a4: 0x2442ffe4  addiu       $v0, $v0, -0x1C
    ctx->pc = 0x1a75a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
label_1a75a8:
    // 0x1a75a8: 0x0  nop
    ctx->pc = 0x1a75a8u;
    // NOP
    // 0x1a75ac: 0x0  nop
    ctx->pc = 0x1a75acu;
    // NOP
    // 0x1a75b0: 0x0  nop
    ctx->pc = 0x1a75b0u;
    // NOP
    // 0x1a75b4: 0x0  nop
    ctx->pc = 0x1a75b4u;
    // NOP
    // 0x1a75b8: 0x17a2fffb  bne         $sp, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A75B8u;
    {
        const bool branch_taken_0x1a75b8 = (GPR_U64(ctx, 29) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A75BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75B8u;
        // 0x1a75bc: 0x2442ffe4  addiu       $v0, $v0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75b8) {
            ctx->pc = 0x1A75A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a75a8;
        }
    }
    ctx->pc = 0x1A75C0u;
label_1a75c0:
    // 0x1a75c0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1A75C0u;
    {
        const bool branch_taken_0x1a75c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75C0u;
        // 0x1a75c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75c0) {
            ctx->pc = 0x1A7644u;
            goto label_1a7644;
        }
    }
    ctx->pc = 0x1A75C8u;
label_1a75c8:
    // 0x1a75c8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1a75c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1a75cc:
    // 0x1a75cc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a75ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a75d0: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1a75d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1a75d4: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x1a75d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a75d8: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1A75D8u;
    {
        const bool branch_taken_0x1a75d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A75DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75D8u;
        // 0x1a75dc: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75d8) {
            ctx->pc = 0x1A7530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7530;
        }
    }
    ctx->pc = 0x1A75E0u;
    // 0x1a75e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a75e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a75e4: 0x16c2000c  bne         $s6, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A75E4u;
    {
        const bool branch_taken_0x1a75e4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A75E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75E4u;
        // 0x1a75e8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75e4) {
            ctx->pc = 0x1A7618u;
            goto label_1a7618;
        }
    }
    ctx->pc = 0x1A75ECu;
    // 0x1a75ec: 0x53a20015  beql        $sp, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A75ECu;
    {
        const bool branch_taken_0x1a75ec = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a75ec) {
            ctx->pc = 0x1A75F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A75ECu;
            // 0x1a75f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7644u;
            goto label_1a7644;
        }
    }
    ctx->pc = 0x1A75F4u;
    // 0x1a75f4: 0x2442ffe4  addiu       $v0, $v0, -0x1C
    ctx->pc = 0x1a75f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
label_1a75f8:
    // 0x1a75f8: 0x0  nop
    ctx->pc = 0x1a75f8u;
    // NOP
    // 0x1a75fc: 0x0  nop
    ctx->pc = 0x1a75fcu;
    // NOP
    // 0x1a7600: 0x0  nop
    ctx->pc = 0x1a7600u;
    // NOP
    // 0x1a7604: 0x0  nop
    ctx->pc = 0x1a7604u;
    // NOP
    // 0x1a7608: 0x17a2fffb  bne         $sp, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A7608u;
    {
        const bool branch_taken_0x1a7608 = (GPR_U64(ctx, 29) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7608u;
        // 0x1a760c: 0x2442ffe4  addiu       $v0, $v0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7608) {
            ctx->pc = 0x1A75F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a75f8;
        }
    }
    ctx->pc = 0x1A7610u;
    // 0x1a7610: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A7610u;
    {
        const bool branch_taken_0x1a7610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7610u;
        // 0x1a7614: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7610) {
            ctx->pc = 0x1A7644u;
            goto label_1a7644;
        }
    }
    ctx->pc = 0x1A7618u;
label_1a7618:
    // 0x1a7618: 0x53a2000a  beql        $sp, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A7618u;
    {
        const bool branch_taken_0x1a7618 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a7618) {
            ctx->pc = 0x1A761Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7618u;
            // 0x1a761c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7644u;
            goto label_1a7644;
        }
    }
    ctx->pc = 0x1A7620u;
    // 0x1a7620: 0x2442ffe4  addiu       $v0, $v0, -0x1C
    ctx->pc = 0x1a7620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x1a7624: 0x0  nop
    ctx->pc = 0x1a7624u;
    // NOP
label_1a7628:
    // 0x1a7628: 0x0  nop
    ctx->pc = 0x1a7628u;
    // NOP
    // 0x1a762c: 0x0  nop
    ctx->pc = 0x1a762cu;
    // NOP
    // 0x1a7630: 0x0  nop
    ctx->pc = 0x1a7630u;
    // NOP
    // 0x1a7634: 0x0  nop
    ctx->pc = 0x1a7634u;
    // NOP
    // 0x1a7638: 0x17a2fffb  bne         $sp, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A7638u;
    {
        const bool branch_taken_0x1a7638 = (GPR_U64(ctx, 29) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7638u;
        // 0x1a763c: 0x2442ffe4  addiu       $v0, $v0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7638) {
            ctx->pc = 0x1A7628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7628;
        }
    }
    ctx->pc = 0x1A7640u;
    // 0x1a7640: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a7640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7644:
    // 0x1a7644: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x1a7644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1a7648: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x1a7648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1a764c: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x1a764cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1a7650: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x1a7650u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1a7654: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x1a7654u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1a7658: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x1a7658u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1a765c: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x1a765cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a7660: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x1a7660u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a7664: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x1a7664u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a7668: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1a7668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a766c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A766Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A766Cu;
        // 0x1a7670: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A766Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7674u;
    // 0x1a7674: 0x0  nop
    ctx->pc = 0x1a7674u;
    // NOP
    ctx->pc = 0x1a7678u;
}
