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

// Function: sub_002B15A0
// Address: 0x2b15a0 - 0x2b1820
void sub_002B15A0_0x2b15a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B15A0_0x2b15a0");
#endif

    switch (ctx->pc) {
        case 0x2b16c8u: goto label_2b16c8;
        case 0x2b1710u: goto label_2b1710;
        case 0x2b17d4u: goto label_2b17d4;
        default: break;
    }

    ctx->pc = 0x2b15a0u;

    // 0x2b15a0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2b15a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2b15a4: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x2b15a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x2b15a8: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x2b15a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2b15ac: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x2b15acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x2b15b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b15b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b15b4: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x2b15b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x2b15b8: 0x261300c4  addiu       $s3, $s0, 0xC4
    ctx->pc = 0x2b15b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x2b15bc: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x2b15bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x2b15c0: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x2b15c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x2b15c4: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x2b15c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x2b15c8: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x2b15c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x2b15cc: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x2b15ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x2b15d0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2b15d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2b15d4: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x2b15d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2b15d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b15d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b15dc: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x2b15dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b15e0: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x2b15e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x2b15e4: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x2b15e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b15e8: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x2b15e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b15ec: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x2b15ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b15f0: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x2b15f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b15f4: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x2b15f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x2b15f8: 0x6a2a000f  ldl         $t2, 0xF($s1)
    ctx->pc = 0x2b15f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2b15fc: 0x6e2a0008  ldr         $t2, 0x8($s1)
    ctx->pc = 0x2b15fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2b1600: 0xb3aa002f  sdl         $t2, 0x2F($sp)
    ctx->pc = 0x2b1600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b1604: 0xb7aa0028  sdr         $t2, 0x28($sp)
    ctx->pc = 0x2b1604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b1608: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x2b1608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x2b160c: 0x6a240017  ldl         $a0, 0x17($s1)
    ctx->pc = 0x2b160cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2b1610: 0x6e240010  ldr         $a0, 0x10($s1)
    ctx->pc = 0x2b1610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2b1614: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x2b1614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b1618: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x2b1618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b161c: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x2b161cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x2b1620: 0x6a2b0047  ldl         $t3, 0x47($s1)
    ctx->pc = 0x2b1620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2b1624: 0x6e2b0040  ldr         $t3, 0x40($s1)
    ctx->pc = 0x2b1624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2b1628: 0xb3ab0067  sdl         $t3, 0x67($sp)
    ctx->pc = 0x2b1628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b162c: 0xb7ab0060  sdr         $t3, 0x60($sp)
    ctx->pc = 0x2b162cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b1630: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x2b1630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x2b1634: 0x6a250057  ldl         $a1, 0x57($s1)
    ctx->pc = 0x2b1634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2b1638: 0x6e250050  ldr         $a1, 0x50($s1)
    ctx->pc = 0x2b1638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2b163c: 0xb3a50077  sdl         $a1, 0x77($sp)
    ctx->pc = 0x2b163cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b1640: 0xb7a50070  sdr         $a1, 0x70($sp)
    ctx->pc = 0x2b1640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b1644: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x2b1644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x2b1648: 0x6a38001f  ldl         $t8, 0x1F($s1)
    ctx->pc = 0x2b1648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
    // 0x2b164c: 0x6e380018  ldr         $t8, 0x18($s1)
    ctx->pc = 0x2b164cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem >> shift)); }
    // 0x2b1650: 0xb3b8003f  sdl         $t8, 0x3F($sp)
    ctx->pc = 0x2b1650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 24); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b1654: 0xb7b80038  sdr         $t8, 0x38($sp)
    ctx->pc = 0x2b1654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 24); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b1658: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x2b1658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x2b165c: 0x6a260027  ldl         $a2, 0x27($s1)
    ctx->pc = 0x2b165cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2b1660: 0x6e260020  ldr         $a2, 0x20($s1)
    ctx->pc = 0x2b1660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2b1664: 0xb3a60047  sdl         $a2, 0x47($sp)
    ctx->pc = 0x2b1664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b1668: 0xb7a60040  sdr         $a2, 0x40($sp)
    ctx->pc = 0x2b1668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b166c: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x2b166cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x2b1670: 0x6a22002f  ldl         $v0, 0x2F($s1)
    ctx->pc = 0x2b1670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b1674: 0x6e220028  ldr         $v0, 0x28($s1)
    ctx->pc = 0x2b1674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b1678: 0xb3a2004f  sdl         $v0, 0x4F($sp)
    ctx->pc = 0x2b1678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b167c: 0xb7a20048  sdr         $v0, 0x48($sp)
    ctx->pc = 0x2b167cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b1680: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x2b1680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x2b1684: 0x6a2a0037  ldl         $t2, 0x37($s1)
    ctx->pc = 0x2b1684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2b1688: 0x6e2a0030  ldr         $t2, 0x30($s1)
    ctx->pc = 0x2b1688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2b168c: 0xb3aa0057  sdl         $t2, 0x57($sp)
    ctx->pc = 0x2b168cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b1690: 0xb7aa0050  sdr         $t2, 0x50($sp)
    ctx->pc = 0x2b1690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b1694: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x2b1694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x2b1698: 0x6a24004f  ldl         $a0, 0x4F($s1)
    ctx->pc = 0x2b1698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2b169c: 0x6e240048  ldr         $a0, 0x48($s1)
    ctx->pc = 0x2b169cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2b16a0: 0xb3a4006f  sdl         $a0, 0x6F($sp)
    ctx->pc = 0x2b16a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b16a4: 0xb7a40068  sdr         $a0, 0x68($sp)
    ctx->pc = 0x2b16a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b16a8: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x2b16a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x2b16ac: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2b16acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2b16b0: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2B16B0u;
    {
        const bool branch_taken_0x2b16b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B16B0u;
        // 0x2b16b4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b16b0) {
            ctx->pc = 0x2B17F0u;
            goto label_2b17f0;
        }
    }
    ctx->pc = 0x2B16B8u;
    // 0x2b16b8: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x2b16b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b16bc: 0x26160408  addiu       $s6, $s0, 0x408
    ctx->pc = 0x2b16bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1032));
    // 0x2b16c0: 0x24170028  addiu       $s7, $zero, 0x28
    ctx->pc = 0x2b16c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b16c4: 0x8e680004  lw          $t0, 0x4($s3)
    ctx->pc = 0x2b16c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2b16c8:
    // 0x2b16c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b16c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b16cc: 0x1288001b  beq         $s4, $t0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B16CCu;
    {
        const bool branch_taken_0x2b16cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B16D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B16CCu;
        // 0x2b16d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b16cc) {
            ctx->pc = 0x2B173Cu;
            goto label_2b173c;
        }
    }
    ctx->pc = 0x2B16D4u;
    // 0x2b16d4: 0x2951818  mult        $v1, $s4, $s5
    ctx->pc = 0x2b16d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b16d8: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2b16d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2b16dc: 0x8e060048  lw          $a2, 0x48($s0)
    ctx->pc = 0x2b16dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2b16e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b16e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b16e4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2b16e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2b16e8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2b16e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b16ec: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B16ECu;
    {
        const bool branch_taken_0x2b16ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B16F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B16ECu;
        // 0x2b16f0: 0x2970018  mult        $zero, $s4, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b16ec) {
            ctx->pc = 0x2B173Cu;
            goto label_2b173c;
        }
    }
    ctx->pc = 0x2B16F4u;
    // 0x2b16f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2b16f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b16f8: 0x1012  mflo        $v0
    ctx->pc = 0x2b16f8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2b16fc: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x2b16fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x2b1700: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2b1700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b1704: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2b1704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1708: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b1708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b170c: 0x0  nop
    ctx->pc = 0x2b170cu;
    // NOP
