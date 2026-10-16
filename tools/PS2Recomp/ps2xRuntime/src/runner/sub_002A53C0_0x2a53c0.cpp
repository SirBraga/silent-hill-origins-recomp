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

// Function: sub_002A53C0
// Address: 0x2a53c0 - 0x2a59a8
void sub_002A53C0_0x2a53c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A53C0_0x2a53c0");
#endif

    switch (ctx->pc) {
        case 0x2a5698u: goto label_2a5698;
        case 0x2a5784u: goto label_2a5784;
        case 0x2a57dcu: goto label_2a57dc;
        case 0x2a58f4u: goto label_2a58f4;
        default: break;
    }

    ctx->pc = 0x2a53c0u;

    // 0x2a53c0: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x2a53c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x2a53c4: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x2a53c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
    // 0x2a53c8: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x2a53c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
    // 0x2a53cc: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x2a53ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
    // 0x2a53d0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2a53d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a53d4: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x2a53d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
    // 0x2a53d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a53d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a53dc: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x2a53dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
    // 0x2a53e0: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x2a53e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a53e4: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x2a53e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
    // 0x2a53e8: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x2a53e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a53ec: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x2a53ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
    // 0x2a53f0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a53f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a53f4: 0x7fbe0110  sq          $fp, 0x110($sp)
    ctx->pc = 0x2a53f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 30));
    // 0x2a53f8: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x2a53f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a53fc: 0xe7bd01e8  swc1        $f29, 0x1E8($sp)
    ctx->pc = 0x2a53fcu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x2a5400: 0xe7bb01d8  swc1        $f27, 0x1D8($sp)
    ctx->pc = 0x2a5400u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x2a5404: 0xe7ba01d0  swc1        $f26, 0x1D0($sp)
    ctx->pc = 0x2a5404u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2a5408: 0xe7b901c8  swc1        $f25, 0x1C8($sp)
    ctx->pc = 0x2a5408u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x2a540c: 0xe7b801c0  swc1        $f24, 0x1C0($sp)
    ctx->pc = 0x2a540cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x2a5410: 0xe7b701b8  swc1        $f23, 0x1B8($sp)
    ctx->pc = 0x2a5410u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x2a5414: 0xe7b601b0  swc1        $f22, 0x1B0($sp)
    ctx->pc = 0x2a5414u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x2a5418: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x2a5418u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x2a541c: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x2a541cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
    // 0x2a5420: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x2a5420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x2a5424: 0xe7bf01f8  swc1        $f31, 0x1F8($sp)
    ctx->pc = 0x2a5424u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x2a5428: 0xe7be01f0  swc1        $f30, 0x1F0($sp)
    ctx->pc = 0x2a5428u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x2a542c: 0xe7bc01e0  swc1        $f28, 0x1E0($sp)
    ctx->pc = 0x2a542cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x2a5430: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x2a5430u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x2a5434: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x2a5434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a5438: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x2a5438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a543c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2a543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a5440: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2a5440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5444: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2a5444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5448: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2a5448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2a544c: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x2a544cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a5450: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x2a5450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a5454: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2a5454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2a5458: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2a5458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a545c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2a545cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5460: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2a5460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2a5464: 0xafa800d0  sw          $t0, 0xD0($sp)
    ctx->pc = 0x2a5464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 8));
    // 0x2a5468: 0x68cd0007  ldl         $t5, 0x7($a2)
    ctx->pc = 0x2a5468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2a546c: 0x6ccd0000  ldr         $t5, 0x0($a2)
    ctx->pc = 0x2a546cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2a5470: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2a5470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a5474: 0xb3ad0027  sdl         $t5, 0x27($sp)
    ctx->pc = 0x2a5474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5478: 0xb7ad0020  sdr         $t5, 0x20($sp)
    ctx->pc = 0x2a5478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a547c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2a547cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2a5480: 0xe7ac00f4  swc1        $f12, 0xF4($sp)
    ctx->pc = 0x2a5480u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2a5484: 0x68e50007  ldl         $a1, 0x7($a3)
    ctx->pc = 0x2a5484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2a5488: 0x6ce50000  ldr         $a1, 0x0($a3)
    ctx->pc = 0x2a5488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2a548c: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x2a548cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2a5490: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x2a5490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5494: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x2a5494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5498: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x2a5498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x2a549c: 0xe7ae00f8  swc1        $f14, 0xF8($sp)
    ctx->pc = 0x2a549cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2a54a0: 0x692d0007  ldl         $t5, 0x7($t1)
    ctx->pc = 0x2a54a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2a54a4: 0x6d2d0000  ldr         $t5, 0x0($t1)
    ctx->pc = 0x2a54a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2a54a8: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x2a54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2a54ac: 0xb3ad0047  sdl         $t5, 0x47($sp)
    ctx->pc = 0x2a54acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a54b0: 0xb7ad0040  sdr         $t5, 0x40($sp)
    ctx->pc = 0x2a54b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a54b4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2a54b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x2a54b8: 0xe7af00fc  swc1        $f15, 0xFC($sp)
    ctx->pc = 0x2a54b8u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2a54bc: 0x69450007  ldl         $a1, 0x7($t2)
    ctx->pc = 0x2a54bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2a54c0: 0x6d450000  ldr         $a1, 0x0($t2)
    ctx->pc = 0x2a54c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2a54c4: 0x8d460008  lw          $a2, 0x8($t2)
    ctx->pc = 0x2a54c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x2a54c8: 0xb3a50057  sdl         $a1, 0x57($sp)
    ctx->pc = 0x2a54c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a54cc: 0xb7a50050  sdr         $a1, 0x50($sp)
    ctx->pc = 0x2a54ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a54d0: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x2a54d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
    // 0x2a54d4: 0x69690007  ldl         $t1, 0x7($t3)
    ctx->pc = 0x2a54d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2a54d8: 0x6d690000  ldr         $t1, 0x0($t3)
    ctx->pc = 0x2a54d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2a54dc: 0x8d6c0008  lw          $t4, 0x8($t3)
    ctx->pc = 0x2a54dcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2a54e0: 0xb3a90067  sdl         $t1, 0x67($sp)
    ctx->pc = 0x2a54e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a54e4: 0xb7a90060  sdr         $t1, 0x60($sp)
    ctx->pc = 0x2a54e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a54e8: 0xafac0068  sw          $t4, 0x68($sp)
    ctx->pc = 0x2a54e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 12));
    // 0x2a54ec: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a54ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a54f0: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x2a54f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2a54f4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2a54f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a54f8: 0xafa500d4  sw          $a1, 0xD4($sp)
    ctx->pc = 0x2a54f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 5));
    // 0x2a54fc: 0x27ad0060  addiu       $t5, $sp, 0x60
    ctx->pc = 0x2a54fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a5500: 0xafa600d8  sw          $a2, 0xD8($sp)
    ctx->pc = 0x2a5500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 6));
    // 0x2a5504: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x2a5504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2a5508: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x2a5508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2a550c: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x2a550cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a5510: 0xb3a70077  sdl         $a3, 0x77($sp)
    ctx->pc = 0x2a5510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5514: 0xb7a70070  sdr         $a3, 0x70($sp)
    ctx->pc = 0x2a5514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5518: 0xafa80078  sw          $t0, 0x78($sp)
    ctx->pc = 0x2a5518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 8));
    // 0x2a551c: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x2a551cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x2a5520: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2a5520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a5524: 0xafad00dc  sw          $t5, 0xDC($sp)
    ctx->pc = 0x2a5524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 13));
    // 0x2a5528: 0x27ac0080  addiu       $t4, $sp, 0x80
    ctx->pc = 0x2a5528u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a552c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2a552cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x2a5530: 0x27ad0090  addiu       $t5, $sp, 0x90
    ctx->pc = 0x2a5530u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a5534: 0x68860007  ldl         $a2, 0x7($a0)
    ctx->pc = 0x2a5534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a5538: 0x6c860000  ldr         $a2, 0x0($a0)
    ctx->pc = 0x2a5538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a553c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x2a553cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a5540: 0xb3a60087  sdl         $a2, 0x87($sp)
    ctx->pc = 0x2a5540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5544: 0xb7a60080  sdr         $a2, 0x80($sp)
    ctx->pc = 0x2a5544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5548: 0xafa70088  sw          $a3, 0x88($sp)
    ctx->pc = 0x2a5548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 7));
    // 0x2a554c: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x2a554cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2a5550: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x2a5550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a5554: 0xafac00e4  sw          $t4, 0xE4($sp)
    ctx->pc = 0x2a5554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 12));
    // 0x2a5558: 0xafad00e8  sw          $t5, 0xE8($sp)
    ctx->pc = 0x2a5558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 13));
    // 0x2a555c: 0x68a40007  ldl         $a0, 0x7($a1)
    ctx->pc = 0x2a555cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2a5560: 0x6ca40000  ldr         $a0, 0x0($a1)
    ctx->pc = 0x2a5560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2a5564: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x2a5564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a5568: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x2a5568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a556c: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x2a556cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2a5570: 0xb3a40097  sdl         $a0, 0x97($sp)
    ctx->pc = 0x2a5570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5574: 0xb7a40090  sdr         $a0, 0x90($sp)
    ctx->pc = 0x2a5574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5578: 0xb3a6009f  sdl         $a2, 0x9F($sp)
    ctx->pc = 0x2a5578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a557c: 0xb7a60098  sdr         $a2, 0x98($sp)
    ctx->pc = 0x2a557cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5580: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x2a5580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x2a5584: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x2a5584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x2a5588: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2a5588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a558c: 0xafa900ec  sw          $t1, 0xEC($sp)
    ctx->pc = 0x2a558cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 9));
    // 0x2a5590: 0x686c0007  ldl         $t4, 0x7($v1)
    ctx->pc = 0x2a5590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2a5594: 0x6c6c0000  ldr         $t4, 0x0($v1)
    ctx->pc = 0x2a5594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2a5598: 0x8c6d0008  lw          $t5, 0x8($v1)
    ctx->pc = 0x2a5598u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a559c: 0xb3ac00b7  sdl         $t4, 0xB7($sp)
    ctx->pc = 0x2a559cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a55a0: 0xb7ac00b0  sdr         $t4, 0xB0($sp)
    ctx->pc = 0x2a55a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a55a4: 0xafad00b8  sw          $t5, 0xB8($sp)
    ctx->pc = 0x2a55a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 13));
    // 0x2a55a8: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x2a55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2a55ac: 0xafa600f0  sw          $a2, 0xF0($sp)
    ctx->pc = 0x2a55acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 6));
    // 0x2a55b0: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x2a55b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2a55b4: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x2a55b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2a55b8: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x2a55b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a55bc: 0xb3a700c7  sdl         $a3, 0xC7($sp)
    ctx->pc = 0x2a55bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a55c0: 0xb7a700c0  sdr         $a3, 0xC0($sp)
    ctx->pc = 0x2a55c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a55c4: 0xafa800c8  sw          $t0, 0xC8($sp)
    ctx->pc = 0x2a55c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 8));
    // 0x2a55c8: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x2a55c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2a55cc: 0x8fa30228  lw          $v1, 0x228($sp)
    ctx->pc = 0x2a55ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x2a55d0: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x2a55d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a55d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a55d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a55d8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2a55d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a55dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a55dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a55e0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2a55e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a55e4: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x2a55e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2a55e8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2a55e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a55ec: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x2a55ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a55f0: 0x8fa80060  lw          $t0, 0x60($sp)
    ctx->pc = 0x2a55f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a55f4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2a55f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a55f8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2a55f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a55fc: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x2a55fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a5600: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2a5600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2a5604: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x2a5604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a5608: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a5608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a560c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2a560cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a5610: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x2a5610u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2a5614: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a5614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a5618: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x2a5618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2a561c: 0x25300001  addiu       $s0, $t1, 0x1
    ctx->pc = 0x2a561cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2a5620: 0xc4f90000  lwc1        $f25, 0x0($a3)
    ctx->pc = 0x2a5620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2a5624: 0x4600bec6  mov.s       $f27, $f23
    ctx->pc = 0x2a5624u;
    ctx->f[27] = FPU_MOV_S(ctx->f[23]);
    // 0x2a5628: 0xc4da0000  lwc1        $f26, 0x0($a2)
    ctx->pc = 0x2a5628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2a562c: 0xc4b50000  lwc1        $f21, 0x0($a1)
    ctx->pc = 0x2a562cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a5630: 0xc4560000  lwc1        $f22, 0x0($v0)
    ctx->pc = 0x2a5630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a5634: 0xc47d0000  lwc1        $f29, 0x0($v1)
    ctx->pc = 0x2a5634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2a5638: 0x8fbe0238  lw          $fp, 0x238($sp)
    ctx->pc = 0x2a5638u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x2a563c: 0x5200005  bltz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A563Cu;
    {
        const bool branch_taken_0x2a563c = (GPR_S64(ctx, 9) < 0);
        ctx->pc = 0x2A5640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A563Cu;
        // 0x2a5640: 0xc7988fb0  lwc1        $f24, -0x7050($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a563c) {
            ctx->pc = 0x2A5654u;
            goto label_2a5654;
        }
    }
    ctx->pc = 0x2A5644u;
    // 0x2a5644: 0x4489e000  mtc1        $t1, $f28
    ctx->pc = 0x2a5644u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x2a5648: 0x4680e720  cvt.s.w     $f28, $f28
    ctx->pc = 0x2a5648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[28], sizeof(tmp)); ctx->f[28] = FPU_CVT_S_W(tmp); }
    // 0x2a564c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A564Cu;
    {
        const bool branch_taken_0x2a564c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a564c) {
            ctx->pc = 0x2A566Cu;
            goto label_2a566c;
        }
    }
    ctx->pc = 0x2A5654u;
