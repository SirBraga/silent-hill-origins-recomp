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

// Function: sub_002B53E8
// Address: 0x2b53e8 - 0x2b5c08
void sub_002B53E8_0x2b53e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B53E8_0x2b53e8");
#endif

    switch (ctx->pc) {
        case 0x2b55a0u: goto label_2b55a0;
        case 0x2b56d8u: goto label_2b56d8;
        case 0x2b571cu: goto label_2b571c;
        case 0x2b5744u: goto label_2b5744;
        case 0x2b577cu: goto label_2b577c;
        case 0x2b57a0u: goto label_2b57a0;
        case 0x2b57d8u: goto label_2b57d8;
        case 0x2b5890u: goto label_2b5890;
        default: break;
    }

    ctx->pc = 0x2b53e8u;

    // 0x2b53e8: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2b53e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x2b53ec: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2b53ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b53f0: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x2b53f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x2b53f4: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x2b53f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
    // 0x2b53f8: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x2b53f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
    // 0x2b53fc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b53fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5400: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x2b5400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
    // 0x2b5404: 0xffa80010  sd          $t0, 0x10($sp)
    ctx->pc = 0x2b5404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 8));
    // 0x2b5408: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x2b5408u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b540c: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x2b540cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x2b5410: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x2b5410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x2b5414: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x2b5414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x2b5418: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x2b5418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x2b541c: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x2b541cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x2b5420: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x2b5420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
    // 0x2b5424: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x2b5424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x2b5428: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x2b5428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x2b542c: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x2b542cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x2b5430: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x2b5430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b5434: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x2b5434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b5438: 0x6924000f  ldl         $a0, 0xF($t1)
    ctx->pc = 0x2b5438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2b543c: 0x6d240008  ldr         $a0, 0x8($t1)
    ctx->pc = 0x2b543cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2b5440: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x2b5440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5444: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x2b5444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5448: 0xb3a4002f  sdl         $a0, 0x2F($sp)
    ctx->pc = 0x2b5448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b544c: 0xb7a40028  sdr         $a0, 0x28($sp)
    ctx->pc = 0x2b544cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5450: 0xafa600f4  sw          $a2, 0xF4($sp)
    ctx->pc = 0x2b5450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 6));
    // 0x2b5454: 0x69500007  ldl         $s0, 0x7($t2)
    ctx->pc = 0x2b5454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x2b5458: 0x6d500000  ldr         $s0, 0x0($t2)
    ctx->pc = 0x2b5458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x2b545c: 0x8d510008  lw          $s1, 0x8($t2)
    ctx->pc = 0x2b545cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x2b5460: 0xb3b00037  sdl         $s0, 0x37($sp)
    ctx->pc = 0x2b5460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5464: 0xb7b00030  sdr         $s0, 0x30($sp)
    ctx->pc = 0x2b5464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5468: 0xafb10038  sw          $s1, 0x38($sp)
    ctx->pc = 0x2b5468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 17));
    // 0x2b546c: 0x69650007  ldl         $a1, 0x7($t3)
    ctx->pc = 0x2b546cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2b5470: 0x6d650000  ldr         $a1, 0x0($t3)
    ctx->pc = 0x2b5470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2b5474: 0x8d660008  lw          $a2, 0x8($t3)
    ctx->pc = 0x2b5474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2b5478: 0xb3a50047  sdl         $a1, 0x47($sp)
    ctx->pc = 0x2b5478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b547c: 0xb7a50040  sdr         $a1, 0x40($sp)
    ctx->pc = 0x2b547cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5480: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x2b5480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x2b5484: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2b5484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b5488: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2b5488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2b548c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2b548cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b5490: 0xafb000fc  sw          $s0, 0xFC($sp)
    ctx->pc = 0x2b5490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 16));
    // 0x2b5494: 0x68510007  ldl         $s1, 0x7($v0)
    ctx->pc = 0x2b5494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x2b5498: 0x6c510000  ldr         $s1, 0x0($v0)
    ctx->pc = 0x2b5498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
    // 0x2b549c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2b549cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b54a0: 0xb3b10057  sdl         $s1, 0x57($sp)
    ctx->pc = 0x2b54a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b54a4: 0xb7b10050  sdr         $s1, 0x50($sp)
    ctx->pc = 0x2b54a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b54a8: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x2b54a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x2b54ac: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x2b54acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x2b54b0: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2b54b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2b54b4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2b54b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2b54b8: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x2b54b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2b54bc: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x2b54bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2b54c0: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x2b54c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2b54c4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x2b54c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b54c8: 0xb3a80067  sdl         $t0, 0x67($sp)
    ctx->pc = 0x2b54c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b54cc: 0xb7a80060  sdr         $t0, 0x60($sp)
    ctx->pc = 0x2b54ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b54d0: 0xafb00068  sw          $s0, 0x68($sp)
    ctx->pc = 0x2b54d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 16));
    // 0x2b54d4: 0x10800073  beqz        $a0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2B54D4u;
    {
        const bool branch_taken_0x2b54d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B54D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54D4u;
        // 0x2b54d8: 0x27b60020  addiu       $s6, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b54d4) {
            ctx->pc = 0x2B56A4u;
            goto label_2b56a4;
        }
    }
    ctx->pc = 0x2B54DCu;
    // 0x2b54dc: 0x8fa500f4  lw          $a1, 0xF4($sp)
    ctx->pc = 0x2b54dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2b54e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b54e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b54e4: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2b54e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2b54e8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2b54e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2b54ec: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2b54ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b54f0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2b54f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b54f4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B54F4u;
    {
        const bool branch_taken_0x2b54f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B54F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54F4u;
        // 0x2b54f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b54f4) {
            ctx->pc = 0x2B5570u;
            goto label_2b5570;
        }
    }
    ctx->pc = 0x2B54FCu;
    // 0x2b54fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b54fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b5500: 0x24660040  addiu       $a2, $v1, 0x40
    ctx->pc = 0x2b5500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2b5504: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x2b5504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2b5508: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2b5508u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b550c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2b550cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x2b5510: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b5510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b5514: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2b5514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2b5518: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2b5518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2b551c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2b551cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2b5520: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2b5520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2b5524: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2b5524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2b5528: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x2b5528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2b552c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2b552cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x2b5530: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2b5530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x2b5534: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x2b5534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x2b5538: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x2b5538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x2b553c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2b553cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2b5540: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2b5540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2b5544: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2b5544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2b5548: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2b5548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2b554c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x2b554cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x2b5550: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x2b5550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x2b5554: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x2b5554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x2b5558: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x2b5558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x2b555c: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x2b555cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x2b5560: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x2b5560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x2b5564: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x2b5564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x2b5568: 0x1235004e  beq         $s1, $s5, . + 4 + (0x4E << 2)
    ctx->pc = 0x2B5568u;
    {
        const bool branch_taken_0x2b5568 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        ctx->pc = 0x2B556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5568u;
        // 0x2b556c: 0xac600038  sw          $zero, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5568) {
            ctx->pc = 0x2B56A4u;
            goto label_2b56a4;
        }
    }
    ctx->pc = 0x2B5570u;