label_2b1710:
    // 0x2b1710: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x2b1710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x2b1714: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b1714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b1718: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x2b1718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x2b171c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2b171cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2b1720: 0x10a80006  beq         $a1, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1720u;
    {
        const bool branch_taken_0x2b1720 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1720u;
        // 0x2b1724: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1720) {
            ctx->pc = 0x2B173Cu;
            goto label_2b173c;
        }
    }
    ctx->pc = 0x2B1728u;
    // 0x2b1728: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b1728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b172c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2b172cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2b1730: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2b1730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b1734: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B1734u;
    {
        const bool branch_taken_0x2b1734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1734) {
            ctx->pc = 0x2B1738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1734u;
            // 0x2b1738: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b1710;
        }
    }
    ctx->pc = 0x2B173Cu;
label_2b173c:
    // 0x2b173c: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x2B173Cu;
    {
        const bool branch_taken_0x2b173c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B173Cu;
        // 0x2b1740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b173c) {
            ctx->pc = 0x2B17F4u;
            goto label_2b17f4;
        }
    }
    ctx->pc = 0x2B1744u;
    // 0x2b1744: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2b1744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b1748: 0x2957818  mult        $t7, $s4, $s5
    ctx->pc = 0x2b1748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x2b174c: 0xafb20094  sw          $s2, 0x94($sp)
    ctx->pc = 0x2b174cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 18));
    // 0x2b1750: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2b1750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b1754: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x2b1754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x2b1758: 0x2605009c  addiu       $a1, $s0, 0x9C
    ctx->pc = 0x2b1758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x2b175c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2b175cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2b1760: 0x26060168  addiu       $a2, $s0, 0x168
    ctx->pc = 0x2b1760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 360));
    // 0x2b1764: 0x8e2a005c  lw          $t2, 0x5C($s1)
    ctx->pc = 0x2b1764u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2b1768: 0x260700fc  addiu       $a3, $s0, 0xFC
    ctx->pc = 0x2b1768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
    // 0x2b176c: 0x8c4e0000  lw          $t6, 0x0($v0)
    ctx->pc = 0x2b176cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b1770: 0x260802c4  addiu       $t0, $s0, 0x2C4
    ctx->pc = 0x2b1770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 708));
    // 0x2b1774: 0x8e2c0058  lw          $t4, 0x58($s1)
    ctx->pc = 0x2b1774u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2b1778: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x2b1778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2b177c: 0x8e2d0060  lw          $t5, 0x60($s1)
    ctx->pc = 0x2b177cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2b1780: 0x26090364  addiu       $t1, $s0, 0x364
    ctx->pc = 0x2b1780u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 868));
    // 0x2b1784: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2b1784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x2b1788: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x2b1788u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2b178c: 0x1aa6823  subu        $t5, $t5, $t2
    ctx->pc = 0x2b178cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x2b1790: 0x292a021  addu        $s4, $s4, $s2
    ctx->pc = 0x2b1790u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x2b1794: 0x8e030404  lw          $v1, 0x404($s0)
    ctx->pc = 0x2b1794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x2b1798: 0x6a0200fb  ldl         $v0, 0xFB($s0)
    ctx->pc = 0x2b1798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 251); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b179c: 0x6e0200f4  ldr         $v0, 0xF4($s0)
    ctx->pc = 0x2b179cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 244); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b17a0: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x2b17a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b17a4: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x2b17a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b17a8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2b17a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2b17ac: 0x260a00a8  addiu       $t2, $s0, 0xA8
    ctx->pc = 0x2b17acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    // 0x2b17b0: 0x27ab0090  addiu       $t3, $sp, 0x90
    ctx->pc = 0x2b17b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2b17b4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2b17b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2b17b8: 0xafb60018  sw          $s6, 0x18($sp)
    ctx->pc = 0x2b17b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 22));
    // 0x2b17bc: 0xafac0078  sw          $t4, 0x78($sp)
    ctx->pc = 0x2b17bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 12));
    // 0x2b17c0: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x2b17c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2b17c4: 0xc5cc000c  lwc1        $f12, 0xC($t6)
    ctx->pc = 0x2b17c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b17c8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2b17c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2b17cc: 0xc0ac1fc  jal         func_2B07F0
    ctx->pc = 0x2B17CCu;
    SET_GPR_U32(ctx, 31, 0x2B17D4u);
    ctx->pc = 0x2B17D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B17CCu;
    // 0x2b17d0: 0xafad0080  sw          $t5, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B07F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B07F0u, 0x2B17CCu, 0x2B17D4u)) {
        return;
    }
    ctx->pc = 0x2B17D4u;
label_2b17d4:
    // 0x2b17d4: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x2b17d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2b17d8: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x2b17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2b17dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b17dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b17e0: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x2b17e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    // 0x2b17e4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2b17e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2b17e8: 0x5683ffb7  bnel        $s4, $v1, . + 4 + (-0x49 << 2)
    ctx->pc = 0x2B17E8u;
    {
        const bool branch_taken_0x2b17e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b17e8) {
            ctx->pc = 0x2B17ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B17E8u;
            // 0x2b17ec: 0x8e680004  lw          $t0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B16C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b16c8;
        }
    }
    ctx->pc = 0x2B17F0u;
label_2b17f0:
    // 0x2b17f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b17f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b17f4:
    // 0x2b17f4: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x2b17f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2b17f8: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x2b17f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2b17fc: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x2b17fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b1800: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x2b1800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b1804: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x2b1804u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2b1808: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x2b1808u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b180c: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x2b180cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b1810: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x2b1810u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b1814: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2b1814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2b1818: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1818u;
        // 0x2b181c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1820u;
}