label_2a5654:
    // 0x2a5654: 0x91842  srl         $v1, $t1, 1
    ctx->pc = 0x2a5654u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x2a5658: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x2a5658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x2a565c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a565cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a5660: 0x4482e000  mtc1        $v0, $f28
    ctx->pc = 0x2a5660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x2a5664: 0x4680e720  cvt.s.w     $f28, $f28
    ctx->pc = 0x2a5664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[28], sizeof(tmp)); ctx->f[28] = FPU_CVT_S_W(tmp); }
    // 0x2a5668: 0x461ce700  add.s       $f28, $f28, $f28
    ctx->pc = 0x2a5668u;
    ctx->f[28] = FPU_ADD_S(ctx->f[28], ctx->f[28]);
label_2a566c:
    // 0x2a566c: 0x1bc000b3  blez        $fp, . + 4 + (0xB3 << 2)
    ctx->pc = 0x2A566Cu;
    {
        const bool branch_taken_0x2a566c = (GPR_S64(ctx, 30) <= 0);
        ctx->pc = 0x2A5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A566Cu;
        // 0x2a5670: 0x8fa30228  lw          $v1, 0x228($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a566c) {
            ctx->pc = 0x2A593Cu;
            goto label_2a593c;
        }
    }
    ctx->pc = 0x2A5674u;
    // 0x2a5674: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a5674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a5678: 0x106200b0  beq         $v1, $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x2A5678u;
    {
        const bool branch_taken_0x2a5678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5678u;
        // 0x2a567c: 0x2417ffff  addiu       $s7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5678) {
            ctx->pc = 0x2A593Cu;
            goto label_2a593c;
        }
    }
    ctx->pc = 0x2A5680u;
    // 0x2a5680: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a5680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5684: 0x4481f800  mtc1        $at, $f31
    ctx->pc = 0x2a5684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
    // 0x2a5688: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a5688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a568c: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x2a568cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x2a5690: 0x4619d501  sub.s       $f20, $f26, $f25
    ctx->pc = 0x2a5690u;
    ctx->f[20] = FPU_SUB_S(ctx->f[26], ctx->f[25]);
    // 0x2a5694: 0x0  nop
    ctx->pc = 0x2a5694u;
    // NOP