label_2b5570:
    // 0x2b5570: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2b5570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5574: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b5574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5578: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x2b5578u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b557c: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x2b557cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5580: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x2b5580u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5584: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2b5584u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5588: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2b5588u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b558c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2b558cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5590: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2b5590u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5594: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2b5594u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5598: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2b5598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b559c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b559cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b55a0:
    // 0x2b55a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b55a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b55a4: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x2b55a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x2b55a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2b55a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b55ac: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2b55acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x2b55b0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2b55b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2b55b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b55b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b55b8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2b55b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2b55bc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2b55bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2b55c0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2b55c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2b55c4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2b55c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2b55c8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2b55c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2b55cc: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x2b55ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2b55d0: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2b55d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x2b55d4: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2b55d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x2b55d8: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x2b55d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x2b55dc: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x2b55dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x2b55e0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2b55e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2b55e4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2b55e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2b55e8: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x2b55e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x2b55ec: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x2b55ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x2b55f0: 0xad200014  sw          $zero, 0x14($t1)
    ctx->pc = 0x2b55f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 0));
    // 0x2b55f4: 0xad400018  sw          $zero, 0x18($t2)
    ctx->pc = 0x2b55f4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 0));
    // 0x2b55f8: 0xad600020  sw          $zero, 0x20($t3)
    ctx->pc = 0x2b55f8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 0));
    // 0x2b55fc: 0xad800024  sw          $zero, 0x24($t4)
    ctx->pc = 0x2b55fcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 36), GPR_U32(ctx, 0));
    // 0x2b5600: 0xada00028  sw          $zero, 0x28($t5)
    ctx->pc = 0x2b5600u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 40), GPR_U32(ctx, 0));
    // 0x2b5604: 0xadc00030  sw          $zero, 0x30($t6)
    ctx->pc = 0x2b5604u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 48), GPR_U32(ctx, 0));
    // 0x2b5608: 0xade00034  sw          $zero, 0x34($t7)
    ctx->pc = 0x2b5608u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 52), GPR_U32(ctx, 0));
    // 0x2b560c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2b560cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x2b5610: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2b5610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2b5614: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2b5614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2b5618: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2b5618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2b561c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2b561cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2b5620: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x2b5620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x2b5624: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x2b5624u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x2b5628: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x2b5628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x2b562c: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x2b562cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x2b5630: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x2b5630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x2b5634: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x2b5634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x2b5638: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x2b5638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x2b563c: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x2b563cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x2b5640: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x2b5640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x2b5644: 0xacc00044  sw          $zero, 0x44($a2)
    ctx->pc = 0x2b5644u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 0));
    // 0x2b5648: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x2b5648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x2b564c: 0xace00048  sw          $zero, 0x48($a3)
    ctx->pc = 0x2b564cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 0));
    // 0x2b5650: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x2b5650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x2b5654: 0xad000050  sw          $zero, 0x50($t0)
    ctx->pc = 0x2b5654u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 0));
    // 0x2b5658: 0x24e70080  addiu       $a3, $a3, 0x80
    ctx->pc = 0x2b5658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x2b565c: 0xad200054  sw          $zero, 0x54($t1)
    ctx->pc = 0x2b565cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 84), GPR_U32(ctx, 0));
    // 0x2b5660: 0x25080080  addiu       $t0, $t0, 0x80
    ctx->pc = 0x2b5660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x2b5664: 0xad400058  sw          $zero, 0x58($t2)
    ctx->pc = 0x2b5664u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 88), GPR_U32(ctx, 0));
    // 0x2b5668: 0x25290080  addiu       $t1, $t1, 0x80
    ctx->pc = 0x2b5668u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 128));
    // 0x2b566c: 0xad600060  sw          $zero, 0x60($t3)
    ctx->pc = 0x2b566cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 96), GPR_U32(ctx, 0));
    // 0x2b5670: 0x254a0080  addiu       $t2, $t2, 0x80
    ctx->pc = 0x2b5670u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 128));
    // 0x2b5674: 0xad800064  sw          $zero, 0x64($t4)
    ctx->pc = 0x2b5674u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 100), GPR_U32(ctx, 0));
    // 0x2b5678: 0x256b0080  addiu       $t3, $t3, 0x80
    ctx->pc = 0x2b5678u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 128));
    // 0x2b567c: 0xada00068  sw          $zero, 0x68($t5)
    ctx->pc = 0x2b567cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 104), GPR_U32(ctx, 0));
    // 0x2b5680: 0x258c0080  addiu       $t4, $t4, 0x80
    ctx->pc = 0x2b5680u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 128));
    // 0x2b5684: 0xadc00070  sw          $zero, 0x70($t6)
    ctx->pc = 0x2b5684u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 112), GPR_U32(ctx, 0));
    // 0x2b5688: 0x25ad0080  addiu       $t5, $t5, 0x80
    ctx->pc = 0x2b5688u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 128));
    // 0x2b568c: 0xade00074  sw          $zero, 0x74($t7)
    ctx->pc = 0x2b568cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 116), GPR_U32(ctx, 0));
    // 0x2b5690: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x2b5690u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x2b5694: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x2b5694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x2b5698: 0x25ef0080  addiu       $t7, $t7, 0x80
    ctx->pc = 0x2b5698u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 128));
    // 0x2b569c: 0x16b1ffc0  bne         $s5, $s1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2B569Cu;
    {
        const bool branch_taken_0x2b569c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 17));
        ctx->pc = 0x2B56A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B569Cu;
        // 0x2b56a0: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b569c) {
            ctx->pc = 0x2B55A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b55a0;
        }
    }
    ctx->pc = 0x2B56A4u;