label_2a5698:
    // 0x2a5698: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2a5698u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a569c: 0x0  nop
    ctx->pc = 0x2a569cu;
    // NOP
    // 0x2a56a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A56A0u;
    {
        const bool branch_taken_0x2a56a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a56a0) {
            ctx->pc = 0x2A56A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A56A0u;
            // 0x2a56a4: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A56A8u;
            goto label_2a56a8;
        }
    }
    ctx->pc = 0x2A56A8u;
label_2a56a8:
    // 0x2a56a8: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x2a56a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a56ac: 0x0  nop
    ctx->pc = 0x2a56acu;
    // NOP
    // 0x2a56b0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A56B0u;
    {
        const bool branch_taken_0x2a56b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a56b0) {
            ctx->pc = 0x2A56B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A56B0u;
            // 0x2a56b4: 0x4600b506  mov.s       $f20, $f22 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A56B8u;
            goto label_2a56b8;
        }
    }
    ctx->pc = 0x2A56B8u;
label_2a56b8:
    // 0x2a56b8: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x2a56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x2a56bc: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x2a56bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a56c0: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x2a56c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2a56c4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2a56c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2a56c8: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x2a56c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a56cc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2a56ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a56d0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2a56d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2a56d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2a56d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a56d8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2A56D8u;
    {
        const bool branch_taken_0x2a56d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A56D8u;
        // 0x2a56dc: 0xe4740000  swc1        $f20, 0x0($v1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a56d8) {
            ctx->pc = 0x2A56F4u;
            goto label_2a56f4;
        }
    }
    ctx->pc = 0x2A56E0u;
    // 0x2a56e0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2a56e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a56e4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2a56e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a56e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a56e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a56ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A56ECu;
    {
        const bool branch_taken_0x2a56ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A56F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A56ECu;
        // 0x2a56f0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a56ec) {
            ctx->pc = 0x2A5704u;
            goto label_2a5704;
        }
    }
    ctx->pc = 0x2A56F4u;
label_2a56f4:
    // 0x2a56f4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2a56f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a56f8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2a56f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a56fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a56fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a5700: 0xe45f0000  swc1        $f31, 0x0($v0)
    ctx->pc = 0x2a5700u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2a5704:
    // 0x2a5704: 0x4616a032  c.eq.s      $f20, $f22
    ctx->pc = 0x2a5704u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5708: 0x0  nop
    ctx->pc = 0x2a5708u;
    // NOP
    // 0x2a570c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2A570Cu;
    {
        const bool branch_taken_0x2a570c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A570Cu;
        // 0x2a5710: 0x8fa20228  lw          $v0, 0x228($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a570c) {
            ctx->pc = 0x2A5734u;
            goto label_2a5734;
        }
    }
    ctx->pc = 0x2A5714u;
    // 0x2a5714: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x2a5714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2a5718: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2a5718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2a571c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a571cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a5720: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a5720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a5724: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a5724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a5728: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a572c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A572Cu;
    {
        const bool branch_taken_0x2a572c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A572Cu;
        // 0x2a5730: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a572c) {
            ctx->pc = 0x2A5758u;
            goto label_2a5758;
        }
    }
    ctx->pc = 0x2A5734u;
label_2a5734:
    // 0x2a5734: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x2a5734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2a5738: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2a5738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2a573c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a573cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a5740: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a5740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a5744: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a5744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2a5748: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a5748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a574c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a574cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a5750: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5754: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2a5754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2a5758:
    // 0x2a5758: 0x461aa501  sub.s       $f20, $f20, $f26
    ctx->pc = 0x2a5758u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[26]);
    // 0x2a575c: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2a575cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a5760: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x2a5760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2a5764: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a5764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5768: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x2a5768u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2a576c: 0x8fa800ec  lw          $t0, 0xEC($sp)
    ctx->pc = 0x2a576cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2a5770: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a5770u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a5774: 0x8fa900f0  lw          $t1, 0xF0($sp)
    ctx->pc = 0x2a5774u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a5778: 0x8faa0228  lw          $t2, 0x228($sp)
    ctx->pc = 0x2a5778u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x2a577c: 0xc0a936e  jal         func_2A4DB8
    ctx->pc = 0x2A577Cu;
    SET_GPR_U32(ctx, 31, 0x2A5784u);
    ctx->pc = 0x2A5780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A577Cu;
    // 0x2a5780: 0x8fab0230  lw          $t3, 0x230($sp) (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4DB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A4DB8u, 0x2A577Cu, 0x2A5784u)) {
        return;
    }
    ctx->pc = 0x2A5784u;