label_2b56a4:
    // 0x2b56a4: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x2b56a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2b56a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b56a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b56ac: 0x8fa700f4  lw          $a3, 0xF4($sp)
    ctx->pc = 0x2b56acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2b56b0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2b56b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2b56b4: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x2b56b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2b56b8: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x2b56b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x2b56bc: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2b56bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2b56c0: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2B56C0u;
    {
        const bool branch_taken_0x2b56c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B56C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B56C0u;
        // 0x2b56c4: 0xafc30004  sw          $v1, 0x4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b56c0) {
            ctx->pc = 0x2B57B4u;
            goto label_2b57b4;
        }
    }
    ctx->pc = 0x2B56C8u;
    // 0x2b56c8: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x2b56c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x2b56cc: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x2b56ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b56d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b56d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b56d4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2b56d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b56d8:
    // 0x2b56d8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2b56d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2b56dc: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x2b56dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2b56e0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2b56e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2b56e4: 0x8cb3002c  lw          $s3, 0x2C($a1)
    ctx->pc = 0x2b56e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2b56e8: 0x8cb0001c  lw          $s0, 0x1C($a1)
    ctx->pc = 0x2b56e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2b56ec: 0x10570015  beq         $v0, $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B56ECu;
    {
        const bool branch_taken_0x2b56ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x2B56F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B56ECu;
        // 0x2b56f0: 0x8cb2003c  lw          $s2, 0x3C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b56ec) {
            ctx->pc = 0x2B5744u;
            goto label_2b5744;
        }
    }
    ctx->pc = 0x2B56F4u;
    // 0x2b56f4: 0x8fa800f4  lw          $t0, 0xF4($sp)
    ctx->pc = 0x2b56f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2b56f8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2b56f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b56fc: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x2b56fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x2b5700: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b5700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5704: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2b5704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2b5708: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2b5708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b570c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b5710: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b5710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b5714: 0xc0ad472  jal         func_2B51C8
    ctx->pc = 0x2B5714u;
    SET_GPR_U32(ctx, 31, 0x2B571Cu);
    ctx->pc = 0x2B5718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5714u;
    // 0x2b5718: 0xd13021  addu        $a2, $a2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B51C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B51C8u, 0x2B5714u, 0x2B571Cu)) {
        return;
    }
    ctx->pc = 0x2B571Cu;