label_2a5784:
    // 0x2a5784: 0xc7a300fc  lwc1        $f3, 0xFC($sp)
    ctx->pc = 0x2a5784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a5788: 0x27a40228  addiu       $a0, $sp, 0x228
    ctx->pc = 0x2a5788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x2a578c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2a578cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5790: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a5790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5794: 0x461d1842  mul.s       $f1, $f3, $f29
    ctx->pc = 0x2a5794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[29]);
    // 0x2a5798: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x2a5798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x2a579c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a579cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a57a0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a57a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a57a4: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x2a57a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2a57a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a57a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a57ac: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2a57acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a57b0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2a57b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a57b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a57b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a57b8: 0xc7ac00f4  lwc1        $f12, 0xF4($sp)
    ctx->pc = 0x2a57b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a57bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a57bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a57c0: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x2a57c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2a57c4: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x2a57c4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2a57c8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a57c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a57cc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2a57ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a57d0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2a57d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2a57d4: 0xc0a9192  jal         func_2A4648
    ctx->pc = 0x2A57D4u;
    SET_GPR_U32(ctx, 31, 0x2A57DCu);
    ctx->pc = 0x2A57D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A57D4u;
    // 0x2a57d8: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A4648u, 0x2A57D4u, 0x2A57DCu)) {
        return;
    }
    ctx->pc = 0x2A57DCu;