label_2b571c:
    // 0x2b571c: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x2b571cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b5720: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x2b5720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2b5724: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2b5724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2b5728: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b5728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b572c: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x2b572cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2b5730: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x2b5730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2b5734: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2b5734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b5738: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x2b5738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x2b573c: 0xc0ad472  jal         func_2B51C8
    ctx->pc = 0x2B573Cu;
    SET_GPR_U32(ctx, 31, 0x2B5744u);
    ctx->pc = 0x2B5740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B573Cu;
    // 0x2b5740: 0xd13021  addu        $a2, $a2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B51C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B51C8u, 0x2B573Cu, 0x2B5744u)) {
        return;
    }
    ctx->pc = 0x2B5744u;
label_2b5744:
    // 0x2b5744: 0x12770016  beq         $s3, $s7, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B5744u;
    {
        const bool branch_taken_0x2b5744 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 23));
        ctx->pc = 0x2B5748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5744u;
        // 0x2b5748: 0x8fb000f4  lw          $s0, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5744) {
            ctx->pc = 0x2B57A0u;
            goto label_2b57a0;
        }
    }
    ctx->pc = 0x2B574Cu;
    // 0x2b574c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2b574cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2b5750: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b5750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5754: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b5754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b5758: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x2b5758u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2b575c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b5760: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x2b5760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x2b5764: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x2b5764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2b5768: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b5768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b576c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b576cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5770: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2b5770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b5774: 0xc0ad472  jal         func_2B51C8
    ctx->pc = 0x2B5774u;
    SET_GPR_U32(ctx, 31, 0x2B577Cu);
    ctx->pc = 0x2B5778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5774u;
    // 0x2b5778: 0xd13021  addu        $a2, $a2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B51C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B51C8u, 0x2B5774u, 0x2B577Cu)) {
        return;
    }
    ctx->pc = 0x2B577Cu;
label_2b577c:
    // 0x2b577c: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2b577cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b5780: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x2b5780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2b5784: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2b5784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2b5788: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b5788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b578c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2b578cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b5790: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b5790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5794: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2b5794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b5798: 0xc0ad472  jal         func_2B51C8
    ctx->pc = 0x2B5798u;
    SET_GPR_U32(ctx, 31, 0x2B57A0u);
    ctx->pc = 0x2B579Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5798u;
    // 0x2b579c: 0xd13021  addu        $a2, $a2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B51C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B51C8u, 0x2B5798u, 0x2B57A0u)) {
        return;
    }
    ctx->pc = 0x2B57A0u;
label_2b57a0:
    // 0x2b57a0: 0x8fa60104  lw          $a2, 0x104($sp)
    ctx->pc = 0x2b57a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2b57a4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2b57a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2b57a8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2b57a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2b57ac: 0x16a6ffca  bne         $s5, $a2, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2B57ACu;
    {
        const bool branch_taken_0x2b57ac = (GPR_U64(ctx, 21) != GPR_U64(ctx, 6));
        ctx->pc = 0x2B57B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B57ACu;
        // 0x2b57b0: 0x26940100  addiu       $s4, $s4, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b57ac) {
            ctx->pc = 0x2B56D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b56d8;
        }
    }
    ctx->pc = 0x2B57B4u;