label_2a57dc:
    // 0x2a57dc: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x2a57dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2a57e0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2a57e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2a57e4: 0x8fa800d8  lw          $t0, 0xD8($sp)
    ctx->pc = 0x2a57e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2a57e8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2a57e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a57ec: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x2a57ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x2a57f0: 0x8fa900dc  lw          $t1, 0xDC($sp)
    ctx->pc = 0x2a57f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2a57f4: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x2a57f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a57f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a57f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a57fc: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2a57fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a5800: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2a5800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a5804: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x2a5804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2a5808: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2a5808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a580c: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x2a580cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2a5810: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x2a5810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a5814: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x2a5814u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2a5818: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x2a5818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a581c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a581cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a5820: 0x8fac0240  lw          $t4, 0x240($sp)
    ctx->pc = 0x2a5820u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2a5824: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2a5824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a5828: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x2a5828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2a582c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x2a582cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a5830: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2a5830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5834: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2a5834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a5838: 0xc4f90000  lwc1        $f25, 0x0($a3)
    ctx->pc = 0x2a5838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2a583c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a583cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a5840: 0xc4da0000  lwc1        $f26, 0x0($a2)
    ctx->pc = 0x2a5840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2a5844: 0xc4950000  lwc1        $f21, 0x0($a0)
    ctx->pc = 0x2a5844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a5848: 0xc4760000  lwc1        $f22, 0x0($v1)
    ctx->pc = 0x2a5848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a584c: 0x11800035  beqz        $t4, . + 4 + (0x35 << 2)
    ctx->pc = 0x2A584Cu;
    {
        const bool branch_taken_0x2a584c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A584Cu;
        // 0x2a5850: 0xc45d0000  lwc1        $f29, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a584c) {
            ctx->pc = 0x2A5924u;
            goto label_2a5924;
        }
    }
    ctx->pc = 0x2A5854u;
    // 0x2a5854: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a5854u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a5858: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x2a5858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2a585c: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x2a585cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0));
    // 0x2a5860: 0x56400027  bnel        $s2, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x2A5860u;
    {
        const bool branch_taken_0x2a5860 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5860) {
            ctx->pc = 0x2A5864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5860u;
            // 0x2a5864: 0x4617a001  sub.s       $f0, $f20, $f23 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5900u;
            goto label_2a5900;
        }
    }
    ctx->pc = 0x2A5868u;
    // 0x2a5868: 0xc7808fb0  lwc1        $f0, -0x7050($gp)
    ctx->pc = 0x2a5868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a586c: 0x46170036  c.le.s      $f0, $f23
    ctx->pc = 0x2a586cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5870: 0x0  nop
    ctx->pc = 0x2a5870u;
    // NOP
    // 0x2a5874: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5874u;
    {
        const bool branch_taken_0x2a5874 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5874) {
            ctx->pc = 0x2A5878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5874u;
            // 0x2a5878: 0x4618d801  sub.s       $f0, $f27, $f24 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[27], ctx->f[24]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5884u;
            goto label_2a5884;
        }
    }
    ctx->pc = 0x2A587Cu;
    // 0x2a587c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2A587Cu;
    {
        const bool branch_taken_0x2a587c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A587Cu;
        // 0x2a5880: 0xafb70228  sw          $s7, 0x228($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a587c) {
            ctx->pc = 0x2A58FCu;
            goto label_2a58fc;
        }
    }
    ctx->pc = 0x2A5884u;