label_2b57b4:
    // 0x2b57b4: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x2b57b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2b57b8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2B57B8u;
    {
        const bool branch_taken_0x2b57b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B57BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B57B8u;
        // 0x2b57bc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b57b8) {
            ctx->pc = 0x2B5854u;
            goto label_2b5854;
        }
    }
    ctx->pc = 0x2B57C0u;
    // 0x2b57c0: 0x8fb000f0  lw          $s0, 0xF0($sp)
    ctx->pc = 0x2b57c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2b57c4: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x2b57c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b57c8: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x2b57c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b57cc: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x2b57ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b57d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2b57d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b57d4: 0x0  nop
    ctx->pc = 0x2b57d4u;
    // NOP
label_2b57d8:
    // 0x2b57d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2b57d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b57dc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2b57dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2b57e0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2b57e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2b57e4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b57e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2b57e8: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x2b57e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2b57ec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2b57ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b57f0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2b57f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2b57f4: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2b57f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x2b57f8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b57f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b57fc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2b57fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2b5800: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2b5800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5804: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x2b5804u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x2b5808: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b5808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b580c: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x2b580cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x2b5810: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2b5810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5814: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x2b5814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2b5818: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2b5818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2b581c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2b581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5820: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2b5820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2b5824: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2b5824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5828: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x2b5828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2b582c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2b582cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5830: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2b5830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2b5834: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2b5834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2b5838: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2b5838u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2b583c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2b583cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2b5840: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x2b5840u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x2b5844: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2b5844u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x2b5848: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x2b5848u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x2b584c: 0x16a4ffe2  bne         $s5, $a0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2B584Cu;
    {
        const bool branch_taken_0x2b584c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B584Cu;
        // 0x2b5850: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b584c) {
            ctx->pc = 0x2B57D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b57d8;
        }
    }
    ctx->pc = 0x2B5854u;
label_2b5854:
    // 0x2b5854: 0x8fb100f8  lw          $s1, 0xF8($sp)
    ctx->pc = 0x2b5854u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2b5858: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b5858u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b585c: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x2b585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2b5860: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2b5860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2b5864: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2b5864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b5868: 0x106000d9  beqz        $v1, . + 4 + (0xD9 << 2)
    ctx->pc = 0x2B5868u;
    {
        const bool branch_taken_0x2b5868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5868u;
        // 0x2b586c: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5868) {
            ctx->pc = 0x2B5BD0u;
            goto label_2b5bd0;
        }
    }
    ctx->pc = 0x2B5870u;
    // 0x2b5870: 0x60782d  daddu       $t7, $v1, $zero
    ctx->pc = 0x2b5870u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5874: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x2b5874u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b5878: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2b5878u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b587c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2b587cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5880: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2b5880u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5884: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2b5884u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5888: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b5888u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b588c: 0x0  nop
    ctx->pc = 0x2b588cu;
    // NOP