label_2a5884:
    // 0x2a5884: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2a5884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2a5888: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2a5888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a588c: 0x4617b840  add.s       $f1, $f23, $f23
    ctx->pc = 0x2a588cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
    // 0x2a5890: 0xe7978fb0  swc1        $f23, -0x7050($gp)
    ctx->pc = 0x2a5890u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938544), bits); }
    // 0x2a5894: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a5894u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2a5898: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2a5898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2a589c: 0x461e0dc2  mul.s       $f23, $f1, $f30
    ctx->pc = 0x2a589cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[30]);
    // 0x2a58a0: 0x46170003  div.s       $f0, $f0, $f23
    ctx->pc = 0x2a58a0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[23]);
    // 0x2a58a4: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A58A4u;
    {
        const bool branch_taken_0x2a58a4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2A58A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A58A4u;
        // 0x2a58a8: 0x461f0000  add.s       $f0, $f0, $f31 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[31]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a58a4) {
            ctx->pc = 0x2A58BCu;
            goto label_2a58bc;
        }
    }
    ctx->pc = 0x2A58ACu;
    // 0x2a58ac: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2a58acu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a58b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a58b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a58b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A58B4u;
    {
        const bool branch_taken_0x2a58b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a58b4) {
            ctx->pc = 0x2A58D4u;
            goto label_2a58d4;
        }
    }
    ctx->pc = 0x2A58BCu;
label_2a58bc:
    // 0x2a58bc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2a58bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2a58c0: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2a58c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2a58c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a58c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a58c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a58c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a58cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a58ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a58d0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a58d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a58d4:
    // 0x2a58d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a58d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a58d8: 0x0  nop
    ctx->pc = 0x2a58d8u;
    // NOP
    // 0x2a58dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2A58DCu;
    {
        const bool branch_taken_0x2a58dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A58E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A58DCu;
        // 0x2a58e0: 0x4600a6c6  mov.s       $f27, $f20 (Delay Slot)
        ctx->f[27] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a58dc) {
            ctx->pc = 0x2A58F8u;
            goto label_2a58f8;
        }
    }
    ctx->pc = 0x2A58E4u;
    // 0x2a58e4: 0x4602e302  mul.s       $f12, $f28, $f2
    ctx->pc = 0x2a58e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[28], ctx->f[2]);
    // 0x2a58e8: 0x46176303  div.s       $f12, $f12, $f23
    ctx->pc = 0x2a58e8u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[23]);
    // 0x2a58ec: 0xc07e022  jal         func_1F8088
    ctx->pc = 0x2A58ECu;
    SET_GPR_U32(ctx, 31, 0x2A58F4u);
    ctx->pc = 0x1F8088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8088u, 0x2A58ECu, 0x2A58F4u)) {
        return;
    }
    ctx->pc = 0x2A58F4u;
label_2a58f4:
    // 0x2a58f4: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x2a58f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a58f8:
    // 0x2a58f8: 0x4600a606  mov.s       $f24, $f20
    ctx->pc = 0x2a58f8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[20]);
label_2a58fc:
    // 0x2a58fc: 0x4617a001  sub.s       $f0, $f20, $f23
    ctx->pc = 0x2a58fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[23]);
label_2a5900:
    // 0x2a5900: 0x4614d834  c.lt.s      $f27, $f20
    ctx->pc = 0x2a5900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[27], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5904: 0x461e0002  mul.s       $f0, $f0, $f30
    ctx->pc = 0x2a5904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[30]);
    // 0x2a5908: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A5908u;
    {
        const bool branch_taken_0x2a5908 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5908u;
        // 0x2a590c: 0x4600bdc0  add.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5908) {
            ctx->pc = 0x2A5914u;
            goto label_2a5914;
        }
    }
    ctx->pc = 0x2A5910u;
    // 0x2a5910: 0x4600a6c6  mov.s       $f27, $f20
    ctx->pc = 0x2a5910u;
    ctx->f[27] = FPU_MOV_S(ctx->f[20]);
label_2a5914:
    // 0x2a5914: 0x4618a034  c.lt.s      $f20, $f24
    ctx->pc = 0x2a5914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5918: 0x0  nop
    ctx->pc = 0x2a5918u;
    // NOP
    // 0x2a591c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A591Cu;
    {
        const bool branch_taken_0x2a591c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a591c) {
            ctx->pc = 0x2A5920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A591Cu;
            // 0x2a5920: 0x4600a606  mov.s       $f24, $f20 (Delay Slot)
            ctx->f[24] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5924u;
            goto label_2a5924;
        }
    }
    ctx->pc = 0x2A5924u;
label_2a5924:
    // 0x2a5924: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2a5924u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2a5928: 0x2be102a  slt         $v0, $s5, $fp
    ctx->pc = 0x2a5928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x2a592c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A592Cu;
    {
        const bool branch_taken_0x2a592c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A592Cu;
        // 0x2a5930: 0x8fa20228  lw          $v0, 0x228($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a592c) {
            ctx->pc = 0x2A593Cu;
            goto label_2a593c;
        }
    }
    ctx->pc = 0x2A5934u;
    // 0x2a5934: 0x5457ff58  bnel        $v0, $s7, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x2A5934u;
    {
        const bool branch_taken_0x2a5934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x2a5934) {
            ctx->pc = 0x2A5938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5934u;
            // 0x2a5938: 0x4619d501  sub.s       $f20, $f26, $f25 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[26], ctx->f[25]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5698;
        }
    }
    ctx->pc = 0x2A593Cu;
label_2a593c:
    // 0x2a593c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2a593cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a5940: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x2a5940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2a5944: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x2a5944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x2a5948: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x2a5948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2a594c: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x2a594cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a5950: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x2a5950u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2a5954: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x2a5954u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2a5958: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x2a5958u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2a595c: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x2a595cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2a5960: 0x7bb70120  lq          $s7, 0x120($sp)
    ctx->pc = 0x2a5960u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2a5964: 0x7bbe0110  lq          $fp, 0x110($sp)
    ctx->pc = 0x2a5964u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2a5968: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x2a5968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2a596c: 0xc7bf01f8  lwc1        $f31, 0x1F8($sp)
    ctx->pc = 0x2a596cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x2a5970: 0xc7be01f0  lwc1        $f30, 0x1F0($sp)
    ctx->pc = 0x2a5970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x2a5974: 0xc7bd01e8  lwc1        $f29, 0x1E8($sp)
    ctx->pc = 0x2a5974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2a5978: 0xc7bc01e0  lwc1        $f28, 0x1E0($sp)
    ctx->pc = 0x2a5978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2a597c: 0xc7bb01d8  lwc1        $f27, 0x1D8($sp)
    ctx->pc = 0x2a597cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2a5980: 0xc7ba01d0  lwc1        $f26, 0x1D0($sp)
    ctx->pc = 0x2a5980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2a5984: 0xc7b901c8  lwc1        $f25, 0x1C8($sp)
    ctx->pc = 0x2a5984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2a5988: 0xc7b801c0  lwc1        $f24, 0x1C0($sp)
    ctx->pc = 0x2a5988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2a598c: 0xc7b701b8  lwc1        $f23, 0x1B8($sp)
    ctx->pc = 0x2a598cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a5990: 0xc7b601b0  lwc1        $f22, 0x1B0($sp)
    ctx->pc = 0x2a5990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a5994: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x2a5994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a5998: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x2a5998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a599c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A599Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A59A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A599Cu;
        // 0x2a59a0: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A599Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A59A4u;
    // 0x2a59a4: 0x0  nop
    ctx->pc = 0x2a59a4u;
    // NOP
    ctx->pc = 0x2a59a8u;
}