label_2b5890:
    // 0x2b5890: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x2b5890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2b5894: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2b5894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b5898: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2b5898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2b589c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2b589cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b58a0: 0x10ce0062  beq         $a2, $t6, . + 4 + (0x62 << 2)
    ctx->pc = 0x2B58A0u;
    {
        const bool branch_taken_0x2b58a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B58A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B58A0u;
        // 0x2b58a4: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b58a0) {
            ctx->pc = 0x2B5A2Cu;
            goto label_2b5a2c;
        }
    }
    ctx->pc = 0x2B58A8u;
    // 0x2b58a8: 0x8fa700f4  lw          $a3, 0xF4($sp)
    ctx->pc = 0x2b58a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2b58ac: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x2b58acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2b58b0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2b58b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b58b4: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2b58b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2b58b8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2b58b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b58bc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b58bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b58c0: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x2b58c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2b58c4: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x2b58c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2b58c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b58c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b58cc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2b58ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b58d0: 0x1673821  addu        $a3, $t3, $a3
    ctx->pc = 0x2b58d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x2b58d4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b58d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2b58d8: 0x68b00007  ldl         $s0, 0x7($a1)
    ctx->pc = 0x2b58d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x2b58dc: 0x6cb00000  ldr         $s0, 0x0($a1)
    ctx->pc = 0x2b58dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x2b58e0: 0x68b1000f  ldl         $s1, 0xF($a1)
    ctx->pc = 0x2b58e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x2b58e4: 0x6cb10008  ldr         $s1, 0x8($a1)
    ctx->pc = 0x2b58e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
    // 0x2b58e8: 0x68a30017  ldl         $v1, 0x17($a1)
    ctx->pc = 0x2b58e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b58ec: 0x6ca30010  ldr         $v1, 0x10($a1)
    ctx->pc = 0x2b58ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b58f0: 0x68a4001f  ldl         $a0, 0x1F($a1)
    ctx->pc = 0x2b58f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2b58f4: 0x6ca40018  ldr         $a0, 0x18($a1)
    ctx->pc = 0x2b58f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2b58f8: 0xb3b00077  sdl         $s0, 0x77($sp)
    ctx->pc = 0x2b58f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b58fc: 0xb7b00070  sdr         $s0, 0x70($sp)
    ctx->pc = 0x2b58fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5900: 0xb3b1007f  sdl         $s1, 0x7F($sp)
    ctx->pc = 0x2b5900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5904: 0xb7b10078  sdr         $s1, 0x78($sp)
    ctx->pc = 0x2b5904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5908: 0xb3a30087  sdl         $v1, 0x87($sp)
    ctx->pc = 0x2b5908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b590c: 0xb7a30080  sdr         $v1, 0x80($sp)
    ctx->pc = 0x2b590cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5910: 0xb3a4008f  sdl         $a0, 0x8F($sp)
    ctx->pc = 0x2b5910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5914: 0xb7a40088  sdr         $a0, 0x88($sp)
    ctx->pc = 0x2b5914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5918: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2b5918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2b591c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2b591cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5920: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x2b5920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b5924: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b5924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b5928: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2b5928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b592c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b592cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5930: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b5930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5934: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2b5934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2b5938: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2b5938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2b593c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2b593cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5940: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x2b5940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b5944: 0xc4440014  lwc1        $f4, 0x14($v0)
    ctx->pc = 0x2b5944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b5948: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b5948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b594c: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x2b594cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b5950: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2b5950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5954: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b5954u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b5958: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2b5958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b595c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2b595cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5960: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b5960u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b5964: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2b5964u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2b5968: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2b5968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b596c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b596cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b5970: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x2b5970u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2b5974: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2b5974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5978: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b5978u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b597c: 0xe4440014  swc1        $f4, 0x14($v0)
    ctx->pc = 0x2b597cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2b5980: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2b5980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5984: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2b5984u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2b5988: 0xe4450018  swc1        $f5, 0x18($v0)
    ctx->pc = 0x2b5988u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2b598c: 0x68f00007  ldl         $s0, 0x7($a3)
    ctx->pc = 0x2b598cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x2b5990: 0x6cf00000  ldr         $s0, 0x0($a3)
    ctx->pc = 0x2b5990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x2b5994: 0x68f1000f  ldl         $s1, 0xF($a3)
    ctx->pc = 0x2b5994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x2b5998: 0x6cf10008  ldr         $s1, 0x8($a3)
    ctx->pc = 0x2b5998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
    // 0x2b599c: 0x68e20017  ldl         $v0, 0x17($a3)
    ctx->pc = 0x2b599cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b59a0: 0x6ce20010  ldr         $v0, 0x10($a3)
    ctx->pc = 0x2b59a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b59a4: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x2b59a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b59a8: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x2b59a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b59ac: 0xb3b00097  sdl         $s0, 0x97($sp)
    ctx->pc = 0x2b59acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b59b0: 0xb7b00090  sdr         $s0, 0x90($sp)
    ctx->pc = 0x2b59b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b59b4: 0xb3b1009f  sdl         $s1, 0x9F($sp)
    ctx->pc = 0x2b59b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b59b8: 0xb7b10098  sdr         $s1, 0x98($sp)
    ctx->pc = 0x2b59b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b59bc: 0xb3a200a7  sdl         $v0, 0xA7($sp)
    ctx->pc = 0x2b59bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b59c0: 0xb7a200a0  sdr         $v0, 0xA0($sp)
    ctx->pc = 0x2b59c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b59c4: 0xb3a300af  sdl         $v1, 0xAF($sp)
    ctx->pc = 0x2b59c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b59c8: 0xb7a300a8  sdr         $v1, 0xA8($sp)
    ctx->pc = 0x2b59c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b59cc: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2b59ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b59d0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2b59d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b59d4: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2b59d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b59d8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b59d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b59dc: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x2b59dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2b59e0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2b59e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b59e4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b59e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b59e8: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x2b59e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2b59ec: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2b59ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b59f0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2b59f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b59f4: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x2b59f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b59f8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b59f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b59fc: 0xc4c30014  lwc1        $f3, 0x14($a2)
    ctx->pc = 0x2b59fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b5a00: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x2b5a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b5a04: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x2b5a04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2b5a08: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2b5a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5a0c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b5a0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b5a10: 0xe4c20010  swc1        $f2, 0x10($a2)
    ctx->pc = 0x2b5a10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x2b5a14: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2b5a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5a18: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b5a18u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b5a1c: 0xe4c30014  swc1        $f3, 0x14($a2)
    ctx->pc = 0x2b5a1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x2b5a20: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2b5a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5a24: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b5a24u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b5a28: 0xe4c40018  swc1        $f4, 0x18($a2)
    ctx->pc = 0x2b5a28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_2b5a2c:
    // 0x2b5a2c: 0x110e0061  beq         $t0, $t6, . + 4 + (0x61 << 2)
    ctx->pc = 0x2B5A2Cu;
    {
        const bool branch_taken_0x2b5a2c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5A2Cu;
        // 0x2b5a30: 0x8fa400f4  lw          $a0, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a2c) {
            ctx->pc = 0x2B5BB4u;
            goto label_2b5bb4;
        }
    }
    ctx->pc = 0x2B5A34u;
    // 0x2b5a34: 0x83140  sll         $a2, $t0, 5
    ctx->pc = 0x2b5a34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x2b5a38: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2b5a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b5a3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b5a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b5a40: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x2b5a40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2b5a44: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x2b5a44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2b5a48: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x2b5a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2b5a4c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b5a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b5a50: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2b5a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b5a54: 0x1a73821  addu        $a3, $t5, $a3
    ctx->pc = 0x2b5a54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x2b5a58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b5a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b5a5c: 0x68a80027  ldl         $t0, 0x27($a1)
    ctx->pc = 0x2b5a5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2b5a60: 0x6ca80020  ldr         $t0, 0x20($a1)
    ctx->pc = 0x2b5a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2b5a64: 0x68b0002f  ldl         $s0, 0x2F($a1)
    ctx->pc = 0x2b5a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x2b5a68: 0x6cb00028  ldr         $s0, 0x28($a1)
    ctx->pc = 0x2b5a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x2b5a6c: 0x68b10037  ldl         $s1, 0x37($a1)
    ctx->pc = 0x2b5a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x2b5a70: 0x6cb10030  ldr         $s1, 0x30($a1)
    ctx->pc = 0x2b5a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
    // 0x2b5a74: 0x68a3003f  ldl         $v1, 0x3F($a1)
    ctx->pc = 0x2b5a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b5a78: 0x6ca30038  ldr         $v1, 0x38($a1)
    ctx->pc = 0x2b5a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b5a7c: 0xb3a800b7  sdl         $t0, 0xB7($sp)
    ctx->pc = 0x2b5a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5a80: 0xb7a800b0  sdr         $t0, 0xB0($sp)
    ctx->pc = 0x2b5a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5a84: 0xb3b000bf  sdl         $s0, 0xBF($sp)
    ctx->pc = 0x2b5a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5a88: 0xb7b000b8  sdr         $s0, 0xB8($sp)
    ctx->pc = 0x2b5a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5a8c: 0xb3b100c7  sdl         $s1, 0xC7($sp)
    ctx->pc = 0x2b5a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5a90: 0xb7b100c0  sdr         $s1, 0xC0($sp)
    ctx->pc = 0x2b5a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5a94: 0xb3a300cf  sdl         $v1, 0xCF($sp)
    ctx->pc = 0x2b5a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5a98: 0xb7a300c8  sdr         $v1, 0xC8($sp)
    ctx->pc = 0x2b5a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5a9c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b5a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2b5aa0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2b5aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2b5aa4: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x2b5aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b5aa8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b5aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b5aac: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2b5aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5ab0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2b5ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2b5ab4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b5ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b5ab8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b5ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5abc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b5abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5ac0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2b5ac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2b5ac4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2b5ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5ac8: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x2b5ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b5acc: 0xc4440014  lwc1        $f4, 0x14($v0)
    ctx->pc = 0x2b5accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b5ad0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b5ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b5ad4: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x2b5ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b5ad8: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2b5ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5adc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b5adcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b5ae0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2b5ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b5ae4: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2b5ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5ae8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b5ae8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b5aec: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2b5aecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2b5af0: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2b5af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5af4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b5af4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b5af8: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x2b5af8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2b5afc: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2b5afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5b00: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b5b00u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b5b04: 0xe4440014  swc1        $f4, 0x14($v0)
    ctx->pc = 0x2b5b04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2b5b08: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2b5b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5b0c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2b5b0cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2b5b10: 0xe4450018  swc1        $f5, 0x18($v0)
    ctx->pc = 0x2b5b10u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2b5b14: 0x68e50027  ldl         $a1, 0x27($a3)
    ctx->pc = 0x2b5b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2b5b18: 0x6ce50020  ldr         $a1, 0x20($a3)
    ctx->pc = 0x2b5b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2b5b1c: 0x68e8002f  ldl         $t0, 0x2F($a3)
    ctx->pc = 0x2b5b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2b5b20: 0x6ce80028  ldr         $t0, 0x28($a3)
    ctx->pc = 0x2b5b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2b5b24: 0x68f00037  ldl         $s0, 0x37($a3)
    ctx->pc = 0x2b5b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x2b5b28: 0x6cf00030  ldr         $s0, 0x30($a3)
    ctx->pc = 0x2b5b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x2b5b2c: 0x68f1003f  ldl         $s1, 0x3F($a3)
    ctx->pc = 0x2b5b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x2b5b30: 0x6cf10038  ldr         $s1, 0x38($a3)
    ctx->pc = 0x2b5b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
    // 0x2b5b34: 0xb3a500d7  sdl         $a1, 0xD7($sp)
    ctx->pc = 0x2b5b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5b38: 0xb7a500d0  sdr         $a1, 0xD0($sp)
    ctx->pc = 0x2b5b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5b3c: 0xb3a800df  sdl         $t0, 0xDF($sp)
    ctx->pc = 0x2b5b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5b40: 0xb7a800d8  sdr         $t0, 0xD8($sp)
    ctx->pc = 0x2b5b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5b44: 0xb3b000e7  sdl         $s0, 0xE7($sp)
    ctx->pc = 0x2b5b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5b48: 0xb7b000e0  sdr         $s0, 0xE0($sp)
    ctx->pc = 0x2b5b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5b4c: 0xb3b100ef  sdl         $s1, 0xEF($sp)
    ctx->pc = 0x2b5b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5b50: 0xb7b100e8  sdr         $s1, 0xE8($sp)
    ctx->pc = 0x2b5b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5b54: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2b5b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5b58: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2b5b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5b5c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2b5b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5b60: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b5b60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b5b64: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x2b5b64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2b5b68: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2b5b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5b6c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b5b6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b5b70: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x2b5b70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2b5b74: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2b5b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5b78: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2b5b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5b7c: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x2b5b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5b80: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b5b80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b5b84: 0xc4c30014  lwc1        $f3, 0x14($a2)
    ctx->pc = 0x2b5b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b5b88: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x2b5b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b5b8c: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x2b5b8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2b5b90: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x2b5b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5b94: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b5b94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b5b98: 0xe4c20010  swc1        $f2, 0x10($a2)
    ctx->pc = 0x2b5b98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x2b5b9c: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x2b5b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5ba0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b5ba0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b5ba4: 0xe4c30014  swc1        $f3, 0x14($a2)
    ctx->pc = 0x2b5ba4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x2b5ba8: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x2b5ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5bac: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b5bacu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2b5bb0: 0xe4c40018  swc1        $f4, 0x18($a2)
    ctx->pc = 0x2b5bb0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_2b5bb4:
    // 0x2b5bb4: 0x25ad0040  addiu       $t5, $t5, 0x40
    ctx->pc = 0x2b5bb4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 64));
    // 0x2b5bb8: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2b5bb8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2b5bbc: 0x256b0040  addiu       $t3, $t3, 0x40
    ctx->pc = 0x2b5bbcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
    // 0x2b5bc0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2b5bc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2b5bc4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2b5bc4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2b5bc8: 0x16afff31  bne         $s5, $t7, . + 4 + (-0xCF << 2)
    ctx->pc = 0x2B5BC8u;
    {
        const bool branch_taken_0x2b5bc8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 15));
        ctx->pc = 0x2B5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BC8u;
        // 0x2b5bcc: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5bc8) {
            ctx->pc = 0x2B5890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5890;
        }
    }
    ctx->pc = 0x2B5BD0u;
label_2b5bd0:
    // 0x2b5bd0: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x2b5bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2b5bd4: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x2b5bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2b5bd8: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x2b5bd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2b5bdc: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x2b5bdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2b5be0: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x2b5be0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2b5be4: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x2b5be4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2b5be8: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x2b5be8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2b5bec: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x2b5becu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2b5bf0: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x2b5bf0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2b5bf4: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x2b5bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b5bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BF8u;
        // 0x2b5bfc: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5C00u;
    // 0x2b5c00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b5c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b5c04: 0x0  nop
    ctx->pc = 0x2b5c04u;
    // NOP
    ctx->pc = 0x2b5c08u;
}
